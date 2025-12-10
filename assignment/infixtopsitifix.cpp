#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;
//ستاك الارقام
int numStack[SIZE];
int numTop = -1;

bool numEmpty() {
    return numTop == -1;
}

bool numFull() {
    return numTop == SIZE - 1;
}

void numPush(int x) {
    if (!numFull()) {
        numTop++;
        numStack[numTop] = x;
    }
}

int numPop() {
    if (!numEmpty()) {
        int v = numStack[numTop];
        numTop--;
        return v;
    }
    return -1;
}
// ستاك المعاملات الحسابيه
char opStack[SIZE];
int opTop = -1;

bool opEmpty() {
    return opTop == -1;
}

void opPush(char c) {
    opTop++;
    opStack[opTop] = c;
}

char opPop() {
    char c = opStack[opTop];
    opTop--;
    return c;
}

char opPeek() {
    return opStack[opTop];
}

// أولوية العمليه
int prec(char c) {
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

// Infix toPostfix 
string infixToPostfix(string s) {
    string post = "";

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (isdigit(c)) {
            post += c;
            post += ' ';
        }
        else if (c == '(') {
            opPush(c);
        }
        else if (c == ')') {
            while (!opEmpty() && opPeek() != '(') {
                post += opPop();
                post += ' ';
            }
            opPop();  // remove '('
        }
        else {  // operator
            while (!opEmpty() && prec(opPeek()) >= prec(c)) {
                post += opPop();
                post += ' ';
            }
            opPush(c);
        }
    }

    while (!opEmpty()) {
        post += opPop();
        post += ' ';
    }

    return post;
}

int evaluatePostfix(string p) {
    for (int i = 0; i < p.size(); i++) {
        char c = p[i];

        if (isdigit(c)) {
            numPush(c - '0');
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int b = numPop();
            int a = numPop();

            int r = 0;

            if (c == '+') r = a + b;
            else if (c == '-') r = a - b;
            else if (c == '*') r = a * b;
            else if (c == '/') r = a / b;

            numPush(r);
        }
    }

    return numPop();
}
int main() {
    string infix;

    cout << "Enter infix: ";
    cin >> infix;

    string post = infixToPostfix(infix);

    cout << "Postfix: " << post << endl;

    int ans = evaluatePostfix(post);

    cout << "Result = " << ans << endl;

    return 0;
}