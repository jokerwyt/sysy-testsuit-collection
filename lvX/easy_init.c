
int i32 = 1;
int t[3] = {1};
int i32_arr[3][5] = {{}, {1, 2, 3, 4, 5}, 2};
const int ci32 = 2; 
const int ci32_array[5] = {ci32, ci32, ci32 + ci32 * ci32};
int main() {
    const int c = 1;
    int d[5] = {i32 + i32_arr[0][0] + ci32_array[0]};
    return d[0] + d[1] + d[2] + d[3] + d[4] + d[0];
}