#include <iostream>
#include "Scene.hpp"

using namespace std;

Scene::Scene(int L, int Dist):background(),lake(L),iceskater(Dist) {
	length = L ;
	distance = Dist ;
	cout<< "Scene was just created!" << endl;
}

Scene::~Scene() {
	cout <<"Scene is about to be destroyed!"<< endl ;
}

void Scene::plot() {
	lake.light_up() ;
	iceskater.start() ;
	iceskater.skate(length/2) ;
	iceskater.rotate() ;
	iceskater.jump() ;
	iceskater.skate(length/2) ;
	lake.rotate() ;
	lake.darken() ;
}