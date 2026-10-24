#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2it/lab6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 10, 20, 30, 40, 50, 60 };

			int actual = SumOddIndices(a, 6);

			Assert::AreEqual(120, actual);
		}

		TEST_METHOD(ArrayWithOneElement)
		{
			int a[] = { 15 };

			int actual = SumOddIndices(a, 1);

			Assert::AreEqual(0, actual);
		}
	};
}
