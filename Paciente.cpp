#include "Paciente.h"


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

