// lab92.cpp
// �������� �����
// ����������� ������ � 9.2A
// ������������� �� ������� ����� � ����� ��������
// ������ 11

#include "pch.h"
#include "CppUnitTest.h"
#include "../lab92A/lab92.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int N = 0;
			int t = 0;
			Sort(0, N);
			Assert::AreEqual(t, 0);
		}
	};
}
