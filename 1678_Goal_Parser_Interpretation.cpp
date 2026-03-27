class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0; i<command.size(); ){
            if(command[i] == 'G'){
                ans.append("G");
                i++;
            }
            else if(command.substr(i,2) == "()"){
                ans.append("o");
                i=i+2;
            }
            else if(command.substr(i,4) == "(al)"){
                ans.append("al");
                i=i+4;
            }

        }
        return ans;
    }
};