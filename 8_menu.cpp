//Program6: Nested switch Statements for a Menu
//Create a menu-based program where the user can choose between "Vegetarian" and "Non-Vegetarian" options,
// then display a sub-menu with specific dishes based on the selection. Use nested switch statements to handle each menu and sub-menu option.
#include <iostream>
using namespace std;
int main() {
    int mainMenuChoice, subMenuChoice;
    cout << "Main Menu:\n";
    cout << "1. Vegetarian\n";
    cout << "2. Non-Vegetarian\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> mainMenuChoice;
    switch (mainMenuChoice) {
        case 1: 
            cout << "\nVegetarian Dishes:\n";
            cout << "1. Paneer Butter Masala\n";
            cout << "2. Vegetable Biryani\n";
            cout << "3. Aloo Gobi\n";
            cout << "Enter your choice (1, 2, or 3): ";
            cin >> subMenuChoice;
            switch (subMenuChoice) {
                case 1:
                    cout << "You selected Paneer Butter Masala.\n";
                    break;
                case 2:
                    cout << "You selected Vegetable Biryani.\n";
                    break;
                case 3:
                    cout << "You selected Aloo Gobi.\n";
                    break;
                default:
                    cout << "Invalid choice. Please select a valid dish.\n";
            }
            break;
        case 2: 
            cout << "\nNon-Vegetarian Dishes:\n";
            cout << "1. Chicken Curry\n";
            cout << "2. Mutton Biryani\n";
            cout << "3. Fish Fry\n";
            cout << "Enter your choice (1, 2, or 3): ";
            cin >> subMenuChoice;

            switch (subMenuChoice) {
                case 1:
                    cout << "You selected Chicken Curry.\n";
                    break;
                case 2:
                    cout << "You selected Mutton Biryani.\n";
                    break;
                case 3:
                    cout << "You selected Fish Fry.\n";
                    break;
                default:
                    cout << "Invalid choice. Please select a valid dish.\n";
            }
            break;

        default:
            cout << "Invalid choice for the main menu. Please select 1 or 2.\n";
    }

    return 0;
}
