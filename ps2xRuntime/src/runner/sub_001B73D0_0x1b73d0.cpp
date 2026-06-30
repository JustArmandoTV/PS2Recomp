#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B73D0
// Address: 0x1b73d0 - 0x1b7500
void sub_001B73D0_0x1b73d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B73D0_0x1b73d0");
#endif

    switch (ctx->pc) {
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7478u: goto label_1b7478;
        case 0x1b74a8u: goto label_1b74a8;
        case 0x1b74bcu: goto label_1b74bc;
        default: break;
    }

    ctx->pc = 0x1b73d0u;

    // 0x1b73d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b73d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b73d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b73d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b73d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b73dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b73e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b73e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b73e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b73e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b73ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b73f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b73f4: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B73F4u;
    SET_GPR_U32(ctx, 31, 0x1B73FCu);
    ctx->pc = 0x1B73F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73F4u;
            // 0x1b73f8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73FCu; }
        if (ctx->pc != 0x1B73FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73FCu; }
        if (ctx->pc != 0x1B73FCu) { return; }
    }
    ctx->pc = 0x1B73FCu;
label_1b73fc:
    // 0x1b73fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7400: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7400u;
    {
        const bool branch_taken_0x1b7400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7400u;
            // 0x1b7404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7400) {
            ctx->pc = 0x1B7428u;
            goto label_1b7428;
        }
    }
    ctx->pc = 0x1B7408u;
    // 0x1b7408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b740c: 0x34a50129  ori         $a1, $a1, 0x129
    ctx->pc = 0x1b740cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)297);
    // 0x1b7410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b7418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b741c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7420: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7420u;
    ctx->pc = 0x1B7424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7420u;
            // 0x1b7424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7428u;
label_1b7428:
    // 0x1b7428: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7428u;
    {
        const bool branch_taken_0x1b7428 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7428u;
            // 0x1b742c: 0x26040d88  addiu       $a0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7428) {
            ctx->pc = 0x1B7448u;
            goto label_1b7448;
        }
    }
    ctx->pc = 0x1B7430u;
    // 0x1b7430: 0xac9102f0  sw          $s1, 0x2F0($a0)
    ctx->pc = 0x1b7430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 17));
    // 0x1b7434: 0xac9202dc  sw          $s2, 0x2DC($a0)
    ctx->pc = 0x1b7434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 18));
    // 0x1b7438: 0xac9302ec  sw          $s3, 0x2EC($a0)
    ctx->pc = 0x1b7438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 748), GPR_U32(ctx, 19));
    // 0x1b743c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B743Cu;
    {
        const bool branch_taken_0x1b743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B743Cu;
            // 0x1b7440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b743c) {
            ctx->pc = 0x1B7458u;
            goto label_1b7458;
        }
    }
    ctx->pc = 0x1B7444u;
    // 0x1b7444: 0x0  nop
    ctx->pc = 0x1b7444u;
    // NOP
label_1b7448:
    // 0x1b7448: 0xac9102f0  sw          $s1, 0x2F0($a0)
    ctx->pc = 0x1b7448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 17));
    // 0x1b744c: 0xac9302ec  sw          $s3, 0x2EC($a0)
    ctx->pc = 0x1b744cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 748), GPR_U32(ctx, 19));
    // 0x1b7450: 0xac8002dc  sw          $zero, 0x2DC($a0)
    ctx->pc = 0x1b7450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 0));
    // 0x1b7454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7458:
    // 0x1b7458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b745c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b745cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b7464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b746c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B746Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B746Cu;
            // 0x1b7470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7474u;
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
label_1b7478:
    // 0x1b7478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b747c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7488: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7488u;
    {
        const bool branch_taken_0x1b7488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7488u;
            // 0x1b748c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7488) {
            ctx->pc = 0x1B74E8u;
            goto label_1b74e8;
        }
    }
    ctx->pc = 0x1B7490u;
    // 0x1b7490: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b7490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b7494: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b7494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7498: 0x24519b8c  addiu       $s1, $v0, -0x6474
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1b749c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1b749cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b74a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b74a4: 0x0  nop
    ctx->pc = 0x1b74a4u;
    // NOP
label_1b74a8:
    // 0x1b74a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b74ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B74ACu;
    {
        const bool branch_taken_0x1b74ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74ACu;
            // 0x1b74b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74ac) {
            ctx->pc = 0x1B74C0u;
            goto label_1b74c0;
        }
    }
    ctx->pc = 0x1B74B4u;
    // 0x1b74b4: 0xc06dd40  jal         func_1B7500
    ctx->pc = 0x1B74B4u;
    SET_GPR_U32(ctx, 31, 0x1B74BCu);
    ctx->pc = 0x1B7500u;
    if (runtime->hasFunction(0x1B7500u)) {
        auto targetFn = runtime->lookupFunction(0x1B7500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74BCu; }
        if (ctx->pc != 0x1B74BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7500_0x1b7500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74BCu; }
        if (ctx->pc != 0x1B74BCu) { return; }
    }
    ctx->pc = 0x1B74BCu;
label_1b74bc:
    // 0x1b74bc: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x1b74bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_1b74c0:
    // 0x1b74c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b74c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b74c4: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B74C4u;
    {
        const bool branch_taken_0x1b74c4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b74c4) {
            ctx->pc = 0x1B74C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74C4u;
            // 0x1b74c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B74A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b74a8;
        }
    }
    ctx->pc = 0x1B74CCu;
    // 0x1b74cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b74ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b74d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b74d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b74d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b74d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b74d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b74dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b74dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b74e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B74E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B74E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74E0u;
            // 0x1b74e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B74E8u;
label_1b74e8:
    // 0x1b74e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b74e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b74ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b74ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b74f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b74f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b74f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b74f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b74f8: 0x806dd40  j           func_1B7500
    ctx->pc = 0x1B74F8u;
    ctx->pc = 0x1B74FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74F8u;
            // 0x1b74fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7500u;
    if (runtime->hasFunction(0x1B7500u)) {
        auto targetFn = runtime->lookupFunction(0x1B7500u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B7500_0x1b7500(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7500u;
}
