#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\denys\Desktop\IK-11\Denys Tsybko\2 яелеярп\OOP\LB_7.1\LB_7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 0, 1, 2, 3, 4 };
			Assert::AreEqual(IndexOfMaxOddElement(arr, 5), 4);

		}
	};
}
