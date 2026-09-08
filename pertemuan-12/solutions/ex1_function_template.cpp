#include <string>
template <typename T> const T& minValue(const T& a,const T& b){ return b<a?b:a; }
int main(){ return minValue(3,4)==3 ? 0:1; }
