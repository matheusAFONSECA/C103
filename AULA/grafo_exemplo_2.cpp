#include <iostream>
#include <list>
using namespace std;

/*
-> Deixo salientado aqui que a forma como esse exemplo é demonstrado é a inserção
dos elementos de forma manual, ou seja, não existe nenhuma entrada de dados aqui,
somente saída e demonstração de como funciona a formação de uma adjacência de um
grafo por meio de um código
-> esse grafo montado é ORIENTADO
*/

struct no
{
	int v;  //informação de adjacência (destino)
	int peso;  //peso da aresta
};

int main()
{
	//declaração de variáveis
	list <no> adj[10];  //lista de adjacência
	int u, v;  //vertices de origem e destino de uma aresta
	int peso;  //peso da aresta u-v
	no aux;  //struct aux
	list <no> :: iterator p;  //ponteiro auxiliar

	//definindo dois vertices e seus pesos
	u = 0;
	v = 1;
	peso = 5;

	//agrupando os valores em uma struct, depois serão usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//definindo dois vertices e seus pesos
	u = 0;
	v = 2;
	peso = 3;

	//agrupando os valores em uma struct, depois serão usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//saida da adjacência
	p = adj[0].begin();  //definindo início da lista
	/*
	-> caso mude o adj[0] para adj[1] ocorre a mudança para a o próximo vertice e
	suas adjacências
	*/
	cout << "Origem: " << u << endl;
	cout << "Destino: " << p->v << endl;
	cout << "Peso: " << p->peso << endl;
	cout << endl;
	p++;  //passando pela lista para mostrar adjacências
	cout << "Origem: " << u << endl;
	cout << "Destino: " << p->v << endl;
	cout << "Peso: " << p->peso << endl;

	return 0;
}
