#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A1300
// Address: 0x4a1300 - 0x4a1490
void sub_004A1300_0x4a1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1300_0x4a1300");
#endif

    switch (ctx->pc) {
        case 0x4a131cu: goto label_4a131c;
        case 0x4a133cu: goto label_4a133c;
        case 0x4a1384u: goto label_4a1384;
        case 0x4a13a0u: goto label_4a13a0;
        case 0x4a13c0u: goto label_4a13c0;
        case 0x4a1420u: goto label_4a1420;
        case 0x4a142cu: goto label_4a142c;
        case 0x4a1438u: goto label_4a1438;
        case 0x4a1444u: goto label_4a1444;
        case 0x4a1450u: goto label_4a1450;
        case 0x4a145cu: goto label_4a145c;
        case 0x4a1474u: goto label_4a1474;
        default: break;
    }

    ctx->pc = 0x4a1300u;

    // 0x4a1300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a1304: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4a1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4a1308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a130c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4a130cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4a1310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a1310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a1314: 0xc12855c  jal         func_4A1570
    ctx->pc = 0x4A1314u;
    SET_GPR_U32(ctx, 31, 0x4A131Cu);
    ctx->pc = 0x4A1318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1314u;
            // 0x4a1318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A1570u;
    if (runtime->hasFunction(0x4A1570u)) {
        auto targetFn = runtime->lookupFunction(0x4A1570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A131Cu; }
        if (ctx->pc != 0x4A131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A1570_0x4a1570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A131Cu; }
        if (ctx->pc != 0x4A131Cu) { return; }
    }
    ctx->pc = 0x4A131Cu;
label_4a131c:
    // 0x4a131c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a131cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a1320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a1320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a1324: 0x24630330  addiu       $v1, $v1, 0x330
    ctx->pc = 0x4a1324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x4a1328: 0x24420368  addiu       $v0, $v0, 0x368
    ctx->pc = 0x4a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 872));
    // 0x4a132c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a132cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1334: 0xc128558  jal         func_4A1560
    ctx->pc = 0x4A1334u;
    SET_GPR_U32(ctx, 31, 0x4A133Cu);
    ctx->pc = 0x4A1338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1334u;
            // 0x4a1338: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A1560u;
    if (runtime->hasFunction(0x4A1560u)) {
        auto targetFn = runtime->lookupFunction(0x4A1560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A133Cu; }
        if (ctx->pc != 0x4A133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A1560_0x4a1560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A133Cu; }
        if (ctx->pc != 0x4A133Cu) { return; }
    }
    ctx->pc = 0x4A133Cu;
label_4a133c:
    // 0x4a133c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a133cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4a1340: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x4a1340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x4a1344: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a1348: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4a1348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4a134c: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x4a134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x4a1350: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4a1350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a1354: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a1354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a1358: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a135c: 0x24420218  addiu       $v0, $v0, 0x218
    ctx->pc = 0x4a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
    // 0x4a1360: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4a1360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4a1364: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x4a1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x4a1368: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4a1368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4a136c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4a136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4a1370: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4a1374: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4a1374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4a1378: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4a1378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4a137c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4A137Cu;
    SET_GPR_U32(ctx, 31, 0x4A1384u);
    ctx->pc = 0x4A1380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A137Cu;
            // 0x4a1380: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1384u; }
        if (ctx->pc != 0x4A1384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1384u; }
        if (ctx->pc != 0x4A1384u) { return; }
    }
    ctx->pc = 0x4A1384u;
label_4a1384:
    // 0x4a1384: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4a1384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4a1388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a1388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a138c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A138Cu;
    {
        const bool branch_taken_0x4a138c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A138Cu;
            // 0x4a1390: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a138c) {
            ctx->pc = 0x4A13A4u;
            goto label_4a13a4;
        }
    }
    ctx->pc = 0x4A1394u;
    // 0x4a1394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a1394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4a1398: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4A1398u;
    SET_GPR_U32(ctx, 31, 0x4A13A0u);
    ctx->pc = 0x4A139Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1398u;
            // 0x4a139c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A13A0u; }
        if (ctx->pc != 0x4A13A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A13A0u; }
        if (ctx->pc != 0x4A13A0u) { return; }
    }
    ctx->pc = 0x4A13A0u;
label_4a13a0:
    // 0x4a13a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a13a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a13a4:
    // 0x4a13a4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4a13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4a13a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a13a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a13ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a13acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a13b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a13b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a13b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A13B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A13B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A13B4u;
            // 0x4a13b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A13BCu;
    // 0x4a13bc: 0x0  nop
    ctx->pc = 0x4a13bcu;
    // NOP
label_4a13c0:
    // 0x4a13c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a13c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a13c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a13cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a13d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a13d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a13d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A13D4u;
    {
        const bool branch_taken_0x4a13d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A13D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A13D4u;
            // 0x4a13d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a13d4) {
            ctx->pc = 0x4A1474u;
            goto label_4a1474;
        }
    }
    ctx->pc = 0x4A13DCu;
    // 0x4a13dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a13e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a13e4: 0x24630330  addiu       $v1, $v1, 0x330
    ctx->pc = 0x4a13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x4a13e8: 0x24420368  addiu       $v0, $v0, 0x368
    ctx->pc = 0x4a13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 872));
    // 0x4a13ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a13f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A13F0u;
    {
        const bool branch_taken_0x4a13f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A13F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A13F0u;
            // 0x4a13f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a13f0) {
            ctx->pc = 0x4A145Cu;
            goto label_4a145c;
        }
    }
    ctx->pc = 0x4A13F8u;
    // 0x4a13f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a13fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a1400: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x4a1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x4a1404: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x4a1404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x4a1408: 0x24420318  addiu       $v0, $v0, 0x318
    ctx->pc = 0x4a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 792));
    // 0x4a140c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a140cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a1410: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4a1410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4a1414: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4a1414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4a1418: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4A1418u;
    SET_GPR_U32(ctx, 31, 0x4A1420u);
    ctx->pc = 0x4A141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1418u;
            // 0x4a141c: 0x24a50d50  addiu       $a1, $a1, 0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1420u; }
        if (ctx->pc != 0x4A1420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1420u; }
        if (ctx->pc != 0x4A1420u) { return; }
    }
    ctx->pc = 0x4A1420u;
label_4a1420:
    // 0x4a1420: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4a1420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4a1424: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4A1424u;
    SET_GPR_U32(ctx, 31, 0x4A142Cu);
    ctx->pc = 0x4A1428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1424u;
            // 0x4a1428: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A142Cu; }
        if (ctx->pc != 0x4A142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A142Cu; }
        if (ctx->pc != 0x4A142Cu) { return; }
    }
    ctx->pc = 0x4A142Cu;
label_4a142c:
    // 0x4a142c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4a142cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4a1430: 0xc12853c  jal         func_4A14F0
    ctx->pc = 0x4A1430u;
    SET_GPR_U32(ctx, 31, 0x4A1438u);
    ctx->pc = 0x4A1434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1430u;
            // 0x4a1434: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A14F0u;
    if (runtime->hasFunction(0x4A14F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1438u; }
        if (ctx->pc != 0x4A1438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A14F0_0x4a14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1438u; }
        if (ctx->pc != 0x4A1438u) { return; }
    }
    ctx->pc = 0x4A1438u;
label_4a1438:
    // 0x4a1438: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4a1438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4a143c: 0xc12853c  jal         func_4A14F0
    ctx->pc = 0x4A143Cu;
    SET_GPR_U32(ctx, 31, 0x4A1444u);
    ctx->pc = 0x4A1440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A143Cu;
            // 0x4a1440: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A14F0u;
    if (runtime->hasFunction(0x4A14F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1444u; }
        if (ctx->pc != 0x4A1444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A14F0_0x4a14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1444u; }
        if (ctx->pc != 0x4A1444u) { return; }
    }
    ctx->pc = 0x4A1444u;
label_4a1444:
    // 0x4a1444: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4a1444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4a1448: 0xc128524  jal         func_4A1490
    ctx->pc = 0x4A1448u;
    SET_GPR_U32(ctx, 31, 0x4A1450u);
    ctx->pc = 0x4A144Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1448u;
            // 0x4a144c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A1490u;
    if (runtime->hasFunction(0x4A1490u)) {
        auto targetFn = runtime->lookupFunction(0x4A1490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1450u; }
        if (ctx->pc != 0x4A1450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A1490_0x4a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1450u; }
        if (ctx->pc != 0x4A1450u) { return; }
    }
    ctx->pc = 0x4A1450u;
label_4a1450:
    // 0x4a1450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1454: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4A1454u;
    SET_GPR_U32(ctx, 31, 0x4A145Cu);
    ctx->pc = 0x4A1458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1454u;
            // 0x4a1458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A145Cu; }
        if (ctx->pc != 0x4A145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A145Cu; }
        if (ctx->pc != 0x4A145Cu) { return; }
    }
    ctx->pc = 0x4A145Cu;
label_4a145c:
    // 0x4a145c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4a145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4a1460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a1460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4a1464: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1464u;
    {
        const bool branch_taken_0x4a1464 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a1464) {
            ctx->pc = 0x4A1468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1464u;
            // 0x4a1468: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1478u;
            goto label_4a1478;
        }
    }
    ctx->pc = 0x4A146Cu;
    // 0x4a146c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A146Cu;
    SET_GPR_U32(ctx, 31, 0x4A1474u);
    ctx->pc = 0x4A1470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A146Cu;
            // 0x4a1470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1474u; }
        if (ctx->pc != 0x4A1474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1474u; }
        if (ctx->pc != 0x4A1474u) { return; }
    }
    ctx->pc = 0x4A1474u;
label_4a1474:
    // 0x4a1474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a1474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1478:
    // 0x4a1478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a1478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a147c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a147cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a1480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1484: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1484u;
            // 0x4a1488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A148Cu;
    // 0x4a148c: 0x0  nop
    ctx->pc = 0x4a148cu;
    // NOP
}
