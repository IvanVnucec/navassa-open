
void FUN_01007054(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = true;
  uVar1 = 0x40;
  if ((param_2 == 0) && (bVar2 = *(short *)(DAT_010071b0 + param_1 * 2 + 0x10) != 1, bVar2)) {
    uVar1 = 0;
  }
  if (param_1 == 0) {
    FUN_010070ba(0,0x40,uVar1);
    pin_update(DAT_01007bcc,1,bVar2);
    uVar1 = DAT_010077bc;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    pin_update(DAT_0100735c,0x40);
    pin_update(DAT_01007bd0,1,bVar2);
    uVar1 = DAT_0100787c;
  }
  pin_update(uVar1,0x10,(param_2 & 0xf) << 4);
  return;
}

