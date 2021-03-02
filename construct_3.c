#include <stdio.h>
#include<stdlib.h>
typedef struct node{
        int value;
        struct node* next;
} node_t;

node_t * construct_3()
{

        node_t * x= NULL;
        node_t * y= NULL;
        node_t * z= NULL;
        x = (node_t *)malloc(sizeof(node_t));
    y = (node_t *)malloc(sizeof(node_t));
    z = (node_t *)malloc(sizeof(node_t));
        z->value=3;
        z->next=NULL;
        y->value=2;
        y->next=z;
        x->value=1;
        x->next=y;
        z->next=x;
        return x;
}

int dump_all(node_t*);

int main(int argc, char ** argv) {

        node_t * x=construct_3();
        return dump_all(x);
}

int dump_all(node_t * x)
{
        printf("x -> %d\n", x->value);
        node_t * y=x->next;
        printf("%d -> %d\n", x->value, y->value);
        node_t * z=y->next;
        printf("%d -> %d\n", y->value, z->value);
        if(z->next != x)
        {
                printf("failed");
                return -1;
        }
        else
        {
                        printf("%d -> %d\n", z->value, x->value);
                        return 0;
        }

}
