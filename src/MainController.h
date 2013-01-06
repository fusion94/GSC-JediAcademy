/* MainController */

#import <Cocoa/Cocoa.h>

@interface MainController : NSObject
{
    // about box items
    IBOutlet id aboutBox;
    IBOutlet id appTitle;
    IBOutlet id versionString;
    IBOutlet id expiryString;
    IBOutlet id disclaimString;

    // general tab items
    IBOutlet id servMessTime;
    IBOutlet id servMessWait;
    IBOutlet id servMessText;
    IBOutlet id serverName;
    IBOutlet id serverLocation;
    IBOutlet id adminName;
    
    // network tab items
    IBOutlet id maxPingLabel;
    IBOutlet id maxPlayersLabel;
    IBOutlet id maxReconnectLabel;
    IBOutlet id minPingLabel;
    IBOutlet id netPortLabel;

    IBOutlet id setMaxPing;
    IBOutlet id setMaxPlayers;
    IBOutlet id setMaxReconnect;
    IBOutlet id setMinPing;
    IBOutlet id setNetPort;
    IBOutlet id setRconPass;

    // server tab items
    IBOutlet id joinTimeLabel;
    IBOutlet id respwanTimeLabel;
    IBOutlet id invulnerabilityTimeLabel;
    IBOutlet id spectateTimeLabel;
    IBOutlet id kickTimeLabel;
    
    IBOutlet id setJoinTime;
    IBOutlet id setRespawnTime;
    IBOutlet id setInvulerabilityTime;
    IBOutlet id setSpectateTime;
    IBOutlet id setKickTime;
    IBOutlet id setMuteMessages;
    IBOutlet id setUnmuteTime;

    // game tab items
    IBOutlet id fragLimitLabel;
    IBOutlet id timeLimitLabel;
    IBOutlet id roundLimitLabel;
    IBOutlet id captureLimitLabel;
    IBOutlet id gravityLabel;
    IBOutlet id botsLabel;
    IBOutlet id setFragLimit;
    IBOutlet id setTimeLimit;
    IBOutlet id setRoundLimit;
    IBOutlet id setCaptureLimit;
    
    // other items
    IBOutlet id serverNameLabel;
}

- (IBAction)paypalDonate:(id)sender;
- (IBAction)launchHelpURL:(id)sender;
- (IBAction)checkForUpdate:(id)sender;
- (IBAction)showAboutBox:(id)sender;
- (IBAction)setSliderBars:(id)sender;
- (IBAction)checkServMess:(id)sender;
- (IBAction)checkRconPass:(id)sender;
- (IBAction)checkGeneralFields:(id)sender;
- (void)checkServMessNow;

- (void)updateApplicationBadge:(int)number;
- (void)checkForUpdate;
@end
