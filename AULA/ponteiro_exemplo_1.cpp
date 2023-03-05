#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int a;  //uma var normal
	int *b;  //um ponteiro

	a = 2;
	b = &a;

	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl;
	/*
	-> & + alguma var: significa que isso determina o endereço de uma var
	-> * + alguma var = ponteiro:  vai até o endereço onde o ponteiro foi indicado
	e então pega o valor que está no endereço e o usa
	-> &: referência (endereço de...)
	-> *: de referência (aponta onde está...) 
	*/

	return 0;
}