/*  
    LeScript - Generic, easy to use, and time saving Cyber Security script for Cyber Security Competitions (Windows)
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

#include "./libLeScriptWin.hpp" // Custom Header to run basic tasks on Windows

int main() {
    char Enter_Defaults = ' ';
    char Win_Update = ' ';
    char Win_Defend = ' ';
    char Win_Firewall = ' ';

    std::cout << "Le Script - 2020 Brennan LeBlanc\n";
    std::cout << "Here we will ask you what you would like enabled and what you would like disabled. If you would like defaults, please enter Y here. Otherwise choose your preferences.\n";
    std::cout << "Would you like to enable defaults (Y/N): ";
    std::cin >> Enter_Defaults;

    if (Enter_Defaults == 'Y' || Enter_Defaults == 'y') {
        WinUpdate();
        WinDefend();
        WinFirewall();
        return 0;
    } else if (Enter_Defaults == 'N' || Enter_Defaults == 'n') {
        std::cout << "Would you like to run Windows Update (Y/N): ";
        std::cin >> Win_Update;
        std::cout << "Would you like to enable Windows Defender and run a full scan (Y/N): ";
        std::cin >> Win_Defend;
        std::cout << "Would you like to enable Windows Firewall (Y/N): ";
        std::cin >> Win_Firewall;

        if (Win_Update == 'Y' || Win_Update == 'y') {
            WinUpdate();
        }

        if (Win_Defend == 'Y' || Win_Defend == 'y') {
            WinDefend();
        }

        if (Win_Firewall == 'Y' || Win_Firewall == 'y') {
            WinFirewall();
        }

        return 0;
    } else {
        std::cout << "Invalid Character, aborting.\n";
        return 1;
    }
}