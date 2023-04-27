#include "pch.h"
#include "CppUnitTest.h"

#include "../TestEmptyProject/Vector.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(TestVector)
	{
	public:

		TEST_CLASS_INITIALIZE(ClassInit) {
		}

		TEST_METHOD_INITIALIZE(MethodInit) {
		}

		TEST_METHOD_CLEANUP(MethodDeinit) {
		}

		TEST_CLASS_CLEANUP(ClassDeinit) {
		}

		TEST_METHOD(TestSize)
		{
			Vector<int> v;
			Assert::AreEqual(v.getSize(), (std::size_t)0);
		}

		TEST_METHOD(TestPushBack)
		{
			Vector<int> v;
			v.pushBack(5);
			Assert::AreEqual(v.getSize(), (std::size_t)1);
		}
	};
}
