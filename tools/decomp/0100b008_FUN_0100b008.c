
int FUN_0100b008(void)

{
  short sVar1;
  uint in_fpscr;
  float fVar2;
  
  fVar2 = (float)VectorSignedToFloat((int)*DAT_0100b218,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = DAT_0100b210 + (DAT_0100b208 - (fVar2 + DAT_0100b204)) * DAT_0100b20c;
  if (fVar2 <= 0.0) {
    sVar1 = 0;
  }
  else if (fVar2 < DAT_0100b214 == (NAN(fVar2) || NAN(DAT_0100b214))) {
    sVar1 = 0xfff;
  }
  else {
    sVar1 = (short)(int)fVar2;
  }
  DAT_0100b218[1] = sVar1;
  return (int)sVar1;
}

