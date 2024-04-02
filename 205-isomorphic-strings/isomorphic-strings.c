

bool isIsomorphic(char* s, char* t) {
    int s_map[256] = {0};
    int t_map[256] = {0};    
    
    if(strlen(s) != strlen(t))
        return false;

    for (int i = 0; s[i] != '\0'; i++) {
       
        if (!s_map[s[i]] && !t_map[t[i]]) {
            s_map[s[i]] = t[i];
            t_map[t[i]] = s[i];
        } 
       
        else if (s_map[s[i]] != t[i] || t_map[t[i]] != s[i]) {
            return false;
        }
    }
    return true;
}
