#pragma once
#ifndef OBJECT_H
#define OBJECT_H
#include <string>
#include <iostream>
#include "Type.h"

namespace CppOop {
	using std::string;
	using std::to_string;
	using std::istream;
	using std::ostream;

	class Object
	{
	public:
		Object() {}
		//static bool Equals(Object obj1, Object obj2);
		string ToString() { return "Class: Object"; }
		//Object MemberwiseClone();
		Object* operator()() { return this; }

		bool Equals(Object& obj)
		{
			if (this == obj()) return true;
			else return false;
		}

		bool Equals(Object& obj1, Object& obj2)
		{
			if (obj1() == obj2()) return true;
			else return false;
		}
		Object MemberwiseClone() { return Object(); }

		bool ReferenceEquals(Object& obj1, Object& obj2) { return Equals(obj1, obj2); }

		Type GetType() { return Type("System.Object"); }

		friend ostream& operator <<(ostream& os, Object obj) { os << obj.ToString(); return os; }

	};

}
#endif // !OBJECT_H