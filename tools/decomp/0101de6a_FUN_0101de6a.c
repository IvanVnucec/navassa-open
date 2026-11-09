
undefined8 FUN_0101de6a(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0xc603;
  if (param_2[0xd] != 0) {
    uVar2 = *param_2 & 3;
    FUN_0101deb2(param_1,uVar2,((uint)*param_2 << 0x1a) >> 0x1e);
    if (uVar2 == 1) {
      uVar1 = FUN_0101dc72(param_1,*(undefined2 *)(param_2 + 0xe),
                           *(undefined1 *)(DAT_0101e164 + 0xc));
    }
    else if (uVar2 == 2) {
      uVar1 = FUN_0101db98(*(undefined4 *)(param_2 + 8),param_1,param_2[0xc]);
    }
  }
  return CONCAT44(param_4,uVar1);
}

