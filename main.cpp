#include <iostream>

using namespace std;

int main()
{
    double provincia[3];
    double nacion[3];
    double hipotecario[3];


  // ENCABEZADO DEL PROGRAMA
    cout << "\n";
    cout << "==============================================\n";
    cout << "       SISTEMA DE ANALISIS DE PLAZOS FIJOS    \n";
    cout << "==============================================\n";

// INGRSO DE DATOS DE LOS 3 BANCOS
    cout << "\n";
    cout << "==============================================\n";
    cout << "       INGRESO DE TASAS                       \n";
    cout << "==============================================\n";

    cout << "Ingrese las tasas del Banco Provincia:" << endl;

    for (int i = 0; i < 3; i++) {
        cin >> provincia[i];
    }

    cout << "Ingrese las tasas del Banco Nacion:" << endl;

    for (int i = 0; i < 3; i++) {
        cin >> nacion[i];
    }

    cout << "Ingrese las tasas del Banco Hipotecario:" << endl;

    for (int i = 0; i < 3; i++) {
        cin >> hipotecario[i];
    }




// CALCULO DE RENDIMIENTO ANUAL MENSUAL TRIMESTRAL
    cout << "\n==============================================\n";
    cout << "              RESULTADOS DE RENDIMIENTO         \n";
    cout << "==============================================\n";

    // RECOMENDACION FINAL Buscar el rendimiento más alto y determinar el banco recomendado.
    cout << "\n";
    cout << "===============================================================\n";
    cout << "                    MEJOR OPCION DE INVERSION                  \n";
    cout << "===============================================================\n";

    return 0;
}
