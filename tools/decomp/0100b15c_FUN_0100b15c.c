
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0100b15c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = _DAT_0100b250;
  puVar4 = _DAT_0100b250 + 1;
  uVar2 = FUN_0101bb76(s_TempTimer_0100b253 + 1,1000,1,10,&LAB_0100b194_1,puVar4,in_r3);
  *puVar1 = uVar2;
  uVar2 = heap_block_probe();
  uVar3 = 0;
  FUN_0101bbf6(*puVar1,1,uVar2,0);
  return CONCAT44(puVar4,uVar3);
}

