#include<bits/stdc++.h>
using namespace std;
struct node{
char data;
node *link
};
class list{
private:
node *head,*tail;
public:
list()
{
head=NULL;
tail=NULL;
}
void insert(int n){
node *temp=new node();
temp->data=n;
temp->link=NULL;
while(head==NULL){
head=temp;
tail=temp;
}
tail=temp;
tail->link=NULL;
}
void display()
{
node*temp=new node();
temp=head;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->link
}
}
};
int main(){
list obj;
obj.insert(15);
obj.display()
}
