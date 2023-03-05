#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int a;  //uma var normal
	int *b;  //um ponteiro

	a = 2;
	b = &a;

	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl;
	/*
	-> & + alguma var: significa que isso determina o endere�o de uma var
	-> * + alguma var = ponteiro:  vai at� o endere�o onde o ponteiro foi indicado
	e ent�o pega o valor que est� no endere�o e o usa
	-> &: refer�ncia (endere�o de...)
	-> *: de refer�ncia (aponta onde est�...) 
	*/

	return 0;
}