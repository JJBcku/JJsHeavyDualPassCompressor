export module JJsHeavyDualPassCompressor;

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

private:
	JJsHeavyDualPassCompressorSettings settings;
};