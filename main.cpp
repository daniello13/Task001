#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;

struct product
{
    int ID;   //��� ������
    string type_of_product; //��� ������
    string company;   //��������-�������������
    string name_of_model; // �������� ������
    float price; // ����
    int items_in_storage; //���������� �� ������
};


int main()
    {
        product product1;
        setlocale(LC_ALL, "rus");
        std::cout<< "��� ������ (ID): "; //�� ����� ��������� "��� ������: "
        std::cin>> product1.ID;	//������ � ���������� ��� ������
        std::cout<< "��� ��������:";	//�� ����� ��������� "��� ��������: "
        std::cin>> product1.type_of_product;	//������ � ���������� ��� �������� ��� ��������?
        std::cout<< "��������-�������������: "; //�� ����� ��������� "��������-�������������: "
        std::cin>> product1.company;	//������ � ���������� ��������-��������������
        std::cout<< "������: "; //�� ����� ��������� "������: "
        std::cin>> product1.name_of_model;	//������ � ���������� �������� ������
        std::cout<< "���������: "; //�� ����� ��������� "���������: "
        std::cin>> product1.price;	//������ � ���������� ����
        std::cout<< "���������� �� ������: "; //�� ����� ��������� "��� ������: "
        std::cin>> product1.items_in_storage;	//������ � ���������� ���������� �� ������

        cout << "��� ������ (ID): " << product1.ID << endl;
        cout << "��� ��������: " << product1.type_of_product << endl;
        cout << "��������-�������������: " << product1.company << endl;
        cout << "������: " << product1.name_of_model << endl;
        cout << "���������: " << product1.price << " USD" << endl;
        cout << "���������� �� ������: " << product1.items_in_storage << endl;
        return 0;
}
