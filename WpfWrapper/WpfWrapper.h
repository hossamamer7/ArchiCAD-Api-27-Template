#pragma once

// Use C++/CLI for the managed code
#using <System.Windows.Forms.dll>
#using <PresentationCore.dll>
#using <PresentationFramework.dll>
#using <WindowsBase.dll>
#using <System.Xaml.dll>


public ref class WpfWrapper
{
public:
  void ShowWpfWindow();
};
