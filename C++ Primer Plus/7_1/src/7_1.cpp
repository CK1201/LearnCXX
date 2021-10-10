#include "../lib/lib7_1.hpp"
#include<iostream>
int main(){
    double num1, num2, res;
    while (1)
    {
        std::cin >> num1;
        std::cin >> num2;
        if(num1==0||num2==0){
            break;
        }
        else
        {
            res = harmonic_mean(num1, num2);
            std::cout << res << std::endl;
        }
    }
    return 0;
}