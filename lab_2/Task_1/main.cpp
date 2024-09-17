#include <iostream>
#include <windows.h>
#include "country.h"
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Country Ukraine;
    cout << Ukraine.getName()<<endl;
    cout << Ukraine.getCapital()<<endl;
    cout << Ukraine.getPopulation()<<endl;
    Country Poland("Poland","Warsaw",37846611 );
    cout << Poland.getName()<<endl;
    cout << Poland.getCapital()<<endl;
    cout << Poland.getPopulation()<<endl;
    Country Plagiarism=Ukraine;
    cout << Plagiarism.getName()<<endl;
    cout << Plagiarism.getCapital()<<endl;
    cout << Plagiarism.getPopulation()<<endl;
    return 0;
}
