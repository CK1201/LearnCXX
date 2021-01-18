#include "stack.hpp"

Stack::Stack(){top = 0;}

bool Stack::isempty(){
    return top == 0;
}

bool Stack::isfull(){
    return top == LIMIT;
}

bool Stack::push(const Item &item){
    if(isfull()){
        std::cout << "stack is full";
        return false;
    }
    else{
        m_stack[top++] = item;
        return true;
    }
}

bool Stack::pop(Item &item){
    if(isempty()){
        std::cout << "stack is empty" << std::endl;
        return false;
    }
    else{
        item = m_stack[--top];
        return true;
    }
}

void Stack::show(){
    using std::cout;
    using std::endl;
    if (isempty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        for (int i = top-1; i >= 0;i--){
            cout << m_stack[i] << endl;
        }
    }
}