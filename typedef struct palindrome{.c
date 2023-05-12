typedef struct palindrome{
    char *nom;
    struct palindrome *Precedent ;

}palindrome;

void inis(char N){
palindrome  X ;
X=(palindrome*)malloc(sizeof(palindrome));
N=(nom*)malloc(sizeof(nom));
X->nom=N;
X *Sommet=NULL;
int taille=0;
}


void empiler (){
palindrome X;
if(sommet==NULL){
    sommet=X;
}
else{
    X->precedent=sommet;
    sommet=X;

}

taille++;

}

void depiler(){
    palindrome *X,*tmp;
    tmp=sommet;
    sommet=sommet->precedent;
    free(tmp);
    free(tmp->nom);
    taille--;
}

palindrome(char Tab[]){

    
        int length=strlen(Tab[]);

        for (int i = 0; i < length / 2; i++){

                empiler(Tab[i]);

        }

        if(lenght % 2 ! =0){

        }


}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef struct elt {
    char a ;
    struct elt *precedent;

}

elt *sommet=NULL;
int taille=0;


void empiler (char A){

    elt *X;
    X=(elt*)malloc(sizeof(elt));
    X->a=A
     
    if(sommet=NULL){
        sommet=X;
    }
    else {
        X->precedent=sommet;
        sommet=X;
    
    }
    taille++

}