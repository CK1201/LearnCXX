#include "lib10_1.hpp"
Bank_account::Bank_account(){
    m_name = "NULL";
    m_account = "NULL";
    m_money = 0;
}

Bank_account::Bank_account(std::string name, std::string account, double money){
    m_name = name;
    m_account = account;
    m_money = money;
}

Bank_account::~Bank_account(){}

void Bank_account::show(){
    using std::cout;
    using std::endl;
    cout << "name:" << m_name << endl;
    cout << "account:" << m_account << endl;
    cout << "money you have:" << m_money << endl
         << endl;
}
void Bank_account::save_money(double money){
    m_money += money;
    std::cout << "money you have:" << m_money << std::endl;
}
void Bank_account::withdraw_money(double money){
    if(money>m_money){
        std::cout << "You don't have that much money." << std::endl;
    }else
    {
        m_money -= money;
        std::cout << "money you have:" << m_money << std::endl;
    }
}