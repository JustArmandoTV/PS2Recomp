#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8430
// Address: 0x2f8430 - 0x2f8770
void sub_002F8430_0x2f8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8430_0x2f8430");
#endif

    switch (ctx->pc) {
        case 0x2f8430u: goto label_2f8430;
        case 0x2f8434u: goto label_2f8434;
        case 0x2f8438u: goto label_2f8438;
        case 0x2f843cu: goto label_2f843c;
        case 0x2f8440u: goto label_2f8440;
        case 0x2f8444u: goto label_2f8444;
        case 0x2f8448u: goto label_2f8448;
        case 0x2f844cu: goto label_2f844c;
        case 0x2f8450u: goto label_2f8450;
        case 0x2f8454u: goto label_2f8454;
        case 0x2f8458u: goto label_2f8458;
        case 0x2f845cu: goto label_2f845c;
        case 0x2f8460u: goto label_2f8460;
        case 0x2f8464u: goto label_2f8464;
        case 0x2f8468u: goto label_2f8468;
        case 0x2f846cu: goto label_2f846c;
        case 0x2f8470u: goto label_2f8470;
        case 0x2f8474u: goto label_2f8474;
        case 0x2f8478u: goto label_2f8478;
        case 0x2f847cu: goto label_2f847c;
        case 0x2f8480u: goto label_2f8480;
        case 0x2f8484u: goto label_2f8484;
        case 0x2f8488u: goto label_2f8488;
        case 0x2f848cu: goto label_2f848c;
        case 0x2f8490u: goto label_2f8490;
        case 0x2f8494u: goto label_2f8494;
        case 0x2f8498u: goto label_2f8498;
        case 0x2f849cu: goto label_2f849c;
        case 0x2f84a0u: goto label_2f84a0;
        case 0x2f84a4u: goto label_2f84a4;
        case 0x2f84a8u: goto label_2f84a8;
        case 0x2f84acu: goto label_2f84ac;
        case 0x2f84b0u: goto label_2f84b0;
        case 0x2f84b4u: goto label_2f84b4;
        case 0x2f84b8u: goto label_2f84b8;
        case 0x2f84bcu: goto label_2f84bc;
        case 0x2f84c0u: goto label_2f84c0;
        case 0x2f84c4u: goto label_2f84c4;
        case 0x2f84c8u: goto label_2f84c8;
        case 0x2f84ccu: goto label_2f84cc;
        case 0x2f84d0u: goto label_2f84d0;
        case 0x2f84d4u: goto label_2f84d4;
        case 0x2f84d8u: goto label_2f84d8;
        case 0x2f84dcu: goto label_2f84dc;
        case 0x2f84e0u: goto label_2f84e0;
        case 0x2f84e4u: goto label_2f84e4;
        case 0x2f84e8u: goto label_2f84e8;
        case 0x2f84ecu: goto label_2f84ec;
        case 0x2f84f0u: goto label_2f84f0;
        case 0x2f84f4u: goto label_2f84f4;
        case 0x2f84f8u: goto label_2f84f8;
        case 0x2f84fcu: goto label_2f84fc;
        case 0x2f8500u: goto label_2f8500;
        case 0x2f8504u: goto label_2f8504;
        case 0x2f8508u: goto label_2f8508;
        case 0x2f850cu: goto label_2f850c;
        case 0x2f8510u: goto label_2f8510;
        case 0x2f8514u: goto label_2f8514;
        case 0x2f8518u: goto label_2f8518;
        case 0x2f851cu: goto label_2f851c;
        case 0x2f8520u: goto label_2f8520;
        case 0x2f8524u: goto label_2f8524;
        case 0x2f8528u: goto label_2f8528;
        case 0x2f852cu: goto label_2f852c;
        case 0x2f8530u: goto label_2f8530;
        case 0x2f8534u: goto label_2f8534;
        case 0x2f8538u: goto label_2f8538;
        case 0x2f853cu: goto label_2f853c;
        case 0x2f8540u: goto label_2f8540;
        case 0x2f8544u: goto label_2f8544;
        case 0x2f8548u: goto label_2f8548;
        case 0x2f854cu: goto label_2f854c;
        case 0x2f8550u: goto label_2f8550;
        case 0x2f8554u: goto label_2f8554;
        case 0x2f8558u: goto label_2f8558;
        case 0x2f855cu: goto label_2f855c;
        case 0x2f8560u: goto label_2f8560;
        case 0x2f8564u: goto label_2f8564;
        case 0x2f8568u: goto label_2f8568;
        case 0x2f856cu: goto label_2f856c;
        case 0x2f8570u: goto label_2f8570;
        case 0x2f8574u: goto label_2f8574;
        case 0x2f8578u: goto label_2f8578;
        case 0x2f857cu: goto label_2f857c;
        case 0x2f8580u: goto label_2f8580;
        case 0x2f8584u: goto label_2f8584;
        case 0x2f8588u: goto label_2f8588;
        case 0x2f858cu: goto label_2f858c;
        case 0x2f8590u: goto label_2f8590;
        case 0x2f8594u: goto label_2f8594;
        case 0x2f8598u: goto label_2f8598;
        case 0x2f859cu: goto label_2f859c;
        case 0x2f85a0u: goto label_2f85a0;
        case 0x2f85a4u: goto label_2f85a4;
        case 0x2f85a8u: goto label_2f85a8;
        case 0x2f85acu: goto label_2f85ac;
        case 0x2f85b0u: goto label_2f85b0;
        case 0x2f85b4u: goto label_2f85b4;
        case 0x2f85b8u: goto label_2f85b8;
        case 0x2f85bcu: goto label_2f85bc;
        case 0x2f85c0u: goto label_2f85c0;
        case 0x2f85c4u: goto label_2f85c4;
        case 0x2f85c8u: goto label_2f85c8;
        case 0x2f85ccu: goto label_2f85cc;
        case 0x2f85d0u: goto label_2f85d0;
        case 0x2f85d4u: goto label_2f85d4;
        case 0x2f85d8u: goto label_2f85d8;
        case 0x2f85dcu: goto label_2f85dc;
        case 0x2f85e0u: goto label_2f85e0;
        case 0x2f85e4u: goto label_2f85e4;
        case 0x2f85e8u: goto label_2f85e8;
        case 0x2f85ecu: goto label_2f85ec;
        case 0x2f85f0u: goto label_2f85f0;
        case 0x2f85f4u: goto label_2f85f4;
        case 0x2f85f8u: goto label_2f85f8;
        case 0x2f85fcu: goto label_2f85fc;
        case 0x2f8600u: goto label_2f8600;
        case 0x2f8604u: goto label_2f8604;
        case 0x2f8608u: goto label_2f8608;
        case 0x2f860cu: goto label_2f860c;
        case 0x2f8610u: goto label_2f8610;
        case 0x2f8614u: goto label_2f8614;
        case 0x2f8618u: goto label_2f8618;
        case 0x2f861cu: goto label_2f861c;
        case 0x2f8620u: goto label_2f8620;
        case 0x2f8624u: goto label_2f8624;
        case 0x2f8628u: goto label_2f8628;
        case 0x2f862cu: goto label_2f862c;
        case 0x2f8630u: goto label_2f8630;
        case 0x2f8634u: goto label_2f8634;
        case 0x2f8638u: goto label_2f8638;
        case 0x2f863cu: goto label_2f863c;
        case 0x2f8640u: goto label_2f8640;
        case 0x2f8644u: goto label_2f8644;
        case 0x2f8648u: goto label_2f8648;
        case 0x2f864cu: goto label_2f864c;
        case 0x2f8650u: goto label_2f8650;
        case 0x2f8654u: goto label_2f8654;
        case 0x2f8658u: goto label_2f8658;
        case 0x2f865cu: goto label_2f865c;
        case 0x2f8660u: goto label_2f8660;
        case 0x2f8664u: goto label_2f8664;
        case 0x2f8668u: goto label_2f8668;
        case 0x2f866cu: goto label_2f866c;
        case 0x2f8670u: goto label_2f8670;
        case 0x2f8674u: goto label_2f8674;
        case 0x2f8678u: goto label_2f8678;
        case 0x2f867cu: goto label_2f867c;
        case 0x2f8680u: goto label_2f8680;
        case 0x2f8684u: goto label_2f8684;
        case 0x2f8688u: goto label_2f8688;
        case 0x2f868cu: goto label_2f868c;
        case 0x2f8690u: goto label_2f8690;
        case 0x2f8694u: goto label_2f8694;
        case 0x2f8698u: goto label_2f8698;
        case 0x2f869cu: goto label_2f869c;
        case 0x2f86a0u: goto label_2f86a0;
        case 0x2f86a4u: goto label_2f86a4;
        case 0x2f86a8u: goto label_2f86a8;
        case 0x2f86acu: goto label_2f86ac;
        case 0x2f86b0u: goto label_2f86b0;
        case 0x2f86b4u: goto label_2f86b4;
        case 0x2f86b8u: goto label_2f86b8;
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86c0u: goto label_2f86c0;
        case 0x2f86c4u: goto label_2f86c4;
        case 0x2f86c8u: goto label_2f86c8;
        case 0x2f86ccu: goto label_2f86cc;
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f86d4u: goto label_2f86d4;
        case 0x2f86d8u: goto label_2f86d8;
        case 0x2f86dcu: goto label_2f86dc;
        case 0x2f86e0u: goto label_2f86e0;
        case 0x2f86e4u: goto label_2f86e4;
        case 0x2f86e8u: goto label_2f86e8;
        case 0x2f86ecu: goto label_2f86ec;
        case 0x2f86f0u: goto label_2f86f0;
        case 0x2f86f4u: goto label_2f86f4;
        case 0x2f86f8u: goto label_2f86f8;
        case 0x2f86fcu: goto label_2f86fc;
        case 0x2f8700u: goto label_2f8700;
        case 0x2f8704u: goto label_2f8704;
        case 0x2f8708u: goto label_2f8708;
        case 0x2f870cu: goto label_2f870c;
        case 0x2f8710u: goto label_2f8710;
        case 0x2f8714u: goto label_2f8714;
        case 0x2f8718u: goto label_2f8718;
        case 0x2f871cu: goto label_2f871c;
        case 0x2f8720u: goto label_2f8720;
        case 0x2f8724u: goto label_2f8724;
        case 0x2f8728u: goto label_2f8728;
        case 0x2f872cu: goto label_2f872c;
        case 0x2f8730u: goto label_2f8730;
        case 0x2f8734u: goto label_2f8734;
        case 0x2f8738u: goto label_2f8738;
        case 0x2f873cu: goto label_2f873c;
        case 0x2f8740u: goto label_2f8740;
        case 0x2f8744u: goto label_2f8744;
        case 0x2f8748u: goto label_2f8748;
        case 0x2f874cu: goto label_2f874c;
        case 0x2f8750u: goto label_2f8750;
        case 0x2f8754u: goto label_2f8754;
        case 0x2f8758u: goto label_2f8758;
        case 0x2f875cu: goto label_2f875c;
        case 0x2f8760u: goto label_2f8760;
        case 0x2f8764u: goto label_2f8764;
        case 0x2f8768u: goto label_2f8768;
        case 0x2f876cu: goto label_2f876c;
        default: break;
    }

    ctx->pc = 0x2f8430u;

label_2f8430:
    // 0x2f8430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f8430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f8434:
    // 0x2f8434: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f8434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f8438:
    // 0x2f8438: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f843c:
    // 0x2f843c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f8440:
    // 0x2f8440: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f8440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f8444:
    // 0x2f8444: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f8444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8448:
    // 0x2f8448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f844c:
    // 0x2f844c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f844cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f8450:
    // 0x2f8450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f8454:
    // 0x2f8454: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f8454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f8458:
    // 0x2f8458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f845c:
    // 0x2f845c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f8460:
    // 0x2f8460: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f8464:
    // 0x2f8464: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2f8464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f8468:
    // 0x2f8468: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x2f8468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_2f846c:
    // 0x2f846c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f846cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8470:
    // 0x2f8470: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f8470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f8474:
    // 0x2f8474: 0x320f809  jalr        $t9
label_2f8478:
    if (ctx->pc == 0x2F8478u) {
        ctx->pc = 0x2F8478u;
            // 0x2f8478: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2F847Cu;
        goto label_2f847c;
    }
    ctx->pc = 0x2F8474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F847Cu);
        ctx->pc = 0x2F8478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8474u;
            // 0x2f8478: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F847Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F847Cu; }
            if (ctx->pc != 0x2F847Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F847Cu;
label_2f847c:
    // 0x2f847c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f847cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8480:
    // 0x2f8480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f8480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f8484:
    // 0x2f8484: 0xc0be1dc  jal         func_2F8770
label_2f8488:
    if (ctx->pc == 0x2F8488u) {
        ctx->pc = 0x2F8488u;
            // 0x2f8488: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F848Cu;
        goto label_2f848c;
    }
    ctx->pc = 0x2F8484u;
    SET_GPR_U32(ctx, 31, 0x2F848Cu);
    ctx->pc = 0x2F8488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8484u;
            // 0x2f8488: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8770u;
    if (runtime->hasFunction(0x2F8770u)) {
        auto targetFn = runtime->lookupFunction(0x2F8770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F848Cu; }
        if (ctx->pc != 0x2F848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8770_0x2f8770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F848Cu; }
        if (ctx->pc != 0x2F848Cu) { return; }
    }
    ctx->pc = 0x2F848Cu;
label_2f848c:
    // 0x2f848c: 0x8eb20030  lw          $s2, 0x30($s5)
    ctx->pc = 0x2f848cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_2f8490:
    // 0x2f8490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8494:
    // 0x2f8494: 0xaeb000cc  sw          $s0, 0xCC($s5)
    ctx->pc = 0x2f8494u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 16));
label_2f8498:
    // 0x2f8498: 0xaea000d0  sw          $zero, 0xD0($s5)
    ctx->pc = 0x2f8498u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 0));
label_2f849c:
    // 0x2f849c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f849cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f84a0:
    // 0x2f84a0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2f84a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2f84a4:
    // 0x2f84a4: 0x320f809  jalr        $t9
label_2f84a8:
    if (ctx->pc == 0x2F84A8u) {
        ctx->pc = 0x2F84A8u;
            // 0x2f84a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F84ACu;
        goto label_2f84ac;
    }
    ctx->pc = 0x2F84A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F84ACu);
        ctx->pc = 0x2F84A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84A4u;
            // 0x2f84a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F84ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F84ACu; }
            if (ctx->pc != 0x2F84ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2F84ACu;
label_2f84ac:
    // 0x2f84ac: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x2f84acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2f84b0:
    // 0x2f84b0: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x2f84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
label_2f84b4:
    // 0x2f84b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f84b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f84b8:
    // 0x2f84b8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2f84bc:
    if (ctx->pc == 0x2F84BCu) {
        ctx->pc = 0x2F84BCu;
            // 0x2f84bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2F84C0u;
        goto label_2f84c0;
    }
    ctx->pc = 0x2F84B8u;
    {
        const bool branch_taken_0x2f84b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f84b8) {
            ctx->pc = 0x2F84BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84B8u;
            // 0x2f84bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F84CCu;
            goto label_2f84cc;
        }
    }
    ctx->pc = 0x2F84C0u;
label_2f84c0:
    // 0x2f84c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f84c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f84c4:
    // 0x2f84c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f84c8:
    if (ctx->pc == 0x2F84C8u) {
        ctx->pc = 0x2F84C8u;
            // 0x2f84c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F84CCu;
        goto label_2f84cc;
    }
    ctx->pc = 0x2F84C4u;
    {
        const bool branch_taken_0x2f84c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84C4u;
            // 0x2f84c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84c4) {
            ctx->pc = 0x2F84E4u;
            goto label_2f84e4;
        }
    }
    ctx->pc = 0x2F84CCu;
label_2f84cc:
    // 0x2f84cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f84d0:
    // 0x2f84d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f84d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f84d4:
    // 0x2f84d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f84d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f84d8:
    // 0x2f84d8: 0x0  nop
    ctx->pc = 0x2f84d8u;
    // NOP
label_2f84dc:
    // 0x2f84dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f84dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2f84e0:
    // 0x2f84e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f84e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f84e4:
    // 0x2f84e4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f84e8:
    // 0x2f84e8: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x2f84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_2f84ec:
    // 0x2f84ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f84ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f84f0:
    // 0x2f84f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f84f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f84f4:
    // 0x2f84f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f84f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f84f8:
    // 0x2f84f8: 0xc0be25c  jal         func_2F8970
label_2f84fc:
    if (ctx->pc == 0x2F84FCu) {
        ctx->pc = 0x2F84FCu;
            // 0x2f84fc: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->pc = 0x2F8500u;
        goto label_2f8500;
    }
    ctx->pc = 0x2F84F8u;
    SET_GPR_U32(ctx, 31, 0x2F8500u);
    ctx->pc = 0x2F84FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84F8u;
            // 0x2f84fc: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8970u;
    if (runtime->hasFunction(0x2F8970u)) {
        auto targetFn = runtime->lookupFunction(0x2F8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8500u; }
        if (ctx->pc != 0x2F8500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8970_0x2f8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8500u; }
        if (ctx->pc != 0x2F8500u) { return; }
    }
    ctx->pc = 0x2F8500u;
label_2f8500:
    // 0x2f8500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8504:
    // 0x2f8504: 0x56020061  bnel        $s0, $v0, . + 4 + (0x61 << 2)
label_2f8508:
    if (ctx->pc == 0x2F8508u) {
        ctx->pc = 0x2F8508u;
            // 0x2f8508: 0x8ea4004c  lw          $a0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->pc = 0x2F850Cu;
        goto label_2f850c;
    }
    ctx->pc = 0x2F8504u;
    {
        const bool branch_taken_0x2f8504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f8504) {
            ctx->pc = 0x2F8508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8504u;
            // 0x2f8508: 0x8ea4004c  lw          $a0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F868Cu;
            goto label_2f868c;
        }
    }
    ctx->pc = 0x2F850Cu;
label_2f850c:
    // 0x2f850c: 0x8ea200c8  lw          $v0, 0xC8($s5)
    ctx->pc = 0x2f850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f8510:
    // 0x2f8510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f8510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8514:
    // 0x2f8514: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f8514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8518:
    // 0x2f8518: 0x8ea60044  lw          $a2, 0x44($s5)
    ctx->pc = 0x2f8518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_2f851c:
    // 0x2f851c: 0x8c500550  lw          $s0, 0x550($v0)
    ctx->pc = 0x2f851cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_2f8520:
    // 0x2f8520: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x2f8520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_2f8524:
    // 0x2f8524: 0x320f809  jalr        $t9
label_2f8528:
    if (ctx->pc == 0x2F8528u) {
        ctx->pc = 0x2F8528u;
            // 0x2f8528: 0x26a50034  addiu       $a1, $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
        ctx->pc = 0x2F852Cu;
        goto label_2f852c;
    }
    ctx->pc = 0x2F8524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F852Cu);
        ctx->pc = 0x2F8528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8524u;
            // 0x2f8528: 0x26a50034  addiu       $a1, $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F852Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F852Cu; }
            if (ctx->pc != 0x2F852Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F852Cu;
label_2f852c:
    // 0x2f852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8530:
    // 0x2f8530: 0x54430024  bnel        $v0, $v1, . + 4 + (0x24 << 2)
label_2f8534:
    if (ctx->pc == 0x2F8534u) {
        ctx->pc = 0x2F8534u;
            // 0x2f8534: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2F8538u;
        goto label_2f8538;
    }
    ctx->pc = 0x2F8530u;
    {
        const bool branch_taken_0x2f8530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8530) {
            ctx->pc = 0x2F8534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8530u;
            // 0x2f8534: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F85C4u;
            goto label_2f85c4;
        }
    }
    ctx->pc = 0x2F8538u;
label_2f8538:
    // 0x2f8538: 0xaea300cc  sw          $v1, 0xCC($s5)
    ctx->pc = 0x2f8538u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
label_2f853c:
    // 0x2f853c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f853cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8540:
    // 0x2f8540: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f8540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f8544:
    // 0x2f8544: 0x320f809  jalr        $t9
label_2f8548:
    if (ctx->pc == 0x2F8548u) {
        ctx->pc = 0x2F8548u;
            // 0x2f8548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F854Cu;
        goto label_2f854c;
    }
    ctx->pc = 0x2F8544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F854Cu);
        ctx->pc = 0x2F8548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8544u;
            // 0x2f8548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F854Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F854Cu; }
            if (ctx->pc != 0x2F854Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F854Cu;
label_2f854c:
    // 0x2f854c: 0x8206010d  lb          $a2, 0x10D($s0)
    ctx->pc = 0x2f854cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2f8550:
    // 0x2f8550: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8554:
    // 0x2f8554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f8554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8558:
    // 0x2f8558: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f8558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f855c:
    // 0x2f855c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2f855cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f8560:
    // 0x2f8560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8564:
    // 0x2f8564: 0xa206010e  sb          $a2, 0x10E($s0)
    ctx->pc = 0x2f8564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 6));
label_2f8568:
    // 0x2f8568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f8568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f856c:
    // 0x2f856c: 0xa202010d  sb          $v0, 0x10D($s0)
    ctx->pc = 0x2f856cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 2));
label_2f8570:
    // 0x2f8570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8574:
    // 0x2f8574: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2f8578:
    // 0x2f8578: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x2f8578u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f857c:
    // 0x2f857c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2f857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f8580:
    // 0x2f8580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8584:
    // 0x2f8584: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f8584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f8588:
    // 0x2f8588: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f8588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2f858c:
    // 0x2f858c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2f858cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2f8590:
    // 0x2f8590: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2f8590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f8594:
    // 0x2f8594: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2f8594u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2f8598:
    // 0x2f8598: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f8598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f859c:
    // 0x2f859c: 0x320f809  jalr        $t9
label_2f85a0:
    if (ctx->pc == 0x2F85A0u) {
        ctx->pc = 0x2F85A0u;
            // 0x2f85a0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2F85A4u;
        goto label_2f85a4;
    }
    ctx->pc = 0x2F859Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F85A4u);
        ctx->pc = 0x2F85A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F859Cu;
            // 0x2f85a0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F85A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F85A4u; }
            if (ctx->pc != 0x2F85A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F85A4u;
label_2f85a4:
    // 0x2f85a4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2f85a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f85a8:
    // 0x2f85a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f85a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f85ac:
    // 0x2f85ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f85acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f85b0:
    // 0x2f85b0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f85b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f85b4:
    // 0x2f85b4: 0x320f809  jalr        $t9
label_2f85b8:
    if (ctx->pc == 0x2F85B8u) {
        ctx->pc = 0x2F85B8u;
            // 0x2f85b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F85BCu;
        goto label_2f85bc;
    }
    ctx->pc = 0x2F85B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F85BCu);
        ctx->pc = 0x2F85B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85B4u;
            // 0x2f85b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F85BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F85BCu; }
            if (ctx->pc != 0x2F85BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F85BCu;
label_2f85bc:
    // 0x2f85bc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2f85c0:
    if (ctx->pc == 0x2F85C0u) {
        ctx->pc = 0x2F85C0u;
            // 0x2f85c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F85C4u;
        goto label_2f85c4;
    }
    ctx->pc = 0x2F85BCu;
    {
        const bool branch_taken_0x2f85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85BCu;
            // 0x2f85c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85bc) {
            ctx->pc = 0x2F86B8u;
            goto label_2f86b8;
        }
    }
    ctx->pc = 0x2F85C4u;
label_2f85c4:
    // 0x2f85c4: 0x8211010d  lb          $s1, 0x10D($s0)
    ctx->pc = 0x2f85c4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2f85c8:
    // 0x2f85c8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f85c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f85cc:
    // 0x2f85cc: 0x320f809  jalr        $t9
label_2f85d0:
    if (ctx->pc == 0x2F85D0u) {
        ctx->pc = 0x2F85D0u;
            // 0x2f85d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F85D4u;
        goto label_2f85d4;
    }
    ctx->pc = 0x2F85CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F85D4u);
        ctx->pc = 0x2F85D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85CCu;
            // 0x2f85d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F85D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F85D4u; }
            if (ctx->pc != 0x2F85D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F85D4u;
label_2f85d4:
    // 0x2f85d4: 0x12220037  beq         $s1, $v0, . + 4 + (0x37 << 2)
label_2f85d8:
    if (ctx->pc == 0x2F85D8u) {
        ctx->pc = 0x2F85DCu;
        goto label_2f85dc;
    }
    ctx->pc = 0x2F85D4u;
    {
        const bool branch_taken_0x2f85d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f85d4) {
            ctx->pc = 0x2F86B4u;
            goto label_2f86b4;
        }
    }
    ctx->pc = 0x2F85DCu;
label_2f85dc:
    // 0x2f85dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f85dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f85e0:
    // 0x2f85e0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f85e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f85e4:
    // 0x2f85e4: 0x320f809  jalr        $t9
label_2f85e8:
    if (ctx->pc == 0x2F85E8u) {
        ctx->pc = 0x2F85E8u;
            // 0x2f85e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F85ECu;
        goto label_2f85ec;
    }
    ctx->pc = 0x2F85E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F85ECu);
        ctx->pc = 0x2F85E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85E4u;
            // 0x2f85e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F85ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F85ECu; }
            if (ctx->pc != 0x2F85ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2F85ECu;
label_2f85ec:
    // 0x2f85ec: 0x8206010d  lb          $a2, 0x10D($s0)
    ctx->pc = 0x2f85ecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2f85f0:
    // 0x2f85f0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f85f4:
    // 0x2f85f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f85f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f85f8:
    // 0x2f85f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f85f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f85fc:
    // 0x2f85fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2f85fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f8600:
    // 0x2f8600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8604:
    // 0x2f8604: 0xa206010e  sb          $a2, 0x10E($s0)
    ctx->pc = 0x2f8604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 6));
label_2f8608:
    // 0x2f8608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f8608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f860c:
    // 0x2f860c: 0xa202010d  sb          $v0, 0x10D($s0)
    ctx->pc = 0x2f860cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 2));
label_2f8610:
    // 0x2f8610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8614:
    // 0x2f8614: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x2f8614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2f8618:
    // 0x2f8618: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x2f8618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f861c:
    // 0x2f861c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2f861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f8620:
    // 0x2f8620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8624:
    // 0x2f8624: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f8624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f8628:
    // 0x2f8628: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f8628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2f862c:
    // 0x2f862c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2f862cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2f8630:
    // 0x2f8630: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2f8630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f8634:
    // 0x2f8634: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2f8634u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2f8638:
    // 0x2f8638: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f8638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f863c:
    // 0x2f863c: 0x320f809  jalr        $t9
label_2f8640:
    if (ctx->pc == 0x2F8640u) {
        ctx->pc = 0x2F8640u;
            // 0x2f8640: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2F8644u;
        goto label_2f8644;
    }
    ctx->pc = 0x2F863Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8644u);
        ctx->pc = 0x2F8640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F863Cu;
            // 0x2f8640: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8644u; }
            if (ctx->pc != 0x2F8644u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8644u;
label_2f8644:
    // 0x2f8644: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2f8644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f8648:
    // 0x2f8648: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2f864c:
    // 0x2f864c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2f864cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2f8650:
    // 0x2f8650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f8650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8654:
    // 0x2f8654: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f8654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f8658:
    // 0x2f8658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f865c:
    // 0x2f865c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f865cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f8660:
    // 0x2f8660: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2f8660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2f8664:
    // 0x2f8664: 0x320f809  jalr        $t9
label_2f8668:
    if (ctx->pc == 0x2F8668u) {
        ctx->pc = 0x2F8668u;
            // 0x2f8668: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2F866Cu;
        goto label_2f866c;
    }
    ctx->pc = 0x2F8664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F866Cu);
        ctx->pc = 0x2F8668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8664u;
            // 0x2f8668: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F866Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F866Cu; }
            if (ctx->pc != 0x2F866Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F866Cu;
label_2f866c:
    // 0x2f866c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2f866cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f8670:
    // 0x2f8670: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f8670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f8674:
    // 0x2f8674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8678:
    // 0x2f8678: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f867c:
    // 0x2f867c: 0x320f809  jalr        $t9
label_2f8680:
    if (ctx->pc == 0x2F8680u) {
        ctx->pc = 0x2F8680u;
            // 0x2f8680: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8684u;
        goto label_2f8684;
    }
    ctx->pc = 0x2F867Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8684u);
        ctx->pc = 0x2F8680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F867Cu;
            // 0x2f8680: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8684u; }
            if (ctx->pc != 0x2F8684u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8684u;
label_2f8684:
    // 0x2f8684: 0x1000000b  b           . + 4 + (0xB << 2)
label_2f8688:
    if (ctx->pc == 0x2F8688u) {
        ctx->pc = 0x2F868Cu;
        goto label_2f868c;
    }
    ctx->pc = 0x2F8684u;
    {
        const bool branch_taken_0x2f8684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8684) {
            ctx->pc = 0x2F86B4u;
            goto label_2f86b4;
        }
    }
    ctx->pc = 0x2F868Cu;
label_2f868c:
    // 0x2f868c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8690:
    // 0x2f8690: 0x8ea70048  lw          $a3, 0x48($s5)
    ctx->pc = 0x2f8690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_2f8694:
    // 0x2f8694: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8698:
    // 0x2f8698: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2f8698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2f869c:
    // 0x2f869c: 0x320f809  jalr        $t9
label_2f86a0:
    if (ctx->pc == 0x2F86A0u) {
        ctx->pc = 0x2F86A0u;
            // 0x2f86a0: 0x26a60034  addiu       $a2, $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
        ctx->pc = 0x2F86A4u;
        goto label_2f86a4;
    }
    ctx->pc = 0x2F869Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F86A4u);
        ctx->pc = 0x2F86A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F869Cu;
            // 0x2f86a0: 0x26a60034  addiu       $a2, $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F86A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F86A4u; }
            if (ctx->pc != 0x2F86A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F86A4u;
label_2f86a4:
    // 0x2f86a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f86a8:
    // 0x2f86a8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2f86ac:
    if (ctx->pc == 0x2F86ACu) {
        ctx->pc = 0x2F86B0u;
        goto label_2f86b0;
    }
    ctx->pc = 0x2F86A8u;
    {
        const bool branch_taken_0x2f86a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f86a8) {
            ctx->pc = 0x2F86B4u;
            goto label_2f86b4;
        }
    }
    ctx->pc = 0x2F86B0u;
label_2f86b0:
    // 0x2f86b0: 0xaea300cc  sw          $v1, 0xCC($s5)
    ctx->pc = 0x2f86b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
label_2f86b4:
    // 0x2f86b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f86b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f86b8:
    // 0x2f86b8: 0xc102768  jal         func_409DA0
label_2f86bc:
    if (ctx->pc == 0x2F86BCu) {
        ctx->pc = 0x2F86C0u;
        goto label_2f86c0;
    }
    ctx->pc = 0x2F86B8u;
    SET_GPR_U32(ctx, 31, 0x2F86C0u);
    ctx->pc = 0x409DA0u;
    if (runtime->hasFunction(0x409DA0u)) {
        auto targetFn = runtime->lookupFunction(0x409DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86C0u; }
        if (ctx->pc != 0x2F86C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409DA0_0x409da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86C0u; }
        if (ctx->pc != 0x2F86C0u) { return; }
    }
    ctx->pc = 0x2F86C0u;
label_2f86c0:
    // 0x2f86c0: 0x329000ff  andi        $s0, $s4, 0xFF
    ctx->pc = 0x2f86c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f86c4:
    // 0x2f86c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f86c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f86c8:
    // 0x2f86c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f86c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f86cc:
    // 0x2f86cc: 0xc0bd824  jal         func_2F6090
label_2f86d0:
    if (ctx->pc == 0x2F86D0u) {
        ctx->pc = 0x2F86D0u;
            // 0x2f86d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F86D4u;
        goto label_2f86d4;
    }
    ctx->pc = 0x2F86CCu;
    SET_GPR_U32(ctx, 31, 0x2F86D4u);
    ctx->pc = 0x2F86D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F86CCu;
            // 0x2f86d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6090u;
    if (runtime->hasFunction(0x2F6090u)) {
        auto targetFn = runtime->lookupFunction(0x2F6090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86D4u; }
        if (ctx->pc != 0x2F86D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6090_0x2f6090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F86D4u; }
        if (ctx->pc != 0x2F86D4u) { return; }
    }
    ctx->pc = 0x2F86D4u;
label_2f86d4:
    // 0x2f86d4: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x2f86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_2f86d8:
    // 0x2f86d8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2f86dc:
    // 0x2f86dc: 0x8ea400c8  lw          $a0, 0xC8($s5)
    ctx->pc = 0x2f86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f86e0:
    // 0x2f86e0: 0x24634df0  addiu       $v1, $v1, 0x4DF0
    ctx->pc = 0x2f86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19952));
label_2f86e4:
    // 0x2f86e4: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2f86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2f86e8:
    // 0x2f86e8: 0x8c820e00  lw          $v0, 0xE00($a0)
    ctx->pc = 0x2f86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
label_2f86ec:
    // 0x2f86ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2f86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f86f0:
    // 0x2f86f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2f86f4:
    // 0x2f86f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2f86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2f86f8:
    // 0x2f86f8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2f86f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2f86fc:
    // 0x2f86fc: 0xc075ecc  jal         func_1D7B30
label_2f8700:
    if (ctx->pc == 0x2F8700u) {
        ctx->pc = 0x2F8700u;
            // 0x2f8700: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F8704u;
        goto label_2f8704;
    }
    ctx->pc = 0x2F86FCu;
    SET_GPR_U32(ctx, 31, 0x2F8704u);
    ctx->pc = 0x2F8700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F86FCu;
            // 0x2f8700: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8704u; }
        if (ctx->pc != 0x2F8704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8704u; }
        if (ctx->pc != 0x2F8704u) { return; }
    }
    ctx->pc = 0x2F8704u;
label_2f8704:
    // 0x2f8704: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x2f8704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f8708:
    // 0x2f8708: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2f8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2f870c:
    // 0x2f870c: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x2f870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_2f8710:
    // 0x2f8710: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f8710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f8714:
    // 0x2f8714: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f8714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f8718:
    // 0x2f8718: 0x320f809  jalr        $t9
label_2f871c:
    if (ctx->pc == 0x2F871Cu) {
        ctx->pc = 0x2F871Cu;
            // 0x2f871c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2F8720u;
        goto label_2f8720;
    }
    ctx->pc = 0x2F8718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8720u);
        ctx->pc = 0x2F871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8718u;
            // 0x2f871c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8720u; }
            if (ctx->pc != 0x2F8720u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8720u;
label_2f8720:
    // 0x2f8720: 0x8ea200c8  lw          $v0, 0xC8($s5)
    ctx->pc = 0x2f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f8724:
    // 0x2f8724: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f8728:
    // 0x2f8728: 0xc12ca3c  jal         func_4B28F0
label_2f872c:
    if (ctx->pc == 0x2F872Cu) {
        ctx->pc = 0x2F872Cu;
            // 0x2f872c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x2F8730u;
        goto label_2f8730;
    }
    ctx->pc = 0x2F8728u;
    SET_GPR_U32(ctx, 31, 0x2F8730u);
    ctx->pc = 0x2F872Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8728u;
            // 0x2f872c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8730u; }
        if (ctx->pc != 0x2F8730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8730u; }
        if (ctx->pc != 0x2F8730u) { return; }
    }
    ctx->pc = 0x2F8730u;
label_2f8730:
    // 0x2f8730: 0xaeb00104  sw          $s0, 0x104($s5)
    ctx->pc = 0x2f8730u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 260), GPR_U32(ctx, 16));
label_2f8734:
    // 0x2f8734: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f8734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f8738:
    // 0x2f8738: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f8738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f873c:
    // 0x2f873c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f873cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8740:
    // 0x2f8740: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f8740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8744:
    // 0x2f8744: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8748:
    // 0x2f8748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f8748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f874c:
    // 0x2f874c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f874cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8750:
    // 0x2f8750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8754:
    // 0x2f8754: 0x3e00008  jr          $ra
label_2f8758:
    if (ctx->pc == 0x2F8758u) {
        ctx->pc = 0x2F8758u;
            // 0x2f8758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F875Cu;
        goto label_2f875c;
    }
    ctx->pc = 0x2F8754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8754u;
            // 0x2f8758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F875Cu;
label_2f875c:
    // 0x2f875c: 0x0  nop
    ctx->pc = 0x2f875cu;
    // NOP
label_2f8760:
    // 0x2f8760: 0x3e00008  jr          $ra
label_2f8764:
    if (ctx->pc == 0x2F8764u) {
        ctx->pc = 0x2F8768u;
        goto label_2f8768;
    }
    ctx->pc = 0x2F8760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8768u;
label_2f8768:
    // 0x2f8768: 0x0  nop
    ctx->pc = 0x2f8768u;
    // NOP
label_2f876c:
    // 0x2f876c: 0x0  nop
    ctx->pc = 0x2f876cu;
    // NOP
}
