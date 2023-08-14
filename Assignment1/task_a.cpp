#include <iostream>

using namespace std;

/**
 * Antall temperaturer som skal sendes inn
 */
const int temperatures = 5;


/**
 * Antall temperaturer innsendt under 10, mellom 10 og 20(inkludert 10 og 20), og over 20
 */
int below = 0;

int between = 0;

int above = 0;

int main() {
    double temp;
    cout << "Du skal skrive inn " << temperatures << " temperaturer." <<endl;

    for(int i = 0; i < temperatures; i++){
        cout << "Skriv inn temperatur nr " << (i+1) << ":";
        cin >> temp; //tar inn temperatur

        //sammenlikner med de forskjellige avgransningene og incrementer variabelen med 1 ved match
        if(temp < 10){
            below++;
        }
        else if(temp > 20){
            above++;
        }
        else{
            between++;
        }
    }

    cout << "Antall under 10 er " << below << endl;
    cout << "Antall mellom 10 og 20 er " << between << endl;
    cout << "Antall over 20 er " << above << endl;

    return 0;
}




