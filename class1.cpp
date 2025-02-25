#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll;
    short int marks;
    public:
    string getname(){
        return name;
    }
    void setname(string s){
        name=s;
    }
    int getroll(){
        return roll;
    }
    void setroll(int rol){
        roll=rol;
    }
    short int getmarks(){
        return marks;
    }
    void setmarks(short int m){
        if (m>=0 && m<=100){
            marks=m;
        }
        else{
        cout<<"enter a valid marks"<<endl;
        }
    }
    char grade(){
        if (marks>=90){
            return 'A';
        }
        else if(marks>=60){
            return 'B';
        }
        else {
            return 'P';
        }
    }
};
int main()
{
    student student1;
    student1.setname("rohan");
    student1.setroll(36);
    cout<<"add commit."<<endl;
    student1.setmarks(-1);
    cout<<student1.getname()<<endl;
    cout<<student1.getroll()<<endl;
    cout<<student1.getmarks()<<endl;
    cout<<student1.grade()<<endl;
    return 0;
}