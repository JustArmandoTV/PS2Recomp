#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD620
// Address: 0x1bd620 - 0x1bd698
void sub_001BD620_0x1bd620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD620_0x1bd620");
#endif

    ctx->pc = 0x1bd620u;

    // 0x1bd620: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bd624: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bd628: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd62c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd630: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1bd630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd634: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1bd634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bd638: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bd638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bd63c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bd640: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD640u;
            // 0x1bd644: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD648u;
    // 0x1bd648: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd64c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bd650: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd654: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd658: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1bd658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd65c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bd660: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1bd660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1bd664: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bd668: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD668u;
            // 0x1bd66c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD670u;
    // 0x1bd670: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd674: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bd678: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd67c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd680: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1bd680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd684: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1bd684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bd688: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1bd688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1bd68c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bd690: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD690u;
            // 0x1bd694: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD698u;
}
