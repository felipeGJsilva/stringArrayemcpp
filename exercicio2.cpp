
#include <iostream>
#include <string>

int main(){

    std::string str;
    std::string str2;
    std::cout << "Digite a primeira palvara: " << std::endl;
    std::cin >> str;

    std::cout << "Digite a segunda  palvara: " << std::endl;
    std::cin >> str2;
    
    

   
    
    std::cout << "Concatenado: \n" << str + str2 << std::endl;

  
    return 0;
}