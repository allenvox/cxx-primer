int main() {
  // for loop
  // to do smth 5 times
  for (int i = 0; i < 5; ++i) {
    // smth
  }
  // + control of start value, continue condition, iter. step
  // + known number of iterations => convenient exit
  // + easy traversal of containers
  // - not for variable-length loops

  // while loop
  // with variable number of iterations
  int x = 0;
  while (x < 10) { // seems like 10 iterations
    ++x;
    if (x % 5 == 0)
      --x; // definitely not 10 iterations
  }
  // + flexible iterative process for dynamic data
  // + suitable for infinite loops with break condition
  // - infinite loops mishandling
  // - not for counting loops
  return 0;
}