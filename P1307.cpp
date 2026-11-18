/**
 * 注意一些边界条件：
 * 1.反转之后前导零的情况
 * 2.“0” 这种情况
 */

# include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();

    if (s[0] == '-') {
        cout << "-";
        int flag = 0;
        for (int i = len-1; i > 0; i--) {
            if (s[i] != '0') {
                flag = 1;
            }
            if (flag) cout << s[i];
        }
    }
    else {
        int flag = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] != '0') {
                flag = 1;
            }
            if (flag) cout << s[i];
            if (i == 0 && flag == 0) cout << s[i];
        }
    } 

    return 0;

}