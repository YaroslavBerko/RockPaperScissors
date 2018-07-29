#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

int main()
{
    char input_choose;
    int comp_choose = 0;
    int test = 1;


    std::mt19937 rng(time(NULL));
    std::uniform_int_distribution<int> uni(1,3);
    std:: cout<< "You can write 'r', 's', 'p' \n";
    while (test != 0)
    {
        std::uniform_int_distribution<int> uni(1,3);
        comp_choose = uni(rng);

        //std:: cout<< comp_choose << std:: endl;
        std:: cout<< "input \n";
         std:: cin>>  input_choose;
        switch (input_choose) {
        case 'r': // 1
            if (comp_choose == 2) std:: cout<< "You win \n";
            else if (comp_choose == 1)
                std:: cout<< "Draw \n";
            else
                std:: cout<< "Comp win \n";
            break;
        case 's': // 2
            if (comp_choose == 3) std:: cout<< "You win \n";
            else if (comp_choose == 2)
                std:: cout<< "Draw \n";
            else
                std:: cout<< "Comp win \n";
            break;
        case 'p': // 3
            if (comp_choose == 1) std:: cout<< "You win \n";
            else if (comp_choose == 3)
                std:: cout<< "Draw \n";
            else
                std:: cout<< "Comp win \n";
            break;
        default:
            std:: cout<< "Input correc answer \n. You can write 'r', 's', 'p'";
            continue;
        }
        std:: cout<< "If you want exit input 0 else 1 \n";
        std:: cin>> test;
    }
    return 0;
}
