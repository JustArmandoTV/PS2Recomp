#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D620
// Address: 0x17d620 - 0x17d658
void sub_0017D620_0x17d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D620_0x17d620");
#endif

    ctx->pc = 0x17d620u;

    // 0x17d620: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x17d620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x17d624: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x17d624u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x17d628: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x17d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x17d62c: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x17d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x17d630: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x17d630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x17d634: 0x32e00  sll         $a1, $v1, 24
    ctx->pc = 0x17d634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x17d638: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D638u;
    {
        const bool branch_taken_0x17d638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D638u;
            // 0x17d63c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d638) {
            ctx->pc = 0x17D644u;
            goto label_17d644;
        }
    }
    ctx->pc = 0x17D640u;
    // 0x17d640: 0x52603  sra         $a0, $a1, 24
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 24));
label_17d644:
    // 0x17d644: 0x3863005c  xori        $v1, $v1, 0x5C
    ctx->pc = 0x17d644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)92);
    // 0x17d648: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D64Cu;
            // 0x17d650: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D654u;
    // 0x17d654: 0x0  nop
    ctx->pc = 0x17d654u;
    // NOP
}
