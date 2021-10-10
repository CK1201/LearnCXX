#include <cstdlib>
#include <ctime>
#include <iostream>
#include <type_traits>

int main()
{
    int test[5][10] = {0};
    int correct_num = 0;
    for (int i = 0; i < 10; i++)
    {
        int res = 0;
        test[0][i] = rand() % 50, test[1][i] = rand() % 50;
        if (test[0][i] < test[1][i])
        {
            int temp = test[1][i];
            test[1][i] = test[0][i];
            test[0][i] = temp;
        }
        test[2][i] = rand() % 2;
        if (test[2][i] >= 1)
        {
            std::cout << i + 1 << "/10 : " << test[0][i] << " + " << test[1][i] << " = ";
            test[3][i] = test[0][i] + test[1][i];
        }
        else
        {
            std::cout << i + 1 << "/10 : " << test[0][i] << " - " << test[1][i] << " = ";
            test[3][i] = test[0][i] - test[1][i];
        }

        std::cin >> res;

        if(res == test[3][i])
        {
            correct_num++;
            test[4][i] = 1;
        }
            
    }

    std::cout << '\n' << correct_num << " of 10 correct\n\n";

    for (int i = 0; i < 10; i++)
    {
        if(!test[4][i])
        {
            if (test[2][i] >= 1)
                std::cout << "test " << i + 1 << " : " << test[0][i] << " + " << test[1][i] << " = " << test[3][i] << '\n';
            else
                std::cout << "test " << i + 1 << " : " << test[0][i] << " - " << test[1][i] << " = "<< test[3][i] << '\n';
        }
    }
    
    system("pause");
}