class Solution:
    def deleteNode(self, node):
        next = node.next
        node.val = next.val
        node.next = next.next
