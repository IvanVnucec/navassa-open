
undefined4 FUN_01039fae(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  FUN_0102229c(auStack_48,0x20,0);
  for (uVar3 = 0; uVar3 < 4; uVar3 = uVar3 + 1) {
    if ((int)((param_1 >> (uVar3 >> 1 & 0xff)) << 0x1f) < 0) {
      for (uVar4 = 0; uVar4 < 0x10; uVar4 = uVar4 + 1) {
        puVar1 = (undefined4 *)(param_2 + uVar3 * 8);
        uVar2 = FUN_0101bb08(*puVar1,puVar1[1],(uVar4 & 0xff) << 2);
        FUN_0103a02c(uVar3,uVar4,(uVar2 & 0xf) - 4,auStack_48 + uVar3 * 8);
      }
    }
  }
  return 0;
}

