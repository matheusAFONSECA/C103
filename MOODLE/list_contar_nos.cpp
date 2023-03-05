#include <iostream>
#include <list>
using namespace std;

int contar(list<int> lista)  //função que fará a contagem dos elementos
{
	list <int>::iterator p;  //interador
	int x;  //var aux para soma
	
	x = 0;
	for(p = lista.begin(); p != lista.end(); p++)
		x++;
	
	return x;
}

int main()
{
	//declaração de variáveis
	list <int> lista;  //lista
	int x;  //var aux para leitura

	//lendo elementos e inserindo na lista 
	cin >> x;
	while(x != 0)  //condição de parada de entrada de elementos na lista
	{
		lista.push_back(x);
		cin >> x;
	}
	
	//chamada da função e saída da contagem
	cout << contar(lista) << endl;

	return 0;
}
