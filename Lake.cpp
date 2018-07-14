#include <iostream>
#include "Lake.hpp"

using namespace std;

/* Constructor of the class "Lake" */
Lake::Lake(int L) {
	color = dark;
	length = L;
	cout << "A lake appears!" <<  endl ;
}

/* Destructor of the class "Lake" */
Lake::~Lake() {
	cout << "A lake will disappear!" << endl;
}

/* The lake is lighting up */
void Lake::light_up() {
	color = light;
	cout << "Lights on!"<< endl;
}

/* The lake darkens */
void Lake::darken() {
	color = dark;
	cout << "Lights off!" << endl;
}

/* The lake rotates */
void Lake::rotate() {
	cout << "Lake rotated" << endl;
}