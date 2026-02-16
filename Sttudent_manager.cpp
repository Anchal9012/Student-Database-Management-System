/*  
This is a Student Management System based on Linked List*/

#include<iostream>//for input and output
using namespace std;
class Node{//Node class to create a node of linked list
public:
string name;//to store student name
int age;//to store student age
Node* next;
Node(string s_name, int s_age){//constructor to initialize the node
    name=s_name;
    age=s_age;
    next=NULL;
}
};

class student{//student class to manage the student data
Node* head, *tail;//to store the head and tail of the linked list
public:
student(){//onstructor to initialize the head and tail with NULL values
    head=tail=NULL;
}
bool isempty(){//function to check if the linked list is empty or not
    if(head==NULL){
        cout<<"Student DataBase is Empty!!!";
        return true;
    }
    else return false;
}
void add_student(){//function to add a student to the linked list
    
    string name;
    int age;
    cout<<endl<<"Enter Student Name: ";
    cin>>name;
    cout<<endl<<"Enter Student Age: ";
    cin>>age;
    Node* newNode = new Node(name, age);
    
    if(head==NULL){// assign newNode as head if databse is empty...
        head=tail=newNode;
        return;
    }
    newNode->next=NULL;
    tail->next=newNode;
    tail=newNode;
}
void view(){//function to view the student database
    if(isempty()) return;
    int index =1;//To display the student id in the output
    Node* temp=head;
    while(temp!=NULL){
    cout<<endl<<index<<"-> "<<temp->name<<", "<<temp->age<<endl;
        temp=temp->next;
        index++;
}
}
void search(){//function to search a particular student in the linked list
  if(isempty())  return;
  int index;
  cout<<"Enter Student I'd: ";
  cin>>index;
  if(index<1){//Validating the student id
    cout<<"Invalid I'd!!!";
    return;
  }
  Node* temp=head;
  while(temp!=NULL){
    if(index==1){
        cout<<temp->name<<", "<<temp->age;
        return;
    }
    index--;
    temp=temp->next;
  }
  cout<<"Student Not in DataBase!!!";//if student id is greater than the number of students in the database
}
void update(){//function to update a particular student data
    if(isempty()) return;
    int index;
    cout<<"\nEnter Student I'd: ";
    cin>>index;

    if(index<1){
        cout<<"\nInvalid I'd\n";
        return;
    }
    bool isexist=false;//to check if the student id is present in the database or not
    Node* temp=head;
    while(temp!=NULL){
        if(index==1) {
            isexist=true;
            cout<<endl<<temp->name<<", "<<temp->age<<endl;
            break;
        }
        index--;
        temp=temp->next;
    }
    if(!isexist){
        cout<<"\nStudent Not in DataBase!!!\n";
        return;
    }
    string s_name;
    int s_age;
    cout<<"\nEnter Student's New Name: ";
    cin>>s_name;
    cout<<"\nEnter Student's New Age: ";
    cin>>s_age;
    temp->name=s_name;
    temp->age=s_age;
}
void delete_student(){//function to delete a  student data using student id
 if(isempty()) return;
    int index;
    cout<<"\nEnter Student I'd: ";
    cin>>index;
    if(index==1){//Edge Case for when user wants to delete the first student in the database
        cout<<endl<<"1-> "<<head->name<<", "<<head->age<<endl;
    Node* temp=head->next;
    delete head;
    head=temp;
    return;
    }
    if(index<1){//Validating the student id
        cout<<"\nInvalid I'd\n";
        return;
    }
    bool isexist=false;//to check if the student id is present in the database or not
    Node* temp=head;
    while(temp!=NULL){
        if(index==2) {
            isexist=true;
            cout<<endl<<(temp->next)->name<<", "<<(temp->next)->age<<endl;
            break;
        }
        index--;
        temp=temp->next;
    }
    if(!isexist){
        cout<<"\nStudent Not in DataBase!!!\n";
        return;
    }
    if(temp->next==tail){//Edge Case for when user wants to delete the last student in the database
        delete tail;
        tail=temp;
        tail->next=NULL;
   }
   else{Node* temp2=temp->next;
   temp->next=(temp->next)->next;
   delete temp2;}
}
void menu(){//function to display the menu and take user input
    bool status=true;
    while(status){//loop will run until user wants to exit the program
        cout<<"\n0. Exit The Program\n1. Add Student\n2. View Student\n3. Search Student\n4. Update Student\n5. Delete Student\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 0:{
            system("cls");
            status=false;
            break;
        }
        case 1:{
        system("cls");
        add_student();
        break;
    }
    case 2:{
        system("cls");
        view();
        break;
    }
    case 3:{
        system("cls");
        search();
        break;
    }
    case 4:{
        system("cls");
        update();
        system("cls");
        break;
    }
    case 5:{
        system("cls");
        delete_student();
        break;
    }
    default :{
        system("cls");
        cout<<"\nInvalid Input!!!\n";
        break;
    }
    }
}}
};
int main()
{
    system("cls");
    student s;
    s.menu();
    return 0;
}