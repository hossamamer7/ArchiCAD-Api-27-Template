@echo off
python Tools/BuildAddOn.py --configFile config.json --acVersion 27
cd "Build/EU Chek/27/INT"
dotnet sln add ../../../../IfcExporter/IfcExporter.csproj
