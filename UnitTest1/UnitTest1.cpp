#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.4/PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			double t1;
			t = S0(1, 6);
			t1 = S1(1, 6, 1);
			Assert::AreEqual(t, 2.45946, 0.0001);
			Assert::AreEqual(t1, 2.45946, 0.0001);
		}
	};
}
