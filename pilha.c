#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char link[60];
    struct endereco *prev;
};
typedef struct endereco end;

end *pilha(end *last){
    end *leitor, *aux;
    leitor = (end *)malloc(sizeof(end));
    printf("Digite o site: \n");
    scanf("%s", leitor->link);
    leitor->prev=NULL;
    if(last->prev=NULL){
        last=leitor;
        return last;
    }
    else{
        aux = last;
        last = leitor;
        last->prev=aux;
        return last;
    }    
}

int main(){
    end *last=NULL;
    int acelerador=1;
    while(acelerador){
        last = pilha(last);
    }


    return 0;
}
