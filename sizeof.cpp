#include <iostream>
#include <string>
using namespace std;

int main() {
	string abc = "abcd";
	float x = 123.325;
	uint32_t i = 0;
	long* lPointer;
	float* fPointer;
	lPointer = (long*)&x;
	fPointer = &x;
	char* charPointer = &abc[0];
	 
	cout << lPointer << endl;
	cout << fPointer << endl;
	cout << (++i)++ << endl;
	cout << sizeof(abc) << endl;
	cout << "size of int8_t " << sizeof(int8_t) << " its min value " << int(INT8_MIN) << " and its max value " << int(INT8_MAX) << endl;
	cout << "size of int16_t " << sizeof(int16_t) << " its min value " << int(INT16_MIN) << " and its max value " << int(INT16_MAX) << endl;
	cout << "size of int32_t " << sizeof(int32_t) << " its min value " << long int(INT32_MIN) << " and its max value " << long int(INT32_MAX) << endl;
	cout << "size of int64_t " << sizeof(int64_t) << " its min value " << long long int(INT64_MIN) << " and its max value " << long long int(INT64_MAX) << endl;
	for (int i = 0; i < 4; i++)
		cout << *charPointer++;
	
	return 0;
}
