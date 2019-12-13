#pragma once
#ifndef INT_H
#define INT_H
#include "ValueType.h"

#include <sstream>

namespace CppOop
{
	//using std::stringstream;
	class Int : public ValueType
	{
	public:
		Int(int i) :IntValue(i) {}
		Int(const Int& input) { IntValue = input.IntValue; }
		static const int MaxValue = 2147483647;
		static const int MinValue = -2147483648;
		string ToString() { return to_string(IntValue); }
		static string ToString(int i) { return to_string(i); }
		int GetIntValue() { return IntValue; }
		Int operator=(int i) { return Int(i); }
		Int operator=(const Int& input) { return Int(input); }
		Int* operator()() { return this; }
		friend Int operator+(Int& lhs, Int& rhs) { return Int(lhs.IntValue + rhs.IntValue); }
		friend Int operator-(Int& lhs, Int& rhs) { return Int(lhs.IntValue - rhs.IntValue); }
		friend Int operator*(Int& lhs, Int& rhs) { return Int(lhs.IntValue * rhs.IntValue); }
		friend Int operator/(Int& lhs, Int& rhs) { return Int(lhs.IntValue / rhs.IntValue); }
		friend Int operator+(int lhs, Int& rhs) { return Int(lhs + rhs.IntValue); }
		friend Int operator-(int lhs, Int& rhs) { return Int(lhs - rhs.IntValue); }
		friend Int operator*(int lhs, Int& rhs) { return Int(lhs * rhs.IntValue); }
		friend Int operator/(int lhs, Int& rhs) { return Int(lhs / rhs.IntValue); }
		friend Int operator+(Int& lhs, int rhs) { return Int(lhs.IntValue + rhs); }
		friend Int operator-(Int& lhs, int rhs) { return Int(lhs.IntValue - rhs); }
		friend Int operator*(Int& lhs, int rhs) { return Int(lhs.IntValue * rhs); }
		friend Int operator/(Int& lhs, int rhs) { return Int(lhs.IntValue / rhs); }
		Int operator++() { IntValue++; return *this; }
		Int operator++(int) { Int tmp = *this; IntValue++; return tmp; }
		Int operator--() { this->IntValue--; return *this; }
		Int operator--(int) { Int tmp = *this; IntValue--; return tmp; }
		void operator+=(int i) { IntValue += i; }
		void operator-=(int i) { IntValue -= i; }
		bool operator>(Int& rhs) { if (IntValue > rhs.IntValue) return true; else return false; }
		bool operator<(Int& rhs) { if (IntValue < rhs.IntValue) return true; else return false; }
		bool operator==(Int& rhs) { if (IntValue == rhs.IntValue) return true; else return false; }
		bool operator!=(Int& rhs) { if (IntValue != rhs.IntValue) return true; else return false; }
		bool operator>=(Int& rhs) { if (IntValue >= rhs.IntValue) return true; else return false; }
		bool operator<=(Int& rhs) { if (IntValue <= rhs.IntValue) return true; else return false; }
		void operator>>(int& i) { i = IntValue; }
		void operator<<(int i) { IntValue = i; }
		friend istream& operator >>(istream& is, Int intObj) { is >> intObj.IntValue; return is; }
		friend ostream& operator <<(ostream& os, Int intObj) { os << intObj.IntValue; return os; }
		//friend istream& operator >>(istream& is, Int& intObj) { is >> intObj.IntValue; return is; }
		//friend ostream& operator <<(ostream& os, Int& intObj) { os << intObj.IntValue; return os; }
		static Int Parse(string i)
		{
			std::stringstream ss;
			ss << i;
			int tmp;
			ss >> tmp;
			ss.clear();
			ss.str("");
			return Int(tmp);
		}
		static Int Parse(const char* p)
		{
			string i = p;
			std::stringstream ss;
			ss << i;
			int tmp;
			ss >> tmp;
			ss.clear();
			ss.str("");
			return Int(tmp);
		}

		bool Equals(Int& obj)
		{
			if (IntValue == obj.GetIntValue()) return true;
			else return false;
		}

		bool Equals(Int& obj1, Int& obj2)
		{
			if (obj1.GetIntValue() == obj2.GetIntValue()) return true;
			else return false;
		}
		Int MemberwiseClone() { return Int(IntValue); }

		bool ReferenceEquals(Int& obj1, Int& obj2) { return Equals(obj1, obj2); }

		Type GetType() { return Type("System.Int"); }
	private:
		int IntValue;
	};
}
#endif // !INT_H
