#include <iostream>

using namespace std;

int main(){
	char a[] = {'a', 'b', 'c', 'd'};
	for (int i = 0 ; i < 4; i++){
		for (int j = 0 ; j < 4; j++){
			for (int k = 0 ; k < 4; k++){
                cout << a[i];
                cout << a[j];
				cout << a[k];
				cout << endl;
			}

		}

	}
}

