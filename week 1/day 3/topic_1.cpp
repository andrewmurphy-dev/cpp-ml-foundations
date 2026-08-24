//std::cin 


/// this is very different from python 
/// so think of std::cin as take what the user tyopes and put it intp age 




std::cout <<   // output
std::cin  >>   // input




std::cout << value;   → sends data OUT
std::cin  >> value;   → brings data IN




#include <iostream> 

int main() {
    int age = 0;

    std::cout << "Enter your age: ";
    std::cin >> age;


    std::cout << "you entered: " << age << "\n";


    return 0;
}


//biggest confusion is , the arrows , >> , << 

// >> bring something in 
// << bring something out 




//question 1 


#include <iostream> 

int main() {
    int level = 0;
    std::cout << "Enter your level: ";
    std::cin >> level;
    std::cout << level << "\n";

    return 0;
}



//question 2 


#include <iostream>


int main() {
    double temp = 0.0;
    std::cout << "Enter your temperature: ";
    std::cin >> temp;

    std::cout << temp << "\n";

    return 0;



}



//question 3

#include <iostream> 

int main() {
    int age = 29;
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "You are " << age << " years old.\n";

    return 0;
}

//question 4 

#include <iostream>
#include <string>


int main() {
    std::string name = "";
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello " << name << "\n";


    return 0;

    
}



//question 5 

#include <iostream> 
#include <string> 

int main() {
    std::string name = "";
    int age = 29;
    double temperature = 36.5;


    std::cout << "Enter your name: ";
    std::cout << "Enter your age: ";
    std::cout << "Enter your Temperature: ";

    std::cin >> name;
    std::cin >> age;
    std::cin >> temperature;

    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old.\n";
    std::cout << "your temperature is " << temperature << "\n";

    return 0;

}

//i notice when your have a sentence after the variable name, you combine .\n"
