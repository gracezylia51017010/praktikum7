#include <conio.h>
#include <iostream>

int main()
{
int num;
cout <<"Angka Angka kuadra \n";
cout << "-----------------------\n";
for (num=1; num<=10; num++)
cout << num <<"\t\" << (num * num) << endl;
getch ();
return 0;
}