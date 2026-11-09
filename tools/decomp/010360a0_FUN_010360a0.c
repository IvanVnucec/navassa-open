
void FUN_010360a0(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = DAT_010364cc;
  puVar1 = DAT_010364c8;
  *(int *)(DAT_010364c8 + 6) = DAT_010364cc;
  *(undefined2 **)(puVar1 + 0xc) = puVar1 + 0xe;
  *(int *)(puVar1 + 8) = iVar2 + 0x98;
  *(int *)(puVar1 + 0x16) = iVar2 + 0xe4;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(int *)(puVar1 + 0x14) = iVar2 + 0x4c;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined2 **)(puVar1 + 0x1a) = puVar1;
  return;
}

