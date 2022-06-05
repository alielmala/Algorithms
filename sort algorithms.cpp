#include <iostream>

using namespace std;
void selectionSort(int arr[],int n){
    for (int i=0;i<n-1;++i){
        int minIndex=i;
        for (int j=i+1; j <n; ++j){
            if (arr[j]<arr[minIndex])
                minIndex=j;
        }
        int swapper = arr[i];
        arr[i]= arr[minIndex];
        arr[minIndex]=swapper;
    }
}
void bubbleSort(int arr[], int n){
    for (int i=0; i < n; i++){
        for (int j=0; j < n-1-i; ++j){ // there will be sorted part. so -i will stop looping throw it.
            if (arr[j]>arr[j+1]){
                int swapper=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swapper;
            }

        }
    }
}
void insertionSort(int arr[],int n){
    for (int i=1; i<n;++i){
      int value = arr[i];
      int place = i;
      while (place > 0 && value < arr[place-1]){
            arr[place]= arr[place-1];
            place--;
    }
        arr[place]=value;
    }
}

int main (){
    int arr[6]={2,3,9,5,4,1};
    selectionSort(arr,6);
    cout << "Selection Sort: "<<endl;
    for (int i=0; i < 6; ++i)
        cout <<arr[i]<< " ";

    int arr2[6]={2,3,9,5,4,1};
    bubbleSort(arr2,6);
    cout <<endl<<endl<<"Bubble Sort: "<<endl;
    for (int i=0; i < 6; ++i)
        cout <<arr2[i]<< " ";

    int arr3[6]={2,3,9,5,4,1};
    insertionSort(arr3,6);
    cout <<endl<<endl<<"Insertion Sort: " << endl;
    for (int i=0; i < 6; ++i)
        cout <<arr3[i]<< " ";


}
