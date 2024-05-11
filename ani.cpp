class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        map<char, int> mp;
        int ans = 0;
        for (auto x : allowed)
        {
            mp[x]++;
        }
        for (auto x : words)
        {
            for (auto &y : x)
            {
                if (mp.find(x) == mp.end)
                {
                    ans++;
                    break;
                }
            }
        }
        // for(int i=0;i<words.size();i++){
        //     for(int j=0;j<words[i].size();j++){
        //         if(!mp.find(words[i][j]),0){
        //             break;
        //         }
        //         else{
        //             ans++;
        //         }
        //     }
        // }
        return ans;
    }
};
//  map<char,int>mp;
//         for(auto x:allowed)
//         {
//             mp[x]++;

//         }int c=0;
//         for(auto x:words)
//         {
//             for(auto y:x)
//             {
//                 if(mp.find(y)==mp.end())
//                 {
//                    c++;
//                     break;
//             }
//             }
//         }
//         return words.size()-c;