using namespace std;
#include<iostream>

//Check if a certain integer exists in the array if the number is present return the index where the
//number is present.
int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int num = 4;
   int index = -1;
   
   for (int i = 0; i < sizeof(arr); i++) {
      if (arr[i] == num) {
         index = i; 
      }
   }

   if (index != -1) {
      cout << "Number found at index " << index << endl;
   } else {
      cout << "Number not found in array" << endl;
   }
}

//A function that can modify the value of an integer when called with the index of the integer in
//the array and return the new value and old value back to the user.
int modifyValue(int arr[], int index, int newValue) {
   int oldValue = 0;
    try {
        oldValue = arr[index];
        arr[index] = newValue;
    } catch (...) {
        std::cout << "An error occurred\n";
    }
    return oldValue;
}

//A function that adds a new integer to the end of the array
void addNewInteger(int arr[] int num){
   try{
    arr[num] = num;
   } catch (...) {
      std::cout << "An error ocurred\n";
   }
}

//A function which intakes an index of an array and replaces the value with either 0 or removes
//the integer altogether.
void removeInteger(int arr[], int num){
    modifyValue(arr[]. num, 0);
}
