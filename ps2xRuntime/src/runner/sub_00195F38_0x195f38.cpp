#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195F38
// Address: 0x195f38 - 0x195f80
void sub_00195F38_0x195f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195F38_0x195f38");
#endif

    ctx->pc = 0x195f38u;

    // 0x195f38: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x195f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x195f3c: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x195f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
    // 0x195f40: 0x8c448420  lw          $a0, -0x7BE0($v0)
    ctx->pc = 0x195f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935584)));
    // 0x195f44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195f48: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x195f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
    // 0x195f4c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195F4Cu;
    {
        const bool branch_taken_0x195f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F4Cu;
            // 0x195f50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f4c) {
            ctx->pc = 0x195F70u;
            goto label_195f70;
        }
    }
    ctx->pc = 0x195F54u;
    // 0x195f54: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x195f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x195f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f60: 0x34a5ff02  ori         $a1, $a1, 0xFF02
    ctx->pc = 0x195f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65282);
    // 0x195f64: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x195F64u;
    ctx->pc = 0x195F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F64u;
            // 0x195f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195F6Cu;
    // 0x195f6c: 0x0  nop
    ctx->pc = 0x195f6cu;
    // NOP
label_195f70:
    // 0x195f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f78: 0x3e00008  jr          $ra
    ctx->pc = 0x195F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F78u;
            // 0x195f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195F80u;
}
