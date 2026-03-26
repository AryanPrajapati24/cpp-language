#include<iostream>
using namespace std;

class course{

    int courseid;
    string coursename;
    int coursefees;
    string coursejoiningdate;
    string courseduration;

    public:

    void getcoursedata(){

        cout<<"Enter a courseid=";
        cin>>courseid;

        cout<<"Enter a coursename=";
        cin>>coursename;

        cout<<"Enetr a coursedfees=";
        cin>>coursefees;

        cout<<"Enter a coursejoiningdate=";
        cin>>coursejoiningdate;

        cout<<"Enter a courseduration=";
        cin>>courseduration;

    }
    void printcoursedata(){
        cout<<"\n\n||-----COURSE DATA-----||"<<endl;
        cout<<"courseid:"<<courseid<<endl;
        cout<<"coursename:"<<coursename<<endl;
        cout<<"coursefees:"<<coursefees<<endl;
        cout<<"coursejoiningdate:"<<coursejoiningdate<<endl;
        cout<<"courseduration:"<<courseduration<<endl;
    }

};



int main(){

    course c[5];

    for(int i=0; i<5; i++){
        c[i].getcoursedata();
        
    }
    for(int i=0; i<5; i++){

        cout<<"\n\n||--==--COURSE "<<i+1<<"--==--||"<<endl;
        c[i].printcoursedata();

    }
    return 0;
}