//Banking.h
//namespace Banking {
//
//    void showMessage();
//    int interestRate();
//    void bankingMain();
//}

namespace Banking {

    namespace Accounts {
        void accountInfo();
        void deposit();
    }

  /*  namespace Loans {
        void loanInfo();
    }*/

    namespace Utility {
        void showMessage();
        int interestRate();
    }

    void bankingMain();

}