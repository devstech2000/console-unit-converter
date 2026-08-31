#include <iostream>

double celsiusFahrenheit(double celsius){
   return (celsius * 9.00 / 5.00) + 32.00;
}

double kilometerMeilen(double kilometer){
    return kilometer * 0.621371;
}

double kilogrammPfund(double kilogramm){
    return kilogramm * 2.20462;
}


void mainMenu(){
    int menuChoise;

    std::cin >> menuChoise;

    int inputVal = 0.0;

    switch (menuChoise) {
        case 1:
            std::cout << "\nGebe deinen Celsius-Wert ein:" << std::endl;
            std::cin >> inputVal;
            std::cout << "\nEs sind: " << celsiusFahrenheit(inputVal) << " Fahrnheit" << std::endl;
            break;
        case 2:
            std::cout << "\nGebe deinen Kilometer-Wert ein:" << std::endl;
            std::cin >> inputVal;
            std::cout << "\nEs sind: " << kilometerMeilen(inputVal) << " Meilen" << std::endl;
            break;
        case 3:
            std::cout << "\nGebe deinen Kilogramm-Wert ein:" << std::endl;
            std::cin >> inputVal;
            std::cout << "\nEs sind: " << kilogrammPfund(inputVal) << " Pfund" << std::endl;
            break;
        case 4:
            std::cout << "\nBis bald" << std::endl;
            break;
        default:
            std::cout << "\nDas ist eine ungültige Eingabe, wähle eine Zahl von 1-4!";
    }
}



int main() {
    std::cout << "Einheitenkonvertierer" << std::endl;
    std::cout << "Wähle eine Einheit die du umrechnen möchtest!" << std::endl;
    std::cout << "1: Celsius zu Fahrenheit\n" << "2: Kilometer zu Meilen\n" << "3: Kilogramm zu Pfund\n" << "4: Verlassen" << std::endl;
    std::cout << "\nGebe einen Menüpunkt ein um fortzufahren:" << std::endl;
    mainMenu();
    return 0;
}
