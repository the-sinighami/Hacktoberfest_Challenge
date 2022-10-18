#include <iostream>
using namespace std;



int main()
{
    /*int a = 10;
    int &ref = a;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of ref : "<<ref<<endl;
    cout<<"Address of a is : "<<&a<<endl;
    cout<<"Adress of ref is : "<<&ref<<endl;*/


    int x = 0;
    int &ref = x;
    int *p = &x;
    int *p2 = &ref;
    cout<<"value of x : "<<x<<endl;
    cout<<"value of reference : "<<ref<<endl;

    cout<<"adress of  x: "<<&x<<endl;
    cout<<"adress of x through pointer : "<<p<<endl;
    cout<<"adress of ref : "<<&ref<<endl;                  //reference will give the same adress to which it is assigned 
    cout<<"adress of ref through pointer : "<<p2<<endl;










    return 0;
}


