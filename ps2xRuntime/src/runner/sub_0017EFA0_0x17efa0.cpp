#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EFA0
// Address: 0x17efa0 - 0x17efc0
void sub_0017EFA0_0x17efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EFA0_0x17efa0");
#endif

    ctx->pc = 0x17efa0u;

    // 0x17efa0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17efa4: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x17efa4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17efa8: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x17efa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x17efac: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x17efacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17efb0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x17efb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x17efb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17EFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFB4u;
            // 0x17efb8: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EFBCu;
    // 0x17efbc: 0x0  nop
    ctx->pc = 0x17efbcu;
    // NOP
}
