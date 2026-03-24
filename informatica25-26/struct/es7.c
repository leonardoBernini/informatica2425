#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct data{
	int giorno;
	int mese; 
	int anno;
}data;
typedef struct Libro{
    char titolo[100];
    char autore[100];
    int isbn;
    int copie_totali;
    int copie_disponibili;
    data data_prestito;
    data data_restituzione;
}Libro;

Libro* inserisciLibroDaTastiera(Libro *l, int n) {
	l=(Libro*)realloc(l,n*sizeof(Libro));
	if(l==NULL){
	    printf("errore di allocazione:\n");
		exit(1);
	}
    printf("Inserisci titolo: ");
    fgets(l[n-1].titolo, 100, stdin);
    l->titolo[strcspn(l[n-1].titolo, "\n")] = '\0';
    
    printf("Inserisci autore: ");
    fgets(l->autore, 100, stdin);
    l->autore[strcspn(l[n-1].autore, "\n")] = '\0';

    printf("Inserisci isbn: ");
    scanf("%d", &l[n-1].isbn);

    printf("Inserisci le copie totali: ");
    scanf("%d", &l[n-1].copie_totali);
    l[n-1].copie_disponibili= l[n-1].copie_totali;

    getchar(); 
    return l;
}

void stampa(Libro *l,int n){
	int i;
	for(i=0; i<n; i++){
	
	    printf("  Titolo: %s\n", l[i].titolo);
	    printf("  Autore: %s\n", l[i].autore);
	    printf("  copie totali: %d \n", l[i].copie_totali);
	    printf("  copie disonibili: %d \n", l[i].copie_disponibili);
	    printf("  isbn:  %d\n\n", l[i].isbn);
	}
}
void prestito(Libro* l,int n){
	
	int isbn;
	int i;
	printf("\ninserisci isbn:\n");
	scanf("%d",&isbn);
	
    
    for(i=0; i<n; i++){
    	if (isbn==l[i].isbn) {
            l[i].copie_disponibili-=1;
            if(l[i].copie_disponibili>0){
			
				printf("\ninserisci data prestito:\n");
	            printf("\n giorno:\n");
	            scanf("%d",&l[i].data_prestito.giorno);
	            printf("\n mese:\n");
	            scanf("%d",&l[i].data_prestito.mese);
	            printf("\n anno:\n");
	            scanf("%d",&l[i].data_prestito.anno);
	            
	            printf("\ninserisci la data di restituzione:\n");
	            printf("\n giorno:\n");
	            scanf("%d",&l[i].data_restituzione.giorno);
	            printf("\n mese:\n");
	            scanf("%d",&l[i].data_restituzione.mese);
	            printf("\n anno:\n");
	            scanf("%d",&l[i].data_restituzione.anno);
            
            
            
        	}return;
        }
        
	}
    printf("\nlibro non trovato\n");
	
}
void visualizza_prestito(Libro* l,int n){
	int i=0;
	for( i=0;i<n;i++){
		if(l[i].copie_disponibili<l[i].copie_totali){
			printf("\n%s\n",&l[i].titolo);
		}
		
	}
}
void stampa_prestito_scaduto(Libro* l,int n){
	int flag;
	int i=0;
	data d;
	printf("\ninserisci che giorno è oggi:\n");
	scanf("%d",&d.giorno);
	printf("\ninserisci che mese è oggi:\n");
	scanf("%d",&d.mese);
	printf("\ninserisci che anno è oggi:\n");
	scanf("%d",&d.anno);
	
	for( i=0;i<n;i++){
		flag=0;
		if(l[i].data_restituzione.anno<d.anno){
			flag=1;
		}else if(l[i].data_restituzione.anno==d.anno){
			if(l[i].data_restituzione.mese<d.mese){
				flag=1;
			}else if(l[i].data_restituzione.mese==d.mese){
				if(l[i].data_restituzione.giorno<d.giorno){
					flag=1;
				}else if(l[i].data_restituzione.giorno==d.giorno){
					printf("\nla scadenza scade oggi\n");
				}
			}
		}
		if(flag=1){
			printf("\nscaduto= %s\n",l[i].titolo);
		}
		
	}
}


int main(){
	Libro* l=NULL;
	int n=0;
    int scelta;
    char c;

    do {
        printf("1. Inserisci un libro\n");
        printf("2. visualizza elenco libri\n");
        printf("3. prendi un libro in prestito\n");
        printf("4. visualizza libri in prestito\n");
        printf("5. stampa libri con prestito scaduto\n");
        
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        while((c = getchar()) != '\n') {}

        switch (scelta) {
            case 1:
            	n++;
            	l=inserisciLibroDaTastiera(l, n);
            	
            	break;
            case 2:
				stampa(l,n);
				break;
			case 3:
            	prestito(l, n);
            	break;
            case 4:
            	visualizza_prestito(l, n);
            	break;
            case 5:
            	stampa_prestito_scaduto(l,n);
            	break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while (scelta != 0);

    
    free(l);
    return 0;
}