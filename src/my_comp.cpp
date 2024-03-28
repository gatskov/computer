#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void write( char* bi, int size) {
    std::cout <<"Enter 8 numbers from 1 to 9 in a row without a space-> ";
   std::cin >> bi;
}
void read(char* bo, int size)
{
std::cout.write(bo,size)<<std::endl;
}
void cpu(char* buf, int size)
{
    int s = 0;
    char a;
for(int i(0);i < size;++i)
{
  s+=  (a = buf[i])-'0';
}
std::cout << "SUM= "<<s<< std::endl;
}
static int load_disk( char* buf, int size)
{
   std::string path = "data.txt";
    std::ifstream Fin(path);
    if (!Fin.is_open()) {
        std::cerr << "Error opening input file\n";
        return 1;
    }
    while (!Fin.eof()) {
    Fin >> buf;
    }
    Fin.close();
    std::cout << "Information from the file data.txt uploaded to the buffer."<< std::endl;
return 0;
}
int save_disk(char* buf, int size)
{
   std::string path = "data.txt";
    std::ofstream Fout(path);
    if (!Fout.is_open()) {
        std::cerr << "Error opening input file\n";
        return 1;
    }
    Fout.write(buf, size);
    Fout.close();
    std::cout << "The information from the buffer is saved in a file data.txt." << std::endl;
    return 0;
}
std::string CheckingLineEntry(std::string t) {
    while (!std::all_of(t.begin(), t.end(),
                        [](char c) { return std::isalpha(c); })) {
        std::cout << "Enter the string correctly -> " << std::endl;
        std::cin >> t;
    }
    return t;
}

