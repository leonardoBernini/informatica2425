#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* stringa;

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
    
    for(int i=0;s[i]!='\0'&& cnt<3; i++){
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
    (*pc)++;
    return codice;
}
stringa m(stringa codice, int* pc){
    stringa mese = NULL;
    char lettera_mese ;
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

    codice[(*pc)-1] = lettera_mese;
    codice[*pc] = '\0';

    return codice;
}
stringa dd(stringa codice, int* pc){
    int gg;
    int *array;
    int i=0;
    int n;
    int flag;
    printf("in che giorno si nato: ");
    scanf("%d",&gg);
    printf("sei maschio(0) o femmina(inserisci qualsiasi numero): \n");
    scanf("%d",&flag);
    if(flag!=0){
        gg+=40;
    }

    while(i<2){
        
        array=(int*)malloc((i+1)*sizeof(int));
        array[i]=gg%10;
        gg=gg/10;
        i++;

    }
    for(int j=0;j<i;j++){
        n=array[i-j-1];
        codice[(*pc)]=48+n;
        (*pc)++;
    }
    codice[*pc]='\0';
    return codice;
    

}

int main(){
    stringa nome=NULL;
    stringa cnome=NULL;
    stringa codice_fiscale=NULL;
    int giorno;
    stringa anno_nascita;
    int pc=0;
    codice_fiscale = malloc(17*sizeof(char));

    printf("inserisci il tuo nome:\n");
    nome=crea_stringa_dinamica();
    printf("inserisci il tuo cognome:\n");
    cnome=crea_stringa_dinamica();

    printf("inserisci ii che anno sei nato:\n");
    anno_nascita=crea_stringa_dinamica();


    codice_fiscale = ccc(cnome, codice_fiscale, &pc);
    codice_fiscale = nnn(nome, codice_fiscale, &pc);
    codice_fiscale = yy(anno_nascita, codice_fiscale, &pc);
    codice_fiscale = m(codice_fiscale, &pc);
    codice_fiscale = dd(codice_fiscale, &pc);
    printf("%s\n", codice_fiscale);

    free(nome);
    free(cnome);
    free(codice_fiscale);
    free(anno_nascita);
}
