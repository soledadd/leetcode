class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {

    int size = digits.size();

    if (digits[size - 1] < 9)
    {
      digits[size - 1] += 1;
      return digits;
    }
    bool carry = true;

    for (int i = size - 1; i >= 0; i --)
    {
      if (!carry)
      {
        break;
      }

      if (digits[i] == 9)
      {
        carry = true;
        digits[i] = 0;

        if (i == 0)
        {
          digits.insert(digits.begin(), 1);
        }
      }
      else
      {
          carry = false;
        digits[i] += 1;
      }
    }

    return digits;
  }
};
