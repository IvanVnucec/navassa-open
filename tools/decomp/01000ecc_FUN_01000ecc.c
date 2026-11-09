
void FUN_01000ecc(uint param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_01001748;
  uVar2 = *(uint *)(param_3 + 0x2c);
  param_2[10] = 0;
  iVar3 = iVar3 + param_4 * 4;
  iVar1 = *(int *)(iVar3 + 4);
  if ((int)(uVar2 << 0x1d) < 0) {
    uVar4 = *(uint *)(iVar1 + 0x1c) >> (param_1 & 0xff) & 1 ^ 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x28);
    uVar4 = 0;
  }
  FUN_0100398e(param_1,param_2,(int)uVar2 >> 1 & 1U ^ 1,*(undefined1 *)(iVar1 + param_1 + 0x20));
  iVar1 = (uint)*(byte *)(param_3 + 0x2c) << 0x1d;
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar3 + 0x14) = iVar1;
  }
  if ((uVar2 & (param_1 + 1) * 0x100) == 0 || uVar4 == 0) {
    FUN_010016a2(param_1,1,uVar4);
    iVar1 = extraout_r1;
  }
  FUN_01005ed8(*(undefined4 *)(DAT_01001b0c + param_1 * 4),iVar1,*param_2,param_2[1]);
  return;
}

