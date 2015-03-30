class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> vervec1;
        vector<int> vervec2;

        splitVersionString(version1, vervec1);
        splitVersionString(version2, vervec2);

        int maxI = max(vervec1.size(), vervec2.size());
        int i;
        for (i=0; i<maxI; ++i)
        {
            int v1 = i<vervec1.size() ? vervec1[i] : 0;
            int v2 = i<vervec2.size() ? vervec2[i] : 0;

            if (v1 < v2)
            {
                return -1;
            }
            else if (v1 > v2)
            {
                return 1;
            }
        }

        return 0;
    }

private:
    static void splitVersionString(string version,vector<int>& vervec)
    {
        int tmp = 0;
        for(size_t i=0; i<version.size(); ++i)
        {
            if (version[i] == '0' && tmp == 0)
            {
                continue;
            }
            else if (version[i] != '.')
            {
                tmp = tmp * 10 + atoi(&version[i]);
            }
            else
            {
                vervec.push_back(tmp);
                tmp = 0;
            }
        }
        vervec.push_back(tmp);
    }
};


class Solution {
public:
    int compareVersion(string version1, string version2) {
        long res1=0, res2 = 0;
        unsigned int i=0, j=0;
        while (i < version1.size() || j < version2.size()){
            for (; i < version1.size(); i++)
                    if (isdigit(version1[i]))
                        res1 = res1 * 10 + version1[i] - '0';
                    else
                        break;

            for (; j < version2.size(); j++)
                    if (isdigit(version2[j]))
                       res2 = res2 * 10 + version2[j] - '0';
                   else
                       break;

            if (res1 > res2)      return  1;
            else if (res1 < res2) return -1;
            i++;
            j++;
            res1 = 0;
            res2 = 0;
        }
        return 0;
    }
};
