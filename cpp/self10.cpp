#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:

    void accept()
    {
        cout << "Enter 4 elements:" << endl;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }

            cout << endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = 0;

                for(int k = 0; k < 2; k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, result;

    cout << "Enter Matrix 1:" << endl;
    m1.accept();

    cout << "Enter Matrix 2:" << endl;
    m2.accept();

    result = m1 + m2;

    cout << "\nAddition:" << endl;
    result.display();

    result = m1 - m2;

    cout << "\nSubtraction:" << endl;
    result.display();

    result = m1 * m2;

    cout << "\nMultiplication:" << endl;
    result.display();

    return 0;
}