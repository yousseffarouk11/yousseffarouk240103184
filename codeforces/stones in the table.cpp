#include <iostream>
#include <string>
using namespace std;
//s=stone
//n=number of it

int main() {
    int n;
    string s;
    cin >> n >> s;

    int remove = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) {
            remove++;
        }
    }

    cout << remove;
    return 0;
}
