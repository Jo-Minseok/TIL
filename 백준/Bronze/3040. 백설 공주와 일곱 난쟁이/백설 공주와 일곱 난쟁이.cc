#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            int sum = 0;
            for (int k = 0; k < 9; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                else
                {
                    sum += arr[k];
                }
            }
            if (sum == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (!(k == i || k == j))
                    {
                        cout << arr[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }
}