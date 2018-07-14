#include <iostream>
#include "Mountains.hpp"
#include "House.hpp"
#include "Trees.hpp"
#include "Background.hpp"
#include "Lake.hpp"
#include "IceSkater.hpp"
#include "Scene.hpp"

using namespace std;

Scene::Scene(int l, int d):background(),lake(l), iceskater(d) {
	length = l;
	distance = d;
	cout<< "Scene was just created!" << endl;
}

Scene::~Scene() {
	cout <<"Scene is about to be destroyed!"<< endl;
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