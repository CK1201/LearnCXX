#include<iostream>
#include<array>
using namespace std;
int main(){

    array<long double, 101> factorials;
    factorials[0] = 1;
    cout << 0 << "!= " << factorials[0] << endl;
    for (int i = 1; i <= 100; i++){
        factorials[i] = i * factorials[i - 1];
        cout << i << "!= " << factorials[i] << endl;
    }
}