#include<iostream>
using namespace std;
struct employee {
    int empId;
    char empType;
    union salary{
        int fixed;
        float contract;
    }salary_obj;
};
int main()
{
    cout<<"details of Employee 1  "<<endl;
    employee obj1;
    obj1.empId=999;
    obj1.empType='A';
    obj1.salary_obj.contract=500;
    cout<<"Employee id : "<<obj1.empId<<endl;                                                                                      
    cout<<"Employee type : "<<obj1.empType<<endl;    
    cout<<"Employee salary"<<obj1.salary_obj.contract<<endl;
    cout<<"details of Employee 2"<<endl;
    employee obj2;
    obj1.empId=1000;
    obj1.empType='B';
    obj1.salary_obj.fixed=55500;
    cout<<"Employee id : "<<obj1.empId<<endl;
    cout<<"Employee type : "<<obj1.empType<<endl;
    cout<<"Employee salary"<<obj1.salary_obj.fixed;
    return 0;
}