#include <iostream>
#include<string>
using namespace std;

class MyException {
private:
    std::string m_error;

public:
    MyException(std::string error)
        : m_error(error)
    {
    }

    const char* getError() { return m_error.c_str(); }

};

void someMathCounterMachine() throw(MyException){
    setlocale(LC_ALL, "Rus");
    int counter;
    double sum = 0;
    double min = 0;
    double mult = 1;
    double div = 1;
    int Massive[50] = {};
    cout << "Введите колличество чисел, которые хотите посчитать(не более 50(при вводе 50 программа остановит работу))";
    cin >> counter;
    while (counter <50) {

        try {
            if (counter > 50) {
                
            }
            else {
                for (int i = 0; i < counter; i++) {
                    cout << "Введите ваше число";
                    cin >> Massive[i];
                    sum = sum + Massive[i];
                    min = min - Massive[i];
                    mult = mult * Massive[i];
                    div = div / Massive[i];
                }
                cout << "Результат суммирования ваших чисел: " << sum << endl;
                cout << "Результат отнимания всех чисел: " << min << endl;
                cout << "Результат умножения всех чисел: " << mult << endl;
                cout << "Результат деления единицы на все числа: " << div << endl;

            }

        }
        catch (MyException& exception) {
            throw;

        }
    }
}
int main() {
    someMathCounterMachine();
}
