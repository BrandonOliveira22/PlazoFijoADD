#include <iostream>
#include <iomanip>
#include "banco.h"
using namespace std;

int main()
{
    Banco provincia("Provincia");
    Banco nacion("Nacion");
    Banco hipotecario("Hipotecario");

    cout << fixed << setprecision(2); //AJUSTA RESULTADOS A 2 DECIMALES
    double tasa;
    double capital = 850000;
    int opcion;


    do {
        cout << "\n";
        cout << "==============================================\n";
        cout << "       SISTEMA DE ANALISIS DE PLAZOS FIJOS    \n";
        cout << "==============================================\n";

        cout << "1 - RENDIMIENTO ANUAL" << endl;
        cout << "2 - RENDIMIENTO TRIMESTRAL" << endl;
        cout << "3 - RENDIMIENTO MENSUAL" << endl;
        cout << "4 - CARGAR TASAS" << endl;
        cout << "5 - MOSTRAR PROMEDIOS" << endl;
        cout << "0 - Salir" << endl;

        cout << "\nOPCION: ";
        cin >> opcion;

        system("cls");

        switch(opcion)
        {
        case 1:

            cout << "==============================================\n";
            cout << "           RENDIMIENTO ANUAL                  \n";
            cout << "==============================================\n\n";

            cout << "Banco Provincia: $"
                 << provincia.rendimientoAnual(capital)
                 << endl;

            cout << "Banco Nacion: $"
                 << nacion.rendimientoAnual(capital)
                 << endl;

            cout << "Banco Hipotecario: $"
                 << hipotecario.rendimientoAnual(capital)
                 << endl;

            system("pause");
            break;

        case 2:

            cout << "==============================================\n";
            cout << "        RENDIMIENTO TRIMESTRAL                \n";
            cout << "==============================================\n\n";

            cout << "Banco Provincia: $"
            << provincia.rendimientoTrimestral(capital)
            << endl;

            cout << "Banco Nacion: $"
                 << nacion.rendimientoTrimestral(capital)
                 << endl;

            cout << "Banco Hipotecario: $"
                 << hipotecario.rendimientoTrimestral(capital)
                 << endl;

            system("pause");
            break;

        case 3:

            cout << "==============================================\n";
            cout << "          RENDIMIENTO MENSUAL                 \n";
            cout << "==============================================\n\n";

            cout << "Banco Provincia: $"
            << provincia.rendimientoMensual(capital)
            << endl;

            cout << "Banco Nacion: $"
                 << nacion.rendimientoMensual(capital)
                 << endl;

            cout << "Banco Hipotecario: $"
                 << hipotecario.rendimientoMensual(capital)
                 << endl;

            system("pause");
            break;

        case 4:

            cout << "==============================================\n";
            cout << "           CARGA DE TASAS                     \n";
            cout << "==============================================\n\n";

            cout << "INGRESE LAS TASAS DEL BANCO PROVINCIA\n\n";

            for(int i=0; i<3; i++)
            {
                cout << "Tasa del anio " << i+1 << " = ";
                cin >> tasa;
                provincia.setTasa(i,tasa);
            }

            cout << "\nINGRESE LAS TASAS DEL BANCO NACION\n\n";

            for(int i=0; i<3; i++)
            {
                cout << "Tasa del anio " << i+1 << " = ";
                cin >> tasa;
                nacion.setTasa(i,tasa);
            }

            cout << "\nINGRESE LAS TASAS DEL BANCO HIPOTECARIO\n\n";

            for(int i=0; i<3; i++)
            {
                cout << "Tasa del anio " << i+1 << " = ";
                cin >> tasa;
                hipotecario.setTasa(i,tasa);
            }

            cout << "\nTasas cargadas correctamente." << endl;

            system("pause");
            system ("cls");
            break;

        case 5:
            cout << "BANCO PROVINCIA: " << provincia.calcularPromedio() << "%" << endl;
            cout << "BANCO NACION: " << nacion.calcularPromedio() << "%" << endl;
            cout << "BANCO HIPOTECARIO: " << hipotecario.calcularPromedio() << "%" << endl;

            system ("pause");
            system ("cls");
            break;

        case 0:

            cout << "Saliendo..." << endl;
            break;

        default:

            cout << "Opcion invalida." << endl;
            system("pause");
            break;
        }

    }while (opcion != 0);
    
    return 0;
}
