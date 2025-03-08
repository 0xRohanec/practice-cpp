#include<iostream>
using namespace std;
class customer{
int Account_no;
int balance;
public:
customer(int Account_no,int balance){
    this->Account_no=Account_no;
    this->balance=balance;
    // display();
}
customer(){
    Account_no=0;
    balance=0;
}
customer(customer &a){
    Account_no=a.Account_no;
    balance=a.balance;
}
void display(){
    cout<<Account_no<<"  "<<balance<<endl;
}
};
int main()
{
    customer A(234567,34567);
    A.display();
    customer B(A);
    B.display();
    customer C;
    C=A;
    C.display();
    return 0;
}