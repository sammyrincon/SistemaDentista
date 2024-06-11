#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

using namespace std;

class Paciente {

private:
    string nombre;
    string tratamiento;

public:
    Paciente(string _nombre, string _tratamiento);
    string getNombre() const;
    string getTratamiento() const;
    void setTratamiento(string nuevoTratamiento);


};

#endif