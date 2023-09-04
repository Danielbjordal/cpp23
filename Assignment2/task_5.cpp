#include <iostream>

using namespace std;

int main(){
    double number;
    //assigne verdi direkte til variabelen:
    number = 1;
    cout << number << endl;

    // ved å lage en pointer til number og endre verdien via pointeren
    double *pointer = &number;
    *pointer = 2;
    cout << number << endl;
    cout << *pointer << endl; // printer verdien av number ved å dereference pointeren

    // ved å lage en referanse til number og endre verdien via referansen
    double &reference = number;
    reference = 3;
    cout << number << endl;
    cout << reference; // printer verdien av number ved å printe referansen

    return 0;
}
