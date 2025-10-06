#include <iostream>

class BankAccount{
public:

    BankAccount(int acc_num) : account_number(acc_num) {
        total_accounts++;
    }

    ~BankAccount(){ //destructor happens whenever an object is deleted
        total_accounts--;
    }


    static int getTotalAccounts(){
        return total_accounts;
    }


    

private:
static int total_accounts;
int account_number;
};

int BankAccount::total_accounts = 0;

int main(){
    std::cout << BankAccount::getTotalAccounts() << std::endl;

    for(int i = 0; i < 10; i++){ //without the destructor in the class, this messes up the count because objects are created but only in the loop
        BankAccount ba(123);
    }

    BankAccount ba(123);
    std::cout << BankAccount::getTotalAccounts() << std::endl;
    return 0;
}