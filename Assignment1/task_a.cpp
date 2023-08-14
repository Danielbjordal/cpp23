#include <iostream>

using namespace std;

/**
 * Amount of samples to be taken
 */
const int length = 5;


/**
 * Amount of samples below 10, between 10 and 20(including 10 and 20), and above 20.
 */
int below = 0;

int between = 0;

int above = 0;

int main() {
    double temp;
    cout << "Du skal skrive inn " << length << " temperaturer.";



    if(temp < 10){
        below++;
    }
    else if(temp > 20){
        above++;
    }
    else{
        between++;
    }

    return 0;
}




