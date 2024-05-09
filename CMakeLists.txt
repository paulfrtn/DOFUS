cmake_minimum_required(VERSION 3.28)
project(DOFUS C)

set(CMAKE_C_STANDARD 11)

add_executable(DOFUS
        main.c
        fonctions.c)

target_link_libraries(DOFUS -lmingw32 -lalleg44)