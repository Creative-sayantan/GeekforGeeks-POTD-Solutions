class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){

        // code here

        int n=str.length();

        stack<Node*>st;

        bool left_done=false;

        

        for(int i=0;i<n;i++){

            if(st.empty()){

                int val=0;

                while(i<n && ((str[i]!='(') && (str[i]!=')'))){

                    val=val*10+(str[i]-48);

                    i++;

                }

                i--;

                

                Node *t=new Node(val);

                st.push(t);

            }

            else if(left_done && str[i]=='('){

                ++i;

                int val=0;

                while(i<n && ((str[i]!='(') && (str[i]!=')'))){

                    val=val*10+(str[i]-48);

                    i++;

                }

                i--;

                

                Node *t=new Node(val);

                Node *temp=st.top();

                temp->right=t;

                st.push(t);

                left_done=false;

            }

            else if(str[i]=='('){

                ++i;

                int val=0;

                while(i<n && ((str[i]!='(') && (str[i]!=')'))){

                    val=val*10+(str[i]-48);

                    i++;

                }

                i--;

                Node *t=new Node(val);

                Node *temp=st.top();

                temp->left=t;

                st.push(t);

            }

            else{

                st.pop();

                left_done=true;

            }

            // cout<<st.size()<<endl;

        }

        Node *ans=st.top();

        return ans;

    }
};
