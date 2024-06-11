//#ifndef CONSULTORIO_H
//#define CONSULTORIO_H

#include <string>
#include <vector>

using namespace std;

class Paciente {

private:
    string nombre;
    string tratamiento;

public:
    Paciente();
    Paciente(string _nombre, string _tratamiento);
    string getNombre() const;
    string getTratamiento() const;
    void setTratamiento(string nuevoTratamiento);


};

class Dentista {
private:
    std::vector<Paciente> pacientes;

public:
    void agregarPaciente(string nombre, string tratamiento);
    Paciente* encontrarPaciente(string nombre);
    void actualizarTratamiento(string nombre, string nuevoTratamiento);
    void mostrarPacientes();

};

//#endif


