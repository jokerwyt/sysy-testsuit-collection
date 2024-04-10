int linearSearch(int haystack[], int len, int needle){
    int i = 0;
    while(i < len){
        if(haystack[i] == needle){
            return i;
        }else{
            i = i + 1;
        }
    }
    return -1;
}

int main(){
    int haystack[100];
    int pos, len;
    int needle;
    len = getarray(haystack);
    needle = getint();
    pos = linearSearch(haystack, len, needle);
    putint(pos);
    return 0;
}
