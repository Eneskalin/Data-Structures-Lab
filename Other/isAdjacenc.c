/*
1-) (20 pts.) Write a function that returns true if there is an edge between given two vertices in an
undirected graph which is represented by an adjacency list, false otherwise.*/
typedef struct isAdjacenc
{
    /* data */
}node;


int isAdjacency(node *heads[], int v1, int v2)
{
    node *temp=heads[v1];
    while (temp->next !=null)
    {
        if (temp->next->data == v2)
        {
            return 1;
        }
        temp=temp->next;
        
    }
    return 0;
}