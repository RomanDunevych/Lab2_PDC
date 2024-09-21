#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		bool XOR(bool a, bool b) {
			return a != b;
		}

		bool fn(bool p, bool q, bool r) {
			return p && XOR(q, r);
		}

		TEST_METHOD(TestMethod1)
		{

			Assert::AreEqual(fn(0, 0, 0), false);
			Assert::AreEqual(fn(0, 0, 1), false);
			Assert::AreEqual(fn(0, 1, 0), false);
			Assert::AreEqual(fn(0, 1, 1), false);
			Assert::AreEqual(fn(1, 0, 0), false);
			Assert::AreEqual(fn(1, 0, 1), true);
			Assert::AreEqual(fn(1, 1, 0), true);
			Assert::AreEqual(fn(1, 1, 1), false);
		}
	};
}
