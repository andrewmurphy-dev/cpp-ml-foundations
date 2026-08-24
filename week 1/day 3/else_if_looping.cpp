//if + else 




#include <iostream>

int main() {
    int level = 5;

    if (level >= 10) {
        std::cout << "Player ready!\n";
    } else {
        std::cout << "Player too low!\n";
    }

    return 0;
}



//literally write after if 




//question 1 


#include <iostream>

int main() {
    int level = 0;
    std::cout << "What is your level: ";
    std::cin >> level;


    if (level >= 20) {
        std::cout << "Dungeon Unlocked!\n";
    } else {
        std::cout << "Level too low!\n";
    }

    return 0;
}


//question 2





#include <iostream> 


int main() {
    double health_x = 0.0;
    std::cout << "What is the boss health: ";
    std::cin >> health_x;

    int health_60 = 60;
    std::cin >> health_60;

    if (health_x <= 25) {
        std::cout >> "ENGAGE!\n";
    } else {
        std::cout << "Boss health: " << health_60 << "\n";

    }

    return 0;
}