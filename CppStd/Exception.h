#pragma once
#ifndef EXCEPTION_H
#define EXCEPTION_H
#include "Object.h"
namespace CppOop
{
	class Exception : Object
	{
	public:
		Exception(){}
		Exception(string mess) { message = mess; }
		string GetMessage() { return message; }
		string ToString() { return message; }
		Exception GetBaseException() { return Exception(); }
		bool Equals(Exception& obj)
		{
			if (this == obj()) return true;
			else return false;
		}

		bool Equals(Exception& obj1, Exception& obj2)
		{
			if (obj1() == obj2()) return true;
			else return false;
		}
		Exception MemberwiseClone() { return Exception(); }

		bool ReferenceEquals(Exception& obj1, Exception& obj2) { return Equals(obj1, obj2); }

		Type GetType() { return Type("System.Exception"); }

		friend ostream& operator <<(ostream& os, Exception obj) { os << obj.ToString(); return os; }
	private:
		string message = "Exception";
	};
}
#endif // !EXCEPTION_H

