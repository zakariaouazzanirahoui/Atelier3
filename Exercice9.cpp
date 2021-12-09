#include<iostream>
using namespace std;
class Test{
public:
//a chaque fois la fonction call est appeler on increment le i 
    void call(){
        static int i=1;
        cout << "la fonction call() a ete appeller " << i++ << " fois" << endl;}};
int main(){
    Test test;
    test.call();
    test.call();
    test.call();
    test.call();
    test.call();
    return 0;}