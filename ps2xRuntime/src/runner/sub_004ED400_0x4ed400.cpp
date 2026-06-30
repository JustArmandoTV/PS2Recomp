#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED400
// Address: 0x4ed400 - 0x4ed630
void sub_004ED400_0x4ed400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED400_0x4ed400");
#endif

    switch (ctx->pc) {
        case 0x4ed434u: goto label_4ed434;
        case 0x4ed454u: goto label_4ed454;
        case 0x4ed468u: goto label_4ed468;
        case 0x4ed484u: goto label_4ed484;
        case 0x4ed4b0u: goto label_4ed4b0;
        case 0x4ed51cu: goto label_4ed51c;
        case 0x4ed524u: goto label_4ed524;
        case 0x4ed52cu: goto label_4ed52c;
        case 0x4ed544u: goto label_4ed544;
        case 0x4ed54cu: goto label_4ed54c;
        case 0x4ed55cu: goto label_4ed55c;
        case 0x4ed590u: goto label_4ed590;
        case 0x4ed5a4u: goto label_4ed5a4;
        case 0x4ed5b8u: goto label_4ed5b8;
        case 0x4ed5ccu: goto label_4ed5cc;
        case 0x4ed5f8u: goto label_4ed5f8;
        case 0x4ed600u: goto label_4ed600;
        case 0x4ed608u: goto label_4ed608;
        default: break;
    }

    ctx->pc = 0x4ed400u;

    // 0x4ed400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ed408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ed410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ed410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed414: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ed414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed418: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4ed418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4ed41c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ed41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4ed420: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ed420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ed424: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ed424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4ed428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4ed428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4ed42c: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4ED42Cu;
    SET_GPR_U32(ctx, 31, 0x4ED434u);
    ctx->pc = 0x4ED430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED42Cu;
            // 0x4ed430: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED434u; }
        if (ctx->pc != 0x4ED434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED434u; }
        if (ctx->pc != 0x4ED434u) { return; }
    }
    ctx->pc = 0x4ED434u;
label_4ed434:
    // 0x4ed434: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4ed434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4ed438: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x4ed438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x4ed43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ed43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed440: 0x24a5d4d0  addiu       $a1, $a1, -0x2B30
    ctx->pc = 0x4ed440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956240));
    // 0x4ed444: 0x24c68910  addiu       $a2, $a2, -0x76F0
    ctx->pc = 0x4ed444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936848));
    // 0x4ed448: 0x24070250  addiu       $a3, $zero, 0x250
    ctx->pc = 0x4ed448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x4ed44c: 0xc040840  jal         func_102100
    ctx->pc = 0x4ED44Cu;
    SET_GPR_U32(ctx, 31, 0x4ED454u);
    ctx->pc = 0x4ED450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED44Cu;
            // 0x4ed450: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED454u; }
        if (ctx->pc != 0x4ED454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED454u; }
        if (ctx->pc != 0x4ED454u) { return; }
    }
    ctx->pc = 0x4ED454u;
label_4ed454:
    // 0x4ed454: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4ed454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4ed458: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4ed458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4ed45c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ed45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4ed460: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4ED460u;
    SET_GPR_U32(ctx, 31, 0x4ED468u);
    ctx->pc = 0x4ED464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED460u;
            // 0x4ed464: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED468u; }
        if (ctx->pc != 0x4ED468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED468u; }
        if (ctx->pc != 0x4ED468u) { return; }
    }
    ctx->pc = 0x4ED468u;
label_4ed468:
    // 0x4ed468: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x4ed468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x4ed46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ed46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed470: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4ed470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4ed474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ed474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed478: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ed478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4ed47c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4ED47Cu;
    SET_GPR_U32(ctx, 31, 0x4ED484u);
    ctx->pc = 0x4ED480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED47Cu;
            // 0x4ed480: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED484u; }
        if (ctx->pc != 0x4ED484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED484u; }
        if (ctx->pc != 0x4ED484u) { return; }
    }
    ctx->pc = 0x4ED484u;
label_4ed484:
    // 0x4ed484: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4ed484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x4ed488: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4ed488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4ed48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ed48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed490: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4ed490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ed494: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4ed494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ed498: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x4ed498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x4ed49c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x4ed49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x4ed4a0: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x4ed4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x4ed4a4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4ed4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4ed4a8: 0xc13b5a4  jal         func_4ED690
    ctx->pc = 0x4ED4A8u;
    SET_GPR_U32(ctx, 31, 0x4ED4B0u);
    ctx->pc = 0x4ED4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED4A8u;
            // 0x4ed4ac: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED690u;
    if (runtime->hasFunction(0x4ED690u)) {
        auto targetFn = runtime->lookupFunction(0x4ED690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED4B0u; }
        if (ctx->pc != 0x4ED4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED690_0x4ed690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED4B0u; }
        if (ctx->pc != 0x4ED4B0u) { return; }
    }
    ctx->pc = 0x4ED4B0u;
label_4ed4b0:
    // 0x4ed4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed4b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED4BCu;
            // 0x4ed4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED4C4u;
    // 0x4ed4c4: 0x0  nop
    ctx->pc = 0x4ed4c4u;
    // NOP
    // 0x4ed4c8: 0x0  nop
    ctx->pc = 0x4ed4c8u;
    // NOP
    // 0x4ed4cc: 0x0  nop
    ctx->pc = 0x4ed4ccu;
    // NOP
    // 0x4ed4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ed4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ed4d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ed4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ed4d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ed4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ed4dc: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x4ed4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x4ed4e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ed4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ed4e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ed4ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ed4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ed4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ed4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed4f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ed4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ed4f8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x4ed4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4ed4fc: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x4ed4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x4ed500: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x4ed500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4ed504: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x4ed504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x4ed508: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x4ed508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x4ed50c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x4ed50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x4ed510: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x4ed510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ed514: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED514u;
    SET_GPR_U32(ctx, 31, 0x4ED51Cu);
    ctx->pc = 0x4ED518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED514u;
            // 0x4ed518: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED51Cu; }
        if (ctx->pc != 0x4ED51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED51Cu; }
        if (ctx->pc != 0x4ED51Cu) { return; }
    }
    ctx->pc = 0x4ED51Cu;
label_4ed51c:
    // 0x4ed51c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED51Cu;
    SET_GPR_U32(ctx, 31, 0x4ED524u);
    ctx->pc = 0x4ED520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED51Cu;
            // 0x4ed520: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED524u; }
        if (ctx->pc != 0x4ED524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED524u; }
        if (ctx->pc != 0x4ED524u) { return; }
    }
    ctx->pc = 0x4ED524u;
label_4ed524:
    // 0x4ed524: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED524u;
    SET_GPR_U32(ctx, 31, 0x4ED52Cu);
    ctx->pc = 0x4ED528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED524u;
            // 0x4ed528: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED52Cu; }
        if (ctx->pc != 0x4ED52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED52Cu; }
        if (ctx->pc != 0x4ED52Cu) { return; }
    }
    ctx->pc = 0x4ED52Cu;
label_4ed52c:
    // 0x4ed52c: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x4ed52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x4ed530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ed530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed534: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x4ed534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x4ed538: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x4ed538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x4ed53c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x4ED53Cu;
    SET_GPR_U32(ctx, 31, 0x4ED544u);
    ctx->pc = 0x4ED540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED53Cu;
            // 0x4ed540: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED544u; }
        if (ctx->pc != 0x4ED544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED544u; }
        if (ctx->pc != 0x4ED544u) { return; }
    }
    ctx->pc = 0x4ED544u;
label_4ed544:
    // 0x4ed544: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED544u;
    SET_GPR_U32(ctx, 31, 0x4ED54Cu);
    ctx->pc = 0x4ED548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED544u;
            // 0x4ed548: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED54Cu; }
        if (ctx->pc != 0x4ED54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED54Cu; }
        if (ctx->pc != 0x4ED54Cu) { return; }
    }
    ctx->pc = 0x4ED54Cu;
label_4ed54c:
    // 0x4ed54c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ed54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4ed550: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x4ed550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4ed554: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4ED554u;
    SET_GPR_U32(ctx, 31, 0x4ED55Cu);
    ctx->pc = 0x4ED558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED554u;
            // 0x4ed558: 0x24a58810  addiu       $a1, $a1, -0x77F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED55Cu; }
        if (ctx->pc != 0x4ED55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED55Cu; }
        if (ctx->pc != 0x4ED55Cu) { return; }
    }
    ctx->pc = 0x4ED55Cu;
label_4ed55c:
    // 0x4ed55c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x4ed55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x4ed560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ed560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ed564: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x4ed564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x4ed568: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ed568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ed56c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x4ed56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x4ed570: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x4ed570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x4ed574: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x4ed574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ed578: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ed578u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ed57c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x4ed57cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ed580: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4ed580u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4ed584: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x4ed584u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed588: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4ED588u;
    SET_GPR_U32(ctx, 31, 0x4ED590u);
    ctx->pc = 0x4ED58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED588u;
            // 0x4ed58c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED590u; }
        if (ctx->pc != 0x4ED590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED590u; }
        if (ctx->pc != 0x4ED590u) { return; }
    }
    ctx->pc = 0x4ED590u;
label_4ed590:
    // 0x4ed590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ed590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ed594: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x4ed594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x4ed598: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ed598u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ed59c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4ED59Cu;
    SET_GPR_U32(ctx, 31, 0x4ED5A4u);
    ctx->pc = 0x4ED5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED59Cu;
            // 0x4ed5a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5A4u; }
        if (ctx->pc != 0x4ED5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5A4u; }
        if (ctx->pc != 0x4ED5A4u) { return; }
    }
    ctx->pc = 0x4ED5A4u;
label_4ed5a4:
    // 0x4ed5a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ed5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ed5a8: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x4ed5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x4ed5ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ed5acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ed5b0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4ED5B0u;
    SET_GPR_U32(ctx, 31, 0x4ED5B8u);
    ctx->pc = 0x4ED5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED5B0u;
            // 0x4ed5b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5B8u; }
        if (ctx->pc != 0x4ED5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5B8u; }
        if (ctx->pc != 0x4ED5B8u) { return; }
    }
    ctx->pc = 0x4ED5B8u;
label_4ed5b8:
    // 0x4ed5b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ed5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ed5bc: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x4ed5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x4ed5c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ed5c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ed5c4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4ED5C4u;
    SET_GPR_U32(ctx, 31, 0x4ED5CCu);
    ctx->pc = 0x4ED5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED5C4u;
            // 0x4ed5c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5CCu; }
        if (ctx->pc != 0x4ED5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5CCu; }
        if (ctx->pc != 0x4ED5CCu) { return; }
    }
    ctx->pc = 0x4ED5CCu;
label_4ed5cc:
    // 0x4ed5cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ed5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ed5d0: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x4ed5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x4ed5d4: 0x24422dd0  addiu       $v0, $v0, 0x2DD0
    ctx->pc = 0x4ed5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
    // 0x4ed5d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ed5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ed5dc: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x4ed5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x4ed5e0: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x4ed5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x4ed5e4: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x4ed5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x4ed5e8: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x4ed5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x4ed5ec: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x4ed5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x4ed5f0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED5F0u;
    SET_GPR_U32(ctx, 31, 0x4ED5F8u);
    ctx->pc = 0x4ED5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED5F0u;
            // 0x4ed5f4: 0xa2000228  sb          $zero, 0x228($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5F8u; }
        if (ctx->pc != 0x4ED5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED5F8u; }
        if (ctx->pc != 0x4ED5F8u) { return; }
    }
    ctx->pc = 0x4ED5F8u;
label_4ed5f8:
    // 0x4ed5f8: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED5F8u;
    SET_GPR_U32(ctx, 31, 0x4ED600u);
    ctx->pc = 0x4ED5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED5F8u;
            // 0x4ed5fc: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED600u; }
        if (ctx->pc != 0x4ED600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED600u; }
        if (ctx->pc != 0x4ED600u) { return; }
    }
    ctx->pc = 0x4ED600u;
label_4ed600:
    // 0x4ed600: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED600u;
    SET_GPR_U32(ctx, 31, 0x4ED608u);
    ctx->pc = 0x4ED604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED600u;
            // 0x4ed604: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED608u; }
        if (ctx->pc != 0x4ED608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED608u; }
        if (ctx->pc != 0x4ED608u) { return; }
    }
    ctx->pc = 0x4ED608u;
label_4ed608:
    // 0x4ed608: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x4ed608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x4ed60c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ed60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed610: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ed610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ed614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed61c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed620: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED620u;
            // 0x4ed624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED628u;
    // 0x4ed628: 0x0  nop
    ctx->pc = 0x4ed628u;
    // NOP
    // 0x4ed62c: 0x0  nop
    ctx->pc = 0x4ed62cu;
    // NOP
}
