// 8. Write a program that takes two float numbers as input and prints their average.

/*#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"enter two floating no.  ";
    cin>>a>>b;
    int average=(a+b)/2;
    cout<<average;
    return 0;
}*/

// 9.Use type casting to convert a float to an integer and display the result.

/*#include<iostream>
using namespace std;
int main()
{
    float a=54.989;
    int b=int(a);
    cout<<a<<endl<<b;
    return 0;
}*/

// 10.Declare and initialize a string variable, then print its length using .length().

/*#include<iostream>
using namespace std;
int main()
{
    string name="rohan";
    cout<<"name is "<<name<<endl;
    cout<<"length of "<<name<<" is "<<name.length();
    return 0;
}*/

// 11.Swap two integer values without using a temporary variable.

/*#include<iostream>
using namespace std;
int main()
{
    int a=15,b=67;
    swap(a,b);
    cout<<a<<endl<<b;
    return 0;
}*/

// 12.Take a character input and display its ASCII value using int type conversion.

/*#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    int a=ch;
    cout<<"ascci value of character ch is "<<a;
    return 0;
}*/

// 13.Create a program that uses global and local variables and prints their values.

/*#include<iostream>
using namespace std;
int globvar=120;
int main()
{
    int globvar=132;
    cout<<::globvar<<endl;
    int localvar=123;
    cout<<localvar;
    return 0;
}*/

// Take an integer input and check whether it is even or odd using the modulo operator.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd";
    }
    return 0;
}