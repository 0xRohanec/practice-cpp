#include<iostream>
using namespace std;
struct classroom
{
    string name;
    int roll:20;
    int age;
    char section;
};

int main()
{
    cout<<"enter the details "<<endl;
    classroom details;
    int temp;
    details.roll=temp;
        cin>>details.name;
        cin>>temp;
        cin>>details.age;
        cin>>details.section;
        cout<<"name- "<<details.name<<endl<<"roll- "<<details.roll<<endl<<"age- "<<details.age<<endl<<"section- "<<details.section;
    
    return 0;
}