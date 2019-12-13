#pragma once
#ifndef ICONVERTIBLE_H
#define ICONVERTIBLE_H

#include "Int.h"
#include "Double.h"
#include "Single.h"
namespace CppOop 
{
	Double operator+(Double& lhs, Int& rhs) { return Double(lhs.GetDoubleValue() + rhs.GetIntValue()); }
	Double operator-(Double& lhs, Int& rhs) { return Double(lhs.GetDoubleValue() - rhs.GetIntValue()); }
	Double operator*(Double& lhs, Int& rhs) { return Double(lhs.GetDoubleValue() * rhs.GetIntValue()); }
	Double operator/(Double& lhs, Int& rhs) { return Double(lhs.GetDoubleValue() / rhs.GetIntValue()); }
	Double operator+(Int& lhs, Double& rhs) { return Double(lhs.GetIntValue() + rhs.GetDoubleValue()); }
	Double operator-(Int& lhs, Double& rhs) { return Double(lhs.GetIntValue() - rhs.GetDoubleValue()); }
	Double operator*(Int& lhs, Double& rhs) { return Double(lhs.GetIntValue() * rhs.GetDoubleValue()); }
	Double operator/(Int& lhs, Double& rhs) { return Double(lhs.GetIntValue() / rhs.GetDoubleValue()); }
	Double operator+(Double& lhs, Float& rhs) { return Double(lhs.GetDoubleValue() + rhs.GetSingleValue()); }
	Double operator-(Double& lhs, Float& rhs) { return Double(lhs.GetDoubleValue() - rhs.GetSingleValue()); }
	Double operator*(Double& lhs, Float& rhs) { return Double(lhs.GetDoubleValue() * rhs.GetSingleValue()); }
	Double operator/(Double& lhs, Float& rhs) { return Double(lhs.GetDoubleValue() / rhs.GetSingleValue()); }
	Double operator+(Float& lhs, Double& rhs) { return Double(lhs.GetSingleValue() + rhs.GetDoubleValue()); }
	Double operator-(Float& lhs, Double& rhs) { return Double(lhs.GetSingleValue() - rhs.GetDoubleValue()); }
	Double operator*(Float& lhs, Double& rhs) { return Double(lhs.GetSingleValue() * rhs.GetDoubleValue()); }
	Double operator/(Float& lhs, Double& rhs) { return Double(lhs.GetSingleValue() / rhs.GetDoubleValue()); }	
	Double operator+(Int& lhs, Float& rhs) { return Double((double)lhs.GetIntValue() + rhs.GetSingleValue()); }
	Double operator-(Int& lhs, Float& rhs) { return Double((double)lhs.GetIntValue() - rhs.GetSingleValue()); }
	Double operator*(Int& lhs, Float& rhs) { return Double((double)lhs.GetIntValue() * rhs.GetSingleValue()); }
	Double operator/(Int& lhs, Float& rhs) { return Double(lhs.GetIntValue() / rhs.GetSingleValue()); }
	Double operator+(Float& lhs, Int& rhs) { return Double(lhs.GetSingleValue() + (double)rhs.GetIntValue()); }
	Double operator-(Float& lhs, Int& rhs) { return Double(lhs.GetSingleValue() - (double)rhs.GetIntValue()); }
	Double operator*(Float& lhs, Int& rhs) { return Double(lhs.GetSingleValue() * (double)rhs.GetIntValue()); }
	Double operator/(Float& lhs, Int& rhs) { return Double(lhs.GetSingleValue() / (double)rhs.GetIntValue()); }
	class IConvertible : Object
	{
		virtual string ToString();
		virtual Int ToInt();
		virtual Single ToSingle();
		virtual Double ToDouble();
	};
}
#endif // !ICONVERTIBLE_H

