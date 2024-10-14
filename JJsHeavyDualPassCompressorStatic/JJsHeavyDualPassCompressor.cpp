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

void JJsHeavyDualPassCompressor::CompressSingleFile(std::string filename)
{
	if (!std::filesystem::exists(filename))
	{

	}
}