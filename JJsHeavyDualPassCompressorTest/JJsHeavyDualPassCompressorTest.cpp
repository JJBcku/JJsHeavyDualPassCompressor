#include <iostream>

import JJsHeavyDualPassCompressor;
import JJsHeavyDualPassCompressor.Exceptions;

int main()
{
    JJsHeavyDualPassCompressor main;

    try
    {
        auto data = main.CompressSingleFile("Test.bin");
    }
    catch (std::exception ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (BaseExceptionA ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (BaseExceptionW ex)
    {
        std::wcerr << ex.what() << std::endl;
    }

    std::cout << "Hello World!\n";
}