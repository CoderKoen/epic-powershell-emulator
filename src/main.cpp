#include "../lib/util.hpp"

std::string location = "C\\";

//Mock files and folders
std::vector<std::vector<std::string>> file_folders = {
    {"None","C\\","Folder"},
    {"C\\","Users","Folder"}
};

std::string user_input;

void run_command(std::string command){
    if (command == "exit")
    {
        exit(0);
    }
    else if (command == "pwd")
    {
        std::cout << std::endl << "Path" << std::endl;
        std::cout << "----" << std::endl;
        std::cout << location << std::endl << std::endl;
    }
    else if (command == "ls" || command == "dir")
    {
        for (int i = 0; i < file_folders.size(); i++)
        {
            if (file_folders[i][0] == location)
            {
                std::cout << std::endl << "Items in " << location << std::endl;
                std::cout << "--------" << std::endl;
                std::cout << file_folders[i][1] << " ["<< file_folders[i][2] << "]" << std::endl;
                
            }
            
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << command << " isn't a valid command!!!" << std::endl;
    }
}


void run_shell()
{
    std::cout << "["<< location << "]> ";
    std::cin >> user_input;
    run_command(user_input);
    run_shell();
}



int main(void) 
{
    run_shell();
    return 0;
}
