#pragma once

namespace WwCache {

template <typename Key, typename Value> class WICachePolicy {
public:
  virtual ~KICachePolicy(){};

  // 添加缓存接口
  virtual void put(Key key, Value value) = 0;

  // key是传入参数  访问到的值以传出参数的形式返回 | 访问成功返回true
  virtual bool get(Key key, Value &value) = 0;
  // 如果缓存中能找到key，则直接返回value
  virtual Value get(Key key) = 0;
};

} // namespace WwCache

// 在 C++ 中，纯虚函数（Pure
// VirtualFunction）是一种特殊的虚函数，它允许在基类中声明一个函数，但不提供具体的实现，而是要求派生类必须实现该函数。纯虚函数的主要作用是定义接口，使得派生类能够以统一的方式实现特定的功能。
// 纯虚函数的定义形式 纯虚函数的语法是在虚函数声明的末尾加上 = 0：