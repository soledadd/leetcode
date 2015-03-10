class Solution {
public:
  int hammingWeight(uint32_t n) {
      int ans = 0;
      int bit = 0;
      int i = 0;
      while (i++ < 32) {
        bit = n % 2;
        if (bit == 1) {
          ans++;
        }
        n = n >> 1;
      }
      return ans;
    }
}
