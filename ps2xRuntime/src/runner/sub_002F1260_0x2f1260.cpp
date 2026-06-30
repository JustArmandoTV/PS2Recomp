#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1260
// Address: 0x2f1260 - 0x2f16c0
void sub_002F1260_0x2f1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1260_0x2f1260");
#endif

    switch (ctx->pc) {
        case 0x2f1510u: goto label_2f1510;
        case 0x2f165cu: goto label_2f165c;
        default: break;
    }

    ctx->pc = 0x2f1260u;

label_2f1260:
    // 0x2f1260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f1264: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f1264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f1268: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f126c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f1270: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f1270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f1274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f1274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f127c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1280: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2f1280u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f1284: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f1284u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f1288: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f1288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f128c: 0x94421cf8  lhu         $v0, 0x1CF8($v0)
    ctx->pc = 0x2f128cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7416)));
    // 0x2f1290: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x2f1290u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f1294: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1294u;
    {
        const bool branch_taken_0x2f1294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1294u;
            // 0x2f1298: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1294) {
            ctx->pc = 0x2F12A4u;
            goto label_2f12a4;
        }
    }
    ctx->pc = 0x2F129Cu;
    // 0x2f129c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F129Cu;
    {
        const bool branch_taken_0x2f129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F129Cu;
            // 0x2f12a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f129c) {
            ctx->pc = 0x2F12C8u;
            goto label_2f12c8;
        }
    }
    ctx->pc = 0x2F12A4u;
label_2f12a4:
    // 0x2f12a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2f12a8: 0x8c631cf0  lw          $v1, 0x1CF0($v1)
    ctx->pc = 0x2f12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7408)));
    // 0x2f12ac: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x2f12acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2f12b0: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F12B0u;
    {
        const bool branch_taken_0x2f12b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f12b0) {
            ctx->pc = 0x2F12B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12B0u;
            // 0x2f12b4: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F12C4u;
            goto label_2f12c4;
        }
    }
    ctx->pc = 0x2F12B8u;
    // 0x2f12b8: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x2f12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f12bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F12BCu;
    {
        const bool branch_taken_0x2f12bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12BCu;
            // 0x2f12c0: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12bc) {
            ctx->pc = 0x2F12C8u;
            goto label_2f12c8;
        }
    }
    ctx->pc = 0x2F12C4u;
label_2f12c4:
    // 0x2f12c4: 0x24720002  addiu       $s2, $v1, 0x2
    ctx->pc = 0x2f12c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2f12c8:
    // 0x2f12c8: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2f12c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f12cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f12d0: 0x56230069  bnel        $s1, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2F12D0u;
    {
        const bool branch_taken_0x2f12d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f12d0) {
            ctx->pc = 0x2F12D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12D0u;
            // 0x2f12d4: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1478u;
            goto label_2f1478;
        }
    }
    ctx->pc = 0x2F12D8u;
    // 0x2f12d8: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F12D8u;
    {
        const bool branch_taken_0x2f12d8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f12d8) {
            ctx->pc = 0x2F12DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12D8u;
            // 0x2f12dc: 0x122042  srl         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F12ECu;
            goto label_2f12ec;
        }
    }
    ctx->pc = 0x2F12E0u;
    // 0x2f12e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f12e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f12e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F12E4u;
    {
        const bool branch_taken_0x2f12e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12E4u;
            // 0x2f12e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12e4) {
            ctx->pc = 0x2F1304u;
            goto label_2f1304;
        }
    }
    ctx->pc = 0x2F12ECu;
label_2f12ec:
    // 0x2f12ec: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2f12ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f12f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f12f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f12f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f12f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f12f8: 0x0  nop
    ctx->pc = 0x2f12f8u;
    // NOP
    // 0x2f12fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f12fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1300: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f1300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f1304:
    // 0x2f1304: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f1304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1308: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2F1308u;
    {
        const bool branch_taken_0x2f1308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1308) {
            ctx->pc = 0x2F1398u;
            goto label_2f1398;
        }
    }
    ctx->pc = 0x2F1310u;
    // 0x2f1310: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x2f1310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f1314: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2f1314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f1318: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1318u;
    {
        const bool branch_taken_0x2f1318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1318) {
            ctx->pc = 0x2F1328u;
            goto label_2f1328;
        }
    }
    ctx->pc = 0x2F1320u;
    // 0x2f1320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F1320u;
    {
        const bool branch_taken_0x2f1320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1320u;
            // 0x2f1324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1320) {
            ctx->pc = 0x2F1350u;
            goto label_2f1350;
        }
    }
    ctx->pc = 0x2F1328u;
label_2f1328:
    // 0x2f1328: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f1328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2f132c: 0x8c631cf0  lw          $v1, 0x1CF0($v1)
    ctx->pc = 0x2f132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7408)));
    // 0x2f1330: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2f1330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f1334: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1334u;
    {
        const bool branch_taken_0x2f1334 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1334) {
            ctx->pc = 0x2F1338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1334u;
            // 0x2f1338: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F134Cu;
            goto label_2f134c;
        }
    }
    ctx->pc = 0x2F133Cu;
    // 0x2f133c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f133cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1340: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2f1340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1344u;
    {
        const bool branch_taken_0x2f1344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1344u;
            // 0x2f1348: 0x731821  addu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1344) {
            ctx->pc = 0x2F1350u;
            goto label_2f1350;
        }
    }
    ctx->pc = 0x2F134Cu;
label_2f134c:
    // 0x2f134c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2f134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2f1350:
    // 0x2f1350: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1350u;
    {
        const bool branch_taken_0x2f1350 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2f1350) {
            ctx->pc = 0x2F1354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1350u;
            // 0x2f1354: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1364u;
            goto label_2f1364;
        }
    }
    ctx->pc = 0x2F1358u;
    // 0x2f1358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f135c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F135Cu;
    {
        const bool branch_taken_0x2f135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F135Cu;
            // 0x2f1360: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f135c) {
            ctx->pc = 0x2F137Cu;
            goto label_2f137c;
        }
    }
    ctx->pc = 0x2F1364u;
label_2f1364:
    // 0x2f1364: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f1364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f1368: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f1368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f136c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f136cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1370: 0x0  nop
    ctx->pc = 0x2f1370u;
    // NOP
    // 0x2f1374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1378: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f1378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f137c:
    // 0x2f137c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f137cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1380: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1380u;
    {
        const bool branch_taken_0x2f1380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1380) {
            ctx->pc = 0x2F1398u;
            goto label_2f1398;
        }
    }
    ctx->pc = 0x2F1388u;
    // 0x2f1388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f138c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f138cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1390: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2F1390u;
    {
        const bool branch_taken_0x2f1390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1390u;
            // 0x2f1394: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1390) {
            ctx->pc = 0x2F169Cu;
            goto label_2f169c;
        }
    }
    ctx->pc = 0x2F1398u;
label_2f1398:
    // 0x2f1398: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f1398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2f139c: 0xc4601d00  lwc1        $f0, 0x1D00($v1)
    ctx->pc = 0x2f139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f13a0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2f13a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f13a4: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2F13A4u;
    {
        const bool branch_taken_0x2f13a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f13a4) {
            ctx->pc = 0x2F146Cu;
            goto label_2f146c;
        }
    }
    ctx->pc = 0x2F13ACu;
    // 0x2f13ac: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F13ACu;
    {
        const bool branch_taken_0x2f13ac = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f13ac) {
            ctx->pc = 0x2F13B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F13ACu;
            // 0x2f13b0: 0x122042  srl         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F13C0u;
            goto label_2f13c0;
        }
    }
    ctx->pc = 0x2F13B4u;
    // 0x2f13b4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f13b4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f13b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F13B8u;
    {
        const bool branch_taken_0x2f13b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F13B8u;
            // 0x2f13bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13b8) {
            ctx->pc = 0x2F13D8u;
            goto label_2f13d8;
        }
    }
    ctx->pc = 0x2F13C0u;
label_2f13c0:
    // 0x2f13c0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2f13c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f13c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f13c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f13c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f13c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f13cc: 0x0  nop
    ctx->pc = 0x2f13ccu;
    // NOP
    // 0x2f13d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f13d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f13d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f13d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f13d8:
    // 0x2f13d8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f13d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f13dc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2F13DCu;
    {
        const bool branch_taken_0x2f13dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f13dc) {
            ctx->pc = 0x2F146Cu;
            goto label_2f146c;
        }
    }
    ctx->pc = 0x2F13E4u;
    // 0x2f13e4: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x2f13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f13e8: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2f13e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f13ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F13ECu;
    {
        const bool branch_taken_0x2f13ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f13ec) {
            ctx->pc = 0x2F13FCu;
            goto label_2f13fc;
        }
    }
    ctx->pc = 0x2F13F4u;
    // 0x2f13f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F13F4u;
    {
        const bool branch_taken_0x2f13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F13F4u;
            // 0x2f13f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13f4) {
            ctx->pc = 0x2F1424u;
            goto label_2f1424;
        }
    }
    ctx->pc = 0x2F13FCu;
label_2f13fc:
    // 0x2f13fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2f1400: 0x8c631cf0  lw          $v1, 0x1CF0($v1)
    ctx->pc = 0x2f1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7408)));
    // 0x2f1404: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2f1404u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f1408: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1408u;
    {
        const bool branch_taken_0x2f1408 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1408) {
            ctx->pc = 0x2F140Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1408u;
            // 0x2f140c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1420u;
            goto label_2f1420;
        }
    }
    ctx->pc = 0x2F1410u;
    // 0x2f1410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f1410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1414: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f1414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1418u;
    {
        const bool branch_taken_0x2f1418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1418u;
            // 0x2f141c: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1418) {
            ctx->pc = 0x2F1424u;
            goto label_2f1424;
        }
    }
    ctx->pc = 0x2F1420u;
label_2f1420:
    // 0x2f1420: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f1424:
    // 0x2f1424: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1424u;
    {
        const bool branch_taken_0x2f1424 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f1424) {
            ctx->pc = 0x2F1428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1424u;
            // 0x2f1428: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1438u;
            goto label_2f1438;
        }
    }
    ctx->pc = 0x2F142Cu;
    // 0x2f142c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f142cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1430u;
    {
        const bool branch_taken_0x2f1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1430u;
            // 0x2f1434: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1430) {
            ctx->pc = 0x2F1450u;
            goto label_2f1450;
        }
    }
    ctx->pc = 0x2F1438u;
label_2f1438:
    // 0x2f1438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f1438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f143c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f1440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1444: 0x0  nop
    ctx->pc = 0x2f1444u;
    // NOP
    // 0x2f1448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f144c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f144cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f1450:
    // 0x2f1450: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2f1450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1454: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1454u;
    {
        const bool branch_taken_0x2f1454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1454) {
            ctx->pc = 0x2F146Cu;
            goto label_2f146c;
        }
    }
    ctx->pc = 0x2F145Cu;
    // 0x2f145c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f1460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1464: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2F1464u;
    {
        const bool branch_taken_0x2f1464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1464) {
            ctx->pc = 0x2F1698u;
            goto label_2f1698;
        }
    }
    ctx->pc = 0x2F146Cu;
label_2f146c:
    // 0x2f146c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f146cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1470: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2F1470u;
    {
        const bool branch_taken_0x2f1470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1470) {
            ctx->pc = 0x2F1698u;
            goto label_2f1698;
        }
    }
    ctx->pc = 0x2F1478u;
label_2f1478:
    // 0x2f1478: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2f1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f147c: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2f147cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f1480: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1480u;
    {
        const bool branch_taken_0x2f1480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1480) {
            ctx->pc = 0x2F1490u;
            goto label_2f1490;
        }
    }
    ctx->pc = 0x2F1488u;
    // 0x2f1488: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F1488u;
    {
        const bool branch_taken_0x2f1488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1488u;
            // 0x2f148c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1488) {
            ctx->pc = 0x2F14B4u;
            goto label_2f14b4;
        }
    }
    ctx->pc = 0x2F1490u;
label_2f1490:
    // 0x2f1490: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f1490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2f1494: 0x8c631cf0  lw          $v1, 0x1CF0($v1)
    ctx->pc = 0x2f1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7408)));
    // 0x2f1498: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2f1498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f149c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F149Cu;
    {
        const bool branch_taken_0x2f149c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f149c) {
            ctx->pc = 0x2F14A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F149Cu;
            // 0x2f14a0: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F14B0u;
            goto label_2f14b0;
        }
    }
    ctx->pc = 0x2F14A4u;
    // 0x2f14a4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2f14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f14a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F14A8u;
    {
        const bool branch_taken_0x2f14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14A8u;
            // 0x2f14ac: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14a8) {
            ctx->pc = 0x2F14B4u;
            goto label_2f14b4;
        }
    }
    ctx->pc = 0x2F14B0u;
label_2f14b0:
    // 0x2f14b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f14b4:
    // 0x2f14b4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2f14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f14b8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F14B8u;
    {
        const bool branch_taken_0x2f14b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f14b8) {
            ctx->pc = 0x2F14BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14B8u;
            // 0x2f14bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F14CCu;
            goto label_2f14cc;
        }
    }
    ctx->pc = 0x2F14C0u;
    // 0x2f14c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f14c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f14c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F14C4u;
    {
        const bool branch_taken_0x2f14c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14C4u;
            // 0x2f14c8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14c4) {
            ctx->pc = 0x2F14E4u;
            goto label_2f14e4;
        }
    }
    ctx->pc = 0x2F14CCu;
label_2f14cc:
    // 0x2f14cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f14ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f14d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f14d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f14d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f14d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f14d8: 0x0  nop
    ctx->pc = 0x2f14d8u;
    // NOP
    // 0x2f14dc: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x2f14dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2f14e0: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x2f14e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2f14e4:
    // 0x2f14e4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2f14e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2f14e8: 0x0  nop
    ctx->pc = 0x2f14e8u;
    // NOP
    // 0x2f14ec: 0x4615b032  c.eq.s      $f22, $f21
    ctx->pc = 0x2f14ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f14f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2F14F0u;
    {
        const bool branch_taken_0x2f14f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f14f0) {
            ctx->pc = 0x2F14F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14F0u;
            // 0x2f14f4: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1500u;
            goto label_2f1500;
        }
    }
    ctx->pc = 0x2F14F8u;
    // 0x2f14f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F14F8u;
    {
        const bool branch_taken_0x2f14f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f14f8) {
            ctx->pc = 0x2F1548u;
            goto label_2f1548;
        }
    }
    ctx->pc = 0x2F1500u;
label_2f1500:
    // 0x2f1500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1504: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f1504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1508: 0xc0bc498  jal         func_2F1260
    ctx->pc = 0x2F1508u;
    SET_GPR_U32(ctx, 31, 0x2F1510u);
    ctx->pc = 0x2F150Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1508u;
            // 0x2f150c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1260u;
    goto label_2f1260;
    ctx->pc = 0x2F1510u;
label_2f1510:
    // 0x2f1510: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1510u;
    {
        const bool branch_taken_0x2f1510 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f1510) {
            ctx->pc = 0x2F1514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1510u;
            // 0x2f1514: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1524u;
            goto label_2f1524;
        }
    }
    ctx->pc = 0x2F1518u;
    // 0x2f1518: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2f1518u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f151c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F151Cu;
    {
        const bool branch_taken_0x2f151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F151Cu;
            // 0x2f1520: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f151c) {
            ctx->pc = 0x2F153Cu;
            goto label_2f153c;
        }
    }
    ctx->pc = 0x2F1524u;
label_2f1524:
    // 0x2f1524: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2f1524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f1528: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f152c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f152cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1530: 0x0  nop
    ctx->pc = 0x2f1530u;
    // NOP
    // 0x2f1534: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f1534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f1538: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f1538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f153c:
    // 0x2f153c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x2f153cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2f1540: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1544: 0x46150583  div.s       $f22, $f0, $f21
    ctx->pc = 0x2f1544u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[21];
label_2f1548:
    // 0x2f1548: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f154c: 0x94441cf8  lhu         $a0, 0x1CF8($v0)
    ctx->pc = 0x2f154cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7416)));
    // 0x2f1550: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x2f1550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f1554: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1554u;
    {
        const bool branch_taken_0x2f1554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1554) {
            ctx->pc = 0x2F1564u;
            goto label_2f1564;
        }
    }
    ctx->pc = 0x2F155Cu;
    // 0x2f155c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F155Cu;
    {
        const bool branch_taken_0x2f155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F155Cu;
            // 0x2f1560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f155c) {
            ctx->pc = 0x2F1588u;
            goto label_2f1588;
        }
    }
    ctx->pc = 0x2F1564u;
label_2f1564:
    // 0x2f1564: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f1568: 0x8c421cf0  lw          $v0, 0x1CF0($v0)
    ctx->pc = 0x2f1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7408)));
    // 0x2f156c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2f156cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2f1570: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1570u;
    {
        const bool branch_taken_0x2f1570 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1570) {
            ctx->pc = 0x2F1574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1570u;
            // 0x2f1574: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1584u;
            goto label_2f1584;
        }
    }
    ctx->pc = 0x2F1578u;
    // 0x2f1578: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x2f1578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f157c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F157Cu;
    {
        const bool branch_taken_0x2f157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F157Cu;
            // 0x2f1580: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f157c) {
            ctx->pc = 0x2F1588u;
            goto label_2f1588;
        }
    }
    ctx->pc = 0x2F1584u;
label_2f1584:
    // 0x2f1584: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x2f1584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f1588:
    // 0x2f1588: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2f1588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f158c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2f158cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f1590: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1590u;
    {
        const bool branch_taken_0x2f1590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1590) {
            ctx->pc = 0x2F15A0u;
            goto label_2f15a0;
        }
    }
    ctx->pc = 0x2F1598u;
    // 0x2f1598: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F1598u;
    {
        const bool branch_taken_0x2f1598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1598u;
            // 0x2f159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1598) {
            ctx->pc = 0x2F15C8u;
            goto label_2f15c8;
        }
    }
    ctx->pc = 0x2F15A0u;
label_2f15a0:
    // 0x2f15a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f15a4: 0x8c421cf0  lw          $v0, 0x1CF0($v0)
    ctx->pc = 0x2f15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7408)));
    // 0x2f15a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2f15a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f15ac: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F15ACu;
    {
        const bool branch_taken_0x2f15ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f15ac) {
            ctx->pc = 0x2F15B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15ACu;
            // 0x2f15b0: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F15C4u;
            goto label_2f15c4;
        }
    }
    ctx->pc = 0x2F15B4u;
    // 0x2f15b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f15b8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2f15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f15bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F15BCu;
    {
        const bool branch_taken_0x2f15bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15BCu;
            // 0x2f15c0: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15bc) {
            ctx->pc = 0x2F15C8u;
            goto label_2f15c8;
        }
    }
    ctx->pc = 0x2F15C4u;
label_2f15c4:
    // 0x2f15c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f15c8:
    // 0x2f15c8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2f15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f15cc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F15CCu;
    {
        const bool branch_taken_0x2f15cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f15cc) {
            ctx->pc = 0x2F15D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15CCu;
            // 0x2f15d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F15E0u;
            goto label_2f15e0;
        }
    }
    ctx->pc = 0x2F15D4u;
    // 0x2f15d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f15d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f15d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F15D8u;
    {
        const bool branch_taken_0x2f15d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15D8u;
            // 0x2f15dc: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15d8) {
            ctx->pc = 0x2F15F8u;
            goto label_2f15f8;
        }
    }
    ctx->pc = 0x2F15E0u;
label_2f15e0:
    // 0x2f15e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f15e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f15e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f15e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f15e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f15e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f15ec: 0x0  nop
    ctx->pc = 0x2f15ecu;
    // NOP
    // 0x2f15f0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x2f15f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2f15f4: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x2f15f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2f15f8:
    // 0x2f15f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f15f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f15fc: 0x0  nop
    ctx->pc = 0x2f15fcu;
    // NOP
    // 0x2f1600: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2f1600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1604: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1604u;
    {
        const bool branch_taken_0x2f1604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1604) {
            ctx->pc = 0x2F1608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1604u;
            // 0x2f1608: 0x204082b  sltu        $at, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1614u;
            goto label_2f1614;
        }
    }
    ctx->pc = 0x2F160Cu;
    // 0x2f160c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F160Cu;
    {
        const bool branch_taken_0x2f160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F160Cu;
            // 0x2f1610: 0x4600b000  add.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f160c) {
            ctx->pc = 0x2F1698u;
            goto label_2f1698;
        }
    }
    ctx->pc = 0x2F1614u;
label_2f1614:
    // 0x2f1614: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1614u;
    {
        const bool branch_taken_0x2f1614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1614) {
            ctx->pc = 0x2F1624u;
            goto label_2f1624;
        }
    }
    ctx->pc = 0x2F161Cu;
    // 0x2f161c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F161Cu;
    {
        const bool branch_taken_0x2f161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F161Cu;
            // 0x2f1620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f161c) {
            ctx->pc = 0x2F1648u;
            goto label_2f1648;
        }
    }
    ctx->pc = 0x2F1624u;
label_2f1624:
    // 0x2f1624: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f1624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f1628: 0x8c421cf0  lw          $v0, 0x1CF0($v0)
    ctx->pc = 0x2f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7408)));
    // 0x2f162c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2f162cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2f1630: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1630u;
    {
        const bool branch_taken_0x2f1630 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1630) {
            ctx->pc = 0x2F1634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1630u;
            // 0x2f1634: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1644u;
            goto label_2f1644;
        }
    }
    ctx->pc = 0x2F1638u;
    // 0x2f1638: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x2f1638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f163c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F163Cu;
    {
        const bool branch_taken_0x2f163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F163Cu;
            // 0x2f1640: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f163c) {
            ctx->pc = 0x2F1648u;
            goto label_2f1648;
        }
    }
    ctx->pc = 0x2F1644u;
label_2f1644:
    // 0x2f1644: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x2f1644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f1648:
    // 0x2f1648: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x2f1648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2f164c: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x2f164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f1650: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f1650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1654: 0xc0bc498  jal         func_2F1260
    ctx->pc = 0x2F1654u;
    SET_GPR_U32(ctx, 31, 0x2F165Cu);
    ctx->pc = 0x2F1658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1654u;
            // 0x2f1658: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1260u;
    goto label_2f1260;
    ctx->pc = 0x2F165Cu;
label_2f165c:
    // 0x2f165c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F165Cu;
    {
        const bool branch_taken_0x2f165c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2f165c) {
            ctx->pc = 0x2F1660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F165Cu;
            // 0x2f1660: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1670u;
            goto label_2f1670;
        }
    }
    ctx->pc = 0x2F1664u;
    // 0x2f1664: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2f1664u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1668u;
    {
        const bool branch_taken_0x2f1668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1668u;
            // 0x2f166c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1668) {
            ctx->pc = 0x2F1688u;
            goto label_2f1688;
        }
    }
    ctx->pc = 0x2F1670u;
label_2f1670:
    // 0x2f1670: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2f1670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f1674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f1678: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f1678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f167c: 0x0  nop
    ctx->pc = 0x2f167cu;
    // NOP
    // 0x2f1680: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f1680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f1684: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f1684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f1688:
    // 0x2f1688: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2f1688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2f168c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f168cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1690: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x2f1690u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x2f1694: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x2f1694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2f1698:
    // 0x2f1698: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f169c:
    // 0x2f169c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2f169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f16a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f16a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f16a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f16a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f16a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f16ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f16b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f16b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f16b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f16b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f16b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F16B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F16BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16B8u;
            // 0x2f16bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F16C0u;
}
