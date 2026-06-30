#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1D00
// Address: 0x1d1d00 - 0x1d1d50
void sub_001D1D00_0x1d1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D00_0x1d1d00");
#endif

    ctx->pc = 0x1d1d00u;

    // 0x1d1d00: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1d1d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1d08: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d1d0c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1d1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d1d10: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1d14: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1d1d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d1d18: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d1d1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1d1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1d1d20: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1d1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d1d24: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1d1d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d1d28: 0xc0102a  slt         $v0, $a2, $zero
    ctx->pc = 0x1d1d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1d1d2c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1d1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1d1d30: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d1d34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d1d38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d1d3c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1d1d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d1d40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d1d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d1d44: 0x21780  sll         $v0, $v0, 30
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
    // 0x1d1d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D48u;
            // 0x1d1d4c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1D50u;
}
