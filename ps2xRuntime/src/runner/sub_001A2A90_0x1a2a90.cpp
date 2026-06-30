#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2A90
// Address: 0x1a2a90 - 0x1a2b38
void sub_001A2A90_0x1a2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2A90_0x1a2a90");
#endif

    switch (ctx->pc) {
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2b04u: goto label_1a2b04;
        default: break;
    }

    ctx->pc = 0x1a2a90u;

    // 0x1a2a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2a94: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1a2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1a2a98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2aa0: 0x8c516c14  lw          $s1, 0x6C14($v0)
    ctx->pc = 0x1a2aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27668)));
    // 0x1a2aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2aa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a2aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a2aac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a2ab0: 0x16230017  bne         $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A2AB0u;
    {
        const bool branch_taken_0x1a2ab0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AB0u;
            // 0x1a2ab4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ab0) {
            ctx->pc = 0x1A2B10u;
            goto label_1a2b10;
        }
    }
    ctx->pc = 0x1A2AB8u;
    // 0x1a2ab8: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A2AB8u;
    SET_GPR_U32(ctx, 31, 0x1A2AC0u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AC0u; }
        if (ctx->pc != 0x1A2AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AC0u; }
        if (ctx->pc != 0x1A2AC0u) { return; }
    }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0xc068a80  jal         func_1A2A00
    ctx->pc = 0x1A2AC0u;
    SET_GPR_U32(ctx, 31, 0x1A2AC8u);
    ctx->pc = 0x1A2AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AC0u;
            // 0x1a2ac4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A00u;
    if (runtime->hasFunction(0x1A2A00u)) {
        auto targetFn = runtime->lookupFunction(0x1A2A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AC8u; }
        if (ctx->pc != 0x1A2AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A00_0x1a2a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AC8u; }
        if (ctx->pc != 0x1A2AC8u) { return; }
    }
    ctx->pc = 0x1A2AC8u;
label_1a2ac8:
    // 0x1a2ac8: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2AC8u;
    {
        const bool branch_taken_0x1a2ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A2ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AC8u;
            // 0x1a2acc: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ac8) {
            ctx->pc = 0x1A2B10u;
            goto label_1a2b10;
        }
    }
    ctx->pc = 0x1A2AD0u;
    // 0x1a2ad0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a2ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2ad4: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1a2ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a2ad8:
    // 0x1a2ad8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2AD8u;
    {
        const bool branch_taken_0x1a2ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ad8) {
            ctx->pc = 0x1A2ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AD8u;
            // 0x1a2adc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2B08u;
            goto label_1a2b08;
        }
    }
    ctx->pc = 0x1A2AE0u;
    // 0x1a2ae0: 0x8e110590  lw          $s1, 0x590($s0)
    ctx->pc = 0x1a2ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x1a2ae4: 0x56330008  bnel        $s1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2AE4u;
    {
        const bool branch_taken_0x1a2ae4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a2ae4) {
            ctx->pc = 0x1A2AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AE4u;
            // 0x1a2ae8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2B08u;
            goto label_1a2b08;
        }
    }
    ctx->pc = 0x1A2AECu;
    // 0x1a2aec: 0xc067256  jal         func_19C958
    ctx->pc = 0x1A2AECu;
    SET_GPR_U32(ctx, 31, 0x1A2AF4u);
    ctx->pc = 0x1A2AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AECu;
            // 0x1a2af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C958u;
    if (runtime->hasFunction(0x19C958u)) {
        auto targetFn = runtime->lookupFunction(0x19C958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AF4u; }
        if (ctx->pc != 0x1A2AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C958_0x19c958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AF4u; }
        if (ctx->pc != 0x1A2AF4u) { return; }
    }
    ctx->pc = 0x1A2AF4u;
label_1a2af4:
    // 0x1a2af4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2AF4u;
    {
        const bool branch_taken_0x1a2af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A2AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2AF4u;
            // 0x1a2af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2af4) {
            ctx->pc = 0x1A2B04u;
            goto label_1a2b04;
        }
    }
    ctx->pc = 0x1A2AFCu;
    // 0x1a2afc: 0xc0670be  jal         func_19C2F8
    ctx->pc = 0x1A2AFCu;
    SET_GPR_U32(ctx, 31, 0x1A2B04u);
    ctx->pc = 0x19C2F8u;
    if (runtime->hasFunction(0x19C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B04u; }
        if (ctx->pc != 0x1A2B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C2F8_0x19c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B04u; }
        if (ctx->pc != 0x1A2B04u) { return; }
    }
    ctx->pc = 0x1A2B04u;
label_1a2b04:
    // 0x1a2b04: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a2b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1a2b08:
    // 0x1a2b08: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A2B08u;
    {
        const bool branch_taken_0x1a2b08 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1A2B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B08u;
            // 0x1a2b0c: 0x26100594  addiu       $s0, $s0, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b08) {
            ctx->pc = 0x1A2AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2ad8;
        }
    }
    ctx->pc = 0x1A2B10u;
label_1a2b10:
    // 0x1a2b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2b1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a2b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B24u;
            // 0x1a2b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2B2Cu;
    // 0x1a2b2c: 0x0  nop
    ctx->pc = 0x1a2b2cu;
    // NOP
    // 0x1a2b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B30u;
            // 0x1a2b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2B38u;
}
