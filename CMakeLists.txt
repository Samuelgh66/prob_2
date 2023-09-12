cmake_minimum_required(VERSION 3.5)

project(prob_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(prob_2 main.cpp
    letras.h
    letras.cpp)

include(GNUInstallDirs)
install(TARGETS prob_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
