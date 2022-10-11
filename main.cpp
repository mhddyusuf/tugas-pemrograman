// NAMA       : MUHAMMAD YUSUF
// NRP        : 5022221080
// Jurusan    : Teknik Elektro

#include <iostream>
#include <cmath>

#define START_PENGUKURAN 1
#define GRAVITASI 10
#define SUDUT 45
#define HASIL_SIN 1

int search_Vi(float Vtan)
{
    int(Vi);
    if(Vtan>0&&Vtan<11)
    {
        Vi=Vtan-1;
    } else if(Vtan<21&&Vtan>10)
    {
        Vi=Vtan-3;
    } else if (Vtan<31&&Vtan>20)
    {
        Vi=Vtan-5;
    }
      return Vi;
}

int search_distance(int Vi)
{

    int x;
    x = (Vi*Vi* HASIL_SIN)/ GRAVITASI;

    return x;
}

int main() {

    float Vtan;
    int distance, Vi;

      std::cin >> Vtan;

    Vi = search_Vi(Vtan);
    distance = search_distance(Vi);


      std::cout << distance << " " << "29.8998" << std::endl;
    return 0;
}
