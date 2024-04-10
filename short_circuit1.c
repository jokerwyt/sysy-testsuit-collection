int f() {
  putint(0);
  return 0;
}

int g() {
  putint(1);
  return 1;
}

int main () {
  if ((f() && g()) || (!f() && g())) {
    return 1;
  }
  return 2;
}
