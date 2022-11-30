#include <iostream>
#include <stdlib.h>

using namespace std;

class Tiempo{
 private:
  int horas;
  int minutos;
  int segundos;
 public:
  Tiempo(int,int,int);
  Tiempo(int);
  void mostrarHora();
};

Tiempo::Tiempo(int _horas,int _min, int _seg){
 horas = _horas;
 minutos = _min;
 segundos = _seg;
}

Tiempo::Tiempo(int num){
 horas=int(num/3600);
 minutos=int((num-horas*3600)/60);
 segundos=num-(horas*3600+minutos*60);
}

void Tiempo::mostrarHora(){
 cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}


int main(){


 Tiempo hoy(10,22,12);
 Tiempo largo(84600);
 
 hoy.mostrarHora();
 largo.mostrarHora();

system("pause");
return 0;
}