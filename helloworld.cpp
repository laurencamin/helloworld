#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string your_name;
    int your_age;
    string your_dogBreed;
    
    
    std::cout << "Hello, user. What is your name?";
    std::cin >> your_name;
    std::cout << " Nice to meet you " << your_name;
    std::cout << " Enter your age";
    std::cin >> your_age;
    std::cout << "What is your favorite dog breed?";
    std::cin  >> your_dogBreed;
    
    return 0;


}