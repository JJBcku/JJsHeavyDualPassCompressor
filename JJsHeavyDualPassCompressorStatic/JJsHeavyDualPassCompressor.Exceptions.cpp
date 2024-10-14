module JJsHeavyDualPassCompressor.Exceptions;

BaseExceptionA::BaseExceptionA(std::string exception) : data(exception)
{
}

const std::string& BaseExceptionA::what() const
{
	return data;
}

BaseExceptionW::BaseExceptionW(std::wstring exception) : data(exception)
{
}

const std::wstring& BaseExceptionW::what() const
{
	return data;
}