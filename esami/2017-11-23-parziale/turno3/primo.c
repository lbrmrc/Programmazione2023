int primo(int n) {
  int i, potenzialmente_primo;
  potenzialmente_primo = n % 2 || n == 2;
  i = 3;
  while (potenzialmente_primo && i * i <= n) {
    if (n % i == 0)
      potenzialmente_primo = 0;
    i += 2;
  }
  return potenzialmente_primo;
}