#include<iostream>
#include<string>
#include<array>
using namespace std;
const string MONTH[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int main()
{
    array<int, 12> sales;
    for (int i = 0; i < 12; i++){
        cout << MONTH[i] << ":\t";
        cin >> sales[i];
    }
    for (int i = 0; i < 12; i++)
        cout << sales[i] << "\t";
}