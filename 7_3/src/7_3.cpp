#include "../lib/lib7_3.hpp"

int main(){
    box box1 = {"bmw", 1, 2, 3, 0};
    use_two_fun(&box1);

    box box2 = {"benz", 2, 3, 4, 0};
    use_two_fun(&box2);
}