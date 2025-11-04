cmake_minimum_required(VERSION 4.0)
project(9_practica_pollimorfismosalario_Manuelr0107)

set(CMAKE_CXX_STANDARD 20)

add_executable(9_practica_pollimorfismosalario_Manuelr0107 main.cpp
        src/Empleado.cpp
        src/Empleado.h
        src/EmpleadoJunior.cpp
        src/EmpleadoJunior.h
        src/EmpleadoSenior.cpp
        src/EmpleadoSenior.h
        src/LiderTecnico.cpp
        src/LiderTecnico.h
)
