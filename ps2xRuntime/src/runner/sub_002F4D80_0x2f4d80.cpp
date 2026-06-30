#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4D80
// Address: 0x2f4d80 - 0x2f4dd0
void sub_002F4D80_0x2f4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D80_0x2f4d80");
#endif

    switch (ctx->pc) {
        case 0x2f4d94u: goto label_2f4d94;
        case 0x2f4d9cu: goto label_2f4d9c;
        default: break;
    }

    ctx->pc = 0x2f4d80u;

    // 0x2f4d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4d8c: 0xc0b72fc  jal         func_2DCBF0
    ctx->pc = 0x2F4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D94u);
    ctx->pc = 0x2F4D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D8Cu;
            // 0x2f4d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCBF0u;
    if (runtime->hasFunction(0x2DCBF0u)) {
        auto targetFn = runtime->lookupFunction(0x2DCBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D94u; }
        if (ctx->pc != 0x2F4D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCBF0_0x2dcbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D94u; }
        if (ctx->pc != 0x2F4D94u) { return; }
    }
    ctx->pc = 0x2F4D94u;
label_2f4d94:
    // 0x2f4d94: 0x8e030454  lw          $v1, 0x454($s0)
    ctx->pc = 0x2f4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x2f4d98: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x2f4d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_2f4d9c:
    // 0x2f4d9c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2f4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2f4da0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f4da4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2f4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2f4da8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f4dac: 0x0  nop
    ctx->pc = 0x2f4dacu;
    // NOP
    // 0x2f4db0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F4DB0u;
    {
        const bool branch_taken_0x2f4db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4db0) {
            ctx->pc = 0x2F4D9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4d9c;
        }
    }
    ctx->pc = 0x2F4DB8u;
    // 0x2f4db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DC0u;
            // 0x2f4dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4DC8u;
    // 0x2f4dc8: 0x0  nop
    ctx->pc = 0x2f4dc8u;
    // NOP
    // 0x2f4dcc: 0x0  nop
    ctx->pc = 0x2f4dccu;
    // NOP
}
