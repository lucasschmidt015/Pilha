#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char link[60];
    struct endereco *prev;
};
typedef struct endereco end;

void printer(end *last){
    end *aux;
    for(aux=last;aux!=NULL;aux=aux->prev){
        printf("%s",aux->link);
    }
}

int main(){
    end *last=NULL, *pilha, *aux;
    int acelerador=1;
    char teste[60]={"B"};
    while(acelerador){
        pilha = (end *)malloc(sizeof(end));
        printf("Digita ai: \n");
        scanf("%s", pilha->link);
        pilha->prev=NULL;
        if(strcpy(pilha->link,teste)==0){
            break;
        }
        else{
            if(last==NULL){
                last = pilha;
            }else{
                aux = last;
                last = pilha;
                pilha->prev=aux;
            }
        }
    }


    return 0;
}
