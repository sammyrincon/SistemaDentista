# Sistema de Registro de Citas y Seguimiento de Pacientes

## Descripción

Este proyecto es un sistema de registro de citas y seguimiento de pacientes, desarrollado en C++. Permite a los dentistas gestionar información sobre pacientes, sus tratamientos y citas de manera eficiente.

## Estructura del Proyecto

El proyecto está compuesto por las siguientes clases:

### Clase `Paciente`

- **Atributos**:
  - `nombre`: Nombre del paciente.
  - `tratamiento`: Tratamiento asignado al paciente.

- **Métodos**:
  - `Paciente(string _nombre, string _tratamiento)`: Constructor que inicializa el paciente.
  - `string getNombre() const`: Retorna el nombre del paciente.
  - `string getTratamiento() const`: Retorna el tratamiento del paciente.
  - `void setTratamiento(string nuevoTratamiento)`: Actualiza el tratamiento del paciente.

### Clase `Dentista`

- **Atributos**:
  - `vector<Paciente> pacientes`: Lista de pacientes gestionados por el dentista.

- **Métodos**:
  - `void agregarPaciente(string nombre, string tratamiento)`: Agrega un nuevo paciente a la lista.
  - `Paciente* encontrarPaciente(string nombre)`: Busca un paciente por su nombre y devuelve un puntero al mismo.
  - `void actualizarTratamiento(string nombre, string nuevoTratamiento)`: Actualiza el tratamiento de un paciente específico.
  - `void mostrarPacientes()`: Muestra la lista de pacientes y sus tratamientos.

## Uso

1. Compila el proyecto utilizando un compilador compatible con C++11 o superior:
   ```bash
   g++ -o sistema_citas main.cpp Dentista.cpp Paciente.cpp
