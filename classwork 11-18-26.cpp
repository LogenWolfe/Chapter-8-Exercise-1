// Name: Logen N. Wolfe
// Date: 11/18/2026
// Program: Chapter 8 Exercise 1
// Description: This program accepts 20 test scores, then scores them and tells you how many perfect scores were recorded!


#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Logen's Score Calculator!" << endl;
    int numbers[20];
    int hundredCount = 0;

    for (int count = 0; count < 20; count++)
    {
        cout << "Please enter a score " << (count + 1) << ": ";
        cin >> numbers[count];

        if (numbers[count] == 100)
            hundredCount++;
    }

    for (int score : numbers)
    {
        cout << "Number: " << score << endl;
    }

    cout << "Seems like you've officially made "
        << hundredCount
        << " perfect scores!" << endl;
}