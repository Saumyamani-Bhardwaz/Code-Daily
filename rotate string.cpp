class Solution {
public:
bool rotateString(string s, string goal) { if(s.size() != goal.size()) return false;
if(s.size() == 0) return true;vector<int> candidateA;
for(int i = 0; i < s.size(); i++){if(s[i] == goal[0]){
candidateA.push_back(i);
}
}
for(int start : candidateA){bool isRotate = true;
for(int i = 0; i < s.size(); i++){ if(s[(start+i)%s.size()] != goal[i]){
isRotate = false;break;
}
}

if(isRotate){
return true;
}
}
return false;
}
};
