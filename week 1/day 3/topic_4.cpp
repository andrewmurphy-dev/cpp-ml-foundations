
//error compiler 


#include <iostream>

int main() {
    int age = 29

    std::cout << age << "\n";

    return 0;
}


//mistake is no semi colon ! 



//now try to compile it ! 

cpp-ml-foundations/week 1/day 3 on  day-3 ?  took 3s ❯ clang++ -std=c++20 -Wall -Wextra -Wpedantic -g topic_3.cpp -o app
topic_3.cpp:21:2: error: invalid preprocessing directive
   21 | #clang++ -std=c++20 -Wall -Wextra -Wpedantic -g topic_3.cpp -o app
      |  ^
topic_3.cpp:37:5: error: redefinition of 'main'
   37 | int main() {
      |     ^
topic_3.cpp:9:5: note: previous definition is here
    9 | int main() {
      |     ^
topic_3.cpp:38:17: error: expected ';' at end of declaration
   38 |     int age = 29
      |                 ^
      |                 ;
3 errors generated.
cpp-ml-foundations/week 1/day 3 on  day-3 ?  ❯ 


//it tells u the error , thats very handy with the compiler !

