#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DA7A0
// Address: 0x4da7a0 - 0x4daad0
void sub_004DA7A0_0x4da7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA7A0_0x4da7a0");
#endif

    switch (ctx->pc) {
        case 0x4da7a0u: goto label_4da7a0;
        case 0x4da7a4u: goto label_4da7a4;
        case 0x4da7a8u: goto label_4da7a8;
        case 0x4da7acu: goto label_4da7ac;
        case 0x4da7b0u: goto label_4da7b0;
        case 0x4da7b4u: goto label_4da7b4;
        case 0x4da7b8u: goto label_4da7b8;
        case 0x4da7bcu: goto label_4da7bc;
        case 0x4da7c0u: goto label_4da7c0;
        case 0x4da7c4u: goto label_4da7c4;
        case 0x4da7c8u: goto label_4da7c8;
        case 0x4da7ccu: goto label_4da7cc;
        case 0x4da7d0u: goto label_4da7d0;
        case 0x4da7d4u: goto label_4da7d4;
        case 0x4da7d8u: goto label_4da7d8;
        case 0x4da7dcu: goto label_4da7dc;
        case 0x4da7e0u: goto label_4da7e0;
        case 0x4da7e4u: goto label_4da7e4;
        case 0x4da7e8u: goto label_4da7e8;
        case 0x4da7ecu: goto label_4da7ec;
        case 0x4da7f0u: goto label_4da7f0;
        case 0x4da7f4u: goto label_4da7f4;
        case 0x4da7f8u: goto label_4da7f8;
        case 0x4da7fcu: goto label_4da7fc;
        case 0x4da800u: goto label_4da800;
        case 0x4da804u: goto label_4da804;
        case 0x4da808u: goto label_4da808;
        case 0x4da80cu: goto label_4da80c;
        case 0x4da810u: goto label_4da810;
        case 0x4da814u: goto label_4da814;
        case 0x4da818u: goto label_4da818;
        case 0x4da81cu: goto label_4da81c;
        case 0x4da820u: goto label_4da820;
        case 0x4da824u: goto label_4da824;
        case 0x4da828u: goto label_4da828;
        case 0x4da82cu: goto label_4da82c;
        case 0x4da830u: goto label_4da830;
        case 0x4da834u: goto label_4da834;
        case 0x4da838u: goto label_4da838;
        case 0x4da83cu: goto label_4da83c;
        case 0x4da840u: goto label_4da840;
        case 0x4da844u: goto label_4da844;
        case 0x4da848u: goto label_4da848;
        case 0x4da84cu: goto label_4da84c;
        case 0x4da850u: goto label_4da850;
        case 0x4da854u: goto label_4da854;
        case 0x4da858u: goto label_4da858;
        case 0x4da85cu: goto label_4da85c;
        case 0x4da860u: goto label_4da860;
        case 0x4da864u: goto label_4da864;
        case 0x4da868u: goto label_4da868;
        case 0x4da86cu: goto label_4da86c;
        case 0x4da870u: goto label_4da870;
        case 0x4da874u: goto label_4da874;
        case 0x4da878u: goto label_4da878;
        case 0x4da87cu: goto label_4da87c;
        case 0x4da880u: goto label_4da880;
        case 0x4da884u: goto label_4da884;
        case 0x4da888u: goto label_4da888;
        case 0x4da88cu: goto label_4da88c;
        case 0x4da890u: goto label_4da890;
        case 0x4da894u: goto label_4da894;
        case 0x4da898u: goto label_4da898;
        case 0x4da89cu: goto label_4da89c;
        case 0x4da8a0u: goto label_4da8a0;
        case 0x4da8a4u: goto label_4da8a4;
        case 0x4da8a8u: goto label_4da8a8;
        case 0x4da8acu: goto label_4da8ac;
        case 0x4da8b0u: goto label_4da8b0;
        case 0x4da8b4u: goto label_4da8b4;
        case 0x4da8b8u: goto label_4da8b8;
        case 0x4da8bcu: goto label_4da8bc;
        case 0x4da8c0u: goto label_4da8c0;
        case 0x4da8c4u: goto label_4da8c4;
        case 0x4da8c8u: goto label_4da8c8;
        case 0x4da8ccu: goto label_4da8cc;
        case 0x4da8d0u: goto label_4da8d0;
        case 0x4da8d4u: goto label_4da8d4;
        case 0x4da8d8u: goto label_4da8d8;
        case 0x4da8dcu: goto label_4da8dc;
        case 0x4da8e0u: goto label_4da8e0;
        case 0x4da8e4u: goto label_4da8e4;
        case 0x4da8e8u: goto label_4da8e8;
        case 0x4da8ecu: goto label_4da8ec;
        case 0x4da8f0u: goto label_4da8f0;
        case 0x4da8f4u: goto label_4da8f4;
        case 0x4da8f8u: goto label_4da8f8;
        case 0x4da8fcu: goto label_4da8fc;
        case 0x4da900u: goto label_4da900;
        case 0x4da904u: goto label_4da904;
        case 0x4da908u: goto label_4da908;
        case 0x4da90cu: goto label_4da90c;
        case 0x4da910u: goto label_4da910;
        case 0x4da914u: goto label_4da914;
        case 0x4da918u: goto label_4da918;
        case 0x4da91cu: goto label_4da91c;
        case 0x4da920u: goto label_4da920;
        case 0x4da924u: goto label_4da924;
        case 0x4da928u: goto label_4da928;
        case 0x4da92cu: goto label_4da92c;
        case 0x4da930u: goto label_4da930;
        case 0x4da934u: goto label_4da934;
        case 0x4da938u: goto label_4da938;
        case 0x4da93cu: goto label_4da93c;
        case 0x4da940u: goto label_4da940;
        case 0x4da944u: goto label_4da944;
        case 0x4da948u: goto label_4da948;
        case 0x4da94cu: goto label_4da94c;
        case 0x4da950u: goto label_4da950;
        case 0x4da954u: goto label_4da954;
        case 0x4da958u: goto label_4da958;
        case 0x4da95cu: goto label_4da95c;
        case 0x4da960u: goto label_4da960;
        case 0x4da964u: goto label_4da964;
        case 0x4da968u: goto label_4da968;
        case 0x4da96cu: goto label_4da96c;
        case 0x4da970u: goto label_4da970;
        case 0x4da974u: goto label_4da974;
        case 0x4da978u: goto label_4da978;
        case 0x4da97cu: goto label_4da97c;
        case 0x4da980u: goto label_4da980;
        case 0x4da984u: goto label_4da984;
        case 0x4da988u: goto label_4da988;
        case 0x4da98cu: goto label_4da98c;
        case 0x4da990u: goto label_4da990;
        case 0x4da994u: goto label_4da994;
        case 0x4da998u: goto label_4da998;
        case 0x4da99cu: goto label_4da99c;
        case 0x4da9a0u: goto label_4da9a0;
        case 0x4da9a4u: goto label_4da9a4;
        case 0x4da9a8u: goto label_4da9a8;
        case 0x4da9acu: goto label_4da9ac;
        case 0x4da9b0u: goto label_4da9b0;
        case 0x4da9b4u: goto label_4da9b4;
        case 0x4da9b8u: goto label_4da9b8;
        case 0x4da9bcu: goto label_4da9bc;
        case 0x4da9c0u: goto label_4da9c0;
        case 0x4da9c4u: goto label_4da9c4;
        case 0x4da9c8u: goto label_4da9c8;
        case 0x4da9ccu: goto label_4da9cc;
        case 0x4da9d0u: goto label_4da9d0;
        case 0x4da9d4u: goto label_4da9d4;
        case 0x4da9d8u: goto label_4da9d8;
        case 0x4da9dcu: goto label_4da9dc;
        case 0x4da9e0u: goto label_4da9e0;
        case 0x4da9e4u: goto label_4da9e4;
        case 0x4da9e8u: goto label_4da9e8;
        case 0x4da9ecu: goto label_4da9ec;
        case 0x4da9f0u: goto label_4da9f0;
        case 0x4da9f4u: goto label_4da9f4;
        case 0x4da9f8u: goto label_4da9f8;
        case 0x4da9fcu: goto label_4da9fc;
        case 0x4daa00u: goto label_4daa00;
        case 0x4daa04u: goto label_4daa04;
        case 0x4daa08u: goto label_4daa08;
        case 0x4daa0cu: goto label_4daa0c;
        case 0x4daa10u: goto label_4daa10;
        case 0x4daa14u: goto label_4daa14;
        case 0x4daa18u: goto label_4daa18;
        case 0x4daa1cu: goto label_4daa1c;
        case 0x4daa20u: goto label_4daa20;
        case 0x4daa24u: goto label_4daa24;
        case 0x4daa28u: goto label_4daa28;
        case 0x4daa2cu: goto label_4daa2c;
        case 0x4daa30u: goto label_4daa30;
        case 0x4daa34u: goto label_4daa34;
        case 0x4daa38u: goto label_4daa38;
        case 0x4daa3cu: goto label_4daa3c;
        case 0x4daa40u: goto label_4daa40;
        case 0x4daa44u: goto label_4daa44;
        case 0x4daa48u: goto label_4daa48;
        case 0x4daa4cu: goto label_4daa4c;
        case 0x4daa50u: goto label_4daa50;
        case 0x4daa54u: goto label_4daa54;
        case 0x4daa58u: goto label_4daa58;
        case 0x4daa5cu: goto label_4daa5c;
        case 0x4daa60u: goto label_4daa60;
        case 0x4daa64u: goto label_4daa64;
        case 0x4daa68u: goto label_4daa68;
        case 0x4daa6cu: goto label_4daa6c;
        case 0x4daa70u: goto label_4daa70;
        case 0x4daa74u: goto label_4daa74;
        case 0x4daa78u: goto label_4daa78;
        case 0x4daa7cu: goto label_4daa7c;
        case 0x4daa80u: goto label_4daa80;
        case 0x4daa84u: goto label_4daa84;
        case 0x4daa88u: goto label_4daa88;
        case 0x4daa8cu: goto label_4daa8c;
        case 0x4daa90u: goto label_4daa90;
        case 0x4daa94u: goto label_4daa94;
        case 0x4daa98u: goto label_4daa98;
        case 0x4daa9cu: goto label_4daa9c;
        case 0x4daaa0u: goto label_4daaa0;
        case 0x4daaa4u: goto label_4daaa4;
        case 0x4daaa8u: goto label_4daaa8;
        case 0x4daaacu: goto label_4daaac;
        case 0x4daab0u: goto label_4daab0;
        case 0x4daab4u: goto label_4daab4;
        case 0x4daab8u: goto label_4daab8;
        case 0x4daabcu: goto label_4daabc;
        case 0x4daac0u: goto label_4daac0;
        case 0x4daac4u: goto label_4daac4;
        case 0x4daac8u: goto label_4daac8;
        case 0x4daaccu: goto label_4daacc;
        default: break;
    }

    ctx->pc = 0x4da7a0u;

label_4da7a0:
    // 0x4da7a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4da7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4da7a4:
    // 0x4da7a4: 0x7163c  dsll32      $v0, $a3, 24
    ctx->pc = 0x4da7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 24));
label_4da7a8:
    // 0x4da7a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4da7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4da7ac:
    // 0x4da7ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4da7acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4da7b0:
    // 0x4da7b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4da7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4da7b4:
    // 0x4da7b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4da7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4da7b8:
    // 0x4da7b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4da7b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da7bc:
    // 0x4da7bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4da7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4da7c0:
    // 0x4da7c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4da7c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da7c4:
    // 0x4da7c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4da7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4da7c8:
    // 0x4da7c8: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x4da7c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4da7cc:
    // 0x4da7cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4da7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4da7d0:
    // 0x4da7d0: 0x69c3c  dsll32      $s3, $a2, 16
    ctx->pc = 0x4da7d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) << (32 + 16));
label_4da7d4:
    // 0x4da7d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4da7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4da7d8:
    // 0x4da7d8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x4da7d8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_4da7dc:
    // 0x4da7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da7e0:
    // 0x4da7e0: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x4da7e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4da7e4:
    // 0x4da7e4: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4da7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4da7e8:
    // 0x4da7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4da7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da7ec:
    // 0x4da7ec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4da7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4da7f0:
    // 0x4da7f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4da7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4da7f4:
    // 0x4da7f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4da7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4da7f8:
    // 0x4da7f8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4da7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4da7fc:
    // 0x4da7fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4da7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4da800:
    // 0x4da800: 0xc136d60  jal         func_4DB580
label_4da804:
    if (ctx->pc == 0x4DA804u) {
        ctx->pc = 0x4DA804u;
            // 0x4da804: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA808u;
        goto label_4da808;
    }
    ctx->pc = 0x4DA800u;
    SET_GPR_U32(ctx, 31, 0x4DA808u);
    ctx->pc = 0x4DA804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA800u;
            // 0x4da804: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB580u;
    if (runtime->hasFunction(0x4DB580u)) {
        auto targetFn = runtime->lookupFunction(0x4DB580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA808u; }
        if (ctx->pc != 0x4DA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB580_0x4db580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA808u; }
        if (ctx->pc != 0x4DA808u) { return; }
    }
    ctx->pc = 0x4DA808u;
label_4da808:
    // 0x4da808: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4da80c:
    if (ctx->pc == 0x4DA80Cu) {
        ctx->pc = 0x4DA810u;
        goto label_4da810;
    }
    ctx->pc = 0x4DA808u;
    {
        const bool branch_taken_0x4da808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da808) {
            ctx->pc = 0x4DA820u;
            goto label_4da820;
        }
    }
    ctx->pc = 0x4DA810u;
label_4da810:
    // 0x4da810: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4da810u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4da814:
    // 0x4da814: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x4da814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4da818:
    // 0x4da818: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4da81c:
    if (ctx->pc == 0x4DA81Cu) {
        ctx->pc = 0x4DA81Cu;
            // 0x4da81c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4DA820u;
        goto label_4da820;
    }
    ctx->pc = 0x4DA818u;
    {
        const bool branch_taken_0x4da818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA818u;
            // 0x4da81c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da818) {
            ctx->pc = 0x4DA7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4da7ec;
        }
    }
    ctx->pc = 0x4DA820u;
label_4da820:
    // 0x4da820: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4da820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4da824:
    // 0x4da824: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4da824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4da828:
    // 0x4da828: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4da828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4da82c:
    // 0x4da82c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4da82cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4da830:
    // 0x4da830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4da830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4da834:
    // 0x4da834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4da834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4da838:
    // 0x4da838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4da838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4da83c:
    // 0x4da83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da840:
    // 0x4da840: 0x3e00008  jr          $ra
label_4da844:
    if (ctx->pc == 0x4DA844u) {
        ctx->pc = 0x4DA844u;
            // 0x4da844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DA848u;
        goto label_4da848;
    }
    ctx->pc = 0x4DA840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA840u;
            // 0x4da844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA848u;
label_4da848:
    // 0x4da848: 0x0  nop
    ctx->pc = 0x4da848u;
    // NOP
label_4da84c:
    // 0x4da84c: 0x0  nop
    ctx->pc = 0x4da84cu;
    // NOP
label_4da850:
    // 0x4da850: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4da850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4da854:
    // 0x4da854: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4da854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4da858:
    // 0x4da858: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4da858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4da85c:
    // 0x4da85c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4da85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4da860:
    // 0x4da860: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4da860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4da864:
    // 0x4da864: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4da864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4da868:
    // 0x4da868: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4da868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4da86c:
    // 0x4da86c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4da86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4da870:
    // 0x4da870: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4da870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4da874:
    // 0x4da874: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4da874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4da878:
    // 0x4da878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4da878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4da87c:
    // 0x4da87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da880:
    // 0x4da880: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4da880u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4da884:
    // 0x4da884: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4da888:
    if (ctx->pc == 0x4DA888u) {
        ctx->pc = 0x4DA888u;
            // 0x4da888: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA88Cu;
        goto label_4da88c;
    }
    ctx->pc = 0x4DA884u;
    {
        const bool branch_taken_0x4da884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DA888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA884u;
            // 0x4da888: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da884) {
            ctx->pc = 0x4DA8E8u;
            goto label_4da8e8;
        }
    }
    ctx->pc = 0x4DA88Cu;
label_4da88c:
    // 0x4da88c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4da88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4da890:
    // 0x4da890: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4da894:
    if (ctx->pc == 0x4DA894u) {
        ctx->pc = 0x4DA894u;
            // 0x4da894: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DA898u;
        goto label_4da898;
    }
    ctx->pc = 0x4DA890u;
    {
        const bool branch_taken_0x4da890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4da890) {
            ctx->pc = 0x4DA894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA890u;
            // 0x4da894: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA8D4u;
            goto label_4da8d4;
        }
    }
    ctx->pc = 0x4DA898u;
label_4da898:
    // 0x4da898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4da898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4da89c:
    // 0x4da89c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4da8a0:
    if (ctx->pc == 0x4DA8A0u) {
        ctx->pc = 0x4DA8A4u;
        goto label_4da8a4;
    }
    ctx->pc = 0x4DA89Cu;
    {
        const bool branch_taken_0x4da89c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4da89c) {
            ctx->pc = 0x4DA8ACu;
            goto label_4da8ac;
        }
    }
    ctx->pc = 0x4DA8A4u;
label_4da8a4:
    // 0x4da8a4: 0x1000007c  b           . + 4 + (0x7C << 2)
label_4da8a8:
    if (ctx->pc == 0x4DA8A8u) {
        ctx->pc = 0x4DA8A8u;
            // 0x4da8a8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4DA8ACu;
        goto label_4da8ac;
    }
    ctx->pc = 0x4DA8A4u;
    {
        const bool branch_taken_0x4da8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA8A4u;
            // 0x4da8a8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da8a4) {
            ctx->pc = 0x4DAA98u;
            goto label_4daa98;
        }
    }
    ctx->pc = 0x4DA8ACu;
label_4da8ac:
    // 0x4da8ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4da8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4da8b0:
    // 0x4da8b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da8b4:
    // 0x4da8b4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4da8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4da8b8:
    // 0x4da8b8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4da8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4da8bc:
    // 0x4da8bc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4da8c0:
    // 0x4da8c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4da8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4da8c4:
    // 0x4da8c4: 0x320f809  jalr        $t9
label_4da8c8:
    if (ctx->pc == 0x4DA8C8u) {
        ctx->pc = 0x4DA8C8u;
            // 0x4da8c8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4DA8CCu;
        goto label_4da8cc;
    }
    ctx->pc = 0x4DA8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA8CCu);
        ctx->pc = 0x4DA8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA8C4u;
            // 0x4da8c8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA8CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA8CCu; }
            if (ctx->pc != 0x4DA8CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4DA8CCu;
label_4da8cc:
    // 0x4da8cc: 0x10000071  b           . + 4 + (0x71 << 2)
label_4da8d0:
    if (ctx->pc == 0x4DA8D0u) {
        ctx->pc = 0x4DA8D4u;
        goto label_4da8d4;
    }
    ctx->pc = 0x4DA8CCu;
    {
        const bool branch_taken_0x4da8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da8cc) {
            ctx->pc = 0x4DAA94u;
            goto label_4daa94;
        }
    }
    ctx->pc = 0x4DA8D4u;
label_4da8d4:
    // 0x4da8d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4da8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4da8d8:
    // 0x4da8d8: 0x320f809  jalr        $t9
label_4da8dc:
    if (ctx->pc == 0x4DA8DCu) {
        ctx->pc = 0x4DA8E0u;
        goto label_4da8e0;
    }
    ctx->pc = 0x4DA8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA8E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA8E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA8E0u; }
            if (ctx->pc != 0x4DA8E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA8E0u;
label_4da8e0:
    // 0x4da8e0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_4da8e4:
    if (ctx->pc == 0x4DA8E4u) {
        ctx->pc = 0x4DA8E8u;
        goto label_4da8e8;
    }
    ctx->pc = 0x4DA8E0u;
    {
        const bool branch_taken_0x4da8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da8e0) {
            ctx->pc = 0x4DAA94u;
            goto label_4daa94;
        }
    }
    ctx->pc = 0x4DA8E8u;
label_4da8e8:
    // 0x4da8e8: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4da8e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4da8ec:
    // 0x4da8ec: 0x12e00069  beqz        $s7, . + 4 + (0x69 << 2)
label_4da8f0:
    if (ctx->pc == 0x4DA8F0u) {
        ctx->pc = 0x4DA8F4u;
        goto label_4da8f4;
    }
    ctx->pc = 0x4DA8ECu;
    {
        const bool branch_taken_0x4da8ec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da8ec) {
            ctx->pc = 0x4DAA94u;
            goto label_4daa94;
        }
    }
    ctx->pc = 0x4DA8F4u;
label_4da8f4:
    // 0x4da8f4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4da8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4da8f8:
    // 0x4da8f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4da8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4da8fc:
    // 0x4da8fc: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4da8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4da900:
    // 0x4da900: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4da900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4da904:
    // 0x4da904: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4da904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4da908:
    // 0x4da908: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da90c:
    // 0x4da90c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4da90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4da910:
    // 0x4da910: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da914:
    // 0x4da914: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4da914u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4da918:
    // 0x4da918: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4da918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4da91c:
    // 0x4da91c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4da91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da920:
    // 0x4da920: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4da920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4da924:
    // 0x4da924: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x4da924u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4da928:
    // 0x4da928: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4da928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4da92c:
    // 0x4da92c: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x4da92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_4da930:
    // 0x4da930: 0xc04e738  jal         func_139CE0
label_4da934:
    if (ctx->pc == 0x4DA934u) {
        ctx->pc = 0x4DA934u;
            // 0x4da934: 0x26d50084  addiu       $s5, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x4DA938u;
        goto label_4da938;
    }
    ctx->pc = 0x4DA930u;
    SET_GPR_U32(ctx, 31, 0x4DA938u);
    ctx->pc = 0x4DA934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA930u;
            // 0x4da934: 0x26d50084  addiu       $s5, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA938u; }
        if (ctx->pc != 0x4DA938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA938u; }
        if (ctx->pc != 0x4DA938u) { return; }
    }
    ctx->pc = 0x4DA938u;
label_4da938:
    // 0x4da938: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4da938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da93c:
    // 0x4da93c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4da93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da940:
    // 0x4da940: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x4da940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_4da944:
    // 0x4da944: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x4da944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4da948:
    // 0x4da948: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x4da948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_4da94c:
    // 0x4da94c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4da94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4da950:
    // 0x4da950: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4da950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4da954:
    // 0x4da954: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4da954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4da958:
    // 0x4da958: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4da958u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4da95c:
    // 0x4da95c: 0xc0d639c  jal         func_358E70
label_4da960:
    if (ctx->pc == 0x4DA960u) {
        ctx->pc = 0x4DA960u;
            // 0x4da960: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x4DA964u;
        goto label_4da964;
    }
    ctx->pc = 0x4DA95Cu;
    SET_GPR_U32(ctx, 31, 0x4DA964u);
    ctx->pc = 0x4DA960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA95Cu;
            // 0x4da960: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA964u; }
        if (ctx->pc != 0x4DA964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA964u; }
        if (ctx->pc != 0x4DA964u) { return; }
    }
    ctx->pc = 0x4DA964u;
label_4da964:
    // 0x4da964: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_4da968:
    if (ctx->pc == 0x4DA968u) {
        ctx->pc = 0x4DA96Cu;
        goto label_4da96c;
    }
    ctx->pc = 0x4DA964u;
    {
        const bool branch_taken_0x4da964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da964) {
            ctx->pc = 0x4DAA58u;
            goto label_4daa58;
        }
    }
    ctx->pc = 0x4DA96Cu;
label_4da96c:
    // 0x4da96c: 0xc0d1c14  jal         func_347050
label_4da970:
    if (ctx->pc == 0x4DA970u) {
        ctx->pc = 0x4DA970u;
            // 0x4da970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA974u;
        goto label_4da974;
    }
    ctx->pc = 0x4DA96Cu;
    SET_GPR_U32(ctx, 31, 0x4DA974u);
    ctx->pc = 0x4DA970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA96Cu;
            // 0x4da970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA974u; }
        if (ctx->pc != 0x4DA974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA974u; }
        if (ctx->pc != 0x4DA974u) { return; }
    }
    ctx->pc = 0x4DA974u;
label_4da974:
    // 0x4da974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4da974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4da978:
    // 0x4da978: 0xc04f278  jal         func_13C9E0
label_4da97c:
    if (ctx->pc == 0x4DA97Cu) {
        ctx->pc = 0x4DA97Cu;
            // 0x4da97c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4DA980u;
        goto label_4da980;
    }
    ctx->pc = 0x4DA978u;
    SET_GPR_U32(ctx, 31, 0x4DA980u);
    ctx->pc = 0x4DA97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA978u;
            // 0x4da97c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA980u; }
        if (ctx->pc != 0x4DA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA980u; }
        if (ctx->pc != 0x4DA980u) { return; }
    }
    ctx->pc = 0x4DA980u;
label_4da980:
    // 0x4da980: 0xc0d1c10  jal         func_347040
label_4da984:
    if (ctx->pc == 0x4DA984u) {
        ctx->pc = 0x4DA984u;
            // 0x4da984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA988u;
        goto label_4da988;
    }
    ctx->pc = 0x4DA980u;
    SET_GPR_U32(ctx, 31, 0x4DA988u);
    ctx->pc = 0x4DA984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA980u;
            // 0x4da984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA988u; }
        if (ctx->pc != 0x4DA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA988u; }
        if (ctx->pc != 0x4DA988u) { return; }
    }
    ctx->pc = 0x4DA988u;
label_4da988:
    // 0x4da988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4da988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4da98c:
    // 0x4da98c: 0xc04ce80  jal         func_133A00
label_4da990:
    if (ctx->pc == 0x4DA990u) {
        ctx->pc = 0x4DA990u;
            // 0x4da990: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4DA994u;
        goto label_4da994;
    }
    ctx->pc = 0x4DA98Cu;
    SET_GPR_U32(ctx, 31, 0x4DA994u);
    ctx->pc = 0x4DA990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA98Cu;
            // 0x4da990: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA994u; }
        if (ctx->pc != 0x4DA994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA994u; }
        if (ctx->pc != 0x4DA994u) { return; }
    }
    ctx->pc = 0x4DA994u;
label_4da994:
    // 0x4da994: 0xc0d4108  jal         func_350420
label_4da998:
    if (ctx->pc == 0x4DA998u) {
        ctx->pc = 0x4DA99Cu;
        goto label_4da99c;
    }
    ctx->pc = 0x4DA994u;
    SET_GPR_U32(ctx, 31, 0x4DA99Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA99Cu; }
        if (ctx->pc != 0x4DA99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA99Cu; }
        if (ctx->pc != 0x4DA99Cu) { return; }
    }
    ctx->pc = 0x4DA99Cu;
label_4da99c:
    // 0x4da99c: 0xc0b36b4  jal         func_2CDAD0
label_4da9a0:
    if (ctx->pc == 0x4DA9A0u) {
        ctx->pc = 0x4DA9A0u;
            // 0x4da9a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA9A4u;
        goto label_4da9a4;
    }
    ctx->pc = 0x4DA99Cu;
    SET_GPR_U32(ctx, 31, 0x4DA9A4u);
    ctx->pc = 0x4DA9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA99Cu;
            // 0x4da9a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9A4u; }
        if (ctx->pc != 0x4DA9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9A4u; }
        if (ctx->pc != 0x4DA9A4u) { return; }
    }
    ctx->pc = 0x4DA9A4u;
label_4da9a4:
    // 0x4da9a4: 0xc0b9c64  jal         func_2E7190
label_4da9a8:
    if (ctx->pc == 0x4DA9A8u) {
        ctx->pc = 0x4DA9A8u;
            // 0x4da9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA9ACu;
        goto label_4da9ac;
    }
    ctx->pc = 0x4DA9A4u;
    SET_GPR_U32(ctx, 31, 0x4DA9ACu);
    ctx->pc = 0x4DA9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA9A4u;
            // 0x4da9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9ACu; }
        if (ctx->pc != 0x4DA9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9ACu; }
        if (ctx->pc != 0x4DA9ACu) { return; }
    }
    ctx->pc = 0x4DA9ACu;
label_4da9ac:
    // 0x4da9ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4da9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4da9b0:
    // 0x4da9b0: 0xc0d4104  jal         func_350410
label_4da9b4:
    if (ctx->pc == 0x4DA9B4u) {
        ctx->pc = 0x4DA9B4u;
            // 0x4da9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA9B8u;
        goto label_4da9b8;
    }
    ctx->pc = 0x4DA9B0u;
    SET_GPR_U32(ctx, 31, 0x4DA9B8u);
    ctx->pc = 0x4DA9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA9B0u;
            // 0x4da9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9B8u; }
        if (ctx->pc != 0x4DA9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9B8u; }
        if (ctx->pc != 0x4DA9B8u) { return; }
    }
    ctx->pc = 0x4DA9B8u;
label_4da9b8:
    // 0x4da9b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4da9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4da9bc:
    // 0x4da9bc: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4da9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4da9c0:
    // 0x4da9c0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4da9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4da9c4:
    // 0x4da9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4da9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4da9c8:
    // 0x4da9c8: 0xc44caa60  lwc1        $f12, -0x55A0($v0)
    ctx->pc = 0x4da9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4da9cc:
    // 0x4da9cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4da9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4da9d0:
    // 0x4da9d0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x4da9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4da9d4:
    // 0x4da9d4: 0xc0d40ac  jal         func_3502B0
label_4da9d8:
    if (ctx->pc == 0x4DA9D8u) {
        ctx->pc = 0x4DA9D8u;
            // 0x4da9d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA9DCu;
        goto label_4da9dc;
    }
    ctx->pc = 0x4DA9D4u;
    SET_GPR_U32(ctx, 31, 0x4DA9DCu);
    ctx->pc = 0x4DA9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA9D4u;
            // 0x4da9d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9DCu; }
        if (ctx->pc != 0x4DA9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9DCu; }
        if (ctx->pc != 0x4DA9DCu) { return; }
    }
    ctx->pc = 0x4DA9DCu;
label_4da9dc:
    // 0x4da9dc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4da9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4da9e0:
    // 0x4da9e0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_4da9e4:
    if (ctx->pc == 0x4DA9E4u) {
        ctx->pc = 0x4DA9E4u;
            // 0x4da9e4: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4DA9E8u;
        goto label_4da9e8;
    }
    ctx->pc = 0x4DA9E0u;
    {
        const bool branch_taken_0x4da9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA9E0u;
            // 0x4da9e4: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da9e0) {
            ctx->pc = 0x4DAA58u;
            goto label_4daa58;
        }
    }
    ctx->pc = 0x4DA9E8u;
label_4da9e8:
    // 0x4da9e8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4da9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4da9ec:
    // 0x4da9ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4da9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4da9f0:
    // 0x4da9f0: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x4da9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_4da9f4:
    // 0x4da9f4: 0xc136ab4  jal         func_4DAAD0
label_4da9f8:
    if (ctx->pc == 0x4DA9F8u) {
        ctx->pc = 0x4DA9F8u;
            // 0x4da9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA9FCu;
        goto label_4da9fc;
    }
    ctx->pc = 0x4DA9F4u;
    SET_GPR_U32(ctx, 31, 0x4DA9FCu);
    ctx->pc = 0x4DA9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA9F4u;
            // 0x4da9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DAAD0u;
    if (runtime->hasFunction(0x4DAAD0u)) {
        auto targetFn = runtime->lookupFunction(0x4DAAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9FCu; }
        if (ctx->pc != 0x4DA9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DAAD0_0x4daad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA9FCu; }
        if (ctx->pc != 0x4DA9FCu) { return; }
    }
    ctx->pc = 0x4DA9FCu;
label_4da9fc:
    // 0x4da9fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4da9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4daa00:
    // 0x4daa00: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4daa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4daa04:
    // 0x4daa04: 0xc04cd60  jal         func_133580
label_4daa08:
    if (ctx->pc == 0x4DAA08u) {
        ctx->pc = 0x4DAA08u;
            // 0x4daa08: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4DAA0Cu;
        goto label_4daa0c;
    }
    ctx->pc = 0x4DAA04u;
    SET_GPR_U32(ctx, 31, 0x4DAA0Cu);
    ctx->pc = 0x4DAA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA04u;
            // 0x4daa08: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA0Cu; }
        if (ctx->pc != 0x4DAA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA0Cu; }
        if (ctx->pc != 0x4DAA0Cu) { return; }
    }
    ctx->pc = 0x4DAA0Cu;
label_4daa0c:
    // 0x4daa0c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4daa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4daa10:
    // 0x4daa10: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x4daa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4daa14:
    // 0x4daa14: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4daa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4daa18:
    // 0x4daa18: 0xc04e4a4  jal         func_139290
label_4daa1c:
    if (ctx->pc == 0x4DAA1Cu) {
        ctx->pc = 0x4DAA1Cu;
            // 0x4daa1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAA20u;
        goto label_4daa20;
    }
    ctx->pc = 0x4DAA18u;
    SET_GPR_U32(ctx, 31, 0x4DAA20u);
    ctx->pc = 0x4DAA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA18u;
            // 0x4daa1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA20u; }
        if (ctx->pc != 0x4DAA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA20u; }
        if (ctx->pc != 0x4DAA20u) { return; }
    }
    ctx->pc = 0x4DAA20u;
label_4daa20:
    // 0x4daa20: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4daa20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4daa24:
    // 0x4daa24: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4daa24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4daa28:
    // 0x4daa28: 0x320f809  jalr        $t9
label_4daa2c:
    if (ctx->pc == 0x4DAA2Cu) {
        ctx->pc = 0x4DAA2Cu;
            // 0x4daa2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAA30u;
        goto label_4daa30;
    }
    ctx->pc = 0x4DAA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DAA30u);
        ctx->pc = 0x4DAA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA28u;
            // 0x4daa2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DAA30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA30u; }
            if (ctx->pc != 0x4DAA30u) { return; }
        }
        }
    }
    ctx->pc = 0x4DAA30u;
label_4daa30:
    // 0x4daa30: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x4daa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4daa34:
    // 0x4daa34: 0xc66c00e4  lwc1        $f12, 0xE4($s3)
    ctx->pc = 0x4daa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4daa38:
    // 0x4daa38: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4daa38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4daa3c:
    // 0x4daa3c: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x4daa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4daa40:
    // 0x4daa40: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x4daa40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4daa44:
    // 0x4daa44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4daa44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4daa48:
    // 0x4daa48: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x4daa48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4daa4c:
    // 0x4daa4c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4daa4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4daa50:
    // 0x4daa50: 0xc04cff4  jal         func_133FD0
label_4daa54:
    if (ctx->pc == 0x4DAA54u) {
        ctx->pc = 0x4DAA54u;
            // 0x4daa54: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAA58u;
        goto label_4daa58;
    }
    ctx->pc = 0x4DAA50u;
    SET_GPR_U32(ctx, 31, 0x4DAA58u);
    ctx->pc = 0x4DAA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA50u;
            // 0x4daa54: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA58u; }
        if (ctx->pc != 0x4DAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA58u; }
        if (ctx->pc != 0x4DAA58u) { return; }
    }
    ctx->pc = 0x4DAA58u;
label_4daa58:
    // 0x4daa58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4daa58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4daa5c:
    // 0x4daa5c: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x4daa5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4daa60:
    // 0x4daa60: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_4daa64:
    if (ctx->pc == 0x4DAA64u) {
        ctx->pc = 0x4DAA64u;
            // 0x4daa64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DAA68u;
        goto label_4daa68;
    }
    ctx->pc = 0x4DAA60u;
    {
        const bool branch_taken_0x4daa60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA60u;
            // 0x4daa64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daa60) {
            ctx->pc = 0x4DA940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4da940;
        }
    }
    ctx->pc = 0x4DAA68u;
label_4daa68:
    // 0x4daa68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4daa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4daa6c:
    // 0x4daa6c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4daa6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4daa70:
    // 0x4daa70: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4daa74:
    if (ctx->pc == 0x4DAA74u) {
        ctx->pc = 0x4DAA74u;
            // 0x4daa74: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4DAA78u;
        goto label_4daa78;
    }
    ctx->pc = 0x4DAA70u;
    {
        const bool branch_taken_0x4daa70 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4DAA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA70u;
            // 0x4daa74: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daa70) {
            ctx->pc = 0x4DAA94u;
            goto label_4daa94;
        }
    }
    ctx->pc = 0x4DAA78u;
label_4daa78:
    // 0x4daa78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4daa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4daa7c:
    // 0x4daa7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4daa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4daa80:
    // 0x4daa80: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4daa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4daa84:
    // 0x4daa84: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4daa84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4daa88:
    // 0x4daa88: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4daa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4daa8c:
    // 0x4daa8c: 0xc055990  jal         func_156640
label_4daa90:
    if (ctx->pc == 0x4DAA90u) {
        ctx->pc = 0x4DAA90u;
            // 0x4daa90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAA94u;
        goto label_4daa94;
    }
    ctx->pc = 0x4DAA8Cu;
    SET_GPR_U32(ctx, 31, 0x4DAA94u);
    ctx->pc = 0x4DAA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAA8Cu;
            // 0x4daa90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA94u; }
        if (ctx->pc != 0x4DAA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAA94u; }
        if (ctx->pc != 0x4DAA94u) { return; }
    }
    ctx->pc = 0x4DAA94u;
label_4daa94:
    // 0x4daa94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4daa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4daa98:
    // 0x4daa98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4daa98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4daa9c:
    // 0x4daa9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4daa9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4daaa0:
    // 0x4daaa0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4daaa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4daaa4:
    // 0x4daaa4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4daaa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4daaa8:
    // 0x4daaa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4daaa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4daaac:
    // 0x4daaac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4daaacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4daab0:
    // 0x4daab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4daab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4daab4:
    // 0x4daab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4daab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4daab8:
    // 0x4daab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4daab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4daabc:
    // 0x4daabc: 0x3e00008  jr          $ra
label_4daac0:
    if (ctx->pc == 0x4DAAC0u) {
        ctx->pc = 0x4DAAC0u;
            // 0x4daac0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4DAAC4u;
        goto label_4daac4;
    }
    ctx->pc = 0x4DAABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAABCu;
            // 0x4daac0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DAAC4u;
label_4daac4:
    // 0x4daac4: 0x0  nop
    ctx->pc = 0x4daac4u;
    // NOP
label_4daac8:
    // 0x4daac8: 0x0  nop
    ctx->pc = 0x4daac8u;
    // NOP
label_4daacc:
    // 0x4daacc: 0x0  nop
    ctx->pc = 0x4daaccu;
    // NOP
}
