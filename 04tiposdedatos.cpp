#include <iostream>
#include <string>
using namespace std;
int main() {
// tipos de datos

// tipos numericos enteros
int edad = 43; // int: numeros enteros
unsigned int puntos = 1500; // para numeros enteros positivos
short dias = 7; // sirve para numeros enteros cortos (dias semanas, meses, años)
long poblacion = 1000000; // sirve para numeros enteros largos

// numeros decimales
float temperatura = 36.8; // sirve para numeros decimales con menor precision
double altura = 1.87; // sirve para numeros decimales con mayor precision 
long double pi = 3.14159265359; // sirve para un numero con muchos decimales

// caracteres y cadenas
char inicial = 'J'; // sirven para escribir un solo caracter, se escrible entrecomillas simples''
string nombre = "jorge"; // sirve para escribir cadena de texto y usa la libreria #include <string>

// valorees logicos
bool estudiante = true; // sirve para poner valores logicos como verdadero o falso

cout << "nombre: " << nombre << endl;
cout << "la letra inicial de mi nombre es: " << inicial << endl;
cout << "edad: " << edad << endl;
cout << "altura: " << altura << endl;
cout << "temperatura corporal: " << temperatura << endl;
cout << "puntos acumulados: " << puntos << endl;
cout << "eres estudiante? : "  << (estudiante ? "si" : "no") << endl;
cout << "poblacion de tu ciudad: " << poblacion << endl;
cout << "dias de la semana: " << dias << endl;
cout << "el valor de pi es: " << pi << endl;
return 0;
}