#include <iostream>
using namespace std;
// int main() {
//     int a,b;
//     std::cout << "Введите переменную a: ";
//     std::cin >> a;
    
//     std::cout << "Введите переменную b: ";
//     std::cin >> b;

//     std::cout << "A: "<< a <<". B: " << b;

//     // Типы данных
//     short num1 = 2;  // 2 byte /-32к до 32к
//     int num2 = 5; // 4 byte / -2b до 2b
//     long num3 = 5; // 8 byte 
    
//     //числа с точкой
//     float num5 = 2.43;
//     std::cout << num5;
//     //Хранение символа
//     char sym = 'paps';
//     // Правда или ложь
//     bool isHappy = false;

//     return 0;
// }


// int main(){
//     int num;
//     std::cout <<"Введите число:";
//     std::cin >> num;

//     bool is_has_car = true;
//     if (num >= 3 || is_has_car) {
//         std::cout << "молодец ты открыл тайну";
//         if (num == 6) {
//             std::cout << "О нет";
//         }
//     }
//     else if(2 == num)
//         std::cout << "урА Ты ЗАкрыл тайнку";
//     else 
//         std::cout << "вЫигрышь 210млн";
    
//     return 0;
// }

// int main(){
//     int num;
//     std::cin >> num;

//     switch (num){
//     case 5: std::cout <<"Num is 5";break;
//     case 50: std::cout <<"Num is 50";break;
//     default: std::cout <<"Num is not";break;
//     }

// }

int main() {
    srand(time(NULL));
    int result = 1 + rand() % 20;
    cout << result << endl;
    int num,num2,res;
    cout << "Введите первое число: " << endl;
    cin >> num;
    cout << "Введите второе число: " << endl;
    cin >> num2;
    
    char oper;
    cout << "Введите Оператор: " << endl;
    cin >> oper;

    switch (oper)
    {
    case '+': res = num2 + num ;break;
    case '*': res = num2 * num ;break;
    case '-': res = num2 - num ;break;
    case '/': res = num2 / num ;break;
    default: res = 0; cout << "Error";
    }
    cout << "Ответ: " << res << endl;
    return 0;
}

