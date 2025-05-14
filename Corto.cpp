
#include <iostream>


using namespace std;

int main()
{

    int edad, usuario, dispositivo, laptopb, TabletE, costo = 0, saldor = 0, descuento;
    laptopb = 900;

     

    cout << "Bienvenido a nuestra tienda electronica" << endl;
    cout << "Por favor ingrese su edad" << endl;
    cin >> edad;

    if (edad <= 16)
    {

        cout << "Lo sentimos no puede continuar la compra" << endl;
    }

    else
    {
        //  Solicitar el tipo de usuario 
        // El programa debe pedir al usuario que seleccione una categoría:
        // • Estudiante
        // • Profesional
        // • Ver todos

        cout << "Ingrese el tipo de usuario" << endl;
        cout << "1. Estudiante" << endl;
        cout << "2. Profesional" << endl;
        cout << "3. Ver todos" << endl;

        cin >> usuario;

        switch (usuario)
        {

        case 1:

            // Catalogo de Estudiante.

            cout << "Dispositivos disponibles con el 20 por ciento de descuento" << endl;
            cout << "1. Laptop Básica: $900  " << endl;
            cout << "2. Tablet Estudiantil: $600  " << endl;
            cout << "3. Chromebook: $700 " << endl;

            cin >> dispositivo;

            switch (dispositivo)
            {
                // Seleccionar que dispositivo comprar

            case 1:
        

                descuento = laptopb * 0.2;
                costo = laptopb - descuento;

                break;

            case 2:

               descuento = 600 * 0.2;
               costo = 600 - descuento;

                break;

            case 3:

                descuento = 700 * 0.2;
                costo = 700 - descuento;

                break;
            default:

                cout << "Verificar los datos ingresados" << endl;

                break;
            }

            if (costo < 1000)
            {

                cout << " Saldo disponible: $1000" << endl;
                cout << " descuento: $" << descuento << endl;
                cout << " Compra existosa" << endl;
                cout << " Usted ha comprado: " << dispositivo << endl;

                saldor = 1000 - costo;

                cout << "Saldo restante: $" << saldor << endl;
            }

            else
            {
                cout << " Saldo disponible: $1000" << endl;
                cout << "No fue posible realizar la compra" << endl;

                saldor = 1000 - costo;

                cout << "Le falta:" << saldor << " Para poder realizar la compra " << endl;
            }

            break;

        case 2:

            // Seccion para profesionales.

            cout << "Dispositivos disponibles con el 10 por ciento de descuento" << endl;
            cout << "1.Laptop Avanzada: $1500 " << endl;
            cout << "2. Tablet Pro: $1200  " << endl;
            cout << "3. Estacion de Trabajo: $2000 " << endl;
            cin >> dispositivo;

            switch (dispositivo)
            {

// Seleccionar dispositivo
            case 1:

                descuento = 1500 * 0.1;
                costo = 1500 - descuento;

                break;

            case 2:

                descuento = 1200 * 0.1;
                costo = 1200 - descuento;

                break;

            case 3:

                descuento = 2000 * 0.1;
                costo = 2000 - descuento;

                break;
            default:

                cout << "Verificar los datos ingresados" << endl;
                break;

            }

            if (costo < 1000)
            {

                cout << " Saldo disponible: $1000" << endl;
                cout << " Compra existosa" << endl;
                cout << " Usted ha comprado: " << dispositivo << endl;

                saldor = 1000 - costo;

                cout << "Saldo restante: $" << saldor << endl;
            }

            else
            {
                cout << " Saldo disponible: $1000" << endl;
                cout << " Descuento: $" << descuento << endl;
                cout << "No fue posible realizar la compra" << endl;

                saldor = 1000 - costo;

                cout << "Le falta:" << saldor << " Para poder realizar la compra" << endl;
            }

           break;
            
        case 3:

            cout << "Laptop Basica: $900  " << endl;
            cout << "Tablet Estudiantil: $600  " << endl;
            cout << "Chromebook: $700  " << endl;
            cout << "Laptop Avanzada: $1500 " << endl;
            cout << "Tablet Pro: $1200  " << endl;
            cout << "Estacion de Trabajo: $2000 " << endl;

            break;

        default:

            break;
        }
    }

    return 0;
}
