/*

・問題文
シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 a と b の積が偶数か奇数か判定してください。

・出力
積が奇数なら Odd と、 偶数なら Even と出力せよ。

*/

#include <iostream>
using namespace std;

int main(void)
{

	int a, b;

	cin >> a;
	cin >> b;

	if((a*b) % 2 == 0){
		cout << "Even" << endl;
	}
	else{
		cout << "Odd" << endl;
	}

	return 0;
}
