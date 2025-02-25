#include<iostream>
using namespace std;
struct employee
{
    string name;
    int age;
    double salary;
};
int main()
{
    employee diff[5];
    cout<<"enter employee details : "<<endl;
    for (int i=0;i<5;i++){
        cout<<"name ";
        cin>>diff[i].name;
        cout<<"age ";
        cin>>diff[i].age;
        cout<<"salary ";
        cin>>diff[i].salary;
    }
    cout<<"\nemployee details is : "<<endl;
    for (int i=0;i<5;i++){
        cout<<"name :"<<diff[i].name;
        cout<<"\tage :"<<diff[i].age<<endl;
        cout<<"\tsalary :"<<diff[i].salary<<endl;
    }
    return 0;
}