int main() {
return 0;


  int needle[4] = {65, 66, 65, 66};
  int back[5], status = 0;
  int haystack[8] = {65, 66, 65, 66, 65, 66, 65, 66};
  int len = 4;
  back[0] = 0;

  int k = 1;
  while (k < len) {
    back[k] = status;
    while (status && needle[k] != needle[status]) {
      status = back[status - 1];
    }
    if (needle[k] == needle[status]) {
      status = status + 1;
    }
    k = k + 1;
  }

  back[len] = status;

  status = 0;
  int i = 0;
  while (haystack[i]) {
    while ((haystack[i] != needle[status] || status == len) && back[status] != status) {
      status = back[status];
    }
    if (haystack[i] == needle[status]) status = status + 1;
    if (status == len) putint(i - len + 1);
    i = i + 1;
  }
  return 0;
}
