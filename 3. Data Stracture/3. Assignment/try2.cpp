#include <vector>

class Solution
{
public:
    bool checkPossibility(std::vector<int> &nums)
    {
        int modified = 0;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] > nums[i + 1])
            {
                if (i > 0 && nums[i] < nums[i - 1])
                {
                    nums[i + 1] = nums[i];
                }
                else
                {
                    nums[i] = nums[i + 1];
                }

                ++modified;
            }

            if (modified > 1)
            {
                return false;
            }
        }

        return true;
    }
};
