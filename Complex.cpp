#include <iostream>
using namespace std;

#include "Complex.hpp"

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(int r, int i) {
    real = r;
    imag = i;
}

int Complex:: getReal() {
    return real;
}

void Complex:: setReal(int r) {
    real = r;
}

int Complex:: getImag() {
    return imag;
}

void Complex:: setImag(int i) {
    imag = i;
}

// TODO: Write the method add


// TODO: Write the method subtract



void Complex:: print() {
    cout << "( " << real << ", " << imag << "i )"<< endl;
}