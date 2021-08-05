#include <iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  node *link;
};

node *start=NULL;

void append(int x){
  node *t=new node;
  t->data=x;
  t->link=NULL;
  if(start==NULL){
    start=t;
  }
  else{
    node *p=start;
    while(p->link!=NULL){
      p=p->link;
    }
    p->link=t;
  } 
}

void traverse(){
  if(start==NULL){
    cout<<"Linked list does not esist";
    return;
  }
  node *p=start;
  cout<<"Linked-list\n";
  cout<<"------------\n";
  while(p!=NULL){
    cout<< " "<<p->data<<endl;
    p=p->link;
  }
}
void count()
{
	if(start==NULL)
	{
		cout<<"\nLinked list does not exist ";
		return;
	}
	int c=0;
	node *p=start;
	while(p!=NULL)
	{
		c=c+1;
		p=p->link;
	}
	cout<<"\nNumber of node = "<<c;
}
void search(int x)
{
	if(start==NULL)
	{
		cout<<"\nLinked list does not exist";
		return;
	}
	node *p=start;
	while(p!=NULL)
	{
		if(p->data==x)
		{
			cout<<"\nFound";
			break;
		}
		p=p->link;
	}
	if(p==NULL)
	{
		cout<<"\nNot Found";
	}
}
void insertbeg(int x)
{
	node *t=new node;
	t->data=x;
	t->link=NULL;
	if(start==NULL)
	{
		start=t;
	}
	else
	{
		t->link=start;
		start=t;
	}
}
void delfirst()
{
	if(start==NULL)
	{
		cout<<"\nLinked list doesnot exist";
		return;
	}
	else
	{
		node *p=start;
		start=start->link;
		cout<<"Deleted node ="<<p->data;
		delete p;
	}
}
/*
void dellast()
{
	if(start==NULL)
	{
		cout<<"Linked list does not exist";
		return;
	}

	node *p=start;
	node t;
	while(p->link!=NULL)
	{
		p=*t;
		p=p->link;
	}
	t->link=NULL;
	cout<<"\nDeleted node = "<<p->data;
	delete p;
	
}
*/
int main(){
  int n,option;
  l :
  cout<<"-----------------------\n";
  cout<<"******Choice-Menu******";
  cout<<endl<<endl;
  cout<<"1.Create a linked list\n";
  cout<<"2.Append a linked list\n";
  cout<<"3.Traverse a linked list\n";
  cout<<"4.Count a linked list\n";
  cout<<"5.Search a linked list\n";
  cout<<"6.Insert a linked list in beginninng\n";
  cout<<"7.Delete first data\n";
  //cout<<"8.Delete last data\n";
  cout<<"8.Exit\n";
  cout<<"-----------------------\n";
  cin>>option;
  switch(option){
    
	  case 1 : cout<<"How many linked-list do you want to create ? : ";
       
              cin>>n;
             for(int i=0;i<n;i++){
             cout<<"\nEnter "<<i+1<<" element : ";
             int x;
             cin>>x;
             append(x);
             
          }
          break;
  case 2 :cout<<"\nEnter the value ";
          int z;
          cin>>z; 
          append(z);
          break;
  case 3 : traverse();
           break;
  case 4 : count();
	   break;
  case 5:int x;
	   cout<<"\n Enter the number you wants to seach : ";
	 cin>>x;
	search(x);
	  break;
  case 6 : int y;
	   cout<<"\n Which number do you want to insert in the beginning : ";
	   cin>>y;
	   insertbeg(y);
	   break;
  case 7 : delfirst();
	   break;
/*	   
  case 8 : dellast();
	   break;
 */
  case 8 : exit(0);
  default : cout<<"Wrong choice";          
  } 
  char Q;
  cout<<"\nEnter (c) to continue or (q) to exit \n";
  cin>>Q;
  if(Q=='q'||Q=='Q')
  exit(0);
  else
	  goto l;
} 


