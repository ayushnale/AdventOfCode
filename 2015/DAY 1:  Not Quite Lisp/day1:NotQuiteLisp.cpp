#include <iostream>
#include <fstream>

int main() {

    // bool op;

    // std::cout << "Test [1] | Input [0] : ";
    // std::cin >> op;

    std::string filename ; //= ( op ) ? "TestInput.txt":"input.txt";

    std::cout << "File Name: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "File does not exist !" << std::endl;
        return 1;
    }
    // Reading methods go here
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
