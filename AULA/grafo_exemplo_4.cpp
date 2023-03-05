#include <iostream>
#include <list>
using namespace std;

/*
-> Deixo salientado aqui que a forma como esse exemplo é demonstrado é a inserção
dos elementos de forma manual, ou seja, não existe nenhuma entrada de dados aqui,
somente saída e demonstração de como funciona a formação de uma adjacência de um
grafo por meio de um código
-> esse grafo montado é NÃO ORIENTADO
-> Mesmo coisa feita no exemplo 3 sendo que aqui foi feita de forma mais simplificada
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
	int nVertices = 3;  //N° de vertices do grafo
	int i;  //contador

	//definindo dois vertices e seus pesos
	u = 0;
	v = 1;
	peso = 5;

	//agrupando os valores em uma struct, depois serão usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//criando aresta de volta (não orientado)
	aux.v = u;
	adj[v].push_back(aux);

	//definindo dois vertices e seus pesos
	u = 0;
	v = 2;
	peso = 3;

	//agrupando os valores em uma struct, depois serão usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//criando aresta de volta (não orientado)
	aux.v = u;
	adj[v].push_back(aux);

	//saida da adjacência (Mostrando o Grafo)
	for(i = 0; i < nVertices; i++)
	{
		for(p = adj[i].begin(); p != adj[i].end(); p++)
		{
			cout << i << " " << p->v << " " << p->peso << endl;
		}
	}

	return 0;
}
