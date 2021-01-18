

#include <iostream>

// Used for testing of non-semantic code assessment.

using namespace std;

// This is a function to Square an Integer

int square(int x) {
    return x * x;
}
int main()
{
    cout << "Hello World!\n";

    int x = square(5);
    cout << "I am squaring 5\n";
    cout << x;

}

