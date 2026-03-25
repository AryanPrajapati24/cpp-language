#include <iostream>
using namespace std;
// class is a user defined data type which hold onw data member and member function.
// to declare a class using  a class keyword.

class studant
{
    // it is a acceses spicifiers.
private:
    // data member
    int studantid;
    string studantname;
    float persantage;

public:
    // Member function.
    void getdata()
    {
        cout << "Enter a studantid=";
        cin >> studantid;

        cout << "Enter a studantname=";
        cin >> studantname;

        cout << "Enter a persantage=";
        cin >> persantage;
    }

    void printdata()
    {
        cout << "\n\n||-----STUDANT DATA-----||" << endl;
        cout << "studantid:" << studantid << endl;
        cout << "studantname:" << studantname << endl;
        cout << "persantage:" << persantage << endl;
    }
    // protected:
};

int main()
{
    // object = it is a instance of a class.
    // use - to access the class public data member and member function.

    studant s1;

    s1.getdata();
    s1.printdata();


    return 0;
}