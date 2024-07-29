#include "pch.h" // Add this line
#include "WpfWrapperBridge.h"
#include "../WpfWrapper/WpfWrapper.h"

void WpfWrapperBridge::ShowWpfWindow()
{
  WpfWrapper^ wrapper = gcnew WpfWrapper();
  wrapper->ShowWpfWindow();
}