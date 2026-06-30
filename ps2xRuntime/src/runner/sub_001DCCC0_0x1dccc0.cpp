#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCCC0
// Address: 0x1dccc0 - 0x1dcd30
void sub_001DCCC0_0x1dccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCCC0_0x1dccc0");
#endif

    ctx->pc = 0x1dccc0u;

    // 0x1dccc0: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x1dccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x1dccc4: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1dccc4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1dccc8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCCC8u;
    {
        const bool branch_taken_0x1dccc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DCCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCC8u;
            // 0x1dcccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccc8) {
            ctx->pc = 0x1DCCE0u;
            goto label_1dcce0;
        }
    }
    ctx->pc = 0x1DCCD0u;
    // 0x1dccd0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1dccd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dccd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCCD4u;
    {
        const bool branch_taken_0x1dccd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dccd4) {
            ctx->pc = 0x1DCCE0u;
            goto label_1dcce0;
        }
    }
    ctx->pc = 0x1DCCDCu;
    // 0x1dccdc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dccdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dcce0:
    // 0x1dcce0: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCCE0u;
    {
        const bool branch_taken_0x1dcce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcce0) {
            ctx->pc = 0x1DCCE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCE0u;
            // 0x1dcce4: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCD24u;
            goto label_1dcd24;
        }
    }
    ctx->pc = 0x1DCCE8u;
    // 0x1dcce8: 0x808211aa  lb          $v0, 0x11AA($a0)
    ctx->pc = 0x1dcce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
    // 0x1dccec: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1dccecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1dccf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dccf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCCF4u;
    {
        const bool branch_taken_0x1dccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dccf4) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCCFCu;
    // 0x1dccfc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1dcd00: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1dcd04: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1dcd04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
    // 0x1dcd08: 0x401027  not         $v0, $v0
    ctx->pc = 0x1dcd08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1dcd0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dcd10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dcd14:
    // 0x1dcd14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCD14u;
    {
        const bool branch_taken_0x1dcd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd14) {
            ctx->pc = 0x1DCD20u;
            goto label_1dcd20;
        }
    }
    ctx->pc = 0x1DCD1Cu;
    // 0x1dcd1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd20:
    // 0x1dcd20: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1dcd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1dcd24:
    // 0x1dcd24: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCD2Cu;
    // 0x1dcd2c: 0x0  nop
    ctx->pc = 0x1dcd2cu;
    // NOP
}
