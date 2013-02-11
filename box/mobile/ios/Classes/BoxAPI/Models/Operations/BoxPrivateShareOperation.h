
//
// Copyright 2011 Box.net, Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

#import "BoxAPIOperation.h"

@interface BoxPrivateShareOperation : BoxAPIOperation {
	int _targetID;
	NSString *_targetType;
	NSString *_message;
	NSArray *_emails;
	BOOL _notify;
	NSString *_authToken;
}

@property (assign) int targetID;
@property (retain) NSString *targetType;
@property (retain) NSString *message;
@property (retain) NSArray *emails;
@property (assign) BOOL notify;
@property (retain) NSString *authToken;

+ (BoxPrivateShareOperation *)operationForTargetID:(int)targetID
										targetType:(NSString *)targetType
										   message:(NSString *)message
											emails:(NSArray *)emails
											notify:(BOOL)notify
										 authToken:(NSString *)authToken
										  delegate:(id <BoxOperationDelegate>)delegate;

- (id)initForTargetID:(int)targetID
		   targetType:(NSString *)targetType
			  message:(NSString *)message
			   emails:(NSArray *)emails
			   notify:(BOOL)notify
			authToken:(NSString *)authToken
			 delegate:(id <BoxOperationDelegate>)delegate;

@end