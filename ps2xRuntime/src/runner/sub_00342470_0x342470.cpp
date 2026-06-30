#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00342470
// Address: 0x342470 - 0x342cf0
void sub_00342470_0x342470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342470_0x342470");
#endif

    switch (ctx->pc) {
        case 0x3424f8u: goto label_3424f8;
        case 0x342504u: goto label_342504;
        case 0x342510u: goto label_342510;
        case 0x34251cu: goto label_34251c;
        case 0x342528u: goto label_342528;
        case 0x342534u: goto label_342534;
        case 0x342554u: goto label_342554;
        case 0x342564u: goto label_342564;
        case 0x342594u: goto label_342594;
        case 0x3428ecu: goto label_3428ec;
        case 0x342a70u: goto label_342a70;
        case 0x342b70u: goto label_342b70;
        case 0x342bc8u: goto label_342bc8;
        case 0x342bd0u: goto label_342bd0;
        case 0x342be4u: goto label_342be4;
        case 0x342bf8u: goto label_342bf8;
        case 0x342c38u: goto label_342c38;
        case 0x342c5cu: goto label_342c5c;
        case 0x342c90u: goto label_342c90;
        case 0x342ca4u: goto label_342ca4;
        default: break;
    }

    ctx->pc = 0x342470u;

    // 0x342470: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x342470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x342474: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x342474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x342478: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x342478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x34247c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x342480: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x342480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x342484: 0x2463e330  addiu       $v1, $v1, -0x1CD0
    ctx->pc = 0x342484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959920));
    // 0x342488: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x342488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34248c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x342490: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x342490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x342494: 0x5b080  sll         $s6, $a1, 2
    ctx->pc = 0x342494u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x342498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x342498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34249c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34249cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3424a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3424a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3424a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3424a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3424a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3424a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3424ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3424acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3424b0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3424b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3424b4: 0xa3a600df  sb          $a2, 0xDF($sp)
    ctx->pc = 0x3424b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 6));
    // 0x3424b8: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x3424b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x3424bc: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x3424bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
    // 0x3424c0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3424c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3424c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3424c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3424c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3424c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3424cc: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x3424ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3424d0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3424d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3424d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3424d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3424d8: 0x8c970004  lw          $s7, 0x4($a0)
    ctx->pc = 0x3424d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3424dc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3424dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3424e0: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3424e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3424e4: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x3424e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3424e8: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x3424e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3424ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3424ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3424f0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3424F0u;
    SET_GPR_U32(ctx, 31, 0x3424F8u);
    ctx->pc = 0x3424F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3424F0u;
            // 0x3424f4: 0x2828821  addu        $s1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3424F8u; }
        if (ctx->pc != 0x3424F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3424F8u; }
        if (ctx->pc != 0x3424F8u) { return; }
    }
    ctx->pc = 0x3424F8u;
label_3424f8:
    // 0x3424f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3424f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3424fc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3424FCu;
    SET_GPR_U32(ctx, 31, 0x342504u);
    ctx->pc = 0x342500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3424FCu;
            // 0x342500: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342504u; }
        if (ctx->pc != 0x342504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342504u; }
        if (ctx->pc != 0x342504u) { return; }
    }
    ctx->pc = 0x342504u;
label_342504:
    // 0x342504: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x342504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x342508: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x342508u;
    SET_GPR_U32(ctx, 31, 0x342510u);
    ctx->pc = 0x34250Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342508u;
            // 0x34250c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342510u; }
        if (ctx->pc != 0x342510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342510u; }
        if (ctx->pc != 0x342510u) { return; }
    }
    ctx->pc = 0x342510u;
label_342510:
    // 0x342510: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x342510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x342514: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x342514u;
    SET_GPR_U32(ctx, 31, 0x34251Cu);
    ctx->pc = 0x342518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342514u;
            // 0x342518: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34251Cu; }
        if (ctx->pc != 0x34251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34251Cu; }
        if (ctx->pc != 0x34251Cu) { return; }
    }
    ctx->pc = 0x34251Cu;
label_34251c:
    // 0x34251c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x34251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x342520: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x342520u;
    SET_GPR_U32(ctx, 31, 0x342528u);
    ctx->pc = 0x342524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342520u;
            // 0x342524: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342528u; }
        if (ctx->pc != 0x342528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342528u; }
        if (ctx->pc != 0x342528u) { return; }
    }
    ctx->pc = 0x342528u;
label_342528:
    // 0x342528: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x342528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34252c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x34252Cu;
    SET_GPR_U32(ctx, 31, 0x342534u);
    ctx->pc = 0x342530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34252Cu;
            // 0x342530: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342534u; }
        if (ctx->pc != 0x342534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342534u; }
        if (ctx->pc != 0x342534u) { return; }
    }
    ctx->pc = 0x342534u;
label_342534:
    // 0x342534: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x342534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x342538: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x342538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x34253c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x34253cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x342540: 0x1010  mfhi        $v0
    ctx->pc = 0x342540u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x342544: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x342544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x342548: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x342548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x34254c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x34254Cu;
    SET_GPR_U32(ctx, 31, 0x342554u);
    ctx->pc = 0x342550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34254Cu;
            // 0x342550: 0x2e28021  addu        $s0, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342554u; }
        if (ctx->pc != 0x342554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342554u; }
        if (ctx->pc != 0x342554u) { return; }
    }
    ctx->pc = 0x342554u;
label_342554:
    // 0x342554: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x342554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x342558: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x34255c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x34255Cu;
    SET_GPR_U32(ctx, 31, 0x342564u);
    ctx->pc = 0x342560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34255Cu;
            // 0x342560: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342564u; }
        if (ctx->pc != 0x342564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342564u; }
        if (ctx->pc != 0x342564u) { return; }
    }
    ctx->pc = 0x342564u;
label_342564:
    // 0x342564: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x342564u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x342568: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x342568u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x34256c: 0x25080cf0  addiu       $t0, $t0, 0xCF0
    ctx->pc = 0x34256cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3312));
    // 0x342570: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x342570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x342574: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x342574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x342578: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x342578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34257c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x34257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x342580: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x342580u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x342584: 0x1810  mfhi        $v1
    ctx->pc = 0x342584u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x342588: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x342588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x34258c: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x34258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x342590: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x342590u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_342594:
    // 0x342594: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x342594u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x342598: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x342598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x34259c: 0x85040002  lh          $a0, 0x2($t0)
    ctx->pc = 0x34259cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3425a0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x3425a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3425a4: 0xa4e40002  sh          $a0, 0x2($a3)
    ctx->pc = 0x3425a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3425a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3425a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3425ac: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3425ACu;
    {
        const bool branch_taken_0x3425ac = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3425B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3425ACu;
            // 0x3425b0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425ac) {
            ctx->pc = 0x342594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342594;
        }
    }
    ctx->pc = 0x3425B4u;
    // 0x3425b4: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x3425b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3425b8: 0x176100  sll         $t4, $s7, 4
    ctx->pc = 0x3425b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x3425bc: 0x248d6bf8  addiu       $t5, $a0, 0x6BF8
    ctx->pc = 0x3425bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 27640));
    // 0x3425c0: 0x258671f8  addiu       $a2, $t4, 0x71F8
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 29176));
    // 0x3425c4: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x3425c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3425c8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3425c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3425cc: 0xa7ad0120  sh          $t5, 0x120($sp)
    ctx->pc = 0x3425ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 13));
    // 0x3425d0: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x3425d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3425d4: 0x2010  mfhi        $a0
    ctx->pc = 0x3425d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3425d8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3425d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3425dc: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3425dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3425e0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x3425e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x3425e4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3425E4u;
    {
        const bool branch_taken_0x3425e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3425E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3425E4u;
            // 0x3425e8: 0xa7a60122  sh          $a2, 0x122($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 290), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425e4) {
            ctx->pc = 0x3425F8u;
            goto label_3425f8;
        }
    }
    ctx->pc = 0x3425ECu;
    // 0x3425ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3425ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3425f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3425F0u;
    {
        const bool branch_taken_0x3425f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3425F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3425F0u;
            // 0x3425f4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425f0) {
            ctx->pc = 0x342614u;
            goto label_342614;
        }
    }
    ctx->pc = 0x3425F8u;
label_3425f8:
    // 0x3425f8: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x3425f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3425fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3425fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x342600: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x342600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x342604: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342604u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342608: 0x0  nop
    ctx->pc = 0x342608u;
    // NOP
    // 0x34260c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34260cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x342610: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x342610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_342614:
    // 0x342614: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x342614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x342618: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x342618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x34261c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34261cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342620: 0x0  nop
    ctx->pc = 0x342620u;
    // NOP
    // 0x342624: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x342624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x342628: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x342628u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34262c: 0x0  nop
    ctx->pc = 0x34262cu;
    // NOP
    // 0x342630: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342634: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342634u;
    {
        const bool branch_taken_0x342634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342634) {
            ctx->pc = 0x342638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342634u;
            // 0x342638: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34264Cu;
            goto label_34264c;
        }
    }
    ctx->pc = 0x34263Cu;
    // 0x34263c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34263cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342640: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342644u;
    {
        const bool branch_taken_0x342644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342644u;
            // 0x342648: 0x3c043f12  lui         $a0, 0x3F12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342644) {
            ctx->pc = 0x342664u;
            goto label_342664;
        }
    }
    ctx->pc = 0x34264Cu;
label_34264c:
    // 0x34264c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x34264cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x342650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342654: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342658: 0x0  nop
    ctx->pc = 0x342658u;
    // NOP
    // 0x34265c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x34265cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x342660: 0x3c043f12  lui         $a0, 0x3F12
    ctx->pc = 0x342660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16146 << 16));
label_342664:
    // 0x342664: 0x55900  sll         $t3, $a1, 4
    ctx->pc = 0x342664u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x342668: 0x34844925  ori         $a0, $a0, 0x4925
    ctx->pc = 0x342668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18725);
    // 0x34266c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34266cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342670: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342670u;
    {
        const bool branch_taken_0x342670 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x342674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342670u;
            // 0x342674: 0xa7ab0124  sh          $t3, 0x124($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 292), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342670) {
            ctx->pc = 0x342684u;
            goto label_342684;
        }
    }
    ctx->pc = 0x342678u;
    // 0x342678: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x342678u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34267c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34267Cu;
    {
        const bool branch_taken_0x34267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34267Cu;
            // 0x342680: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34267c) {
            ctx->pc = 0x3426A0u;
            goto label_3426a0;
        }
    }
    ctx->pc = 0x342684u;
label_342684:
    // 0x342684: 0x102842  srl         $a1, $s0, 1
    ctx->pc = 0x342684u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x342688: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x342688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x34268c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x34268cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x342690: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342690u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342694: 0x0  nop
    ctx->pc = 0x342694u;
    // NOP
    // 0x342698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x342698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34269c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34269cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3426a0:
    // 0x3426a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3426a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3426a4: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x3426a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x3426a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3426a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3426ac: 0x0  nop
    ctx->pc = 0x3426acu;
    // NOP
    // 0x3426b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3426b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3426b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3426B4u;
    {
        const bool branch_taken_0x3426b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3426b4) {
            ctx->pc = 0x3426B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3426B4u;
            // 0x3426b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3426CCu;
            goto label_3426cc;
        }
    }
    ctx->pc = 0x3426BCu;
    // 0x3426bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3426bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3426c0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3426c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3426c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3426C4u;
    {
        const bool branch_taken_0x3426c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3426C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3426C4u;
            // 0x3426c8: 0x1e5100  sll         $t2, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3426c4) {
            ctx->pc = 0x3426E4u;
            goto label_3426e4;
        }
    }
    ctx->pc = 0x3426CCu;
label_3426cc:
    // 0x3426cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3426ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3426d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3426d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3426d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3426d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3426d8: 0x0  nop
    ctx->pc = 0x3426d8u;
    // NOP
    // 0x3426dc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3426dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3426e0: 0x1e5100  sll         $t2, $fp, 4
    ctx->pc = 0x3426e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_3426e4:
    // 0x3426e4: 0x3c043f12  lui         $a0, 0x3F12
    ctx->pc = 0x3426e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16146 << 16));
    // 0x3426e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3426e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3426ec: 0x254971f8  addiu       $t1, $t2, 0x71F8
    ctx->pc = 0x3426ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 29176));
    // 0x3426f0: 0x34844925  ori         $a0, $a0, 0x4925
    ctx->pc = 0x3426f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18725);
    // 0x3426f4: 0xa7a50126  sh          $a1, 0x126($sp)
    ctx->pc = 0x3426f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 294), (uint16_t)GPR_U32(ctx, 5));
    // 0x3426f8: 0xa7ad012a  sh          $t5, 0x12A($sp)
    ctx->pc = 0x3426f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 298), (uint16_t)GPR_U32(ctx, 13));
    // 0x3426fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3426fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342700: 0xa7a9012c  sh          $t1, 0x12C($sp)
    ctx->pc = 0x342700u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 300), (uint16_t)GPR_U32(ctx, 9));
    // 0x342704: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x342704u;
    {
        const bool branch_taken_0x342704 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x342708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342704u;
            // 0x342708: 0xa7ab012e  sh          $t3, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342704) {
            ctx->pc = 0x342718u;
            goto label_342718;
        }
    }
    ctx->pc = 0x34270Cu;
    // 0x34270c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34270cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342710u;
    {
        const bool branch_taken_0x342710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342710u;
            // 0x342714: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342710) {
            ctx->pc = 0x342734u;
            goto label_342734;
        }
    }
    ctx->pc = 0x342718u;
label_342718:
    // 0x342718: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34271c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x34271cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x342720: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x342720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x342724: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342724u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342728: 0x0  nop
    ctx->pc = 0x342728u;
    // NOP
    // 0x34272c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34272cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x342730: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x342730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_342734:
    // 0x342734: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x342734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x342738: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x342738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x34273c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34273cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342740: 0x0  nop
    ctx->pc = 0x342740u;
    // NOP
    // 0x342744: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342748: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342748u;
    {
        const bool branch_taken_0x342748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342748) {
            ctx->pc = 0x34274Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342748u;
            // 0x34274c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342760u;
            goto label_342760;
        }
    }
    ctx->pc = 0x342750u;
    // 0x342750: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342750u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342754: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x342754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x342758: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342758u;
    {
        const bool branch_taken_0x342758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342758u;
            // 0x34275c: 0x72100  sll         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342758) {
            ctx->pc = 0x342778u;
            goto label_342778;
        }
    }
    ctx->pc = 0x342760u;
label_342760:
    // 0x342760: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x342760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x342764: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342768: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x342768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x34276c: 0x0  nop
    ctx->pc = 0x34276cu;
    // NOP
    // 0x342770: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x342770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x342774: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x342774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_342778:
    // 0x342778: 0xa7a60136  sh          $a2, 0x136($sp)
    ctx->pc = 0x342778u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 310), (uint16_t)GPR_U32(ctx, 6));
    // 0x34277c: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x34277cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x342780: 0xa7a40130  sh          $a0, 0x130($sp)
    ctx->pc = 0x342780u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x342784: 0x24e86bf8  addiu       $t0, $a3, 0x6BF8
    ctx->pc = 0x342784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 27640));
    // 0x342788: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x34278c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x34278cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342790: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x342790u;
    {
        const bool branch_taken_0x342790 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x342794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342790u;
            // 0x342794: 0xa7a80134  sh          $t0, 0x134($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 308), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342790) {
            ctx->pc = 0x3427A4u;
            goto label_3427a4;
        }
    }
    ctx->pc = 0x342798u;
    // 0x342798: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x342798u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34279c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34279Cu;
    {
        const bool branch_taken_0x34279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3427A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34279Cu;
            // 0x3427a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34279c) {
            ctx->pc = 0x3427C0u;
            goto label_3427c0;
        }
    }
    ctx->pc = 0x3427A4u;
label_3427a4:
    // 0x3427a4: 0x117042  srl         $t6, $s1, 1
    ctx->pc = 0x3427a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x3427a8: 0x32270001  andi        $a3, $s1, 0x1
    ctx->pc = 0x3427a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3427ac: 0x1c77025  or          $t6, $t6, $a3
    ctx->pc = 0x3427acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x3427b0: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x3427b0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3427b4: 0x0  nop
    ctx->pc = 0x3427b4u;
    // NOP
    // 0x3427b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3427b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3427bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3427bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3427c0:
    // 0x3427c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3427c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3427c4: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x3427c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x3427c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3427c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3427cc: 0x0  nop
    ctx->pc = 0x3427ccu;
    // NOP
    // 0x3427d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3427d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3427d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3427D4u;
    {
        const bool branch_taken_0x3427d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3427d4) {
            ctx->pc = 0x3427D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3427D4u;
            // 0x3427d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3427ECu;
            goto label_3427ec;
        }
    }
    ctx->pc = 0x3427DCu;
    // 0x3427dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3427dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3427e0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x3427e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x3427e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3427E4u;
    {
        const bool branch_taken_0x3427e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3427E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3427E4u;
            // 0x3427e8: 0xe3900  sll         $a3, $t6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427e4) {
            ctx->pc = 0x342804u;
            goto label_342804;
        }
    }
    ctx->pc = 0x3427ECu;
label_3427ec:
    // 0x3427ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3427ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3427f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3427f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3427f4: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x3427f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x3427f8: 0x0  nop
    ctx->pc = 0x3427f8u;
    // NOP
    // 0x3427fc: 0x1c77025  or          $t6, $t6, $a3
    ctx->pc = 0x3427fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x342800: 0xe3900  sll         $a3, $t6, 4
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_342804:
    // 0x342804: 0xa7a6014a  sh          $a2, 0x14A($sp)
    ctx->pc = 0x342804u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 330), (uint16_t)GPR_U32(ctx, 6));
    // 0x342808: 0x7bae00b0  lq          $t6, 0xB0($sp)
    ctx->pc = 0x342808u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34280c: 0x240f001b  addiu       $t7, $zero, 0x1B
    ctx->pc = 0x34280cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x342810: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x342810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x342814: 0xa7a70138  sh          $a3, 0x138($sp)
    ctx->pc = 0x342814u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 7));
    // 0x342818: 0x24c66bf8  addiu       $a2, $a2, 0x6BF8
    ctx->pc = 0x342818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27640));
    // 0x34281c: 0xa7a5013a  sh          $a1, 0x13A($sp)
    ctx->pc = 0x34281cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 314), (uint16_t)GPR_U32(ctx, 5));
    // 0x342820: 0x1cf001b  divu        $zero, $t6, $t7
    ctx->pc = 0x342820u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x342824: 0xa7a8013e  sh          $t0, 0x13E($sp)
    ctx->pc = 0x342824u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 318), (uint16_t)GPR_U32(ctx, 8));
    // 0x342828: 0xa7a90140  sh          $t1, 0x140($sp)
    ctx->pc = 0x342828u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 9));
    // 0x34282c: 0xa7a70142  sh          $a3, 0x142($sp)
    ctx->pc = 0x34282cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 322), (uint16_t)GPR_U32(ctx, 7));
    // 0x342830: 0xa7a40144  sh          $a0, 0x144($sp)
    ctx->pc = 0x342830u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 324), (uint16_t)GPR_U32(ctx, 4));
    // 0x342834: 0x7010  mfhi        $t6
    ctx->pc = 0x342834u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x342838: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x342838u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x34283c: 0x24e7024  and         $t6, $s2, $t6
    ctx->pc = 0x34283cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
    // 0x342840: 0x26e7023  subu        $t6, $s3, $t6
    ctx->pc = 0x342840u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x342844: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x342844u;
    {
        const bool branch_taken_0x342844 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x342848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342844u;
            // 0x342848: 0xa7a60148  sh          $a2, 0x148($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 328), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342844) {
            ctx->pc = 0x342858u;
            goto label_342858;
        }
    }
    ctx->pc = 0x34284Cu;
    // 0x34284c: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x34284cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342850u;
    {
        const bool branch_taken_0x342850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342850u;
            // 0x342854: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342850) {
            ctx->pc = 0x342874u;
            goto label_342874;
        }
    }
    ctx->pc = 0x342858u;
label_342858:
    // 0x342858: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x342858u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x34285c: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x34285cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x342860: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x342860u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x342864: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x342864u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342868: 0x0  nop
    ctx->pc = 0x342868u;
    // NOP
    // 0x34286c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34286cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x342870: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x342870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_342874:
    // 0x342874: 0x3c0f3f00  lui         $t7, 0x3F00
    ctx->pc = 0x342874u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
    // 0x342878: 0x3c0e4f00  lui         $t6, 0x4F00
    ctx->pc = 0x342878u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)20224 << 16));
    // 0x34287c: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x34287cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342880: 0x0  nop
    ctx->pc = 0x342880u;
    // NOP
    // 0x342884: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x342884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x342888: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x342888u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34288c: 0x0  nop
    ctx->pc = 0x34288cu;
    // NOP
    // 0x342890: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342894: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342894u;
    {
        const bool branch_taken_0x342894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342894) {
            ctx->pc = 0x342898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342894u;
            // 0x342898: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3428ACu;
            goto label_3428ac;
        }
    }
    ctx->pc = 0x34289Cu;
    // 0x34289c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34289cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3428a0: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x3428a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x3428a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3428A4u;
    {
        const bool branch_taken_0x3428a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3428A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3428A4u;
            // 0x3428a8: 0xa7a5014e  sh          $a1, 0x14E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 334), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428a4) {
            ctx->pc = 0x3428C4u;
            goto label_3428c4;
        }
    }
    ctx->pc = 0x3428ACu;
label_3428ac:
    // 0x3428ac: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x3428acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x3428b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3428b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3428b4: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x3428b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x3428b8: 0x0  nop
    ctx->pc = 0x3428b8u;
    // NOP
    // 0x3428bc: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x3428bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x3428c0: 0xa7a5014e  sh          $a1, 0x14E($sp)
    ctx->pc = 0x3428c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 334), (uint16_t)GPR_U32(ctx, 5));
label_3428c4:
    // 0x3428c4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x3428c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x3428c8: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x3428c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3428cc: 0xa7a90154  sh          $t1, 0x154($sp)
    ctx->pc = 0x3428ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 340), (uint16_t)GPR_U32(ctx, 9));
    // 0x3428d0: 0x26310d30  addiu       $s1, $s1, 0xD30
    ctx->pc = 0x3428d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x3428d4: 0xa7a40158  sh          $a0, 0x158($sp)
    ctx->pc = 0x3428d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x3428d8: 0x27af00e0  addiu       $t7, $sp, 0xE0
    ctx->pc = 0x3428d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3428dc: 0xa7a5014c  sh          $a1, 0x14C($sp)
    ctx->pc = 0x3428dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 332), (uint16_t)GPR_U32(ctx, 5));
    // 0x3428e0: 0x240e000f  addiu       $t6, $zero, 0xF
    ctx->pc = 0x3428e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3428e4: 0xa7a60152  sh          $a2, 0x152($sp)
    ctx->pc = 0x3428e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 338), (uint16_t)GPR_U32(ctx, 6));
    // 0x3428e8: 0xa7a50156  sh          $a1, 0x156($sp)
    ctx->pc = 0x3428e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 342), (uint16_t)GPR_U32(ctx, 5));
label_3428ec:
    // 0x3428ec: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x3428ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3428f0: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3428f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3428f4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x3428f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3428f8: 0xa5e90000  sh          $t1, 0x0($t7)
    ctx->pc = 0x3428f8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x3428fc: 0xa5e40002  sh          $a0, 0x2($t7)
    ctx->pc = 0x3428fcu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x342900: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x342900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x342904: 0x1dc0fff9  bgtz        $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x342904u;
    {
        const bool branch_taken_0x342904 = (GPR_S32(ctx, 14) > 0);
        ctx->pc = 0x342908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342904u;
            // 0x342908: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342904) {
            ctx->pc = 0x3428ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3428ec;
        }
    }
    ctx->pc = 0x34290Cu;
    // 0x34290c: 0x25846ff8  addiu       $a0, $t4, 0x6FF8
    ctx->pc = 0x34290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 28664));
    // 0x342910: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x342910u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x342914: 0xa7ad00e0  sh          $t5, 0xE0($sp)
    ctx->pc = 0x342914u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 13));
    // 0x342918: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x342918u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34291c: 0xa7a400e2  sh          $a0, 0xE2($sp)
    ctx->pc = 0x34291cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 226), (uint16_t)GPR_U32(ctx, 4));
    // 0x342920: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342920u;
    {
        const bool branch_taken_0x342920 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x342924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342920u;
            // 0x342924: 0xa7ab00e4  sh          $t3, 0xE4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342920) {
            ctx->pc = 0x342934u;
            goto label_342934;
        }
    }
    ctx->pc = 0x342928u;
    // 0x342928: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x342928u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34292c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34292Cu;
    {
        const bool branch_taken_0x34292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34292Cu;
            // 0x342930: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34292c) {
            ctx->pc = 0x342950u;
            goto label_342950;
        }
    }
    ctx->pc = 0x342934u;
label_342934:
    // 0x342934: 0x106042  srl         $t4, $s0, 1
    ctx->pc = 0x342934u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x342938: 0x32090001  andi        $t1, $s0, 0x1
    ctx->pc = 0x342938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x34293c: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x34293cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x342940: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x342940u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342944: 0x0  nop
    ctx->pc = 0x342944u;
    // NOP
    // 0x342948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x342948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34294c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34294cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_342950:
    // 0x342950: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x342950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x342954: 0x3c094f00  lui         $t1, 0x4F00
    ctx->pc = 0x342954u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20224 << 16));
    // 0x342958: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x342958u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34295c: 0x0  nop
    ctx->pc = 0x34295cu;
    // NOP
    // 0x342960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342964: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342964u;
    {
        const bool branch_taken_0x342964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342964) {
            ctx->pc = 0x342968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342964u;
            // 0x342968: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34297Cu;
            goto label_34297c;
        }
    }
    ctx->pc = 0x34296Cu;
    // 0x34296c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34296cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342970: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x342970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x342974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342974u;
    {
        const bool branch_taken_0x342974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342974u;
            // 0x342978: 0xc6100  sll         $t4, $t4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342974) {
            ctx->pc = 0x342994u;
            goto label_342994;
        }
    }
    ctx->pc = 0x34297Cu;
label_34297c:
    // 0x34297c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x34297cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x342980: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342980u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342984: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x342984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x342988: 0x0  nop
    ctx->pc = 0x342988u;
    // NOP
    // 0x34298c: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x34298cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x342990: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x342990u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_342994:
    // 0x342994: 0x254a6ff8  addiu       $t2, $t2, 0x6FF8
    ctx->pc = 0x342994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28664));
    // 0x342998: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x342998u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x34299c: 0xa7ad00ea  sh          $t5, 0xEA($sp)
    ctx->pc = 0x34299cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 234), (uint16_t)GPR_U32(ctx, 13));
    // 0x3429a0: 0xa7ab00ee  sh          $t3, 0xEE($sp)
    ctx->pc = 0x3429a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 238), (uint16_t)GPR_U32(ctx, 11));
    // 0x3429a4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3429a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3429a8: 0xa7ac00e6  sh          $t4, 0xE6($sp)
    ctx->pc = 0x3429a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 12));
    // 0x3429ac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3429ACu;
    {
        const bool branch_taken_0x3429ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3429B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3429ACu;
            // 0x3429b0: 0xa7aa00ec  sh          $t2, 0xEC($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 236), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429ac) {
            ctx->pc = 0x3429C0u;
            goto label_3429c0;
        }
    }
    ctx->pc = 0x3429B4u;
    // 0x3429b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3429b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3429b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3429B8u;
    {
        const bool branch_taken_0x3429b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3429BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3429B8u;
            // 0x3429bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429b8) {
            ctx->pc = 0x3429DCu;
            goto label_3429dc;
        }
    }
    ctx->pc = 0x3429C0u;
label_3429c0:
    // 0x3429c0: 0x34842  srl         $t1, $v1, 1
    ctx->pc = 0x3429c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3429c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3429c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3429c8: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3429c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3429cc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3429ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3429d0: 0x0  nop
    ctx->pc = 0x3429d0u;
    // NOP
    // 0x3429d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3429d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3429d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3429d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3429dc:
    // 0x3429dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3429dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3429e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3429e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3429e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3429e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3429e8: 0x0  nop
    ctx->pc = 0x3429e8u;
    // NOP
    // 0x3429ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3429ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3429f0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3429F0u;
    {
        const bool branch_taken_0x3429f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3429f0) {
            ctx->pc = 0x3429F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3429F0u;
            // 0x3429f4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342A08u;
            goto label_342a08;
        }
    }
    ctx->pc = 0x3429F8u;
    // 0x3429f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3429f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3429fc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x3429fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x342a00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342A00u;
    {
        const bool branch_taken_0x342a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A00u;
            // 0x342a04: 0xa7a800f4  sh          $t0, 0xF4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a00) {
            ctx->pc = 0x342A20u;
            goto label_342a20;
        }
    }
    ctx->pc = 0x342A08u;
label_342a08:
    // 0x342a08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x342a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x342a0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342a10: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x342a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x342a14: 0x0  nop
    ctx->pc = 0x342a14u;
    // NOP
    // 0x342a18: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x342a18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x342a1c: 0xa7a800f4  sh          $t0, 0xF4($sp)
    ctx->pc = 0x342a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 8));
label_342a20:
    // 0x342a20: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x342a20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x342a24: 0xa7a800fe  sh          $t0, 0xFE($sp)
    ctx->pc = 0x342a24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 254), (uint16_t)GPR_U32(ctx, 8));
    // 0x342a28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x342a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x342a2c: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x342a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x342a30: 0xa7a900f0  sh          $t1, 0xF0($sp)
    ctx->pc = 0x342a30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 9));
    // 0x342a34: 0xa7a400f6  sh          $a0, 0xF6($sp)
    ctx->pc = 0x342a34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 4));
    // 0x342a38: 0xa7a4010a  sh          $a0, 0x10A($sp)
    ctx->pc = 0x342a38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 4));
    // 0x342a3c: 0xa7a700f8  sh          $a3, 0xF8($sp)
    ctx->pc = 0x342a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 7));
    // 0x342a40: 0xa7a70102  sh          $a3, 0x102($sp)
    ctx->pc = 0x342a40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 7));
    // 0x342a44: 0xa7ac00fa  sh          $t4, 0xFA($sp)
    ctx->pc = 0x342a44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 12));
    // 0x342a48: 0xa7ac010e  sh          $t4, 0x10E($sp)
    ctx->pc = 0x342a48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 270), (uint16_t)GPR_U32(ctx, 12));
    // 0x342a4c: 0xa7aa0100  sh          $t2, 0x100($sp)
    ctx->pc = 0x342a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 10));
    // 0x342a50: 0xa7aa0114  sh          $t2, 0x114($sp)
    ctx->pc = 0x342a50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 10));
    // 0x342a54: 0xa7a90104  sh          $t1, 0x104($sp)
    ctx->pc = 0x342a54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 9));
    // 0x342a58: 0xa7a90118  sh          $t1, 0x118($sp)
    ctx->pc = 0x342a58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 280), (uint16_t)GPR_U32(ctx, 9));
    // 0x342a5c: 0xa7a60108  sh          $a2, 0x108($sp)
    ctx->pc = 0x342a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 6));
    // 0x342a60: 0xa7a60112  sh          $a2, 0x112($sp)
    ctx->pc = 0x342a60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 274), (uint16_t)GPR_U32(ctx, 6));
    // 0x342a64: 0xa7a5010c  sh          $a1, 0x10C($sp)
    ctx->pc = 0x342a64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 268), (uint16_t)GPR_U32(ctx, 5));
    // 0x342a68: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x342A68u;
    {
        const bool branch_taken_0x342a68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A68u;
            // 0x342a6c: 0xa7a50116  sh          $a1, 0x116($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 278), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a68) {
            ctx->pc = 0x342A8Cu;
            goto label_342a8c;
        }
    }
    ctx->pc = 0x342A70u;
label_342a70:
    // 0x342a70: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x342a70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x342a74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x342a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x342a78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x342a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x342a7c: 0x0  nop
    ctx->pc = 0x342a7cu;
    // NOP
    // 0x342a80: 0x0  nop
    ctx->pc = 0x342a80u;
    // NOP
    // 0x342a84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x342A84u;
    {
        const bool branch_taken_0x342a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x342a84) {
            ctx->pc = 0x342A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342a70;
        }
    }
    ctx->pc = 0x342A8Cu;
label_342a8c:
    // 0x342a8c: 0x2b62021  addu        $a0, $s5, $s6
    ctx->pc = 0x342a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x342a90: 0x8eb30068  lw          $s3, 0x68($s5)
    ctx->pc = 0x342a90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x342a94: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x342a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342a98: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x342a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x342a9c: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x342a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x342aa0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x342aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x342aa4: 0x24950054  addiu       $s5, $a0, 0x54
    ctx->pc = 0x342aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x342aa8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x342aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x342aac: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x342aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x342ab0: 0x8c7089f0  lw          $s0, -0x7610($v1)
    ctx->pc = 0x342ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x342ab4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x342ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x342ab8: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x342ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
    // 0x342abc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x342abcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342ac0: 0x0  nop
    ctx->pc = 0x342ac0u;
    // NOP
    // 0x342ac4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x342ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x342ac8: 0x92040029  lbu         $a0, 0x29($s0)
    ctx->pc = 0x342ac8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x342acc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x342accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x342ad0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x342ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x342ad4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x342ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x342ad8: 0xc4600d70  lwc1        $f0, 0xD70($v1)
    ctx->pc = 0x342ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342adc: 0x8c920160  lw          $s2, 0x160($a0)
    ctx->pc = 0x342adcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x342ae0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x342ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342ae4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x342AE4u;
    {
        const bool branch_taken_0x342ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342AE4u;
            // 0x342ae8: 0xe7a1016c  swc1        $f1, 0x16C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ae4) {
            ctx->pc = 0x342AF4u;
            goto label_342af4;
        }
    }
    ctx->pc = 0x342AECu;
    // 0x342aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x342AECu;
    {
        const bool branch_taken_0x342aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342AECu;
            // 0x342af0: 0x27a3016c  addiu       $v1, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342aec) {
            ctx->pc = 0x342AFCu;
            goto label_342afc;
        }
    }
    ctx->pc = 0x342AF4u;
label_342af4:
    // 0x342af4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x342af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x342af8: 0x24630d70  addiu       $v1, $v1, 0xD70
    ctx->pc = 0x342af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3440));
label_342afc:
    // 0x342afc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x342afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x342b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342b04: 0x0  nop
    ctx->pc = 0x342b04u;
    // NOP
    // 0x342b08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x342b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342b0c: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x342B0Cu;
    {
        const bool branch_taken_0x342b0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342B0Cu;
            // 0x342b10: 0xe7a1016c  swc1        $f1, 0x16C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b0c) {
            ctx->pc = 0x342CA4u;
            goto label_342ca4;
        }
    }
    ctx->pc = 0x342B14u;
    // 0x342b14: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x342b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x342b18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x342b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x342b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342b20: 0x0  nop
    ctx->pc = 0x342b20u;
    // NOP
    // 0x342b24: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x342b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x342b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342b2c: 0x0  nop
    ctx->pc = 0x342b2cu;
    // NOP
    // 0x342b30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342b34: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342B34u;
    {
        const bool branch_taken_0x342b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342b34) {
            ctx->pc = 0x342B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342B34u;
            // 0x342b38: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342B4Cu;
            goto label_342b4c;
        }
    }
    ctx->pc = 0x342B3Cu;
    // 0x342b3c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342b40: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x342b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x342b44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342B44u;
    {
        const bool branch_taken_0x342b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342B44u;
            // 0x342b48: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b44) {
            ctx->pc = 0x342B64u;
            goto label_342b64;
        }
    }
    ctx->pc = 0x342B4Cu;
label_342b4c:
    // 0x342b4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x342b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x342b50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342b50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342b54: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x342b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x342b58: 0x0  nop
    ctx->pc = 0x342b58u;
    // NOP
    // 0x342b5c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x342b5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x342b60: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x342b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_342b64:
    // 0x342b64: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x342b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x342b68: 0xc05750c  jal         func_15D430
    ctx->pc = 0x342B68u;
    SET_GPR_U32(ctx, 31, 0x342B70u);
    ctx->pc = 0x342B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342B68u;
            // 0x342b6c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342B70u; }
        if (ctx->pc != 0x342B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342B70u; }
        if (ctx->pc != 0x342B70u) { return; }
    }
    ctx->pc = 0x342B70u;
label_342b70:
    // 0x342b70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x342b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342b74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x342b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x342b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x342b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x342b7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x342B7Cu;
    {
        const bool branch_taken_0x342b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342B7Cu;
            // 0x342b80: 0xde660000  ld          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b7c) {
            ctx->pc = 0x342B98u;
            goto label_342b98;
        }
    }
    ctx->pc = 0x342B84u;
    // 0x342b84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x342b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x342b88: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x342b88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x342b8c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x342b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x342b90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342B90u;
    {
        const bool branch_taken_0x342b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342B90u;
            // 0x342b94: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b90) {
            ctx->pc = 0x342BA8u;
            goto label_342ba8;
        }
    }
    ctx->pc = 0x342B98u;
label_342b98:
    // 0x342b98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x342b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x342b9c: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x342b9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x342ba0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x342ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x342ba4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x342ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_342ba8:
    // 0x342ba8: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x342ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x342bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342bb0: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x342bb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x342bb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x342bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x342bb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x342bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x342bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342bc0: 0xc057540  jal         func_15D500
    ctx->pc = 0x342BC0u;
    SET_GPR_U32(ctx, 31, 0x342BC8u);
    ctx->pc = 0x342BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342BC0u;
            // 0x342bc4: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342BC8u; }
        if (ctx->pc != 0x342BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342BC8u; }
        if (ctx->pc != 0x342BC8u) { return; }
    }
    ctx->pc = 0x342BC8u;
label_342bc8:
    // 0x342bc8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x342bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342bcc: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x342bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_342bd0:
    // 0x342bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342bd4: 0xde660000  ld          $a2, 0x0($s3)
    ctx->pc = 0x342bd4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x342bd8: 0xde670008  ld          $a3, 0x8($s3)
    ctx->pc = 0x342bd8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x342bdc: 0xc057540  jal         func_15D500
    ctx->pc = 0x342BDCu;
    SET_GPR_U32(ctx, 31, 0x342BE4u);
    ctx->pc = 0x342BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342BDCu;
            // 0x342be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342BE4u; }
        if (ctx->pc != 0x342BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342BE4u; }
        if (ctx->pc != 0x342BE4u) { return; }
    }
    ctx->pc = 0x342BE4u;
label_342be4:
    // 0x342be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x342be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x342be8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x342be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x342bec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x342BECu;
    {
        const bool branch_taken_0x342bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342bec) {
            ctx->pc = 0x342BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342BECu;
            // 0x342bf0: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x342BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342bd0;
        }
    }
    ctx->pc = 0x342BF4u;
    // 0x342bf4: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x342bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_342bf8:
    // 0x342bf8: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x342bf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x342bfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x342bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342c00: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x342c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x342c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c08: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x342c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x342c0c: 0x34427f7f  ori         $v0, $v0, 0x7F7F
    ctx->pc = 0x342c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
    // 0x342c10: 0x943818  mult        $a3, $a0, $s4
    ctx->pc = 0x342c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x342c14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x342c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x342c18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x342c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x342c1c: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x342c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x342c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x342c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x342c28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x342c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x342c2c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x342c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x342c30: 0xc057540  jal         func_15D500
    ctx->pc = 0x342C30u;
    SET_GPR_U32(ctx, 31, 0x342C38u);
    ctx->pc = 0x342C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342C30u;
            // 0x342c34: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342C38u; }
        if (ctx->pc != 0x342C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342C38u; }
        if (ctx->pc != 0x342C38u) { return; }
    }
    ctx->pc = 0x342C38u;
label_342c38:
    // 0x342c38: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x342c38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x342c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c40: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x342c40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x342c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x342c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x342c4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x342c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x342c50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x342c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x342c54: 0xc057540  jal         func_15D500
    ctx->pc = 0x342C54u;
    SET_GPR_U32(ctx, 31, 0x342C5Cu);
    ctx->pc = 0x342C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342C54u;
            // 0x342c58: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342C5Cu; }
        if (ctx->pc != 0x342C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342C5Cu; }
        if (ctx->pc != 0x342C5Cu) { return; }
    }
    ctx->pc = 0x342C5Cu;
label_342c5c:
    // 0x342c5c: 0x96470002  lhu         $a3, 0x2($s2)
    ctx->pc = 0x342c5cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x342c60: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x342c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x342c64: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x342c64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x342c68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x342c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x342c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c70: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x342c70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x342c74: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x342c74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x342c78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x342c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x342c7c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x342c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x342c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c84: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x342c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x342c88: 0xc057540  jal         func_15D500
    ctx->pc = 0x342C88u;
    SET_GPR_U32(ctx, 31, 0x342C90u);
    ctx->pc = 0x342C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342C88u;
            // 0x342c8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342C90u; }
        if (ctx->pc != 0x342C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342C90u; }
        if (ctx->pc != 0x342C90u) { return; }
    }
    ctx->pc = 0x342C90u;
label_342c90:
    // 0x342c90: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x342c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x342c94: 0x1660ffd8  bnez        $s3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x342C94u;
    {
        const bool branch_taken_0x342c94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x342C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342C94u;
            // 0x342c98: 0x2652000a  addiu       $s2, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c94) {
            ctx->pc = 0x342BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342bf8;
        }
    }
    ctx->pc = 0x342C9Cu;
    // 0x342c9c: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x342C9Cu;
    SET_GPR_U32(ctx, 31, 0x342CA4u);
    ctx->pc = 0x342CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342C9Cu;
            // 0x342ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342CA4u; }
        if (ctx->pc != 0x342CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342CA4u; }
        if (ctx->pc != 0x342CA4u) { return; }
    }
    ctx->pc = 0x342CA4u;
label_342ca4:
    // 0x342ca4: 0x93a300df  lbu         $v1, 0xDF($sp)
    ctx->pc = 0x342ca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x342ca8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342CA8u;
    {
        const bool branch_taken_0x342ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x342ca8) {
            ctx->pc = 0x342CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342CA8u;
            // 0x342cac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x342CB8u;
            goto label_342cb8;
        }
    }
    ctx->pc = 0x342CB0u;
    // 0x342cb0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x342cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x342cb4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x342cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_342cb8:
    // 0x342cb8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x342cb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x342cbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x342cbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x342cc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x342cc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x342cc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x342cc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x342cc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x342cc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x342ccc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x342cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342cd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x342CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342CDCu;
            // 0x342ce0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x342CE4u;
    // 0x342ce4: 0x0  nop
    ctx->pc = 0x342ce4u;
    // NOP
    // 0x342ce8: 0x0  nop
    ctx->pc = 0x342ce8u;
    // NOP
    // 0x342cec: 0x0  nop
    ctx->pc = 0x342cecu;
    // NOP
}
