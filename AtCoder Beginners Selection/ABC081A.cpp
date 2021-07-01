/*

・問題文
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 各マスには 0 か 1 が書かれており、
マス i には si が書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。

・出力
答えを出力せよ。

*/

#include <iostream>
using namespace std;

int main(void)
{

	int number_of_squares = 3;
	int answer = 0;
	string input_number;

	cin >> input_number;

	for(int i = 0; i < number_of_squares; i++){

		if(input_number[i] == '1'){
			answer++;
		}

	}

	cout << answer << endl;

	return 0;
}
