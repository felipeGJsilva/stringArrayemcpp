#include <iostream>
#include <cstring>

int main(){

    char str1;
    printf("Digite a primeira palavra: ");
    scanf("%s",str1);
    char str2;
    printf("Digite a segunda palavra: ");
    scanf("%s",str2);
    char resultado = str1 + str2; 

    printf("Concatenado: %s\n", resultado.c_str());

    return 0;
}