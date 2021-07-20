/*

1時間で完成しなかったため
提出 #24408563を参考

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int counter = 1;
    string s;
    bool flag = true;

    cin >> s;

    // 昇順ソート
    sort(s.begin(), s.end());

    for(int i = 1; i <= (int)(s.size()); i++){

        // 文字比較
        if(s[i - 1] == s[i]){
            counter++;
        }
        else{
            // 英小文字が、奇数回出現
            if(counter % 2 == 1){
                flag = false;
                break;
            }
            else{
                counter = 1;
            }
        }

    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

	return 0;
}
