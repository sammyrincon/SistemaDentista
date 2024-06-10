#ifndef DENTISTA_H
#define DENTISTA_H

#include <string>
#include <vector>

class Paciente {

private:
    std::string nombre;
    std::string tratamiento;

public:
    Paciente(std::string _nombre, std::string _tratamiento);
    std::string getNombre() const;
    std::string getTratamiento() const;
    void setTratamiento(std::string nuevoTratamiento);


};

class Dentista {
private:
    std::vector<Paciente> pacientes;

public:
    void agregarPaciente(std::string nombre, std::string tratamiento);
    Paciente* encontrarPaciente(std::string nombre);
    void actualizarTratamiento(std::string nombre, std::string nuevoTratamiento);
    void mostrarPacientes();

};

#endlif


