module JJsHeavyDualPassCompressor;

JJsHeavyDualPassCompressorSettings::JJsHeavyDualPassCompressorSettings()
{
	padding1 = false;
	padding2 = false;
	padding3 = false;
	padding4 = false;
	padding5 = false;
	padding6 = false;
	padding7 = false;
	padding8 = false;
}

void JJsHeavyDualPassCompressor::CompressSingleFile(std::string inFile, std::string outFile)
{
	if (!std::filesystem::exists(inFile))
		throw BaseExceptionA("CompressSingleFile Error: Program was given filename of a non-existent file: " + inFile);

	if (!std::filesystem::is_regular_file(inFile))
		throw BaseExceptionA("CompressSingleFile Error: Given filename is not a name of a regular file: " + inFile);

}

void JJsHeavyDualPassCompressor::CompressSingleFile(std::wstring inFile, std::wstring outFile)
{
	if (!std::filesystem::exists(inFile))
		throw BaseExceptionW(L"CompressSingleFile Error: Program was given filename of a non-existent file: " + inFile);

	if (!std::filesystem::is_regular_file(inFile))
		throw BaseExceptionW(L"CompressSingleFile Error: Given filename is not a name of a regular file: " + inFile);

}