#include<iostream>
#include<map>


struct CmpByKeyLength {  
  bool operator()(const int& k1, const int& k2) {  
    return k1 > k2;  
  }  
};

void showMap(std::map<int,int,CmpByKeyLength> &m){
    for (std::map<int, int>::iterator it = m.begin(); it != m.end();it++)
        std::cout << it->first << "\t" << it->second << std::endl;
    std::cout << "-------over-------" << std::endl;
}

int main(){
    std::map<int, int,CmpByKeyLength> m;
    m.insert(std::pair<int, int>(1, 10));
    m.insert(std::make_pair(3, 30));
    m[4] = 40;
    m.insert(std::map<int, int>::value_type(2, 20));
    m[5];
    showMap(m);

    std::map<int, int>::iterator pos = m.find(3);
    if (pos != m.end())
        std::cout << "find value:" << pos->second << std::endl;
    else
        std::cout << "find nothing" << std::endl;
    
    

    m.erase(m.begin());
    m.erase(3);
    showMap(m);

    pos = m.find(3);
    if (pos != m.end())
        std::cout << "find value:" << pos->second << std::endl;
    else
        std::cout << "find nothing" << std::endl;

    m.clear();
    showMap(m);


}