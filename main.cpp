#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;

struct product
{
    int ID;   //код товара
    string type_of_product; //тип товара
    string company;   //компания-производитель
    string name_of_model; // название модели
    float price; // цена
    int items_in_storage; //количество на складе
};


int main()
    {
        product product1;
        setlocale(LC_ALL, "rus");
        std::cout<< "Код товара (ID): "; //На экран выводится "Код товара: "
        std::cin>> product1.ID;	//вводим с клавиатуры код товара
        std::cout<< "Тип продукта:";	//На экран выводится "Тип продукта: "
        std::cin>> product1.type_of_product;	//вводим с клавиатуры или выбираем тип продукта?
        std::cout<< "Компания-производитель: "; //На экран выводится "Компания-производитель: "
        std::cin>> product1.company;	//вводим с клавиатуры компанию-прозизводителя
        std::cout<< "Модель: "; //На экран выводится "Модель: "
        std::cin>> product1.name_of_model;	//вводим с клавиатуры название модели
        std::cout<< "Стоимость: "; //На экран выводится "Стоимость: "
        std::cin>> product1.price;	//вводим с клавиатуры цену
        std::cout<< "Количество на складе: "; //На экран выводится "Код товара: "
        std::cin>> product1.items_in_storage;	//вводим с клавиатуры количество на складе

        cout << "Код товара (ID): " << product1.ID << endl;
        cout << "Тип продукта: " << product1.type_of_product << endl;
        cout << "Компания-производитель: " << product1.company << endl;
        cout << "Модель: " << product1.name_of_model << endl;
        cout << "Стоимость: " << product1.price << " USD" << endl;
        cout << "Количество на складе: " << product1.items_in_storage << endl;
        return 0;
}
