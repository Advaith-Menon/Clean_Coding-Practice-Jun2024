#include <iostream>
using namespace std;

class D
{
    public:
    D()
    {
        cout<<"D constructor"<<endl;
    }
    ~D()
    {
        cout<<"D destructor"<<endl;
    }

};
class P:public D
{
    public:
    P()
    {
        cout<<"P Constructor"<<endl;
    }
    ~P()
    {
        cout<<"P Destructor"<<endl;
    }
};
class S:public D
{
    public:
    S()
    {
        cout<<"S Constructor"<<endl;
    }
    ~S()
    {
        cout<<"S Destructor"<<endl;
    }
};
class PS:public P,public S
{
    public:
    PS()
    {
        cout<<"PS Constructor"<<endl;
    }
    ~PS()
    {
        cout<<"PS Destructor"<<endl;
    }
};
int main()
{
    PS obj;
    return 0;
}
