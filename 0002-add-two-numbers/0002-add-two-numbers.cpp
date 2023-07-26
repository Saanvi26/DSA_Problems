/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=NULL;
        ListNode* temp=NULL;
        ListNode * head1=(l1);
          ListNode * temp1=head1;
        ListNode * head2=(l2);
              ListNode * temp2=head2;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL){
            if(ans==NULL){
                temp=new ListNode((carry+temp1->val+temp2->val)%10,NULL);
                ans=temp;
            }
            else if (ans!=NULL){
               ListNode *newnode= new ListNode((carry+temp1->val+temp2->val)%10,NULL);
               temp->next=newnode;
               temp=temp->next;

            }
            carry=(carry+temp1->val+temp2->val)/10;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            ListNode *newnode= new ListNode((carry+temp1->val)%10,NULL);
             carry=(carry+temp1->val)/10;
               temp->next=newnode;
               temp=temp->next;
               temp1=temp1->next;
        }
           while(temp2!=NULL){
            ListNode *newnode= new ListNode((carry+temp2->val)%10,NULL);
             carry=(carry+temp2->val)/10;
               temp->next=newnode;
               temp=temp->next;
               temp2=temp2->next;
        }
        while(carry!=0){
             ListNode *newnode= new ListNode((carry)%10,NULL);
             carry=(carry)/10;
               temp->next=newnode;
               temp=temp->next;
        }
    
        return ans;
    }
    };