#include <iostream>
#include <conio.h> //agregamos la libreria para evitar que el ejecutable del 
				//primer programa se cierre

using namespace std;

int main() {
	
/*				---PROGRAMA 1---

	int n[] = { 1,2,3,4,5,6,7,8,9,10 };
	int suma=0, d; //declaracion de variables

	for (d = 0; d < 10; d++) { //se recorren todos los elementos del array
		suma += n[d]; //se suma y se agrega la d para que el valor vaya cambiando 
	}
	
	cout << "La suma de los elementos del array es: " << suma << endl;

	return 0;
*/

/*
				---	PROGRAMA 2---
	
	int n[6] = {2, 4, 6, 8, 10, 12}; //declaracion de array con enteros 
	int mayor = n[0], d;//se inicializa la var m con el primer elemento del array
	for (d = 1; d < 6; d++) { //El bucle compara los numeros de la var mayor
		if (n[d]>mayor) { //si el el numero actual es mayor que la var entonces se actualiza 
			mayor = n[d];
		}
	}

	cout << "El numero mayor es: " << mayor << endl; //se imprimero el numero en la pantalla

	return 0;
	*/

	/*
				--- PROGRAMA 3---

	int n[8] = { 2, 4, 6, 8, 10, 12, 14, 16 }; //declaracion de array con enteros 
	int d;

	cout << "Arreglo original: "<<endl; //se imprime el array original

	for (int d = 0; d < 8; d++) { // Se recorre el array original y se imprime en la consola
		cout << n[d] << " "; 
	}
	cout << endl;

	for (d = 0; d < 4; d++) { // Se recorre la primera mitad del array y se intercambian los numeros con los de la segunda mitad
		int temp = n[d]; // Se almacena el valor del primer numero en una variable temporal
		n[d] = n[7 - d]; // Se reemplaza el primer numero con el último
		n[7 - d] = temp; // Se reemplaza el último numero con el valor que se almacenó en la variable temporal
	}

	cout << "Arreglo invertido: "; //se imprime el array invertido

	for (d = 0; d < 8; d++) { // Se recorre el array invertido y se imprime en la consola
		cout << n[d] << " ";
	}
	cout << endl;

	return 0;

	/*
				--- PROGRAMA 4 ---
	
	int n[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Se declara el array y se inicializa con los números del 1 al 10
	int suma = 0, d; // Se declara la variable suma y se inicializa en 0

	for (d = 0; d < 10; d++) { // Se recorre el array y se suma cada valor a la variable suma
		suma += n[d];
	}

	cout << "La suma de todos los numeros es: " << suma << endl; // Se imprime la suma total de los números del array en la consola

	return 0;
	*/

	/*
				---PROGRAMA 5---
	string frutas] = { "fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa" }; // Se declara el arreglo de frutas
	int contador[5] = { 0, 0, 0, 0 }; // Se declara un array para contar cuántas veces aparece cada fruta
	int d; 

	for (d = 0; d < 9; d++) { // Se recorre el array de frutas
		if (frutas[d] == "fresa") { // Si la fruta es una fresa, se aumenta el contador correspondiente
			contador[0]++;
		}
		else if (frutas[d] == "sandia") { // Si la fruta es una sandía, se aumenta el contador correspondiente
			contador[1]++;
		}
		else if (frutas[d] == "melon") { // Si la fruta es un melón, se aumenta el contador correspondiente
			contador[2]++;
		}
		else if (frutas[d] == "naranja") { // Si la fruta es una naranja, se aumenta el contador correspondiente
			contador[3]++;
		}
		else if (frutas[d] == "mango") { // Si la fruta es un mango, se aumenta el contador correspondiente
			contador[4]++;
		}
	}

	cout << "Cantidad de frutas:" << endl;
	cout << "Fresas: " << contador[0] << endl; // Se imprime la cantidad de fresas encontradas
	cout << "Sandias: " << contador[1] << endl; // Se imprime la cantidad de sandías encontradas
	cout << "Melones: " << contador[2] << endl; // Se imprime la cantidad de melones encontrados
	cout << "Naranjas: " << contador[3] << endl; // Se imprime la cantidad de naranjas encontradas
	cout << "Mangos: " << contador[4] << endl; // Se imprime la cantidad de mangos encontradas
	
	return 0;
	*/
}
