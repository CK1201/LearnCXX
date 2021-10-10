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
    std::string codebookFile_name = argv[1], inFile_name = argv[2], outFile_name = argv[3], msgs, encrypt_msgs;
    std::ifstream codebookFile(codebookFile_name), inFile(inFile_name);
    std::ofstream outFile(outFile_name);
    std::ostringstream outbuff;
    int codebook[256], i = 0;
    while(!codebookFile.eof())
    {
        codebookFile >> msgs;
        // std::cout << msgs << ' ';
        codebook[i] = std::atoi(msgs.c_str());
        // std::cout << codebook[i] << ' ';
        ++i;
    }

    while(!inFile.eof())
    {
        inFile >> msgs;
    //     // std::cout << msgs << '\n';

        for (auto it = msgs.begin(); it != msgs.end(); ++it)
        {
            int temp = static_cast<int>(*it);
            outbuff << codebook[temp] << ' ';
        }
        outbuff << codebook[' '] << ' ';
    }
    encrypt_msgs = outbuff.str();
    std::cout << encrypt_msgs << '\n';
    outFile << encrypt_msgs;
    inFile.close();
    outFile.close();
}
