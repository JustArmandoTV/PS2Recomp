#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4A20
// Address: 0x1b4a20 - 0x1b4a78
void sub_001B4A20_0x1b4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4A20_0x1b4a20");
#endif

    ctx->pc = 0x1b4a20u;

    // 0x1b4a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a2c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1b4a30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4A30u;
    {
        const bool branch_taken_0x1b4a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a30) {
            ctx->pc = 0x1B4A48u;
            goto label_1b4a48;
        }
    }
    ctx->pc = 0x1B4A38u;
    // 0x1b4a38: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x1b4a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x1b4a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B4A3Cu;
    {
        const bool branch_taken_0x1b4a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A3Cu;
            // 0x1b4a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a3c) {
            ctx->pc = 0x1B4A68u;
            goto label_1b4a68;
        }
    }
    ctx->pc = 0x1B4A44u;
    // 0x1b4a44: 0x0  nop
    ctx->pc = 0x1b4a44u;
    // NOP
label_1b4a48:
    // 0x1b4a48: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4A48u;
    {
        const bool branch_taken_0x1b4a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B4A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A48u;
            // 0x1b4a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a48) {
            ctx->pc = 0x1B4A68u;
            goto label_1b4a68;
        }
    }
    ctx->pc = 0x1B4A50u;
    // 0x1b4a50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a58: 0x34a50207  ori         $a1, $a1, 0x207
    ctx->pc = 0x1b4a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)519);
    // 0x1b4a5c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4A5Cu;
    ctx->pc = 0x1B4A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A5Cu;
            // 0x1b4a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4A64u;
    // 0x1b4a64: 0x0  nop
    ctx->pc = 0x1b4a64u;
    // NOP
label_1b4a68:
    // 0x1b4a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A6Cu;
            // 0x1b4a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4A74u;
    // 0x1b4a74: 0x0  nop
    ctx->pc = 0x1b4a74u;
    // NOP
}
