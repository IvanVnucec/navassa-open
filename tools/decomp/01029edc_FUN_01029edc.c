
undefined4 FUN_01029edc(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((int)param_2 < 0xc) {
    if (param_1 == 2) {
      *(char *)(DAT_0102a820 + 10) = (char)param_2;
    }
    else if (param_1 == 3) {
      *(char *)(DAT_0102a820 + 0xb) = (char)param_2;
      bVar1 = (byte)(1 << (param_2 & 0xff));
      if (param_2 < 8) {
        *DAT_0102a844 = bVar1 | *DAT_0102a844;
        if (param_2 < 2) {
          uVar3 = 8;
          uVar2 = DAT_0102a848;
        }
        else if (param_2 < 4) {
          uVar3 = 9;
          uVar2 = DAT_0102a84c;
        }
        else if (param_2 < 6) {
          uVar3 = 10;
          uVar2 = DAT_0102a850;
        }
        else {
          uVar3 = 0xb;
          uVar2 = DAT_0102a854;
        }
      }
      else {
        DAT_0102a844[3] = bVar1 | DAT_0102a844[1];
        if (param_2 < 10) {
          uVar3 = 0xc;
          uVar2 = DAT_0102a858;
        }
        else {
          uVar3 = 0xd;
          uVar2 = DAT_0102ac64;
        }
      }
      pin_update(uVar2,0x3f,uVar3);
    }
  }
  else {
    uVar4 = 0x8003;
  }
  return uVar4;
}

