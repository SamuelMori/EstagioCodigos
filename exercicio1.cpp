#include <iostream>
using namespace std;

main() {
	int num;
	int fibonacci[10000];
	int pertence = 0;
	int i = 2;
	
	cin >> num;
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	
	for(int j = 0; j < 3; j++) {
		if(num == fibonacci[j]) {
			pertence = 1;
			break;
		}
		j++;
	}
	if(pertence == 0) {
		while(fibonacci[i] <= num) {
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
		if(num == fibonacci[i]) {
			pertence = 1;
			break;
		}
		i++;
	}
	}	
	
	if(pertence == 1) {
		cout << num << " pertence a sequencia";
	} else {
		cout << num << " nao pertence a sequencia";
	}
}
