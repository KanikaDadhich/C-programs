#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

class Toss {
private:
    int result; // 0 for Head, 1 for Tail

public:
    // Default constructor
    Toss() {
        srand(time(0));        // Seed random generator
        result = rand() % 2;   // Random 0 or 1
    }

    void showResult() {
        // Using conditional operator to decide batting
        cout << "Coin Toss Result: "<< (result == 0 ? "Head" : "Tail") << endl;
        cout << "Batting Team: "<< (result == 0 ? "India" : "Pakistan") << endl;
    }
};

int main() {
    Toss toss;       // Object created, default constructor runs
    toss.showResult();  // Display result
    return 0;
}
