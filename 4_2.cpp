#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    string dessert;
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favourite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << " for you," << name << endl;
}