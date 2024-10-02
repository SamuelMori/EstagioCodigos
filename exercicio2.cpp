#include <iostream>
#include <cstring>
using namespace std;

main() {
	char string[1000000];
	int quantidadeA = 0;
	int tamanho;
	
	cin.getline(string,1000000);
	
	tamanho = strlen(string);
	
	for(int i = 0; i < tamanho; i++) {
		if(string[i] == 65 || string[i] == 97) {
			quantidadeA++;
		}
	}
	
	cout << quantidadeA;
}
