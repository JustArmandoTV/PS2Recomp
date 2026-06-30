#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165418
// Address: 0x165418 - 0x165520
void sub_00165418_0x165418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165418_0x165418");
#endif

    ctx->pc = 0x165418u;

    // 0x165418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16541c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x16541cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165424: 0x27050048  addiu       $a1, $t8, 0x48
    ctx->pc = 0x165424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 72));
    // 0x165428: 0x8cae0008  lw          $t6, 0x8($a1)
    ctx->pc = 0x165428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16542c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x16542cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x165430: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x165430u;
    {
        const bool branch_taken_0x165430 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x165430) {
            ctx->pc = 0x165434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165430u;
            // 0x165434: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165438u;
            goto label_165438;
        }
    }
    ctx->pc = 0x165438u;
label_165438:
    // 0x165438: 0x8caf0018  lw          $t7, 0x18($a1)
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x16543c: 0xce001a  div         $zero, $a2, $t6
    ctx->pc = 0x16543cu;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165440: 0x8ca80020  lw          $t0, 0x20($a1)
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x165444: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x165448: 0x1e81023  subu        $v0, $t7, $t0
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x16544c: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x165450: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x165454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165458: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x165458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x16545c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x165460: 0x8cac0024  lw          $t4, 0x24($a1)
    ctx->pc = 0x165460u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x165464: 0xec382a  slt         $a3, $a3, $t4
    ctx->pc = 0x165464u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x165468: 0x3012  mflo        $a2
    ctx->pc = 0x165468u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x16546c: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x16546cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165470: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x165470u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165474: 0x1012  mflo        $v0
    ctx->pc = 0x165474u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x165478: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x165478u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16547c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x16547cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165480: 0x6812  mflo        $t5
    ctx->pc = 0x165480u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x165484: 0x2810  mfhi        $a1
    ctx->pc = 0x165484u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x165488: 0x1691818  mult        $v1, $t3, $t1
    ctx->pc = 0x165488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16548c: 0x1252823  subu        $a1, $t1, $a1
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x165490: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x165490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x165494: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x165494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x165498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165498u;
    {
        const bool branch_taken_0x165498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165498u;
            // 0x16549c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165498) {
            ctx->pc = 0x1654ACu;
            goto label_1654ac;
        }
    }
    ctx->pc = 0x1654A0u;
    // 0x1654a0: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x1654a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1654a4: 0x4f102a  slt         $v0, $v0, $t7
    ctx->pc = 0x1654a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1654a8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1654a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_1654ac:
    // 0x1654ac: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x1654acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1654b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1654b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1654b4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1654B4u;
    {
        const bool branch_taken_0x1654b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654b4) {
            ctx->pc = 0x1654B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1654B4u;
            // 0x1654b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1654BCu;
            goto label_1654bc;
        }
    }
    ctx->pc = 0x1654BCu;
label_1654bc:
    // 0x1654bc: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x1654bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1654c0: 0x189001a  div         $zero, $t4, $t1
    ctx->pc = 0x1654c0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1654c4: 0x2812  mflo        $a1
    ctx->pc = 0x1654c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1654c8: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x1654c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1654cc: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x1654ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x1654d0: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x1654d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1654d4: 0x1a3500b  movn        $t2, $t5, $v1
    ctx->pc = 0x1654d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 13));
    // 0x1654d8: 0x16a102a  slt         $v0, $t3, $t2
    ctx->pc = 0x1654d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1654dc: 0x15c60006  bne         $t6, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1654DCu;
    {
        const bool branch_taken_0x1654dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 6));
        ctx->pc = 0x1654E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654DCu;
            // 0x1654e0: 0x162500b  movn        $t2, $t3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654dc) {
            ctx->pc = 0x1654F8u;
            goto label_1654f8;
        }
    }
    ctx->pc = 0x1654E4u;
    // 0x1654e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1654e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1654e8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1654e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654ec: 0x80594da  j           func_165368
    ctx->pc = 0x1654ECu;
    ctx->pc = 0x1654F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1654ECu;
            // 0x1654f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165368u;
    {
        auto targetFn = runtime->lookupFunction(0x165368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1654F4u;
    // 0x1654f4: 0x0  nop
    ctx->pc = 0x1654f4u;
    // NOP
label_1654f8:
    // 0x1654f8: 0x8f0200e8  lw          $v0, 0xE8($t8)
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x1654fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1654FCu;
    {
        const bool branch_taken_0x1654fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654FCu;
            // 0x165500: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654fc) {
            ctx->pc = 0x165510u;
            goto label_165510;
        }
    }
    ctx->pc = 0x165504u;
    // 0x165504: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x165504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165508: 0x80594f0  j           func_1653C0
    ctx->pc = 0x165508u;
    ctx->pc = 0x16550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165508u;
            // 0x16550c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1653C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1653C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x165510u;
label_165510:
    // 0x165510: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x165510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165514: 0x80594c6  j           func_165318
    ctx->pc = 0x165514u;
    ctx->pc = 0x165518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165514u;
            // 0x165518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165318u;
    {
        auto targetFn = runtime->lookupFunction(0x165318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16551Cu;
    // 0x16551c: 0x0  nop
    ctx->pc = 0x16551cu;
    // NOP
}
