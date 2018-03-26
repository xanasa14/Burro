//this my driver file
#include <iostream>
#include "Burro.h"


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
Burro x; //x is gonna be my list object
x.AddNode(3);
x.AddNode(7);
x.AddNode(5);
x.PrintList();
x.DeleteNode(5);
x.DeleteNode(1000);
x.DeleteNode(3);
x.PrintList();


return 0;
}
