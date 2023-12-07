int va(int n) {
  if (n < 0)
    return -n;
  else
    return n;
}

int mcd(int a, int b) {
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}
