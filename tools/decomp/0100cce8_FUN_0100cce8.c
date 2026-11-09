
void FUN_0100cce8(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  short local_24;
  short local_22;
  undefined1 auStack_20 [12];
  byte local_14;
  
  FUN_0101ddf6(*param_1,auStack_20);
  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 0x58);
  if (local_14 == uVar5) {
    iVar2 = *(int *)(param_1 + 0xe4);
    uVar1 = *DAT_0100d2b4;
    if (uVar5 == 0) {
      FUN_0100cd90();
      uVar5 = 0;
    }
    else if (uVar5 == 0x3f) {
      FUN_0100cd90((uint)local_14,iVar2 + 0xf8);
      uVar5 = 0x3e;
    }
    else {
      psVar4 = (short *)(iVar2 + uVar5 * 4);
      local_24 = psVar4[2] - *psVar4;
      local_22 = psVar4[3] - *(short *)(iVar2 + 2 + uVar5 * 4);
      FUN_0100a6cc(*param_1,uVar1,uVar5,&local_24,1);
      iVar3 = *(int *)(param_1 + 0xe4);
      iVar2 = iVar3 + uVar5 * 4;
      local_24 = *(short *)(iVar3 + uVar5 * 4) - *(short *)(iVar2 + -4);
      local_22 = *(short *)(iVar3 + 2 + uVar5 * 4) - *(short *)(iVar2 + -2);
      uVar5 = uVar5 - 1 & 0xff;
    }
    FUN_0100a6cc(*param_1,uVar1,uVar5);
  }
  return;
}

