#pragma once

// Do not change the name of the attributes nor the methods

class Complex {
private:
    int real, imag;
    
public:
    Complex();
    Complex(int r, int i);
	int getReal();
	void setReal(int r);
	int getImag();
	void setImag(int i);
    Complex add(Complex another);
    Complex subtract(Complex another);
	void print();
};