using namespace std;
#include <iostream>

int main() {
   
    int n, v[20], i, p, m, aux;

    cout << "Dimensiunea vectorului (n) = ";
    cin >> n;

  
    for (i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    cout << "Vectorul initial este: ";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    
    for (i = 0; i < n - 1; i++) {
        for (p = 0; p < n - i - 1; p++) {
            if (v[p] % 2 == 0 && v[p + 1] % 2 == 0 && v[p] > v[p + 1]) {
                aux = v[p];
                v[p] = v[p + 1];
                v[p + 1] = aux;
            }
        }
    }

 
    for (i = 0; i < n - 1; i++) {
        for (p = 0; p < n - i - 1; p++) {
            if (v[p] % 2 != 0 && v[p + 1] % 2 != 0 && v[p] < v[p + 1]) {
                aux = v[p];
                v[p] = v[p + 1];
                v[p + 1] = aux;
            }
        }
    }

    
    cout << "Numerele pare ordonate crescator sunt: ";
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

  
    cout << "Numerele impare ordonate descrescator sunt: ";
    for (i = 0; i < n; i++) {
        if (v[i] % 2 != 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
