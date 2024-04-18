#include <iostream>
#include <string>
using namespace std;
int main(){

    int count;
    int age;
    string gender;
    string christ;
    string status;

    cout<<"What is your body count?"<<endl;
    cin>>count;
    cout<<"What is your age"<<endl;
    cin>>age;
    cout<<"What is your gender?(male/female)"<<endl;
    cin>>gender;
    cout<<"Are you a christian?(yes/no)"<<endl;
    cin>>christ;
    cout<<"Are you single(yes/no)"<<endl;
    cin>>status;

    if(count<3 && age<=22 && age>18 && christ =="yes" && status=="yes" && gender=="female"){
        cout<<"You can be my girlfriend";
    }
    else
{cout<<"I can never date you, find your match";
    
}
}