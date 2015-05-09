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
        ListNode *pReverseHead = NULL;  // ��¼��ת�������ͷ���
        ListNode *pNode = head;         // ��¼��ǰ���
        ListNode *pPrev = NULL;         // ��¼��ǰ����ǰһ���ڵ�
        ListNode *pNext = NULL;         // ��¼��ǰ������һ���ڵ�
        while (pNode) {
            pNext = pNode->next;        // �ȼ�¼��ǰ���ָ�����һ����㣬�Է�����Ͽ�
            if(pNext == NULL)
                pReverseHead = pNode;   // ����β��㣬���ý���Ϊ��ת�������ͷ���
            pNode->next = pPrev;        // ��ת��ǰ�����ǰһ�����ָ��
            pPrev = pNode;              // pPrev������һ��
            pNode = pNext;              // pNode������һ��
        }
        return pReverseHead;
    }
};
