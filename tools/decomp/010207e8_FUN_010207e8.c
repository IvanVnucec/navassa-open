
undefined8 FUN_010207e8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 < 2) {
    iVar2 = *(int *)(DAT_01020f4c + param_1 * 4);
    FUN_01020bb4(param_1,0);
    FUN_010027f4(iVar2 + 0x179,0xffffff,*param_2);
    FUN_010027f4(iVar2 + 0x17f,0xffffff,param_2[1]);
    *(undefined1 *)(iVar2 + 0x185) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)(iVar2 + 0x16d) = *(undefined1 *)(param_2 + 3);
    FUN_010027f4(iVar2 + 0x16b,0xffff,*(undefined2 *)((int)param_2 + 10));
    *(undefined1 *)(iVar2 + 0x170) = *(undefined1 *)(param_2 + 4);
    FUN_010027f4(iVar2 + 0x16e,0xffff,*(undefined2 *)((int)param_2 + 0xe));
  }
  else {
    uVar1 = 0x6100;
  }
  return CONCAT44(param_4,uVar1);
}

