#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
#include <windows.h> // For Sleep()

using namespace std;

int main() {
    int bike1 = 0, bike2 = 0;
    int trackLength = 30;

    // Set random seed
    srand(time(0));

    // Random speed for each bike (1 to 3)
    int speed1 = rand() % 3 + 1;
    int speed2 = rand() % 3 + 1;

    cout << "Bike 1 speed: " << speed1 << endl;
    cout << "Bike 2 speed: " << speed2 << endl;
    cout << "Race starts!\n\n";

    // Race loop
    while (bike1 < trackLength && bike2 < trackLength) {
        bike1 += speed1;
        bike2 += speed2;

        // Show positions
        cout << "Bike 1: ";
        for (int i = 0; i < bike1 && i < trackLength; i++) cout << "-";
        cout << "🏍️\n";
        

        cout << "Bike 2: ";
        for (int i = 0; i < bike2 && i < trackLength; i++) cout << "-";
        cout << "🏍️\n";
        Sleep(500);
    
        cout << "-----------------------------\n";
        Sleep(500); // Delay for animation
    
    }

    // Decide winner
    if (bike1 >= trackLength && bike2 >= trackLength)
        cout << "It's a tie!\n";
    else if (bike1 >= trackLength)
        cout << "Bike 1 wins!\n";
    else
        cout << "Bike 2 wins!\n";

    return 0;
}
