#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_5.3\Lab_5.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0, k = 1;
			int R = (pow(2, 2 * k) * pow(x, 2 * k)) / (2 * k);
			Assert::AreEqual(R, 0);
		}
	};
}
