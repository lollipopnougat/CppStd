#pragma once
#ifndef ENUM_H
#define ENUM_H
#include "ValueType.h"
namespace CppOop
{
	class Enum :ValueType
	{
	public:
		Enum() { }
		string ToString() { return "Class: Enum"; }
		bool Equals(Enum& obj)
		{
			if (this == obj()) return true;
			else return false;
		}

		bool Equals(Enum& obj1, Enum& obj2)
		{
			if (obj1() == obj2()) return true;
			else return false;
		}
		ValueType MemberwiseClone()
		{
			return ValueType();
		}

		bool ReferenceEquals(Enum& obj1, Enum& obj2)
		{
			return Equals(obj1, obj2);
		}

		Type GetType()
		{
			return Type("System.Enum");
		}

		friend ostream& operator <<(ostream& os, Enum vltp) { os << vltp.ToString(); return os; }
	};
}
#endif // !ENUM_H

