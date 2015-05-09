// Source : https://leetcode.com/problems/reverse-linked-list/
// Author : lzr
// Date   : 2015-05-07

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pReverseHead = NULL;  // 记录反转后链表的头结点
        ListNode *pNode = head;         // 记录当前结点
        ListNode *pPrev = NULL;         // 记录当前结点的前一个节点
        ListNode *pNext = NULL;         // 记录当前结点的下一个节点
        while (pNode) {
            pNext = pNode->next;        // 先记录当前结点指向的下一个结点，以防链表断开
            if(pNext == NULL)
                pReverseHead = pNode;   // 到达尾结点，将该结点记为反转后链表的头结点
            pNode->next = pPrev;        // 反转当前结点与前一结点间的指向
            pPrev = pNode;              // pPrev往后走一步
            pNode = pNext;              // pNode往后走一步
        }
        return pReverseHead;
    }
};
