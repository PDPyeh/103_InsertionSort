
#include <iostream>
using namespace std;

int n;
int arr[20];

void input() {
    while (true) {
        cout << "masukan banyaknya element pada array = ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 11 elemen. \n";
        }
    }
    cout << endl;
    cout << "////////////////////////////////" << endl;
    cout << "/////MASUKAN ELEMEN ARRAY///////" << endl;
    cout << "////////////////////////////////" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}


void insertionSort() {
    int i, temp, j;

    for (i = 1; i <= n - 1; i++) 
     {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

}

void display() {
    cout << endl;
    cout << "//////////////////////////////////" << endl;
    cout << " Element Array yang telah tersusun " << endl;
    cout << "/////////////////////////////////" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {

        input();
        insertionSort();
        display();
        system("pause");
    }


