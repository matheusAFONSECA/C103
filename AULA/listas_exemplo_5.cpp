#include <iostream>
#include <list>
using namespace std;

/*
-> ITERADORES: podem ser istos como ponteiros para os elementos da lista, usados
então para varrer uma lista, mesmo principio de um contador que ajuda a varrer um
vetor
-> list.end() = aponta para um vazio que está logo depois da lista, ou seja, é uma
posição vazia que está "aberta" ao final da lista
-> caso queira utilizar o conteúdo que está sendo apontado pela varredura do interador
tem que usar o ponteiro porque é ele que vai apontar o valor do endereçamento
*/
int main()
{
	//declaração de variáveis
	list <int> lista;  //lista
	list <int>::iterator p;  //interador
	int x;  //var aux para leitura
	int soma;  //soma dos elemetos da lista
	int n;  //n° de elementos inseridos na lista
	double media;  //media dos elementos da lista

	//ledo elementos e inserindo na lista
	cin >> x;
	while(x != -1)  //condição de parada de entrada de elementos na lista
	{
		lista.push_back(x);
		cin >> x;
	}

	//contando elementos inseridos
	soma = 0;
	n = 0;
	for(p = lista.begin(); p != lista.end(); p++)
	{
		n++;
		soma = soma + *p;
	}
	media = (float) soma / n;  /*converte o tipo de variável de "soma" e "n" de  
								int para o tipo float*/
	
	//mostrando resultado
	cout << "media = " << media << endl;

	return 0;
}
