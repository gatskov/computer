 cmake_minimum_required (VERSION 3.24)


 set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

 add_executable (COMPUTER  main.cpp my_comp.cpp ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/kbd.h
         ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/computer.h)
 target_include_directories(COMPUTER PUBLIC ${MY_INCLUDE_DIR})
