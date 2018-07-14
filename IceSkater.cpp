#include <iostream>
#include <cmath>
#include "IceSkater.hpp"

using namespace std;

IceSkater::IceSkater(int d) {
	pos = 0;
	Dist = d;
	cout << "An IceSkater participates" << endl;
}	

IceSkater::IceSkater(int d, int p) {
	pos = p;
	Dist = d;
	cout << "An IceSkater participates" << endl;
}	

IceSkater::~IceSkater() {
	cout << "An IceSkater will be discarted" << endl;
}	

void IceSkater::start() {
	cout << "Here I am.." << endl ;
}

void IceSkater::skate(int d) {
	pos = pos + d;
	cout << "An IceSkater skates" << endl ;
	cout << "The IceSkater did " << ceil((float)d/(float)Dist) << " shift(s)!" << endl;
}

void IceSkater::rotate() {
	cout << "An IceSkater spins on position " << pos << endl;
}

void IceSkater::jump() {
	cout << "An IceSkater jumps on position " << pos << endl;
}