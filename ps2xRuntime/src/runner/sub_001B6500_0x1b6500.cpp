#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6500
// Address: 0x1b6500 - 0x1b6558
void sub_001B6500_0x1b6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6500_0x1b6500");
#endif

    ctx->pc = 0x1b6500u;

    // 0x1b6500: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b6500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b6504: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b6504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b6508: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1b6508u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b650c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1b650cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1b6510: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b6510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1b6514: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6514u;
    {
        const bool branch_taken_0x1b6514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6514) {
            ctx->pc = 0x1B6518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6514u;
            // 0x1b6518: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B651Cu;
            goto label_1b651c;
        }
    }
    ctx->pc = 0x1B651Cu;
label_1b651c:
    // 0x1b651c: 0x1810  mfhi        $v1
    ctx->pc = 0x1b651cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6520: 0x3012  mflo        $a2
    ctx->pc = 0x1b6520u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1b6524: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6524u;
    {
        const bool branch_taken_0x1b6524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6524) {
            ctx->pc = 0x1B6528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6524u;
            // 0x1b6528: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B652Cu;
    // 0x1b652c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1b652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1b6530: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6530u;
    {
        const bool branch_taken_0x1b6530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6530) {
            ctx->pc = 0x1B6534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6530u;
            // 0x1b6534: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6538u;
            goto label_1b6538;
        }
    }
    ctx->pc = 0x1B6538u;
label_1b6538:
    // 0x1b6538: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1b6538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1b653c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B653Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B653Cu;
            // 0x1b6540: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6544u;
    // 0x1b6544: 0x0  nop
    ctx->pc = 0x1b6544u;
    // NOP
label_1b6548:
    // 0x1b6548: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1b6548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1b654c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B654Cu;
            // 0x1b6550: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6554u;
    // 0x1b6554: 0x0  nop
    ctx->pc = 0x1b6554u;
    // NOP
}
