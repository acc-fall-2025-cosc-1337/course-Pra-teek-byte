// main.cpp
#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    int choice;
    string dna;

    do
    {
        cout << "\nMenu:\n";
        cout << "1 - Get GC Content\n";
        cout << "2 - Get DNA Complement\n";
        cout << "3 - Exit\n";
        cout << "Enter choice: ";
        if (!(cin >> choice)) { cin.clear(); cin.ignore(10000,'\n'); continue; }

        if (choice == 1)
        {
            cout << "Enter DNA string: ";
            cin >> dna;
            cout << "GC Content: " << get_gc_content(dna) << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter DNA string: ";
            cin >> dna;
            cout << "DNA Complement: " << get_dna_complement(dna) << endl;
        }
        else if (choice == 3)
        {
            cout << "Exiting program.\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
