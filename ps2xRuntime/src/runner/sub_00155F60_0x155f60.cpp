#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155F60
// Address: 0x155f60 - 0x155fc0
void sub_00155F60_0x155f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155F60_0x155f60");
#endif

    ctx->pc = 0x155f60u;

    // 0x155f60: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x155f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x155f64: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x155F64u;
    {
        const bool branch_taken_0x155f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f64) {
            ctx->pc = 0x155F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155F64u;
            // 0x155f68: 0x30830022  andi        $v1, $a0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
            ctx->pc = 0x155F74u;
            goto label_155f74;
        }
    }
    ctx->pc = 0x155F6Cu;
    // 0x155f6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x155F6Cu;
    {
        const bool branch_taken_0x155f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F6Cu;
            // 0x155f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f6c) {
            ctx->pc = 0x155FB0u;
            goto label_155fb0;
        }
    }
    ctx->pc = 0x155F74u;
label_155f74:
    // 0x155f74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155f78: 0x8c4457b0  lw          $a0, 0x57B0($v0)
    ctx->pc = 0x155f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22448)));
    // 0x155f7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155f80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x155F80u;
    {
        const bool branch_taken_0x155f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F80u;
            // 0x155f84: 0xac4457f0  sw          $a0, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f80) {
            ctx->pc = 0x155F94u;
            goto label_155f94;
        }
    }
    ctx->pc = 0x155F88u;
    // 0x155f88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155f8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155f90: 0xac4357f0  sw          $v1, 0x57F0($v0)
    ctx->pc = 0x155f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
label_155f94:
    // 0x155f94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155f98: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x155f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x155f9c: 0x8c455824  lw          $a1, 0x5824($v0)
    ctx->pc = 0x155f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x155fa0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155fa4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x155fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x155fa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fac: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x155facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
label_155fb0:
    // 0x155fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x155FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155FB8u;
    // 0x155fb8: 0x0  nop
    ctx->pc = 0x155fb8u;
    // NOP
    // 0x155fbc: 0x0  nop
    ctx->pc = 0x155fbcu;
    // NOP
}
