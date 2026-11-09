
/* WARNING: Removing unreachable block (ram,0x010162c8) */
/* WARNING: Removing unreachable block (ram,0x010162ce) */
/* WARNING: Removing unreachable block (ram,0x010162d4) */
/* WARNING: Removing unreachable block (ram,0x010162d8) */
/* WARNING: Removing unreachable block (ram,0x010162e4) */
/* WARNING: Removing unreachable block (ram,0x010162e8) */
/* WARNING: Removing unreachable block (ram,0x01016310) */
/* WARNING: Removing unreachable block (ram,0x01016316) */
/* WARNING: Removing unreachable block (ram,0x01016336) */
/* WARNING: Removing unreachable block (ram,0x01016338) */
/* WARNING: Removing unreachable block (ram,0x01016346) */

void FUN_01016164(undefined4 param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float extraout_s0;
  float fVar5;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s2;
  float local_80 [15];
  float local_44 [8];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  iVar3 = 0;
  do {
    local_44[iVar3 + 3] = 0.0;
    for (iVar4 = 0; iVar4 < param_3; iVar4 = (int)(char)((char)iVar4 + '\x01')) {
      fVar5 = (float)FUN_01016358();
      local_44[iVar3 + 3] = local_44[iVar3 + 3] + fVar5;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      local_80[iVar3 * 4 + iVar4] = local_44[iVar4 + iVar3 + 3];
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    local_44[iVar3] = 0.0;
    for (iVar4 = 0; iVar4 < param_3; iVar4 = (int)(char)((char)iVar4 + '\x01')) {
      fVar5 = (float)FUN_01016358();
      local_44[iVar3] = local_44[iVar3] + fVar5 * *(float *)(param_2 + iVar4 * 4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    local_80[iVar3 * 4 + 3] = local_44[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    for (iVar4 = iVar1; iVar4 < 3; iVar4 = iVar4 + 1) {
      if ((int)((uint)(local_80[iVar3 * 5] < local_80[iVar3 + iVar4 * 4]) << 0x1f) < 0) {
        do {
          fVar5 = local_80[iVar3 * 4];
          pfVar2 = local_80 + iVar3 * 4;
          *pfVar2 = local_80[iVar4 * 4];
          iVar3 = FUN_0101634c(fVar5);
          *pfVar2 = extraout_s0;
        } while( true );
      }
    }
    iVar3 = iVar1;
  } while (iVar1 < 3);
  iVar4 = 1;
  iVar3 = 0;
  fVar5 = local_80[4] / local_80[0];
  do {
    pfVar2 = local_80 + iVar4 * 4;
    iVar3 = FUN_0101634c(fVar5,local_80[iVar3 * 4],*pfVar2);
    *pfVar2 = extraout_s2 - extraout_s0_00 * extraout_s1;
    fVar5 = extraout_s0_00;
  } while( true );
}

