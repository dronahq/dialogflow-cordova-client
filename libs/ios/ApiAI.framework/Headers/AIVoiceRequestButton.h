/**
 * Copyright 2017 Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>

@class AIVoiceRequest;

typedef void(^AIVoiceRequestButtonSuccess)(id response);
typedef void(^AIVoiceRequestButtonFailure)(NSError *error);

typedef void(^AIVoiceRequestPrepareRequest)(AIVoiceRequest *voiceRequest);

//IB_DESIGNABLE
@interface AIVoiceRequestButton : UIControl

@property(nonatomic, copy) IBInspectable UIColor *color;
@property(nonatomic, copy) IBInspectable UIColor *iconColor;

@property(nonatomic ,copy) AIVoiceRequestButtonSuccess successCallback;
-(void)setSuccessCallback:(AIVoiceRequestButtonSuccess)successCallback;

@property(nonatomic ,copy) AIVoiceRequestButtonFailure failureCallback;
-(void)setFailureCallback:(AIVoiceRequestButtonFailure)failureCallback;

@property(nonatomic ,copy) AIVoiceRequestPrepareRequest prepareRequest;
-(void)setPrepareRequest:(AIVoiceRequestPrepareRequest)prepareRequest;

@property(nonatomic, assign, readonly) BOOL isProcessing;

- (void)start;
- (void)cancel;

@end
