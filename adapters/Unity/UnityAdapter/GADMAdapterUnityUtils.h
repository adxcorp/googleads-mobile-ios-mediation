// Copyright 2020 Google LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
#import <UnityAds/UnityAds.h>
#import "GADMediationAdapterUnity.h"

/// Safely adds |object| to |set| if the |object| is not nil.
void GADMAdapterUnityMutableSetAddObject(NSMutableSet *_Nullable set, NSObject *_Nonnull object);

/// Configures metadata needed by Unity Ads SDK before initialization.
void GADMAdapterUnityConfigureMediationService(void);

/// Safely sets |value| for |key| in mapTable if |key| and |value| are not nil.
void GADMAdapterUnityMapTableSetObjectForKey(NSMapTable *_Nonnull mapTable,
                                             id<NSCopying> _Nullable key, id _Nullable value);

/// Safely removes the object for |key| in mapTable if |key| is not nil.
void GADMAdapterUnityMapTableRemoveObjectForKey(NSMapTable *_Nullable mapTable, id _Nullable key);

/// Returns an NSError with code |code| and with NSLocalizedDescriptionKey and
/// NSLocalizedFailureReasonErrorKey values set to |description|.
NSError *_Nonnull GADMAdapterUnityErrorWithCodeAndDescription(GADMAdapterUnityErrorCode code,
                                                              NSString *_Nonnull description);

/// Returns an NSError with error |error| and with NSLocalizedDescriptionKey and
/// NSLocalizedFailureReasonErrorKey values set to |message|.
NSError *_Nonnull GADMAdapterUnitySDKErrorWithUnityAdsErrorAndMessage(UnityAdsError errorCode,
                                                                      NSString *_Nonnull message);
