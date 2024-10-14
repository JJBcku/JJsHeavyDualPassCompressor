export module JJsHeavyDualPassCompressor.Exceptions;

import std;

export class BaseExceptionA
{
public:
	BaseExceptionA(std::string exception);

	const std::string& What() const;

private:
	std::string what;
};

export class BaseExceptionW
{
public:
	BaseExceptionW(std::wstring exception);

	const std::wstring& What() const;

private:
	std::wstring what;
};