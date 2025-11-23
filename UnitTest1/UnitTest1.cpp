#include "pch.h"
#include "CppUnitTest.h"
#include "../labs5_1/lab05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = h(2, 3);
			Assert::AreEqual(t, 5);
		}
		TEST_METHOD(TestMethod2)
		{
			double t = h(2, 3);
			double expected = (3 * 3 - sqrt(2 * 2 + 3 * 3)) / (1 + 2 * 2 * 3 * 3);

			Assert::AreEqual(expected, t, 1e-6);
		}
	};
}
