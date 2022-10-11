// NAMA		: KARINA RAHMAWATI
// NRP		: 5025221041
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int a)
{
	int V0;
    if (a >= 1 && a <= 10){
        V0 = a - 1;
    } else if (a >= 11 && a <= 20){
        V0 = a - 3;
    } else if (a >= 21 && a <= 30){
        V0 = a - 5;
    }
  	return V0;
}

int x_terjauh (int b)
{
    int xmax;
    xmax = pow(b,2) / GRAVITASI;
    return xmax;
}

double speed_dgn_loss(int c)
{
	double Vtan = sqrt(c * GRAVITASI);
    if (Vtan >= 1 && Vtan <= 10){
        Vtan += 1;
    } else if (Vtan >= 11 && Vtan <= 20){
        Vtan += 3;
    } else if (Vtan >= 21 && Vtan <= 30){
        Vtan += 5;
    }
    return Vtan;
}

int main() {
    int V, jarak, kecepatan_awal;
    double kecepatan_tangensial;
    
  	std::cin >> V;
    kecepatan_awal = mencari_V0(V);
    jarak = x_terjauh(kecepatan_awal);
    kecepatan_tangensial = speed_dgn_loss(jarak);
  
  	std::cout << jarak << " " << kecepatan_tangensial << std::endl;
    return 0;
}