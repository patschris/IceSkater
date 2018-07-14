#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char const *argv[]) {
	int L, Dist;
	if (argc != 3) {
		cout << "Incorrect amount of arguments" << endl;
		cout << "You should give exactly two arguments (./IceSkater L Dist)" << endl;
		cout << "L: Lake's length" << endl;
		cout << "Dist: The distance that iceskater glides" << endl;
		return -1;
	}
	L = atoi(argv[1]);
	Dist = atoi(argv[2]);
	Scene scene(L, Dist) ;
	scene.plot() ;
    return 0;
}