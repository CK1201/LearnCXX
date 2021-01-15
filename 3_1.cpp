#include<iostream>
using namespace std;
int main() {
	double gas;
	cout << "����ÿ100km�ͺģ�__\b\b";
	cin >> gas;
	double mile = 100 / (gas / 3.785) * 100 / 62.14;
	cout << "ÿ������ʻ" << mile << "Ӣ��" << endl;
}