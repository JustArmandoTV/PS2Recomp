#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141A30
// Address: 0x141a30 - 0x141ab0
void sub_00141A30_0x141a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141A30_0x141a30");
#endif

    ctx->pc = 0x141a30u;

    // 0x141a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x141a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141a34: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x141A34u;
    {
        const bool branch_taken_0x141a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x141A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A34u;
            // 0x141a38: 0xaf84803c  sw          $a0, -0x7FC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a34) {
            ctx->pc = 0x141A70u;
            goto label_141a70;
        }
    }
    ctx->pc = 0x141A3Cu;
    // 0x141a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141a40: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x141A40u;
    {
        const bool branch_taken_0x141a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141a40) {
            ctx->pc = 0x141A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141A40u;
            // 0x141a44: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141A64u;
            goto label_141a64;
        }
    }
    ctx->pc = 0x141A48u;
    // 0x141a48: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141A48u;
    {
        const bool branch_taken_0x141a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141a48) {
            ctx->pc = 0x141A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141A48u;
            // 0x141a4c: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141A58u;
            goto label_141a58;
        }
    }
    ctx->pc = 0x141A50u;
    // 0x141a50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x141A50u;
    {
        const bool branch_taken_0x141a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141a50) {
            ctx->pc = 0x141A9Cu;
            goto label_141a9c;
        }
    }
    ctx->pc = 0x141A58u;
label_141a58:
    // 0x141a58: 0xaf838040  sw          $v1, -0x7FC0($gp)
    ctx->pc = 0x141a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934592), GPR_U32(ctx, 3));
    // 0x141a5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x141A5Cu;
    {
        const bool branch_taken_0x141a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A5Cu;
            // 0x141a60: 0xff838048  sd          $v1, -0x7FB8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294934600), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a5c) {
            ctx->pc = 0x141A9Cu;
            goto label_141a9c;
        }
    }
    ctx->pc = 0x141A64u;
label_141a64:
    // 0x141a64: 0xaf838040  sw          $v1, -0x7FC0($gp)
    ctx->pc = 0x141a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934592), GPR_U32(ctx, 3));
    // 0x141a68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x141A68u;
    {
        const bool branch_taken_0x141a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A68u;
            // 0x141a6c: 0xff838048  sd          $v1, -0x7FB8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294934600), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a68) {
            ctx->pc = 0x141A9Cu;
            goto label_141a9c;
        }
    }
    ctx->pc = 0x141A70u;
label_141a70:
    // 0x141a70: 0x8f858050  lw          $a1, -0x7FB0($gp)
    ctx->pc = 0x141a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x141a74: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x141a78: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x141a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x141a7c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x141a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x141a80: 0xaf858040  sw          $a1, -0x7FC0($gp)
    ctx->pc = 0x141a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934592), GPR_U32(ctx, 5));
    // 0x141a84: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x141a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x141a88: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x141a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x141a8c: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x141a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x141a90: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x141a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x141a94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141a98: 0xff838048  sd          $v1, -0x7FB8($gp)
    ctx->pc = 0x141a98u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934600), GPR_U64(ctx, 3));
label_141a9c:
    // 0x141a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x141A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141AA4u;
    // 0x141aa4: 0x0  nop
    ctx->pc = 0x141aa4u;
    // NOP
    // 0x141aa8: 0x0  nop
    ctx->pc = 0x141aa8u;
    // NOP
    // 0x141aac: 0x0  nop
    ctx->pc = 0x141aacu;
    // NOP
}
