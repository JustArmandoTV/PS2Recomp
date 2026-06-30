#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186268
// Address: 0x186268 - 0x1862a0
void sub_00186268_0x186268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186268_0x186268");
#endif

    ctx->pc = 0x186268u;

    // 0x186268: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18626c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x186270: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x186274: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x186274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x186278: 0x3e00008  jr          $ra
    ctx->pc = 0x186278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186278u;
            // 0x18627c: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186280u;
    // 0x186280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186284: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18628c: 0x24847c70  addiu       $a0, $a0, 0x7C70
    ctx->pc = 0x18628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
    // 0x186290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186294: 0x8061288  j           func_184A20
    ctx->pc = 0x186294u;
    ctx->pc = 0x186298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186294u;
            // 0x186298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A20u;
    if (runtime->hasFunction(0x184A20u)) {
        auto targetFn = runtime->lookupFunction(0x184A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A20_0x184a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18629Cu;
    // 0x18629c: 0x0  nop
    ctx->pc = 0x18629cu;
    // NOP
}
