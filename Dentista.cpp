#include "Dentista.h"
#include <iostream>

Paciente::Paciente(string _nombre, string _tratamiento) : nombre(_nombre), tratamiento(_tratamiento) {}

string Paciente::getNombre() const
{
    return nombre;
}

string Paciente::getTratamiento() const
{
    return tratamiento;
}

void Paciente::setTratamiento(string nuevoTratamiento)
{
    tratamiento = nuevoTratamiento;
}

void Dentista::agregarPaciente(string nombre, string tratamiento)
{
    pacientes.push_back(Paciente(nombre, tratamiento));
}

Paciente





