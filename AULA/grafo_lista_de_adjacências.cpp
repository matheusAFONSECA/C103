#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v; // vertice de destino da aresta
    int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado){  //fun��o auxiliar
	no aux;  // var aux para inserir as arestas na lista de adjac�ncias
	
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	if(orientado==0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
	
}

int main()
{
    list<no> adj[10]; // lista de adjac�ncias
    int nVertices; // numero de v�rtices do grafo
    int u, v; // v�rtices de // origem e destino de uma aresta
    int p; // peso da aresta
    int i; // contador
    list<no>::iterator q; // iterador para varrer a lista de adjac�ncias
    int orientado;  //0->n�o orientado, 1->orientado
    
	// Lendo numero de vertices do grafo
    cin >> nVertices >> orientado;
    
    cin >> u >> v >> p; 
    
    while((u!=-1) && (v!=-1) && (p!=-1))
    {
    	cria_aresta(adj, u, v, p, orientado);  //criando lista adjacente e chamada da fun��o auxiliar
        cin >> u >> v >> p;
    }
    
    // Mostrando a lista de adjac�ncias
    for(i=0;i<nVertices;i++)
        for(q=adj[i].begin();q!=adj[i].end();q++)
            cout << i << " " << q->v << " " << q->peso << endl;
    
	return 0;

}
