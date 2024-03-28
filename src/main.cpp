#include "cpu.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"
#include "disk.h"
#include "computer.h"
#include <string>
#include <iostream>
#define STR(text) #text
#define PRINT_TASK(STR)                                                        \
  std::cout << STR(                                                            \
      25.4 Practical work. Task 2. The project of a computer simulator.\n\n)

int main()
{
    PRINT_TASK(STR);
     std::string computer;
        std::cout
                << "--------------------------------------\n"
                << "| (input)   - enter from the keyboard|\n"
                << "| (display) - display on the screen  |\n"
                << "| (save)    - save to file           |\n"
                << "| (load)    - download from a file   |\n"
                << "| (sum)     - calculating the amount |\n"
                << "| (exit)    - exit the program       |\n"
                << "--------------------------------------"
                << std::endl;
        std::cout << "     Enter the command !!!\n";
        std::cout << "     ~~~~~~~~~~~~~~~~~~~~~\n";
        while (true) {
            std::cin >> computer;
            if (CheckingLineEntry(computer) == "input") {
                write(buffer, bufSize);
            } else {
                if (CheckingLineEntry(computer) == "display") {
                    read(buffer, bufSize);
                } else {
                    if (CheckingLineEntry(computer) == "save") {
                        save_disk(buffer, bufSize);
                    } else {
                        if (CheckingLineEntry(computer) == "load") {
                            load_disk(buffer, bufSize);
                        } else {
                            if (CheckingLineEntry(computer) == "sum") {
                                cpu(buffer, bufSize);
                            } else {
                                if (CheckingLineEntry(computer) == "exit") {
                                    std::cout << "     +-----+\n";
                                    std::cout << "     | END |\n";
                                    std::cout << "     +-----+\n";
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
}

