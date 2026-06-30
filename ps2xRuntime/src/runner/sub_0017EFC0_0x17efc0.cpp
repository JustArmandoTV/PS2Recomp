#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EFC0
// Address: 0x17efc0 - 0x17eff0
void sub_0017EFC0_0x17efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EFC0_0x17efc0");
#endif

    ctx->pc = 0x17efc0u;

    // 0x17efc0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x17efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17efc4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x17efc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x17efc8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x17efc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x17efcc: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x17efccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17efd0: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x17efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x17efd4: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x17efd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17efd8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x17efd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x17efdc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17efdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x17efe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17efe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17efe4: 0x3e00008  jr          $ra
    ctx->pc = 0x17EFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFE4u;
            // 0x17efe8: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EFECu;
    // 0x17efec: 0x0  nop
    ctx->pc = 0x17efecu;
    // NOP
}
