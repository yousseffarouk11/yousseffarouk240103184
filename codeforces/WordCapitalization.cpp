#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    word[0] = toupper(word[0]); // حول الحرف الأول لكابيتال مباشرة

    cout << word;
    return 0;
}
