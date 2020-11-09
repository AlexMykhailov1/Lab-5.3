#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3/Lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(0);
			Assert::AreEqual(t,1*1.0);
		}
	};
}
