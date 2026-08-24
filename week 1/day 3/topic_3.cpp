//compiler 




#include <iostream>
#include <string> 

int main() {
    std::string name = "";
    std::cout << "Enter your name: ";
    std::cin >> name;


    std::cout << "Hello! " << name << "\n";

    return 0;
}


#clang++ -std=c++20 -Wall -Wextra -Wpedantic -g topic_3.cpp -o app

//remember this C++ file → compiler → executable

//    ./app
//run the program named "app" from the current folder





