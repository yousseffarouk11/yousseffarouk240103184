#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            cout << "HARD\n";
            return 0; 
        }
        else{
            cout << "EASY\n";
    return 0;
        }
    }
}
