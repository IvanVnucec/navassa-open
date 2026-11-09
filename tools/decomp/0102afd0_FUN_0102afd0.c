
undefined8 FUN_0102afd0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  int *unaff_r4;
  uint *unaff_r5;
  uint uVar4;
  
  FUN_0101b4ac();
  nmi_signal_helper();
  task_enter_critical();
  iVar1 = DAT_0101ba44;
  uVar4 = *unaff_r5;
  uVar2 = *(uint *)(DAT_0101ba44 + 0x4c) - unaff_r4[1];
  if (uVar4 == 0xffffffff) {
LAB_0101b61e:
    uVar3 = 0;
  }
  else {
    if ((*(int *)(DAT_0101ba44 + 0x5c) == *unaff_r4) ||
       (*(uint *)(DAT_0101ba44 + 0x4c) < (uint)unaff_r4[1])) {
      if (uVar2 < uVar4) {
        *unaff_r5 = uVar4 - uVar2;
        *unaff_r4 = *(int *)(iVar1 + 0x5c);
        unaff_r4[1] = *(int *)(iVar1 + 0x4c);
        goto LAB_0101b61e;
      }
      *unaff_r5 = 0;
    }
    uVar3 = 1;
  }
  FUN_0102bf96();
  return CONCAT44(in_r3,uVar3);
}

