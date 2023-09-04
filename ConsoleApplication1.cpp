// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    //инициализация данных
    double x, y, radius, width, height;
    std::cout << "Введите координаты точки (x y): ";
    std::cin >> x >> y;
    std::cout << "Введите радиус окружности (radius): ";
    std::cin >> radius;
    std::cout << "Введите ширину и высоту прямоугольника (width height): ";
    std::cin >> width >> height;

    bool inShadedArea = false;

    // Проверяем, что точка находится в правой половине окружности
    if (x >= 0) {
        double distanceToCenter = sqrt(x * x + y * y);

        if (distanceToCenter <= radius) {
            inShadedArea = true;
        }
    }
    else if (x < 0 && x >= -width && y >= -height) {
        // Проверяем, что точка находится внутри прямоугольника

        inShadedArea = true;
    }

    // Выводим результат
    if (inShadedArea) {
        std::cout << "Точка попадает в закрашенную область. (yes)" << std::endl;
    }
    else {
        std::cout << "Точка не попадает в закрашенную область.(no)" << std::endl;
    }

    return 0;
}

