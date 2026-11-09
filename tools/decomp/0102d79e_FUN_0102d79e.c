
undefined4
FUN_0102d79e(float param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined8 uVar7;
  
  if (*(uint *)((short)param_2 * 0x54 + DAT_0102da6c + 0xf4) < DAT_0102da70) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x03';
  }
  iVar5 = DAT_0102da68 + param_2 * 0xb;
  fVar6 = (float)VectorSignedToFloat((int)*(char *)(iVar5 + 8),(byte)(in_fpscr >> 0x15) & 3);
  if (*(char *)(iVar5 + 2) == '\0') {
    cVar2 = '\x03';
  }
  else {
    cVar2 = '\t';
  }
  uVar7 = FUN_01012c10((fVar6 - param_1) + -18.0);
  FUN_0102035c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0102da74,DAT_0102da78);
  uVar3 = FUN_0101f3f4();
  fVar6 = (float)FUN_010145f4(uVar3);
  cVar1 = (char)(int)fVar6;
  if ((cVar1 <= cVar2) && (cVar2 = cVar1, cVar1 < cVar4)) {
    cVar2 = cVar4;
  }
  *(char *)(iVar5 + 5) = cVar2;
  return param_5;
}

