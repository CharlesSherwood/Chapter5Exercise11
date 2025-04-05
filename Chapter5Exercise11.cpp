/*FileName:Chapter5Exercise11.cpp
ProgrammerName:Charles Sherwood
Date:3/25
requirements:This program will determine the size of a 
population of orginisms.
*/


#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
int getStartingPopulation();
double getDailyIncrease();
int getNumberOfDays();
void displayPopulationGrowth(int startPop, double increaseRate, int days);
bool askToContinue();

// Main function
int main() {
    do {
        int startingPopulation = getStartingPopulation();
        double dailyIncrease = getDailyIncrease();
        int numberOfDays = getNumberOfDays();

        displayPopulationGrowth(startingPopulation, dailyIncrease, numberOfDays);
    } while (askToContinue());

    cout << "Thank you for using the population predictor!\n";
    return 0;
}

// Function to get validated starting population
int getStartingPopulation() {
    int population;
    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> population;
        if (population < 2) {
            cout << "Error: Population must be at least 2.\n";
        }
    } while (population < 2);
    return population;
}

// Function to get daily increase percentage
double getDailyIncrease() {
    double increase;
    do {
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> increase;
        if (increase < 0) {
            cout << "Error: Daily increase cannot be negative.\n";
        }
    } while (increase < 0);
    return increase;
}

// Function to get number of days
int getNumberOfDays() {
    int days;
    do {
        cout << "Enter the number of days the organisms will multiply (minimum 1): ";
        cin >> days;
        if (days < 1) {
            cout << "Error: Number of days must be at least 1.\n";
        }
    } while (days < 1);
    return days;
}

// Function to display population growth for each day
void displayPopulationGrowth(int startPop, double increaseRate, int days) {
    double population = startPop;

    cout << "\nDay\tPopulation\n";
    cout << "---------------------\n";
    cout << fixed << setprecision(2);

    for (int day = 1; day <= days; ++day) {
        cout << day << "\t" << population << endl;
        population += population * (increaseRate / 100.0);
    }
}

// Function to ask the user if they want to continue
bool askToContinue() {
    char choice;
    cout << "\nWould you like to run the program again? (Y/N): ";
    cin >> choice;
    return choice == 'Y' || choice == 'y';
}

