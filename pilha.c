#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char link[60];
    struct endereco *prev;
};
typedef struct endereco end;

int main(){
    end *last=NULL, *pilha, *aux;
    int acelerador=1;
    while(acelerador){
        pilha = (end *)malloc(sizeof(end));
        scanf("%s", pilha->link);
        pilha->prev=NULL;
        if(strcmp(pilha->link,"E")==0){
            if(last==NULL){
                printf("!\n");
            }else{
                while(last!=NULL){
                    aux = last;
                    last=last->prev;
                    free(aux);
                    printf("@\n");
                }
            }
            break;
        }else if(strcmp(pilha->link,"B")==0){
            if(last==NULL){
                printf("Vazio\n");
            }else{
                printf("%s\n", last->link);
                aux = last;
                last = last->prev;
                free(aux);
            }
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
