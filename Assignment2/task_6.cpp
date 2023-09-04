#include <iostream>

using namespace std;

int find_sum(const int *table, int length){
    int sum = 0;
    int i = 0;
    while (i < length){
        sum += table[i];
        i++;
    }
    return sum;
}

int main(){
    const int size = 20;
    int table[size];

    int i = 0;
    while (i < size){
        table[i] = i;
        i++;
    }

    //finn summen av de 10 første tallene:
    int sum_10_first = find_sum(table, 10);
    cout << sum_10_first << endl;

    //finn summen av de 5 neste tallene:
    int sum_5_next = find_sum(&table[10], 5);
    cout << sum_5_next << endl;

    //finn summen av de siste 5 tallene:
    int sum_last_5 = find_sum(&table[15], 5);
    cout << sum_last_5;


    return 0;
}
