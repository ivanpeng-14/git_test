# include <iostream>

using namespace std;

int max(int a, int b) {
	int result;
	if (a > b) 
		result = a;
	else 
		result = b;
	return result;
}

int main() 
{
	int x = 3, y = 6;
  for (int i = 0; i < 10; i++) 
    cout << "Fight On!" << " " << i << endl;
	cout << max(x, y) << endl;
  return 0;
}
