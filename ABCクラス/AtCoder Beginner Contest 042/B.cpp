#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int L, N;
    string c;
    string answer;

    cin >> N >> L;

    vector<string> S;

    for(int i = 0; i < N; i++){

        cin >> c;
        S.push_back(c);

    }

    //昇順ソート
    sort(S.begin(),S.end());

    //文字連結
    for(int i = 0; i < N; i++){

        answer += S[i];

    }

    cout << answer << endl;

	return 0;
}
