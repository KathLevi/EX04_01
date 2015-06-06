//////////////////////////
//Name: Kathleen Levi
//
//Project: EX04_01 (11.1)
//
//Date: June 5, 2015
//////////////////////////


#include <iostream>
using namespace std;

void addNumbers(int* list, int size);
double average(int* list, int size);
int aboveAvg(int* list, int size, double average);

int main () {
    
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    
    int* list = new int[size];
    
    addNumbers(list, size);
    
    cout << "The average is " << average(list, size) << endl;
    double avg;
    avg = average(list, size);
    
    cout << "There are " << aboveAvg(list, size, avg) << " numbers above the average.\n";
    
    delete[] list;
}

void addNumbers (int* list, int size){
    for (int i = 0; i < size; i++){
        cout << "Enter the next number in the array ";
        cin >> list[i];
    }
    
}

double average(int* list, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += list[i];
    }
    double average = sum/ size;
    
    return average;
}

int aboveAvg(int* list, int size, double average){
    int above = 0;
    for (int i = 0; i < size; i++){
        if (list[i] > average)
            above++;
    }
    return above;
}