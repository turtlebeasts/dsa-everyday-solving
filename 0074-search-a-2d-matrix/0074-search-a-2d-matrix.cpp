class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, mid, j = matrix.size() - 1;
        int subMatIndex = -1;

        while (i <= j)
        {
            mid = i + (j - i) / 2;
            if (matrix[mid][0] <= target && target <= matrix[mid][matrix[mid].size() - 1])
            {
                subMatIndex = mid;
                break;
            }

            if (matrix[mid][0] > target)
            {
                j = mid - 1;
            }

            else if (matrix[mid][matrix[mid].size() - 1] < target)
            {
                i = mid + 1;
            }
        }

        if (subMatIndex == -1)
        {
            return false;
        }
        // find the index of the element
        i = 0;
        j = matrix[subMatIndex].size() - 1;
        while (subMatIndex != -1 && i <= j)
        {
            mid = i + (j - i) / 2;
            if (matrix[subMatIndex][mid] == target)
            {
                return true;
            }
            if (matrix[subMatIndex][mid] < target)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        return false;
    }
};