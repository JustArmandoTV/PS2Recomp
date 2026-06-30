#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FF960
// Address: 0x2ff960 - 0x2ffb50
void sub_002FF960_0x2ff960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF960_0x2ff960");
#endif

    switch (ctx->pc) {
        case 0x2ff960u: goto label_2ff960;
        case 0x2ff964u: goto label_2ff964;
        case 0x2ff968u: goto label_2ff968;
        case 0x2ff96cu: goto label_2ff96c;
        case 0x2ff970u: goto label_2ff970;
        case 0x2ff974u: goto label_2ff974;
        case 0x2ff978u: goto label_2ff978;
        case 0x2ff97cu: goto label_2ff97c;
        case 0x2ff980u: goto label_2ff980;
        case 0x2ff984u: goto label_2ff984;
        case 0x2ff988u: goto label_2ff988;
        case 0x2ff98cu: goto label_2ff98c;
        case 0x2ff990u: goto label_2ff990;
        case 0x2ff994u: goto label_2ff994;
        case 0x2ff998u: goto label_2ff998;
        case 0x2ff99cu: goto label_2ff99c;
        case 0x2ff9a0u: goto label_2ff9a0;
        case 0x2ff9a4u: goto label_2ff9a4;
        case 0x2ff9a8u: goto label_2ff9a8;
        case 0x2ff9acu: goto label_2ff9ac;
        case 0x2ff9b0u: goto label_2ff9b0;
        case 0x2ff9b4u: goto label_2ff9b4;
        case 0x2ff9b8u: goto label_2ff9b8;
        case 0x2ff9bcu: goto label_2ff9bc;
        case 0x2ff9c0u: goto label_2ff9c0;
        case 0x2ff9c4u: goto label_2ff9c4;
        case 0x2ff9c8u: goto label_2ff9c8;
        case 0x2ff9ccu: goto label_2ff9cc;
        case 0x2ff9d0u: goto label_2ff9d0;
        case 0x2ff9d4u: goto label_2ff9d4;
        case 0x2ff9d8u: goto label_2ff9d8;
        case 0x2ff9dcu: goto label_2ff9dc;
        case 0x2ff9e0u: goto label_2ff9e0;
        case 0x2ff9e4u: goto label_2ff9e4;
        case 0x2ff9e8u: goto label_2ff9e8;
        case 0x2ff9ecu: goto label_2ff9ec;
        case 0x2ff9f0u: goto label_2ff9f0;
        case 0x2ff9f4u: goto label_2ff9f4;
        case 0x2ff9f8u: goto label_2ff9f8;
        case 0x2ff9fcu: goto label_2ff9fc;
        case 0x2ffa00u: goto label_2ffa00;
        case 0x2ffa04u: goto label_2ffa04;
        case 0x2ffa08u: goto label_2ffa08;
        case 0x2ffa0cu: goto label_2ffa0c;
        case 0x2ffa10u: goto label_2ffa10;
        case 0x2ffa14u: goto label_2ffa14;
        case 0x2ffa18u: goto label_2ffa18;
        case 0x2ffa1cu: goto label_2ffa1c;
        case 0x2ffa20u: goto label_2ffa20;
        case 0x2ffa24u: goto label_2ffa24;
        case 0x2ffa28u: goto label_2ffa28;
        case 0x2ffa2cu: goto label_2ffa2c;
        case 0x2ffa30u: goto label_2ffa30;
        case 0x2ffa34u: goto label_2ffa34;
        case 0x2ffa38u: goto label_2ffa38;
        case 0x2ffa3cu: goto label_2ffa3c;
        case 0x2ffa40u: goto label_2ffa40;
        case 0x2ffa44u: goto label_2ffa44;
        case 0x2ffa48u: goto label_2ffa48;
        case 0x2ffa4cu: goto label_2ffa4c;
        case 0x2ffa50u: goto label_2ffa50;
        case 0x2ffa54u: goto label_2ffa54;
        case 0x2ffa58u: goto label_2ffa58;
        case 0x2ffa5cu: goto label_2ffa5c;
        case 0x2ffa60u: goto label_2ffa60;
        case 0x2ffa64u: goto label_2ffa64;
        case 0x2ffa68u: goto label_2ffa68;
        case 0x2ffa6cu: goto label_2ffa6c;
        case 0x2ffa70u: goto label_2ffa70;
        case 0x2ffa74u: goto label_2ffa74;
        case 0x2ffa78u: goto label_2ffa78;
        case 0x2ffa7cu: goto label_2ffa7c;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffa84u: goto label_2ffa84;
        case 0x2ffa88u: goto label_2ffa88;
        case 0x2ffa8cu: goto label_2ffa8c;
        case 0x2ffa90u: goto label_2ffa90;
        case 0x2ffa94u: goto label_2ffa94;
        case 0x2ffa98u: goto label_2ffa98;
        case 0x2ffa9cu: goto label_2ffa9c;
        case 0x2ffaa0u: goto label_2ffaa0;
        case 0x2ffaa4u: goto label_2ffaa4;
        case 0x2ffaa8u: goto label_2ffaa8;
        case 0x2ffaacu: goto label_2ffaac;
        case 0x2ffab0u: goto label_2ffab0;
        case 0x2ffab4u: goto label_2ffab4;
        case 0x2ffab8u: goto label_2ffab8;
        case 0x2ffabcu: goto label_2ffabc;
        case 0x2ffac0u: goto label_2ffac0;
        case 0x2ffac4u: goto label_2ffac4;
        case 0x2ffac8u: goto label_2ffac8;
        case 0x2ffaccu: goto label_2ffacc;
        case 0x2ffad0u: goto label_2ffad0;
        case 0x2ffad4u: goto label_2ffad4;
        case 0x2ffad8u: goto label_2ffad8;
        case 0x2ffadcu: goto label_2ffadc;
        case 0x2ffae0u: goto label_2ffae0;
        case 0x2ffae4u: goto label_2ffae4;
        case 0x2ffae8u: goto label_2ffae8;
        case 0x2ffaecu: goto label_2ffaec;
        case 0x2ffaf0u: goto label_2ffaf0;
        case 0x2ffaf4u: goto label_2ffaf4;
        case 0x2ffaf8u: goto label_2ffaf8;
        case 0x2ffafcu: goto label_2ffafc;
        case 0x2ffb00u: goto label_2ffb00;
        case 0x2ffb04u: goto label_2ffb04;
        case 0x2ffb08u: goto label_2ffb08;
        case 0x2ffb0cu: goto label_2ffb0c;
        case 0x2ffb10u: goto label_2ffb10;
        case 0x2ffb14u: goto label_2ffb14;
        case 0x2ffb18u: goto label_2ffb18;
        case 0x2ffb1cu: goto label_2ffb1c;
        case 0x2ffb20u: goto label_2ffb20;
        case 0x2ffb24u: goto label_2ffb24;
        case 0x2ffb28u: goto label_2ffb28;
        case 0x2ffb2cu: goto label_2ffb2c;
        case 0x2ffb30u: goto label_2ffb30;
        case 0x2ffb34u: goto label_2ffb34;
        case 0x2ffb38u: goto label_2ffb38;
        case 0x2ffb3cu: goto label_2ffb3c;
        case 0x2ffb40u: goto label_2ffb40;
        case 0x2ffb44u: goto label_2ffb44;
        case 0x2ffb48u: goto label_2ffb48;
        case 0x2ffb4cu: goto label_2ffb4c;
        default: break;
    }

    ctx->pc = 0x2ff960u;

label_2ff960:
    // 0x2ff960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ff960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ff964:
    // 0x2ff964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ff964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2ff968:
    // 0x2ff968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ff968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ff96c:
    // 0x2ff96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ff96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ff970:
    // 0x2ff970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff974:
    // 0x2ff974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ff974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff978:
    // 0x2ff978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff97c:
    // 0x2ff97c: 0x8c910d60  lw          $s1, 0xD60($a0)
    ctx->pc = 0x2ff97cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_2ff980:
    // 0x2ff980: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x2ff980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2ff984:
    // 0x2ff984: 0xc0754b4  jal         func_1D52D0
label_2ff988:
    if (ctx->pc == 0x2FF988u) {
        ctx->pc = 0x2FF988u;
            // 0x2ff988: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x2FF98Cu;
        goto label_2ff98c;
    }
    ctx->pc = 0x2FF984u;
    SET_GPR_U32(ctx, 31, 0x2FF98Cu);
    ctx->pc = 0x2FF988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF984u;
            // 0x2ff988: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF98Cu; }
        if (ctx->pc != 0x2FF98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF98Cu; }
        if (ctx->pc != 0x2FF98Cu) { return; }
    }
    ctx->pc = 0x2FF98Cu;
label_2ff98c:
    // 0x2ff98c: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x2ff98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_2ff990:
    // 0x2ff990: 0xc0be258  jal         func_2F8960
label_2ff994:
    if (ctx->pc == 0x2FF994u) {
        ctx->pc = 0x2FF994u;
            // 0x2ff994: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF998u;
        goto label_2ff998;
    }
    ctx->pc = 0x2FF990u;
    SET_GPR_U32(ctx, 31, 0x2FF998u);
    ctx->pc = 0x2FF994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF990u;
            // 0x2ff994: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF998u; }
        if (ctx->pc != 0x2FF998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF998u; }
        if (ctx->pc != 0x2FF998u) { return; }
    }
    ctx->pc = 0x2FF998u;
label_2ff998:
    // 0x2ff998: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2ff998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ff99c:
    // 0x2ff99c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2ff99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_2ff9a0:
    // 0x2ff9a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ff9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff9a4:
    // 0x2ff9a4: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x2ff9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_2ff9a8:
    // 0x2ff9a8: 0x320f809  jalr        $t9
label_2ff9ac:
    if (ctx->pc == 0x2FF9ACu) {
        ctx->pc = 0x2FF9ACu;
            // 0x2ff9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9B0u;
        goto label_2ff9b0;
    }
    ctx->pc = 0x2FF9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF9B0u);
        ctx->pc = 0x2FF9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9A8u;
            // 0x2ff9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF9B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9B0u; }
            if (ctx->pc != 0x2FF9B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF9B0u;
label_2ff9b0:
    // 0x2ff9b0: 0xc0c1560  jal         func_305580
label_2ff9b4:
    if (ctx->pc == 0x2FF9B4u) {
        ctx->pc = 0x2FF9B4u;
            // 0x2ff9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9B8u;
        goto label_2ff9b8;
    }
    ctx->pc = 0x2FF9B0u;
    SET_GPR_U32(ctx, 31, 0x2FF9B8u);
    ctx->pc = 0x2FF9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9B0u;
            // 0x2ff9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9B8u; }
        if (ctx->pc != 0x2FF9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9B8u; }
        if (ctx->pc != 0x2FF9B8u) { return; }
    }
    ctx->pc = 0x2FF9B8u;
label_2ff9b8:
    // 0x2ff9b8: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x2ff9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ff9bc:
    // 0x2ff9bc: 0xc0c1540  jal         func_305500
label_2ff9c0:
    if (ctx->pc == 0x2FF9C0u) {
        ctx->pc = 0x2FF9C0u;
            // 0x2ff9c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9C4u;
        goto label_2ff9c4;
    }
    ctx->pc = 0x2FF9BCu;
    SET_GPR_U32(ctx, 31, 0x2FF9C4u);
    ctx->pc = 0x2FF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9BCu;
            // 0x2ff9c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9C4u; }
        if (ctx->pc != 0x2FF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9C4u; }
        if (ctx->pc != 0x2FF9C4u) { return; }
    }
    ctx->pc = 0x2FF9C4u;
label_2ff9c4:
    // 0x2ff9c4: 0xc0c0fa4  jal         func_303E90
label_2ff9c8:
    if (ctx->pc == 0x2FF9C8u) {
        ctx->pc = 0x2FF9C8u;
            // 0x2ff9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9CCu;
        goto label_2ff9cc;
    }
    ctx->pc = 0x2FF9C4u;
    SET_GPR_U32(ctx, 31, 0x2FF9CCu);
    ctx->pc = 0x2FF9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9C4u;
            // 0x2ff9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E90u;
    if (runtime->hasFunction(0x303E90u)) {
        auto targetFn = runtime->lookupFunction(0x303E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9CCu; }
        if (ctx->pc != 0x2FF9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E90_0x303e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9CCu; }
        if (ctx->pc != 0x2FF9CCu) { return; }
    }
    ctx->pc = 0x2FF9CCu;
label_2ff9cc:
    // 0x2ff9cc: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
label_2ff9d0:
    if (ctx->pc == 0x2FF9D0u) {
        ctx->pc = 0x2FF9D0u;
            // 0x2ff9d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2FF9D4u;
        goto label_2ff9d4;
    }
    ctx->pc = 0x2FF9CCu;
    {
        const bool branch_taken_0x2ff9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9cc) {
            ctx->pc = 0x2FF9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9CCu;
            // 0x2ff9d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFB2Cu;
            goto label_2ffb2c;
        }
    }
    ctx->pc = 0x2FF9D4u;
label_2ff9d4:
    // 0x2ff9d4: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x2ff9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_2ff9d8:
    // 0x2ff9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ff9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ff9dc:
    // 0x2ff9dc: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_2ff9e0:
    if (ctx->pc == 0x2FF9E0u) {
        ctx->pc = 0x2FF9E0u;
            // 0x2ff9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9E4u;
        goto label_2ff9e4;
    }
    ctx->pc = 0x2FF9DCu;
    {
        const bool branch_taken_0x2ff9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9dc) {
            ctx->pc = 0x2FF9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9DCu;
            // 0x2ff9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFB20u;
            goto label_2ffb20;
        }
    }
    ctx->pc = 0x2FF9E4u;
label_2ff9e4:
    // 0x2ff9e4: 0x8e430db4  lw          $v1, 0xDB4($s2)
    ctx->pc = 0x2ff9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
label_2ff9e8:
    // 0x2ff9e8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2ff9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2ff9ec:
    // 0x2ff9ec: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_2ff9f0:
    if (ctx->pc == 0x2FF9F0u) {
        ctx->pc = 0x2FF9F0u;
            // 0x2ff9f0: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->pc = 0x2FF9F4u;
        goto label_2ff9f4;
    }
    ctx->pc = 0x2FF9ECu;
    {
        const bool branch_taken_0x2ff9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff9ec) {
            ctx->pc = 0x2FF9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9ECu;
            // 0x2ff9f0: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA20u;
            goto label_2ffa20;
        }
    }
    ctx->pc = 0x2FF9F4u;
label_2ff9f4:
    // 0x2ff9f4: 0xc040180  jal         func_100600
label_2ff9f8:
    if (ctx->pc == 0x2FF9F8u) {
        ctx->pc = 0x2FF9F8u;
            // 0x2ff9f8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2FF9FCu;
        goto label_2ff9fc;
    }
    ctx->pc = 0x2FF9F4u;
    SET_GPR_U32(ctx, 31, 0x2FF9FCu);
    ctx->pc = 0x2FF9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9F4u;
            // 0x2ff9f8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9FCu; }
        if (ctx->pc != 0x2FF9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9FCu; }
        if (ctx->pc != 0x2FF9FCu) { return; }
    }
    ctx->pc = 0x2FF9FCu;
label_2ff9fc:
    // 0x2ff9fc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2ffa00:
    if (ctx->pc == 0x2FFA00u) {
        ctx->pc = 0x2FFA00u;
            // 0x2ffa00: 0xae400e10  sw          $zero, 0xE10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA04u;
        goto label_2ffa04;
    }
    ctx->pc = 0x2FF9FCu;
    {
        const bool branch_taken_0x2ff9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9fc) {
            ctx->pc = 0x2FFA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9FCu;
            // 0x2ffa00: 0xae400e10  sw          $zero, 0xE10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA1Cu;
            goto label_2ffa1c;
        }
    }
    ctx->pc = 0x2FFA04u;
label_2ffa04:
    // 0x2ffa04: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_2ffa08:
    // 0x2ffa08: 0xc64c0a80  lwc1        $f12, 0xA80($s2)
    ctx->pc = 0x2ffa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ffa0c:
    // 0x2ffa0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ffa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa10:
    // 0x2ffa10: 0xc11ebc4  jal         func_47AF10
label_2ffa14:
    if (ctx->pc == 0x2FFA14u) {
        ctx->pc = 0x2FFA14u;
            // 0x2ffa14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FFA18u;
        goto label_2ffa18;
    }
    ctx->pc = 0x2FFA10u;
    SET_GPR_U32(ctx, 31, 0x2FFA18u);
    ctx->pc = 0x2FFA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA10u;
            // 0x2ffa14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA18u; }
        if (ctx->pc != 0x2FFA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA18u; }
        if (ctx->pc != 0x2FFA18u) { return; }
    }
    ctx->pc = 0x2FFA18u;
label_2ffa18:
    // 0x2ffa18: 0xae400e10  sw          $zero, 0xE10($s2)
    ctx->pc = 0x2ffa18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 0));
label_2ffa1c:
    // 0x2ffa1c: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x2ffa1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2ffa20:
    // 0x2ffa20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffa24:
    // 0x2ffa24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ffa28:
    // 0x2ffa28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ffa28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ffa2c:
    // 0x2ffa2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ffa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ffa30:
    // 0x2ffa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa34:
    // 0x2ffa34: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ffa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ffa38:
    // 0x2ffa38: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ffa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffa3c:
    // 0x2ffa3c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ffa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ffa40:
    // 0x2ffa40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ffa44:
    // 0x2ffa44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ffa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ffa48:
    // 0x2ffa48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ffa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ffa4c:
    // 0x2ffa4c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ffa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ffa50:
    // 0x2ffa50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffa50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffa54:
    // 0x2ffa54: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ffa54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ffa58:
    // 0x2ffa58: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2ffa58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2ffa5c:
    // 0x2ffa5c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ffa5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ffa60:
    // 0x2ffa60: 0x320f809  jalr        $t9
label_2ffa64:
    if (ctx->pc == 0x2FFA64u) {
        ctx->pc = 0x2FFA64u;
            // 0x2ffa64: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FFA68u;
        goto label_2ffa68;
    }
    ctx->pc = 0x2FFA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFA68u);
        ctx->pc = 0x2FFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA60u;
            // 0x2ffa64: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA68u; }
            if (ctx->pc != 0x2FFA68u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFA68u;
label_2ffa68:
    // 0x2ffa68: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ffa68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ffa6c:
    // 0x2ffa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa70:
    // 0x2ffa70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ffa74:
    // 0x2ffa74: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ffa74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ffa78:
    // 0x2ffa78: 0x320f809  jalr        $t9
label_2ffa7c:
    if (ctx->pc == 0x2FFA7Cu) {
        ctx->pc = 0x2FFA7Cu;
            // 0x2ffa7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FFA80u;
        goto label_2ffa80;
    }
    ctx->pc = 0x2FFA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFA80u);
        ctx->pc = 0x2FFA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA78u;
            // 0x2ffa7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA80u; }
            if (ctx->pc != 0x2FFA80u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFA80u;
label_2ffa80:
    // 0x2ffa80: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ffa80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ffa84:
    // 0x2ffa84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ffa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa88:
    // 0x2ffa88: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2ffa88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2ffa8c:
    // 0x2ffa8c: 0x320f809  jalr        $t9
label_2ffa90:
    if (ctx->pc == 0x2FFA90u) {
        ctx->pc = 0x2FFA90u;
            // 0x2ffa90: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2FFA94u;
        goto label_2ffa94;
    }
    ctx->pc = 0x2FFA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFA94u);
        ctx->pc = 0x2FFA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA8Cu;
            // 0x2ffa90: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFA94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA94u; }
            if (ctx->pc != 0x2FFA94u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFA94u;
label_2ffa94:
    // 0x2ffa94: 0xc0c1590  jal         func_305640
label_2ffa98:
    if (ctx->pc == 0x2FFA98u) {
        ctx->pc = 0x2FFA98u;
            // 0x2ffa98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA9Cu;
        goto label_2ffa9c;
    }
    ctx->pc = 0x2FFA94u;
    SET_GPR_U32(ctx, 31, 0x2FFA9Cu);
    ctx->pc = 0x2FFA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA94u;
            // 0x2ffa98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA9Cu; }
        if (ctx->pc != 0x2FFA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA9Cu; }
        if (ctx->pc != 0x2FFA9Cu) { return; }
    }
    ctx->pc = 0x2FFA9Cu;
label_2ffa9c:
    // 0x2ffa9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ffa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ffaa0:
    // 0x2ffaa0: 0xc07649c  jal         func_1D9270
label_2ffaa4:
    if (ctx->pc == 0x2FFAA4u) {
        ctx->pc = 0x2FFAA4u;
            // 0x2ffaa4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2FFAA8u;
        goto label_2ffaa8;
    }
    ctx->pc = 0x2FFAA0u;
    SET_GPR_U32(ctx, 31, 0x2FFAA8u);
    ctx->pc = 0x2FFAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAA0u;
            // 0x2ffaa4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAA8u; }
        if (ctx->pc != 0x2FFAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAA8u; }
        if (ctx->pc != 0x2FFAA8u) { return; }
    }
    ctx->pc = 0x2FFAA8u;
label_2ffaa8:
    // 0x2ffaa8: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x2ffaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2ffaac:
    // 0x2ffaac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ffaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2ffab0:
    // 0x2ffab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffab4:
    // 0x2ffab4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ffab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ffab8:
    // 0x2ffab8: 0x320f809  jalr        $t9
label_2ffabc:
    if (ctx->pc == 0x2FFABCu) {
        ctx->pc = 0x2FFABCu;
            // 0x2ffabc: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2FFAC0u;
        goto label_2ffac0;
    }
    ctx->pc = 0x2FFAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFAC0u);
        ctx->pc = 0x2FFABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAB8u;
            // 0x2ffabc: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAC0u; }
            if (ctx->pc != 0x2FFAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFAC0u;
label_2ffac0:
    // 0x2ffac0: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x2ffac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2ffac4:
    // 0x2ffac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffac8:
    // 0x2ffac8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ffac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ffacc:
    // 0x2ffacc: 0x320f809  jalr        $t9
label_2ffad0:
    if (ctx->pc == 0x2FFAD0u) {
        ctx->pc = 0x2FFAD0u;
            // 0x2ffad0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FFAD4u;
        goto label_2ffad4;
    }
    ctx->pc = 0x2FFACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFAD4u);
        ctx->pc = 0x2FFAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFACCu;
            // 0x2ffad0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAD4u; }
            if (ctx->pc != 0x2FFAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFAD4u;
label_2ffad4:
    // 0x2ffad4: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x2ffad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_2ffad8:
    // 0x2ffad8: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x2ffad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_2ffadc:
    // 0x2ffadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffae0:
    // 0x2ffae0: 0xc0c6250  jal         func_318940
label_2ffae4:
    if (ctx->pc == 0x2FFAE4u) {
        ctx->pc = 0x2FFAE4u;
            // 0x2ffae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAE8u;
        goto label_2ffae8;
    }
    ctx->pc = 0x2FFAE0u;
    SET_GPR_U32(ctx, 31, 0x2FFAE8u);
    ctx->pc = 0x2FFAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAE0u;
            // 0x2ffae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAE8u; }
        if (ctx->pc != 0x2FFAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAE8u; }
        if (ctx->pc != 0x2FFAE8u) { return; }
    }
    ctx->pc = 0x2FFAE8u;
label_2ffae8:
    // 0x2ffae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ffae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ffaec:
    // 0x2ffaec: 0xc0767c8  jal         func_1D9F20
label_2ffaf0:
    if (ctx->pc == 0x2FFAF0u) {
        ctx->pc = 0x2FFAF0u;
            // 0x2ffaf0: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->pc = 0x2FFAF4u;
        goto label_2ffaf4;
    }
    ctx->pc = 0x2FFAECu;
    SET_GPR_U32(ctx, 31, 0x2FFAF4u);
    ctx->pc = 0x2FFAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAECu;
            // 0x2ffaf0: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAF4u; }
        if (ctx->pc != 0x2FFAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAF4u; }
        if (ctx->pc != 0x2FFAF4u) { return; }
    }
    ctx->pc = 0x2FFAF4u;
label_2ffaf4:
    // 0x2ffaf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffaf8:
    // 0x2ffaf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ffaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ffafc:
    // 0x2ffafc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ffafcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ffb00:
    // 0x2ffb00: 0xc04cbd8  jal         func_132F60
label_2ffb04:
    if (ctx->pc == 0x2FFB04u) {
        ctx->pc = 0x2FFB04u;
            // 0x2ffb04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FFB08u;
        goto label_2ffb08;
    }
    ctx->pc = 0x2FFB00u;
    SET_GPR_U32(ctx, 31, 0x2FFB08u);
    ctx->pc = 0x2FFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB00u;
            // 0x2ffb04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB08u; }
        if (ctx->pc != 0x2FFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB08u; }
        if (ctx->pc != 0x2FFB08u) { return; }
    }
    ctx->pc = 0x2FFB08u;
label_2ffb08:
    // 0x2ffb08: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x2ffb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_2ffb0c:
    // 0x2ffb0c: 0x264507e0  addiu       $a1, $s2, 0x7E0
    ctx->pc = 0x2ffb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
label_2ffb10:
    // 0x2ffb10: 0xc04cca0  jal         func_133280
label_2ffb14:
    if (ctx->pc == 0x2FFB14u) {
        ctx->pc = 0x2FFB14u;
            // 0x2ffb14: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FFB18u;
        goto label_2ffb18;
    }
    ctx->pc = 0x2FFB10u;
    SET_GPR_U32(ctx, 31, 0x2FFB18u);
    ctx->pc = 0x2FFB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB10u;
            // 0x2ffb14: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB18u; }
        if (ctx->pc != 0x2FFB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB18u; }
        if (ctx->pc != 0x2FFB18u) { return; }
    }
    ctx->pc = 0x2FFB18u;
label_2ffb18:
    // 0x2ffb18: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ffb1c:
    if (ctx->pc == 0x2FFB1Cu) {
        ctx->pc = 0x2FFB20u;
        goto label_2ffb20;
    }
    ctx->pc = 0x2FFB18u;
    {
        const bool branch_taken_0x2ffb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb18) {
            ctx->pc = 0x2FFB28u;
            goto label_2ffb28;
        }
    }
    ctx->pc = 0x2FFB20u;
label_2ffb20:
    // 0x2ffb20: 0xc0c144c  jal         func_305130
label_2ffb24:
    if (ctx->pc == 0x2FFB24u) {
        ctx->pc = 0x2FFB28u;
        goto label_2ffb28;
    }
    ctx->pc = 0x2FFB20u;
    SET_GPR_U32(ctx, 31, 0x2FFB28u);
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB28u; }
        if (ctx->pc != 0x2FFB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB28u; }
        if (ctx->pc != 0x2FFB28u) { return; }
    }
    ctx->pc = 0x2FFB28u;
label_2ffb28:
    // 0x2ffb28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ffb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ffb2c:
    // 0x2ffb2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ffb2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ffb30:
    // 0x2ffb30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ffb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ffb34:
    // 0x2ffb34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ffb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ffb38:
    // 0x2ffb38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffb3c:
    // 0x2ffb3c: 0x3e00008  jr          $ra
label_2ffb40:
    if (ctx->pc == 0x2FFB40u) {
        ctx->pc = 0x2FFB40u;
            // 0x2ffb40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FFB44u;
        goto label_2ffb44;
    }
    ctx->pc = 0x2FFB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB3Cu;
            // 0x2ffb40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FFB44u;
label_2ffb44:
    // 0x2ffb44: 0x0  nop
    ctx->pc = 0x2ffb44u;
    // NOP
label_2ffb48:
    // 0x2ffb48: 0x0  nop
    ctx->pc = 0x2ffb48u;
    // NOP
label_2ffb4c:
    // 0x2ffb4c: 0x0  nop
    ctx->pc = 0x2ffb4cu;
    // NOP
}
