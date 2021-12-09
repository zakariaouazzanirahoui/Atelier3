#include <iostream>

using namespace std;

class complexe{ 
  public :
  //declaration des fonctions :
      void egalite() ;
      double somme() ; 
       double  produit( ) ; 
       double soustraction() ; 
       double division(); 
  double a1 , a2 , i1 , i2 ; 
  complexe (){  // constructeur du classe

  //recuperation des deux nombres complexes:
     cout<<"entrer la partie reel du nombre1 : "; // demender d'entrer premiere nombre complexe
        cin>>a1;
     cout<<"entrer la partie imaginaire du nombre1 : ";
        cin>>i1;
     cout<<"entrer la partie reel du nombre2 : "; // demender d'entrer dexieme nombre complexe
        cin>>a2;
      cout<<"entrer la partie imaginaire du nombre2 : ";
        cin>>i2;
  }
};
//fonction egalité 
void complexe::egalite(){  
   if(a1==a2 && i1==i2){
   cout<<"les deux nombres complexes egaux \n ";}
   else if (a1==a2 && i1== -i2){
    cout<<"les deux nombres complexes conjugues \n ";

   }
   else
    cout<<"les deux nombres complexes differents \n ";
 };

 //fonction Somme 
 double complexe::somme(){  
 double a3 , i3 ;
 a3= a1 + a2 ;
 i3 = i1 + i2 ;
 cout<<"la somme des deux nombres comlexes est \n " <<a3<<"+"<<i3<<+"i \n" ;

 }

 //fonction soustraction : 
 double complexe::soustraction(){ 
 double a3 , i3 ;

 //on soustracte le petit nombre du grand nombre : 
 if(a1 > a2){
     a3= a1 - a2 ;
 i3 = i1 - i2 ;
 }
 else{
 a3= a2 - a1 ;
 i3 = i2 - i1 ;}
 cout<<"la soustraction des deux nombres comlexes est \n " <<a3<<"+"<<i3<<+"i \n" ;

 }

 //fonctions produit
 double complexe::produit( ){  
     double a3 , i3 ;
  if(a1==0){
    a3= -(i2*i1);
    i3= a2*i1;
  }
  else if (a2==0){
     a3= -(i2*i1);
    i3= a1*i1;
  }
  else if (i2==0){
     a3= -(a2*a1);
    i3= a2*i1;
  }
  else if (i1==0){
     a3= (a2*a1);
    i3= a1*i2;
  }
  else {
    a3 = (a1*a2) - (i1*i2);
     i3 = (a1*i2) + (i1*a2);}
      cout<<"le produit des deux nombres comlexes est \n " <<a3<<"+"<<i3<<+"i \n" ;};

//fonction division
double complexe::division(){  
    double a3 , i3 , a4 , i4 , a5 , i5 ;
    if (i2==0){
        a3= a1/a2;
        i3 = i1/a2;
     }
   else if (a2==0){
        a3= i1/i2 ;
        i3 = -a1/i2;
     }
   else{
   a3 = ( a1*a2 + i1*i2)/ (a2*a2 + i2*i2);
   i3 = ((i1*a2) + (a1 *i2)) / ((a2*a2) + (i2*i2));


   }
cout<<"la division des deux nombres comlexes est \n " <<a3<<"+"<<i3<<+"i \n" ;
};
int main(){
int menu ; // declaration  variable du notre menu

complexe monobjet ;
do //menu pour choisir la fonction
    {
        cout<<endl<<" ------------- MENU ------------"<<endl<<endl; 
        cout<<"1. l'igalite"<<endl;
        cout<<"2.soustraction"<<endl;
        cout<<"3. addition"<<endl;
        cout<<"4. division "<<endl;
        cout<<"5. multiplication"<<endl;
        cout<<"0. Quitter"<<endl<<endl;
        cout<<"Choix : ";
        cin>>menu;
        cout<<endl;

        
 switch(menu) 
        {
            case 0 : break;

            case 1 :  monobjet.egalite() ;
            break;

            case 2 : monobjet.soustraction() ;
            break;

            case 3 : monobjet.somme();
            break;

            case 4 : monobjet.division();
            break;
             case 5 : monobjet.produit( );
            break;
        }

    }while (menu!=0); // condition d'arret

    return 0;
}
	