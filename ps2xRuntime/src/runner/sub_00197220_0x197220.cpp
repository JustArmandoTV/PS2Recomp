#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197220
// Address: 0x197220 - 0x197240
void sub_00197220_0x197220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197220_0x197220");
#endif

    ctx->pc = 0x197220u;

    // 0x197220: 0x2ca5008c  sltiu       $a1, $a1, 0x8C
    ctx->pc = 0x197220u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x197224: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197224u;
    {
        const bool branch_taken_0x197224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x197228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197224u;
            // 0x197228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197224) {
            ctx->pc = 0x197238u;
            goto label_197238;
        }
    }
    ctx->pc = 0x19722Cu;
    // 0x19722c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197230: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x197230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197234: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x197234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_197238:
    // 0x197238: 0x3e00008  jr          $ra
    ctx->pc = 0x197238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197240u;
}
