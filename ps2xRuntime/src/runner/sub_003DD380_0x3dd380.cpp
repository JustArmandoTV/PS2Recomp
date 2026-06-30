#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DD380
// Address: 0x3dd380 - 0x3dd490
void sub_003DD380_0x3dd380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD380_0x3dd380");
#endif

    switch (ctx->pc) {
        case 0x3dd3b0u: goto label_3dd3b0;
        case 0x3dd3b4u: goto label_3dd3b4;
        case 0x3dd3f8u: goto label_3dd3f8;
        case 0x3dd424u: goto label_3dd424;
        case 0x3dd42cu: goto label_3dd42c;
        case 0x3dd438u: goto label_3dd438;
        case 0x3dd454u: goto label_3dd454;
        case 0x3dd460u: goto label_3dd460;
        default: break;
    }

    ctx->pc = 0x3dd380u;

    // 0x3dd380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dd380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dd384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dd384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3dd388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dd38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dd38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dd390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dd394: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x3dd394u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dd398: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x3DD398u;
    {
        const bool branch_taken_0x3dd398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD398u;
            // 0x3dd39c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd398) {
            ctx->pc = 0x3DD478u;
            goto label_3dd478;
        }
    }
    ctx->pc = 0x3DD3A0u;
    // 0x3dd3a0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3dd3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3dd3a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3dd3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3dd3a8: 0xc04a508  jal         func_129420
    ctx->pc = 0x3DD3A8u;
    SET_GPR_U32(ctx, 31, 0x3DD3B0u);
    ctx->pc = 0x3DD3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD3A8u;
            // 0x3dd3ac: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD3B0u; }
        if (ctx->pc != 0x3DD3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD3B0u; }
        if (ctx->pc != 0x3DD3B0u) { return; }
    }
    ctx->pc = 0x3DD3B0u;
label_3dd3b0:
    // 0x3dd3b0: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x3dd3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3dd3b4:
    // 0x3dd3b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3dd3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd3b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dd3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dd3bc: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x3dd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x3dd3c0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DD3C0u;
    {
        const bool branch_taken_0x3dd3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dd3c0) {
            ctx->pc = 0x3DD418u;
            goto label_3dd418;
        }
    }
    ctx->pc = 0x3DD3C8u;
    // 0x3dd3c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dd3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dd3cc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD3CCu;
    {
        const bool branch_taken_0x3dd3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dd3cc) {
            ctx->pc = 0x3DD3F0u;
            goto label_3dd3f0;
        }
    }
    ctx->pc = 0x3DD3D4u;
    // 0x3dd3d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD3D4u;
    {
        const bool branch_taken_0x3dd3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd3d4) {
            ctx->pc = 0x3DD3E8u;
            goto label_3dd3e8;
        }
    }
    ctx->pc = 0x3DD3DCu;
    // 0x3dd3dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DD3DCu;
    {
        const bool branch_taken_0x3dd3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd3dc) {
            ctx->pc = 0x3DD468u;
            goto label_3dd468;
        }
    }
    ctx->pc = 0x3DD3E4u;
    // 0x3dd3e4: 0x0  nop
    ctx->pc = 0x3dd3e4u;
    // NOP
label_3dd3e8:
    // 0x3dd3e8: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x3dd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x3dd3ec: 0x0  nop
    ctx->pc = 0x3dd3ecu;
    // NOP
label_3dd3f0:
    // 0x3dd3f0: 0xc0f7528  jal         func_3DD4A0
    ctx->pc = 0x3DD3F0u;
    SET_GPR_U32(ctx, 31, 0x3DD3F8u);
    ctx->pc = 0x3DD3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD3F0u;
            // 0x3dd3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4A0u;
    if (runtime->hasFunction(0x3DD4A0u)) {
        auto targetFn = runtime->lookupFunction(0x3DD4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD3F8u; }
        if (ctx->pc != 0x3DD3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD4A0_0x3dd4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD3F8u; }
        if (ctx->pc != 0x3DD3F8u) { return; }
    }
    ctx->pc = 0x3DD3F8u;
label_3dd3f8:
    // 0x3dd3f8: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x3dd3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x3dd3fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3dd3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3dd400: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3DD400u;
    {
        const bool branch_taken_0x3dd400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dd400) {
            ctx->pc = 0x3DD468u;
            goto label_3dd468;
        }
    }
    ctx->pc = 0x3DD408u;
    // 0x3dd408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dd408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dd40c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3DD40Cu;
    {
        const bool branch_taken_0x3dd40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD40Cu;
            // 0x3dd410: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd40c) {
            ctx->pc = 0x3DD468u;
            goto label_3dd468;
        }
    }
    ctx->pc = 0x3DD414u;
    // 0x3dd414: 0x0  nop
    ctx->pc = 0x3dd414u;
    // NOP
label_3dd418:
    // 0x3dd418: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x3dd418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x3dd41c: 0xc0f7524  jal         func_3DD490
    ctx->pc = 0x3DD41Cu;
    SET_GPR_U32(ctx, 31, 0x3DD424u);
    ctx->pc = 0x3DD420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD41Cu;
            // 0x3dd420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD490u;
    if (runtime->hasFunction(0x3DD490u)) {
        auto targetFn = runtime->lookupFunction(0x3DD490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD424u; }
        if (ctx->pc != 0x3DD424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD490_0x3dd490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD424u; }
        if (ctx->pc != 0x3DD424u) { return; }
    }
    ctx->pc = 0x3DD424u;
label_3dd424:
    // 0x3dd424: 0xc0d2344  jal         func_348D10
    ctx->pc = 0x3DD424u;
    SET_GPR_U32(ctx, 31, 0x3DD42Cu);
    ctx->pc = 0x3DD428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD424u;
            // 0x3dd428: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D10u;
    if (runtime->hasFunction(0x348D10u)) {
        auto targetFn = runtime->lookupFunction(0x348D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD42Cu; }
        if (ctx->pc != 0x3DD42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D10_0x348d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD42Cu; }
        if (ctx->pc != 0x3DD42Cu) { return; }
    }
    ctx->pc = 0x3DD42Cu;
label_3dd42c:
    // 0x3dd42c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dd42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd430: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3DD430u;
    SET_GPR_U32(ctx, 31, 0x3DD438u);
    ctx->pc = 0x3DD434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD430u;
            // 0x3dd434: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD438u; }
        if (ctx->pc != 0x3DD438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD438u; }
        if (ctx->pc != 0x3DD438u) { return; }
    }
    ctx->pc = 0x3DD438u;
label_3dd438:
    // 0x3dd438: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3dd438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd43c: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
    // 0x3dd440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd444: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3dd444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3dd448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3dd448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3dd44c: 0xc0d2340  jal         func_348D00
    ctx->pc = 0x3DD44Cu;
    SET_GPR_U32(ctx, 31, 0x3DD454u);
    ctx->pc = 0x3DD450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD44Cu;
            // 0x3dd450: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D00u;
    if (runtime->hasFunction(0x348D00u)) {
        auto targetFn = runtime->lookupFunction(0x348D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD454u; }
        if (ctx->pc != 0x3DD454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D00_0x348d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD454u; }
        if (ctx->pc != 0x3DD454u) { return; }
    }
    ctx->pc = 0x3DD454u;
label_3dd454:
    // 0x3dd454: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3dd454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3dd458: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3DD458u;
    SET_GPR_U32(ctx, 31, 0x3DD460u);
    ctx->pc = 0x3DD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD458u;
            // 0x3dd45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD460u; }
        if (ctx->pc != 0x3DD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD460u; }
        if (ctx->pc != 0x3DD460u) { return; }
    }
    ctx->pc = 0x3DD460u;
label_3dd460:
    // 0x3dd460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dd460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dd464: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x3dd464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_3dd468:
    // 0x3dd468: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3dd468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3dd46c: 0x1640ffd1  bnez        $s2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3DD46Cu;
    {
        const bool branch_taken_0x3dd46c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD46Cu;
            // 0x3dd470: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd46c) {
            ctx->pc = 0x3DD3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dd3b4;
        }
    }
    ctx->pc = 0x3DD474u;
    // 0x3dd474: 0x0  nop
    ctx->pc = 0x3dd474u;
    // NOP
label_3dd478:
    // 0x3dd478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dd478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd47c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd488: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD488u;
            // 0x3dd48c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD490u;
}
