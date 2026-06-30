#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00525790
// Address: 0x525790 - 0x5257c0
void sub_00525790_0x525790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00525790_0x525790");
#endif

    ctx->pc = 0x525790u;

    // 0x525790: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x525790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x525794: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x525794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x525798: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x525798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x52579c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x52579cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x5257a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x5257a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x5257a4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x5257a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x5257a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5257a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5257ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5257acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5257b0: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x5257b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x5257b4: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x5257b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x5257b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5257B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5257BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5257B8u;
            // 0x5257bc: 0xaca00090  sw          $zero, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5257C0u;
}
