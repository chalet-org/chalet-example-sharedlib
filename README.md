# chalet-example-sharedlib

This repository showcases how to setup a [Chalet](https://www.chalet-work.space) project for a shared and static library. It also includes some basic settings for use with [Visual Studio Code](https://code.visualstudio.com/).

To get started, [download Chalet](https://www.chalet-work.space/download), check out some of the documentation for it, and either build with the various commands from the command line, or try out the [Chalet VS Code Extension](https://marketplace.visualstudio.com/items?itemName=chalet-org.vscode-chalet) (recommended).

The code itself is Microsoft's [fibonnacci dynamic library example](https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170), repurposed a bit for all platforms.


### Debugging

* For MacOS: Install CodeLLDB and use the "LLDB" launch.json configuration
* For Windows: Install the C/C++ extension and Build with MSVC and use the "MSVC" configuration
* For Linux: Install the C/C++ extension and Use the "GDB" configuration
