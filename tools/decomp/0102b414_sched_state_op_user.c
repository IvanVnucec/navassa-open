
undefined8 sched_state_op_user(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = DAT_0102b748;
  iVar1 = DAT_0102b744;
  puVar6 = (undefined4 *)(DAT_0102b744 + (short)param_1 * 0x70);
  *puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 5) = 0;
  iVar3 = DAT_0102b74c;
  *(char *)(puVar6 + 1) = (char)param_1;
  iVar7 = (short)param_1 * 0x2c + iVar3;
  *(undefined1 *)((int)puVar6 + 6) = *(undefined1 *)(iVar7 + 0x29);
  puVar6[8] = 0;
  uVar8 = *(uint *)(iVar2 + param_1 * 8);
  puVar6[9] = uVar8;
  puVar6[0xb] = ((uVar8 / 1000) * 1000) / 1000;
  uVar8 = *(uint *)(iVar2 + param_1 * 8 + 4);
  puVar6[0xf] = 3;
  puVar6[10] = ((uVar8 / 1000) * 1000) / 1000;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  puVar6[0xc] = 1;
  puVar6[5] = *(undefined4 *)(iVar7 + 4);
  if (param_1 == 0xd) {
    *(uint *)(iVar1 + 0x5c4) = *(uint *)(iVar3 + 0x240) & (uint)*(ushort *)(DAT_0102b750 + 0x22);
  }
  bVar4 = 0;
  do {
    if ((int)(((uint)puVar6[5] >> (uint)bVar4) << 0x1f) < 0) {
      puVar6[6] = *(undefined4 *)(DAT_0102b754 + (uint)bVar4 * 4);
      break;
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 4);
  puVar6[4] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  *(undefined1 *)((int)puVar6 + 0x6d) = *(undefined1 *)(iVar7 + 0x2a);
  sched_channel_set_state(puVar6);
  for (uVar8 = 0; uVar8 < *(uint *)(iVar7 + 0x24); uVar8 = uVar8 + 1) {
    pcVar5 = *(code **)(*(int *)(iVar7 + 0x20) + uVar8 * 0x24);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(puVar6);
    }
  }
  return CONCAT44(param_4,puVar6);
}

