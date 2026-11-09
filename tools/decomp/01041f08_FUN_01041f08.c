
undefined4 FUN_01041f08(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_010423dc;
  uVar2 = 0;
  do {
    if ((int)((*param_2 >> (uVar2 + 2 & 0xff)) << 0x1f) < 0) {
      FUN_010424b4(uVar2 & 0xff,*(undefined1 *)(iVar1 + uVar2 * 2 + 1),
                   *(undefined1 *)(iVar1 + uVar2 * 2));
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return 0;
}

