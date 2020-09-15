#include <iostream>

int WinUpdate() {
    system("wuauclt.exe /updatenow");
}

int WinDefend() {
    system("sc config WinDefend start= auto");
    system("sc start WinDefend");
    system("MpCmdRun.exe -Scan -ScanType 2");
}

int WinFirewall() {
    system("netsh advfirewall set currentprofile state on");
    system("netsh advfirewall set allprofiles state on");
}