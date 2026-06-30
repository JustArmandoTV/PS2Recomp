#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182498
// Address: 0x182498 - 0x182520
void sub_00182498_0x182498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182498_0x182498");
#endif

    ctx->pc = 0x182498u;

    // 0x182498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18249c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x18249cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1824a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1824a4: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1824A4u;
    {
        const bool branch_taken_0x1824a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1824A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1824A4u;
            // 0x1824a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824a4) {
            ctx->pc = 0x1824C0u;
            goto label_1824c0;
        }
    }
    ctx->pc = 0x1824ACu;
    // 0x1824ac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1824b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1824b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824b4: 0x248472a0  addiu       $a0, $a0, 0x72A0
    ctx->pc = 0x1824b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29344));
    // 0x1824b8: 0x8060726  j           func_181C98
    ctx->pc = 0x1824B8u;
    ctx->pc = 0x1824BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824B8u;
            // 0x1824bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C98u;
    if (runtime->hasFunction(0x181C98u)) {
        auto targetFn = runtime->lookupFunction(0x181C98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C98_0x181c98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1824C0u;
label_1824c0:
    // 0x1824c0: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1824C0u;
    {
        const bool branch_taken_0x1824c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1824C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1824C0u;
            // 0x1824c4: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824c0) {
            ctx->pc = 0x1824E0u;
            goto label_1824e0;
        }
    }
    ctx->pc = 0x1824C8u;
    // 0x1824c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1824c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1824cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1824ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824d0: 0x248472c8  addiu       $a0, $a0, 0x72C8
    ctx->pc = 0x1824d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29384));
    // 0x1824d4: 0x8060726  j           func_181C98
    ctx->pc = 0x1824D4u;
    ctx->pc = 0x1824D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824D4u;
            // 0x1824d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C98u;
    if (runtime->hasFunction(0x181C98u)) {
        auto targetFn = runtime->lookupFunction(0x181C98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C98_0x181c98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1824DCu;
    // 0x1824dc: 0x0  nop
    ctx->pc = 0x1824dcu;
    // NOP
label_1824e0:
    // 0x1824e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1824e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1824e4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1824e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1824e8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1824E8u;
    {
        const bool branch_taken_0x1824e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824e8) {
            ctx->pc = 0x1824ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1824E8u;
            // 0x1824ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1824F0u;
            goto label_1824f0;
        }
    }
    ctx->pc = 0x1824F0u;
label_1824f0:
    // 0x1824f0: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x1824f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x1824f4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1824f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1824f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824fc: 0x1012  mflo        $v0
    ctx->pc = 0x1824fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x182500: 0x28430061  slti        $v1, $v0, 0x61
    ctx->pc = 0x182500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x182504: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x182504u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x182508: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x182508u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x18250c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x18250cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x182510: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x182510u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x182514: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x182514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x182518: 0x3e00008  jr          $ra
    ctx->pc = 0x182518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182518u;
            // 0x18251c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182520u;
}
