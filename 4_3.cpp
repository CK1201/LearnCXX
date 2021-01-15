#include<iostream>
#include<string>
using namespace std;
int main(){
    string first_name, last_name, name;
    getline(cin, first_name);
    getline(cin, last_name);
    name = last_name + " " + first_name;
    cout << name << endl;
}