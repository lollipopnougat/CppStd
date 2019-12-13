#pragma once
#ifndef DOUBLE_H
#define DOUBLE_H
#include "ValueType.h"

#include <sstream>
namespace CppOop {
	class Double :ValueType
	{
	public:
		Double(double d) :DoubleValue(d) {}
		string ToString() { return to_string(DoubleValue); }
		static string ToString(double d) { return to_string(d); }
		double GetDoubleValue() { return DoubleValue; }
		Double operator=(double i) { return Double(i); }
		Double operator=(const Double& input) { return Double(input); }
		Double* operator()() { return this; }
		friend Double operator+(Double& lhs, Double& rhs) { return Double(lhs.DoubleValue + rhs.DoubleValue); }
		friend Double operator-(Double& lhs, Double& rhs) { return Double(lhs.DoubleValue - rhs.DoubleValue); }
		friend Double operator*(Double& lhs, Double& rhs) { return Double(lhs.DoubleValue * rhs.DoubleValue); }
		friend Double operator/(Double& lhs, Double& rhs) { return Double(lhs.DoubleValue / rhs.DoubleValue); }
		friend Double operator+(double lhs, Double& rhs) { return Double(lhs + rhs.DoubleValue); }
		friend Double operator-(double lhs, Double& rhs) { return Double(lhs - rhs.DoubleValue); }
		friend Double operator*(double lhs, Double& rhs) { return Double(lhs * rhs.DoubleValue); }
		friend Double operator/(double lhs, Double& rhs) { return Double(lhs / rhs.DoubleValue); }
		friend Double operator+(Double& lhs, double rhs) { return Double(lhs.DoubleValue + rhs); }
		friend Double operator-(Double& lhs, double rhs) { return Double(lhs.DoubleValue - rhs); }
		friend Double operator*(Double& lhs, double rhs) { return Double(lhs.DoubleValue * rhs); }
		friend Double operator/(Double& lhs, double rhs) { return Double(lhs.DoubleValue / rhs); }
		Double operator++() { this->DoubleValue++; return *this; }
		Double operator++(int) { Double tmp = *this; DoubleValue++; return tmp; }
		Double operator--() { this->DoubleValue--; return *this; }
		Double operator--(int) { Double tmp = *this; DoubleValue--; return tmp; }
		void operator+=(int i) { DoubleValue += i; }
		void operator-=(int i) { DoubleValue -= i; }
		bool operator>(Double& rhs) { if (DoubleValue > rhs.DoubleValue) return true; else return false; }
		bool operator<(Double& rhs) { if (DoubleValue < rhs.DoubleValue) return true; else return false; }
		bool operator==(Double& rhs) { if (DoubleValue == rhs.DoubleValue) return true; else return false; }
		bool operator!=(Double& rhs) { if (DoubleValue != rhs.DoubleValue) return true; else return false; }
		bool operator>=(Double& rhs) { if (DoubleValue >= rhs.DoubleValue) return true; else return false; }
		bool operator<=(Double& rhs) { if (DoubleValue <= rhs.DoubleValue) return true; else return false; }
		void operator>>(double& i) { i = DoubleValue; }
		void operator<<(int i) { DoubleValue = i; }
		friend istream& operator >>(istream& is, Double intObj) { is >> intObj.DoubleValue; return is; }
		friend ostream& operator <<(ostream& os, Double intObj) { os << intObj.DoubleValue; return os; }
		//friend istream& operator >>(istream& is, Int& intObj) { is >> intObj.IntValue; return is; }
		//friend ostream& operator <<(ostream& os, Int& intObj) { os << intObj.IntValue; return os; }
		static Double Parse(string i)
		{
			std::stringstream ss;
			ss << i;
			double tmp;
			ss >> tmp;
			ss.clear();
			ss.str("");
			return Double(tmp);
		}
		static Double Parse(const char* p)
		{
			string i = p;
			std::stringstream ss;
			ss << i;
			double tmp;
			ss >> tmp;
			ss.clear();
			ss.str("");
			return Double(tmp);
		}

		bool Equals(Double& obj)
		{
			if (DoubleValue == obj.GetDoubleValue()) return true;
			else return false;
		}

		bool Equals(Double& obj1, Double& obj2)
		{
			if (obj1.GetDoubleValue() == obj2.GetDoubleValue()) return true;
			else return false;
		}
		Double MemberwiseClone() { return Double(DoubleValue); }

		bool ReferenceEquals(Double& obj1, Double& obj2) { return Equals(obj1, obj2); }

		Type GetType() { return Type("System.Double"); }

	private:
		double DoubleValue;
	};


}
#endif // !DOUBLE_H

