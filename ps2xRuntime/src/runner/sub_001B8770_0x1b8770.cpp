#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8770
// Address: 0x1b8770 - 0x1b8828
void sub_001B8770_0x1b8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8770_0x1b8770");
#endif

    switch (ctx->pc) {
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87d4u: goto label_1b87d4;
        default: break;
    }

    ctx->pc = 0x1b8770u;

    // 0x1b8770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8774: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b8778: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x1b8778u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b877c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b8780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8784: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b8784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8788: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b878c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1b878cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8790: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b8794: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b8798: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b879c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b879cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b87a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b87a4: 0x0  nop
    ctx->pc = 0x1b87a4u;
    // NOP
label_1b87a8:
    // 0x1b87a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b87a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b87b0: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1b87b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1b87b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b87b8: 0xc06e20a  jal         func_1B8828
    ctx->pc = 0x1B87B8u;
    SET_GPR_U32(ctx, 31, 0x1B87C0u);
    ctx->pc = 0x1B87BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87B8u;
            // 0x1b87bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8828u;
    if (runtime->hasFunction(0x1B8828u)) {
        auto targetFn = runtime->lookupFunction(0x1B8828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87C0u; }
        if (ctx->pc != 0x1B87C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8828_0x1b8828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87C0u; }
        if (ctx->pc != 0x1B87C0u) { return; }
    }
    ctx->pc = 0x1B87C0u;
label_1b87c0:
    // 0x1b87c0: 0x643fff9  bgezl       $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B87C0u;
    {
        const bool branch_taken_0x1b87c0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1b87c0) {
            ctx->pc = 0x1B87C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87C0u;
            // 0x1b87c4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B87A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b87a8;
        }
    }
    ctx->pc = 0x1B87C8u;
    // 0x1b87c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b87c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87cc: 0xc06e21c  jal         func_1B8870
    ctx->pc = 0x1B87CCu;
    SET_GPR_U32(ctx, 31, 0x1B87D4u);
    ctx->pc = 0x1B87D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87CCu;
            // 0x1b87d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8870u;
    if (runtime->hasFunction(0x1B8870u)) {
        auto targetFn = runtime->lookupFunction(0x1B8870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87D4u; }
        if (ctx->pc != 0x1B87D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8870_0x1b8870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87D4u; }
        if (ctx->pc != 0x1B87D4u) { return; }
    }
    ctx->pc = 0x1B87D4u;
label_1b87d4:
    // 0x1b87d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B87D4u;
    {
        const bool branch_taken_0x1b87d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87D4u;
            // 0x1b87d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87d4) {
            ctx->pc = 0x1B8808u;
            goto label_1b8808;
        }
    }
    ctx->pc = 0x1B87DCu;
    // 0x1b87dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b87dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b87e0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b87e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b87e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b87e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b87e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b87e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b87ec: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x1b87ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x1b87f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b87f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b87f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b87f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b87f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b87f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b87fc: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B87FCu;
    ctx->pc = 0x1B8800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87FCu;
            // 0x1b8800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8804u;
    // 0x1b8804: 0x0  nop
    ctx->pc = 0x1b8804u;
    // NOP
label_1b8808:
    // 0x1b8808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b880c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b880cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8814: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8818: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b8818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b881c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b8820: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8820u;
            // 0x1b8824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8828u;
}
