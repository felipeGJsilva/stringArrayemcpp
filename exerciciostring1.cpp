#include <iostream>
#include <cstring>

int main(){
    
    char str[100];
    printf("Digite uma palagvra: ");
    scanf("%s", str);

    printf("Tamanho da palavra: %zu\n", strlen(str));

    return false;
}

