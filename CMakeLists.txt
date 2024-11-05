cmake_minimum_required(VERSION 3.29)
project(Examen_de_Programaci_n_C_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Examen_de_Programaci_n_C_
    .idea/.gitignore
    .idea/editor.xml
    .idea/Examen-de-Programaci-n-C-.iml
    .idea/misc.xml
    .idea/modules.xml
    .idea/vcs.xml
    main.cpp
    main.h
    README.md
        "EJERCICIO 1/identificador.h"
        "EJERCICIO 1/identificador.cpp"
        "EJERCICIO 2/semanas.h"
        "EJERCICIO 2/semanas.cpp"
        "EJERCICIO 3/PromedioNotas.h"
        "EJERCICIO 3/PromedioNotas.cpp")
