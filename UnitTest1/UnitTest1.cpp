#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\Pr5.1 F\Pr5.1 F\PubRat.cpp"
#include"C:\Users\vladt\source\repos\Pr5.1 F\Pr5.1 F\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			PubRat p = { 1,2 };

			Assert::IsTrue(PubRat{ 1,2 } == p);
		}
	};
}
