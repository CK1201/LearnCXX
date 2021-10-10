#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " codebook2.txt\n";
        return 1;
    }
    srand(1);
    int codebook[256] = {}, temp1, temp2;
    for (int i = 0; i < 256; i++)
    {
        codebook[i] = i;
    }
    for (int i = 0; i < 256; i++)
    {
        temp1 = rand() % 256;
        temp2 = rand() % 256;
        codebook[temp1] ^= codebook[temp2] ^= codebook[temp1] ^= codebook[temp2];
    }

    std::string codebook_name = argv[1];
    std::ofstream outfile(codebook_name, std::ios_base::out | std::ios_base::binary);
    for (int i = 0; i < 256; i++)
    {
        std::cout << codebook[i] << ' ';
        outfile << codebook[i] << ' ';
    }

    outfile.close();

    return 0;
}