//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	//{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
		/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    //{" 🐧 ", "~/.dotfiles/dwm/scripts/kernel",		    360,		        2},
	{" 🔺 ", "~/.dotfiles/dwm/scripts/upt",		        60,		            2},
	//{" 📦 ", "~/.dotfiles/dwm/scripts/pacupdate",		360,		        9},
	{" 💻 ", "~/.dotfiles/dwm/scripts/memory",	        6,		            1},
	{" 🔊 ", "~/.dotfiles/dwm/scripts/volume",			2,		            10},
	{"", "~/.dotfiles/dwm/scripts/battery",			6,		            10},
	{" 🕑 ", "~/.dotfiles/dwm/scripts/clock",			5,		            0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
