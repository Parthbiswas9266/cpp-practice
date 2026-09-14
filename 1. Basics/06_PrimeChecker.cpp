#include <iostream>
using namespace std;

int main() {

    int num;
    int i = 2;
    bool isPrime = true;

    cout << "Enter a number = ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    }
    else {
        while (i < num) {

            if (num % i == 0) {
                isPrime = false;
                break;
            }

            i++;
        }
    }

    if (isPrime == true) {
        cout << "It is a Prime Number";
    }
    else {
        cout << "It is not a Prime Number";
    }

    return 0;
}
