
#include <iostream>
 
using namespace std;
 
void calculateFactorials(int n, int* n_factorial, int* double_n_factorial) {
    *n_factorial = 1;
    *double_n_factorial = 1;
 
    // Обчислення значення n!
    for (int i = 1; i <= n; ++i) {
        *n_factorial *= i;
    }
 
    // Обчислення значення 2n!
    for (int i = 1; i <= 2 * n; ++i) {
        *double_n_factorial *= i;
    }
}
 
int main() {
    setlocale(LC_ALL, "ukr");
 
    int n;
    cout << "Введіть натуральне число n: ";
    cin >> n;
 
    int n_fact, double_n_fact;
 
    // Виклик функції для обчислення n!+n та 2n! з використанням параметрів-вказівників
    calculateFactorials(n, &n_fact, &double_n_fact);
 
    // Обчислення n! + n
    int n_plus_n_fact = n_fact + n;
 
    // Виведення результатів
    cout << "Результат для n! + n: " << n_plus_n_fact << endl;
    cout << "Результат для 2n!: " << double_n_fact << endl;
 
    return 0;
}
 
