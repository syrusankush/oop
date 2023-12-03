/*Practical-4.	Imagine a publishing company which does marketing for book and audio cassette versions.
Create a class publication that stores the title (a string) and price (type float) of publications.
From this class derive two classes: book which adds a page count (type int) and tape which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and displays the data members.*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class publication
{
private:
string title;
float price;
public:
void getdata(void)
{
string t;
float p;
cout << "Enter title of publication:";
cin >> t;
cout << "Enter price of publication:";
cin >> p;
title = t;
price = p;
}
void putdata(void)
{
cout << "Publication title:" << title << endl;
cout << "Publication price:" << price<<endl;
}
};
class book :public publication
{
private:
int pagecount;
public:
void getdata(void)
{
publication::getdata(); //call publication class function to get data
cout << "Enter Book Page Count:"; //Acquire book data from user
cin >> pagecount;
}
void putdata(void)
{
publication::putdata(); //Show Publication data
cout << "Book page count: " << pagecount << endl; //Show book data
}
};
class tape :public publication
{
private:
float ptime;
public:
void getdata(void)
{
publication::getdata();
cout << "Enter tape’s playing time(in min): ";
cin >> ptime;
}
void putdata(void)
{
publication::putdata();
cout << "Tape’s playing time: " << ptime << endl;
}
};
int main(void)
{
book b;
tape t;
b.getdata();
t.getdata();
b.putdata();
t.putdata();
return 0;
}
