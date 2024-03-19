#include <iostream>
using namespace std;

int main(void)
{

    int input_n = 0;
    int result = 0;

    cin >> input_n;

    for(int i = 1; i <= input_n; i++){
        result += i;
    }

    cout << result << endl;

	return 0;
}
