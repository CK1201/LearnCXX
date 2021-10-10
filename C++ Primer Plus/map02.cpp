#include<iostream>
#include<map>
using namespace std;

void showMap(map<int, pair<int, int>> &m){
    for (map<int, pair<int, int>>::iterator it = m.begin(); it != m.end();it++)
        cout << it->first << "\t" << it->second.first << "," << it->second.second << "\n";
    cout << endl;
}

int main(){
    map<int, pair<int, int>> m;
    m.insert(make_pair(1, make_pair(1, 1)));
    m.insert(make_pair(4, make_pair(4, 4)));
    m.insert(make_pair(2, make_pair(2, 2)));
    m.insert(make_pair(3, make_pair(3, 3)));
    showMap(m);
}