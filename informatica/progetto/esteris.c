/*lavoro di Seddiq, Leonardo e Ihab*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void griglia(char *a1, char *a2, char *a3, char *b1, char *b2, char *b3, char *c1, char *c2, char *c3) {
    int i , j;
    printf("\n  1    2    3\n");
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            if (i == 2 || i == 4 || j == 2 || j == 4) {
                printf(" * ");
            } else {
                if (i == 1 && j == 1) printf(" %c ", *a1);
                if (i == 1 && j == 3) printf(" %c ", *a2);
                if (i == 1 && j == 5) printf(" %c", *a3);
                if (i == 3 && j == 1) printf(" %c ", *b1);
                if (i == 3 && j == 3) printf(" %c ", *b2);
                if (i == 3 && j == 5) printf(" %c", *b3);
                if (i == 5 && j == 1) printf(" %c ", *c1);
                if (i == 5 && j == 3) printf(" %c ", *c2);
                if (i == 5 && j == 5) printf(" %c", *c3);
            }
        }
        if (i == 1) printf("  A ");
        if (i == 3) printf("  B ");
        if (i == 5) printf("  C ");
        printf("\n");
    }
}
void opzioni(){
    printf("\nScegli dove mettere la tua scelta:\n");
    printf("1 = A1, 2 = A2, 3 = A3\n");
    printf("4 = B1, 5 = B2, 6 = B3\n");
    printf("7 = C1, 8 = C2, 9 = C3\n");
    

}
int main(){
    
    int turno = 0, opzione, leo=0;
    char g1,g2;
    char a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
    char simbolo;
    
    do{
        printf("giocatore uno vuoi iniziare con x/o: ");
        scanf(" %c",&g1);
    }while(g1!='x'&& g1!='o');
    if(g1=='x'){
        g2='o';  
    }
    else{
        g2='x';
        g1='o';
    }
    do{
        griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
        opzioni();
        turno++;
        if(turno%2==0){
            printf("\ninserisci la tua scelta giocatore 2:\n");
            scanf("%d",&opzione);
        }else{
            printf("\ninserisci la tua scelta giocatore 1:\n");
            scanf("%d",&opzione);
        }
        
        if (turno % 2 == 0) {
            simbolo = g2;
        } else {
            simbolo = g1;
        }
        switch(opzione){
            case 1: if(a1 == ' ') a1 = simbolo; else if(turno<9)turno--;break;
            case 2: if(a2 == ' ') a2 = simbolo; else if(turno<9)turno--; break;
            case 3: if(a3 == ' ') a3 = simbolo; else if(turno<9)turno--;break;
            case 4: if(b1 == ' ') b1 = simbolo; else if(turno<9)turno--;break;
            case 5: if(b2 == ' ') b2 = simbolo; else if(turno<9)turno--;break;
            case 6: if(b3 == ' ') b3 = simbolo; else if(turno<9)turno--;break;
            case 7: if(c1 == ' ') c1 = simbolo; else if(turno<9)turno--;break;
            case 8: if(c2 == ' ') c2 = simbolo; else if(turno<9)turno--;break;
            case 9: if(c3 == ' ') c3 = simbolo; else if(turno<9)turno--;break;
            default: printf("Scelta non valida, riprova.\n");
            turno--;
            break;
        }
        
        system("clear");
        if(a1==a2 && a2==a3 && a2 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }
        if(c1==c2 && c2==c3 && c2 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }
        if(b1==b2 && b2==b3 && b2 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }
        if(a1==b2 && b2==c3 && b2 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }if(a3==b2 && b2==c1 && b2 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }
        if(a1==b1 && b1==c1 && b1 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }if(a2==b2 && b2==c2 && a2 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }
        if(a3==b3 && b3==c3 && a3 == simbolo){
            printf("il giocatore con %c ha vinto",simbolo);
            turno+=50;
            griglia(&a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3);
            break;
        }
        
        

    }while(turno<9);
    if(turno==9){
        printf("la partita finisce in pareggio");

    }
}