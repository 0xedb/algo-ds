

char findTheDifference(char * s, char * t){
    int sum_s = 0;
    int sum_t = 0;
    
    for(int i = 0; i < strlen(s); i++) {
        sum_s += s[i];
    }
    
    for(int i = 0; i < strlen(t); i++) {
        sum_t += t[i];
    }
    
    return sum_t - sum_s;
}

 