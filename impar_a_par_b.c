#include <stdio.h>
#include <ctype.h>

int Impar_a_par_b(char* entrada);

int main(){
    char*  entrada = "abbabba";
    int resultado = Impar_a_par_b(entrada);
    printf("%d",resultado);
}

int Impar_a_par_b(char* entrada){
//PaPb
q0:
    if(*entrada == 'a'){
        entrada++;
        goto q1;
    }
    else if(*entrada == 'b'){
        entrada++;
        goto q2;
    }
    return 0;
//IaPb
q1:
    if(*entrada == 'a'){
        entrada++;
        goto q0;
    }
    else if(*entrada == 'b'){
        entrada++;
        goto q3;
    }
    return 1;
//PaIb
q2:
    if(*entrada == 'a'){
        entrada++;
        goto q3;
    }
    else if(*entrada == 'b'){
        entrada++;
        goto q0;
    }
    return 0;
//IaIb
q3:
    if(*entrada == 'a'){
        entrada++;
        goto q2;
    }
    else if(*entrada == 'b'){
        entrada++;
        goto q1;
    }
    return 0;
}