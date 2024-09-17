# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        # Converting both the linked list into list
        l1_list, l2_list = [],[]
        len_l1_list, len_l2_list = 0,0
        temp = l1
        while temp != None:
            l1_list.append(temp.val)
            temp = temp.next
        
        temp = l2
        while temp != None:
            l2_list.append(temp.val)
            temp = temp.next
        l1_list.reverse()
        l2_list.reverse()
        
        if len(l1_list) >= len(l2_list):
            for i in range(len(l1_list) - len(l2_list)):
                l2_list.insert(0,0)
        else:
            for i in range(len(l2_list) - len(l1_list)):
                l1_list.insert(0,0)
        
        print(f"l1_list: {l1_list}")
        print(f"l2_list: {l2_list}")
        carry = 0
        result_list = []
        for index in range(len(l2_list)-1,-1, -1):
            result = l1_list[index] + l2_list[index] + carry
            if result>=10:
                result%=10
                carry = 1
            else:
                carry = 0
            result_list.append(result)
        
        if carry == 1:
            result_list.append(carry)

        def create_node(value):
            newNode = ListNode(value)
            return newNode

        node = None
        if len(result_list) != 0:
            temp = None
            for val in result_list:
                if node == None:
                    node = create_node(val)
                    temp = node
                else:
                    new_node = create_node(val)
                    temp.next = new_node
                    temp = temp.next
        return node
