// COMSC-210 | Lab  6| Tianyi Cao
#include <iostream>

using namespace std;

//CREATE THE SIZE FOR ARRAY AVOIDING MAGIC NUMBER
const int SIZE = 5;

//FUNCTION PROTOTYPE
void enterArrayData(double*);
void outputArrayData(double*);
double sumArray(double*);

int main(){
    double *numbers;
    numbers = new double [SIZE];
    enterArrayData(numbers);
}

void enterArrayData(double *arr){
    cout << "Data entry for the array:" << endl;
    for (int i =0; i< SIZE; i++){
        cout << " #Element #" << i << ": ";
        cin >> *(arr + i);

    }
    cout << "Data entry complete." << endl;
}

void outoutputArrayData(double *arr){
    for(int i=0;i<SIZE;i++){
        cout << *(arr + i) << endl;
    }
}

double sumArray(double *arr){
    double sum = 0;
    for (int i=0; i<SIZE;i++){
        sum += *(arr + i);
    }
    return sum;
}