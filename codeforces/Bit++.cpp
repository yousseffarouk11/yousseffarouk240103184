#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        // أي مكان فيه '+' يبقى ++ د
        if (s[0] == '+' || s[1] == '+')
            x++;
        else
            x--; 
    }

    cout << x;
    return 0;
}
