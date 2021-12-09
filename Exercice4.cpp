#include<iostream>

using namespace std;

class mère{

public:
//methode void qui affiche un message  
    void Display(){

        cout<<"display de la classe mère"<<endl;
    }

};

class fille : public mère // héritage
{


public:

    void Display(){

        cout<<"display de la classe fille"<<endl;
    }
    
    
};

int main(){

fille f;
f.Display();
return 0;
}