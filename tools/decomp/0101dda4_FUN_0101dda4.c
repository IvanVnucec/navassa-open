
undefined8 FUN_0101dda4(undefined4 param_1,byte *param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_r6;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar1 = FUN_0101ddea();
  uVar2 = 0;
  if (iVar1 == 2) {
    if (param_2 != (byte *)0x0) {
      *param_2 = *(byte *)(unaff_r6 + 0xe3) & 0x3f;
    }
    if (param_3 != (float *)0x0) {
      fVar3 = (float)VectorUnsignedToFloat
                               (*(byte *)(unaff_r6 + 0xe2) & 0x7f,(byte)(in_fpscr >> 0x15) & 3);
      *param_3 = fVar3 * DAT_0101df50;
    }
  }
  else {
    uVar2 = 0xc600;
  }
  return CONCAT44(param_4,uVar2);
}

