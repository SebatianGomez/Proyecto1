cmake_minimum_required(VERSION 3.30)
project(Proyecto_1_Progra2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto_1_Progra2 main.cpp
        Usuario.cpp
        Usuario.h
        Utilities.h
        Material.cpp
        Material.h
        Libro.cpp
        Libro.h
        Revista.cpp
        Revista.h
        Articulo.cpp
        Articulo.h
        Video.cpp
        Video.h
        materialDigital.cpp
        materialDigital.h
        Excepciones.cpp
        Excepciones.h
)
