
void FUN_0101e126(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0101e178;
  iVar3 = *(int *)(DAT_0101e15c + param_1 * 4);
  uVar2 = FUN_01035db6();
  iVar3 = iVar3 + 0xda;
  iVar4 = 0;
  do {
    pin_update(iVar3,0xff,*(undefined1 *)(iVar1 + iVar4));
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  restore_priority(uVar2,param_4);
  return;
}

