public class Solution {
    public TreeNode BuildTree(int[] preorder, int[] inorder) {
        if(preorder.Length == 0) return null;

        int val = preorder[0];
        TreeNode root = new TreeNode(val);
        int mid = Array.IndexOf(inorder, val);
        root.left = BuildTree(preorder[1..(mid + 1)], inorder[..mid]);
        root.right = BuildTree(preorder[(mid + 1)..], inorder[(mid + 1)..]);
        return root;
    }
}