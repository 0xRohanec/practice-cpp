#include<iostream>
using namespace std;
union salary 
{
    int for_permanent;
    struct contract
    {
        int per_hr;
        float perday;
    }sal;
    
};

int main()
{
    salary obj1;
    cin>>obj1.sal;
    return 0;
}