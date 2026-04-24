#include <iostream>
#include <fstream>

int main() {

    
    std::string filename ;

    std::cout << "File Name: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "File does not exist !" << std::endl;
        return 1;
    }
   
    char ch;
    int floor = 0;
    
    while (file.get(ch)) {
    
        std::cout << ch;
         
        if( ch == '(' ) floor+=1;
        if( ch == ')' ) floor-=1;

        std::cout << " Floor : " << floor << std::endl;
        
    }

    std::cout << std::endl;
    return 0;
    
}
