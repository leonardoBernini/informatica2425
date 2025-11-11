#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* stringa;
typedef enum { false, true } Bool;

void maiuscole_minuscole(stringa s1, Bool maiusc_to_minusc){
    int i=0;
    if(maiusc_to_minusc){
        while(s1[i]!='\0'){
            if(s1[i]>='a'&& s1[i]<='z'){
                s1[i]-=32;
            }
            i++;
        }
    }else{
        while(s1[i]!='\0'){
            if(s1[i]>='A'&& s1[i]<='Z'){
                s1[i]+=32;
            }
            i++;
        }

    }
}

stringa crea_stringa_dinamica(){
    stringa str = NULL;
    int size = 0;
    int capacity = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (size + 1 >= capacity) {
            capacity += 10;
            str = realloc(str, capacity * sizeof(char));
            if (str == NULL) {
                printf("Errore di allocazione\n");
                exit(1);
            }
        }
        str[size++] = c;
    }
    str[size] = '\0';
    return str;
}

stringa ccc(stringa s, stringa codice, int* pc){
    int cnt=0;
    for(int i=0;s[i]!='\0'&& cnt<3; i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
            codice[cnt]=s[i];
            cnt++;
        }
    }
    for(int i=0;s[i]!='\0' && cnt<3;i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            codice[cnt]=s[i];
            cnt++;
        }
    }
    *pc=cnt;
    codice[cnt]='\0';
    return codice;
}

stringa nnn(stringa s, stringa codice, int* pc){
    int cnt=0;
    int consonanti=0;
    
    for(int i=0;s[i]!='\0'; i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
            consonanti++;
        }
    }
    if(consonanti==4){
        consonanti=0;
        for(int i=0;s[i]!='\0'&& cnt<3; i++){
            if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
                if(consonanti!=1){  
                    codice[*pc+cnt]=s[i];
                    cnt++;
                }
                consonanti++;
            }
        }

    }else{
        for(int i=0;s[i]!='\0'&& cnt<3; i++){
            if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
                codice[*pc+cnt]=s[i];
                cnt++;
            }
        }
        for(int i=0;s[i]!='\0' && cnt<3;i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
                codice[*pc+cnt]=s[i];
                cnt++;
            }
        }
    }
    *pc+=cnt;
    codice[*pc]='\0';
    return codice;
}

stringa yy(stringa s, stringa codice, int* pc){
    int lung=strlen(s);
    codice[(*pc)]=s[lung-2];
    (*pc)++;
    codice[(*pc)]=s[lung-1];
    (*pc)++;
    codice[*pc]='\0';
    return codice;
}

stringa m(stringa codice, int* pc){
    stringa mese = NULL;
    char lettera_mese;
    int valido = 0;

    do {
        printf("inserisci il tuo mese di nascita : ");
        mese = crea_stringa_dinamica();

        if (strcmp(mese, "gennaio") == 0) { lettera_mese = 'A'; valido = 1; }
        else if (strcmp(mese, "febbraio") == 0) { lettera_mese = 'B'; valido = 1; }
        else if (strcmp(mese, "marzo") == 0) { lettera_mese = 'C'; valido = 1; }
        else if (strcmp(mese, "aprile") == 0) { lettera_mese = 'D'; valido = 1; }
        else if (strcmp(mese, "maggio") == 0) { lettera_mese = 'E'; valido = 1; }
        else if (strcmp(mese, "giugno") == 0) { lettera_mese = 'H'; valido = 1; }
        else if (strcmp(mese, "luglio") == 0) { lettera_mese = 'L'; valido = 1; }
        else if (strcmp(mese, "agosto") == 0) { lettera_mese = 'M'; valido = 1; }
        else if (strcmp(mese, "settembre") == 0) { lettera_mese = 'P'; valido = 1; }
        else if (strcmp(mese, "ottobre") == 0) { lettera_mese = 'R'; valido = 1; }
        else if (strcmp(mese, "novembre") == 0) { lettera_mese = 'S'; valido = 1; }
        else if (strcmp(mese, "dicembre") == 0) { lettera_mese = 'T'; valido = 1; }
        else {
            printf("mese non valido, riprova.\n");
            free(mese);
        }

    } while (valido!=1);

    codice[*pc] = lettera_mese;
    (*pc)++;
    codice[*pc] = '\0';
    free(mese);
    return codice;
}

stringa dd(stringa codice, int* pc){
    int gg;
    int flag;
    printf("in che giorno sei nato: ");
    scanf("%d",&gg);
    while (getchar() != '\n');
    printf("sei maschio(0) o femmina(inserisci qualsiasi numero): ");
    scanf("%d",&flag);
    while (getchar() != '\n');
    if(flag!=0){
        gg+=40;
    }

    
    int decine = gg / 10;
    int unita = gg % 10;

    codice[*pc] = 48 + decine;
    (*pc)++;
    codice[*pc] = 48 + unita;
    (*pc)++;
    codice[*pc] = '\0';
    return codice;
}

stringa llll(stringa codice, int* pc){
    stringa comune = NULL;
    char codice_comune[5];
    int valido = 0;

    do {
        printf("inserisci il tuo comune di nascita: ");
        comune = crea_stringa_dinamica();

        
        if (strcmp(comune, "borgocarbonara") == 0) strcpy(codice_comune, "M406"), valido = 1;
        else if (strcmp(comune, "borgo mantovano") == 0) strcpy(codice_comune, "M396"), valido = 1;
        else if (strcmp(comune, "borgofranco sul po") == 0) strcpy(codice_comune, "B013"), valido = 1;
        else if (strcmp(comune, "carbonara di po") == 0) strcpy(codice_comune, "B739"), valido = 1;
        else if (strcmp(comune, "castelbelforte") == 0) strcpy(codice_comune, "C059"), valido = 1;
        else if (strcmp(comune, "castel d'ario") == 0 || strcmp(comune, "casteldario") == 0) strcpy(codice_comune, "C076"), valido = 1;
        else if (strcmp(comune, "felonica") == 0) strcpy(codice_comune, "D529"), valido = 1; 
        else if (strcmp(comune, "magnacavallo") == 0) strcpy(codice_comune, "E818"), valido = 1;
        else if (strcmp(comune, "moglia") == 0) strcpy(codice_comune, "F267"), valido = 1;
        else if (strcmp(comune, "motteggiana") == 0) strcpy(codice_comune, "B012"), valido = 1;
        else if (strcmp(comune, "ostiglia") == 0) strcpy(codice_comune, "G185"), valido = 1;
        else if (strcmp(comune, "pieve di coriano") == 0) strcpy(codice_comune, "G645"), valido = 1; 
        else if (strcmp(comune, "poggio rusco") == 0) strcpy(codice_comune, "G753"), valido = 1;
        else if (strcmp(comune, "quingentole") == 0) strcpy(codice_comune, "H132"), valido = 1;
        else if (strcmp(comune, "quistello") == 0) strcpy(codice_comune, "H146"), valido = 1;
        else if (strcmp(comune, "revere") == 0) strcpy(codice_comune, "H246"), valido = 1; 
        else if (strcmp(comune, "san giovanni del dosso") == 0) strcpy(codice_comune, "H917"), valido = 1;
        else if (strcmp(comune, "schivenoglia") == 0) strcpy(codice_comune, "I529"), valido = 1;
        else if (strcmp(comune, "serravalle a po") == 0) strcpy(codice_comune, "I663"), valido = 1;
        else if (strcmp(comune, "sustinente") == 0) strcpy(codice_comune, "L016"), valido = 1;
        else if (strcmp(comune, "villimpenta") == 0) strcpy(codice_comune, "M045"), valido = 1;
        else {
            printf("comune non valido o non nella lista, riprova.\n");
            free(comune);
        }

    } while (valido != 1);

    
    for (int i = 0; i < 4; i++) {
        codice[*pc] = codice_comune[i];
        (*pc)++;
    }
    codice[*pc] = '\0';
    return codice;
}
char lettera_controllo(stringa cf){
    char lettere_dispari[] = "BAKPLCQDREVOSFTGUHMINJWZYX";
    int numeri_dispari[] = {1,0,5,7,9,13,15,17,19,21};
    int somma = 0;
    for(int i = 0; i < 16; i++) {
        if(i%2 == 0){
            if(cf[i]>='0' && cf[i]<='9'){
                somma += numeri_dispari[cf[i]];
            } else {
                int k = 0;
                while(lettere_dispari[k++] != cf[i]) somma++;
            }
        }else {
            if(cf[i]>='0' && cf[i]<='9'){
                somma += cf[i] - 48;
            } else {
                somma += cf[i] - 65;
            }
        }
    }
    return somma % 26 + 65;
}

int main(){
    stringa nome=NULL;
    stringa cnome=NULL;
    stringa codice_fiscale=NULL;
    stringa anno_nascita;
    int pc=0;
    codice_fiscale = malloc(17*sizeof(char));

    printf("inserisci il tuo nome:\n");
    nome=crea_stringa_dinamica();
    printf("inserisci il tuo cognome:\n");
    cnome=crea_stringa_dinamica();
    printf("inserisci in che anno sei nato:\n");
    anno_nascita=crea_stringa_dinamica();

    codice_fiscale = ccc(cnome, codice_fiscale, &pc);
    codice_fiscale = nnn(nome, codice_fiscale, &pc);
    codice_fiscale = yy(anno_nascita, codice_fiscale, &pc);
    codice_fiscale = m(codice_fiscale, &pc);
    codice_fiscale = dd(codice_fiscale, &pc);
    codice_fiscale = llll(codice_fiscale, &pc);
    maiuscole_minuscole(codice_fiscale, true);
    codice_fiscale[15] =lettera_controllo(codice_fiscale);
    codice_fiscale[16] ='\0';
    
    
    printf("Codice fiscale : %s\n", codice_fiscale);

    free(nome);
    free(cnome);
    free(codice_fiscale);
    free(anno_nascita);
}