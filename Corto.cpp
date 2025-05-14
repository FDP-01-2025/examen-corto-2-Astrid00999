
#include <iostream>

using namespace std;

int main (){

int edad;
char usuario;




cout << "Bienvenido a nuestra tienda electronica" << endl;
cout << "Por favor ingrese su edad" << endl;
cin >> edad;

if (edad <= 16){

    cout << "Lo sentimos no puede continuar la compra" << endl;

}

else {
// //Paso 2: Solicitar el tipo de usuario (1 punto) 
// El programa debe pedir al usuario que seleccione una categoría: 
// • Estudiante 
// • Profesional 
// • Ver todos

 cout << "Ingrese el tipo de usuario" << endl;
 cout << "1. Estudiante" << endl;
 cout << "2. Profesional" << endl;
cin >> usuario;

switch(usuario){

    case '1':

 cout << "Para estudiantes (descuento del 20%)" << endl;
// //Para Estudiantes (descuento del 20%): 
// • Laptop Básica: $900 
// • Tablet Estudiantil: $600 
// • Chromebook: $700
    break;


    case '2':

 cout << "NO" << endl;


    break;

case '3':

 cout << "NO" << endl;


    break;



default:

break;

}



}















    return 0;
}