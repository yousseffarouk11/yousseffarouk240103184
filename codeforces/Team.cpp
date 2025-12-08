#include <iostream>
using namespace std;

int main() {




      int n;
    cin >> n; // عدد المسائل
    int count = 0; // عشان نحسب عدد المسائل اللي هيتحلّوا

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t; // آراء الأصدقاء الثلاثة

        // لو مجموعهم 2 أو 3 يبقى على الأقل اتنين متأكدين
        if (p + v + t >= 2) {
            count++;
        }
    }

    
    
    cout << count; // نطبع عدد المسائل اللي هيحلّوها

}