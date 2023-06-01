typedef struct ELEMENTO
{
    int data;
    ELEMENTO *next;
} ELEMENTO;

typedef struct ESTRUTURA
{
    ELEMENTO *head;
} ESTRUTURA;

ESTRUTURA *e;

void insere()
{
    ELEMENTO *p = (ELEMENTO *)malloc(sizeof(ELEMENTO));
    p->data = rand() 0;
    p->next = e->head;
    e->head = p;
}

int remove()
{
    ELEMENTO *p = e->head;
    int data;
    if (p != NULL)
    {
        e->head = p->next;
        p->next = NULL;
        data = p->data;
        return data;
    }
}