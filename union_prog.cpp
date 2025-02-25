#include<iostream>
using namespace std;
union employee
{
    int emloyeeId;
    short int age;
    char bloodGroup;
};

int main()
{
    union employee obj;
    obj.bloodGroup='a';
    obj.age=35;
    obj.emloyeeId=456890;
    cout<<obj.age<<endl;
    cout<<obj.bloodGroup;
    return 0;
}