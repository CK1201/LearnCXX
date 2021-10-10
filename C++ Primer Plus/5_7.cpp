#include<iostream>
#include<string>
using namespace std;
struct car
{
    string brand;
    int year;
};

int main(){
    int num;
    cout << "How many cars?:";
    cin >> num;
    car *car_point = new car[num];
    for (int i = 0; i < num; i++){
        cout << "Car #" << i+1 << ":\n";
        cout << "Enter the make:";
        cin >> (car_point + i)->brand;
        //getline(cin,(car_point+i)->brand);
        cout << "Enter the year made:";
        cin >> (car_point + i)->year;
    }
    cout << "\nHere is the collection:\n";
    for (int i = 0; i < num; i++){
        cout << (car_point + 1)->year << "\t" << (car_point + i)->brand << endl;
    }
}