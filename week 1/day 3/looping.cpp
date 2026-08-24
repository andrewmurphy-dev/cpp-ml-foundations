//python 

age = 20

if age >= 18:
    print("Adult")



//C++


int age = 20;

if (age >= 18) {
    std::cout << "Adult\n"
}


//good to know , these are both valid , 

//std::cout << "Adult\n";
//prints Adult

//std::cout << "Adult.\n";

//prints Adult.


// so how do we loop in a full function , what is the structure?


int main() {

    int age = 20;

    if (age >= 20) {
        std::cout << "High level\n"
    }

    return 0;

}



//hard questions 

//question 1 
int main() {
    double health = 0.0;
    std::cout << "Enter boss health! ";
    std::cin >> health;

    if (health <= 25) {
        std::cout << "Enrage!\n";
        
    }
    std::cout << "Boss health: " << health << "\n";

    return 0;
}



//question 2


#include <iostream>
#include <string>

int main() {
    std::string name = "";
    std::cout << "What is your name: ";
    std::cin >> name;

    int level = 0;
    std::cout << "what is your level: ";
    std::cin >> level;

    double health = 0.0;
    std::cout << "What is boss health: ";
    std::cin >> health;


    std::cout << "Player: " << name << "\n";
    std::cout << "level: " << level << "\n";
    std::cout << "Boss health: " << health << "\n";


    if (level >= 10) {
        std::cout << "Player ready!\n";
    }

    if (health <= 25) {
        std::cout << "ENGAGE!\n";
    }

    if (health <= 0) {
        std::cout << "Boss defeated!\n";
    }

    return 0;

}