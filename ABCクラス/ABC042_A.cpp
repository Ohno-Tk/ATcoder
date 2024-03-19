/*

1時間で完成できなかったため
提出 #24186581を参考、写生

*/

#include <iostream>
using namespace std;

int main(void)
{
    int A,B,C;
    int d = 0;

    cin >> A >> B >> C;

    if(A == 5 && B == 5 && C == 7){
        d = 1;
    }
    else if(A == 5 && B == 7 && C == 5){
        d = 1;
    }
    else if(A == 7 && B == 5 && C == 5){
        d = 1;
    }

    if(d == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

	return 0;
}
