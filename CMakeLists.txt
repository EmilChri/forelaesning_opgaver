cmake_minimum_required(VERSION 3.23)
project(forelaesning_opgaver C)

set(CMAKE_C_STANDARD 99)

add_executable(forelaesning_opgaver main.c "guessing game.c" hej.c "cirkel areal eller omkreds.c" "trekant sidelængder.c" lecture6.c lecture8.c lecture9.c lecture9.h lecture10.c lecture11.c lecture12.c lecture13.c)
add_executable(guessing_game "guessing game.c")
add_executable(hej "hej.c")
add_executable(cirkel_areal_eller_omkreds "Cirkel areal eller omkreds.c" cmake-build-debug/Lectur7.c cmake-build-debug/Lectur7.h)
add_executable(Trekant_sidelaengder "trekant sidelængder.c")
add_executable(lecture6.c  lecture6)
add_executable(Lectur7.c  Lectur7)
add_executable(lecture8.c  lecture8)
add_executable(lecture9.c  lecture9)
add_executable(lecture10.c  lecture10)
add_executable(lecture11.c  lecture11)
add_executable(lecture12.c  lecture12)
add_executable(lecture13.c  lecture13)