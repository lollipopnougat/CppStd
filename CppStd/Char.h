#pragma once
#ifndef CHAR_H
#define CHAR_H
#include"ValueType.h"
namespace CppOop {
	class Char :ValueType
	{
	public:
		Char(char c) : CharValue(c) {}
		string ToString() { return to_string(CharValue); }
		static string ToString(char c) { return to_string(c); }
		char GetCharValue() { return CharValue; }
		static Char Parse(string src)
		{
			if (src != " ") return src[0];
			else return '\s';
		}
		bool IsControl(Char ch)
		{
			if (ch.GetCharValue() >= 0 && (ch.GetCharValue() <= 31 || ch.GetCharValue() == 127)) return true;
			else return false;
		}
		bool IsWhiteSpace(Char ch)
		{
			if (ch.GetCharValue() == ' ') return true;
			else return false;
		}
		bool IsDigit(Char ch)
		{
			if (ch.GetCharValue() >= '0' && ch.GetCharValue() <= '9') return true;
			else return false;
		}
		bool IsLetter(Char ch)
		{
			if (IsUpper(ch) || IsLower(ch)) return true;
			else return false;
		}
		bool IsUpper(Char ch)
		{
			if (ch.GetCharValue() >= 'A' && ch.GetCharValue() <= 'Z') return true;
			else return false;
		}
		bool IsLower(Char ch)
		{
			if (ch.GetCharValue() >= 'a' && ch.GetCharValue() <= 'z') return true;
			else return false;
		}
		bool IsLetterOrDigit(Char ch)
		{
			if (IsLetter(ch) || IsDigit(ch)) return true;
			else return false;
		}
		bool IsPunctuation(Char ch)
		{
			//if ((ch.GetCharValue >= 33 && ch.GetCharValue <= 47) || (ch.GetCharValue >= 58 && ch.GetCharValue <= 64) || (ch.GetCharValue >= 91 && ch.GetCharValue <= 96) || (ch.GetCharValue >= 123 && ch.GetCharValue <= 126)) return true;
			//else 
			return false;
		}
		bool IsSymbol(Char ch)
		{
			return false;
		}
		Char ToUpper(Char ch)
		{
			if (IsUpper) return Char(ch.GetCharValue() + 32);
			else return ch;
		}
		Char ToLower(Char ch)
		{
			if (IsUpper) return Char(ch.GetCharValue() - 32);
			else return ch;
		}
		bool Equals(Char& obj)
		{
			if (CharValue == obj.GetCharValue()) return true;
			else return false;
		}
		bool Equals(Char& obj1, Char& obj2)
		{
			if (obj1.GetCharValue() == obj2.GetCharValue()) return true;
			else return false;
		}
		Char MemberwiseClone() { return Char(CharValue); }
		bool ReferenceEquals(Char& obj1, Char& obj2) { return Equals(obj1, obj2); }
		Type GetType() { return Type("System.Char"); }
		friend ostream& operator <<(ostream& os, Char obj) { os << obj.ToString(); return os; }
		const static int MaxValue = 127;
		const static int MinValue = 0;
	private:
		char CharValue;
	};
}

#endif // !CHAR_H

