#include <iostream>
using namespace std;

class Employe
{
    string Employeid;
    string Employename;
    double EmploySalary;


    static int totalemploye;
    static int totalsalary;

    public:

    void Createemploye(string emp_id, string emp_name, double emp_salary)
    {

        Employeid = emp_id;
        Employename = emp_name;
        EmploySalary = emp_salary;
    

        totalemploye++;
        totalsalary += EmploySalary;
    }
    void DisplayData()
    {
        cout << "Employe Id:" << Employeid << endl;
        cout << "Employe Name:" << Employename << endl;
        cout << "EMploye Salary:" << EmploySalary << endl;
       
    }
    static void EmployeReport()
    {
        cout << "\n\n||---===EMPLOYE REPORT---===||" << endl;
        cout << "TotalEmploye:" << totalemploye << endl;
        cout << "TotalSalary:" << totalsalary << endl;
    }
};
int Employe ::totalemploye = 0;
int Employe ::totalsalary = 5000;

    int main()
{
    Employe e1,e2;

    e1.Createemploye("1","Aryan",25000);
    e2.Createemploye("2","Manthan",30000);

    e1.DisplayData();
    e2.DisplayData();

    Employe :: EmployeReport();

    return 0;
}