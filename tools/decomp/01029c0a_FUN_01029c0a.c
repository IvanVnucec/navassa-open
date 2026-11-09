
int FUN_01029c0a(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  if (1 < param_1) {
    return 0xc800;
  }
  iVar4 = *(int *)(DAT_01029c80 + param_1 * 4);
  iVar1 = FUN_01029bc0(param_1,0,*param_2);
  if (iVar1 == 0) {
    *(char *)(iVar4 + 0xc2) = (char)uVar2;
    *(char *)(iVar4 + 0xc3) = (char)((uint)uVar2 >> 8);
    *(char *)(iVar4 + 0xc4) = (char)uVar3;
    iVar1 = 0;
    *(char *)(iVar4 + 0xc5) = (char)((uint)uVar3 >> 8);
  }
  return iVar1;
}

