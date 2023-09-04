#include <iostream>

using namespace std;

int i = 3;
int j = 5;
int *p = &i;
int *q = &j;

int main() {
    cout << "i verdi = " << i << endl;
    cout << "i addresse = " << &i << endl;
    cout << endl;

    cout << "j verdi = " << j << endl;
    cout << "j addresse = " << &j << endl;
    cout << endl;

    cout << "*p verdi = " << *p << endl;
    cout << "*p addresse = " << p << endl;
    cout << endl;

    cout << "*q verdi = " << *q << endl;
    cout << "*q addresse = " << q << endl;
    cout << endl;


    //Oppgave b

    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    cout << *p << " " << *q << endl;
    cout << p << " " << q << endl;

    return 0;
}
