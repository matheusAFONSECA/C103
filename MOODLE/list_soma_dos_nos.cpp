#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista)  //fun��o que far� a soma dos elementos
{
	list <int>::iterator p;  //interador
	int x;  //var aux para soma
	
	x = 0;
	for(p = lista.begin(); p != lista.end(); p++)
		x = x + *p;
	
	return x;
}

int main()
{
	//declara��o de vari�veis
	list <int> lista;  //lista
	int x;  //var aux para leitura

	//lendo elementos, inserindo na lista 
	cin >> x;
	while(x != 0)  //condi��o de parada de entrada de elementos na lista
	{
		lista.push_back(x);
		cin >> x;
	}
	
	//chamada da fun��o e sa�da da soma
	cout << soma(lista) << endl;

	return 0;
}
