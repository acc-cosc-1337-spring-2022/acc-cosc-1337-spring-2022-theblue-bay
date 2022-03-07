#include <iostream>
#include <string>
#include "vectors.h"
#include <algorithm>

using namespace std;


int main()
{
    int choice;

    do { 
        displayMenu();
       
        std::cout << "Enter an option ";
        std::cin >> choice;
        std::cout << "\n"; 
        handleMenuChoice(choice);
    } while (choice != 3);

    return 0;
}

void displayMenu() 
{
    std::cout << "\n\tMain Menu\t\n";
    std::cout << "1 - Get GC Content\n";
    std::cout << "2 - Get DNA Complement\n";
    std::cout << "3 - Exit\n\n";
}

int handleMenuChoice(int choice) 
{
    std::string dna;
    std::string complement;
    double percent;

    switch (choice) 
    {
        case 1:
            cout << "Enter a DNA strand: " << endl;
            cin >> dna;
            
            getGcContent(dna);

            cout << "GC content is " << percent << endl;

        case 2:
            cout << "Enter a DNA strand: " << endl;
            cin >> dna;

            getDnaComplement(dna);

            cout << "Dna Complement is " << complement << endl;

        case 3:
            std::cout << "Exiting program.\n";
            break;

        default:
            std::cout << "Invalid Entry\n";
            return main();
    }
}

main();