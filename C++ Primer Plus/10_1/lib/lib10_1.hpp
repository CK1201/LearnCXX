#ifndef LIB10_1_H_
#define LIB10_1_H_

#include <string>
#include <iostream>



class Bank_account{
    private:
        std::string m_name;
        std::string m_account;
        double m_money;
    public:
        Bank_account();
        Bank_account(std::string name = "NULL", std::string account = "NULL", double money = 0);
        ~Bank_account();
        void show();
        void save_money(double);
        void withdraw_money(double);
};

#endif