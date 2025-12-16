#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Canzone {
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;


//int id_univoco = 0;


void stampa_canzone(Canzone *c);
void set_canzone(Canzone *c);
Lista* crea_lista();
void stampa_lista(Lista *l);
void inserisci_canzone_lista(Lista *l);
void ricerca_canzone_artista(Lista *l, char* artista);
void libera_memoria(Lista* l);


void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist);
void stampa_playlist(Lista* playlist);
void cancella_canzone_playlist(Lista *playlist);



int main() {
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("4. Aggiungi canzone alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Cancella canzone dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar(); 

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 4:
                inserisci_canzone_playlist(lista_canzoni, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                cancella_canzone_playlist(playlist);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    libera_memoria(lista_canzoni);
    libera_memoria(playlist);
    return 0;
}


void stampa_canzone(Canzone *c) {
    Canzone* current = c;
    printf("Lista: ");
    while (current != NULL) {
        printf("%d -> ", current->titolo);
        current = current->next;
    }
   
}

void set_canzone(Canzone *c) {
    
}

Lista* crea_lista() {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->testa = NULL;
    lista->lunghezza = 0;
    return lista;
    
}

void stampa_lista(Lista *l) {
    Canzone* current = l->testa;
    int i=0;
    
    while ( current->next != l->testa) {
        printf("canzone %d:\n",i+1);
        printf("\tid  -> %d\n", current->id);
        printf("\ttitolo  -> %s", current->titolo);
        printf("\tartista -> %s", current->artista);
        printf("\tdurata  -> %d minuti\n", current->durata);
        current = current->next;
        i++;
    }
    
}

void inserisci_canzone_lista(Lista *l) {
    Canzone* nuovoNodo = (Canzone*)malloc(sizeof(Canzone));
    nuovoNodo->id= rand()%10000+1;
    printf("inserisci titolo canzone: ");
    fgets(nuovoNodo->titolo,50,stdin);
    //getchar();
    printf("inserisci artista canzone: ");
    fgets(nuovoNodo->artista,50,stdin);
    //getchar();
    printf("inserisci durata canzone: ");
    scanf("%d",&nuovoNodo->durata);
    //getchar();
    
    
    if (l->testa == NULL) {
        l->testa = nuovoNodo;
    } else {
        Canzone* current = l->testa;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = nuovoNodo;
    }
    l->lunghezza++; 
}

void ricerca_canzone_artista(Lista *l, char* artista) {
    
}

void libera_memoria(Lista* l) {
    
}

void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist) {
    
}

void stampa_playlist(Lista* playlist) {
    
}

void cancella_canzone_playlist(Lista *playlist) {
    char canz[20];
    Canzone* current = playlist->testa;
    printf("quale canzone vuoi eliminare: ");
    fgets(canz,20,stdin);
    getchar;

    while (current != NULL) {
        Canzone* temp = current;
        if(strcmp(temp->titolo,canz)==0){
            current = current->next;
            free(temp);
        }
        
    }
    
}