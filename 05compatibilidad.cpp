#include <stdio.h>//esto es una libreria de lenguaje c => permite ingresar datos de entrada y salida como iostream 
#include <stdlib.h>//esto tambien es una libreria de lenguaje c ==> libreria que contiene funciones generales, numeros aleatorios, convertir datos y terminar programas
int main() {
//    printf("hola mundo");
    int edad = 43;
//     scanf("%d", &edad);
    printf("hola mundo");
    system("espera");
    return 0;
}
/*
la libreria <stdio.h> significa standar input output header, en lugar de cout y cin utiliza las funciones printf() scanf()
.- algunas funciones de lenguaje c no van a ser ejecutadas en todos los sistemas operativos, en mi caso tengo una mac, por ejemplo
a veces la funcion, system() no funciona en mac y windows.
nota: cuando se escribe codigo y lo guardamos, el compilador sobreescribe tu archivo ejecutable. en proyectos reales, no compilas archivos por archivos manualmente, 
se usan herramientas como make, cmake, ninja, estos son built systems por que en un proyecto real puedes tener cientos de archivos 
*/