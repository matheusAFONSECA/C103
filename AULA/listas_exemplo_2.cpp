#include <iostream>
#include <list>  //biblioteca para permitir usar as listas
using namespace std;

/*
-> listas ligadas permitem a flexibilidade de inserção/remoção de elementos, podendo
crescer e diminuir conforme a necessidade
-> lista-pilha: inserção é realizada no início(topo) e também é feita a remoção no
topo
-> lista-fila: inserção relizada no final e remoção feita no final também
*/

int main()
{
	//declaração de variáveis
	list <int> lista;  /*assim que se declara uma lista, o tipo de variável que está
						entre < > é o tipo que será guardado na lista*/
	int x;
	
	lista.push_back(1);  //insere 1 no início da lista
	lista.push_back(2);  //insere 2 no início da lista
	lista.push_back(3);  //insere 3 no início da lista
	
	/*
	-> .push_front() = usado pra lista tipo pilha
	-> .push_back() = usado pra lista tipo fila
	*/
	
	// lista -> 3 -> 2 -> 1
	
	while(!lista.empty())  //enquanto a lista não estiver vazia
	{
		x = *lista.begin();  //primeiro elemento da lista
		cout << x << " ";
		lista.pop_front();  //remove o primeiro elemento da lista
	}
	// lista -> (vazia)
	cout << endl;
	
	return 0;
}