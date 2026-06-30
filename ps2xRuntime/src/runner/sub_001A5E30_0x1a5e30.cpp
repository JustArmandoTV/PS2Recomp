#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5E30
// Address: 0x1a5e30 - 0x1a5e90
void sub_001A5E30_0x1a5e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5E30_0x1a5e30");
#endif

    ctx->pc = 0x1a5e30u;

    // 0x1a5e30: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a5e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e34: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a5e38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5e3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5e40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5e48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5e4c: 0x24871380  addiu       $a3, $a0, 0x1380
    ctx->pc = 0x1a5e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1a5e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5e54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5e58: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1a5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1a5e5c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a5e60: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a5e64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5E64u;
    {
        const bool branch_taken_0x1a5e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E64u;
            // 0x1a5e68: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e64) {
            ctx->pc = 0x1A5E78u;
            goto label_1a5e78;
        }
    }
    ctx->pc = 0x1A5E6Cu;
    // 0x1a5e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e70: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A5E70u;
    ctx->pc = 0x1A5E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E70u;
            // 0x1a5e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A5E78u;
label_1a5e78:
    // 0x1a5e78: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1a5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1a5e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e84: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a5e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E88u;
            // 0x1a5e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5E90u;
}
