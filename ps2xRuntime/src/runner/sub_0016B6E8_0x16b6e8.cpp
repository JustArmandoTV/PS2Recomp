#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B6E8
// Address: 0x16b6e8 - 0x16b710
void sub_0016B6E8_0x16b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B6E8_0x16b6e8");
#endif

    ctx->pc = 0x16b6e8u;

    // 0x16b6e8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x16b6e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16b6ec: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x16b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x16b6f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16b6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6f4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x16b6f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x16b6f8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x16b6f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16b6fc: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x16b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x16b700: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x16b700u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b704: 0x4202a  slt         $a0, $zero, $a0
    ctx->pc = 0x16b704u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16b708: 0x3e00008  jr          $ra
    ctx->pc = 0x16B708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B708u;
            // 0x16b70c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B710u;
}
