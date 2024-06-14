#ifndef DENTISTA_H
#define DENTISTA_H

#include "Paciente.h"
#include <string>
#include <vector>

using namespace std;


class Dentista {
private:
    vector<Paciente> pacientes;

public:
    void agregarPaciente(string nombre, string tratamiento);
    Paciente* encontrarPaciente(string nombre);
    void actualizarTratamiento(string nombre, string nuevoTratamiento);
    void mostrarPacientes();

};

#endif




