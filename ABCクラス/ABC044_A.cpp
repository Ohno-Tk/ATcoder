#include <iostream>
using namespace std;

int main(void)
{
    int n,k,x,y;
    int hotelprice = 0;

    cin >> n >> k >> x >> y;

    for(int i = 1; i <= n; i++){

        if(i <= k){
            hotelprice += x;
        }
        else{
            hotelprice += y;
        }

    }

    cout << hotelprice << endl;

	return 0;
}
