#ifndef STACK_H_
#define STACK_H_

#include<iostream>

typedef double Item;

class Stack{
    private:
        static const int LIMIT = 50;
        Item m_stack[LIMIT];
        int top;
        bool isempty();
        bool isfull();
    public:
        Stack();
        bool push(const Item &item);
        bool pop(Item &item);
        void show();
};

#endif