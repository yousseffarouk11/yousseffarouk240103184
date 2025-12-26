#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string name;
    cin >> name;

    set<char> letters;
    for(char c : name) {
        letters.insert(c);  // عملت setعشان بتبقي  عناصر غير مكرره
    }

    if(letters.size() % 2 == 0)
        cout << "CHAT WITH HER";
    else
        cout << "IGNORE HIM";

    return 0;
}
