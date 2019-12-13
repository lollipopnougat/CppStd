#pragma once
#ifndef TYPE_H
#define TYPE_H
#include<iostream>
#include<string>

namespace CppOop 
{
	//using std::string;
	//using std::to_string;
	//using std::istream;
	//using std::ostream;
	class Type
	{
	public:
		Type(){ }
		Type(std::string type) { typeString = type; }
		std::string ToString() { return typeString; }
		friend std::ostream& operator <<(std::ostream& os, Type type) { os << type.ToString(); return os; }
		bool Equals(Type& obj)
		{
			if (this == obj()) return true;
			else return false;
		}

		bool Equals(Type& obj1, Type& obj2)
		{
			if (obj1() == obj2()) return true;
			else return false;
		}
		Type MemberwiseClone() { return Type(); }

		bool ReferenceEquals(Type& obj1, Type& obj2) { return Equals(obj1, obj2); }

		Type* operator()() { return this; }

		Type GetType() { return Type("System.Object"); }
	private:
		std::string typeString = "System.Type";
	};
}
#endif // !TYPE_H
