#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ctime>

int main()
{
    int test_num = 10, test_difficulty = 0, test[5][test_num] = {0}, correct_num = 0;
    double time_consume[test_num], min_time = 99, mean_time = 0;
    clock_t time_start[test_num];
    
    std::cout << "输入题目个数：";
    std::cin >> test_num;
    std::cout << "输入题目难度（0，1）：";
    std::cin >> test_difficulty;
    
    for (int i = 0; i < test_num; i++)
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
            std::cout << i + 1 << "/" << test_num << " : " << test[0][i] << " + " << test[1][i] << " = ";
            test[3][i] = test[0][i] + test[1][i];
        }
        else
        {
            std::cout << i + 1 << "/" << test_num << " : " << test[0][i] << " - " << test[1][i] << " = ";
            test[3][i] = test[0][i] - test[1][i];
        }

        time_start[i] = clock();
        std::cin >> res;
        time_consume[i] = (double)(clock() - time_start[i]) / CLOCKS_PER_SEC;
        

        if(res == test[3][i])
        {
            correct_num++;
            test[4][i] = 1;
            if(time_consume[i] < min_time)
                min_time = time_consume[i];
            mean_time += time_consume[i];
        }
            
    }
    mean_time /= correct_num;

    std::cout << '\n' << correct_num << " of "<< test_num << " correct\n";
    std::cout << "minimum time: " << min_time << "s\nmean time: " << mean_time << "s \n\n";

    for (int i = 0; i < test_num; i++)
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