
void FUN_0100c31c(int param_1)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  
  iVar6 = *(int *)(param_1 + 0xc);
  cVar1 = (*(char **)(param_1 + 8))[1];
  cVar7 = **(char **)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 4);
  if (*(char *)(iVar6 + 0xa6) == '\0') {
    cVar7 = cVar7 + -5;
  }
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfffe;
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  cVar2 = *(char *)(iVar6 + 0xa6);
  *(char *)(iVar6 + 0xb) = cVar1;
  *(char *)(iVar6 + 10) = cVar7;
  *(undefined4 *)(iVar6 + 0x40) = uVar8;
  if (*(char *)(iVar6 + 0xc) == '\0') {
    if (cVar2 == '\0') {
      uVar3 = *(undefined2 *)(iVar5 + 0x6c);
    }
    else {
      if (cVar2 != '\x01') goto LAB_0100c36e;
      uVar3 = *(undefined2 *)(iVar5 + 0x6e);
    }
  }
  else if (cVar2 == '\0') {
    uVar3 = *(undefined2 *)(iVar5 + 0x70);
  }
  else {
    if (cVar2 != '\x01') goto LAB_0100c36e;
    uVar3 = *(undefined2 *)(iVar5 + 0x72);
  }
  *(undefined2 *)(param_1 + 0xf4) = uVar3;
LAB_0100c36e:
  *(undefined1 *)(iVar6 + 0x70) = 0;
  if (*(char *)(iVar6 + 0xc) == '\0') {
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x18);
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  }
  fVar9 = fVar9 * DAT_0100c464;
  *(uint *)(param_1 + 0x2c) = uVar4;
  *(float *)(param_1 + 0x28) = fVar9;
  return;
}

