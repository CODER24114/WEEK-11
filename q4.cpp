#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

void convertToBinary(int n) {
    if (n == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    string binary = "";
    while (n > 0) {
        binary = char((n % 2) + '0') + binary; // Prepend the new bit
        n /= 2;
    }
    cout << "Binary: " << binary << endl;
}

void convertToOctal(int n) {
    if (n < 0) {
        cout << "Octal: " << "Invalid input (negative number)" << endl;
        return;
    }
    cout << "Octal: " << oct << n << endl; 
    cout << dec; // Reset to decimal format
}

void convertToHexadecimal(int n) {
    if (n < 0) {
        cout << "Hexadecimal: " << "Invalid input (negative number)" << endl;
        return;
    }
    cout << "Hexadecimal: " << hex << n << endl;
    cout << dec; // Reset to decimal format
}

int main() {
    int num = 0; // Initialize num
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Enter an integer number\n";
        cout << "2. Convert to Binary\n";
        cout << "3. Convert to Octal\n";
        cout << "4. Convert to Hexadecimal\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an integer number: ";
                cin >> num;
                break;
            case 2:
                cout << "Converting " << num << " to binary...\n";
                convertToBinary(num);
                break;
            case 3:
                cout << "Converting " << num << " to octal...\n";
                convertToOctal(num);
                break;
            case 4:
                cout << "Converting " << num << " to hexadecimal...\n";
                convertToHexadecimal(num);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}
