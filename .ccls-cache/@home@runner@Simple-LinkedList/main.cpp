#include <iostream>
using namespace std;
#include "node.h"

 int main() {
  int x=5;
  node a,b,*head,c;
  node *temp;  
  /* Linked steps*/   
  a.value = x;
  a.next=&b;
  b.next=&c;
  head=&a; 
  temp=head; //temp=&a;
  
  b.value=head->value+3;
  cout<<"a="<<a.value<<endl;
  cout<<"b="<<b.value<<endl;
  cout<<"head="<<head->value<<endl;
  

   cout<<"temp="<<temp->value<<endl;
   cout<<"temp->next="<<temp->next->value<<endl;

   c.value=555;
   c.next=NULL;/** **/
   cout<<"c "<<c.value<<endl;
   cout<< temp->next->next->value;

   cout<<endl<<"Moving temp"<<endl;
   int i;
   for(i=0;i<3;i++){
      cout<<temp->value<<endl;
     temp=temp->next;
   }
   for(temp=head;temp!=NULL;temp=temp->next){
     cout<<temp->value<<endl;
     
    }
   
   
/*
   temp->next->value
   (a.next)->value
   b.value
     
     */



   
  
   
}