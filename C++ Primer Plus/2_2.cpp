#include<iostream>
using namespace std;
double C2H(double temperature);
int main() {
	double temp;
	cin >> temp;
	cout << C2H(temp) << endl;
}

double C2H(double temperature) {
	return temperature * 1.8 + 32;
}