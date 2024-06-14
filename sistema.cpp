#include "Dentista.h"
#include <iostream>
#include <string>

int main() {
    Dentista dentista;

    dentista.agregarPaciente("Juan", "Limpieza dental");
    dentista.agregarPaciente("Maria", "Extracción de muelas");

    dentista.mostrarPacientes();

    string nombrePaciente;
    string nuevoTratamiento;

    cout << "Ingrese el nombre del paciente: ";
    cin >> nombrePaciente;

    cout << "Ingrese el nuevo tratamiento para el paciente " << nombrePaciente << ": ";
    cin >> nuevoTratamiento;

    dentista.actualizarTratamiento(nombrePaciente, nuevoTratamiento);

    dentista.mostrarPacientes();

    return 0;
}