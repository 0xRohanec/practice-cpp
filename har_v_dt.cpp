// 15. Declare an array of integers and print all elements using a loop.

/*#include<iostream>
using namespace std;
int main()
{
    int arra[7]={12,123,45,3,43,33,56};
    for(int i=0;i<7;i++){
        cout<<arra[i]<<" ";
    }
    return 0;
}*/

// 16.Take a character input and check whether it is a vowel or consonant using conditional statements.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"vowel ";
    }
    else{
        cout<<"consonants ";
    }
    return 0;
}

