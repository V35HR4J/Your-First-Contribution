class Solution {
public:
    string interpret(string command) {
        
        //while storing any number of characters in string we will use "DOUBLE QUOTES"
        string ans;
        string gans = "G";
        string oans = "o";
        string alans = "al";
        
        int i = 0;
        for(int i =0;i<command.size();i++)
           {
            if(command[i]=='G'){
                ans += command[i];           // //whereas while comparing the elements of a string we will use 'SINGLE QUOTES'
            }
            
            if(command[i]=='(' && command[i+1]==')' ){
                ans += oans;
                i = i+1;
            }
            if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                ans += alans;
                i = i+3;
            }
        }
        
        return ans;
        
    }
};
