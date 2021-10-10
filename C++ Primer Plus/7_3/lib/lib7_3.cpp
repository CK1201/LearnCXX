#include "lib7_3.hpp"

void show_box(const box box_num){
    std::cout << "maker:" << box_num.maker << std::endl;
    std::cout << "height:" << box_num.height << std::endl;
    std::cout << "width:" << box_num.width << std::endl;
    std::cout << "length:" << box_num.length << std::endl;
    std::cout << "volume:" << box_num.volume << std::endl << std::endl;
}

void set_volume(box* box_num){
    box_num->volume = box_num->height * box_num->width * box_num->length;
}

void use_two_fun(box* box_num){
    set_volume(box_num);
    show_box(*box_num);
}