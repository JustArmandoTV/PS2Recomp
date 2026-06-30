#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177B40
// Address: 0x177b40 - 0x177bb0
void sub_00177B40_0x177b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B40_0x177b40");
#endif

    ctx->pc = 0x177b40u;

    // 0x177b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177b44: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x177b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177b4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x177B4Cu;
    {
        const bool branch_taken_0x177b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B4Cu;
            // 0x177b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b4c) {
            ctx->pc = 0x177BA0u;
            goto label_177ba0;
        }
    }
    ctx->pc = 0x177B54u;
    // 0x177b54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x177b58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x177B58u;
    {
        const bool branch_taken_0x177b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B58u;
            // 0x177b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b58) {
            ctx->pc = 0x177B90u;
            goto label_177b90;
        }
    }
    ctx->pc = 0x177B60u;
    // 0x177b60: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x177b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x177b64: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x177B64u;
    {
        const bool branch_taken_0x177b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B64u;
            // 0x177b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b64) {
            ctx->pc = 0x177BA0u;
            goto label_177ba0;
        }
    }
    ctx->pc = 0x177B6Cu;
    // 0x177b6c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x177b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x177b70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177B70u;
    {
        const bool branch_taken_0x177b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B70u;
            // 0x177b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b70) {
            ctx->pc = 0x177B88u;
            goto label_177b88;
        }
    }
    ctx->pc = 0x177B78u;
    // 0x177b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b7c: 0x805c824  j           func_172090
    ctx->pc = 0x177B7Cu;
    ctx->pc = 0x177B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B7Cu;
            // 0x177b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172090u;
    {
        auto targetFn = runtime->lookupFunction(0x172090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x177B84u;
    // 0x177b84: 0x0  nop
    ctx->pc = 0x177b84u;
    // NOP
label_177b88:
    // 0x177b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177B88u;
    {
        const bool branch_taken_0x177b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B88u;
            // 0x177b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b88) {
            ctx->pc = 0x177BA0u;
            goto label_177ba0;
        }
    }
    ctx->pc = 0x177B90u;
label_177b90:
    // 0x177b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b94: 0x805c824  j           func_172090
    ctx->pc = 0x177B94u;
    ctx->pc = 0x177B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B94u;
            // 0x177b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172090u;
    {
        auto targetFn = runtime->lookupFunction(0x172090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x177B9Cu;
    // 0x177b9c: 0x0  nop
    ctx->pc = 0x177b9cu;
    // NOP
label_177ba0:
    // 0x177ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x177BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BA4u;
            // 0x177ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177BACu;
    // 0x177bac: 0x0  nop
    ctx->pc = 0x177bacu;
    // NOP
}
