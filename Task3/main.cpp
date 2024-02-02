#include <iostream>

struct adress {
    std::string city;
    std::string street;
    int numHouse;
    int numFlat;
    int index;
};

void print(adress &adr){
    std::cout << "Город: " << adr.city << std::endl;
    std::cout << "Улица: " << adr.street << std::endl;
    std::cout << "Номер дома: " << adr.numHouse << std::endl;
    std::cout << "Номер квартиры: " << adr.numFlat << std::endl;
    std::cout << "Индекс: " << adr.index << std::endl;
}

int main(){
    adress Moscow;
    Moscow.city = "Москва";
    Moscow.street = "Арбат";
    Moscow.numHouse = 12;
    Moscow.numFlat = 8;
    Moscow.index = 123456;

    adress Izhewsk;
    Izhewsk.city = "Ижевск";
    Izhewsk.street = "Пушкина";
    Izhewsk.numHouse = 59;
    Izhewsk.numFlat = 143;
    Izhewsk.index = 953769;

    print(Moscow);
    std::cout << std::endl;
    print(Izhewsk);


}
