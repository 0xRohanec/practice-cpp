#include<iostream>
#include<string>
using namespace std;
class car{
private:
string brand;
public:
    string model;
    int year;
    string getbrand(){
        return brand;
    }
    void brandname(string s){
        brand=s;
    }
};
int main()
{
    car obj;
    obj.brandname("maruti");
    obj.model="alto";
    obj.year=2015;
    cout<<"brand name : "<< obj.getbrand()<<endl;
    cout<<"model name : "<<obj.model<<endl;
    cout<<"manufactring year  : "<<obj.year<<endl;
    return 0;
}