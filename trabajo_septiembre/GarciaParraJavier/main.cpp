#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
#include "ejercicio4.h"
#include "utils.h"

int main() {
    int ejercicio;
    bool debug;

    ejercicio = askForInt("Que ejercicio desea iniciar? (0-4, 0 para todos) ");
    debug = askForChar("Modo pruebas? (s/n) ") == 's';
    switch (ejercicio) {
        case 0:
            ejercicio1(debug);
            ejercicio2(debug);
            ejercicio3(debug);
            ejercicio4(debug);
            return 0;
        case 1:
            return ejercicio1(debug);
        case 2:
            return ejercicio2(debug);
        case 3:
            return ejercicio3(debug);
        case 4:
            return ejercicio4(debug);

        default:
            printError("no existe!");
    }
    return 0;
}
