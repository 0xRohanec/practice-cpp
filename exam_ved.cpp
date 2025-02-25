#include<iostream>
using namespace std;
// union data{
//     int x;
//     char y;
// };
// int main()
// {
//     data d;
//     d.x=10;
//     d.y='A';
//     cout<<d.x<<" "<<d.y;
//     return 0;
// }
// Define a struct Student with fields: name, roll_number, marks (array of 3 subjects), and average_marks.
struct student{
    string name;
    int roll_number;
    float marks[3];
    float average_marks;
};
void students_input(student &s){
    cout<<"enter name of student :"<<endl;
    cin.ignore();
    getline(cin, s.name);
    cout<<"enter roll number of student :"<<endl;
    cin>>s.roll_number;
    cout<<"enter marks of student :"<<endl;
    int sum=0;
    for (int i=0;i<3;i++){
        cin>>s.marks[i];
        sum=sum+s.marks[i];
    }
    s.average_marks=sum/3;

}
void display(student &s){
    cout<<"name : "<<s.name<<endl;
    cout<<"roll number : "<<s.roll_number<<endl;
    cout<<"marks : "<<endl;
    for(int i=0;i<3;i++){
        cout<<s.marks[i]<<" ";
    }
    cout<<endl;
    cout<<s.average_marks<<endl;
}
int main(){
    student students[5];
    for(int i=0;i<5;i++){
        students_input(students [i]);
    }
    cout<<"student details"<<endl;
    for(int i=0;i<5;i++){
        display(students[i]);
    }
}