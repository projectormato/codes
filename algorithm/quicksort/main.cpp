#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

// クイックソートする(昇順)

void swap(int array[], int left, int right) {
    cout << left << " " << right << endl;
    int temp = array[left];
    array[left] = array[right];
    array[right] = temp;
}

int partition(int array[], int left, int right) {
    int pivot = left;
    swap(array, pivot, right);
    int i = left;
    int j = right-1;
    // 交差しないまで
    while (i < j) {
        while (array[i] < array[right]) {
            i += 1;
        }
        while (array[j] >= array[right] && i <= j) {
            j -= 1;
        }
        // 交差してないなら
        if (i < j) {
            swap(array, i, j);
        }
    }
    swap(array, i, right);
    return i;
}

void quicksort(int array[], int left, int right) {
    int pivotIndex = 0;
    if(left < right) {
        pivotIndex = partition(array, left, right);
        cout << "pivotIndex: " << pivotIndex << endl;
        rep(i, 10) {
            cout << array[i] << " ";
        }
        cout << endl;
        quicksort(array, left, pivotIndex-1);
        quicksort(array, pivotIndex+1, right);
    }
}

int main(){
    int n;
    cin >> n;
    int array[n];
    rep(i, n) {
        cin >> array[i];
    }
    quicksort(array, 0, n-1);
    rep(i, n) {
        cout << array[i] << " ";
    }
    cout << endl;
}


