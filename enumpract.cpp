#include<iostream>
using namespace std;
enum days_ofweek{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    // days_ofweek d1=sunday;
    // cout<<d1;
    // if(d1==sunday){
    //     cout<<"sunday"<<" "<<d1;
    // }
    // else{
    //     cout<<"monday";
    // }
    // switch(d1){
    //     case sunday: cout<<"sunday";
    //     break;
    //     case monday: cout<<"monday";
    //     break;
    //     default: cout<<"invalid";
    //     break;
    // }
    for(int i=sunday;i<=saturday;i++){
        switch (i)
        {
        case sunday:
            cout<<"sunday"<<endl;
            break;
        case monday:
            cout<<"monday";
            break;
        
        default:
            break;
        }
    }
    return 0;
}