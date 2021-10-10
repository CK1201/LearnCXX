#include "lib7_2.hpp"
#include<iostream>
#include<array>

void input_scores(std::array<double,10> *scores){
    for (int i = 0; i < 10;i++){
        std::cin >> (*scores)[i];
        if ((*scores)[i]<0)
        {
            break;
        }
    }
}


void show_scores(const std::array<double,10> scores){
    for (int i = 0; i < 10;i++){
        if(scores[i]<0){
            break;
        }
        std::cout << scores[i] << "\t";
    }
}