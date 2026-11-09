
undefined4 FUN_0100ab1c(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_2c = param_2;
  local_30 = param_1;
  uVar5 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    if ((int)((0x1fU >> (param_2 & 0xff)) << 0x1f) < 0) {
      uVar6 = *(undefined4 *)(DAT_0100abe0 + param_1 * 4);
      cVar1 = *(char *)(param_3 + 2);
      bVar4 = 0;
      bVar2 = 0;
      bVar3 = 0;
      if (cVar1 != '\0') {
        bVar4 = (*(char *)(param_3 + 3) + -1) * '\x10';
        bVar2 = 2;
        bVar3 = 4;
      }
      local_28 = DAT_0100ac04;
      uStack_24 = DAT_0100ac08;
      FUN_0100a86c(uVar6,*(undefined2 *)((int)&local_28 + param_2 * 2),0xf6,bVar4 | bVar2 | bVar3);
      local_30 = DAT_0100ac0c;
      uStack_2c = DAT_0100ac10;
      FUN_0100a86c(uVar6,*(undefined2 *)((int)&local_30 + param_2 * 2),1,cVar1);
    }
    else {
      uVar5 = 0xe700;
    }
  }
  else {
    uVar5 = 0xc801;
  }
  return uVar5;
}

