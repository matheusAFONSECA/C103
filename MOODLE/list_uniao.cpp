#include <iostream>
#include <list>
using namespace std;

int main()
{
	//declaração de variáveis
	list <int> lista1;  //lista 2
	list <int> lista2;  //lista 2
	list <int>::iterator p;  //interador para varrer a lista 1
	list <int>::iterator q;  //interador para varrer a lista 2
	list <int> listafinal;  //lista com a junção de 1 e 2
	int y, x;  //var aux para leitura

	//entrada de elemento na lista 1 e 2
	cin >> x;
	while(x != 0)  //condição de parada de entrada de elementos na lista
	{
		lista1.push_back(x);
		cin >> x;
	}
	cin >> y;
	while(y != 0)  //condição de parada de entrada de elementos na lista
	{
		lista2.push_back(y);
		cin >> y;
	}

	//ordenação dos elementos na lista final
	while(!lista1.empty() || !lista2.empty())  //while para quando ambas as listas esttiverem vazias
	{
		p = lista1.begin();  //definição do primeiro elemento da lista 1
		q = lista2.begin();  //definição do primeiro elemento da lista 2
		if(*p == *q)  //caso em que os elementos são iguais
		{
			listafinal.push_back(*p);  //adição do elemento na lista final
			lista1.pop_front();  //liberação do elemento da lista 1 - início de liberação de memória
			lista2.pop_front();  //liberação do elemento da lista 2 - início de liberação de memória
		}
		else if(*p > *q)  //caso em que o elemento da lista 2 é maior que a lista 1
		{
			listafinal.push_back(*q);  //adição do elemento da lista 2
			lista2.pop_front();
		}
		else if(*p < *q)  //caso em que o elemento da lista 2 é menor que a lista 1
		{
			listafinal.push_back(*p);  //adição do elemento da lista 1
			lista1.pop_front();
		}
		else if(!lista1.empty())  //caso em que a lista 1 já está vazia
		{
			listafinal.push_back(*q);  //adição do elemento da lista 2
			lista2.pop_front();
		}
		else if(!lista2.empty())  //caso em que a lista 2 já está vazia
		{
			listafinal.push_back(*p);  //adição do elemento da lista 1
			lista1.pop_front();
		}
	}


	//saída de elementos da lista final e liberação de memória
	while(!listafinal.empty())
	{
		x = *listafinal.begin();  //primeiro elemento da lista
		cout << x << " ";
		listafinal.pop_front();
	}

	return 0;
}
