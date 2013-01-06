// prefs
#define preferences	[NSUserDefaults standardUserDefaults]
#define GSC_APPNAME	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleName"]
#define GSC_VERSION	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
#define EXPIRYDATE      dateWithYear:2007 month:03 day:31 hour:23 minute:59 second:59
#define EXPIRY_DATE     @"This version will expire on the 31st of March 2007."
#define VERSIONDICTKEY	@"gscjkja"
#define EMPTYWNDWTITLE  @"GSC Jedi Academy"
#define MAXMAPLISTSIZE	50
#define MAXBANLISTSIZE  999
#define MAXAUTOGENPLYR  12

// files and directories
#define APPICONIMAGE    @"gscjkja_app.icns"
#define BASEDIRNAME	@"/base"
#define CONFIGFILENAME 	@"/base/gscjkja.cfg"
#define GAMEPARAMETER1 	@"+exec gscjkja.cfg"
#define GAMEPARAMETER2 	@"+set dedicated 1"
#define GAMEPARAMETER3 	@"+set dedicated 2"
#define GAMEPARAMETER4 	@""
#define GAMEPARAMETER5 	@""
#define GAMEAPPNAME	@"/JKJA Dedicated Server"
#define DEF_GAMEAPPPATH	@"/Applications/Jedi Academy"
#define UNZIP_PATH	@"/usr/bin/unzip"
#define SAVE_EXTENSION  @".gscjac"
#define OPEN_EXTENSION  @"gscjac"
#define DEFAULT_FNAME   @"Untitled Server.gscjac"
#define AUTOSTARTNAME   @"autostart.gscjac"

// server runtime settings
#define RUNPOLLWAITTIME	30
#define HEARTBEATTIME   28800
#define MAXCONSOLESIZE	16384
#define STATUSLINELEN   72

// help URL's
#define HELP_SAVE_FILES_URL	@"http://damagestudios.net/GSC/"
#define HELP_QUIT_FIRST_URL	@"http://damagestudios.net/GSC/"
#define PAYPAL_DONATE_URL	@"http://damagestudios.net/software/"
#define ONLINE_MANUAL_URL	@"http://damagestudios.net/GSC/"
#define HELP_EXECUTABLE_URL	@"http://damagestudios.net/GSC/"
#define HELP_ADDIP_URL          @"http://damagestudios.net/GSC/"
#define HELP_OLDFILEVER_URL     @"http://damagestudios.net/GSC/"
#define HELP_CANTOPENFILE_URL   @"http://damagestudios.net/GSC/"
#define HELP_EXECFIX_FAIL_URL   @"http://damagestudios.net/GSC/"
#define HELP_RCONPASS_URL       @"http://damagestudios.net/GSC/"
#define HELP_FILEDAMAGED_URL    @"http://www.google.com"

// internal URL's
#define VERSION_CHECK_URL	@"http://damagestudios.net/applications/gsc/versioncheck.xml"
#define DOWNLOAD_NEW_URL	@"http://damagestudios.net/?dl=GSC_Jedi_Academy.dmg"
#define GSC_SERV_SIGNON         @"http://damagestudios.net/GSC/"
#define GSC_SERV_SIGNOFF        @"http://damagestudios.net/GSC/"
//#define GSC_SERV_SIGNON         @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signon&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"
//#define GSC_SERV_SIGNOFF        @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signoff&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"