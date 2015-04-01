 class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode *pA=headA,*pB=headB,*ppA,*ppB;
        int lenA=0,lenB=0;
        while(pA!=NULL){
            lenA++;
            ppA = pA;
            pA = pA->next;
        }
        while(pB!=NULL){
            lenB++;
            ppB = pB;
            pB = pB->next;
        }
        if(ppB != ppA) return NULL;

        if(lenB>lenA){
            pA = headA;
            pB = headB;
            for(int i=0;i<(lenB-lenA);i++){
                pB = pB->next;
            }
        }
        else{
            pB = headB;
            pA = headA;
            for(int i=0;i<(lenA-lenB);i++){
                pA = pA->next;
            }
        }

        while(pB!=pA){
            pA = pA->next;
            pB = pB->next;
        }

        return pA;

    }
};
