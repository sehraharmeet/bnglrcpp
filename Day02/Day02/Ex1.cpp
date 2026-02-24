#include <iostream>
using namespace std;
class Demo {
public:
    int x;
    Demo() {
        cout << "def const called\n";
        x = 0;
    }
    Demo(int val) {
        cout << "parameterised const called\n";
        x = val;
    }

    Demo(const  Demo& d) {    
        cout << "Copy const called\n";
        cout << d.x;
        x = d.x;
        cout << "Post Assignment\n";
    }
    ~Demo()
    {
        cout << "This is the Dest";
    }
    void setvalue()
    {
        x += 20;
    }
    int getvalue()
    {
        return x;
    }
};
void Function1()
{
    /*Demo d1(10);
    Demo d2 = d1;
    d2.setvalue();
    cout << d2.getvalue();
    cout << d1.getvalue();*/

    //below code is to create the reference b/w b1 and b2
    {
        Demo d1(10);
        Demo& d2 = d1;//this will not call copy const
        d2.setvalue();
        cout << d2.getvalue();
        cout << d1.getvalue();
    }
    cout << "Thanks";
    //Demo D2 = Demo(20);//this will work if we give above line 12 as const

}