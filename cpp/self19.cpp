#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    list<int> numbers;

    srand(time(0));

    // Store 10 random numbers
    for(int i = 0; i < 10; i++)
    {
        numbers.push_back(rand() % 100);
    }

    cout << "Original list:" << endl;

    list<int>::iterator it;

    for(it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // 1. Display in reverse order
    cout << "\nReverse order:" << endl;

    list<int>::reverse_iterator rit;

    for(rit = numbers.rbegin(); rit != numbers.rend(); ++rit)
    {
        cout << *rit << " ";
    }

    cout << endl;

    // 2. Increment each number by 5
    for(it = numbers.begin(); it != numbers.end(); ++it)
    {
        *it = *it + 5;
    }

    // 3. Display using const_iterator
    cout << "\nAfter adding 5:" << endl;

    list<int>::const_iterator cit;

    for(cit = numbers.begin(); cit != numbers.end(); ++cit)
    {
        cout << *cit << " ";
    }

    cout << endl;

    // 4. Sort the list
    numbers.sort();

    // 5. Display modified list using default iterator
    cout << "\nSorted list:" << endl;

    for(it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}