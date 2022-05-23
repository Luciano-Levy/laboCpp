#include <iostream>

void promedioExamenes(int &suma, float &promedio){
  for(int i=1; i < 11;i++){
	int nota;
	std :: cout << "Ingrese la calificacion del alumno " << i << std :: endl;
	std :: cin >> nota;
    if(nota > 10 || nota < 0){
      throw std::invalid_argument("La nota debe estar entre 0 y 10 ");
    }
	suma = suma + nota;
  }
  promedio = (float)suma / (float)10;
}

int main(){
  int suma = 0;
  float promedio;
  promedioExamenes(suma,promedio);
  std :: cout << "La suma de calificaciones es " << suma << std :: endl;
  std :: cout << "El promedio de calificaciones es "<< promedio << std :: endl;
  return 0;
}
