/*

XXX:ATCoderではWAと表示されるため後日原因究明する

・問題文
黒板に N 個の正の整数 A1,...,AN が書かれています．
すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．
黒板に書かれている整数すべてを，2 で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．

・出力
すぬけ君は最大で何回操作を行うことができるかを出力せよ．

*/

#include <iostream>
#include <array>

int main(void)
{

    int inputallnumber;// N
    int operationcount = 0;//操作回数
    std::array<int, 10> inpuintegralnumber;// A1,...,AN

    // N取得
    std::cin >> inputallnumber;

    // N個の整数取得
    for(int i = 0; i < inputallnumber; i++){
        std::cin >> inpuintegralnumber[i];

    }

    bool checkallnoteven = true;// 全て偶数じゃない

    while(checkallnoteven){
        for(int i = 0; i < inputallnumber; i++){

            if(inpuintegralnumber[i] % 2 == 1){
                checkallnoteven = false;
                break;
            }

            inpuintegralnumber[i] = inpuintegralnumber[i] / 2;
        }

        operationcount++;
    }

    std::cout << operationcount-1 << std::endl;

    return 0;
}
