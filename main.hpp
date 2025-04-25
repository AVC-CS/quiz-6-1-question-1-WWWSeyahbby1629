#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void getTwoValues(int &begin, int &end) {
    while (true) {
        cout << "Enter two integers: ";
        cin >> begin >> end;
        if (begin < end) {
            break;
        } else {
            cout << "The first value must be less than the second. Please try again." << endl;
        }
    }
}

int getNextPrime(int begin) {
    int num = begin + 1; 
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int getPrevPrime(int end) {
    int num = end - 1; 
    while (!isPrime(num)) {
        num--;
    }
    return num;
}
