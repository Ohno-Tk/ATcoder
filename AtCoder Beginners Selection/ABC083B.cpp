#include <iostream>
using namespace std;

int main(void)
{

    int a, b, n;
    int answer = 0;

    cin >> n >> a >> b;

    for(int i = a; i <= n; i++){

        int sum = 0;
        int num = i;

        // 各桁の和計算
        while(num){
            sum += num % 10;
            num /= 10;
        }

        if(a <= sum && sum <= b){
            answer += i;
        }

    }

    cout << answer << endl;

	return 0;
}
