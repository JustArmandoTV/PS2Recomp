#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC8A0
// Address: 0x1dc8a0 - 0x1dc910
void sub_001DC8A0_0x1dc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC8A0_0x1dc8a0");
#endif

    ctx->pc = 0x1dc8a0u;

    // 0x1dc8a0: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x1dc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x1dc8a4: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1dc8a4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1dc8a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC8A8u;
    {
        const bool branch_taken_0x1dc8a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DC8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8A8u;
            // 0x1dc8ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8a8) {
            ctx->pc = 0x1DC8C0u;
            goto label_1dc8c0;
        }
    }
    ctx->pc = 0x1DC8B0u;
    // 0x1dc8b0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1dc8b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dc8b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC8B4u;
    {
        const bool branch_taken_0x1dc8b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8b4) {
            ctx->pc = 0x1DC8C0u;
            goto label_1dc8c0;
        }
    }
    ctx->pc = 0x1DC8BCu;
    // 0x1dc8bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dc8bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8c0:
    // 0x1dc8c0: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DC8C0u;
    {
        const bool branch_taken_0x1dc8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8c0) {
            ctx->pc = 0x1DC8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8C0u;
            // 0x1dc8c4: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC904u;
            goto label_1dc904;
        }
    }
    ctx->pc = 0x1DC8C8u;
    // 0x1dc8c8: 0x808211aa  lb          $v0, 0x11AA($a0)
    ctx->pc = 0x1dc8c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
    // 0x1dc8cc: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1dc8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1dc8d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dc8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dc8d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC8D4u;
    {
        const bool branch_taken_0x1dc8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8d4) {
            ctx->pc = 0x1DC8F4u;
            goto label_1dc8f4;
        }
    }
    ctx->pc = 0x1DC8DCu;
    // 0x1dc8dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1dc8e0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1dc8e4: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1dc8e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
    // 0x1dc8e8: 0x401027  not         $v0, $v0
    ctx->pc = 0x1dc8e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1dc8ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dc8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dc8f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dc8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dc8f4:
    // 0x1dc8f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC8F4u;
    {
        const bool branch_taken_0x1dc8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8f4) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC8FCu;
    // 0x1dc8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc900:
    // 0x1dc900: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1dc900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1dc904:
    // 0x1dc904: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC90Cu;
    // 0x1dc90c: 0x0  nop
    ctx->pc = 0x1dc90cu;
    // NOP
}
