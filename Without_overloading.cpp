#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;

    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    ~complex()
    {

    }


void display(void)
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
complex add(complex c)
{
    float r=real + c.real;
    float i=imag + c.imag;
    return complex(r,i);
}
complex sub(complex c)
{
    float r=real - c.real;
    float i=imag - c.imag;
    return complex(r,i);
}   
complex mul(complex c)
{
    float r=real*c.real;
    float i=imag + c.imag;
    return complex(r,i);
}
};
int main(){
    complex c1(5.0,4.0);
    cout<<"complex no. is"<<endl;
    c1.display();
    complex c2(6.0,7.0);
    cout<<"complex no. is"<<endl;
    c2.display();
    complex c3(9.2,6.5);
    cout<<"complex no. is"<<endl;
    c3.display();
    complex c4(13.5,66.2);
    cout<<"complex no. is"<<endl;
    c4.display();

    complex sum=c3.add(c4);
    cout<<"sum is="<<endl;
    sum.display();

    complex diff=c1.sub(c2);
    cout<<"Difference is="<<endl;
    diff.display();

    complex multi=c1.sub(c2);
    cout<<"product is="<<endl;
    multi.display();
    
    return 0;
}

//OUTPUT//
/*PS D:\Sarthak C> cd "d:\Sarthak C\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
complex no. is
5+4i
complex no. is
6+7i
complex no. is
9.2+6.5i
complex no. is
13.5+66.2i
sum is=
22.7+72.7i
Difference is=
-1+-3i
product is=
-1+-3i
PS D:\Sarthak C> */