/*

・問題文
高橋君はデータの加工が行いたいです。
整数 a,b,cと、文字列 s が与えられます。 a+b+c の計算結果と、文字列 s を並べて表示しなさい。

・出力
a+b+c と s を空白区切りで 1 行に出力せよ。

*/

#include <iostream>
using namespace std;

int main(void)
{

	int a, b, c;
	string s;

	cin >> a;
	cin >> b >> c;
	cin >> s;

	cout << (a + b + c) << " " << s << endl;

	return 0;
}
