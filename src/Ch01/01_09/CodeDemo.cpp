// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>

int main(){
    std::string name;
    std::cout << "Hi, may I know your name? " << std::flush;
    // std::flush => makes sure that the output is completely sent to the terminal before waiting for the user input.
    std::cin >> name;
    std::cout << "Hello "<< name<< std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}