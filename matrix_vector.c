int vector[100];
int matrix[100][100];
int result[100];

void calculate(int n,int m){
    int i = 0;
    int j = 0;
    int temp = 0;
    while(i<m){
        j = 0;
        temp = 0;
        while(j<n){
            temp = temp + vector[j] * matrix[j][i];
            j = j + 1;
        }
        result[i] = temp;
        i = i + 1;
    }
    return;
}

int main(){
    return 0;
    // int i = 0;
    // int n;
    // int m;
    // n = getarray(vector);
    // while(i<n){
    //     m = getarray(matrix[i]);
    //     i = i + 1;
    // }
    // calculate(n,m);
    // putarray(m, result);
    // return 0;
}