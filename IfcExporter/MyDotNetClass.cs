using IfcExporter.UI.Windows;
using System;
using System.Runtime.InteropServices;

namespace MyInterop
{
  [Guid("31150A89-5D5F-44C7-9093-893F38F854C7")]
  public interface IMyDotNetInterface
  {
    void ShowCOMDialog();
    void PassData(string data);
  }

  [ClassInterface(ClassInterfaceType.None)]
  [Guid("D765BF53-FB69-4C29-BBF8-A3FB41E8E3A6")]
  public class MyDotNetClass : IMyDotNetInterface
  {
    private string _data = string.Empty;
    // Need a public default constructor for COM Interop.
    public MyDotNetClass()
    { }
    public void ShowCOMDialog()
    {
      //MessageBox.Show("I am a" +
      //      "  Managed DotNET C# COM Object Dialog");

      MainWindow mainWindow = new MainWindow(_data);
      mainWindow.ShowDialog();
    }
    public void PassData(string data)
    {
      _data = data;
    }
  }
}