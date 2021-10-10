#include<iostream>
using namespace std;
int main(){
    double num, num_sum = 0;
    do{
        cin >> num;
        num_sum += num;
        cout << num_sum << endl;
    } while (num != 0);
}