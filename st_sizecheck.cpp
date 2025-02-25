#include<iostream>
using namespace std;
struct sizecheck{
    int num;
    float fl;
    double dl;
    bool bo;
    char ch;
};
int main()
{
    /*now structure has no memory. till we not create a structure variable.*/
    sizecheck abc;
    abc.num=1;
    abc.fl=2.3;
    abc.dl=57.87;
    abc.bo=true;
    abc.ch='a';
    cout<<"manually : "<<endl<<"size of structure sizecheck is :"<<endl<< "sum of size of all members datatype : ";
    cout<<&abc;
    sizecheck def;
    def.num=1;
    def.fl=2.3;
    def.dl=57.87;
    def.bo=true;
    def.ch='a';
    cout<<"according to code: "<<sizeof(sizecheck)<<endl;
    return 0;
}