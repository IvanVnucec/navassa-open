
void FUN_01007244(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  puVar3 = DAT_01007cd4;
  iVar2 = DAT_01007560;
  iVar1 = DAT_0100734c;
  *DAT_01007cd4 = (char)param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0x22);
  if ((int)(uVar4 << 0x1f) < 0) {
    if (param_1 << 0x1f < 0) {
      *(undefined4 *)(puVar3 + 0x2c) = 1;
      *(undefined4 *)(puVar3 + 0x3c) = 1;
      *(undefined1 *)(iVar2 + 0x71) = 1;
    }
    else {
      *(undefined4 *)(puVar3 + 0x2c) = 0;
      *(undefined4 *)(puVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar2 + 0x11) = 1;
    }
  }
  else {
    *(undefined4 *)(puVar3 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x3c) = 0xffffffff;
  }
  if ((int)(uVar4 << 0x1e) < 0) {
    if (param_1 << 0x1e < 0) {
      *(undefined4 *)(puVar3 + 0x30) = 1;
      *(undefined4 *)(puVar3 + 0x40) = 1;
      *(undefined1 *)(iVar2 + 0x71) = 1;
    }
    else {
      *(undefined4 *)(puVar3 + 0x30) = 0;
      *(undefined4 *)(puVar3 + 0x40) = 0;
      *(undefined1 *)(iVar2 + 0x11) = 1;
    }
  }
  else {
    *(undefined4 *)(puVar3 + 0x30) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x40) = 0xffffffff;
  }
  if ((int)(uVar4 << 0x1d) < 0) {
    if (param_1 << 0x1d < 0) {
      *(undefined4 *)(puVar3 + 0x34) = 1;
      *(undefined4 *)(puVar3 + 0x44) = 1;
      *(undefined1 *)(iVar2 + 0x71) = 1;
    }
    else {
      *(undefined4 *)(puVar3 + 0x34) = 0;
      *(undefined4 *)(puVar3 + 0x44) = 0;
      *(undefined1 *)(iVar2 + 0x11) = 1;
    }
  }
  else {
    *(undefined4 *)(puVar3 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x44) = 0xffffffff;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    if (param_1 << 0x1c < 0) {
      *(undefined4 *)(puVar3 + 0x38) = 1;
      *(undefined4 *)(puVar3 + 0x48) = 1;
      *(undefined1 *)(iVar2 + 0x71) = 1;
      return;
    }
    *(undefined4 *)(puVar3 + 0x38) = 0;
    *(undefined4 *)(puVar3 + 0x48) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 1;
    return;
  }
  *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
  return;
}

