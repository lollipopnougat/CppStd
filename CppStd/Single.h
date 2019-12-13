#pragma once
#ifndef SINGLE_H
#define SINGLE_H
#include "ValueType.h"
#include <sstream>
namespace CppOop {
	class Single :ValueType
	{
	public:
		Single(float f) :SingleValue(f) {}
		string ToString() { return to_string(SingleValue); }
		static string ToString(float f) { return to_string(f); }
		float GetSingleValue() { return SingleValue; }
		Single operator=(float i) { return Single(i); }
		Single operator=(const Single& input) { return Single(input); }
		Single* operator()() { return this; }
		friend Single operator+(Single& lhs, Single& rhs) { return Single(lhs.SingleValue + rhs.SingleValue); }
		friend Single operator-(Single& lhs, Single& rhs) { return Single(lhs.SingleValue - rhs.SingleValue); }
		friend Single operator*(Single& lhs, Single& rhs) { return Single(lhs.SingleValue * rhs.SingleValue); }
		friend Single operator/(Single& lhs, Single& rhs) { return Single(lhs.SingleValue / rhs.SingleValue); }
		friend Single operator+(float lhs, Single& rhs) { return Single(lhs + rhs.SingleValue); }
		friend Single operator-(float lhs, Single& rhs) { return Single(lhs - rhs.SingleValue); }
		friend Single operator*(float lhs, Single& rhs) { return Single(lhs * rhs.SingleValue); }
		friend Single operator/(float lhs, Single& rhs) { return Single(lhs / rhs.SingleValue); }
		friend Single operator+(Single& lhs, float rhs) { return Single(lhs.SingleValue + rhs); }
		friend Single operator-(Single& lhs, float rhs) { return Single(lhs.SingleValue - rhs); }
		friend Single operator*(Single& lhs, float rhs) { return Single(lhs.SingleValue * rhs); }
		friend Single operator/(Single& lhs, float rhs) { return Single(lhs.SingleValue / rhs); }
		Single operator++() { this->SingleValue++; return *this; }
		Single operator++(int) { Single tmp = *this; SingleValue++; return tmp; }
		Single operator--() { SingleValue--; return *this; }
		Single operator--(int) { Single tmp = *this; this->SingleValue--; return tmp; }
		void operator+=(int i) { SingleValue += i; }
		void operator-=(int i) { SingleValue -= i; }
		bool operator>(Single& rhs) { if (SingleValue > rhs.SingleValue) return true; else return false; }
		bool operator<(Single& rhs) { if (SingleValue < rhs.SingleValue) return true; else return false; }
		bool operator==(Single& rhs) { if (SingleValue == rhs.SingleValue) return true; else return false; }
		bool operator!=(Single& rhs) { if (SingleValue != rhs.SingleValue) return true; else return false; }
		bool operator>=(Single& rhs) { if (SingleValue >= rhs.SingleValue) return true; else return false; }
		bool operator<=(Single& rhs) { if (SingleValue <= rhs.SingleValue) return true; else return false; }
		void operator>>(float& i) { i = SingleValue; }
		void operator<<(int i) { SingleValue = i; }
		friend istream& operator >>(istream& is, Single intObj) { is >> intObj.SingleValue; return is; }
		friend ostream& operator <<(ostream& os, Single intObj) { os << intObj.SingleValue; return os; }
		//friend istream& operator >>(istream& is, Int& intObj) { is >> intObj.IntValue; return is; }
		//friend ostream& operator <<(ostream& os, Int& intObj) { os << intObj.IntValue; return os; }
		static Single Parse(string i)
		{
			std::stringstream ss;
			ss << i;
			float tmp;
			ss >> tmp;
			ss.clear();
			ss.str("");
			return Single(tmp);
		}
		static Single Parse(const char* p)
		{
			string i = p;
			std::stringstream ss;
			ss << i;
			float tmp;
			ss >> tmp;
			ss.clear();
			ss.str("");
			return Single(tmp);
		}

		bool Equals(Single& obj)
		{
			if (SingleValue == obj.GetSingleValue()) return true;
			else return false;
		}

		bool Equals(Single& obj1, Single& obj2)
		{
			if (obj1.GetSingleValue() == obj2.GetSingleValue()) return true;
			else return false;
		}
		Single MemberwiseClone() { return Single(SingleValue); }

		bool ReferenceEquals(Single& obj1, Single& obj2) { return Equals(obj1, obj2); }

		Type GetType() { return Type("System.Single"); }

	private:
		float SingleValue;
	};
	typedef Single Float;
}

#endif // !SINGLE_H
