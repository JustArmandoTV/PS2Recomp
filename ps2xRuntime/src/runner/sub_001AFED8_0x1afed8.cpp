#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFED8
// Address: 0x1afed8 - 0x1aff50
void sub_001AFED8_0x1afed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFED8_0x1afed8");
#endif

    switch (ctx->pc) {
        case 0x1aff04u: goto label_1aff04;
        case 0x1aff28u: goto label_1aff28;
        default: break;
    }

    ctx->pc = 0x1afed8u;

    // 0x1afed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFED8u;
            // 0x1afedc: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFEE0u;
    // 0x1afee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afee4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1afee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1afee8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1afee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afeec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1afeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1afef0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1afef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1afef8: 0x8e302030  lw          $s0, 0x2030($s1)
    ctx->pc = 0x1afef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8240)));
    // 0x1afefc: 0xc06bfd4  jal         func_1AFF50
    ctx->pc = 0x1AFEFCu;
    SET_GPR_U32(ctx, 31, 0x1AFF04u);
    ctx->pc = 0x1AFF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEFCu;
            // 0x1aff00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF50u;
    if (runtime->hasFunction(0x1AFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1AFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF04u; }
        if (ctx->pc != 0x1AFF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF50_0x1aff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF04u; }
        if (ctx->pc != 0x1AFF04u) { return; }
    }
    ctx->pc = 0x1AFF04u;
label_1aff04:
    // 0x1aff04: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AFF04u;
    {
        const bool branch_taken_0x1aff04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff04) {
            ctx->pc = 0x1AFF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF04u;
            // 0x1aff08: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF40u;
            goto label_1aff40;
        }
    }
    ctx->pc = 0x1AFF0Cu;
    // 0x1aff0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1aff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aff10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aff14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFF14u;
    {
        const bool branch_taken_0x1aff14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF14u;
            // 0x1aff18: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff14) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFF1Cu;
    // 0x1aff1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff20: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AFF20u;
    SET_GPR_U32(ctx, 31, 0x1AFF28u);
    ctx->pc = 0x1AFF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF20u;
            // 0x1aff24: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF28u; }
        if (ctx->pc != 0x1AFF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF28u; }
        if (ctx->pc != 0x1AFF28u) { return; }
    }
    ctx->pc = 0x1AFF28u;
label_1aff28:
    // 0x1aff28: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFF28u;
    {
        const bool branch_taken_0x1aff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff28) {
            ctx->pc = 0x1AFF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF28u;
            // 0x1aff2c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF34u;
            goto label_1aff34;
        }
    }
    ctx->pc = 0x1AFF30u;
label_1aff30:
    // 0x1aff30: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1aff34:
    // 0x1aff34: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1aff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1aff38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aff38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aff3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aff40:
    // 0x1aff40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1aff40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aff44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aff48: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF48u;
            // 0x1aff4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFF50u;
}
