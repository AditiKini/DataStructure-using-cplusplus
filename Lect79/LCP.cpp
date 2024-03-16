//Logest Common prefix problem

//using iterative way

string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";

    // Write your code here
    for(int i=0; i<arr[0].length(); i++){
        char ch = arr[0][i];

        bool match = true;

        for(int j=1; j<n; j++){
            if(ch != arr[j][i]){
                match = false;
                break;
            }
        }

        if(match == false)
          break;
        else
           ans.push_back(ch);
          
    }

    return ans;
} 


// using TRIE
