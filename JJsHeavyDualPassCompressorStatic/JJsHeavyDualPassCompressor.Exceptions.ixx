export module JJsHeavyDualPassCompressor.Exceptions;

import std;

export class BaseExceptionA
{
public:
	BaseExceptionA(std::string exception);

	const std::string& what() const;

private:
	std::string data;
};

export class BaseExceptionW
{
public:
	BaseExceptionW(std::wstring exception);

	const std::wstring& what() const;

private:
	std::wstring data;
};