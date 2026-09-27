#include<iostream>
#include<fstream>

/*
This shows how to read from a text file in C++. The function loadFromFile takes a filename
as input, opens the file, and reads its contents line by line, printing each line to the console.
The main function demonstrates this by calling loadFromFile with "RandomTextfile.txt" as the argument.
*/
void loadFromFile(const std::string& filename)
{
    std::ifstream fin(filename);
    std::string line;

    while(fin >> line)
    {
        std::cout << line << std::endl;
    }

}

int main() {
    std::cout << "Hello World!" << std::endl;
    loadFromFile("RandomTextfile.txt");
    return 0;
}