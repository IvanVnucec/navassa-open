
int FUN_0100c578(int param_1,int param_2)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_24 [12];
  byte local_18;
  
  iVar5 = 0;
  if (*(char *)(DAT_0100cac0 + param_1 + 0x12) != '\0') {
    if (param_2 == 0) {
      iVar6 = DAT_0100cf58 + param_1 * 0x110;
      iVar7 = *(int *)(iVar6 + 0xc);
      iVar5 = FUN_0101ddf6(param_1,auStack_24);
      if (iVar5 == 0) {
        **(byte **)(iVar6 + 0x14) = local_18;
        uVar1 = *(undefined2 *)(*(int *)(iVar6 + 0xe4) + (uint)local_18 * 4 + 2);
        *(undefined2 *)(*(int *)(iVar6 + 0x14) + 0xc) =
             *(undefined2 *)(*(int *)(iVar6 + 0xe4) + (uint)local_18 * 4);
        *(undefined2 *)(*(int *)(iVar6 + 0x14) + 0xe) = uVar1;
        FUN_0100c610(*(int *)(iVar6 + 0x14),(int)*(short *)(*(int *)(iVar6 + 0x14) + 0xc));
        FUN_0100ba76(param_1);
        *(undefined4 *)(iVar7 + 0xa2) = *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc);
        *(undefined1 *)(*(int *)(iVar6 + 0x10) + 0x46) = 1;
      }
    }
    else {
      pbVar4 = (byte *)(*(int *)(DAT_0100d26c + param_1 * 4) + 0x1e2);
      uVar3 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar3 = isIRQinterruptsEnabled();
      }
      disableIRQinterrupts();
      *pbVar4 = *pbVar4 | 1;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        enableIRQinterrupts((uVar3 & 1) == 1);
      }
    }
  }
  return iVar5;
}

