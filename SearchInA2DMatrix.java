class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix[0].length;
        int left = 0;
        int right = (matrix.length * matrix[0].length) - 1;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(matrix[mid/n][mid%n] == target) return true;
            if(matrix[mid/n][mid%n] < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
}
