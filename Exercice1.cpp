#include<iostream>

using namespace std;


class MyClass
{

public:
//constructeur dans la classe
    MyClass();
   
    //destructeur dans la classe 
    ~MyClass();
};
//en dhors de la classe
// constructeur :
MyClass::MyClass()
 {
        cout<<"Default Construction Invoked"<<endl;
    }
// Destructeur :
MyClass::~MyClass()
{
    cout<<"Default Destruction Invoked"<<endl;
}

int main(){
//creation d'un objet de la classe MyClass
MyClass c1 ;
}