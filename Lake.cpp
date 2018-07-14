#include <iostream>
#include "Lake.hpp"

using namespace std;

Lake::Lake(int L) {
	color = dark;
	length = L;
	cout << "A lake appears!" <<  endl ;
}

Lake::~Lake() {
	cout << "A lake will disappear!" << endl;
}

void Lake::lightup() {
	color = light;
	cout << "Lights on!"<< endl;
}

void Lake::darken() {
	color = dark;
	cout << "Lights off!" << endl;
}

void Lake::rotate() {
	cout << "Lake rotated" << endl;
}