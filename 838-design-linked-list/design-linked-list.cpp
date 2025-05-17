class MyLinkedList {
public:

struct Node{
    int val;
    Node* next;
    Node(int x)
    {
        val=x;
        next=nullptr;
    }
};
Node* head;
int size;

    MyLinkedList() {
        head=nullptr;
        size=0;
        
    }
    
    int get(int index) {
        if(index<0 ||index>=size)
        return -1;
        Node* curr=head;
        for(int i=0;i<index;i++)
        {
            curr=curr->next;
            
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
        newnode->next=head;
        head=newnode;
        }
        size++;
        
    }
    
    void addAtTail(int val) {
        Node* newnode=new Node(val);
        if(head==nullptr)
        {
           head=newnode;
        }
        else
        {
            Node* curr=head;
            while(curr->next)
            {
                curr=curr->next;
            }
            curr->next=newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        Node* newnode=new Node(val);
        if(index<0 || index>size)
        return ;
        if(index==0)
        {
            addAtHead(val);
            return ;
        }
        
        else
        {
            Node* curr=head;
        for(int i=0;i<index-1;i++)
        {
            curr=curr->next;
        }
        
            newnode->next=curr->next;
            curr->next=newnode;
        }
        
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>=size)
        {
            return;
        }
        Node* temp;
        if(index==0)
        {
            temp=head;
            head=head->next;
        }
        else
        {
        Node* curr=head;
        for(int i=0;i<index-1;i++)
        {
            curr=curr->next;
        }
        temp=curr->next;
        curr->next=temp->next;
        }
        delete temp;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */