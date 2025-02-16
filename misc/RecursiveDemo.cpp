#include <iostream>

using namespace std;

//method headers
int factorialNumbers(int num);
int mystery1(int n);
int mystery2(int n, int a);
int bunnyEars(int bunnies);
void mystery3 (int x);
int mystery4(string str);

//main method
int main ()
{
    int startingNum;
    /*
    cout << "What factorial do you want to see : ";
    cin >> startingNum;
    cout << factorialNumbers(startingNum) << endl;
    */
    
    //cout << "mystery1(5) : " << mystery1(5) << endl;
    // cout << "mystery2(4,3) : " << mystery2(4,3) << endl;
    // cout << "bunnyears(0) : " << bunnyEars(0) << endl;
    // cout << "bunnyears(1) : " << bunnyEars(1) << endl;
    // cout << "bunnyears(5) : " << bunnyEars(5) << endl;
    // cout << "mystery3(12345) : " << endl ;
    // mystery3(12345);
    cout << endl << mystery4("xyzxyxy") << endl;
    

}

int factorialNumbers(int num)
{
    //cout << num << endl; //for debugging
    if(num > 1)
    {
        num *= factorialNumbers(num-1); // it calls itself
    }
    return num;
}

int mystery1(int n) {
  cout << n << endl;
  if (n == 0) {
    return 1;
  } else {
    return 2 * mystery1(n - 1);
  }
}

int mystery2(int n, int a)
{
  if (n == 1) return a;
  return a * mystery2(n-1,a);
}

int bunnyEars(int bunnies)
{
   if (bunnies == 0) return 0;
   else if (bunnies == 1) return 2;
   else return 2 + bunnyEars(bunnies - 1);
}

void mystery3 (int x) 
{
   cout << "initiated call to :" << x << " : " << x % 10<< endl;

   if ((x / 10) != 0) {
      mystery3(x / 10);
   }
   cout << "terminated call to :" << x << " : " << x % 10<< endl;
}

int mystery4(string str)
{
   cout << str << endl;
   if (str.length() == 1) return 0;
   else
   {
      if (str[0] == 'y')
        return 1 + mystery4(str.substr(1,str.length()));
      else return mystery4(str.substr(1,str.length()));
   }
}