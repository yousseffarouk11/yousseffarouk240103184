#include <iostream>
using namespace std;

int main() {
//     int w;
//     cin >> w;

//    
//     if (w % 2 == 0 && w > 2)
//         cout << "YES";
//     else
//         cout << "NO";











    // int n;
    // cin >> n; // قراءة عدد الكلمات

    // while (n--) {
    //     string word;
    //     cin >> word;

    //     int len = word.length();

    //     // لو الكلمة أطول من 10
    //     if (len > 10) {
    //         cout << word[0] << len - 2 << word[len - 1] << endl;
    //     } else {
    //         cout << word << endl;
    //     }
    // }











      int n;
    cin >> n; 
    int count = 0; // عشان نحسب عدد المسائل اللي هيتحلّوا

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t; 

        
        if (p + v + t >= 2) {
            count++;
        }
    }

    
    
    cout << count; 













    int n, x = 0;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s[0] == '+' || s[1] == '+') // أي مكان فيه + نزود
            x++;
        else
            x--; 
    }

    cout << x;
    return 0;







}
