int compareVersion(string version1, string version2) {
  int l1 = version1.length();
  int l2 = version2.length();
  float res1,res2;
  res1 = res2 = 0;
  for (int i = 0; i < l1;i++) {
    if (version1[i] != '.') {
      res1 = res1 * 10 + version1[i] - '0';
    } else {   
      float tmp = 1.0;   
      for (++i;i < l1;i++) {
        tmp *= 0.1
        res1 += version1[i] * tmp;
      }
    }
  }
  for (int i = 0; i < l2;i++) {
    if (version2[i] != '.') {
      res2 = res2 * 10 + version2[i] - '0';
    } else {   
      float tmp = 1.0;   
      for (++i;i < l2;i++) {
        tmp *= 0.1
        res2 += version2[i] * tmp;
      }
    }
  }
  if (res1 == res2) {
    return 0;
  } else {
    return res1 > res2?1:-1;
  }
}
