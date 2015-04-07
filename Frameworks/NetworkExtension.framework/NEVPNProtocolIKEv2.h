/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEVPNIKEv2SecurityAssociationParameters, NSString;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {
    NEVPNIKEv2SecurityAssociationParameters *_IKESecurityAssociationParameters;
    NEVPNIKEv2SecurityAssociationParameters *_childSecurityAssociationParameters;
    int _deadPeerDetectionRate;
    NSString *_serverCertificateCommonName;
    NSString *_serverCertificateIssuerCommonName;
    BOOL _wakeForRekey;
}

@property(readonly) NEVPNIKEv2SecurityAssociationParameters * IKESecurityAssociationParameters;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters * childSecurityAssociationParameters;
@property int deadPeerDetectionRate;
@property(copy) NSString * serverCertificateCommonName;
@property(copy) NSString * serverCertificateIssuerCommonName;
@property BOOL wakeForRekey;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IKESecurityAssociationParameters;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)childSecurityAssociationParameters;
- (id)clone;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deadPeerDetectionRate;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)serverCertificateCommonName;
- (id)serverCertificateIssuerCommonName;
- (void)setDeadPeerDetectionRate:(int)arg1;
- (void)setServerCertificateCommonName:(id)arg1;
- (void)setServerCertificateIssuerCommonName:(id)arg1;
- (void)setWakeForRekey:(BOOL)arg1;
- (BOOL)wakeForRekey;

@end