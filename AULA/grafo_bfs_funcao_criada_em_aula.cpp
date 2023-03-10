void BFS(list <no> adj[], int nVertices, int s) 
{
// FUN??O DE BFS, MOSTRA AS ARESTAS DE UMA LISTA DE ADJAC?NCIAS E SEUS VERTICES	
	char state[10];  //'u': n?o processado, 'd': descoberto, 'p': processado
	int p[10];  //pai - de onde um vetor se origina ao ser descoberto
				/* quando o pai for igual a -1 para determinado vertice quer dizer
				que o mesmo n?o possui um pai, ou seja, o vertice ainda n?o foi 
				descoberto e por isso n?o possui "origem"*/
	int u;  //contador 
	list<int> Q;  //fila auxiliar para os vertices do grafo
	list<no> :: iterator q;  /*interator auxiliar para varrer a lista de adjac?ncia
							 de um vertice*/ 

	for(u = 0; u < nVertices; u++)
		if(u != s)  //os vertices, sem ser o inicial (s) est?o n?o processados
		{
			state[u] = 'u';
			p[u] = -1;  //sem pais
		}
    state[s] = 'd';  //definindo o vertice inicial como descoberto
    p[s] = -1;  //vertice inicial ter?, comumente, o pai vazio
    
    Q.push_back(s);  //vertice inicial inserido na lista auxiliar de vertices
    
    while(!Q.empty())
	{
		u = *Q.begin();  //definindo u igual o primeiro elemento da lista
		Q.pop_front();  //apagando o primeiro elemento da lista
		cout << u << endl;  //mostrar o vertice
		
		/*AGORA SER? VARRIDO A LISTA DE ADJAC?NCIA PARA MOSTRAR AS ARESTAS QUE
		O VERTICE EST? LIGADO*/
		
		for(q = adj[u].begin(); q != adj[u].end(); q++)
		{
			v = q -> v;  //definindo um vertice da outra ponta da aresta do vertice "u"
			cout << u << " " << v << endl;  //mostrando a aresta
			if(state == 'u')
			{
				state[v] = 'd';  //definindo o novo vertice como descoberto
				p[v] = u;  //definindo o pai do vertice descoberto
				Q.push_back(v);  //adicionando o novo vertice na lista de vertices
			}
		}
		state[u] = 'p';  //definindo o estado do vertice como processado
	}
}
