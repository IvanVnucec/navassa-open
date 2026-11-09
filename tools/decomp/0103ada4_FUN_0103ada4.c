
void FUN_0103ada4(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  uVar3 = DAT_0103ae88;
  iVar2 = DAT_0103ae84;
  iVar5 = 0;
  puVar4 = (undefined1 *)(DAT_0103ae84 + 0x130);
  do {
    puVar6 = (undefined1 *)(iVar2 + iVar5 * 0x4c);
    *(undefined1 **)(iVar2 + 0x134 + iVar5 * 4) = puVar6;
    uVar1 = (&DAT_0103aee8)[iVar5];
    FUN_010365aa(puVar6);
    if (iVar5 < 2) {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 0x48) = uVar3;
      *(undefined4 *)(puVar6 + 8) = 0xffffffff;
      *(undefined4 *)(puVar6 + 4) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined4 *)(puVar6 + 0x34) = 0xf80000;
      puVar6[0x25] = 0x13;
    }
    else if (iVar5 - 2U < 2) {
      *puVar6 = 1;
      *(undefined4 *)(puVar6 + 0x48) = DAT_0103ae8c;
      *(undefined4 *)(puVar6 + 8) = 5;
      *(undefined4 *)(puVar6 + 4) = 5;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined4 *)(puVar6 + 0x34) = 0;
      puVar6[0x25] = 0x20;
    }
    *(undefined4 *)(puVar6 + 0x44) = 0;
    puVar6[2] = (char)iVar5;
    puVar6[1] = uVar1;
    puVar6[0x24] = 0;
    puVar6[0x27] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x31] = 0;
    switch(iVar5) {
    case 0:
      *(undefined1 *)(iVar2 + 0x12) = 0x1e;
      break;
    case 1:
      *(undefined1 *)(iVar2 + 0x5e) = 0x1f;
      break;
    case 2:
      *(undefined1 *)(iVar2 + 0xaa) = 0x20;
      break;
    case 3:
      *(undefined1 *)(iVar2 + 0xf6) = 0x21;
    }
    FUN_0103ae90(puVar6,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  *(undefined4 *)(*(int *)(iVar2 + 0x13c) + 0x44) = *(undefined4 *)(iVar2 + 0x134);
  *(undefined4 *)(*(int *)(iVar2 + 0x140) + 0x44) = *(undefined4 *)(iVar2 + 0x138);
  *(undefined4 *)(*(int *)(iVar2 + 0x134) + 0x44) = *(undefined4 *)(iVar2 + 0x13c);
  *(undefined4 *)(*(int *)(iVar2 + 0x138) + 0x44) = *(undefined4 *)(iVar2 + 0x140);
  *puVar4 = 0;
  return;
}

