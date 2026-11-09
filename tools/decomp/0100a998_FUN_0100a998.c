
undefined4 FUN_0100a998(uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_24 = param_2;
  local_28 = param_1;
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    return 0xc801;
  }
  if (-1 < (int)((0x1fU >> (param_2 & 0xff)) << 0x1f)) {
    return 0xe700;
  }
  uVar4 = *(undefined4 *)(DAT_0100abe0 + param_1 * 4);
  cVar1 = *param_3;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (cVar1 == '\x01' || cVar1 == '\x03') {
      uVar3 = 1;
      uVar2 = 1;
      goto code_r0x0100a9cc;
    }
    if (cVar1 != '\x02' && cVar1 != '\x04') {
      return 0xc800;
    }
    uVar3 = 1;
  }
  uVar2 = 0;
code_r0x0100a9cc:
  local_20 = DAT_0100abf4;
  uStack_1c = DAT_0100abf8;
  FUN_0100a86c(uVar4,*(undefined2 *)((int)&local_20 + param_2 * 2),uVar2,1);
  local_28 = DAT_0100abfc;
  uStack_24 = DAT_0100ac00;
  FUN_0100a86c(uVar4,*(undefined2 *)((int)&local_28 + param_2 * 2),uVar3,1);
  return 0;
}

