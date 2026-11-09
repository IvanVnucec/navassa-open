
void FUN_0103a296(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_01029a46(0,*DAT_0103a384 & 0xffff,0);
  nmi_signal_helper(-(uint)(iVar1 == 0) >> 0x1f);
  FUN_0103a4e6(0);
  FUN_0103a52a();
  FUN_0103a4be(1,1,unaff_r7);
  return;
}

