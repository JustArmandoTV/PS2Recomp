#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1440
// Address: 0x1f1440 - 0x1f17e0
void sub_001F1440_0x1f1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1440_0x1f1440");
#endif

    switch (ctx->pc) {
        case 0x1f1460u: goto label_1f1460;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f1484u: goto label_1f1484;
        case 0x1f1498u: goto label_1f1498;
        case 0x1f14f0u: goto label_1f14f0;
        case 0x1f1518u: goto label_1f1518;
        case 0x1f15e0u: goto label_1f15e0;
        case 0x1f163cu: goto label_1f163c;
        case 0x1f16d0u: goto label_1f16d0;
        case 0x1f172cu: goto label_1f172c;
        case 0x1f1790u: goto label_1f1790;
        case 0x1f17b8u: goto label_1f17b8;
        default: break;
    }

    ctx->pc = 0x1f1440u;

    // 0x1f1440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f1444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f144c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f144cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1450: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x1f1450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1454: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f1454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f1458: 0xc07c4f0  jal         func_1F13C0
    ctx->pc = 0x1F1458u;
    SET_GPR_U32(ctx, 31, 0x1F1460u);
    ctx->pc = 0x1F145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1458u;
            // 0x1f145c: 0xa3a00051  sb          $zero, 0x51($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F13C0u;
    if (runtime->hasFunction(0x1F13C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1460u; }
        if (ctx->pc != 0x1F1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F13C0_0x1f13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1460u; }
        if (ctx->pc != 0x1F1460u) { return; }
    }
    ctx->pc = 0x1F1460u;
label_1f1460:
    // 0x1f1460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1464: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f1468: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f146c: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1F146Cu;
    SET_GPR_U32(ctx, 31, 0x1F1474u);
    ctx->pc = 0x1F1470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F146Cu;
            // 0x1f1470: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1474u; }
        if (ctx->pc != 0x1F1474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1474u; }
        if (ctx->pc != 0x1F1474u) { return; }
    }
    ctx->pc = 0x1F1474u;
label_1f1474:
    // 0x1f1474: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f1478: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1f1478u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f147c: 0xc07c500  jal         func_1F1400
    ctx->pc = 0x1F147Cu;
    SET_GPR_U32(ctx, 31, 0x1F1484u);
    ctx->pc = 0x1F1480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F147Cu;
            // 0x1f1480: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1400u;
    if (runtime->hasFunction(0x1F1400u)) {
        auto targetFn = runtime->lookupFunction(0x1F1400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1484u; }
        if (ctx->pc != 0x1F1484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1400_0x1f1400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1484u; }
        if (ctx->pc != 0x1F1484u) { return; }
    }
    ctx->pc = 0x1F1484u;
label_1f1484:
    // 0x1f1484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1488: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f148c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1490: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1F1490u;
    SET_GPR_U32(ctx, 31, 0x1F1498u);
    ctx->pc = 0x1F1494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1490u;
            // 0x1f1494: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1498u; }
        if (ctx->pc != 0x1F1498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1498u; }
        if (ctx->pc != 0x1F1498u) { return; }
    }
    ctx->pc = 0x1F1498u;
label_1f1498:
    // 0x1f1498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f149c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f149cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f14a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F14A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F14A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14A0u;
            // 0x1f14a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F14A8u;
    // 0x1f14a8: 0x0  nop
    ctx->pc = 0x1f14a8u;
    // NOP
    // 0x1f14ac: 0x0  nop
    ctx->pc = 0x1f14acu;
    // NOP
    // 0x1f14b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f14b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f14b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f14b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f14bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f14bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f14c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f14c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f14c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f14c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f14c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f14cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f14ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f14d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f14d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f14d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f14d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f14dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f14dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f14e4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f14e8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1F14E8u;
    SET_GPR_U32(ctx, 31, 0x1F14F0u);
    ctx->pc = 0x1F14ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14E8u;
            // 0x1f14ec: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F14F0u; }
        if (ctx->pc != 0x1F14F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F14F0u; }
        if (ctx->pc != 0x1F14F0u) { return; }
    }
    ctx->pc = 0x1F14F0u;
label_1f14f0:
    // 0x1f14f0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f14f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f14f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14f8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F14F8u;
    {
        const bool branch_taken_0x1f14f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F14FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14F8u;
            // 0x1f14fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14f8) {
            ctx->pc = 0x1F1530u;
            goto label_1f1530;
        }
    }
    ctx->pc = 0x1F1500u;
    // 0x1f1500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1504: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f1504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1508: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f1508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f150c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f150cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1510: 0xc07c5f8  jal         func_1F17E0
    ctx->pc = 0x1F1510u;
    SET_GPR_U32(ctx, 31, 0x1F1518u);
    ctx->pc = 0x1F1514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1510u;
            // 0x1f1514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F17E0u;
    if (runtime->hasFunction(0x1F17E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F17E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1518u; }
        if (ctx->pc != 0x1F1518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F17E0_0x1f17e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1518u; }
        if (ctx->pc != 0x1F1518u) { return; }
    }
    ctx->pc = 0x1F1518u;
label_1f1518:
    // 0x1f1518: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f1518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f151c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f151cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f1520: 0x2463dae0  addiu       $v1, $v1, -0x2520
    ctx->pc = 0x1f1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957792));
    // 0x1f1524: 0x2442daa0  addiu       $v0, $v0, -0x2560
    ctx->pc = 0x1f1524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957728));
    // 0x1f1528: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f1528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f152c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f1530:
    // 0x1f1530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f1530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1534: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f1534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f1538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f153c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f153cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f154c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F154Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F154Cu;
            // 0x1f1550: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1554u;
    // 0x1f1554: 0x0  nop
    ctx->pc = 0x1f1554u;
    // NOP
    // 0x1f1558: 0x0  nop
    ctx->pc = 0x1f1558u;
    // NOP
    // 0x1f155c: 0x0  nop
    ctx->pc = 0x1f155cu;
    // NOP
    // 0x1f1560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f1564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f1568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f156c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f1570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1574: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F1574u;
    {
        const bool branch_taken_0x1f1574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1574u;
            // 0x1f1578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1574) {
            ctx->pc = 0x1F163Cu;
            goto label_1f163c;
        }
    }
    ctx->pc = 0x1F157Cu;
    // 0x1f157c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f1580: 0x2442dae0  addiu       $v0, $v0, -0x2520
    ctx->pc = 0x1f1580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957792));
    // 0x1f1584: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1584u;
    {
        const bool branch_taken_0x1f1584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1584u;
            // 0x1f1588: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1584) {
            ctx->pc = 0x1F1614u;
            goto label_1f1614;
        }
    }
    ctx->pc = 0x1F158Cu;
    // 0x1f158c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f1590: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1f1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f1594: 0x2463da60  addiu       $v1, $v1, -0x25A0
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957664));
    // 0x1f1598: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1598u;
    {
        const bool branch_taken_0x1f1598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1598u;
            // 0x1f159c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1598) {
            ctx->pc = 0x1F15E0u;
            goto label_1f15e0;
        }
    }
    ctx->pc = 0x1F15A0u;
    // 0x1f15a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F15A0u;
    {
        const bool branch_taken_0x1f15a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15a0) {
            ctx->pc = 0x1F15E0u;
            goto label_1f15e0;
        }
    }
    ctx->pc = 0x1F15A8u;
    // 0x1f15a8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f15ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f15b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f15b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f15b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F15B4u;
    {
        const bool branch_taken_0x1f15b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f15b4) {
            ctx->pc = 0x1F15E0u;
            goto label_1f15e0;
        }
    }
    ctx->pc = 0x1F15BCu;
    // 0x1f15bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f15c0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f15c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f15c8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1f15c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f15cc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1f15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f15d0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f15d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1f15d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f15d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1f15d8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F15D8u;
    SET_GPR_U32(ctx, 31, 0x1F15E0u);
    ctx->pc = 0x1F15DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15D8u;
            // 0x1f15dc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15E0u; }
        if (ctx->pc != 0x1F15E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15E0u; }
        if (ctx->pc != 0x1F15E0u) { return; }
    }
    ctx->pc = 0x1F15E0u;
label_1f15e0:
    // 0x1f15e0: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F15E0u;
    {
        const bool branch_taken_0x1f15e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15e0) {
            ctx->pc = 0x1F15E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15E0u;
            // 0x1f15e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1618u;
            goto label_1f1618;
        }
    }
    ctx->pc = 0x1F15E8u;
    // 0x1f15e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f15ec: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f15f0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F15F0u;
    {
        const bool branch_taken_0x1f15f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15F0u;
            // 0x1f15f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15f0) {
            ctx->pc = 0x1F1614u;
            goto label_1f1614;
        }
    }
    ctx->pc = 0x1F15F8u;
    // 0x1f15f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f15fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f1600: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1600u;
    {
        const bool branch_taken_0x1f1600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1600u;
            // 0x1f1604: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1600) {
            ctx->pc = 0x1F1614u;
            goto label_1f1614;
        }
    }
    ctx->pc = 0x1F1608u;
    // 0x1f1608: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f160c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f1610: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f1610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f1614:
    // 0x1f1614: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1f1614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1f1618:
    // 0x1f1618: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f1618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f161c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F161Cu;
    {
        const bool branch_taken_0x1f161c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f161c) {
            ctx->pc = 0x1F1620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F161Cu;
            // 0x1f1620: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1640u;
            goto label_1f1640;
        }
    }
    ctx->pc = 0x1F1624u;
    // 0x1f1624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f1624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f1628: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1f1628u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f162c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f1630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1634: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F1634u;
    SET_GPR_U32(ctx, 31, 0x1F163Cu);
    ctx->pc = 0x1F1638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1634u;
            // 0x1f1638: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F163Cu; }
        if (ctx->pc != 0x1F163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F163Cu; }
        if (ctx->pc != 0x1F163Cu) { return; }
    }
    ctx->pc = 0x1F163Cu;
label_1f163c:
    // 0x1f163c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f163cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1640:
    // 0x1f1640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f1640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f164c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F164Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F164Cu;
            // 0x1f1650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1654u;
    // 0x1f1654: 0x0  nop
    ctx->pc = 0x1f1654u;
    // NOP
    // 0x1f1658: 0x0  nop
    ctx->pc = 0x1f1658u;
    // NOP
    // 0x1f165c: 0x0  nop
    ctx->pc = 0x1f165cu;
    // NOP
    // 0x1f1660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f1668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f166c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f1670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1674: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F1674u;
    {
        const bool branch_taken_0x1f1674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1674u;
            // 0x1f1678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1674) {
            ctx->pc = 0x1F172Cu;
            goto label_1f172c;
        }
    }
    ctx->pc = 0x1F167Cu;
    // 0x1f167c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f1680: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f1684: 0x2463da60  addiu       $v1, $v1, -0x25A0
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957664));
    // 0x1f1688: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1688u;
    {
        const bool branch_taken_0x1f1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1688u;
            // 0x1f168c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1688) {
            ctx->pc = 0x1F16D0u;
            goto label_1f16d0;
        }
    }
    ctx->pc = 0x1F1690u;
    // 0x1f1690: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1690u;
    {
        const bool branch_taken_0x1f1690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1690) {
            ctx->pc = 0x1F16D0u;
            goto label_1f16d0;
        }
    }
    ctx->pc = 0x1F1698u;
    // 0x1f1698: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f169c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f16a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f16a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f16a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F16A4u;
    {
        const bool branch_taken_0x1f16a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16a4) {
            ctx->pc = 0x1F16D0u;
            goto label_1f16d0;
        }
    }
    ctx->pc = 0x1F16ACu;
    // 0x1f16ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f16acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f16b0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f16b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f16b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f16b8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f16bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1f16bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f16c0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f16c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1f16c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1f16c8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F16C8u;
    SET_GPR_U32(ctx, 31, 0x1F16D0u);
    ctx->pc = 0x1F16CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16C8u;
            // 0x1f16cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F16D0u; }
        if (ctx->pc != 0x1F16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F16D0u; }
        if (ctx->pc != 0x1F16D0u) { return; }
    }
    ctx->pc = 0x1F16D0u;
label_1f16d0:
    // 0x1f16d0: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F16D0u;
    {
        const bool branch_taken_0x1f16d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f16d0) {
            ctx->pc = 0x1F16D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16D0u;
            // 0x1f16d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1708u;
            goto label_1f1708;
        }
    }
    ctx->pc = 0x1F16D8u;
    // 0x1f16d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f16dc: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f16e0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F16E0u;
    {
        const bool branch_taken_0x1f16e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16E0u;
            // 0x1f16e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16e0) {
            ctx->pc = 0x1F1704u;
            goto label_1f1704;
        }
    }
    ctx->pc = 0x1F16E8u;
    // 0x1f16e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f16e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f16ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f16f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F16F0u;
    {
        const bool branch_taken_0x1f16f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16F0u;
            // 0x1f16f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16f0) {
            ctx->pc = 0x1F1704u;
            goto label_1f1704;
        }
    }
    ctx->pc = 0x1F16F8u;
    // 0x1f16f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f16fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f1700: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f1700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f1704:
    // 0x1f1704: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1f1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1f1708:
    // 0x1f1708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f1708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f170c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F170Cu;
    {
        const bool branch_taken_0x1f170c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f170c) {
            ctx->pc = 0x1F1710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F170Cu;
            // 0x1f1710: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1730u;
            goto label_1f1730;
        }
    }
    ctx->pc = 0x1F1714u;
    // 0x1f1714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f1718: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1f1718u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f171c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f171cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f1720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1724: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F1724u;
    SET_GPR_U32(ctx, 31, 0x1F172Cu);
    ctx->pc = 0x1F1728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1724u;
            // 0x1f1728: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F172Cu; }
        if (ctx->pc != 0x1F172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F172Cu; }
        if (ctx->pc != 0x1F172Cu) { return; }
    }
    ctx->pc = 0x1F172Cu;
label_1f172c:
    // 0x1f172c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1730:
    // 0x1f1730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f1730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f173c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F173Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F173Cu;
            // 0x1f1740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1744u;
    // 0x1f1744: 0x0  nop
    ctx->pc = 0x1f1744u;
    // NOP
    // 0x1f1748: 0x0  nop
    ctx->pc = 0x1f1748u;
    // NOP
    // 0x1f174c: 0x0  nop
    ctx->pc = 0x1f174cu;
    // NOP
    // 0x1f1750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f1754: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f1754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f1758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f1758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f175c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f1760: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f1760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f1764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f1768: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f1768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f176c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f1770: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f1770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f1778: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f1778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f177c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f1780: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f1780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1784: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f1788: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1F1788u;
    SET_GPR_U32(ctx, 31, 0x1F1790u);
    ctx->pc = 0x1F178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1788u;
            // 0x1f178c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1790u; }
        if (ctx->pc != 0x1F1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1790u; }
        if (ctx->pc != 0x1F1790u) { return; }
    }
    ctx->pc = 0x1F1790u;
label_1f1790:
    // 0x1f1790: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f1794: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f1794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1798: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1798u;
    {
        const bool branch_taken_0x1f1798 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1798u;
            // 0x1f179c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1798) {
            ctx->pc = 0x1F17B8u;
            goto label_1f17b8;
        }
    }
    ctx->pc = 0x1F17A0u;
    // 0x1f17a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f17a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f17a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f17a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f17acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17b0: 0xc07c5f8  jal         func_1F17E0
    ctx->pc = 0x1F17B0u;
    SET_GPR_U32(ctx, 31, 0x1F17B8u);
    ctx->pc = 0x1F17B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17B0u;
            // 0x1f17b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F17E0u;
    if (runtime->hasFunction(0x1F17E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F17E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17B8u; }
        if (ctx->pc != 0x1F17B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F17E0_0x1f17e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17B8u; }
        if (ctx->pc != 0x1F17B8u) { return; }
    }
    ctx->pc = 0x1F17B8u;
label_1f17b8:
    // 0x1f17b8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1f17b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f17bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f17c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f17c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f17c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f17c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f17c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f17c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f17cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f17ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f17d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f17d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f17d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F17D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F17D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17D4u;
            // 0x1f17d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F17DCu;
    // 0x1f17dc: 0x0  nop
    ctx->pc = 0x1f17dcu;
    // NOP
}
