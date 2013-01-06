// messages
#define CONSOLEGREETING		@"Game Server Configulator (JKJA) greets those who are playing Jedi Academy!"
#define CONSOLE_HEADER		@"Jedi Academy Server run by Game Server Configulator JKJA.\n©2003-2006 P-Edge media - www.p-edge.nl\n©2006-2007 Damage Studios - http://damagestudios.net/GSC/\n\nThe \"JKJA Dedicated Server Executable\" is copyrighted by LucasArts Entertainment and Activision.\n\n"
#define CONFIG_HEADER1		@"// Created by Game Server Configulator -Jedi Academy-]\n// (C) 2003-2006 P-Edge media - www.p-edge.nl\n©2006-2007 Damage Studios - http://damagestudios.net/GSC/\n"
#define CONFIG_HEADER2      @"// For more info visit damagestudios.net/GSC/\n\n"
#define SERVMESSGREETING	@"^3*** ^1This server is powered by ^7GSC ^1for Mac OSX! For more info visit - (^7http:^1/^1/damagestudios.net/GSC^1) ^3***"

// about window
#define ABO_VERS			@"version "
#define GSC_TITLE			@"Game Server Configulator\n(Jedi Knight: Jedi Academy)"
#define COPYRIGHT_TEXT		@"Copyright ©2003-2006 P-Edge media.\nCopyright ©2006-2007 Damage Studios."
#define ABOUT_DISCLAIM      @"The \"JKJA Dedicated Server Executable\" is copyrighted by LucasArts Entertainment and Activision."

// general window
#define GEN_LAUNCHING		@"Launching the server..."
#define GEN_RUNNING		@"The server is running."
#define GEN_NOTRUNNING		@"The server is not running."
#define GEN_READYLAUNCH		@"The server is ready for launch."
#define GEN_NOVALIDFOLDER	@"No valid game folder in preferences."
#define GEN_NOVALIDEXE		@"No valid executable in game folder."
#define GEN_SERVMESSERR		@"Please enter messages here or disable server messages!"

// server management window
#define MAN_SELECTMAP		@"select a map..."
#define MAN_WAITMESSAGE		@"[Waiting to send first message.]"
#define MAN_GOINGDOWN1		@"\nThe server is going down...\n"
#define MAN_GOINGDOWN2		@"The server is going down..."
#define MAN_WAITFORSTART	@"Please wait while the game starts..."
#define MAN_CONNECTED		@"%d client(s) and %d bot(s)"
#define MAN_MAPCHANGING		@"Changing the current map..."
#define MAN_PLAYERKICKED	@"Kicked: %@"
#define MAN_AUTOKICKED          @"AUTOKICKED: %@"
#define MAN_PLAYERBANNED        @"BANNED: %@"
#define MAN_MESSAGESENT		@"A message was sent by the admin."
#define MAN_BOTSCHANGING	@"Changed the amount of bots..."
#define MAN_CONNECTMAIN1        @"\nConnecting to the main GSC server... "
#define MAN_CONNECTMAIN2        @"succesful!\n\n"
#define MAN_CONNECTMAIN3        @"failed!\n\n"
#define MAN_CONNECTMAIN4        @"no reply from the server!\n\n"
#define MAN_KICKEDPL            @"------- KICKED!"
#define MAN_AUTOKICKEDPL        @"--- AUTOKICKED!"

// map window
#define MAP_INROTATION		@"Maps in rotation (%d)"
#define MAP_AVAILABLE		@"Available maps (%d)"

// prefs window
#define PRF_GAMEFOLDER1		@"Jedi Academy game folder:"
#define PRF_GAMEFOLDER2		@"JKJA Dedicated Server is not here:"

// in game messages
#define GAM_USERKICKED		@"/say ^3The admin is kicking ^1%@^3..."
#define GAM_AUTOKICKED          @"/say ^3%@ is AUTO-KICKED because %@ is a banned IP address."
#define GAM_USERBANNED          @"/say ^3%@ is BANNED from this server by the admin and will be kicked within 30 seconds."
#define GAM_MAPCHANGED		@"/say ^3The admin is changing the current map..."
#define GAM_GOINGDOWN		@"/say ^3The admin is quitting the server..."
#define GAM_BOTSCHANGED		@"/say ^3The admin has changed the number of bots to %@..."
#define GAM_LEADPLAYER1		@"^3%@ ^7is in the lead with ^3%d^7 frags!!"
#define GAM_LEADPLAYER2		@"^3%@ ^7are leading with ^3%d^7 frags."
#define GAM_LASTPLAYER1		@"^3%@ ^7is ^1last^7 with ^3%d^7 frags..."
#define GAM_LASTPLAYER2		@"^3%@ ^7are behind with ^3%d^7 frags..."

// alerts
#define ALE_OKBUTTON		@"OK"
#define	ALE_YESBUTTON		@"Yes"
#define	ALE_NOBUTTON		@"No"
#define ALE_CANCELBUTTON	@"Cancel"
#define ALE_QUITBUTTON		@"Quit"
#define ALE_ONLINEHELP		@"Online help"
#define ALE_UPDATENOW		@"Update now"
#define ALE_NEVERMIND		@"Never mind"
#define ALE_CORRECT		@"Zero bots"

#define ALE_CANNOTLAUNCH1	@"Cannot launch the server"
#define ALE_CANNOTLAUNCH2	@"The game is already running. Please quit the game first."
#define ALE_CANNOTLAUNCH3	@"The server configuration file could not be saved."
#define ALE_PLAYERSCNNCT1	@"There are players connected"
#define ALE_PLAYERSCNNCT2	@"Are you sure you want to kill the server?"

#define ALE_EXPIRED1		@"This version has expired"
#define ALE_EXPIRED2		@"Please update to the latest version."
#define ALE_NOUPDATECHECK1	@"Could not check for updates"
#define ALE_NOUPDATECHECK2	@"The software server is not responding."
#define ALE_ILLCHECKLATER	@"I'll try later"
#define ALE_NOUPDATEFOUND1	@"No updates found"
#define ALE_NOUPDATEFOUND2	@"You already have the latest version (%@) of %@."
#define ALE_NEWVERSFOUND1	@"Software update found"
#define ALE_NEWVERSFOUND2	@"Would you like to download version %@?"

#define ALE_SAVECHANGES1	@"Server configuration changed"
#define ALE_SAVECHANGES2	@"Would you like to save your changes?"

#define ALE_NOTEXECUTABLE1	@"JKJA Dedicated Server is not executable"
#define ALE_NOTEXECUTABLE2	@"Would you like GSC to try and fix this?"
#define ALE_NOTEXEC_FIXED1      @"The fix failed"
#define ALE_NOTEXEC_FIXED2      @"Please consult our online help."
#define ALE_NOTEXEC_FIXED3      @"The fix worked"
#define ALE_NOTEXEC_FIXED4      @"Your JKJA Dedicated Server is now executable."

#define ALE_CANNOTADDIP1        @"This IP address can not be banned"
#define ALE_CANNOTADDIP2        @"Please consult our online help."
#define ALE_CANNOTADDIP3        @"This IP address is already banned."

#define ALE_OLDFILEVERS1        @"This file was saved with an older GSC version"
#define ALE_OLDFILEVERS2        @"Missing settings will be set to current values."
#define ALE_CANNOTOPENFILE1     @"Cannot open this file"
#define ALE_CANNOTOPENFILE2     @"You cannot open a file while the server is running."
#define ALE_FILEDAMAGED1        @"This file is damaged"
#define ALE_FILEDAMAGED2        @"The file cannot be opened."

#define ALE_BANTHISPLAYER1      @"This IP (%@) will be banned"
#define ALE_BANTHISPLAYER2      @"The player is named: %@\nClick OK to ban this player immediately."

#define ALE_RCONPASS1           @"Your rcon password is too short"
#define ALE_RCONPASS2           @"Please us a password of more than 6 characters."

#define ALE_BOTSPLAYERS1        @"More bots than players"
#define ALE_BOTSPLAYERS2        @"The amount of bots (%d) is equal to, or bigger than the maximum amount of players (%d). Your server will be FULL with bots and no additional players will be able to join."