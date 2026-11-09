
void FUN_01011aac(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  
  bVar1 = 0;
  bVar3 = 0;
  fVar5 = DAT_01011c6c;
  do {
    iVar4 = param_1 + (uint)bVar3 * 4;
    if ((int)((uint)(ABS(*(float *)(iVar4 + 0x338) + -1.0) < fVar5) << 0x1f) < 0) {
      fVar5 = ABS(*(float *)(iVar4 + 0x338) + -1.0);
      bVar1 = bVar3;
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0xf);
  if (bVar1 < 8) {
    *(byte *)(param_1 + 0x2f9) = bVar1;
    cVar2 = '\0';
  }
  else {
    *(undefined1 *)(param_1 + 0x2f9) = 0;
    cVar2 = bVar1 - 7;
  }
  *(char *)(param_1 + 0x2fa) = cVar2;
  *(undefined1 *)(param_1 + 0x2f6) = *(undefined1 *)(param_1 + 0x2f9);
  *(undefined1 *)(param_1 + 0x2f7) = *(undefined1 *)(param_1 + 0x2fa);
  return;
}

