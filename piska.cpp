#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "1. Введіть число для таблиці множення: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    int sumEven = 0;
    for (int i = 2; i <= 100; i += 2) { // Крок збільшуємо на 2
        sumEven += i;
    }
    cout << "\n2. Сума парних чисел від 1 до 100: " << sumEven << endl;

    cout << "\n3. Алфавіт: ";
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << " ";
    }
    cout << endl;

    int n;
    long long factorial = 1; // Використовуємо long long для уникнення переповнення
    cout << "\n4. Введіть число n для обчислення факторіалу: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << n << "! = " << factorial << endl;

    return 0;
}