namespace ds_algo {

inline int Add(int a, int b) {
  // calculate a+b using bit
  int addc = a & b;

  while (addc) {
    a = a ^ b; // a+b
    b = addc << 1;
    addc = a & b;
  }

  return a | b;
}
} // namespace ds_algo