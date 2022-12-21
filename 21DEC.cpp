class Solution{
    
public:
     Node* sortList(Node* head)

    {

        Node* tmp = head;

        while(tmp->next != NULL){

            

            if(tmp->next->data < 0){

                Node* temp = tmp->next->next;

                tmp->next->next = head;

                head = tmp->next;

                tmp->next = temp;

                

            }

            else

                tmp = tmp->next;

        }

        return head;

    }
};