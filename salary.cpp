#include <iostream>
using namespace std;

// Function Declaration
float calculateSI(float p, float r, float t);

int main() {

    float principal, rate, time, si;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Function Call
    si = calculateSI(principal, rate, time);

    cout << "\nSimple Interest = Rs." << si << endl;

    return 0;
}

// Function Definition
float calculateSI(float p, float r, float t) {

    float interest;

    interest = (p * r * t) / 100;

    return interest;
}