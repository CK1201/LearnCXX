#include<iostream>
#include<array>
using namespace std;
int main(){
    array<double,3> scores;
    cin>>scores[0];
    cin>>scores[1];
    cin>>scores[2];
    double scores_mean = (scores[0] + scores[1] + scores[2]) / 3;
    cout << scores_mean << endl;
}