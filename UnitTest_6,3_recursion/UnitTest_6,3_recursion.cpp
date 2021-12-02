#include "pch.h"
#include "CppUnitTest.h"
#include "../6,3_recursion/6,3_recursion.cpp"
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63recursion
{
	TEST_CLASS(UnitTest63recursion)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int a[size];
			Create(a, size, 1, 10, 0);
			int s = arraySize(a);
			Assert::AreEqual(size, s, 0.01);

		}
	};
}
