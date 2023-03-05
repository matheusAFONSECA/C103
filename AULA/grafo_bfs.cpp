#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v; // vertice de destino da aresta
    int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado){  //função auxiliar
	no aux;  // var aux para inserir as arestas na lista de adjacências
	
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	if(orientado==0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
	
}

void bfs(list<no>adj[], int nVertices, int s){  //função auxiliar de BFS
	//declaração de variáveis
	int state[100];  //ocupado ou não
	int p[100];  //pai
	int u, v;  //variáveis aux -> saída dos vértices
	int j;  //contador
	list<int> Q;  //lista de adjacências
	list<no>::iterator q;  //varerá a lista de adjacências
	
	for(j=0; j<nVertices; j++){
		state[j] = -1;  //não descoberto
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
			if(state[v] == (-1)){  //condição para não estar descoberto
				state[v] = 0;  //tornado o estado dele descoberto
				p[v] = u;  //redefinindo o pai do vértice
				Q.push_back(v); //adicionando na lista 
			}
		}
		state[u] = 1;  //processado
	}
}

int main()
{
	//declaração de variáveis
    list<no> adj[10]; // lista de adjacências
    int nVertices; // numero de vértices do grafo
    int u, v; // vértices de // origem e destino de uma aresta
    int p;  // peso da aresta
    int s;  // vertice inicial
    int orientado = 0;  //não orientado
    
	// Lendo numero de vertices do grafo
    cin >> nVertices >> s;
    
    cin >> u >> v >> p; 
    
    while((u!=-1) && (v!=-1) && (p!=-1))
    {
    	cria_aresta(adj, u, v, p, orientado);  //chamada da função auxiliar de adjacências
        cin >> u >> v >> p;
    }
    bfs(adj, nVertices, s);  //chamada da função auxiliar resposável pelo bfs
	
	return 0;

}
