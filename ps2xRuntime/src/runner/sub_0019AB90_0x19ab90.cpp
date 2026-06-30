#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019AB90
// Address: 0x19ab90 - 0x19abe8
void sub_0019AB90_0x19ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AB90_0x19ab90");
#endif

    ctx->pc = 0x19ab90u;

    // 0x19ab90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ab94: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x19ab94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x19ab98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AB98u;
    {
        const bool branch_taken_0x19ab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab98) {
            ctx->pc = 0x19ABE0u;
            goto label_19abe0;
        }
    }
    ctx->pc = 0x19ABA0u;
    // 0x19aba0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19aba4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x19aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x19aba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19abac: 0x8c638e30  lw          $v1, -0x71D0($v1)
    ctx->pc = 0x19abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938160)));
    // 0x19abb0: 0x600008  jr          $v1
    ctx->pc = 0x19ABB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ABB8u: goto label_19abb8;
            case 0x19ABC0u: goto label_19abc0;
            case 0x19ABC8u: goto label_19abc8;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19ABD8u: goto label_19abd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19ABB8u;
label_19abb8:
    // 0x19abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABB8u;
            // 0x19abbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ABC0u;
label_19abc0:
    // 0x19abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABC0u;
            // 0x19abc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ABC8u;
label_19abc8:
    // 0x19abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABC8u;
            // 0x19abcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ABD0u;
label_19abd0:
    // 0x19abd0: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABD0u;
            // 0x19abd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ABD8u;
label_19abd8:
    // 0x19abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABD8u;
            // 0x19abdc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ABE0u;
label_19abe0:
    // 0x19abe0: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABE0u;
            // 0x19abe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ABE8u;
}
