#include <iostream>
#include <string>

class Samochod{
    public:
        std::string marka;
        std::string model;
        int rok_produkcji;
        int predkosc = 0;
        void pokaz_info(Samochod);
        void przyspiesz(Samochod &objest);
        void hamuj(Samochod &object);

};

 void Samochod::pokaz_info(Samochod samochod){
        std::cout << "marka samochodu: " << samochod.marka<<std::endl;
        std::cout << "model samochodu: " << samochod.model<<std::endl;
        std::cout << "rok samochodu: " << samochod.rok_produkcji<<std::endl;

    }

 void Samochod::przyspiesz(Samochod &samochod){
        samochod.predkosc += 10;
 }
 void Samochod::hamuj(Samochod &samochod){
    if(samochod.predkosc <= 10)
    {
        samochod.predkosc =0;
    }else{
        samochod.predkosc -= 10;
    }
    std::cout<< "predkość: "<< samochod.predkosc<< std::endl;
 }

int main(){

    Samochod sam_1;
    sam_1.marka = "bmw";
    sam_1.model = "M4";
    sam_1.rok_produkcji = 2020;
    sam_1.predkosc = 200;

    Samochod sam_2;
    sam_2.marka = "audi";
    sam_2.model = "a";
    sam_2.rok_produkcji = 2007;
    sam_2.predkosc = 100;

   sam_1.pokaz_info(sam_1);
   sam_2.hamuj(sam_2);



}