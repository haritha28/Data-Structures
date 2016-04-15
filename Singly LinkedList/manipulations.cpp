#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head = NULL;
Node *head1 = NULL;
//Insert at head
void insert_head(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
}
//Insert at positon k
void insert_pos(int value, int pos)
{
    int i=0;
    Node *temp = head;
    while (i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    Node *t2 = new Node();
    t2->data = value;
    t2->next = temp->next;
    temp->next = temp;

}
//Function to insert at tail
void insert_last(int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    else
    {
        Node *t2 = head;
        while (t2->next!= NULL)
        {
            t2= t2->next;
        }
        t2->next = temp;
    }
}
//Function to insert an element
void insert_node(){
    cout<<"--------------------------INSERT---------------------------------"<<endl;
    int value,mpos,i=0,pos;
    cout<<"Enter the value to be inserted:";
    cin>>value;
    cout<<"Enter the position to be inserted:\n\t1.Head\n\t2.Pos value\n\t3.tail";
    cin>>mpos;
    switch (mpos){
    case 1 : insert_head(value);
              break;
    case 2 : cout<<"Enter the position value:";
             cin>>pos;
             insert_pos(value,pos);
              break;
    case 3 : insert_last(value);
              break;
    }
}
//Function to count the nodes
void count_node(){
cout<<"------------------ COUNT NODES----------------------"<<endl;
    Node * temp = head;
    int n = 0;
    if(head == NULL)
        cout<<"List is empty"<< endl;
    else{
        while(temp->next!=NULL)
        {
            n++;
            temp = temp->next;
        }
    }
    cout<<"The number of nodes is : "<<n<<endl;
}
//Function to return sum
void return_sum()
{
cout<<"----------------------SUM-----------------------------"<<endl;
 Node * temp = head;
    int sum = 0;
    if(head == NULL)
        cout<<"List is empty"<<endl;
    else{
        while(temp->next!=NULL)
        {
            sum = sum + temp->data;
            temp = temp->next;
        }
    }
    cout<<"The sum is : "<<sum<<endl;
}
//Fucntion to change the data to the desired value entering positon
void change_data()
{
cout<<"----------------------CHANGE DATA-----------------------------"<<endl;
int pos,mvalue;;
int n =0;
cout<<"Enter the pos of the data to be changed";
cin>>pos;
Node * temp = head;
    if(head == NULL)
        cout<<"List is empty"<<endl;
    else{
        while(temp->next!=NULL)
        {
            n++;
            if(pos == n)
            {
                cout<<"Enter the value to be inserted:";
                cin>>mvalue;
                temp->data = mvalue;
            }
            temp = temp->next;
        }
    }
}
//Fucntion to find move the largest element to the end of the list
void  move_large(){
cout<<"-----------------MOVE LARGER VALUE TO END OF THE LINKED LIST--------------------"<<endl;
int tempdata;
 Node * temp = head;
    int n = 0,pos;
    if(head == NULL)
        cout<<"List is empty"<< endl;
    else{
        while(temp->next!=NULL)
        {
            if((temp->data) > (temp->next->data))
            {
                        n++;
                        tempdata = temp->data;
                        pos = n;

            }
            temp = temp->next;
        }
    }
    temp = head;
    int lastvalue; //Initial value in the last node
    while(temp==NULL)
    {
        lastvalue = temp->data;
        temp->data = tempdata;
        temp= temp->next;
    }
    temp = head;
    int k=0;
     while(temp->next!=NULL)
        {   k++;
            if(pos == k)
            {
                temp->data = lastvalue;

            }
            temp = temp->next;
        }

}
//Function to search an element in linked list
void search_element()
{
    int element;
    Node * temp = head;
    cout<<"Enter the element to be searched:";
    cin>>element;
    if(head == NULL)
        cout<<"List is empty"<< endl;
    else{
        while(temp->next!=NULL)
        {
            if((temp->data)==element)
            {
                cout<<"The element is present."<<endl;
            }
        }
    }
}
/*//Function to merge two lists
void merge_list()
{
    cout<<"Enter the list 2";



}*/

//Function to delete even  elements
void delete_even(){
    Node * temp = head;
    Node *t2;
    if(head == NULL)
        cout<<"List is empty"<< endl;
    else{
        while(temp->next!=NULL)
        {
            if((temp->data)%2 ==0)
            {
                t2 = temp->next;
                temp->next = t2->next;
            }
            temp = temp->next;
        }
    }
}
int main()
{
    int k = 1;
    do{
    int mopt;
    cout<<"======================================================================="<<endl;
    cout<<"Enter the options:\n0.Insert element\n1.Count number of nodes\n2.Return sum\n3.Change data of a node\n4.Moves the largest element to end of list\n5.Search element\n6.Concatenate two strings.\n7.Delete even elements\n";
    cin>>mopt;
    switch(mopt){
        case 0: insert_node();
                break;
        case 1: count_node();
                break;
        case 2: return_sum();
                break;
        case 3: change_data();
                break;
        case 4: move_large();
                break;
        case 5: search_element();
                break;
        /*case 6: merge_list();
                break;*/
        case 7: delete_even();
                break;
        default:cout<<"PLEASE ENTER A VALID OPTION";
                break;
    }
    cout<<"PRESS 1 to continue:";
    cin>>k;
}while(k==1);

return 0;
}
