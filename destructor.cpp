#include <iostream>
using namespace std;

/*
class Sample
{
    int a,b;
    public:
        Sample()  //constructor
        {
            a=10;
            b=20;
        }
        ~Sample()  //destructor
        {
            cout<<"Value of a is : "<<a<<endl;
            cout<<"Value of b is : "<<b<<endl;
        }
};



int main()
{
    Sample s;  //object


    return 0;
}*/

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number : " << count << endl;
    }

    ~num()
    {
        cout << "This is them time when destructor is called for object number : " << count << endl;
        count--;
    }
    void print()
    {
        cout<<test<<endl;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}