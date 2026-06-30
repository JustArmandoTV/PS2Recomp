#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C3E0
// Address: 0x19c3e0 - 0x19c5c0
void sub_0019C3E0_0x19c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C3E0_0x19c3e0");
#endif

    switch (ctx->pc) {
        case 0x19c404u: goto label_19c404;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c454u: goto label_19c454;
        case 0x19c464u: goto label_19c464;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c500u: goto label_19c500;
        case 0x19c50cu: goto label_19c50c;
        case 0x19c518u: goto label_19c518;
        case 0x19c55cu: goto label_19c55c;
        case 0x19c590u: goto label_19c590;
        case 0x19c59cu: goto label_19c59c;
        default: break;
    }

    ctx->pc = 0x19c3e0u;

    // 0x19c3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c3e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19c3e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19c3f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19c3f4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x19c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x19c3f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c3fc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19C3FCu;
    SET_GPR_U32(ctx, 31, 0x19C404u);
    ctx->pc = 0x19C400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3FCu;
            // 0x19c400: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C404u; }
        if (ctx->pc != 0x19C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C404u; }
        if (ctx->pc != 0x19C404u) { return; }
    }
    ctx->pc = 0x19C404u;
label_19c404:
    // 0x19c404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19c404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c40c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C40Cu;
    {
        const bool branch_taken_0x19c40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C40Cu;
            // 0x19c410: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c40c) {
            ctx->pc = 0x19C428u;
            goto label_19c428;
        }
    }
    ctx->pc = 0x19C414u;
    // 0x19c414: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19C414u;
    SET_GPR_U32(ctx, 31, 0x19C41Cu);
    ctx->pc = 0x19C418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C414u;
            // 0x19c418: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C41Cu; }
        if (ctx->pc != 0x19C41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C41Cu; }
        if (ctx->pc != 0x19C41Cu) { return; }
    }
    ctx->pc = 0x19C41Cu;
label_19c41c:
    // 0x19c41c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19C41Cu;
    {
        const bool branch_taken_0x19c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C41Cu;
            // 0x19c420: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c41c) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C424u;
    // 0x19c424: 0x0  nop
    ctx->pc = 0x19c424u;
    // NOP
label_19c428:
    // 0x19c428: 0x82020082  lb          $v0, 0x82($s0)
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x19c42c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C42Cu;
    {
        const bool branch_taken_0x19c42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C42Cu;
            // 0x19c430: 0x8e130048  lw          $s3, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c42c) {
            ctx->pc = 0x19C43Cu;
            goto label_19c43c;
        }
    }
    ctx->pc = 0x19C434u;
    // 0x19c434: 0x5220003a  beql        $s1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x19C434u;
    {
        const bool branch_taken_0x19c434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c434) {
            ctx->pc = 0x19C438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C434u;
            // 0x19c438: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C43Cu;
label_19c43c:
    // 0x19c43c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C43Cu;
    {
        const bool branch_taken_0x19c43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c43c) {
            ctx->pc = 0x19C45Cu;
            goto label_19c45c;
        }
    }
    ctx->pc = 0x19C444u;
    // 0x19c444: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C444u;
    {
        const bool branch_taken_0x19c444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c444) {
            ctx->pc = 0x19C45Cu;
            goto label_19c45c;
        }
    }
    ctx->pc = 0x19C44Cu;
    // 0x19c44c: 0xc0670de  jal         func_19C378
    ctx->pc = 0x19C44Cu;
    SET_GPR_U32(ctx, 31, 0x19C454u);
    ctx->pc = 0x19C450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C44Cu;
            // 0x19c450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C378u;
    if (runtime->hasFunction(0x19C378u)) {
        auto targetFn = runtime->lookupFunction(0x19C378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C454u; }
        if (ctx->pc != 0x19C454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C378_0x19c378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C454u; }
        if (ctx->pc != 0x19C454u) { return; }
    }
    ctx->pc = 0x19C454u;
label_19c454:
    // 0x19c454: 0x54510032  bnel        $v0, $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x19C454u;
    {
        const bool branch_taken_0x19c454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x19c454) {
            ctx->pc = 0x19C458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C454u;
            // 0x19c458: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C45Cu;
label_19c45c:
    // 0x19c45c: 0xc066d3c  jal         func_19B4F0
    ctx->pc = 0x19C45Cu;
    SET_GPR_U32(ctx, 31, 0x19C464u);
    ctx->pc = 0x19B4F0u;
    if (runtime->hasFunction(0x19B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x19B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C464u; }
        if (ctx->pc != 0x19C464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B4F0_0x19b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C464u; }
        if (ctx->pc != 0x19C464u) { return; }
    }
    ctx->pc = 0x19C464u;
label_19c464:
    // 0x19c464: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19c464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c46c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19C46Cu;
    {
        const bool branch_taken_0x19c46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C46Cu;
            // 0x19c470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c46c) {
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C474u;
    // 0x19c474: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c478: 0x16430010  bne         $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19C478u;
    {
        const bool branch_taken_0x19c478 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c478) {
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C480u;
    // 0x19c480: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19c484: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x19C484u;
    SET_GPR_U32(ctx, 31, 0x19C48Cu);
    ctx->pc = 0x19C488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C484u;
            // 0x19c488: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C48Cu; }
        if (ctx->pc != 0x19C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5FD0_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C48Cu; }
        if (ctx->pc != 0x19C48Cu) { return; }
    }
    ctx->pc = 0x19C48Cu;
label_19c48c:
    // 0x19c48c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C48Cu;
    {
        const bool branch_taken_0x19c48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C48Cu;
            // 0x19c490: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c48c) {
            ctx->pc = 0x19C4B0u;
            goto label_19c4b0;
        }
    }
    ctx->pc = 0x19C494u;
    // 0x19c494: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C494u;
    {
        const bool branch_taken_0x19c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x19c494) {
            ctx->pc = 0x19C498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C494u;
            // 0x19c498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C49Cu;
    // 0x19c49c: 0xc068a48  jal         func_1A2920
    ctx->pc = 0x19C49Cu;
    SET_GPR_U32(ctx, 31, 0x19C4A4u);
    ctx->pc = 0x19C4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C49Cu;
            // 0x19c4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2920u;
    if (runtime->hasFunction(0x1A2920u)) {
        auto targetFn = runtime->lookupFunction(0x1A2920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4A4u; }
        if (ctx->pc != 0x19C4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2920_0x1a2920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4A4u; }
        if (ctx->pc != 0x19C4A4u) { return; }
    }
    ctx->pc = 0x19C4A4u;
label_19c4a4:
    // 0x19c4a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19C4A4u;
    {
        const bool branch_taken_0x19c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4A4u;
            // 0x19c4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4a4) {
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C4ACu;
    // 0x19c4ac: 0x0  nop
    ctx->pc = 0x19c4acu;
    // NOP
label_19c4b0:
    // 0x19c4b0: 0xc068a48  jal         func_1A2920
    ctx->pc = 0x19C4B0u;
    SET_GPR_U32(ctx, 31, 0x19C4B8u);
    ctx->pc = 0x19C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4B0u;
            // 0x19c4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2920u;
    if (runtime->hasFunction(0x1A2920u)) {
        auto targetFn = runtime->lookupFunction(0x1A2920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4B8u; }
        if (ctx->pc != 0x19C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2920_0x1a2920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4B8u; }
        if (ctx->pc != 0x19C4B8u) { return; }
    }
    ctx->pc = 0x19C4B8u;
label_19c4b8:
    // 0x19c4b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c4bc:
    // 0x19c4bc: 0xc06c848  jal         func_1B2120
    ctx->pc = 0x19C4BCu;
    SET_GPR_U32(ctx, 31, 0x19C4C4u);
    ctx->pc = 0x19C4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4BCu;
            // 0x19c4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2120u;
    if (runtime->hasFunction(0x1B2120u)) {
        auto targetFn = runtime->lookupFunction(0x1B2120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4C4u; }
        if (ctx->pc != 0x19C4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2120_0x1b2120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4C4u; }
        if (ctx->pc != 0x19C4C4u) { return; }
    }
    ctx->pc = 0x19C4C4u;
label_19c4c4:
    // 0x19c4c4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19C4C4u;
    {
        const bool branch_taken_0x19c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4c4) {
            ctx->pc = 0x19C4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4C4u;
            // 0x19c4c8: 0x260404f8  addiu       $a0, $s0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C504u;
            goto label_19c504;
        }
    }
    ctx->pc = 0x19C4CCu;
    // 0x19c4cc: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19C4CCu;
    SET_GPR_U32(ctx, 31, 0x19C4D4u);
    ctx->pc = 0x19C4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4CCu;
            // 0x19c4d0: 0x2404feca  addiu       $a0, $zero, -0x136 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966986));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4D4u; }
        if (ctx->pc != 0x19C4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4D4u; }
        if (ctx->pc != 0x19C4D4u) { return; }
    }
    ctx->pc = 0x19C4D4u;
label_19c4d4:
    // 0x19c4d4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x19c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x19c4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c4dc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C4DCu;
    {
        const bool branch_taken_0x19c4dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4DCu;
            // 0x19c4e0: 0x24649598  addiu       $a0, $v1, -0x6A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4dc) {
            ctx->pc = 0x19C4F0u;
            goto label_19c4f0;
        }
    }
    ctx->pc = 0x19C4E4u;
    // 0x19c4e4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x19c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x19c4e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19C4E8u;
    {
        const bool branch_taken_0x19c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4E8u;
            // 0x19c4ec: 0x244595c0  addiu       $a1, $v0, -0x6A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4e8) {
            ctx->pc = 0x19C4F8u;
            goto label_19c4f8;
        }
    }
    ctx->pc = 0x19C4F0u;
label_19c4f0:
    // 0x19c4f0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x19c4f4: 0x244595c8  addiu       $a1, $v0, -0x6A38
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940104));
label_19c4f8:
    // 0x19c4f8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19C4F8u;
    SET_GPR_U32(ctx, 31, 0x19C500u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C500u; }
        if (ctx->pc != 0x19C500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C500u; }
        if (ctx->pc != 0x19C500u) { return; }
    }
    ctx->pc = 0x19C500u;
label_19c500:
    // 0x19c500: 0x260404f8  addiu       $a0, $s0, 0x4F8
    ctx->pc = 0x19c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
label_19c504:
    // 0x19c504: 0xc0684d0  jal         func_1A1340
    ctx->pc = 0x19C504u;
    SET_GPR_U32(ctx, 31, 0x19C50Cu);
    ctx->pc = 0x19C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C504u;
            // 0x19c508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1340u;
    if (runtime->hasFunction(0x1A1340u)) {
        auto targetFn = runtime->lookupFunction(0x1A1340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C50Cu; }
        if (ctx->pc != 0x19C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1340_0x1a1340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C50Cu; }
        if (ctx->pc != 0x19C50Cu) { return; }
    }
    ctx->pc = 0x19C50Cu;
label_19c50c:
    // 0x19c50c: 0x2604051c  addiu       $a0, $s0, 0x51C
    ctx->pc = 0x19c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
    // 0x19c510: 0xc0684d0  jal         func_1A1340
    ctx->pc = 0x19C510u;
    SET_GPR_U32(ctx, 31, 0x19C518u);
    ctx->pc = 0x19C514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C510u;
            // 0x19c514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1340u;
    if (runtime->hasFunction(0x1A1340u)) {
        auto targetFn = runtime->lookupFunction(0x1A1340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C518u; }
        if (ctx->pc != 0x19C518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1340_0x1a1340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C518u; }
        if (ctx->pc != 0x19C518u) { return; }
    }
    ctx->pc = 0x19C518u;
label_19c518:
    // 0x19c518: 0xa2110082  sb          $s1, 0x82($s0)
    ctx->pc = 0x19c518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 17));
    // 0x19c51c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19c51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c520:
    // 0x19c520: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19c520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c524: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19c524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c528: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x19c528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19c52c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19c52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c530: 0x3e00008  jr          $ra
    ctx->pc = 0x19C530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C530u;
            // 0x19c534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C538u;
    // 0x19c538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c53c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c54c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19c550: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19c554: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19C554u;
    SET_GPR_U32(ctx, 31, 0x19C55Cu);
    ctx->pc = 0x19C558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C554u;
            // 0x19c558: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C55Cu; }
        if (ctx->pc != 0x19C55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C55Cu; }
        if (ctx->pc != 0x19C55Cu) { return; }
    }
    ctx->pc = 0x19C55Cu;
label_19c55c:
    // 0x19c55c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c560: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C560u;
    {
        const bool branch_taken_0x19c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C560u;
            // 0x19c564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c560) {
            ctx->pc = 0x19C588u;
            goto label_19c588;
        }
    }
    ctx->pc = 0x19C568u;
    // 0x19c568: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c574: 0x248495d0  addiu       $a0, $a0, -0x6A30
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940112));
    // 0x19c578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c57c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19c57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c580: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19C580u;
    ctx->pc = 0x19C584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C580u;
            // 0x19c584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C588u;
label_19c588:
    // 0x19c588: 0xc06785e  jal         func_19E178
    ctx->pc = 0x19C588u;
    SET_GPR_U32(ctx, 31, 0x19C590u);
    ctx->pc = 0x19E178u;
    if (runtime->hasFunction(0x19E178u)) {
        auto targetFn = runtime->lookupFunction(0x19E178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C590u; }
        if (ctx->pc != 0x19C590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E178_0x19e178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C590u; }
        if (ctx->pc != 0x19C590u) { return; }
    }
    ctx->pc = 0x19C590u;
label_19c590:
    // 0x19c590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c594: 0xc067054  jal         func_19C150
    ctx->pc = 0x19C594u;
    SET_GPR_U32(ctx, 31, 0x19C59Cu);
    ctx->pc = 0x19C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C594u;
            // 0x19c598: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C150u;
    if (runtime->hasFunction(0x19C150u)) {
        auto targetFn = runtime->lookupFunction(0x19C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C59Cu; }
        if (ctx->pc != 0x19C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C150_0x19c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C59Cu; }
        if (ctx->pc != 0x19C59Cu) { return; }
    }
    ctx->pc = 0x19C59Cu;
label_19c59c:
    // 0x19c59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c5a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19c5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c5b8: 0x80671d4  j           func_19C750
    ctx->pc = 0x19C5B8u;
    ctx->pc = 0x19C5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5B8u;
            // 0x19c5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C5C0u;
}
