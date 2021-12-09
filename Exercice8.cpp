#include<iostream>

using namespace std;

class Media{
public :
    char *id();
    void imprimer();
    string Titre;
    Media(){

        cout<< "classe media" <<endl;
    }   



};
class Livre : public  Media{
public  :
    string Titre;
    string Auteur;
    void Autoread(){
        cout<<"fonction qui permet le autoread"<<endl;
    }

    Livre():Media(){
cout<< "classe Livre" <<endl;

    }

};
class Audio : public Media{ 
    public :
        int Volume;
        int Vitesse;
        void VolumeUp(){
            cout<< " fonction permet d'augmenter le volume" <<endl;
        }
        void VolumeDown(){
            cout<< " fonction permet de diminuer le volume" <<endl;
        }
        Audio(){
            cout<< "classe Audio" <<endl;

        }

};
class Disque : public Audio{
public : 
Disque (){

    cout<<"classe disque "<<endl;
}


};
class Presse : public Media{
public : 
    Presse (){
cout<<"classe presse"<<endl;

    }
    

};
class Journal : public Presse{
public :
    void Publier();
    Journal(){
cout<<"classe journal"<<endl;

    }

};


int main(){

Media m1;
Audio a1;
Disque d1;

return 0;
}