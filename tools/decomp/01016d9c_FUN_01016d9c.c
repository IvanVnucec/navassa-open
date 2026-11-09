
void FUN_01016d9c(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  iVar2 = *(int *)(DAT_01016e54 + param_1 * 4) + 0x12;
  uVar4 = 0;
  uVar3 = 1;
  if (((param_4 == 0) && (param_3 < DAT_01016e58)) && (uVar3 = 0, param_3 < DAT_01016e5c)) {
    uVar4 = 0xf;
  }
  pbVar1 = (byte *)(param_6 * 6 + 0x1016e88 + param_5 * 3);
  *(undefined1 *)(iVar2 + (uint)*pbVar1) = 0x30;
  *(undefined1 *)(iVar2 + (uint)pbVar1[1]) = uVar3;
  *(undefined1 *)(iVar2 + (uint)pbVar1[2]) = uVar4;
  return;
}

