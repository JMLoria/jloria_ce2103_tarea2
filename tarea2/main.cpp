#include <iostream>
#include <unistd.h>

#include "src/Cases.h"

using namespace std;

int main() {
    cout << "CE2103 - Algoritmos y Estructuras de Datos II \nTarea Extraclase 2 - Analisis de Algoritmos" << endl;

    int i;

    while (true) {
        cout << "Ingrese el tamaño del arreglo: ";
        cin >> i;

        if (i <= 0) {
            break;
        }

        int n[i];
        double bsTime[i];
        double msTime[i];
        double ssTime[i];
        double llTime[i];
        double btTime[i];

        cout << "Peor Caso" << endl;
        worstCase(i, n, bsTime, msTime, ssTime, llTime, btTime);
        printCase(i, n, bsTime, msTime, ssTime, llTime, btTime);

        sleep(5);

        cout << "Mejor Caso" << endl;
        bestCase(i, n, bsTime, msTime, ssTime, llTime, btTime);
        printCase(i, n, bsTime, msTime, ssTime, llTime, btTime);

        sleep(5);

        cout << "Caso Promedio" << endl;
        averageCase(i, n, bsTime, msTime, ssTime, llTime, btTime);
        printCase(i, n, bsTime, msTime, ssTime, llTime, btTime);

        sleep(5);
    }

    return 0;
}
