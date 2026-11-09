
uint FUN_0101ffd6(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = (byte *)(param_1 + 0x30);
  if (param_2 < 0) {
    FUN_0100d7b8(param_1 + 0x34,0x14);
    FUN_0100d7b8(param_1 + 0x48,0x14);
    *pbVar3 = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    bVar2 = *pbVar3;
    if (('\0' < *(char *)(param_1 + 0x31)) &&
       (cVar1 = *(char *)(param_1 + 0x31) + -1, *(char *)(param_1 + 0x31) = cVar1, cVar1 == '\0')) {
      bVar4 = 0;
      do {
        *(undefined4 *)(param_1 + 0x48 + (uint)bVar4 * 4) =
             *(undefined4 *)(param_1 + 0x34 + (uint)bVar2 * 4);
        bVar2 = bVar2 + 1;
        if (bVar2 == 5) {
          bVar2 = 0;
        }
        bVar4 = bVar4 + 1;
      } while (bVar4 < 5);
    }
    *(uint *)(param_1 + 0x34 + (uint)bVar2 * 4) = param_4;
    if ((*(uint *)(param_1 + 0x2c) <= param_4) &&
       (*(uint *)(param_1 + 0x2c) < param_4 || *(uint *)(param_1 + 0x28) < param_3)) {
      *(uint *)(param_1 + 0x28) = param_3;
      *(uint *)(param_1 + 0x2c) = param_4;
      *(char *)(param_1 + 0x20) = (char)param_2;
      *(undefined1 *)(param_1 + 0x31) = 3;
    }
    bVar2 = bVar2 + 1;
    if (bVar2 == 5) {
      bVar2 = 0;
    }
    *pbVar3 = bVar2;
  }
  return param_4;
}

