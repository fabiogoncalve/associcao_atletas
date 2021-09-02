cmake_minimum_required(VERSION 3.10)
project(Fabio2021)

set(CMAKE_CXX_STANDARD 17)


set(SOURCES socios.cpp aplicacao.cpp )
set(HEADERS socios.h)

include_directories(.)

add_executable(executavel_app ${HEADERS} ${SOURCES})