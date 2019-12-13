#pragma once
#ifndef VALUETYPE_H
#define VALUETYPE_H
#include"Object.h"
namespace CppOop {
	class ValueType :public Object
	{
	public:
		ValueType() { }
		string ToString() { return "Class: ValueType"; }
		bool Equals(ValueType& obj)
		{
			if (this == obj()) return true;
			else return false;
		}

		bool Equals(ValueType& obj1, ValueType& obj2)
		{
			if (obj1() == obj2()) return true;
			else return false;
		}
		ValueType MemberwiseClone()
		{
			return ValueType();
		}

		bool ReferenceEquals(ValueType& obj1, ValueType& obj2)
		{
			return Equals(obj1, obj2);
		}

		Type GetType()
		{
			return Type("System.ValueType");
		}

		friend ostream& operator <<(ostream& os, ValueType vltp) { os << vltp.ToString(); return os; }
		//static bool Equals(ValueType vt1, ValueType vt2);
	};

}
#endif
