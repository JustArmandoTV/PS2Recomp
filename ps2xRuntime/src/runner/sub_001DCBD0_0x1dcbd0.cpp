#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBD0
// Address: 0x1dcbd0 - 0x1dcc20
void sub_001DCBD0_0x1dcbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBD0_0x1dcbd0");
#endif

    ctx->pc = 0x1dcbd0u;

    // 0x1dcbd0: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x1dcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x1dcbd4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1dcbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1dcbd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcbd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dcbdc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DCBDCu;
    {
        const bool branch_taken_0x1dcbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcbdc) {
            ctx->pc = 0x1DCC14u;
            goto label_1dcc14;
        }
    }
    ctx->pc = 0x1DCBE4u;
    // 0x1dcbe4: 0x808211aa  lb          $v0, 0x11AA($a0)
    ctx->pc = 0x1dcbe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
    // 0x1dcbe8: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1dcbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1dcbec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dcbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dcbf0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCBF0u;
    {
        const bool branch_taken_0x1dcbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcbf0) {
            ctx->pc = 0x1DCBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBF0u;
            // 0x1dcbf4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC14u;
            goto label_1dcc14;
        }
    }
    ctx->pc = 0x1DCBF8u;
    // 0x1dcbf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1dcbfc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1dcc00: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
    // 0x1dcc04: 0x401027  not         $v0, $v0
    ctx->pc = 0x1dcc04u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1dcc08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dcc0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dcc10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dcc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dcc14:
    // 0x1dcc14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCC1Cu;
    // 0x1dcc1c: 0x0  nop
    ctx->pc = 0x1dcc1cu;
    // NOP
}
