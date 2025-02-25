// 1. Write a program to declare an integer variable and print its value.

/*#include<iostream>
using namespace std;
int main()
{
    int a=34;
    cout<<a;
    return 0;
}*/

// 2.Declare a float, double, and char variable, assign values, and display them.

/*#include<iostream>
using namespace std;
int main()
{
    float a=876.7998;
    double d=87.987890;
    char ch='c';
    cout<<a<<endl<<d<<endl<<ch;
    return 0;
}*/

// 3.Write a program to take input of two integers and display their sum.

/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"take two integer input: "<<endl;
    cin>>a>>b;
    int sum=a+b;
    cout<<sum;
    return 0;
}*/

// 4.Declare a constant variable using const and try modifying it. What happens?
//    ------> it gives error that when we put const before declaration it becomes constant means no change occurs.

/*#include<iostream>
using namespace std;
int main()
{
    const int a=5;
    a=3;
    cout<<a;
    return 0;
}*/

// 5.Write a program to find the size of different data types using sizeof().

/*#include<iostream>
using namespace std;
int main()
{
    cout<< "size of int is "<<sizeof(int)<<" bytes"<<endl;
    cout<< "size of char is "<<sizeof(char)<<" bytes"<<endl;
    cout<< "size of float is "<<sizeof(float)<<" bytes"<<endl;
    cout<< "size of double is "<<sizeof(double)<<" bytes"<<endl;
    cout<< "size of bool is "<<sizeof(bool)<<" bytes"<<endl;
    return 0;
}*/

// 6.Declare a bool variable and assign it true or false. Print its value.

/*#include<iostream>
using namespace std;
int main()
{
    bool isodd=true;
    cout<<isodd<<endl;
    bool iseven =false;
    cout<<iseven;
    return 0;
}*/

// 7.Swap two integer values using a temporary variable.

/*#include<iostream>
using namespace std;
int main()
{
    int a=12,b=15;
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<endl<<"b= "<<b;
    return 0;
}*/
