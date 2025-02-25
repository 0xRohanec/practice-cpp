#include<iostream>
using namespace std;
struct employee{
    int employee_id;
    char emp_group;
    union structobj
    {
        int inside_union:5;
        int inside_union:10;
  //      char b = 'b';
    }union_obj;
    
};
int main()
{
    employee obj;
    obj.union_obj.inside_union =10;
    
    obj.emp_group='a';
    obj.employee_id=234;
 //   cout<<obj.union_obj.inside_union<<endl;
    cout<<(obj.union_obj.inside_union);

    return 0;
}