#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int vetor[3];
	int *p;

	vetor[0] = 1;
	vetor[1] = -3;
	vetor[2] = 7;

	p = vetor;
	cout << *p << endl;

	p++;
	cout << *p << endl;

	p++;
	cout << *p << endl;

	/*
	-> vetor � um ponteiro
	-> ao aumentar a posi��o do endere�o "corremos" pelo vetor e seus elementos - similar
	quando corremos pelos valores de um vetor 
	*/

	return 0;
}
