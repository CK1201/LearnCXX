#include "../lib/stack.hpp"

int main(){
    using std::cout;
    using std::endl;
    Stack stack1 = Stack();
    stack1.push(123);
    stack1.push(456);
    stack1.push(789);
    stack1.push(1011);
    stack1.show();
    cout << endl;

    Item a;
    stack1.pop(a);
    std::cout << a << endl
              << endl;

    stack1.show();
}