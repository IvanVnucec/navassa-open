
void FUN_010052cc(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  
  *param_1 = 0x10;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 3;
  param_1[4] = 0xf;
  *(undefined2 *)(param_1 + 8) = 0x37f;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = 1;
  pcVar2 = DAT_010054f8;
  cVar1 = *(char *)(DAT_01005510 + 0x77d);
  bVar4 = cVar1 != '\x01';
  if (bVar4) {
    cVar1 = *(char *)(DAT_0100550c + 0x20);
  }
  if (bVar4 && cVar1 != '\x01') {
    uVar3 = 1;
  }
  else {
    uVar3 = 4;
  }
  param_1[0xd] = uVar3;
  param_1[0xe] = 0;
  if (*pcVar2 != '\0') {
    param_1[0xf] = *DAT_01005444;
    param_1[0x10] = 0;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 3;
  param_1[0x14] = 1;
  param_1[0x16] = 1;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}

