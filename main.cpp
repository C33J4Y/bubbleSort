#include <iostream>

//Bubblesort Algorithm

using namespace std;

void sortedArray(int a[], int size){

for(int k = 0; k < size-1 ; k++){
  for(int i = 0; i < size - k - 1; i++){
    if (a[i] > a[i+1]){
      int temp = a[i+1];
      a[i+1] = a[i];
      a[i] = temp;

    }
     
  }
   
}

for (int j = 0; j < size; j++){
  cout << a[j] << endl;
}

}

int main() {
  int array[] = {25,12,4,2,7,100,1,5};
  int size = 8;

  sortedArray(array, size);
  
}