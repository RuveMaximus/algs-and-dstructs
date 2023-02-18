#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

	if (argc < 2) {
		cout << "./<exec file> <file name>" << endl;
		return -1;
	}
	char *filename = argv[1];

	ifstream in(filename);
	string a, b, c;
	while(!in.eof()) {
		in >> a >> b >> c; 
		cout << 2 * sin(stof(a)) * sin(stof(b)) + cos(stof(c)) << endl;
	}
}
