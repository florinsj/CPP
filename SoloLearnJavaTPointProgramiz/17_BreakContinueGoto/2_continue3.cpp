// programiz.com
// continue
// continue --> skip the current iteration, control flow jumps to update expression

// using continue inside  nested loop

#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2)
            {
                continue;
            }

            cout << "i= " << i << "j= " << j << endl;
        }
    }

    return 0;
}