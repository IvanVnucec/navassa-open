
void FUN_01006d30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if (param_1 == 2 || param_1 == 3) {
    iVar1 = DAT_010078d0 + (uint)*(byte *)(DAT_010071ac + param_1) * 0x80;
    if (*(char *)(iVar1 + 0x4d7) == '\x02') {
      local_1c = 0;
    }
    else if (*(char *)(iVar1 + 0x4d4) == '\x02') {
      local_1c = 1;
    }
    else {
      local_1c = 2;
    }
    if (*(char *)(iVar1 + 0x5d7) == '\x02') {
      local_1b = 0;
    }
    else if (*(char *)(iVar1 + 0x5d4) == '\x02') {
      local_1b = 1;
    }
    else {
      local_1b = 2;
    }
    uStack_10 = param_4;
    FUN_0100cc00(*DAT_010078ec,param_1,&local_1c,&local_14,&local_18);
    iVar1 = DAT_01007514 + param_1 * 0xbc;
    *(undefined4 *)(iVar1 + 800) = local_14;
    *(undefined4 *)(iVar1 + 0x498) = local_18;
  }
  return;
}

