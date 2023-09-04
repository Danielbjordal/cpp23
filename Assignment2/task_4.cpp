#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 10; //initialiserer b
    //int &b; man kan ikke få minne-adressen til en variabel som ikke er initialisert.
    int *c; //deklarerer en pointer c
    c = &b; // assigner adressen til b til c
    //*a = *b + *c; a og b er ikke deklarert som pointers.
    a = b + *c; // assigner en ny verdi til a som består av verdien b og verdien pointeren c peker til(b)
    //&b = 2; du kan ikke assigne en verdi til en reference ved å bruke &b, for å endre verdien til en reference, gjør det via variabelen den refererer til som i linjen under.
    b = 2; // endrer verdien av b til 2

    cout << a << endl;
    cout << b;

    return 0;
}
