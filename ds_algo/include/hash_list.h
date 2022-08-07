#include <assert.h>
#include <cstddef>
#include <list>
#include <unordered_map>
#include <utility>

namespace ds_algo {
template <typename KeyT, typename ValueT> class HashList {
  std::list<std::pair<KeyT, ValueT>> cache_;
  std::unordered_map<KeyT,
                     typename std::list<std::pair<KeyT, ValueT>>::iterator>
      hash_;

public:
  int size() const { return cache_.size(); }
  bool contains(const KeyT &key) const {
    return hash_.find(key) != hash_.cend();
  }

  void insert(const KeyT &key, const ValueT &value) {
    assert(!contains(key));

    cache_.push_front({key, value});
    hash_[key] = cache_.begin();
  }

  void erase(const KeyT &key) {
    assert(contains(key));

    auto iter = hash_[key];
    cache_.erase(iter);
    hash_.erase(key);
  }

  void pop_back() {

    assert(size() > 0);

    auto remove_key = cache_.back().first;
    cache_.pop_back();
    hash_.erase(remove_key);
  }

  ValueT &at(const KeyT &key) {
    assert(contains(key));

    auto iter = hash_[key];
    // update cache_
    cache_.splice(cache_.begin(), cache_, iter);
    // update hash_
    hash_[key] = cache_.begin();
    return iter->second;
  }

  ValueT &operator[](const KeyT &key) {
    assert(contains(key));
    return this->at(key);
  }
};
} // namespace ds_algo
