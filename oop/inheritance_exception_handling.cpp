/* Practical-5.	Create a class which uses the concept of inheritance, displays data and data members
and uses the concept of exception handling. Implement any one Types of Inheritance a) Single Inheritance
b) Multiple Inheritance c) Hierarchical Inheritance d) Multilevel Inheritance e) Hybrid Inheritance*/

#include<iostream>
using namespace std;

//Base class
class Parent{
protected:
    int parentData;
public:
    Parent(): parentData(0){}
    void setParentData(int data){
    if (data<0){
        throw "Parent data cannot be negative!";

    }
    parentData=data;
    }
    void displayParentData(){
    cout<<"Parent Data:"<<parentData<<endl;
    }
    };

    // Derived class inheriting from Parent
    class Child:public Parent{
private:
    int childData;
public:
    Child():childData(0){}
    void setChildData(int data){
    if (data<0){
        throw"Child data cannot be negative!";
    }
    childData=data;
    }
    void displayChildData(){
    cout<<"Child Data:"<<childData<<endl;
    }
    };
    int main(){
    try{
    Child obj;
    obj.setParentData(50);
    obj.displayParentData();
    obj.setChildData(20);
    obj.displayChildData();
    obj.setParentData(-5);
    }catch(const char*msg){
    cout<<"Exception caught:"<<msg<<endl;
    }
    return 0;
    }






