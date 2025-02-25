#include<iostream>
using namespace std;
struct students{
    string name;
    int std;
    char section;
    int roll;
};
int main()
{
    int n;
    cout<<"no. of students"<<endl;
    cin>>n;
    students detail[n];
    for(int i=0;i<n;i++){
        cout<<"name : ";
        cin>>detail[i].name;
        cout<<"class : ";
        cin>>detail[i].std;
        cout<<"section : ";
        cin>>detail[i].section;
        cout<<"roll : ";
        cin>>detail[i].roll;

    }
    cout<<"\nthese are the details of students\n";
    for(int i=0;i<n;i++){
        cout<<"name: "<<detail[i].name;
        cout<<"\tclass : "<<detail[i].std;
        cout<<"\tsection: "<<detail[i].section;
        cout<<"\troll: "<<detail[i].roll<<endl;
    }
    return 0;
}