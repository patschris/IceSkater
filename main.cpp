#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char const *argv[]) {
	int L, N;
	if (argc != 3) {
		cout << "Incorrect amount of arguments" << endl;
		return -1;
	}
	L = atoi(argv[1]);
	N = atoi(argv[2]);
	cout << "L = " << L << " N = " << N << endl;
    return 0;
}
