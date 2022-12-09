class Solution{ 

public:

    void reorderList(Node* head) {

        Node *temp = head;

        //staring of the code same like the all linklist problems

        

        vector<int> res;

        //using while loop instead of u using a loop , but it is complex process

        while(temp){

            res.push_back(temp->data);

            temp=temp->next;

        }

        //based on the video

        if(res.size()<=2)  

        return;

        

        int n=res.size();

        int i=0, idx=0;

        

        vector<int> nodes(n);

        while(idx<n){

            nodes[idx]=res[i];

            idx = idx+2;

            i++;

        }

        idx=1, i=n-1;

        while(idx<n){

            nodes[idx]=res[i];

            i--;

            idx+=2;

        }

        

        Node *order= head;

        for(auto val: nodes){

            order->data=val;

            order=order->next;

        }

    }

};