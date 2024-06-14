#include "Dentista.h"
#include <iostream>
#include <string>


void Dentista::agregarPaciente(string nombre, string tratamiento)
{
    pacientes.push_back(Paciente(nombre, tratamiento));
}

Paciente *Dentista::encontrarPaciente(string nombre)
{
    for (Paciente& paciente : pacientes)
    {
        if (paciente.getNombre() == nombre)
        {
            return &paciente;
        }
    }
    return nullptr;
}

void Dentista::actualizarTratamiento(string nombre, string nuevoTratamiento) {
    Paciente* paciente = encontrarPaciente(nombre);
    if (paciente) {
        paciente->setTratamiento(nuevoTratamiento);
        cout << "Tratamiento actualizado para el paciente " << nombre << endl;
    } else {
        cout << "No se encontró al paciente " << nombre << endl;
    }
}

void Dentista::mostrarPacientes() {
    cout << "Lista de pacientes:" << endl;
    for (const Paciente& paciente : pacientes) {
        cout << "Nombre: " << paciente.getNombre() << ", Tratamiento: " << paciente.getTratamiento() << endl;
    }
}

