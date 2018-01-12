#include <iostream>

using namespace std;

int main() {
	long long int pasTri[60][60];
	pasTri[0][0] = 1;

	cout << "long long int pasTri[60][60] = {{1,},";

	for(int i = 1; i < 50; i++) {
		pasTri[i][0] = 1;
		pasTri[i][i] = 1;

		cout << "{1,";

		for(int j = 1; j < i; j++) {
			pasTri[i][j] = pasTri[i-1][j-1] + pasTri[i-1][j];

			cout << pasTri[i][j] << ",";
		}

		cout << "1},";
	}

	cout << "};" << endl;

	return 0;
}
