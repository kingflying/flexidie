/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"

//#import "IGTextFieldDelegate-Protocol.h"

@class IGRetroRegistrationLoginHelper, IGRetroRegistrationLoginView, NSString;

@interface IGRetroRegistrationLoginViewController : UIViewController //<IGTextFieldDelegate>
{
    BOOL _isSubmitting;
//    id <IGRetroRegistrationLoginViewControllerDelegate> _delegate;
    IGRetroRegistrationLoginView *_loginView;
    IGRetroRegistrationLoginHelper *_loginHelper;
}

@property(retain, nonatomic) IGRetroRegistrationLoginHelper *loginHelper; // @synthesize loginHelper=_loginHelper;
@property(retain, nonatomic) IGRetroRegistrationLoginView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) BOOL isSubmitting; // @synthesize isSubmitting=_isSubmitting;
//@property(nonatomic) __weak id <IGRetroRegistrationLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (SEL)callbackForButtonType:(int)arg1;
- (void)setFacebookButtonLoading:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)handleFBErrorLockedAccountForResponse:(id)arg1;
- (void)handleFBErrorNoFBForResponse:(id)arg1;
- (void)handleFBErrorEmailTakenAutoLoginForResponse:(id)arg1;
- (void)handleFBErrorEmailAlreadyTakenForResponse:(id)arg1;
- (void)handleLoggedInUserForResponse:(id)arg1;
- (void)handleFBLoginDistilleryErrorWithCode:(int)arg1 response:(id)arg2;
- (void)onFacebookAuthCancelled;
- (void)onFacebookAuthSuccess;
- (void)authWithFacebookForRegistration;
- (void)lookupEmailForUsernameCallback:(id)arg1;
- (void)loginEmailCallback:(id)arg1;
- (void)forgotPasswordFlowCallback:(id)arg1;
- (void)facebookLoginCallback:(int)arg1;
- (void)handleLoginErrors:(id)arg1;
- (void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3;
- (void)loginFromOneClickWithUsername:(id)arg1 token:(id)arg2;
- (void)logInFromEmail:(id)arg1;
- (void)logInWithUsernameAndPassword;
- (void)removeIndicatorViewFromLoginButton:(id)arg1;
- (id)createIndicatorViewAndAddToLoginButton;
- (void)loginFromRegistrationWithUsername:(id)arg1 password:(id)arg2;
- (void)dismissButtonTapped;
- (void)signUpButtonTapped;
- (void)facebookButtonTapped;
- (void)loginHelperButtonTapped;
- (void)loginButtonTapped;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(id)arg1;
- (id)fbAuthCompletionHandler;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
