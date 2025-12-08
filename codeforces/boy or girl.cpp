#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string name;
    cin >> name;

    set<char> letters;
    for(char c : name) {
        letters.insert(c);  // نضيف الحروف للمجموعة → تبقى مميزة تلقائيًا
    }

    if(letters.size() % 2 == 0)
        cout << "CHAT WITH HER";
    else
        cout << "IGNORE HIM";

    return 0;
}
