/* Practical- 8. Write C++ program using STL for sorting and searching user defined records such as personal records
(Name, DOB, Telephone number etc) using vector container. OR Write C++ program using STL for sorting and
searching user defined records such as Item records (Item code, name, cost, quantity etc) using vector container.*/

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct rec
{
    char name[20];
    char BirthDt[20];
    char phone[11];

}node;
node temp;
vector<node>rec;
vector<node>::iterator ptr;

bool compare(node &r1,node &r2)
{
    if(strcmp(r1.name,r2.name)<0)
        return true;
    else
        return false;
}
void Create()
{
    int n,i;
    cout<<"\n How many elements you want to insert?"<<endl;
    cin>>n;
    cout<<"\n Enter the Elements in the database"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\n Name:";
        cin>>temp.name;
        cout<<"\n Birth Date(dd-mm-yy):";
        cin>>temp.BirthDt;
        cout<<"\n Phone:";
        cin>>temp.phone;
        rec.push_back(temp);
    }
}
void Display()
{
    cout<<"\n\tThe contents of the database are:";
    cout<<"\n-----------------------------------";
    cout<<"\n Name          Birth Date      Phone";
    cout<<"\n-----------------------------------";
    for(ptr=rec.begin();ptr!=rec.end();ptr++)
    {
        cout<<"\n";
        cout<<" "<<(*ptr).name;
        cout<<"      "<<(*ptr).BirthDt;
        cout<<"       "<<(*ptr).phone;
    }
}
void Searching()
{

    char key[20];
    int flag=0;
    cout<<"\n Enter the name which you want to search";
    cin>>key;
    for(ptr=rec.begin();ptr!=rec.end();ptr++)
    {
        if(strcmp((*ptr).name,key)==0)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
        cout<<"\n The desired element is present in the database";
    else
        cout<<"\n The desired element is not present in the database";
}
void Sorting()
{
    sort(rec.begin(),rec.end(),compare);
    cout<<"\n\n Record is Sorted!!!!!"<<endl;

}
int main()
{
    char ans='y';
    int choice;
    cout<<"\n Program for searching and sorting";
    do
    {
        cout<<"\n Main Menu";
        cout<<"\n 1. Create a database";
        cout<<"\n 2. Display a database";
        cout<<"\n 3. Search particular element";
        cout<<"\n 4. Sort the database(based on name)";
        cout<<"\n Enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1: Create();
            break;
            case 2:Display();
            break;
            case 3:Searching();
            break;
            case 4:Sorting();
            Display();
            break;
        }
        cout<<"\n Do you want to go back to Main Menu?";
        cin>>ans;

    }while(ans=='y');
    return 0;
}







