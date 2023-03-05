#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista)  //função que fará a soma dos elementos
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
	//declaração de variáveis
	list <int> lista;  //lista
	int x;  //var aux para leitura

	//lendo elementos, inserindo na lista 
	cin >> x;
	while(x != 0)  //condição de parada de entrada de elementos na lista
	{
		lista.push_back(x);
		cin >> x;
	}
	
	//chamada da função e saída da soma
	cout << soma(lista) << endl;

	return 0;
}
