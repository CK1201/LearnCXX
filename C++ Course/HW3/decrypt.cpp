#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        std::cout << "Usage: " << argv[0] << " codebook infile outfile\n";
        return 1;
    }
    int decodebook[256] = {};
    std::string codebookFile_name = argv[1], inFile_name = argv[2], outFile_name = argv[3];
    std::ifstream codebookFile(codebookFile_name), inFile(inFile_name);
    std::ofstream outFile(outFile_name);
    std::ostringstream outbuff, decodebookbuff;
    std::string msgs, decrypt_msgs;

    for (int i = 0; i < 256; ++i)
    {
        codebookFile >> msgs;
        decodebook[std::atoi(msgs.c_str())] = i;
        // std::cout << decodebook[std::atoi(msgs.c_str())] << '\n';
    }


    while(!inFile.eof())
    {
        inFile >> msgs;
        // std::cout << msgs << '\n';
        outbuff << static_cast<char>(decodebook[std::atoi(msgs.c_str())]);
    }
    decrypt_msgs = outbuff.str();
    std::cout << decrypt_msgs << '\n';
    outFile << decrypt_msgs;
    inFile.close();
    outFile.close();
}