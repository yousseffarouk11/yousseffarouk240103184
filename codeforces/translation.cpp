#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string rev = s;           // ننسخ s
    reverse(rev.begin(), rev.end()); // نعكسها

    if (rev == t)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
