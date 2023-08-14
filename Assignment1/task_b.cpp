#include <iostream>
#include <cstdlib>
#include <fstream>


using namespace std;

/**
 * Antall temperaturer som skal sendes inn
 */
const int amount = 5;


/**
 * Antall temperaturer innsendt under 10, mellom 10 og 20(inkludert 10 og 20), og over 20
 */
int below = 0;

int between = 0;

int above = 0;

void read_temperatures(double temperatures[], int length);

int main(){
    double temperatures[amount];
    read_temperatures(temperatures, amount);

    for(int i = 0; i < amount; i++){
        double temperature = temperatures[i];

        //sammenlikner med de forskjellige avgransningene og incrementer variabelen med 1 ved match
        if(temperature < 10){
            below++;
        }
        else if(temperature > 20){
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

void read_temperatures(double temperatures[], int length){
    const char filename[] = "C:\\Users\\Daniel\\Documents\\cpp23\\Assignment1\\temperatures";
    ifstream file;
    file.open(filename);

    if(!file){
        cout << "feil ved aapning av innfil." << endl;
        exit(EXIT_FAILURE);
    }

    int number;
    int index= 0;
    while(file >> number && index < length){
        temperatures[index] = number;
        index++;
    }

    file.close();
}

