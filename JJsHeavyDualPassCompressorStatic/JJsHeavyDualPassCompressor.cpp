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

void JJsHeavyDualPassCompressor::CompressSingleFile(std::string inFilename, std::string outFilename)
{
	std::filesystem::path inFilePath(inFilename);

	if (!std::filesystem::exists(inFilePath))
		throw BaseExceptionA("CompressSingleFile Error: Program was given filename of a non-existent file: " + inFilename);

	if (!std::filesystem::is_regular_file(inFilePath))
		throw BaseExceptionA("CompressSingleFile Error: Given filename is not a name of a regular file: " + inFilename);

	if (inFilePath.is_absolute())
		throw BaseExceptionA("CompressSingleFile Error: Absolute file names are not allowed for single file mode: " + inFilename);

	std::ifstream inFile;

	inFile.open(inFilename, std::ios_base::binary | std::ios_base::in | std::ios_base::ate);

	if (!inFile.is_open())
		throw BaseExceptionA("CompressSingleFile Error: Program failed to open input file: " + inFilename);

	std::uint64_t inputSize = inFile.tellg();
	std::vector<unsigned char> inputData;

	if (inputSize > inputData.max_size())
		throw BaseExceptionA("CompressSingleFile Error: File " + inFilename + std::string(" is too big for the program to read!"));

	inputData.resize(static_cast<size_t>(inputSize));

	inFile.seekg(0);
	if (!inFile.good())
		throw BaseExceptionA("CompressSingleFile Error: Program failed to move to the beggining of the input file: " + inFilename);

	inFile.read(reinterpret_cast<char*>(inputData.data()), inputSize);
	if (!inFile.good())
	{
		std::uint64_t readSize = inFile.gcount();

		throw BaseExceptionA("CompressSingleFile Error: Program failed to read all data of the input file: " + inFilename +
			", program could only read " + std::to_string(readSize) + " bytes");
	}
	inFile.close();

	if (outFilename.empty())
		outFilename = inFilename + ".jjhdpc";

	std::ofstream outFile;
	outFile.open(outFilename, std::ios_base::binary | std::ios_base::out | std::ios_base::trunc);

	if (!outFile.is_open())
		throw BaseExceptionA("CompressSingleFile Error: Program failed to open the output file: " + outFilename);

	outFile.flush();
	if (!outFile.good())
		throw BaseExceptionA("CompressSingleFile Error: Program failed to flush data to the output file: " + outFilename);

	outFile.close();
}

void JJsHeavyDualPassCompressor::CompressSingleFile(std::wstring inFilename, std::wstring outFilename)
{
	std::filesystem::path inFilePath(inFilename);

	if (!std::filesystem::exists(inFilePath))
		throw BaseExceptionW(L"CompressSingleFile Error: Program was given filename of a non-existent file: " + inFilename);

	if (!std::filesystem::is_regular_file(inFilePath))
		throw BaseExceptionW(L"CompressSingleFile Error: Given filename is not a name of a regular file: " + inFilename);

	if (inFilePath.is_absolute())
		throw BaseExceptionW(L"CompressSingleFile Error: Absolute file names are not allowed for single file mode: " + inFilename);

	std::ifstream inFile;

	inFile.open(inFilename, std::ios_base::binary | std::ios_base::in | std::ios_base::ate);

	if (!inFile.is_open())
		throw BaseExceptionW(L"CompressSingleFile Error: Program failed to open input file: " + inFilename);

	std::uint64_t inputSize = inFile.tellg();
	std::vector<unsigned char> inputData;

	if (inputSize > inputData.max_size())
		throw BaseExceptionW(L"CompressSingleFile Error: File " + inFilename + std::wstring(L" is too big for the program to read!"));

	inputData.resize(static_cast<size_t>(inputSize));

	inFile.seekg(0);
	if (!inFile.good())
		throw BaseExceptionW(L"CompressSingleFile Error: Program failed to move to the beggining of the input file: " + inFilename);

	inFile.read(reinterpret_cast<char*>(inputData.data()), inputSize);
	if (!inFile.good())
	{
		std::uint64_t readSize = inFile.gcount();

		throw BaseExceptionW(L"CompressSingleFile Error: Program failed to read all data of the input file: " + inFilename +
			L", program could only read " + std::to_wstring(readSize) + L" bytes");
	}
	inFile.close();

	if (outFilename.empty())
		outFilename = inFilename + L".jjhdpc";

	std::ofstream outFile;
	outFile.open(outFilename, std::ios_base::binary | std::ios_base::out | std::ios_base::trunc);

	if (!outFile.is_open())
		throw BaseExceptionW(L"CompressSingleFile Error: Program failed to open the output file: " + outFilename);

	outFile.flush();
	if (!outFile.good())
		throw BaseExceptionW(L"CompressSingleFile Error: Program failed to flush data to the output file: " + outFilename);

	outFile.close();
}