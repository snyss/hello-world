#include <iostream>
#include <vector>
class Nature {
private: 
  const int num;  //�� 
public:
  Nature(int n):num(n) {
  }
  ~Nature();
  Nature add(Nature sp);    //��� 
  bool compare(Nature sp) {  //�ȴ�С 
     if(num > sp.num)
       return true;
    return false;
  }
	
};

class SuperPrime {
private:
  std::vector<Nature> range;  //�������������� 
public:
  SuperPrime(int a, int b) {
  	for(int i = a; i < b; i++) {
  	  Nature nat(i);
  	  if(nat.isSuperPrime()) //������ 
  	    range.push_back(nat);
    }
  }
  int max() {
  	for(std::vector<Nature>::iterate it = range.begin();
	      it != range.end(); it++) {
	  if(it->compare())
	} 
  	return 0;
  }
 
  int howmany() {
  	return range.size();
  }
  int sum() {
  	for(std::vector<Nature>::iterate it = range.begin();
	      it != range.end(); it++) {
    }
  }
private:
  void split(int x) {
    int a, sum, mult, sqrsum;
    while(x != 0) {
      a = x % 10;
	  sum += a;
	  mult *= a;
	  sqrsum += a*a;
	  x = x / 10;
	}
  }
};

int main() 
{
  SuperPrime sp(100, 999);
  std::cout << "���ĳ���������" << sp.max() << std::endl;
  std::cout << "��������������" << sp.howmany() << std::endl;
  std::cout << "���������ĺͣ�" << sp.sum() << std::endl;
  return 0;
} 
