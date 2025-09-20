#include<bits/stdc++.h>
using namespace std;

// Selection Sort
void selectionSort(vector<int> &v) {
    int n = v.size();
    for(int i=0;i<n-1;i++) {
        int min = i;
        for(int j=i+1;j<n;j++) {
            if(v[j]<v[min]) {
                min = j;
            }
        }
        int swap = v[min];
        v[min] = v[i];
        v[i] = swap;
    }
}

// Bubble Sort
void bubbleSort(vector<int> &v) {
    int n = v.size();
    int didSwap = 0;
    for(int i=n-1;i>0;i--) {
        for(int j=0;j<i;j++) {
            if(v[j]>v[j+1]) {
                int swap = v[j];
                v[j] = v[j+1];
                v[j+1] = swap;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;  
        }
        cout<< "yes swapped\n"; 
    }
}

// insertion sort 
void insertionSort(vector<int> &arr) {
    int n = arr.size();
    for(int i=0;i<n;i++) {
        int j=i;
        while (j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void printSorted(vector<int> &v) {
    int n = v.size();
    int i = 0;
    while(i<n) {
        cout<< v[i] << " ";
        i++;
    }
    cout<< endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin>> x;
        v.push_back(x);
    }
    // selectionSort(v);
    // bubbleSort(v);
    insertionSort(v);
    printSorted(v);
}