
undefined4 FUN_0101bb28(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  FUN_0101be78();
  iVar1 = DAT_0101bf00;
  uVar3 = 0;
  if (*(int *)(DAT_0101bf00 + 8) != 0) {
    local_14 = 0;
    local_18 = 0;
    FUN_01035c2c(&local_14,&local_18,&local_1c);
    iVar2 = FUN_0101af84(&DAT_0101bc6d,s_Tmr_Svc_0101bf08,local_1c,0,5,local_18,local_14);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  nmi_signal_helper(uVar3);
  return uVar3;
}

