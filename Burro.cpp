//this is the header
#ifndef BURRO_H
#define BURRO_H

class Burro
{
typedef struct node
{
int data; 
node* next; 
}* nodePtr;
nodePtr head; 
nodePtr curr; 
nodePtr temp; 
 
public:
Burro(); 
void AddNode(int addData);
void DeleteNode(int delData);
void PrintList(); 
};

#endif
