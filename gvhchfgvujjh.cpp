#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double initialAmount, interestRate;
    int years;

    cout << "Введіть початкову суму вкладу: ";
    cin >> initialAmount;
    
    cout << "Введіть річний відсоток (%): ";
    cin >> interestRate;
    
    cout << "Введіть кількість років: ";
    cin >> years;

    double currentAmount = initialAmount;

    cout << fixed << setprecision(2);
    cout << "\n--- Аналіз вкладу ---" << endl;

    for (int i = 1; i <= years; i++) {
        currentAmount += currentAmount * (interestRate / 100.0);
        cout << "Рік " << i << ": Сума на рахунку = " << currentAmount << endl;
    }

    return 0;
}