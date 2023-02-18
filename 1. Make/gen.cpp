#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

float gNum() {
	float ans = (float)rand() / (float) RAND_MAX;
	return M_PI * (2 * ans - 1);
}

int main(int argc, char *argv[]) {
	if (argc < 3) {
		cout << "./<exec file> <n> <file name>" << endl;
		return -1;
	}

	srand(time(NULL));

	int n = atoi(argv[1]);
	char *filename = argv[2];
	
	ofstream out(filename);

	for (short i = 0; i < n; i++) {
		out << gNum() << ' ' << gNum() << ' ' << gNum() << "\n\n";
	}
	out << endl;

	out.close();
	return 0;
}

