/*Practical-1 Implement a class complex which represents the complex number data type.
Implement the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read complex numbers.*/

#include<iostream>
using namespace std;
class complex
{
public:
float real, img;
complex() {}
complex operator+ (complex);
complex operator* (complex);
friend ostream &operator<<(ostream &,complex&);
friend istream &operator>>(istream &,complex&);
};
complex complex::operator+ (complex obj)
{
complex temp;
temp.real = real + obj.real;
temp.img = img + obj.img;
return (temp);
}
istream &operator >>(istream &is, complex &obj)
{
is >>obj.real;
is >> obj.img;
return is;
}
ostream &operator<<(ostream &outt, complex &obj)
{
outt<<" "<<obj.real;
outt <<"+"<<obj.img<<"i";
return outt;
}
complex complex::operator* (complex obj)
{
    complex temp;
temp.real = real*obj.real - img*obj.img;
temp.img = img*obj.real + real*obj.img;
return (temp);
}
int main()
{
complex a,b,c,d;
cout << "\n The first Complex number is: ";
cout << "\nEnter real and img: ";
cin >> a;
cout << "\n The second Complex number is: ";
cout << "\nEnter real and img: ";
cin >> b;
cout << "\n\n\t\t Arithmetic operations ";
c = a + b;
cout << "\n Addition = ";
cout << c;
d = a*b;
cout << "\n Multiplication = ";
cout << d;
cout << endl;
return 0;
}
