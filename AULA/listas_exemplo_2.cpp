#include <iostream>
#include <list>  //biblioteca para permitir usar as listas
using namespace std;

/*
-> listas ligadas permitem a flexibilidade de inser��o/remo��o de elementos, podendo
crescer e diminuir conforme a necessidade
-> lista-pilha: inser��o � realizada no in�cio(topo) e tamb�m � feita a remo��o no
topo
-> lista-fila: inser��o relizada no final e remo��o feita no final tamb�m
*/

int main()
{
	//declara��o de vari�veis
	list <int> lista;  /*assim que se declara uma lista, o tipo de vari�vel que est�
						entre < > � o tipo que ser� guardado na lista*/
	int x;
	
	lista.push_back(1);  //insere 1 no in�cio da lista
	lista.push_back(2);  //insere 2 no in�cio da lista
	lista.push_back(3);  //insere 3 no in�cio da lista
	
	/*
	-> .push_front() = usado pra lista tipo pilha
	-> .push_back() = usado pra lista tipo fila
	*/
	
	// lista -> 3 -> 2 -> 1
	
	while(!lista.empty())  //enquanto a lista n�o estiver vazia
	{
		x = *lista.begin();  //primeiro elemento da lista
		cout << x << " ";
		lista.pop_front();  //remove o primeiro elemento da lista
	}
	// lista -> (vazia)
	cout << endl;
	
	return 0;
}