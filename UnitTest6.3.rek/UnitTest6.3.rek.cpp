#include "pch.h"
#include "CppUnitTest.h"
#include "/ap_labs/lab6.3rek/lab6.3rek/lab6.3.rek.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rek
{
	TEST_CLASS(UnitTest63rek)
	{
	public:
		
        // Звичайна рекурсивна функція Count(int*, size, i)
        TEST_METHOD(TestCountOrdinaryInt)
        {
            const int n = 10;
            int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int k;
            k = Count(a, n, 0);
            Assert::AreEqual(k, 5);
        }

        // Шаблонна функція з явним типом int
        TEST_METHOD(TestCountTemplateInt)
        {
            const int n = 10;
            int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int k;
            k = Count<int>(a, n, 0);
            Assert::AreEqual(k, 5);
        }

        // Шаблонна функція для типу long
        TEST_METHOD(TestCountTemplateLong)
        {
            const int n = 10;
            long b[n] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 101 };
            int k;
            k = Count(b, n, 0);
            Assert::AreEqual(k, 5);
        }
	};
}
