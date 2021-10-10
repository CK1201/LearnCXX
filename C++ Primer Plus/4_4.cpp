#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int energy;
};

int main(){
    CandyBar snack;
    snack.brand = "Mocha Munch";
    snack.weight = 2.3;
    snack.energy = 350;
    cout << "brand:" << snack.brand << endl;
    cout << "weight" << snack.weight << endl;
    cout << "energy" << snack.energy << endl << endl;

    CandyBar candybar[3];
    for (int i = 0; i < 3;i++){
        (candybar+i)->brand = "Mocha Munch";
        (candybar+i)->weight = 2.3;
        (candybar+i)->energy = 350;
        cout << "brand" << i << ":" << (candybar+i)->brand << endl;
        cout << "weight" << i << ":" << (candybar+i)->weight << endl;
        cout << "energy" << i << ":" << (candybar+i)->energy << endl << endl;
    }
}