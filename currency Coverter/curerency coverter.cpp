#include <iostream>
#include <iomanip> 
using namespace std;

void displayMenu() {
    cout << "\n======= Currency Converter =======\n";
    cout << "1. INR to USD\n";
    cout << "2. INR to EUR\n";
    cout << "3. INR to JPY\n";
    cout << "4. Exit\n";
    cout << "Select an option (1-4): ";
}

void convertCurrency(int choice, double amount) {
    const double USD_RATE = 0.012; 
    const double EUR_RATE = 0.011;  
    const double JPY_RATE = 1.68;   
    cout << fixed << setprecision(2);  
    switch (choice) {
        case 1:
            cout << amount << " INR = " << amount * USD_RATE << " USD\n";
            break;
        case 2:
            cout << amount << " INR = " << amount * EUR_RATE << " EUR\n";
            break;
        case 3:
            cout << amount << " INR = " << amount * JPY_RATE << " JPY\n";
            break;
        default:
            cout << "Invalid option!\n";
    }
}

int main() {
    int choice;
    double amount;

    do {
        displayMenu();
        cin >> choice;

        if (choice == 4) {
            cout << "Thank you for using the Currency Converter. Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice! Please select a valid option (1-4).\n";
            continue;
        }

        cout << "Enter amount in INR: ";
        cin >> amount;

        if (amount < 0) {
            cout << "Amount cannot be negative. Please try again.\n";
            continue;
        }

        convertCurrency(choice, amount);

    } while (true);

    return 0;
}
