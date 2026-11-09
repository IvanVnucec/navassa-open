
void FUN_0100b0fa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = DAT_0100b23c;
  DAT_0100b23c[1] = (char)param_1;
  *puVar3 = 0;
  if (param_1 == 1) {
    pin_update(DAT_0100b244,1,1);
    FUN_0100b152();
    FUN_0100b074(0,*(undefined4 *)(DAT_0100b248 + 0x28),param_4);
    return;
  }
  bVar1 = *DAT_0100b24c;
  FUN_0100b152();
  if ((int)((uint)bVar1 << 0x19) < 0) {
    FUN_0100b060();
  }
  uVar2 = DAT_0100b228;
  pin_update(DAT_0100b228,2,0);
  pin_update(uVar2,2,2,param_4);
  return;
}

