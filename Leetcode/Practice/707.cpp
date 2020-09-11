class MyLinkedList {
public:
    struct node {
        int val;
        node* next;
        node(int val) : val(val), next(NULL) {}
        node(int val, node* next) : val(val), next(next) {}
    };
    /** Initialize your data structure here. */
    node* head;
    int size;
    MyLinkedList() : head(NULL), size(0) {}
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= size) return -1;
        node* temp = head;
        for(int i = 0; i < index; i++)
            temp = temp->next;
        return temp->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(head == NULL)
            head = new node(val, NULL);
        else
        {
            head = new node(val, head);
        }
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        node* temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new node(val);
        size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index > size)
            return ;
        else if(index == 0)
            addAtHead(val);
        else if(index == size)
            addAtTail(val);
        else if(index < size)
        {
            node* temp = head;
            while(--index)
                temp = temp->next;
            // node tmp(val, temp->next);
            temp->next = new node(val, temp->next);
            size++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index >= size)
            return ;
        else if(index == 0)
        {
            head = head->next;
            size--;
        }
        else
        {
            node* temp = head;
            while(--index)
            {
                temp = temp->next;
            }
            // cout<<"del"<<temp->val<<endl;
            temp->next = temp->next->next;
            size--;
        }
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