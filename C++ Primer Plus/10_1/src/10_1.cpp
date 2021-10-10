#include "../lib/lib10_1.hpp"

int main(){
    Bank_account wcj = Bank_account("wcj", "123456", 100000);
    wcj.show();
    wcj.save_money(100);
    // wcj.show();
    wcj.withdraw_money(1000);
}