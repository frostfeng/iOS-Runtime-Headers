/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class AccountValidator, MailAccount, NSString, NSMutableArray, DeliveryAccount, NSError;



@interface MCEmailAccountPayloadHandler : MCPayloadHandler 
{
    NSInteger _accountType;
    NSString *_accountName;
    NSString *_emailAddress;
    NSString *_accountDescription;
    NSString *_incomingHostName;
    NSUInteger _incomingPortNumber;
    NSString *_incomingUserName;
    NSString *_incomingPassword;
    BOOL _incomingUsesPassword;
    BOOL _incomingUseSSL;
    NSString *_imapPathPrefix;
    NSString *_outgoingHostName;
    NSUInteger _outgoingPortNumber;
    NSString *_outgoingUserName;
    NSString *_outgoingPassword;
    BOOL _outgoingUsesPassword;
    BOOL _outgoingUseSSL;
    MailAccount *_account;
    AccountValidator *_accountValidator;
    DeliveryAccount *_deliveryAccount;
    NSError *_validationError;
    BOOL _doneValidatingAccount;
    NSMutableArray *_fieldsSetByAnswers;
    BOOL _needsPreparePhase;
}

+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (id)profileDisplayNameFromTag:(id)arg1;

- (id)initWithPayload:(id)arg1;
- (void)dealloc;
- (id)accountDescription;
- (id)payloadDescription;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (NSInteger)accountTypeFromString:(id)arg1;
- (id)createUniqueAccountIdUsingHostName:(id)arg1 userName:(id)arg2 delivery:(BOOL)arg3;
- (id)validateAccountInformation;
- (id)validateAccountWithServer;
- (id)createAccount;
- (id)deleteAccount;
- (BOOL)needsPreparationWithRoot:(id)arg1 truth:(id)arg2;
- (BOOL)needsPreflightWithRoot:(id)arg1 truth:(id)arg2;
- (id)userPromptValues;
- (void)setUserPromptedValues:(id)arg1;
- (id)invalidEmailAccountPayloadError;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3;
- (id)errorFromValidationError:(id)arg1;
- (id)accountType;
- (void)willContinueAfterFailingStep:(NSInteger)arg1;
- (void)willRetryStep:(NSInteger)arg1;
- (void)clearAnswersAfterValidationError;
- (id)incomingAccountFromProfileInformation;
- (id)deliveryAccountFromProfileInformation;
- (id)incomingHostName;
- (id)incomingPortNumber;
- (id)incomingUsername;
- (id)incomingUsesSSL;
- (id)imapMailboxPrefix;
- (id)outgoingHostName;
- (id)outgoingPortNumber;
- (id)outgoingUsername;
- (id)outgoingUsesSSL;

@end