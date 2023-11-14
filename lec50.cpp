#include<iostream>
using namespace std;
// --> non contiguous memory allocation --> insertion and deletion is non expensive
// block of memory --> node  data->next--> head to tail
//double head to next to previous 
//circular tail to head 
// class node{
//     public:
//     int val;
//     node* next;
//     node(int data ){
//         val=data;
//         next=NULL;
//     }

// };
// void insertathead(node* &head, int val){
//     node* new_node=new node(val);
//     new_node->next=head;
//     head=new_node;
// }
// void insertatail(node* &head, int val){
//     node* new_node=new node(val);
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     //temp has reached last node

//     temp->next=new_node;
// }
// void insertatposition(node* &head, int val,int pos){
//     if(pos==0){
//         insertathead(head,val);
//         return;
//     }
//     node* new_node=new node(val);
//     node* temp=head;
//     int curr_pos=0;
//     while(curr_pos!=pos-1){
// temp=temp->next;
// curr_pos++;
//     }
//     //tem`p is pointing to node at pos-1
//     new_node->next=temp->next;
//     temp->next=new_node;
// }
// void updateatposition(node* &head,int k,int val){
//     node* temp=head;
//     int curr_pos=0;
//     while(curr_pos!=k){
//         temp=temp->next;
//         curr_pos++;
//     }
//     //temp will be pointing to the kth node 
//     temp->val=val;
// }
// void deleteathead(node* &head){
//     node* tem=head;//nodetobedeleted
//     head=head->next;
// }
// void deeteathead(node* &head){
//     node* temp=head;//node to be deleted 
//     head=head->next;
//     free(temp);
// }
// void deleteatail(node* &head){
//     node* second_last=head;
//     while(second_last->next->next!=NULL){
//         second_last=second_last->next;
//     }
// }
// void deleteatposition(node* &head,int pos){
//     if(pos==0){
//         deleteathead(head);
//         return;
//     }
//     int curr_pos=0;
//     node* prev=head;
//     while(curr_pos!=pos-1){
//         prev=prev->next;
//         curr_pos++;
//     }
//     //prev is pointing to node at pos-1
//     node* temp=prev->next;//node to be deleted 
//     prev->next=prev->next->next;
//     free(temp);
// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){
//     // node* n=new node(1);
//     // cout<<n->val<<" "<<n->next<<endl;
//     node* head=NULL;
//     insertathead(head,2);
//     display(head);
//     insertathead(head,1);
//     display(head);
//       insertatail(head,3);
//         display(head);
//         insertatposition(head,8,1);//starts with zero 
//         display(head);
//         updateatposition(head,2,5);
//         display(head);
//         deleteathead(head);
//          display(head);
//             deleteatail(head);
//    display(head);
//      deleteatposition(head,2);
//    display(head);
//     return 0;
// }
//deleting every alternate element  from thr list starting  from second element
// class node{
//     public: 
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class linkedinlist{
//     public:
//     node* head;
//     linkedinlist(){
//         head=NULL;
//     }
//     void insertatail(int value)
// {
//     if(head=NULL){
//         node* new_node=new node(value);
//         //linkedin list is numpty
//         head=new_node;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_node;
// }
// void deletealternatenodes(node* &head){
//     node* curr_node=head;
//     while(curr_node!=NULL && curr_node->next!=NULL){
//         //his is node to be deleted 
//         node* temp=curr_node->next;
//         curr_node->next=curr_node->next->next;
//         free(temp);
//         curr_node=curr_node->next;
//     }
// }
// node* reverserecursion(node* &head){
//     //base case
//     if(head==NULL|| head->next==NULL){
//         return head;
//     }
//     //recursive case
//     node* new_head=reversecursion(head->next);
//     head->next->next=head;
//     head->next=NULL;//head is now pointing to last node in reversed li
//     return new_head;
// }
//reverse the nodes of the list k at a time  and return  modified list 
node* reversekl(node* &head, int k) {
    node* prevptr=NULL;
    node* currptr=head;
    int counter=0;//for counting first k nodes 
    while(currptr!=NULL && counter<k){
        node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;                                                          
void deleteduplicatenodes(node* &head){
    node* curr_node=head;
    while(curr_node){
    while(curr_node->next && curr_node->val==cur_node->next->val){
        //dele curr->next 
        node* temp=curr_node->next->next;

        //nodeto be delated

free(temp);
    }//this loop ends when current nodes and next node value are different 
    curr_node=curr_node->next;
    }
}
node* reverselist(node* &head){
    node* prevpt=NULL;
    node* currptr=head;
    //currptr->next=prevptr
    //mov
    while(currptr!=NULL){
        node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    //when this loop endes, prevptr ponuinting to my last node which is new head
    node* new_head=prevptr;
    return new_head;
}
// void display(){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp=temp->next;
//     }
//     cout<<"null"<<endl;
// }};
// int main(){
//     linkedinlist li;
//     li.insertatail(1);
//         li.insertatail(2);
//           li.insertatail(3);
          
//     li.display();
// deletealternatenodes(li.head);

// }
//given head of s, duplicate sucthat each element 
//return the reverse list recursively 
