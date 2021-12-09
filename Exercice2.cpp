#include<iostream>

using namespace std;


class shape
{

//protected : à l'interieur des classes et des sous-classes
protected : 
float hauteur,largeur;

public:
//constructeur avec deux parametre hauteur et largeur : 
    shape(float l, float h){
hauteur = h;
largeur = l;
    }

};
//sousclasse Rectangle
class Rectangle : public shape
{

public:
//constructeur avec deux parametre hauteur et largeur : 

    Rectangle(float l, float h):shape(l,h){

    }
    //calcul de la surface du rectangle
    float area()
    {
        return(largeur*hauteur);
    }
    
};
//sous classe Triangle
class Triangle : public shape
{

public:
//constructeur avec deux parametre hauteur et largeur : 

    Triangle(float l, float h) : shape(l,h){


    }
    //calcul de la surface du triangle
   float area(){

       return (largeur*hauteur / 2);
   }
};


int main (){
    //creation des objets depuis leurs classes
  Rectangle r(2,3);
  Triangle t(2,3);
  cout << r.area() << endl;   //6
  cout << t.area() << endl;    //3 
  return 0;
}

