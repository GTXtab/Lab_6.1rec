#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1rec/Lab_6.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int arr[size] = {-3 , -4, -5, -6, 0};
			int count = Count(arr, size);
			Assert::AreEqual(2, count);
		}
	};
}
