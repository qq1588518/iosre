%hook WCAccountLoginLastUserViewController
//- (void).cxx_destruct { %log; %orig; }
- (void)WCBaseInfoItemEditChanged:(id)arg1 { %log; %orig; }
- (void)adjustTableViewRect { %log; %orig; }
- (void)adjustViewAndNavBarRect { %log; %orig; }
- (id)createFooterBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (id)createHeadImgView { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)createLoginBtn:(id)arg1 relateView:(id)arg2 { %log; %orig; }
- (id)createPwdInputView:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (id)createVoicePrintLoginBtn:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)dealloc { %log; %orig; }
- (void)didReceiveMemoryWarning { %log; %orig; }
- (id)getDisplayLoginName { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (double)getVisibleHeight { %log; double r = %orig; HBLogDebug(@" = %f", r); return r; }
- (void)hideKeyBoard { %log; %orig; }
- (id)init { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)initChangeAccountBtnForIPad { %log; %orig; }
- (void)initHeaderView { %log; %orig; }
- (_Bool)isLastLoginAcountTypePhone { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)onLastUserChangeAccountForIPad:(id)arg1 { %log; %orig; }
- (void)onLastUserVoicePrintLogin { %log; %orig; }
- (void)onMore:(id)arg1 { %log; %orig; }
- (void)onNext { %log; %orig; }
- (void)onSwitchPwdInput { %log; %orig; }
- (void)setDelegate:(id)arg1 { %log; %orig; }
- (void)vcResignFirstResponder { %log; %orig; }
- (void)viewDidLoad { %log; %orig; }
- (NSString *)debugDescription { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; HBLogDebug(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; HBLogDebug(@" = %@", r); return r; }
%end