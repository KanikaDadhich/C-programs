#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) return false;
    int sum = 1;
    int limit = sqrt(n);
    for (int d = 2; d <= limit; ++d) {
        if (n % d == 0) {
            sum += d;
            int other = n / d;
            if (other != d) sum += other;
        }
    }
    return sum == n;
}

int main() {
    cout << "Perfect numbers between 1 and 100:\n";
    for (int i = 2; i <= 100; ++i) {
        if (isPerfect(i)) cout << i << " ";
    }
    cout << "\n";
    return 0;
}
