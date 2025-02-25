/*Create a structure Address with members house_no, street, city, and zip_code.
Then create a structure Person with members name, age, and an Address structure as a member. 
Write a program to read and display the details of 3 people along with their addresses.*/
#include<iostream>
using namespace std;
struct Address{
    int house_no;
    string street; 
    string city;
};
struct person{
    string name;
    short int age;
    Address address;
};
int main()
{
    cout<<"take pesons input"<<endl;
    person people[3];
    for(int i=0;i<3;i++){
        cout<<"adress of person "<<i+1<<endl;
        cout<<"name:"<<endl;
        getline(cin, people[i].name);
        cout<<"age:"<<endl;
        cin>>people[i].age;
        cin.ignore();
        cout<<"adress:"<<endl;
        cout<<"house no:"<<endl;
        cin>>people[i].address.house_no;
        cin.ignore();
        cout<<"street :"<<endl;
        getline(cin,people[i].address.street);
        cout<<"city name:"<<endl;
        getline(cin,people[i].address.city);
    }
    for(int i=0;i<3;i++){
        cout<<"the adress of person"<<i+1<<endl;
        cout<<"name : "<<people[i].name<<endl;
        cout<<"age : "<<people[i].age<<endl;
        cout<<"house no : "<<people[i].address.house_no<<endl;
        cout<<"street : "<<people[i].address.street<<endl;
        cout<<"city : "<<people[i].address.city<<endl;

    }
    return 0;
}