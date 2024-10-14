export module JJsHeavyDualPassCompressor;

import std;
import JJsHeavyDualPassCompressor.Exceptions;

export struct JJsHeavyDualPassCompressorSettings
{
	bool padding1;
	bool padding2;
	bool padding3;
	bool padding4;
	bool padding5;
	bool padding6;
	bool padding7;
	bool padding8;

	JJsHeavyDualPassCompressorSettings();
};

export class JJsHeavyDualPassCompressor
{
public:
	JJsHeavyDualPassCompressor() = default;

	void CompressSingleFile(std::string inFilename, std::string outFilename);
	void CompressSingleFile(std::wstring inFilename, std::wstring outFilename);

private:
	JJsHeavyDualPassCompressorSettings settings;
};