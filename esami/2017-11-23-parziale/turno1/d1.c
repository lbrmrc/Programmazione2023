int main(void) {
  int i = 200, s = 0;

  do {
    if (i % 2)
      s += (i /= 2);
    else
      i--;
  } while (i >= 0);
  return 0;
}