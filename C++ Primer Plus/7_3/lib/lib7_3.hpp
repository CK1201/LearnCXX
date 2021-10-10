#ifndef LIB7_3_H_
#define LIB7_3_H_

#include<iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box(const box);
void set_volume(box *);
void use_two_fun(box *);

#endif