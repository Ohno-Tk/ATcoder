#include <iostream>
using namespace std;

int main(void)
{
    string input_s;
    string output_result;

    cin >> input_s;

    for(int i = 0; i < (int)(input_s.length()); i++){

        if(input_s[i] == '0'){
            output_result.push_back('0');
        }
        else if(input_s[i] == '1'){
            output_result.push_back('1');
        }
        else if(input_s[i] == 'B'){

            if(!output_result.empty()){
                output_result.pop_back();
            }
        }

    }

    cout << output_result << endl;

	return 0;
}
