#include <iostream>
#include <cstdlib>
#include "Mountains.hpp"
#include "House.hpp"
#include "Trees.hpp"
#include "Background.hpp"
#include "Lake.hpp"
#include "IceSkater.hpp"
#include "Scene.hpp"

using namespace std;


int main(int argc, char const *argv[]) {
	if (argc != 3) {
		cout << "Incorrect amount of arguments" << endl;
		cout << "You should give exactly two arguments (./IceSkater L Dist)" << endl;
		cout << "L: Lake's length" << endl << "Dist: The distance that iceskater glides" << endl;
		return -1;
	}
	Scene scene(atoi(argv[1]), atoi(argv[2]));
	scene.plot();
    return 0;
}