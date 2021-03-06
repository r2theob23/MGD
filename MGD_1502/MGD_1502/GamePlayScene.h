//
//  GameScene.h
//  MGD_1502
//

//  Copyright (c) 2015 Robert Smith. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GamePlayScene : SKScene <SKPhysicsContactDelegate>

@property (nonatomic) SKSpriteNode *player;

@property (nonatomic, assign) BOOL isPaused;

@property (nonatomic, strong) NSString *leaderboardID;

-(id)initWithSize:(CGSize)size leaderboardID:(NSString*)leaderboardID lastScore:(NSString*)lastScore;



@end
