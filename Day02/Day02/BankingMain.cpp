//BankingMain.cpp
#include <iostream>
#include "Banking.h"

void bankingMain() {

    Banking::showMessage();
    std::cout << "Interest Rate: "
        << Banking::interestRate() << "%" << std::endl;

 
}
