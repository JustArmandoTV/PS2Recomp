#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443B70
// Address: 0x443b70 - 0x443bc0
void sub_00443B70_0x443b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443B70_0x443b70");
#endif

    switch (ctx->pc) {
        case 0x443b98u: goto label_443b98;
        default: break;
    }

    ctx->pc = 0x443b70u;

    // 0x443b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x443b74: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x443b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x443b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x443b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x443b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443b80: 0x8c850290  lw          $a1, 0x290($a0)
    ctx->pc = 0x443b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x443b84: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x443b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x443b88: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x443B88u;
    {
        const bool branch_taken_0x443b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x443B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443B88u;
            // 0x443b8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443b88) {
            ctx->pc = 0x443BA4u;
            goto label_443ba4;
        }
    }
    ctx->pc = 0x443B90u;
    // 0x443b90: 0xc110f34  jal         func_443CD0
    ctx->pc = 0x443B90u;
    SET_GPR_U32(ctx, 31, 0x443B98u);
    ctx->pc = 0x443CD0u;
    if (runtime->hasFunction(0x443CD0u)) {
        auto targetFn = runtime->lookupFunction(0x443CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B98u; }
        if (ctx->pc != 0x443B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443CD0_0x443cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B98u; }
        if (ctx->pc != 0x443B98u) { return; }
    }
    ctx->pc = 0x443B98u;
label_443b98:
    // 0x443b98: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x443b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x443b9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x443b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x443ba0: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x443ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_443ba4:
    // 0x443ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443bac: 0x3e00008  jr          $ra
    ctx->pc = 0x443BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443BACu;
            // 0x443bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443BB4u;
    // 0x443bb4: 0x0  nop
    ctx->pc = 0x443bb4u;
    // NOP
    // 0x443bb8: 0x0  nop
    ctx->pc = 0x443bb8u;
    // NOP
    // 0x443bbc: 0x0  nop
    ctx->pc = 0x443bbcu;
    // NOP
}
