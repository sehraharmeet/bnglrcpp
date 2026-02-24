//Banking.cpp
#include <iostream>
#include "Banking.h"

//namespace Banking {
//
//    void showMessage() {
//        std::cout << "Welcome to Banking System\n";
//    }
//
//    int interestRate() {
//        return 7;
//    }
//    void bankingMain() {
//        showMessage();
//        std::cout << "Interest Rate: "
//            << interestRate()
//            << "%\n";
//    }
//}

//Banking.cpp
#include <iostream>
#include "Banking.h"
#include "LoanModule.h"
namespace Banking {

    namespace Utility {

        void showMessage() {
            std::cout << "Welcome to Banking System\n";
        }

        int interestRate() {
            return 7;
        }
    }

    namespace Accounts {

        void accountInfo() {
            std::cout << "Account Information Module\n";
        }

        void deposit() {
            std::cout << "Deposit Module\n";
        }
    }

    /* // Dev: Harmeet
    namespace Loans {

        void loanInfo() {
            std::cout << "Loan Module\n";
        }
    }*/

    void bankingMain() {

        Utility::showMessage();

        std::cout << "Interest Rate: "
            << Utility::interestRate()
            << "%\n";

        Accounts::accountInfo();
        Accounts::deposit();
        Loans::loanInfo();
    }

}