#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8398
// Address: 0x1c8398 - 0x1c8568
void sub_001C8398_0x1c8398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8398_0x1c8398");
#endif

    switch (ctx->pc) {
        case 0x1c83c0u: goto label_1c83c0;
        case 0x1c83d8u: goto label_1c83d8;
        case 0x1c8400u: goto label_1c8400;
        case 0x1c840cu: goto label_1c840c;
        case 0x1c8420u: goto label_1c8420;
        case 0x1c8438u: goto label_1c8438;
        case 0x1c8444u: goto label_1c8444;
        case 0x1c8460u: goto label_1c8460;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c8494u: goto label_1c8494;
        case 0x1c84a8u: goto label_1c84a8;
        case 0x1c84c8u: goto label_1c84c8;
        case 0x1c8504u: goto label_1c8504;
        case 0x1c8510u: goto label_1c8510;
        case 0x1c8550u: goto label_1c8550;
        default: break;
    }

    ctx->pc = 0x1c8398u;

    // 0x1c8398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c839c: 0x41500  sll         $v0, $a0, 20
    ctx->pc = 0x1c839cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x1c83a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c83a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c83a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c83a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83a8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1c83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c83ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c83acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c83b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c83b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c83b8: 0xc072074  jal         func_1C81D0
    ctx->pc = 0x1C83B8u;
    SET_GPR_U32(ctx, 31, 0x1C83C0u);
    ctx->pc = 0x1C83BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83B8u;
            // 0x1c83bc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C81D0u;
    if (runtime->hasFunction(0x1C81D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C81D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83C0u; }
        if (ctx->pc != 0x1C83C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C81D0_0x1c81d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83C0u; }
        if (ctx->pc != 0x1C83C0u) { return; }
    }
    ctx->pc = 0x1C83C0u;
label_1c83c0:
    // 0x1c83c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c83c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83c4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c83c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c83c8: 0x27a70012  addiu       $a3, $sp, 0x12
    ctx->pc = 0x1c83c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x1c83cc: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x1c83ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1c83d0: 0xc071fd4  jal         func_1C7F50
    ctx->pc = 0x1C83D0u;
    SET_GPR_U32(ctx, 31, 0x1C83D8u);
    ctx->pc = 0x1C83D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83D0u;
            // 0x1c83d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F50u;
    if (runtime->hasFunction(0x1C7F50u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83D8u; }
        if (ctx->pc != 0x1C83D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7F50_0x1c7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83D8u; }
        if (ctx->pc != 0x1C83D8u) { return; }
    }
    ctx->pc = 0x1C83D8u;
label_1c83d8:
    // 0x1c83d8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1c83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c83dc: 0x87a60010  lh          $a2, 0x10($sp)
    ctx->pc = 0x1c83dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c83e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C83E0u;
    {
        const bool branch_taken_0x1c83e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83e0) {
            ctx->pc = 0x1C83E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83E0u;
            // 0x1c83e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C83E8u;
            goto label_1c83e8;
        }
    }
    ctx->pc = 0x1C83E8u;
label_1c83e8:
    // 0x1c83e8: 0x97a40012  lhu         $a0, 0x12($sp)
    ctx->pc = 0x1c83e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x1c83ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c83ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83f0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x1c83f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c83f4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c83f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c83f8: 0xc072066  jal         func_1C8198
    ctx->pc = 0x1C83F8u;
    SET_GPR_U32(ctx, 31, 0x1C8400u);
    ctx->pc = 0x1C83FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83F8u;
            // 0x1c83fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8198u;
    if (runtime->hasFunction(0x1C8198u)) {
        auto targetFn = runtime->lookupFunction(0x1C8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8400u; }
        if (ctx->pc != 0x1C8400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8198_0x1c8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8400u; }
        if (ctx->pc != 0x1C8400u) { return; }
    }
    ctx->pc = 0x1C8400u;
label_1c8400:
    // 0x1c8400: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x1c8400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1c8404: 0xc072066  jal         func_1C8198
    ctx->pc = 0x1C8404u;
    SET_GPR_U32(ctx, 31, 0x1C840Cu);
    ctx->pc = 0x1C8408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8404u;
            // 0x1c8408: 0x97a40014  lhu         $a0, 0x14($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8198u;
    if (runtime->hasFunction(0x1C8198u)) {
        auto targetFn = runtime->lookupFunction(0x1C8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C840Cu; }
        if (ctx->pc != 0x1C840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8198_0x1c8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C840Cu; }
        if (ctx->pc != 0x1C840Cu) { return; }
    }
    ctx->pc = 0x1C840Cu;
label_1c840c:
    // 0x1c840c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c840cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8410: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c8410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c8414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c8414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8418: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8418u;
            // 0x1c841c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8420u;
label_1c8420:
    // 0x1c8420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8428: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c8428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c842c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c8430: 0xc072092  jal         func_1C8248
    ctx->pc = 0x1C8430u;
    SET_GPR_U32(ctx, 31, 0x1C8438u);
    ctx->pc = 0x1C8434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8430u;
            // 0x1c8434: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8248u;
    if (runtime->hasFunction(0x1C8248u)) {
        auto targetFn = runtime->lookupFunction(0x1C8248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8438u; }
        if (ctx->pc != 0x1C8438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8248_0x1c8248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8438u; }
        if (ctx->pc != 0x1C8438u) { return; }
    }
    ctx->pc = 0x1C8438u;
label_1c8438:
    // 0x1c8438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c843c: 0xc0720ac  jal         func_1C82B0
    ctx->pc = 0x1C843Cu;
    SET_GPR_U32(ctx, 31, 0x1C8444u);
    ctx->pc = 0x1C8440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C843Cu;
            // 0x1c8440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C82B0u;
    if (runtime->hasFunction(0x1C82B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C82B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8444u; }
        if (ctx->pc != 0x1C8444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C82B0_0x1c82b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8444u; }
        if (ctx->pc != 0x1C8444u) { return; }
    }
    ctx->pc = 0x1C8444u;
label_1c8444:
    // 0x1c8444: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8448u;
    {
        const bool branch_taken_0x1c8448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8448u;
            // 0x1c844c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8448) {
            ctx->pc = 0x1C8460u;
            goto label_1c8460;
        }
    }
    ctx->pc = 0x1C8450u;
    // 0x1c8450: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8450u;
    {
        const bool branch_taken_0x1c8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8450) {
            ctx->pc = 0x1C8454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8450u;
            // 0x1c8454: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8464u;
            goto label_1c8464;
        }
    }
    ctx->pc = 0x1C8458u;
    // 0x1c8458: 0xc0720c4  jal         func_1C8310
    ctx->pc = 0x1C8458u;
    SET_GPR_U32(ctx, 31, 0x1C8460u);
    ctx->pc = 0x1C845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8458u;
            // 0x1c845c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8310u;
    if (runtime->hasFunction(0x1C8310u)) {
        auto targetFn = runtime->lookupFunction(0x1C8310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8460u; }
        if (ctx->pc != 0x1C8460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8310_0x1c8310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8460u; }
        if (ctx->pc != 0x1C8460u) { return; }
    }
    ctx->pc = 0x1C8460u;
label_1c8460:
    // 0x1c8460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8464:
    // 0x1c8464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8468: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c846c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C846Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C846Cu;
            // 0x1c8470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8474u;
    // 0x1c8474: 0x0  nop
    ctx->pc = 0x1c8474u;
    // NOP
label_1c8478:
    // 0x1c8478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c847c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8484: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c8488: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c848c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1C848Cu;
    SET_GPR_U32(ctx, 31, 0x1C8494u);
    ctx->pc = 0x1C8490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C848Cu;
            // 0x1c8490: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8494u; }
        if (ctx->pc != 0x1C8494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8494u; }
        if (ctx->pc != 0x1C8494u) { return; }
    }
    ctx->pc = 0x1C8494u;
label_1c8494:
    // 0x1c8494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8498: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c8498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c849c: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C849Cu;
    {
        const bool branch_taken_0x1c849c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C84A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C849Cu;
            // 0x1c84a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c849c) {
            ctx->pc = 0x1C84F4u;
            goto label_1c84f4;
        }
    }
    ctx->pc = 0x1C84A4u;
    // 0x1c84a4: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1c84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1c84a8:
    // 0x1c84a8: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1c84a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c84ac: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x1c84acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c84b0: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1c84b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c84b4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c84b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84b8: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c84bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C84BCu;
    {
        const bool branch_taken_0x1c84bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C84C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84BCu;
            // 0x1c84c0: 0x454018  mult        $t0, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84bc) {
            ctx->pc = 0x1C84E4u;
            goto label_1c84e4;
        }
    }
    ctx->pc = 0x1C84C4u;
    // 0x1c84c4: 0x0  nop
    ctx->pc = 0x1c84c4u;
    // NOP
label_1c84c8:
    // 0x1c84c8: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1c84cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c84d0: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c84d4: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1c84d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c84d8: 0x0  nop
    ctx->pc = 0x1c84d8u;
    // NOP
    // 0x1c84dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C84DCu;
    {
        const bool branch_taken_0x1c84dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C84E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84DCu;
            // 0x1c84e0: 0x1054021  addu        $t0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84dc) {
            ctx->pc = 0x1C84C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c84c8;
        }
    }
    ctx->pc = 0x1C84E4u;
label_1c84e4:
    // 0x1c84e4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c84e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84e8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1c84e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c84ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C84ECu;
    {
        const bool branch_taken_0x1c84ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C84F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84ECu;
            // 0x1c84f0: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84ec) {
            ctx->pc = 0x1C84A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c84a8;
        }
    }
    ctx->pc = 0x1C84F4u;
label_1c84f4:
    // 0x1c84f4: 0x82500  sll         $a0, $t0, 20
    ctx->pc = 0x1c84f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x1c84f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c84f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84fc: 0xc072074  jal         func_1C81D0
    ctx->pc = 0x1C84FCu;
    SET_GPR_U32(ctx, 31, 0x1C8504u);
    ctx->pc = 0x1C8500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84FCu;
            // 0x1c8500: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C81D0u;
    if (runtime->hasFunction(0x1C81D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C81D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8504u; }
        if (ctx->pc != 0x1C8504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C81D0_0x1c81d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8504u; }
        if (ctx->pc != 0x1C8504u) { return; }
    }
    ctx->pc = 0x1C8504u;
label_1c8504:
    // 0x1c8504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8508: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1c8508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c850c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c850cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8510:
    // 0x1c8510: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1c8514: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1c8514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1c8518: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1c8518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1c851c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c851cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c8520: 0x28e60008  slti        $a2, $a3, 0x8
    ctx->pc = 0x1c8520u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c8524: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x1c8524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1c8528: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1c8528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c852c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x1c852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1c8530: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c8530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8534: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8534u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8538: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x1c8538u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c853c: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x1c853cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8540: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C8540u;
    {
        const bool branch_taken_0x1c8540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8540u;
            // 0x1c8544: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8540) {
            ctx->pc = 0x1C8510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8510;
        }
    }
    ctx->pc = 0x1C8548u;
    // 0x1c8548: 0xc0720c4  jal         func_1C8310
    ctx->pc = 0x1C8548u;
    SET_GPR_U32(ctx, 31, 0x1C8550u);
    ctx->pc = 0x1C854Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8548u;
            // 0x1c854c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8310u;
    if (runtime->hasFunction(0x1C8310u)) {
        auto targetFn = runtime->lookupFunction(0x1C8310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8550u; }
        if (ctx->pc != 0x1C8550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8310_0x1c8310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8550u; }
        if (ctx->pc != 0x1C8550u) { return; }
    }
    ctx->pc = 0x1C8550u;
label_1c8550:
    // 0x1c8550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8554: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8558: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c8558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c855c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8560: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8560u;
            // 0x1c8564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8568u;
}
