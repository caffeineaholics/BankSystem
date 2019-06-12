#include <iostream>
#include "../include/BankSystem/Account.hpp"

Account::Account() //Constructor for initializing values
{
    this->holderName = "John Doe";
    this->accountNum = "123456789";
    this->balance = 0;
}

Account::~Account() //Destructor to free memory when required
{
}

std::string Account::getHolderName()
{
    return (this->holderName);
}

std::string Account::getAccountNum()
{
    return (this->accountNum);
}

void Account::displayBalance()
{
    std::cout << "The current balance is " << this->balance << ".\n";
}

double Account::getBalance()
{
    return (this->balance);
}

void Account::withdraw(double sum) //Withdraw a certain amount from the balance
{
    if (this->balance - sum > 0)
    {
        this->balance -= sum;
        std::cout << sum << " withdrawn from the account.\n";
        this->displayBalance();
    }
    else
    {
        std::cout << "Insufficient balance in the account!\n";
    }
}

void Account::deposit(double sum) //Deposit a certain amount to the balance
{
    this->balance += sum;
    std::cout << sum << " deposited to the account.\n";
    this->displayBalance();
}