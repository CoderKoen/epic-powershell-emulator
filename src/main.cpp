#include <iostream>
#include <string>
#include <string.h>
#include <vector>

std::string location = "C\\";

std::vector<std::vector<std::string>> file_folders = {
    {"None","C\\","Folder"}
};

std::string command;

void run_shell()
{
    std::cout << "["<< location << "]|> ";
    std::cin >> command;
    //run_command(command)
    run_shell();
}



int main(void) 
{
    run_shell();
    return 0;
}
