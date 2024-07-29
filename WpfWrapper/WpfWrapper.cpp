//// WpfWrapper.h
//#pragma once

#include "pch.h"
#include <windows.h>
// WpfWrapper.cpp
#include "WpfWrapper.h"
// Include .NET headers
//#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows;
using namespace EUChek::IFCExporter::UI::Windows;

void WpfWrapper::ShowWpfWindow()
{
  if (MainWindow::CurrentMainWindow != nullptr)
  {
    MainWindow::CurrentMainWindow->ShowMyDialog();
  }
  else
  {
    MainWindow^ mainWindow = gcnew MainWindow();
    mainWindow->ShowMyDialog();
  }
}