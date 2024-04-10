int i = -20;
int func(int n) {
  if (n <= 9) {
    putint(n + i);
    return 20;
  } else {
    putint(n + i);
    return 0;
  }
}
int main() {

  while (func(6) > i && i || func(0) < i && func(i) == 9 ||
         func(i) + 20 >= 40) {
    i = i + 1;
  }
  return 0;
}

//(0||1)==1  (1||0)
// a||b
// a&&b
// a||b||c
// a||b&&c
// a&&b&&c
// a&&b||c
