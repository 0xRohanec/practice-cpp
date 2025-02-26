#include<iostream>
#include<string>
using namespace std;
class car{
private:
string brand;
string model;
public:
   car(string brand,string model){
    this->brand=brand;
    this->model=model;
   }
   car(){
    brand="toyota";
    model="fortuner";
   } 
   void display(){
    cout<<brand<<" "<<model<<endl;
   }
};
int main()
{
    car obj("maruti","alto");
    car obj1;
    obj.display();
    obj1.display();
}