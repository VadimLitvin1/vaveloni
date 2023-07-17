﻿#include <iostream>

void showMainMenu()
{
    std::cout << "Music Service\n"; // Головне меню сервісу
    std::cout << "1. Select Music\n"; // Опція вибору музики
    std::cout << "2. Profile\n"; // Опція перегляду профілю
    std::cout << "3. Exit\n"; // Опція виходу
    std::cout << "Choose an option: "; // Виберіть опцію
}

void selectMusic()
{
    std::cout << "Music selected\n"; // Вибрано музику
    // Тут можна додати логіку для вибору музики
}

void viewProfile()
{
    std::cout << "Profile\n"; // Профіль
    // Тут можна додати логіку для перегляду профілю
}

int main()
{
    int option;
    bool exit = false;

    while (!exit)
    {
        showMainMenu(); // Виведення головного меню
        std::cin >> option; // Зчитування вибору користувача

        switch (option)
        {
        case 1:
            selectMusic(); // Виклик функції вибору музики
            break;
        case 2:
            viewProfile(); // Виклик функції перегляду профілю
            break;
        case 3:
            exit = true; // Встановлення прапорця вийти з циклу
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n"; // Повідомлення про невірний вибір
            break;
        }

        std::cout << std::endl;
    }

    std::cout << "Thank you for using the music service!\n"; // Повідомлення про завершення програми

    return 0;
}