#include <iostream>
using namespace std;

int my_strlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

void my_strcpy(char dest[], char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char str1[100];
    char str2[100];

    cout << "Enter a string: ";
    cin >> str1;

    cout << "Length = " << my_strlen(str1) << endl;

    my_strcpy(str2, str1);

    cout << "Copied string = " << str2 << endl;

    return 0;
}