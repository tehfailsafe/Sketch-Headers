//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudAPI.h"

@interface MSCloudAuthAPI : MSCloudAPI
{
    BOOL _loggingIn;
    BOOL _loadingProfile;
}

+ (id)baseURLForPlatform:(long long)arg1;
@property(nonatomic) BOOL loadingProfile; // @synthesize loadingProfile=_loadingProfile;
@property(nonatomic) BOOL loggingIn; // @synthesize loggingIn=_loggingIn;
- (BOOL)shouldSwitchToUserID:(id)arg1 email:(id)arg2;
- (void)processUserData:(id)arg1 platform:(long long)arg2;
- (void)processUserData:(id)arg1;
- (void)loadAccountProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)silentlyLoginWithAccessToken:(id)arg1 toOtherPlatform:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loginWithAccessToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateUserAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processUserAPIRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)baseURL;

@end

