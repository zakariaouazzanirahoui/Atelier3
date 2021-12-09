#include<iostream>

using namespace std;
//classe Personne qui comporte trois données et une fonction afficher 
class Personne{
    protected : 
       string nom;
        string prenom;
        int age;
    public : 
     

        Personne(string n, string p, int a){

        nom = n;
        prenom = p;
        age = a;

        }
       
        void Afficher(){

            cout<<" "<<nom<<" "<<prenom<<age<<endl;
        }

};
//classe employé avec le champ salaire
class Employé : public Personne{
public : 
float salaire;
    Employé(string n, string p, int a,float s):Personne(n, p,a){

        salaire = s;
    }
     void Afficher(){

            cout<<" "<<nom<<" "<<prenom<<age<<salaire<<endl;
        }

};
//class Chef avec champ service
class Chef : public Employé{
public:
string service;
    Chef(string n, string p, int a,float s,string srv):Employé(n, p,a,s){
        service = srv;

    }

void Afficher(){

            cout<<" "<<nom<<" "<<prenom<<age<<salaire<<" "<<service<<endl;
        }
};

//class Direcrteur avec le champ societé
class Directeur : public Chef{
public : 
string societé;
    Directeur(string n, string p, int a,float s,string srv, string soci):Chef(n, p,a,s,srv){

        societé = soci;
    }

void Afficher(){

            cout<<" "<<nom<<" "<<prenom<<age<<salaire<<" "<<service<<" "<<societé<<endl;
        }
};


int main(){

Personne p1("hello","world",21);
p1.Afficher();

Employé e1("bonjour","toutlemonde",22,15000.3);
e1.Afficher();

Chef c1("chef","expert",35,45000 ,"salade");
c1.Afficher();

Directeur d1("monsieur","directeur",55,95000,"banquaire","societe generale");
d1.Afficher();


}