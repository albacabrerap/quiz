#include <iostream>
#include <math.h>
using namespace std;

bool validq(int queens[], int n, int k) {
   int i;
    for (i = 0; i < n; i++) {
        if (queens[i] == queens[k] || (abs(k-i)==abs(queens[k]-queens[i]))) {
            return false;
        }
    }
    return true;
}

void Nqueens(int queens[], int n, int k) {
    if (n == k) {
        for (int i = 0; i < n; i++) {
            cout << queens[i] << " , ";
        }
    }

    else {
        for (queens[k]=0; queens[k] < n; queens[k]++) {
            if (validq(queens,n,k)) {
                Nqueens(queens,n,k+1);
            }
        }
    }
}

int main() {
    int k=0;
    int n;
    cout<<"Cantidad de reinas: ";
    cin>>n;

    int *queens = new int[n];
    for (int i = 0; i < n; i++) {
        queens[i] = -1;
    }

    Nqueens(queens,n, k);

    return 0;


}