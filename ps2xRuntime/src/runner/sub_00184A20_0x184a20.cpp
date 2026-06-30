#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184A20
// Address: 0x184a20 - 0x184a58
void sub_00184A20_0x184a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184A20_0x184a20");
#endif

    ctx->pc = 0x184a20u;

label_184a20:
    // 0x184a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a2c: 0x8061fea  j           func_187FA8
    ctx->pc = 0x184A2Cu;
    ctx->pc = 0x184A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A2Cu;
            // 0x184a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184A34u;
    // 0x184a34: 0x0  nop
    ctx->pc = 0x184a34u;
    // NOP
    // 0x184a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184a3c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184a44: 0x24847968  addiu       $a0, $a0, 0x7968
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31080));
    // 0x184a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a4c: 0x8061288  j           func_184A20
    ctx->pc = 0x184A4Cu;
    ctx->pc = 0x184A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A4Cu;
            // 0x184a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A20u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_184a20;
    ctx->pc = 0x184A54u;
    // 0x184a54: 0x0  nop
    ctx->pc = 0x184a54u;
    // NOP
}
