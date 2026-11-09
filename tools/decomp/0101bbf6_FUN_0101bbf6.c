
undefined4
FUN_0101bbf6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  nmi_signal_helper();
  iVar1 = DAT_0101bf00;
  uVar3 = 0;
  if (*(int *)(DAT_0101bf00 + 8) != 0) {
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_1;
    if (param_2 < 6) {
      iVar2 = FUN_0101b6e0();
      if (iVar2 == 2) {
        uVar3 = *(undefined4 *)(iVar1 + 8);
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 8);
        param_5 = 0;
      }
      uVar3 = adi_wait_recv_A(uVar3,&local_30,param_5,0);
    }
    else {
      uVar3 = adi_wait_recv_B(*(int *)(DAT_0101bf00 + 8),&local_30,param_4,0);
    }
  }
  return uVar3;
}

