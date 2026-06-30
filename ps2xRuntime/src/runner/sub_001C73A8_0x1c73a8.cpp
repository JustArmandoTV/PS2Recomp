#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C73A8
// Address: 0x1c73a8 - 0x1c7678
void sub_001C73A8_0x1c73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C73A8_0x1c73a8");
#endif

    switch (ctx->pc) {
        case 0x1c73b8u: goto label_1c73b8;
        case 0x1c73e8u: goto label_1c73e8;
        case 0x1c7438u: goto label_1c7438;
        case 0x1c7454u: goto label_1c7454;
        case 0x1c7470u: goto label_1c7470;
        case 0x1c7480u: goto label_1c7480;
        case 0x1c7498u: goto label_1c7498;
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74c8u: goto label_1c74c8;
        case 0x1c74ecu: goto label_1c74ec;
        case 0x1c7508u: goto label_1c7508;
        case 0x1c7518u: goto label_1c7518;
        case 0x1c7578u: goto label_1c7578;
        case 0x1c75b4u: goto label_1c75b4;
        case 0x1c75c8u: goto label_1c75c8;
        case 0x1c75e4u: goto label_1c75e4;
        case 0x1c75f8u: goto label_1c75f8;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7638u: goto label_1c7638;
        default: break;
    }

    ctx->pc = 0x1c73a8u;

label_1c73a8:
    // 0x1c73a8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c73a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c73ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C73ACu;
    {
        const bool branch_taken_0x1c73ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73ACu;
            // 0x1c73b0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73ac) {
            ctx->pc = 0x1C73DCu;
            goto label_1c73dc;
        }
    }
    ctx->pc = 0x1C73B4u;
    // 0x1c73b4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1c73b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1c73b8:
    // 0x1c73b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c73bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c73c0: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x1c73c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1c73c4: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C73C4u;
    {
        const bool branch_taken_0x1c73c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C73C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73C4u;
            // 0x1c73c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73c4) {
            ctx->pc = 0x1C73E0u;
            goto label_1c73e0;
        }
    }
    ctx->pc = 0x1C73CCu;
    // 0x1c73cc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c73ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c73d0: 0x0  nop
    ctx->pc = 0x1c73d0u;
    // NOP
    // 0x1c73d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C73D4u;
    {
        const bool branch_taken_0x1c73d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C73D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73D4u;
            // 0x1c73d8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73d4) {
            ctx->pc = 0x1C73B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c73b8;
        }
    }
    ctx->pc = 0x1C73DCu;
label_1c73dc:
    // 0x1c73dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c73dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c73e0:
    // 0x1c73e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C73E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C73E8u;
label_1c73e8:
    // 0x1c73e8: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x1c73ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c73ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f0: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x1c73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x1c73f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c73f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f8: 0xffb70438  sd          $s7, 0x438($sp)
    ctx->pc = 0x1c73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 23));
    // 0x1c73fc: 0x24b70018  addiu       $s7, $a1, 0x18
    ctx->pc = 0x1c73fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1c7400: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x1c7400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x1c7404: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x1c7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x1c7408: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x1c7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
    // 0x1c740c: 0xffb40420  sd          $s4, 0x420($sp)
    ctx->pc = 0x1c740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 20));
    // 0x1c7410: 0xffb50428  sd          $s5, 0x428($sp)
    ctx->pc = 0x1c7410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 21));
    // 0x1c7414: 0xffb60430  sd          $s6, 0x430($sp)
    ctx->pc = 0x1c7414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 22));
    // 0x1c7418: 0xffbe0440  sd          $fp, 0x440($sp)
    ctx->pc = 0x1c7418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 30));
    // 0x1c741c: 0xffbf0448  sd          $ra, 0x448($sp)
    ctx->pc = 0x1c741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 31));
    // 0x1c7420: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1C7420u;
    {
        const bool branch_taken_0x1c7420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7420u;
            // 0x1c7424: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7420) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C7428u;
    // 0x1c7428: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c7428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c742c: 0x2456c020  addiu       $s6, $v0, -0x3FE0
    ctx->pc = 0x1c742cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950944));
    // 0x1c7430: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C7430u;
    SET_GPR_U32(ctx, 31, 0x1C7438u);
    ctx->pc = 0x1C7434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7430u;
            // 0x1c7434: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7438u; }
        if (ctx->pc != 0x1C7438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7438u; }
        if (ctx->pc != 0x1C7438u) { return; }
    }
    ctx->pc = 0x1C7438u;
label_1c7438:
    // 0x1c7438: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7438u;
    {
        const bool branch_taken_0x1c7438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7438) {
            ctx->pc = 0x1C743Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7438u;
            // 0x1c743c: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7448u;
            goto label_1c7448;
        }
    }
    ctx->pc = 0x1C7440u;
    // 0x1c7440: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C7440u;
    {
        const bool branch_taken_0x1c7440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7440u;
            // 0x1c7444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7440) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C7448u;
label_1c7448:
    // 0x1c7448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c744c: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C744Cu;
    SET_GPR_U32(ctx, 31, 0x1C7454u);
    ctx->pc = 0x1C7450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C744Cu;
            // 0x1c7450: 0x24a5c028  addiu       $a1, $a1, -0x3FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7454u; }
        if (ctx->pc != 0x1C7454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7454u; }
        if (ctx->pc != 0x1C7454u) { return; }
    }
    ctx->pc = 0x1C7454u;
label_1c7454:
    // 0x1c7454: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7454u;
    {
        const bool branch_taken_0x1c7454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7454u;
            // 0x1c7458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7454) {
            ctx->pc = 0x1C7468u;
            goto label_1c7468;
        }
    }
    ctx->pc = 0x1C745Cu;
    // 0x1c745c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1C745Cu;
    {
        const bool branch_taken_0x1c745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C745Cu;
            // 0x1c7460: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c745c) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C7464u;
    // 0x1c7464: 0x0  nop
    ctx->pc = 0x1c7464u;
    // NOP
label_1c7468:
    // 0x1c7468: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1C7468u;
    SET_GPR_U32(ctx, 31, 0x1C7470u);
    ctx->pc = 0x1C746Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7468u;
            // 0x1c746c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7470u; }
        if (ctx->pc != 0x1C7470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7470u; }
        if (ctx->pc != 0x1C7470u) { return; }
    }
    ctx->pc = 0x1C7470u;
label_1c7470:
    // 0x1c7470: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1c7470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7478: 0xc071244  jal         func_1C4910
    ctx->pc = 0x1C7478u;
    SET_GPR_U32(ctx, 31, 0x1C7480u);
    ctx->pc = 0x1C747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7478u;
            // 0x1c747c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4910u;
    if (runtime->hasFunction(0x1C4910u)) {
        auto targetFn = runtime->lookupFunction(0x1C4910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7480u; }
        if (ctx->pc != 0x1C7480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4910_0x1c4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7480u; }
        if (ctx->pc != 0x1C7480u) { return; }
    }
    ctx->pc = 0x1C7480u;
label_1c7480:
    // 0x1c7480: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7484: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x1c7484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c7488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c7488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c748c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7490: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1C7490u;
    SET_GPR_U32(ctx, 31, 0x1C7498u);
    ctx->pc = 0x1C7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7490u;
            // 0x1c7494: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7498u; }
        if (ctx->pc != 0x1C7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7498u; }
        if (ctx->pc != 0x1C7498u) { return; }
    }
    ctx->pc = 0x1C7498u;
label_1c7498:
    // 0x1c7498: 0xc071cea  jal         func_1C73A8
    ctx->pc = 0x1C7498u;
    SET_GPR_U32(ctx, 31, 0x1C74A0u);
    ctx->pc = 0x1C749Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7498u;
            // 0x1c749c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C73A8u;
    goto label_1c73a8;
    ctx->pc = 0x1C74A0u;
label_1c74a0:
    // 0x1c74a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c74a4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C74A4u;
    {
        const bool branch_taken_0x1c74a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C74A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74A4u;
            // 0x1c74a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74a4) {
            ctx->pc = 0x1C74B4u;
            goto label_1c74b4;
        }
    }
    ctx->pc = 0x1C74ACu;
    // 0x1c74ac: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x1C74ACu;
    SET_GPR_U32(ctx, 31, 0x1C74B4u);
    ctx->pc = 0x1C74B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74ACu;
            // 0x1c74b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74B4u; }
        if (ctx->pc != 0x1C74B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74B4u; }
        if (ctx->pc != 0x1C74B4u) { return; }
    }
    ctx->pc = 0x1C74B4u;
label_1c74b4:
    // 0x1c74b4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1c74b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c74b8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C74B8u;
    {
        const bool branch_taken_0x1c74b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74B8u;
            // 0x1c74bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74b8) {
            ctx->pc = 0x1C753Cu;
            goto label_1c753c;
        }
    }
    ctx->pc = 0x1C74C0u;
    // 0x1c74c0: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x1c74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1c74c4: 0x0  nop
    ctx->pc = 0x1c74c4u;
    // NOP
label_1c74c8:
    // 0x1c74c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c74c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74cc: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x1c74ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c74d0: 0x138040  sll         $s0, $s3, 1
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1c74d4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1c74d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1c74d8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c74dc: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1c74e0: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1c74e4: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C74E4u;
    SET_GPR_U32(ctx, 31, 0x1C74ECu);
    ctx->pc = 0x1C74E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74E4u;
            // 0x1c74e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74ECu; }
        if (ctx->pc != 0x1C74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74ECu; }
        if (ctx->pc != 0x1C74ECu) { return; }
    }
    ctx->pc = 0x1C74ECu;
label_1c74ec:
    // 0x1c74ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c74ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74f0: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1c74f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c74f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c74f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c74f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C74F8u;
    {
        const bool branch_taken_0x1c74f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74F8u;
            // 0x1c74fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74f8) {
            ctx->pc = 0x1C7510u;
            goto label_1c7510;
        }
    }
    ctx->pc = 0x1C7500u;
    // 0x1c7500: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C7500u;
    SET_GPR_U32(ctx, 31, 0x1C7508u);
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7508u; }
        if (ctx->pc != 0x1C7508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7508u; }
        if (ctx->pc != 0x1C7508u) { return; }
    }
    ctx->pc = 0x1C7508u;
label_1c7508:
    // 0x1c7508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7508u;
    {
        const bool branch_taken_0x1c7508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7508) {
            ctx->pc = 0x1C7518u;
            goto label_1c7518;
        }
    }
    ctx->pc = 0x1C7510u;
label_1c7510:
    // 0x1c7510: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C7510u;
    SET_GPR_U32(ctx, 31, 0x1C7518u);
    ctx->pc = 0x1C7514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7510u;
            // 0x1c7514: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7518u; }
        if (ctx->pc != 0x1C7518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7518u; }
        if (ctx->pc != 0x1C7518u) { return; }
    }
    ctx->pc = 0x1C7518u;
label_1c7518:
    // 0x1c7518: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7518u;
    {
        const bool branch_taken_0x1c7518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7518) {
            ctx->pc = 0x1C751Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7518u;
            // 0x1c751c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7538u;
            goto label_1c7538;
        }
    }
    ctx->pc = 0x1C7520u;
    // 0x1c7520: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7520u;
    {
        const bool branch_taken_0x1c7520 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c7520) {
            ctx->pc = 0x1C7524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7520u;
            // 0x1c7524: 0x2672ffff  addiu       $s2, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C752Cu;
            goto label_1c752c;
        }
    }
    ctx->pc = 0x1C7528u;
    // 0x1c7528: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c752c:
    // 0x1c752c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1c752cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1c7530: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C7530u;
    {
        const bool branch_taken_0x1c7530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7530u;
            // 0x1c7534: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7530) {
            ctx->pc = 0x1C74C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c74c8;
        }
    }
    ctx->pc = 0x1C7538u;
label_1c7538:
    // 0x1c7538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c753c:
    // 0x1c753c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c7540: 0x3c31826  xor         $v1, $fp, $v1
    ctx->pc = 0x1c7540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 3));
    // 0x1c7544: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1c7544u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c7548:
    // 0x1c7548: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x1c7548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1c754c: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x1c754cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x1c7550: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x1c7550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1c7554: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x1c7554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x1c7558: 0xdfb40420  ld          $s4, 0x420($sp)
    ctx->pc = 0x1c7558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1c755c: 0xdfb50428  ld          $s5, 0x428($sp)
    ctx->pc = 0x1c755cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x1c7560: 0xdfb60430  ld          $s6, 0x430($sp)
    ctx->pc = 0x1c7560u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1c7564: 0xdfb70438  ld          $s7, 0x438($sp)
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x1c7568: 0xdfbe0440  ld          $fp, 0x440($sp)
    ctx->pc = 0x1c7568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1c756c: 0xdfbf0448  ld          $ra, 0x448($sp)
    ctx->pc = 0x1c756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x1c7570: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7570u;
            // 0x1c7574: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7578u;
label_1c7578:
    // 0x1c7578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c757c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c757cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7584: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1c7588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c758c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c758cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7590: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7594: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7598: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c7598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c759c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c75a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c75a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c75a4: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C75A4u;
    {
        const bool branch_taken_0x1c75a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75A4u;
            // 0x1c75a8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75a4) {
            ctx->pc = 0x1C7654u;
            goto label_1c7654;
        }
    }
    ctx->pc = 0x1C75ACu;
    // 0x1c75ac: 0xc071b36  jal         func_1C6CD8
    ctx->pc = 0x1C75ACu;
    SET_GPR_U32(ctx, 31, 0x1C75B4u);
    ctx->pc = 0x1C6CD8u;
    if (runtime->hasFunction(0x1C6CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75B4u; }
        if (ctx->pc != 0x1C75B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6CD8_0x1c6cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75B4u; }
        if (ctx->pc != 0x1C75B4u) { return; }
    }
    ctx->pc = 0x1C75B4u;
label_1c75b4:
    // 0x1c75b4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c75b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1c75b8: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x1c75b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x1c75bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c75bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75c0: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C75C0u;
    SET_GPR_U32(ctx, 31, 0x1C75C8u);
    ctx->pc = 0x1C75C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75C0u;
            // 0x1c75c4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C8u; }
        if (ctx->pc != 0x1C75C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C8u; }
        if (ctx->pc != 0x1C75C8u) { return; }
    }
    ctx->pc = 0x1C75C8u;
label_1c75c8:
    // 0x1c75c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C75C8u;
    {
        const bool branch_taken_0x1c75c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75C8u;
            // 0x1c75cc: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75c8) {
            ctx->pc = 0x1C75D8u;
            goto label_1c75d8;
        }
    }
    ctx->pc = 0x1C75D0u;
    // 0x1c75d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C75D0u;
    {
        const bool branch_taken_0x1c75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75D0u;
            // 0x1c75d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75d0) {
            ctx->pc = 0x1C7654u;
            goto label_1c7654;
        }
    }
    ctx->pc = 0x1C75D8u;
label_1c75d8:
    // 0x1c75d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c75d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75dc: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C75DCu;
    SET_GPR_U32(ctx, 31, 0x1C75E4u);
    ctx->pc = 0x1C75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75DCu;
            // 0x1c75e0: 0x24a5c028  addiu       $a1, $a1, -0x3FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75E4u; }
        if (ctx->pc != 0x1C75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75E4u; }
        if (ctx->pc != 0x1C75E4u) { return; }
    }
    ctx->pc = 0x1C75E4u;
label_1c75e4:
    // 0x1c75e4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C75E4u;
    {
        const bool branch_taken_0x1c75e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75E4u;
            // 0x1c75e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75e4) {
            ctx->pc = 0x1C7654u;
            goto label_1c7654;
        }
    }
    ctx->pc = 0x1C75ECu;
    // 0x1c75ec: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C75ECu;
    {
        const bool branch_taken_0x1c75ec = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1C75F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75ECu;
            // 0x1c75f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75ec) {
            ctx->pc = 0x1C7650u;
            goto label_1c7650;
        }
    }
    ctx->pc = 0x1C75F4u;
    // 0x1c75f4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c75f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c75f8:
    // 0x1c75f8: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x1c75f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x1c75fc: 0x54550011  bnel        $v0, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C75FCu;
    {
        const bool branch_taken_0x1c75fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1c75fc) {
            ctx->pc = 0x1C7600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75FCu;
            // 0x1c7600: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7644u;
            goto label_1c7644;
        }
    }
    ctx->pc = 0x1C7604u;
    // 0x1c7604: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1c7604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c7608: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c7608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c760c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C760Cu;
    {
        const bool branch_taken_0x1c760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C760Cu;
            // 0x1c7610: 0x2605000e  addiu       $a1, $s0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c760c) {
            ctx->pc = 0x1C7630u;
            goto label_1c7630;
        }
    }
    ctx->pc = 0x1C7614u;
    // 0x1c7614: 0xc071ac4  jal         func_1C6B10
    ctx->pc = 0x1C7614u;
    SET_GPR_U32(ctx, 31, 0x1C761Cu);
    ctx->pc = 0x1C7618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7614u;
            // 0x1c7618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B10u;
    if (runtime->hasFunction(0x1C6B10u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C761Cu; }
        if (ctx->pc != 0x1C761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6B10_0x1c6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C761Cu; }
        if (ctx->pc != 0x1C761Cu) { return; }
    }
    ctx->pc = 0x1C761Cu;
label_1c761c:
    // 0x1c761c: 0x54530009  bnel        $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C761Cu;
    {
        const bool branch_taken_0x1c761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1c761c) {
            ctx->pc = 0x1C7620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C761Cu;
            // 0x1c7620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7644u;
            goto label_1c7644;
        }
    }
    ctx->pc = 0x1C7624u;
    // 0x1c7624: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C7624u;
    {
        const bool branch_taken_0x1c7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7624u;
            // 0x1c7628: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7624) {
            ctx->pc = 0x1C7654u;
            goto label_1c7654;
        }
    }
    ctx->pc = 0x1C762Cu;
    // 0x1c762c: 0x0  nop
    ctx->pc = 0x1c762cu;
    // NOP
label_1c7630:
    // 0x1c7630: 0xc071ae4  jal         func_1C6B90
    ctx->pc = 0x1C7630u;
    SET_GPR_U32(ctx, 31, 0x1C7638u);
    ctx->pc = 0x1C7634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7630u;
            // 0x1c7634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B90u;
    if (runtime->hasFunction(0x1C6B90u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7638u; }
        if (ctx->pc != 0x1C7638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6B90_0x1c6b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7638u; }
        if (ctx->pc != 0x1C7638u) { return; }
    }
    ctx->pc = 0x1C7638u;
label_1c7638:
    // 0x1c7638: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7638u;
            // 0x1c763c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C7654u;
            goto label_1c7654;
        }
    }
    ctx->pc = 0x1C7640u;
    // 0x1c7640: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c7640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c7644:
    // 0x1c7644: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1c7644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1c7648: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C7648u;
    {
        const bool branch_taken_0x1c7648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C764Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7648u;
            // 0x1c764c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7648) {
            ctx->pc = 0x1C75F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c75f8;
        }
    }
    ctx->pc = 0x1C7650u;
label_1c7650:
    // 0x1c7650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7654:
    // 0x1c7654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c765c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c765cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7664: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c7664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7668: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c7668u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c766c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7670: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7670u;
            // 0x1c7674: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7678u;
}
