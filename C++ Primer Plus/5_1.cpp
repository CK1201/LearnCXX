#include<iostream>
using namespace std;
int main()
{
    int num_small, num_big;
    long long num_sum = 0;
    cin >> num_small;
    cin >> num_big;
    for (int i = num_small; i <= num_big;i++){
        num_sum += i;
    }
    cout << num_sum << endl;
}