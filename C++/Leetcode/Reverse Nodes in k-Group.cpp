class Solution {
public:
    int size(ListNode* head)
    {
        int count=0;
        for(ListNode* it=head;it;it=it->next)
            count++;
        return count;
    }
    
    ListNode* reverseHelper(ListNode* head,int k,int n)
    {
        if(!head)
            return nullptr;
        ListNode* p=nullptr;
        ListNode* q=head;
        ListNode* r=head->next;
        ListNode* h=nullptr;
        ListNode* t=nullptr;
        ListNode* pvh=nullptr;
        ListNode* pvt=nullptr;
        ListNode* newHead=nullptr;
        int it=n/k;
        while(it--)
        {
            int count=k;
            while(count--)
            {
                if(p==nullptr)
                    h=q;
                q->next=p;
                p=q;
                q=r;
                if(r)
                    r=r->next;
                t=p;
            }
            if(newHead==nullptr)
                newHead=t;
            if(pvh)
                pvh->next=t;
            pvh=h;
            pvt=t;
            p=nullptr;
        }
        if(q)
            h->next=q;
        return newHead;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=size(head);
        ListNode* newHead=reverseHelper(head,k,n);
        return newHead;
    }
};