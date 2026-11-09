
undefined4 FUN_01009c16(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 2) && (param_1 < 2)) {
    iVar1 = *(int *)(DAT_0100a1c8 + param_2 * 4);
    *(undefined1 *)(iVar1 + 200) = 0x80;
    uVar2 = pin_update(iVar1 + 0xc9,2,2);
    iVar1 = *(int *)(DAT_01009ebc + param_1 * 4);
    FUN_01009a5e(uVar2,DAT_01009ebc,0x10);
    uVar2 = pin_update(iVar1 + 0xe0,2,0);
    FUN_01009a60(uVar2,0xe,0);
    *(char *)(iVar1 + 0xe1) =
         (char)(*(uint *)(DAT_01009ee4 + param_1 * 0x60 + 0x1c) /
               *(uint *)(DAT_0100a1cc + param_2 * 0x54 + 0x4c)) + -1;
  }
  return param_4;
}

