#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384FA0
// Address: 0x384fa0 - 0x384fc0
void sub_00384FA0_0x384fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384FA0_0x384fa0");
#endif

    ctx->pc = 0x384fa0u;

    // 0x384fa0: 0x8ca60d98  lw          $a2, 0xD98($a1)
    ctx->pc = 0x384fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
    // 0x384fa4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x384fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x384fa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384fac: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x384facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x384fb0: 0xa02827  not         $a1, $a1
    ctx->pc = 0x384fb0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x384fb4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x384fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x384fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x384FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384FB8u;
            // 0x384fbc: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384FC0u;
}
