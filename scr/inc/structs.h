typedef struct NODE{
    void  *elemento; //Ponteiro genérico para valores de Vertices e Arestas
    struct  NODE *proximo;
    struct  NODE *anterior;
}node;

typedef struct LISTA{
    node    *raiz;
    node	*folha;
    int     qtd;
    void    (*addNodeInicio)(struct LISTA*, node*);
    void    (*addNodeFinal)(struct LISTA*, node*);
    void 	(*desconectaNode)(struct LISTA*, node*);
    node*   (*rmNodeFinal)(struct LISTA*);
    node*	(*swap)(struct LISTA*, node*, node*);
    void    (*addListaFinal)(struct LISTA*, struct LISTA*);
}lista;

typedef struct VERTICE{
    char    *valor;
    int     (*verticeEquals)(struct VERTICE*, struct VERTICE*);
}vertice;


typedef struct ARESTA{
    char *valor;
    vertice *antecessor;
    vertice *sucessor;
    int     (*arestaEquals)(struct ARESTA*, struct ARESTA*);
}aresta;

typedef struct GRAFO{
    lista   *arestas;
    void    (*addAresta)(struct GRAFO*, node*);
    void    (*printArestas)(struct GRAFO*);
    int     (*existeCaminho)(struct GRAFO*, aresta*);
    int     (*existeCiclo)(struct GRAFO*, vertice*);
    void    (*exibeCaminhos)(struct GRAFO*, aresta*);
}grafo;
