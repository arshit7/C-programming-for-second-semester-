#include <iostream>
using namespace std;

// Function to calculate average
float calculateAverage(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

// Function to find highest marks
int findHighest(int marks[], int n) {
    int max = marks[0];
    for(int i = 1; i < n; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    float avg = calculateAverage(marks, n);
    int highest = findHighest(marks, n);

    cout << "Average Marks: " << avg << endl;
    cout << "Highest Marks: " << highest << endl;

    return 0;
}