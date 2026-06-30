#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001974F8
// Address: 0x1974f8 - 0x197538
void sub_001974F8_0x1974f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001974F8_0x1974f8");
#endif

    ctx->pc = 0x1974f8u;

    // 0x1974f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1974f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1974fc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1974FCu;
    {
        const bool branch_taken_0x1974fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974FCu;
            // 0x197500: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974fc) {
            ctx->pc = 0x197530u;
            goto label_197530;
        }
    }
    ctx->pc = 0x197504u;
    // 0x197504: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x197504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x197508: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197508u;
    {
        const bool branch_taken_0x197508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197508) {
            ctx->pc = 0x197530u;
            goto label_197530;
        }
    }
    ctx->pc = 0x197510u;
    // 0x197510: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x197510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x197514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197518: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197518u;
    {
        const bool branch_taken_0x197518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197518) {
            ctx->pc = 0x197530u;
            goto label_197530;
        }
    }
    ctx->pc = 0x197520u;
    // 0x197520: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x197520u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x197524: 0x24420047  addiu       $v0, $v0, 0x47
    ctx->pc = 0x197524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 71));
    // 0x197528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19752c: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x19752cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_197530:
    // 0x197530: 0x3e00008  jr          $ra
    ctx->pc = 0x197530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197530u;
            // 0x197534: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197538u;
}
