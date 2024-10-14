module JJsHeavyDualPassCompressor.Exceptions;

BaseExceptionA::BaseExceptionA(std::string exception) : what(exception)
{
}

const std::string& BaseExceptionA::What() const
{
	return what;
}

BaseExceptionW::BaseExceptionW(std::wstring exception) : what(exception)
{
}

const std::wstring& BaseExceptionW::What() const
{
	return what;
}