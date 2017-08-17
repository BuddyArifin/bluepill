//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSString;

@interface DVTDeveloperPaths : NSObject
{
    NSString *_developerFolderPath;
    NSString *_developerUsrPath;
}

+ (id)pathsWithDeveloperFolderPath:(id)arg1 developerUsrPath:(id)arg2;
+ (id)defaultPaths;
+ (void)setDefaultDeveloperPathsClass:(Class)arg1;
+ (void)initializeApplicationDirectoryName:(id)arg1;
+ (id)applicationDirectoryName;
//- (void).cxx_destruct;
- (id)cacheDirectoryForXcodeServerApplication;
- (id)developerPlatformsDirectory;
- (id)toolchainSearchPath;
- (id)embeddedApplicationsDirectory;
- (id)xcodeApplicationFilePath;
- (id)sharedFrameworksDirectory;
- (id)developerAppleInternalXcodeDirectory;
- (id)developerApplicationsDirectory;
- (id)userDataDirectoryForCurrentApplication;
- (id)documentationCacheDirectoryForCurrentApplication;
- (id)dataDirectoryForCurrentApplication;
- (id)cacheDirectoryWithOptions:(unsigned long long)arg1;
- (id)binSearchPathForSystem;
- (id)binSearchPathForPlatform:(id)arg1;
- (id)usrSearchPathForPlatform:(id)arg1;
- (id)sdksSearchPathForPlatform:(id)arg1;
- (id)developerInstallationInfoDirectoryForPlatform:(id)arg1;
- (id)sourceSpecificationSearchPathForPlatform:(id)arg1;
- (id)appleInternalPrivatePlugInSearchPathForPlatform:(id)arg1;
- (id)thirdPartyPlugInSearchPathForPlatform:(id)arg1;
- (id)corePlugInSearchPathForPlatform:(id)arg1;
- (id)developerPrivateFrameworksDirectoryPlatform:(id)arg1;
- (id)developerFrameworksDirectoryPlatform:(id)arg1;
- (id)developerLibraryDirectoryPlatform:(id)arg1;
- (id)developerDirectory;
- (id)searchPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forPlatforms:(id)arg3 withNonPlatformPaths:(BOOL)arg4 appendingPathComponents:(id)arg5;
- (id)_pathForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 forPlatform:(id)arg3;
- (id)_rootPathForPlatform:(id)arg1 inDomain:(unsigned long long)arg2;
- (id)_platformsPathInDomain:(unsigned long long)arg1;
- (id)_developerFolderPathInDomain:(unsigned long long)arg1 platform:(id)arg2;
- (id)_developerUsrPath;
- (id)_developerFolderPath;
- (id)init;

@end
