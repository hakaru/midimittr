//  Copyright © 2017 Matthias Frick. All rights reserved.

#import <Foundation/Foundation.h>
#import <CoreMIDI/MIDIServices.h>

@class PTChannel;
@protocol PTChannelDelegate;

@protocol PeerTalkMidiProtocol
@required
-(void)sendMidiMessage:(MIDIPacket *)packet;
-(void)didEstablishUSBConnection:(PTChannel *)peerChannel;
-(void)didCancelUSBConnection;
@end

@protocol PeerTalkConnectionProtocol
@required
-(void)didConnectToUSB;
-(void)didDisconnectFromUSB;
@end

typedef NS_ENUM(NSInteger, ConnectionState) {
  connected,
  disconnected,
  disabled,
};

@interface PeerTalkBridge : NSObject
@property (nonatomic, strong) id<PeerTalkConnectionProtocol> connectionViewDelegate;
@property (nonatomic) ConnectionState connectionState;

-(id)initWithMidiDelegate:(id<PeerTalkMidiProtocol>) delegate;
-(void)checkAndRestartNetwork;
-(void)setActive:(BOOL)active;
@end
