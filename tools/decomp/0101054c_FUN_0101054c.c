
undefined8
FUN_0101054c(float param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float extraout_s1;
  undefined8 uVar4;
  
  if (param_3 != 2) {
    cVar2 = param_3 == 1 || param_3 == 3;
    if (param_3 == 1 || param_3 == 3) {
      uVar4 = FUN_01012c10(param_1);
      uVar4 = FUN_0102035c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,DAT_0101067c);
      FUN_0101f250((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40000000);
      cVar2 = '\x01';
      FUN_010200e0();
      fVar1 = (float)FUN_0101f3f4();
      FUN_010105d0((int)fVar1 & 0xff);
      fVar1 = extraout_s1;
      if (cVar2 == '\0') goto LAB_010105bc;
    }
    else {
      fVar1 = DAT_01010654 + param_1 * 2.0;
    }
    uVar3 = (uint)fVar1;
    FUN_010105d0(uVar3 & 0xff);
    if (cVar2 != '\0') {
      uVar4 = FUN_010104ae(param_2,param_3,uVar3 & 0xff,param_4);
      return uVar4;
    }
  }
LAB_010105bc:
  return CONCAT44(param_5,0xc401);
}

