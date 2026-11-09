
undefined8 FUN_01025c92(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint unaff_r6;
  
  uVar1 = nmi_signal_helper();
  FUN_01025d4e(uVar1,param_2 & 0xff000000);
  uVar2 = param_2;
  if (param_2 != 0) {
    uVar2 = 1;
  }
  nmi_signal_helper(uVar2 & 0xff);
  iVar3 = FUN_0101b6e0();
  uVar2 = 0;
  if (iVar3 == 0) {
    uVar4 = -(uint)(param_5 == 0) >> 0x1f;
  }
  else {
    uVar4 = 1;
  }
  nmi_signal_helper(uVar4);
  FUN_0101b2ac();
  iVar3 = FUN_01025d44();
  if (iVar3 == 0) {
    if (param_5 != 0) {
      if (param_3 != 0) {
        uVar2 = 0x1000000;
      }
      if (param_4 != 0) {
        uVar2 = uVar2 | 0x4000000;
      }
      FUN_0101b4b4(param_1 + 1,uVar2 | param_2,param_5);
      unaff_r6 = 0;
    }
  }
  else {
    param_5 = 0;
    if (param_3 != 0) {
      *param_1 = ~param_2 & *param_1;
    }
  }
  FUN_0101b2b8();
  if (param_5 != 0) {
    uVar2 = FUN_01025d58();
    if (-1 < (int)(uVar2 << 6)) {
      task_enter_critical();
      iVar3 = FUN_01025d44();
      if (iVar3 != 0 && param_3 != 0) {
        *param_1 = ~param_2 & *param_1;
      }
      FUN_0102bf96();
    }
    unaff_r6 = uVar2 & 0xffffff;
  }
  return CONCAT44(param_4,unaff_r6);
}

