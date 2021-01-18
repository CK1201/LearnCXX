#ifndef LIST_H_
#define LIST_H_

#include<iostream>

typedef double Item;

class List{
    private:
        static const int LIMIT = 50;
        Item m_stack[LIMIT];
        int top;
        bool isempty();
        bool isfull();
    public:
        List();
        bool insert(const Item &item, int index);
        bool del(int index);
        bool set(const Item &item, int index);
        bool vist(Item &item);
        void show();
};

#endif