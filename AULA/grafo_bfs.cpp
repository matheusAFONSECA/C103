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

void bfs(list<no>adj[], int nVertices, int s){  //fun��o auxiliar de BFS
	//declara��o de vari�veis
	int state[100];  //ocupado ou n�o
	int p[100];  //pai
	int u, v;  //vari�veis aux -> sa�da dos v�rtices
	int j;  //contador
	list<int> Q;  //lista de adjac�ncias
	list<no>::iterator q;  //varer� a lista de adjac�ncias
	
	for(j=0; j<nVertices; j++){
		state[j] = -1;  //n�o descoberto
		p[j]= -1;
	}
	state[s] = 0;  //descoberto
	p[s] = -1;  //pai vazio
	Q.push_back(s);
	
	while(!Q.empty()){
		u = *Q.begin();
		Q.pop_front();
		cout << u << endl;
		
		for(q = adj[u].begin(); q != adj[u].end(); q++){
			v = q -> v;
			cout << u << " " << v << endl;
			if(state[v] == (-1)){  //condi��o para n�o estar descoberto
				state[v] = 0;  //tornado o estado dele descoberto
				p[v] = u;  //redefinindo o pai do v�rtice
				Q.push_back(v); //adicionando na lista 
			}
		}
		state[u] = 1;  //processado
	}
}

int main()
{
	//declara��o de vari�veis
    list<no> adj[10]; // lista de adjac�ncias
    int nVertices; // numero de v�rtices do grafo
    int u, v; // v�rtices de // origem e destino de uma aresta
    int p;  // peso da aresta
    int s;  // vertice inicial
    int orientado = 0;  //n�o orientado
    
	// Lendo numero de vertices do grafo
    cin >> nVertices >> s;
    
    cin >> u >> v >> p; 
    
    while((u!=-1) && (v!=-1) && (p!=-1))
    {
    	cria_aresta(adj, u, v, p, orientado);  //chamada da fun��o auxiliar de adjac�ncias
        cin >> u >> v >> p;
    }
    bfs(adj, nVertices, s);  //chamada da fun��o auxiliar respos�vel pelo bfs
	
	return 0;

}
