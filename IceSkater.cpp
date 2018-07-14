#include <iostream>
#include <cmath>
#include "IceSkater.hpp"

using namespace std;

/* Constructor of the class "IceSkater" */
IceSkater::IceSkater(int d) {
	pos = 0;
	Dist = d;
	cout << "An IceSkater participates" << endl;
}

/* Destructor of the class "Iceskater" */
IceSkater::~IceSkater() {
	cout << "An IceSkater will be discarted" << endl;
}

/* Starts the show */
void IceSkater::start() {
	cout << "Here I am..." << endl ;
}

/* The iceskater glides. Prints iceskater's spins */
void IceSkater::skate(int d) {
	pos += d;
	cout << "An IceSkater skates (" << ceil((float)d/(float)Dist) << " spins!)" << endl ;
}

/* The iceskater spins on his position */
void IceSkater::rotate() {
	cout << "An IceSkater spins on position " << pos << endl;
}

/* The iceskater jumps on his position */
void IceSkater::jump() {
	cout << "An IceSkater jumps on position " << pos << endl;
}