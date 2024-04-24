#include <iostream>

using namespace std;

int main()
{

    int choice, num1, num2;
    char value;

    cout << "1-Addition \n";
    cout << "2-Subtraction\n";
    cout << "3-Multiplication\n";
    cout << "4-Division\n";
    cout << "5-Modulus\n";

    cout << "Enter your choice(1-5):";
    cin >> choice;

    do{
         if(choice == 1){
           cout << "Enter integer number 1:" << endl;
           cin >> num1;

           cout << "Enter integer number 2:" << endl;
           cin >> num2;

           int choice1 = num1 + num2;
           cout << "Result:" << choice1;

        }else if(choice == 2){
           cout << "Enter integer number 1:" << endl;
           cin >> num1;

           cout << "Enter integer number 2:" << endl;
           cin >> num2;

           int choice2 = num1 - num2;
           cout << "Result:" << choice2;

        }
        else if(choice == 3){
           cout << "Enter integer number 1:" << endl;
           cin >> num1;

           cout << "Enter integer number 2:" << endl;
           cin >> num2;

           double choice3 = num1 * num2;
           cout << "Result:" << choice3;

       }else if(choice == 4){
           cout << "Enter integer number 1:" << endl;
           cin >> num1;

           cout << "Enter integer number 2:" << endl;
           cin >> num2;

           double choice4 = num1/ num2;
           cout << "Result:" << choice4;

       }else if(choice == 5){

           cout << "Enter integer number 1:" << endl;
           cin >> num1;

           cout << "Enter integer number 2:" << endl;
           cin >> num2;

           double choice5 = num1 % num2;
           cout << "Result:" << choice5;

       }else{

           cout << "Error";

       }

       std::cout << "Press y or Y to continue:";
       std::cin >> value;

    } while(value == 'y' || value == 'Y');


    return 0;
}
