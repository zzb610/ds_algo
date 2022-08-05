#include <algorithm>
#include <cstdio>
#include <iterator>

namespace ds_algo {
template <typename RandomAccessIterator, typename T>
void _UnGuardedLinearInsertion(RandomAccessIterator last, T value) {
  RandomAccessIterator next = last;
  --next;
  while (value < *next) {
    *last = *next;
    last = next;
    --next;
  }
  *last = value;
}

template <typename RandomAccessIterator, typename T>
void _LinearInsertion(RandomAccessIterator first, RandomAccessIterator last,
                      T &) {
  T value = *last;
  if (value < *first) {
    std::copy_backward(first, last, last + 1);
    *first = value;
  } else {
    _UnGuardedLinearInsertion(last, value);
  }
}

template <typename RandomAccessIterator>
void InsertionSort(RandomAccessIterator first, RandomAccessIterator last) {
  if (first == last) {
    return;
  }
  // [first, i)
  // insert i to right place in [first, i-1]
  for (RandomAccessIterator i = first + 1; i != last; ++i) {
    _LinearInsertion(first, i, *first); // fake type_traits
  }
}

} // namespace ds_algo
