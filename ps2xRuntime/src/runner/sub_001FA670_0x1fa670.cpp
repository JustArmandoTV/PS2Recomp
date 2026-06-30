#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA670
// Address: 0x1fa670 - 0x1fa970
void sub_001FA670_0x1fa670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA670_0x1fa670");
#endif

    switch (ctx->pc) {
        case 0x1fa670u: goto label_1fa670;
        case 0x1fa674u: goto label_1fa674;
        case 0x1fa678u: goto label_1fa678;
        case 0x1fa67cu: goto label_1fa67c;
        case 0x1fa680u: goto label_1fa680;
        case 0x1fa684u: goto label_1fa684;
        case 0x1fa688u: goto label_1fa688;
        case 0x1fa68cu: goto label_1fa68c;
        case 0x1fa690u: goto label_1fa690;
        case 0x1fa694u: goto label_1fa694;
        case 0x1fa698u: goto label_1fa698;
        case 0x1fa69cu: goto label_1fa69c;
        case 0x1fa6a0u: goto label_1fa6a0;
        case 0x1fa6a4u: goto label_1fa6a4;
        case 0x1fa6a8u: goto label_1fa6a8;
        case 0x1fa6acu: goto label_1fa6ac;
        case 0x1fa6b0u: goto label_1fa6b0;
        case 0x1fa6b4u: goto label_1fa6b4;
        case 0x1fa6b8u: goto label_1fa6b8;
        case 0x1fa6bcu: goto label_1fa6bc;
        case 0x1fa6c0u: goto label_1fa6c0;
        case 0x1fa6c4u: goto label_1fa6c4;
        case 0x1fa6c8u: goto label_1fa6c8;
        case 0x1fa6ccu: goto label_1fa6cc;
        case 0x1fa6d0u: goto label_1fa6d0;
        case 0x1fa6d4u: goto label_1fa6d4;
        case 0x1fa6d8u: goto label_1fa6d8;
        case 0x1fa6dcu: goto label_1fa6dc;
        case 0x1fa6e0u: goto label_1fa6e0;
        case 0x1fa6e4u: goto label_1fa6e4;
        case 0x1fa6e8u: goto label_1fa6e8;
        case 0x1fa6ecu: goto label_1fa6ec;
        case 0x1fa6f0u: goto label_1fa6f0;
        case 0x1fa6f4u: goto label_1fa6f4;
        case 0x1fa6f8u: goto label_1fa6f8;
        case 0x1fa6fcu: goto label_1fa6fc;
        case 0x1fa700u: goto label_1fa700;
        case 0x1fa704u: goto label_1fa704;
        case 0x1fa708u: goto label_1fa708;
        case 0x1fa70cu: goto label_1fa70c;
        case 0x1fa710u: goto label_1fa710;
        case 0x1fa714u: goto label_1fa714;
        case 0x1fa718u: goto label_1fa718;
        case 0x1fa71cu: goto label_1fa71c;
        case 0x1fa720u: goto label_1fa720;
        case 0x1fa724u: goto label_1fa724;
        case 0x1fa728u: goto label_1fa728;
        case 0x1fa72cu: goto label_1fa72c;
        case 0x1fa730u: goto label_1fa730;
        case 0x1fa734u: goto label_1fa734;
        case 0x1fa738u: goto label_1fa738;
        case 0x1fa73cu: goto label_1fa73c;
        case 0x1fa740u: goto label_1fa740;
        case 0x1fa744u: goto label_1fa744;
        case 0x1fa748u: goto label_1fa748;
        case 0x1fa74cu: goto label_1fa74c;
        case 0x1fa750u: goto label_1fa750;
        case 0x1fa754u: goto label_1fa754;
        case 0x1fa758u: goto label_1fa758;
        case 0x1fa75cu: goto label_1fa75c;
        case 0x1fa760u: goto label_1fa760;
        case 0x1fa764u: goto label_1fa764;
        case 0x1fa768u: goto label_1fa768;
        case 0x1fa76cu: goto label_1fa76c;
        case 0x1fa770u: goto label_1fa770;
        case 0x1fa774u: goto label_1fa774;
        case 0x1fa778u: goto label_1fa778;
        case 0x1fa77cu: goto label_1fa77c;
        case 0x1fa780u: goto label_1fa780;
        case 0x1fa784u: goto label_1fa784;
        case 0x1fa788u: goto label_1fa788;
        case 0x1fa78cu: goto label_1fa78c;
        case 0x1fa790u: goto label_1fa790;
        case 0x1fa794u: goto label_1fa794;
        case 0x1fa798u: goto label_1fa798;
        case 0x1fa79cu: goto label_1fa79c;
        case 0x1fa7a0u: goto label_1fa7a0;
        case 0x1fa7a4u: goto label_1fa7a4;
        case 0x1fa7a8u: goto label_1fa7a8;
        case 0x1fa7acu: goto label_1fa7ac;
        case 0x1fa7b0u: goto label_1fa7b0;
        case 0x1fa7b4u: goto label_1fa7b4;
        case 0x1fa7b8u: goto label_1fa7b8;
        case 0x1fa7bcu: goto label_1fa7bc;
        case 0x1fa7c0u: goto label_1fa7c0;
        case 0x1fa7c4u: goto label_1fa7c4;
        case 0x1fa7c8u: goto label_1fa7c8;
        case 0x1fa7ccu: goto label_1fa7cc;
        case 0x1fa7d0u: goto label_1fa7d0;
        case 0x1fa7d4u: goto label_1fa7d4;
        case 0x1fa7d8u: goto label_1fa7d8;
        case 0x1fa7dcu: goto label_1fa7dc;
        case 0x1fa7e0u: goto label_1fa7e0;
        case 0x1fa7e4u: goto label_1fa7e4;
        case 0x1fa7e8u: goto label_1fa7e8;
        case 0x1fa7ecu: goto label_1fa7ec;
        case 0x1fa7f0u: goto label_1fa7f0;
        case 0x1fa7f4u: goto label_1fa7f4;
        case 0x1fa7f8u: goto label_1fa7f8;
        case 0x1fa7fcu: goto label_1fa7fc;
        case 0x1fa800u: goto label_1fa800;
        case 0x1fa804u: goto label_1fa804;
        case 0x1fa808u: goto label_1fa808;
        case 0x1fa80cu: goto label_1fa80c;
        case 0x1fa810u: goto label_1fa810;
        case 0x1fa814u: goto label_1fa814;
        case 0x1fa818u: goto label_1fa818;
        case 0x1fa81cu: goto label_1fa81c;
        case 0x1fa820u: goto label_1fa820;
        case 0x1fa824u: goto label_1fa824;
        case 0x1fa828u: goto label_1fa828;
        case 0x1fa82cu: goto label_1fa82c;
        case 0x1fa830u: goto label_1fa830;
        case 0x1fa834u: goto label_1fa834;
        case 0x1fa838u: goto label_1fa838;
        case 0x1fa83cu: goto label_1fa83c;
        case 0x1fa840u: goto label_1fa840;
        case 0x1fa844u: goto label_1fa844;
        case 0x1fa848u: goto label_1fa848;
        case 0x1fa84cu: goto label_1fa84c;
        case 0x1fa850u: goto label_1fa850;
        case 0x1fa854u: goto label_1fa854;
        case 0x1fa858u: goto label_1fa858;
        case 0x1fa85cu: goto label_1fa85c;
        case 0x1fa860u: goto label_1fa860;
        case 0x1fa864u: goto label_1fa864;
        case 0x1fa868u: goto label_1fa868;
        case 0x1fa86cu: goto label_1fa86c;
        case 0x1fa870u: goto label_1fa870;
        case 0x1fa874u: goto label_1fa874;
        case 0x1fa878u: goto label_1fa878;
        case 0x1fa87cu: goto label_1fa87c;
        case 0x1fa880u: goto label_1fa880;
        case 0x1fa884u: goto label_1fa884;
        case 0x1fa888u: goto label_1fa888;
        case 0x1fa88cu: goto label_1fa88c;
        case 0x1fa890u: goto label_1fa890;
        case 0x1fa894u: goto label_1fa894;
        case 0x1fa898u: goto label_1fa898;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8a0u: goto label_1fa8a0;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8a8u: goto label_1fa8a8;
        case 0x1fa8acu: goto label_1fa8ac;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8bcu: goto label_1fa8bc;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8c4u: goto label_1fa8c4;
        case 0x1fa8c8u: goto label_1fa8c8;
        case 0x1fa8ccu: goto label_1fa8cc;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa8d4u: goto label_1fa8d4;
        case 0x1fa8d8u: goto label_1fa8d8;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8e4u: goto label_1fa8e4;
        case 0x1fa8e8u: goto label_1fa8e8;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa8f0u: goto label_1fa8f0;
        case 0x1fa8f4u: goto label_1fa8f4;
        case 0x1fa8f8u: goto label_1fa8f8;
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa900u: goto label_1fa900;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa908u: goto label_1fa908;
        case 0x1fa90cu: goto label_1fa90c;
        case 0x1fa910u: goto label_1fa910;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa918u: goto label_1fa918;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa924u: goto label_1fa924;
        case 0x1fa928u: goto label_1fa928;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa930u: goto label_1fa930;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa938u: goto label_1fa938;
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa940u: goto label_1fa940;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa948u: goto label_1fa948;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa950u: goto label_1fa950;
        case 0x1fa954u: goto label_1fa954;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa95cu: goto label_1fa95c;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa964u: goto label_1fa964;
        case 0x1fa968u: goto label_1fa968;
        case 0x1fa96cu: goto label_1fa96c;
        default: break;
    }

    ctx->pc = 0x1fa670u;

label_1fa670:
    // 0x1fa670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fa670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fa674:
    // 0x1fa674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fa678:
    // 0x1fa678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa67c:
    // 0x1fa67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa680:
    // 0x1fa680: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x1fa680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
label_1fa684:
    // 0x1fa684: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fa688:
    // 0x1fa688: 0xc07e98c  jal         func_1FA630
label_1fa68c:
    if (ctx->pc == 0x1FA68Cu) {
        ctx->pc = 0x1FA68Cu;
            // 0x1fa68c: 0xa3a00051  sb          $zero, 0x51($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FA690u;
        goto label_1fa690;
    }
    ctx->pc = 0x1FA688u;
    SET_GPR_U32(ctx, 31, 0x1FA690u);
    ctx->pc = 0x1FA68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA688u;
            // 0x1fa68c: 0xa3a00051  sb          $zero, 0x51($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA630u;
    if (runtime->hasFunction(0x1FA630u)) {
        auto targetFn = runtime->lookupFunction(0x1FA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA690u; }
        if (ctx->pc != 0x1FA690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA630_0x1fa630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA690u; }
        if (ctx->pc != 0x1FA690u) { return; }
    }
    ctx->pc = 0x1FA690u;
label_1fa690:
    // 0x1fa690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa694:
    // 0x1fa694: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fa694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fa698:
    // 0x1fa698: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1fa698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fa69c:
    // 0x1fa69c: 0xc07ff98  jal         func_1FFE60
label_1fa6a0:
    if (ctx->pc == 0x1FA6A0u) {
        ctx->pc = 0x1FA6A0u;
            // 0x1fa6a0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1FA6A4u;
        goto label_1fa6a4;
    }
    ctx->pc = 0x1FA69Cu;
    SET_GPR_U32(ctx, 31, 0x1FA6A4u);
    ctx->pc = 0x1FA6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA69Cu;
            // 0x1fa6a0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE60u;
    if (runtime->hasFunction(0x1FFE60u)) {
        auto targetFn = runtime->lookupFunction(0x1FFE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6A4u; }
        if (ctx->pc != 0x1FA6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFE60_0x1ffe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6A4u; }
        if (ctx->pc != 0x1FA6A4u) { return; }
    }
    ctx->pc = 0x1FA6A4u;
label_1fa6a4:
    // 0x1fa6a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fa6a8:
    // 0x1fa6a8: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1fa6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_1fa6ac:
    // 0x1fa6ac: 0xc07e97c  jal         func_1FA5F0
label_1fa6b0:
    if (ctx->pc == 0x1FA6B0u) {
        ctx->pc = 0x1FA6B0u;
            // 0x1fa6b0: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FA6B4u;
        goto label_1fa6b4;
    }
    ctx->pc = 0x1FA6ACu;
    SET_GPR_U32(ctx, 31, 0x1FA6B4u);
    ctx->pc = 0x1FA6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6ACu;
            // 0x1fa6b0: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA5F0u;
    if (runtime->hasFunction(0x1FA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6B4u; }
        if (ctx->pc != 0x1FA6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA5F0_0x1fa5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6B4u; }
        if (ctx->pc != 0x1FA6B4u) { return; }
    }
    ctx->pc = 0x1FA6B4u;
label_1fa6b4:
    // 0x1fa6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa6b8:
    // 0x1fa6b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fa6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fa6bc:
    // 0x1fa6bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1fa6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fa6c0:
    // 0x1fa6c0: 0xc07ff98  jal         func_1FFE60
label_1fa6c4:
    if (ctx->pc == 0x1FA6C4u) {
        ctx->pc = 0x1FA6C4u;
            // 0x1fa6c4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1FA6C8u;
        goto label_1fa6c8;
    }
    ctx->pc = 0x1FA6C0u;
    SET_GPR_U32(ctx, 31, 0x1FA6C8u);
    ctx->pc = 0x1FA6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6C0u;
            // 0x1fa6c4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE60u;
    if (runtime->hasFunction(0x1FFE60u)) {
        auto targetFn = runtime->lookupFunction(0x1FFE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6C8u; }
        if (ctx->pc != 0x1FA6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFE60_0x1ffe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6C8u; }
        if (ctx->pc != 0x1FA6C8u) { return; }
    }
    ctx->pc = 0x1FA6C8u;
label_1fa6c8:
    // 0x1fa6c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa6cc:
    // 0x1fa6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa6d0:
    // 0x1fa6d0: 0x3e00008  jr          $ra
label_1fa6d4:
    if (ctx->pc == 0x1FA6D4u) {
        ctx->pc = 0x1FA6D4u;
            // 0x1fa6d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1FA6D8u;
        goto label_1fa6d8;
    }
    ctx->pc = 0x1FA6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6D0u;
            // 0x1fa6d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA6D8u;
label_1fa6d8:
    // 0x1fa6d8: 0x0  nop
    ctx->pc = 0x1fa6d8u;
    // NOP
label_1fa6dc:
    // 0x1fa6dc: 0x0  nop
    ctx->pc = 0x1fa6dcu;
    // NOP
label_1fa6e0:
    // 0x1fa6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fa6e4:
    // 0x1fa6e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fa6e8:
    // 0x1fa6e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fa6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fa6ec:
    // 0x1fa6ec: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fa6f0:
    // 0x1fa6f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fa6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fa6f4:
    // 0x1fa6f4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1fa6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1fa6f8:
    // 0x1fa6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fa6fc:
    // 0x1fa6fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fa6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa700:
    // 0x1fa700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa704:
    // 0x1fa704: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fa704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fa708:
    // 0x1fa708: 0xc0a7a88  jal         func_29EA20
label_1fa70c:
    if (ctx->pc == 0x1FA70Cu) {
        ctx->pc = 0x1FA70Cu;
            // 0x1fa70c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA710u;
        goto label_1fa710;
    }
    ctx->pc = 0x1FA708u;
    SET_GPR_U32(ctx, 31, 0x1FA710u);
    ctx->pc = 0x1FA70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA708u;
            // 0x1fa70c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA710u; }
        if (ctx->pc != 0x1FA710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA710u; }
        if (ctx->pc != 0x1FA710u) { return; }
    }
    ctx->pc = 0x1FA710u;
label_1fa710:
    // 0x1fa710: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fa710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fa714:
    // 0x1fa714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa718:
    // 0x1fa718: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1fa71c:
    if (ctx->pc == 0x1FA71Cu) {
        ctx->pc = 0x1FA71Cu;
            // 0x1fa71c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1FA720u;
        goto label_1fa720;
    }
    ctx->pc = 0x1FA718u;
    {
        const bool branch_taken_0x1fa718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA718u;
            // 0x1fa71c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa718) {
            ctx->pc = 0x1FA78Cu;
            goto label_1fa78c;
        }
    }
    ctx->pc = 0x1FA720u;
label_1fa720:
    // 0x1fa720: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa724:
    // 0x1fa724: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fa728:
    // 0x1fa728: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fa72c:
    // 0x1fa72c: 0x2463de10  addiu       $v1, $v1, -0x21F0
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958608));
label_1fa730:
    // 0x1fa730: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa734:
    // 0x1fa734: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1fa734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fa738:
    // 0x1fa738: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa73c:
    // 0x1fa73c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fa73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fa740:
    // 0x1fa740: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa744:
    // 0x1fa744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa748:
    // 0x1fa748: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1fa748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1fa74c:
    // 0x1fa74c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa750:
    // 0x1fa750: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fa750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fa754:
    // 0x1fa754: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa758:
    // 0x1fa758: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa75c:
    // 0x1fa75c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1fa75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1fa760:
    // 0x1fa760: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1fa760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1fa764:
    // 0x1fa764: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa768:
    // 0x1fa768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fa768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fa76c:
    // 0x1fa76c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fa76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fa770:
    // 0x1fa770: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fa770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fa774:
    // 0x1fa774: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fa774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fa778:
    // 0x1fa778: 0xc09e9ec  jal         func_27A7B0
label_1fa77c:
    if (ctx->pc == 0x1FA77Cu) {
        ctx->pc = 0x1FA77Cu;
            // 0x1fa77c: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x1FA780u;
        goto label_1fa780;
    }
    ctx->pc = 0x1FA778u;
    SET_GPR_U32(ctx, 31, 0x1FA780u);
    ctx->pc = 0x1FA77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA778u;
            // 0x1fa77c: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A7B0u;
    if (runtime->hasFunction(0x27A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x27A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA780u; }
        if (ctx->pc != 0x1FA780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A7B0_0x27a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA780u; }
        if (ctx->pc != 0x1FA780u) { return; }
    }
    ctx->pc = 0x1FA780u;
label_1fa780:
    // 0x1fa780: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa784:
    // 0x1fa784: 0x2442de50  addiu       $v0, $v0, -0x21B0
    ctx->pc = 0x1fa784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
label_1fa788:
    // 0x1fa788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa78c:
    // 0x1fa78c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fa78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa790:
    // 0x1fa790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fa790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa794:
    // 0x1fa794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fa794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa798:
    // 0x1fa798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa79c:
    // 0x1fa79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa7a0:
    // 0x1fa7a0: 0x3e00008  jr          $ra
label_1fa7a4:
    if (ctx->pc == 0x1FA7A4u) {
        ctx->pc = 0x1FA7A4u;
            // 0x1fa7a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FA7A8u;
        goto label_1fa7a8;
    }
    ctx->pc = 0x1FA7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7A0u;
            // 0x1fa7a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA7A8u;
label_1fa7a8:
    // 0x1fa7a8: 0x0  nop
    ctx->pc = 0x1fa7a8u;
    // NOP
label_1fa7ac:
    // 0x1fa7ac: 0x0  nop
    ctx->pc = 0x1fa7acu;
    // NOP
label_1fa7b0:
    // 0x1fa7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fa7b4:
    // 0x1fa7b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fa7b8:
    // 0x1fa7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa7bc:
    // 0x1fa7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa7c0:
    // 0x1fa7c0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1fa7c4:
    if (ctx->pc == 0x1FA7C4u) {
        ctx->pc = 0x1FA7C4u;
            // 0x1fa7c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7C8u;
        goto label_1fa7c8;
    }
    ctx->pc = 0x1FA7C0u;
    {
        const bool branch_taken_0x1fa7c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7c0) {
            ctx->pc = 0x1FA7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7C0u;
            // 0x1fa7c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA840u;
            goto label_1fa840;
        }
    }
    ctx->pc = 0x1FA7C8u;
label_1fa7c8:
    // 0x1fa7c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa7cc:
    // 0x1fa7cc: 0x2442de10  addiu       $v0, $v0, -0x21F0
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958608));
label_1fa7d0:
    // 0x1fa7d0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1fa7d4:
    if (ctx->pc == 0x1FA7D4u) {
        ctx->pc = 0x1FA7D4u;
            // 0x1fa7d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FA7D8u;
        goto label_1fa7d8;
    }
    ctx->pc = 0x1FA7D0u;
    {
        const bool branch_taken_0x1fa7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7D0u;
            // 0x1fa7d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7d0) {
            ctx->pc = 0x1FA814u;
            goto label_1fa814;
        }
    }
    ctx->pc = 0x1FA7D8u;
label_1fa7d8:
    // 0x1fa7d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa7dc:
    // 0x1fa7dc: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1fa7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1fa7e0:
    // 0x1fa7e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fa7e4:
    if (ctx->pc == 0x1FA7E4u) {
        ctx->pc = 0x1FA7E4u;
            // 0x1fa7e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FA7E8u;
        goto label_1fa7e8;
    }
    ctx->pc = 0x1FA7E0u;
    {
        const bool branch_taken_0x1fa7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7E0u;
            // 0x1fa7e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7e0) {
            ctx->pc = 0x1FA814u;
            goto label_1fa814;
        }
    }
    ctx->pc = 0x1FA7E8u;
label_1fa7e8:
    // 0x1fa7e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa7ec:
    // 0x1fa7ec: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fa7f0:
    // 0x1fa7f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1fa7f4:
    if (ctx->pc == 0x1FA7F4u) {
        ctx->pc = 0x1FA7F4u;
            // 0x1fa7f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FA7F8u;
        goto label_1fa7f8;
    }
    ctx->pc = 0x1FA7F0u;
    {
        const bool branch_taken_0x1fa7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7F0u;
            // 0x1fa7f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7f0) {
            ctx->pc = 0x1FA814u;
            goto label_1fa814;
        }
    }
    ctx->pc = 0x1FA7F8u;
label_1fa7f8:
    // 0x1fa7f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa7fc:
    // 0x1fa7fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fa7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fa800:
    // 0x1fa800: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1fa804:
    if (ctx->pc == 0x1FA804u) {
        ctx->pc = 0x1FA804u;
            // 0x1fa804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FA808u;
        goto label_1fa808;
    }
    ctx->pc = 0x1FA800u;
    {
        const bool branch_taken_0x1fa800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA800u;
            // 0x1fa804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa800) {
            ctx->pc = 0x1FA814u;
            goto label_1fa814;
        }
    }
    ctx->pc = 0x1FA808u;
label_1fa808:
    // 0x1fa808: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa80c:
    // 0x1fa80c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fa80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fa810:
    // 0x1fa810: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa814:
    // 0x1fa814: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fa814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fa818:
    // 0x1fa818: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fa818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fa81c:
    // 0x1fa81c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1fa820:
    if (ctx->pc == 0x1FA820u) {
        ctx->pc = 0x1FA824u;
        goto label_1fa824;
    }
    ctx->pc = 0x1FA81Cu;
    {
        const bool branch_taken_0x1fa81c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fa81c) {
            ctx->pc = 0x1FA83Cu;
            goto label_1fa83c;
        }
    }
    ctx->pc = 0x1FA824u;
label_1fa824:
    // 0x1fa824: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fa824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fa828:
    // 0x1fa828: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1fa828u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1fa82c:
    // 0x1fa82c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fa82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fa830:
    // 0x1fa830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fa830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa834:
    // 0x1fa834: 0xc0a7ab4  jal         func_29EAD0
label_1fa838:
    if (ctx->pc == 0x1FA838u) {
        ctx->pc = 0x1FA838u;
            // 0x1fa838: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FA83Cu;
        goto label_1fa83c;
    }
    ctx->pc = 0x1FA834u;
    SET_GPR_U32(ctx, 31, 0x1FA83Cu);
    ctx->pc = 0x1FA838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA834u;
            // 0x1fa838: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA83Cu; }
        if (ctx->pc != 0x1FA83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA83Cu; }
        if (ctx->pc != 0x1FA83Cu) { return; }
    }
    ctx->pc = 0x1FA83Cu;
label_1fa83c:
    // 0x1fa83c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fa83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa840:
    // 0x1fa840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa844:
    // 0x1fa844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa848:
    // 0x1fa848: 0x3e00008  jr          $ra
label_1fa84c:
    if (ctx->pc == 0x1FA84Cu) {
        ctx->pc = 0x1FA84Cu;
            // 0x1fa84c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FA850u;
        goto label_1fa850;
    }
    ctx->pc = 0x1FA848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA848u;
            // 0x1fa84c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA850u;
label_1fa850:
    // 0x1fa850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fa854:
    // 0x1fa854: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fa854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fa858:
    // 0x1fa858: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fa858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fa85c:
    // 0x1fa85c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1fa85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1fa860:
    // 0x1fa860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fa860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fa864:
    // 0x1fa864: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fa868:
    // 0x1fa868: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fa868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fa86c:
    // 0x1fa86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa870:
    // 0x1fa870: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fa870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fa874:
    // 0x1fa874: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fa878:
    // 0x1fa878: 0xc0a7a88  jal         func_29EA20
label_1fa87c:
    if (ctx->pc == 0x1FA87Cu) {
        ctx->pc = 0x1FA87Cu;
            // 0x1fa87c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1FA880u;
        goto label_1fa880;
    }
    ctx->pc = 0x1FA878u;
    SET_GPR_U32(ctx, 31, 0x1FA880u);
    ctx->pc = 0x1FA87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA878u;
            // 0x1fa87c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA880u; }
        if (ctx->pc != 0x1FA880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA880u; }
        if (ctx->pc != 0x1FA880u) { return; }
    }
    ctx->pc = 0x1FA880u;
label_1fa880:
    // 0x1fa880: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fa880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fa884:
    // 0x1fa884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa888:
    // 0x1fa888: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_1fa88c:
    if (ctx->pc == 0x1FA88Cu) {
        ctx->pc = 0x1FA88Cu;
            // 0x1fa88c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1FA890u;
        goto label_1fa890;
    }
    ctx->pc = 0x1FA888u;
    {
        const bool branch_taken_0x1fa888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA888u;
            // 0x1fa88c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa888) {
            ctx->pc = 0x1FA8F0u;
            goto label_1fa8f0;
        }
    }
    ctx->pc = 0x1FA890u;
label_1fa890:
    // 0x1fa890: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa894:
    // 0x1fa894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fa894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fa898:
    // 0x1fa898: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fa898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fa89c:
    // 0x1fa89c: 0x2463de10  addiu       $v1, $v1, -0x21F0
    ctx->pc = 0x1fa89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958608));
label_1fa8a0:
    // 0x1fa8a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa8a4:
    // 0x1fa8a4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fa8a8:
    // 0x1fa8a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa8ac:
    // 0x1fa8ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fa8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fa8b0:
    // 0x1fa8b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa8b4:
    // 0x1fa8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa8b8:
    // 0x1fa8b8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1fa8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1fa8bc:
    // 0x1fa8bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa8c0:
    // 0x1fa8c0: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fa8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fa8c4:
    // 0x1fa8c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa8c8:
    // 0x1fa8c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fa8cc:
    // 0x1fa8cc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1fa8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1fa8d0:
    // 0x1fa8d0: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1fa8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1fa8d4:
    // 0x1fa8d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa8d8:
    // 0x1fa8d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fa8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fa8dc:
    // 0x1fa8dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fa8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fa8e0:
    // 0x1fa8e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fa8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fa8e4:
    // 0x1fa8e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fa8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fa8e8:
    // 0x1fa8e8: 0xc09e9ec  jal         func_27A7B0
label_1fa8ec:
    if (ctx->pc == 0x1FA8ECu) {
        ctx->pc = 0x1FA8ECu;
            // 0x1fa8ec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x1FA8F0u;
        goto label_1fa8f0;
    }
    ctx->pc = 0x1FA8E8u;
    SET_GPR_U32(ctx, 31, 0x1FA8F0u);
    ctx->pc = 0x1FA8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA8E8u;
            // 0x1fa8ec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A7B0u;
    if (runtime->hasFunction(0x27A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x27A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA8F0u; }
        if (ctx->pc != 0x1FA8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A7B0_0x27a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA8F0u; }
        if (ctx->pc != 0x1FA8F0u) { return; }
    }
    ctx->pc = 0x1FA8F0u;
label_1fa8f0:
    // 0x1fa8f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fa8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8f4:
    // 0x1fa8f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fa8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa8f8:
    // 0x1fa8f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fa8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa8fc:
    // 0x1fa8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa900:
    // 0x1fa900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa904:
    // 0x1fa904: 0x3e00008  jr          $ra
label_1fa908:
    if (ctx->pc == 0x1FA908u) {
        ctx->pc = 0x1FA908u;
            // 0x1fa908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FA90Cu;
        goto label_1fa90c;
    }
    ctx->pc = 0x1FA904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA904u;
            // 0x1fa908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA90Cu;
label_1fa90c:
    // 0x1fa90c: 0x0  nop
    ctx->pc = 0x1fa90cu;
    // NOP
label_1fa910:
    // 0x1fa910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fa914:
    // 0x1fa914: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fa914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fa918:
    // 0x1fa918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fa91c:
    // 0x1fa91c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fa91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fa920:
    // 0x1fa920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa924:
    // 0x1fa924: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x1fa924u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_1fa928:
    // 0x1fa928: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_1fa92c:
    if (ctx->pc == 0x1FA92Cu) {
        ctx->pc = 0x1FA92Cu;
            // 0x1fa92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA930u;
        goto label_1fa930;
    }
    ctx->pc = 0x1FA928u;
    {
        const bool branch_taken_0x1fa928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA928u;
            // 0x1fa92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa928) {
            ctx->pc = 0x1FA944u;
            goto label_1fa944;
        }
    }
    ctx->pc = 0x1FA930u;
label_1fa930:
    // 0x1fa930: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1fa930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fa934:
    // 0x1fa934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fa934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa938:
    // 0x1fa938: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1fa938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1fa93c:
    // 0x1fa93c: 0x320f809  jalr        $t9
label_1fa940:
    if (ctx->pc == 0x1FA940u) {
        ctx->pc = 0x1FA944u;
        goto label_1fa944;
    }
    ctx->pc = 0x1FA93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FA944u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA944u; }
            if (ctx->pc != 0x1FA944u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA944u;
label_1fa944:
    // 0x1fa944: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1fa948:
    if (ctx->pc == 0x1FA948u) {
        ctx->pc = 0x1FA948u;
            // 0x1fa948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1FA94Cu;
        goto label_1fa94c;
    }
    ctx->pc = 0x1FA944u;
    {
        const bool branch_taken_0x1fa944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa944) {
            ctx->pc = 0x1FA948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA944u;
            // 0x1fa948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA964u;
            goto label_1fa964;
        }
    }
    ctx->pc = 0x1FA94Cu;
label_1fa94c:
    // 0x1fa94c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1fa94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fa950:
    // 0x1fa950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa954:
    // 0x1fa954: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1fa954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1fa958:
    // 0x1fa958: 0x320f809  jalr        $t9
label_1fa95c:
    if (ctx->pc == 0x1FA95Cu) {
        ctx->pc = 0x1FA95Cu;
            // 0x1fa95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FA960u;
        goto label_1fa960;
    }
    ctx->pc = 0x1FA958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FA960u);
        ctx->pc = 0x1FA95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA958u;
            // 0x1fa95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA960u; }
            if (ctx->pc != 0x1FA960u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA960u;
label_1fa960:
    // 0x1fa960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa964:
    // 0x1fa964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa968:
    // 0x1fa968: 0x3e00008  jr          $ra
label_1fa96c:
    if (ctx->pc == 0x1FA96Cu) {
        ctx->pc = 0x1FA96Cu;
            // 0x1fa96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FA970u;
        goto label_fallthrough_0x1fa968;
    }
    ctx->pc = 0x1FA968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA968u;
            // 0x1fa96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fa968:
    ctx->pc = 0x1FA970u;
}
