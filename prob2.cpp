#include<iostream>
using namespace std;
class Demo
{
public:
    int a,i,b,c,d,e,f,g;
    void fun()
    {
        for(a=1000;a<=9999;a++)
        {
        if(a/1000>0&&a/1000<10)
        {
            g=a/1000;
            b=a%1000;
            c=b/100;
            d=b%100;
            e=d/10;
            f=d%10;
             if(g!=c&&c!=e&&e!=f)
             {
                cout<<g;
              cout<<c;
               cout<<e;
            cout<<f;
            cout<<endl;
             }

        }
        }
    }

};
main()
{
    Demo o;
    o.fun();
}
