#include <iostream>
using namespace std;

class TimeConverter // I have declared a class name is TimeConverter.
{

    int TotalSecond; // Then after i have created a veriable like Totalseconds.

public:
    void getconverterdata()
    { // I have a declare a function name like a getconverterdata.
        cout << "Enetr a Seconds: ";
        cin >> TotalSecond;
    }

    void printconverterdata()
    { // I have a second function declare a printconverterdata.

        int Hours = TotalSecond / 3600;
        int Minutes = (TotalSecond % 3600) / 60;
        int Second = TotalSecond % 60;

        cout << "HH:MM:SS";

        if (Hours < 10)
        {
            cout << 0 << Hours << ":";
        }
        else
        {
            cout << Hours << ":";
        }

        if (Minutes < 10)
        {
            cout << 0 << Minutes << ":";
        }
        else
        {
            cout << Minutes << ":";
        }

        if (Second < 10)
        {
            cout << 0 << Second;
        }
        else
        {
            cout << Second;
        }
    }
};

int main()
{

    TimeConverter m1; //I have created a Object.

    m1.getconverterdata(); 
    m1.printconverterdata();

    return 0;
}

