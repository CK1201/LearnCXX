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
    std::string codebookFile_name = argv[1], inFile_name = argv[2], outFile_name = argv[3];
    std::ifstream codebookFile(codebookFile_name), inFile(inFile_name);
    std::ofstream outFile(outFile_name);
    std::ostringstream outbuff;
    std::string codebook, msgs, encrypt_msgs;
    codebookFile >> codebook;
    codebookFile.close();
    // std::cout << codebook << '\n';

    while(!inFile.eof())
    {
        inFile >> msgs;
        // std::cout << msgs << '\n';

        for (auto it = msgs.begin(); it != msgs.end(); ++it)
        {
            int temp = static_cast<int>(*it - 'a');
            if(temp >= 0 && temp <= 26)
                outbuff << codebook.at(temp);
            else
                outbuff << *it;
        }
        if(!inFile.eof())
            outbuff << ' ';
    }
    encrypt_msgs = outbuff.str();
    std::cout << encrypt_msgs << '\n';
    outFile << encrypt_msgs;
    inFile.close();
    outFile.close();
}
