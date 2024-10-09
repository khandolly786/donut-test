#include <iostream>

using namespace std;

// Function to check if a number is a perfect number
bool isPerfectNumber(int num) {
    int sum = 0;

    // Find all divisors of num and sum them up
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;  // Add divisor to sum
        }
    }

    // A number is perfect if sum of divisors equals the number
    return (sum == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
