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
    char decodebook[26] = {};
    std::string codebookFile_name = argv[1], inFile_name = argv[2], outFile_name = argv[3];
    std::ifstream codebookFile(codebookFile_name), inFile(inFile_name);
    std::ofstream outFile(outFile_name);
    std::ostringstream outbuff, decodebookbuff;
    std::string codebook, msgs, decrypt_msgs;
    codebookFile >> codebook;
    codebookFile.close();
    // std::cout << codebook << '\n';

    for (auto it = codebook.begin(); it != codebook.end(); ++it)
    {
        decodebook[static_cast<int>(*it - 'a')] = static_cast<char>('a' + it - codebook.begin());
    }
    // std::cout << decodebook << '\n';

    while(!inFile.eof())
    {
        inFile >> msgs;
        // std::cout << msgs << '\n';

        for (auto it = msgs.begin(); it != msgs.end(); ++it)
        {
            int temp = static_cast<int>(*it - 'a');
            if(temp >= 0 && temp <= 26)
                outbuff << decodebook[temp];
            else
                outbuff << *it;
        }
        if(!inFile.eof())
            outbuff << ' ';
    }
    decrypt_msgs = outbuff.str();
    std::cout << decrypt_msgs << '\n';
    outFile << decrypt_msgs;
    inFile.close();
    outFile.close();
}