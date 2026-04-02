#include <iostream>
using namespace std;
class BankAccount
{

    string accountno;
    string custumername;
    double accountbalance;

    static int TotalAccount;
    static int TotalBalance;

public:
    void CreateAccount(string accno, string cus_name, double balance)
    {

        accountno = accno;
        custumername = cus_name;
        accountbalance = balance;

        TotalAccount++;
        TotalBalance += accountbalance;
    }
    void displayAccount()
    {
        cout << "CustumerName:" << custumername << endl;
        cout << "Account No:" << accountno << endl;
        cout << "AccountBalance:" << accountbalance << endl;
    }

    static void BankReport()
    {
        cout << "\n\n||---==BANK REPORT---==||" << endl;
        cout << "TotalAccount:" << TotalAccount << endl;
        cout << "TotalBalance:" << TotalBalance << endl;
    }
};
int BankAccount ::TotalAccount = 0;
int BankAccount ::TotalBalance = 5000;

int main()
{
    BankAccount b1, b2;

    b1.CreateAccount("7200007685001", "Aryan Prajapati", 10000);
    b2.CreateAccount("7200007685002", "Dhruvil Prajapati", 20000);

    b1.displayAccount();
    b2.displayAccount();

    BankAccount ::BankReport();

    return 0;
}