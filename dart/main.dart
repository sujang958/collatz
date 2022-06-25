void main() {
  for (var i = 2; i >= 0; i++) {
    print('$i - ${t(i.toDouble())}');
  }
}

double t(double n) {
  if (n == 1) return n;

  if (n % 2 == 0) {
    return t(n/2);
  } else {
    return t(n * 3 + 1);
  }
}