#import <Cocoa/Cocoa.h>

@interface LaunchController : NSWindowController
{
    // *** needed for server config file
    // general tab items
    IBOutlet id serverName;
    IBOutlet id serverLocation;
    IBOutlet id serverHours;
    IBOutlet id adminName;
    IBOutlet id adminEmail;
    IBOutlet id servMessEnabled;
    IBOutlet id servMessTime;
    IBOutlet id servMessWait;
    IBOutlet id servMessText;
    IBOutlet id leadMessEnabled;

    // network tab items
    IBOutlet id showInGSCServerList;
    IBOutlet id setGameSpy;
    IBOutlet id setMaxPing;
    IBOutlet id setMaxPlayers;
    IBOutlet id setMaxReconnect;
    IBOutlet id setMinPing;
    IBOutlet id setNetPort;
    IBOutlet id setRconPass;
    IBOutlet id isOnlineServer;
    IBOutlet id onlineServer1;
    IBOutlet id onlineServer2;
    IBOutlet id onlineServer3;
    IBOutlet id onlineServer4;

    // server tab items
    IBOutlet id setJoinTime;
    IBOutlet id setRespawnTime;
    IBOutlet id setInvulerabilityTime;
    IBOutlet id setSpectateTime;
    IBOutlet id setKickTime;
    IBOutlet id setDiffMapVersion;
    IBOutlet id setMuteMessages;
    IBOutlet id setUnmuteTime;
    IBOutlet id enableAutoKick;
    IBOutlet id bannedListString;

    // game tab items
    IBOutlet id setFragLimit;
    IBOutlet id setTimeLimit;
    IBOutlet id setRoundLimit;
    IBOutlet id setCaptureLimit;
    IBOutlet id setAllowVoting;
    IBOutlet id setForceBalance;
    IBOutlet id setFriendlyFire;
    IBOutlet id setAutoJoin;
    IBOutlet id setSpectateOwn;
    IBOutlet id setAllowCheating;
    IBOutlet id setGravity;
    IBOutlet id botsLabel;
    IBOutlet id setPrivateDuels;
    IBOutlet id setSaberLocking;
    IBOutlet id setAllowSuicide;
    
    // weapons tab items
    IBOutlet id enableWeapon1;
    IBOutlet id enableWeapon2;
    IBOutlet id enableWeapon3;
    IBOutlet id enableWeapon4;
    IBOutlet id enableWeapon5;
    IBOutlet id enableWeapon6;
    IBOutlet id enableWeapon7;
    IBOutlet id enableWeapon8;
    IBOutlet id enableWeapon9;
    IBOutlet id enableWeapon10;
    IBOutlet id enableWeapon11;
    IBOutlet id enableWeapon12;
    IBOutlet id enableWeapon13;
    
    IBOutlet id enablePower1;
    IBOutlet id enablePower2;
    IBOutlet id enablePower3;
    IBOutlet id enablePower4;
    IBOutlet id enablePower5;
    IBOutlet id enablePower6;
    IBOutlet id enablePower7;
    IBOutlet id enablePower8;
    IBOutlet id enablePower9;
    IBOutlet id enablePower10;
    IBOutlet id enablePower11;
    IBOutlet id enablePower12;
    IBOutlet id enablePower13;
    IBOutlet id enablePower14;
    IBOutlet id enablePower15;
    IBOutlet id enablePower16;
    IBOutlet id enablePower17;
    IBOutlet id enablePower18;

    // maps tab items
    IBOutlet id gameType;
    IBOutlet id mapRotation;
    IBOutlet id availableMapList;

    // **** other
    IBOutlet id gameFolder;
    IBOutlet id launchButton;
    IBOutlet id spinner;
    IBOutlet id statusMessage;
    IBOutlet id launchMenuItem;
    IBOutlet id stopMenuItem;
    IBOutlet id fileNewMenuItem;
    IBOutlet id fileOpenMenuItem;
    IBOutlet id kickMenuItem;
    IBOutlet id banMenuItem;
    IBOutlet id talkMenuItem;
    IBOutlet id mapMenuItem;
    IBOutlet id quitMenuItem;
    IBOutlet id prefsMenuItem;
    IBOutlet id checkUpdateMenuItem;
    IBOutlet id mainWindow;

    // management window
    IBOutlet id manSpinner;
    IBOutlet id managementWindow;
    IBOutlet id manServerName;
    IBOutlet id manServerStatus;
    IBOutlet id manCurrentMap;
    IBOutlet id noOfPlayers;
    IBOutlet id playerTable;
    IBOutlet id rconCommandText;
    IBOutlet id currentServMess;
    IBOutlet id mapSelector;
    IBOutlet id mapSelectorButton;
    IBOutlet id manSetBotsLabel;
    IBOutlet id manQuitButton;
    
    // controller connections
    IBOutlet id mainController;
    IBOutlet id docController;
    
    NSTask *myTask;
    NSPipe *toPipe;
    NSPipe *fromPipe;
    NSFileHandle *toTask;
    NSFileHandle *fromTask;
    IBOutlet NSTextView *theText;

    NSMutableArray *playerArray;
    BOOL gameIsRunning;
    BOOL weHaveToQuit;
    BOOL banListChanged;
}
- (IBAction)launchGame:(id)sender;
- (IBAction)launchGame:(id)sender;
- (void)launchGameInit;
- (void)launchGameThread;

- (void)gotData:(NSNotification *)notification;
- (IBAction)manKickPlayer:(id)sender;
- (IBAction)manBanPlayer:(id)sender;
- (void)autoKickPlayers;
- (void)talkToServer:(NSString *)command;
- (void)pollServer;

- (void)showManagementWindow;
- (void)hideManagementWindow;

- (IBAction)quitGame:(id)sender;
- (IBAction)rconCommand:(id)sender;
- (IBAction)changeMap:(id)sender;
- (IBAction)changeMapButtonControl:(id)sender;

- (IBAction)changeBotsAmount:(id)sender;
- (IBAction)checkBotsValueAction:(id)sender;
- (void)checkBotsValue;
- (BOOL)gameProcessRuns;

- (void)gscServerSignOn;
- (void)gscServerSignOff;
@end
