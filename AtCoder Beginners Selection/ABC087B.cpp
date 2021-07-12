#include <iostream>
using namespace std;

int main(void)
{

	int a,b,c,x;
    int answer = 0;

	cin >> a >> b >> c >> x;

    for(int i = 0; i < a + 1; i++){
        for(int j = 0; j < b + 1; j++){
            for(int k = 0; k < c + 1; k++){
                if((500 * i + 100 * j + 50 * k) == x){
                    answer++;
                }
            }
        }
    }

    cout << answer << endl;

	return 0;
}
