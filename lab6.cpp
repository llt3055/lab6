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

}

void enterArrayData(double *arr){
    cout << "Data entry for the array:" << endl;
    for (int i =0; i< SIZE; i++){
        cout << " #Element #" << i << ": ";
        cin >> *(arr + i);
        
    }
    cout << endl;
}
