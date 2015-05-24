#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_elemento{
    int valore;
    struct s_elemento* prossimo;
};

typedef struct s_elemento elemento;

int main(int argc, char** argv) {
    int scelta = 1;
    int i = 0;
    elemento* primo;
    elemento* temp;
    
    primo = (elemento*)malloc(sizeof(elemento));
    
    printf("Inserisci un valore nell'elemento %d della lista: ",i);
    scanf("%d",&(*primo).valore);
    
    printf("Vuoi inserire un altro valore ? Si (1) No (0): ");
    scanf("%d",&scelta);
    
    while(scelta){
        temp = (elemento*)malloc(sizeof(elemento));
        i++;
        printf("Inserisci un valore nell'elemento %d della lista: ",i);
        scanf("%d",&(*temp).valore);
        (*temp).prossimo = primo;
        primo = temp;
        printf("Vuoi inserire un altro valore ? Si (1) No (0): ");
        scanf("%d",&scelta);
    }
    
    temp = primo;
    while(temp != NULL){
        printf("%d\n",(*temp).valore);
        temp = (*temp).prossimo;
    }
    
    

    return (EXIT_SUCCESS);
}
