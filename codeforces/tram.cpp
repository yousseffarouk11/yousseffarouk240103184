#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;
    int maxPassengers = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current -= a; // الي بينزلوا
        current += b; //الي بيركبو

        if (current > maxPassengers)
            maxPassengers = current;
    }

    cout << maxPassengers << endl;
    return 0;
}
