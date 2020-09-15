/*
    libLeScriptWin.hpp - Generic, easy to use, and time saving Cyber Security script for Cyber Security Competitions (Header)
    Copyright (C) 2020  Brennan LeBlanc

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

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
