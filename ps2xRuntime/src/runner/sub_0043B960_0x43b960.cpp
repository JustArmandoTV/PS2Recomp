#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043B960
// Address: 0x43b960 - 0x43bbc0
void sub_0043B960_0x43b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B960_0x43b960");
#endif

    switch (ctx->pc) {
        case 0x43b960u: goto label_43b960;
        case 0x43b964u: goto label_43b964;
        case 0x43b968u: goto label_43b968;
        case 0x43b96cu: goto label_43b96c;
        case 0x43b970u: goto label_43b970;
        case 0x43b974u: goto label_43b974;
        case 0x43b978u: goto label_43b978;
        case 0x43b97cu: goto label_43b97c;
        case 0x43b980u: goto label_43b980;
        case 0x43b984u: goto label_43b984;
        case 0x43b988u: goto label_43b988;
        case 0x43b98cu: goto label_43b98c;
        case 0x43b990u: goto label_43b990;
        case 0x43b994u: goto label_43b994;
        case 0x43b998u: goto label_43b998;
        case 0x43b99cu: goto label_43b99c;
        case 0x43b9a0u: goto label_43b9a0;
        case 0x43b9a4u: goto label_43b9a4;
        case 0x43b9a8u: goto label_43b9a8;
        case 0x43b9acu: goto label_43b9ac;
        case 0x43b9b0u: goto label_43b9b0;
        case 0x43b9b4u: goto label_43b9b4;
        case 0x43b9b8u: goto label_43b9b8;
        case 0x43b9bcu: goto label_43b9bc;
        case 0x43b9c0u: goto label_43b9c0;
        case 0x43b9c4u: goto label_43b9c4;
        case 0x43b9c8u: goto label_43b9c8;
        case 0x43b9ccu: goto label_43b9cc;
        case 0x43b9d0u: goto label_43b9d0;
        case 0x43b9d4u: goto label_43b9d4;
        case 0x43b9d8u: goto label_43b9d8;
        case 0x43b9dcu: goto label_43b9dc;
        case 0x43b9e0u: goto label_43b9e0;
        case 0x43b9e4u: goto label_43b9e4;
        case 0x43b9e8u: goto label_43b9e8;
        case 0x43b9ecu: goto label_43b9ec;
        case 0x43b9f0u: goto label_43b9f0;
        case 0x43b9f4u: goto label_43b9f4;
        case 0x43b9f8u: goto label_43b9f8;
        case 0x43b9fcu: goto label_43b9fc;
        case 0x43ba00u: goto label_43ba00;
        case 0x43ba04u: goto label_43ba04;
        case 0x43ba08u: goto label_43ba08;
        case 0x43ba0cu: goto label_43ba0c;
        case 0x43ba10u: goto label_43ba10;
        case 0x43ba14u: goto label_43ba14;
        case 0x43ba18u: goto label_43ba18;
        case 0x43ba1cu: goto label_43ba1c;
        case 0x43ba20u: goto label_43ba20;
        case 0x43ba24u: goto label_43ba24;
        case 0x43ba28u: goto label_43ba28;
        case 0x43ba2cu: goto label_43ba2c;
        case 0x43ba30u: goto label_43ba30;
        case 0x43ba34u: goto label_43ba34;
        case 0x43ba38u: goto label_43ba38;
        case 0x43ba3cu: goto label_43ba3c;
        case 0x43ba40u: goto label_43ba40;
        case 0x43ba44u: goto label_43ba44;
        case 0x43ba48u: goto label_43ba48;
        case 0x43ba4cu: goto label_43ba4c;
        case 0x43ba50u: goto label_43ba50;
        case 0x43ba54u: goto label_43ba54;
        case 0x43ba58u: goto label_43ba58;
        case 0x43ba5cu: goto label_43ba5c;
        case 0x43ba60u: goto label_43ba60;
        case 0x43ba64u: goto label_43ba64;
        case 0x43ba68u: goto label_43ba68;
        case 0x43ba6cu: goto label_43ba6c;
        case 0x43ba70u: goto label_43ba70;
        case 0x43ba74u: goto label_43ba74;
        case 0x43ba78u: goto label_43ba78;
        case 0x43ba7cu: goto label_43ba7c;
        case 0x43ba80u: goto label_43ba80;
        case 0x43ba84u: goto label_43ba84;
        case 0x43ba88u: goto label_43ba88;
        case 0x43ba8cu: goto label_43ba8c;
        case 0x43ba90u: goto label_43ba90;
        case 0x43ba94u: goto label_43ba94;
        case 0x43ba98u: goto label_43ba98;
        case 0x43ba9cu: goto label_43ba9c;
        case 0x43baa0u: goto label_43baa0;
        case 0x43baa4u: goto label_43baa4;
        case 0x43baa8u: goto label_43baa8;
        case 0x43baacu: goto label_43baac;
        case 0x43bab0u: goto label_43bab0;
        case 0x43bab4u: goto label_43bab4;
        case 0x43bab8u: goto label_43bab8;
        case 0x43babcu: goto label_43babc;
        case 0x43bac0u: goto label_43bac0;
        case 0x43bac4u: goto label_43bac4;
        case 0x43bac8u: goto label_43bac8;
        case 0x43baccu: goto label_43bacc;
        case 0x43bad0u: goto label_43bad0;
        case 0x43bad4u: goto label_43bad4;
        case 0x43bad8u: goto label_43bad8;
        case 0x43badcu: goto label_43badc;
        case 0x43bae0u: goto label_43bae0;
        case 0x43bae4u: goto label_43bae4;
        case 0x43bae8u: goto label_43bae8;
        case 0x43baecu: goto label_43baec;
        case 0x43baf0u: goto label_43baf0;
        case 0x43baf4u: goto label_43baf4;
        case 0x43baf8u: goto label_43baf8;
        case 0x43bafcu: goto label_43bafc;
        case 0x43bb00u: goto label_43bb00;
        case 0x43bb04u: goto label_43bb04;
        case 0x43bb08u: goto label_43bb08;
        case 0x43bb0cu: goto label_43bb0c;
        case 0x43bb10u: goto label_43bb10;
        case 0x43bb14u: goto label_43bb14;
        case 0x43bb18u: goto label_43bb18;
        case 0x43bb1cu: goto label_43bb1c;
        case 0x43bb20u: goto label_43bb20;
        case 0x43bb24u: goto label_43bb24;
        case 0x43bb28u: goto label_43bb28;
        case 0x43bb2cu: goto label_43bb2c;
        case 0x43bb30u: goto label_43bb30;
        case 0x43bb34u: goto label_43bb34;
        case 0x43bb38u: goto label_43bb38;
        case 0x43bb3cu: goto label_43bb3c;
        case 0x43bb40u: goto label_43bb40;
        case 0x43bb44u: goto label_43bb44;
        case 0x43bb48u: goto label_43bb48;
        case 0x43bb4cu: goto label_43bb4c;
        case 0x43bb50u: goto label_43bb50;
        case 0x43bb54u: goto label_43bb54;
        case 0x43bb58u: goto label_43bb58;
        case 0x43bb5cu: goto label_43bb5c;
        case 0x43bb60u: goto label_43bb60;
        case 0x43bb64u: goto label_43bb64;
        case 0x43bb68u: goto label_43bb68;
        case 0x43bb6cu: goto label_43bb6c;
        case 0x43bb70u: goto label_43bb70;
        case 0x43bb74u: goto label_43bb74;
        case 0x43bb78u: goto label_43bb78;
        case 0x43bb7cu: goto label_43bb7c;
        case 0x43bb80u: goto label_43bb80;
        case 0x43bb84u: goto label_43bb84;
        case 0x43bb88u: goto label_43bb88;
        case 0x43bb8cu: goto label_43bb8c;
        case 0x43bb90u: goto label_43bb90;
        case 0x43bb94u: goto label_43bb94;
        case 0x43bb98u: goto label_43bb98;
        case 0x43bb9cu: goto label_43bb9c;
        case 0x43bba0u: goto label_43bba0;
        case 0x43bba4u: goto label_43bba4;
        case 0x43bba8u: goto label_43bba8;
        case 0x43bbacu: goto label_43bbac;
        case 0x43bbb0u: goto label_43bbb0;
        case 0x43bbb4u: goto label_43bbb4;
        case 0x43bbb8u: goto label_43bbb8;
        case 0x43bbbcu: goto label_43bbbc;
        default: break;
    }

    ctx->pc = 0x43b960u;

label_43b960:
    // 0x43b960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43b964:
    // 0x43b964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43b968:
    // 0x43b968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43b96c:
    // 0x43b96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b970:
    // 0x43b970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43b970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43b974:
    // 0x43b974: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_43b978:
    if (ctx->pc == 0x43B978u) {
        ctx->pc = 0x43B978u;
            // 0x43b978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B97Cu;
        goto label_43b97c;
    }
    ctx->pc = 0x43B974u;
    {
        const bool branch_taken_0x43b974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B974u;
            // 0x43b978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b974) {
            ctx->pc = 0x43BAA8u;
            goto label_43baa8;
        }
    }
    ctx->pc = 0x43B97Cu;
label_43b97c:
    // 0x43b97c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43b980:
    // 0x43b980: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43b984:
    // 0x43b984: 0x2463d010  addiu       $v1, $v1, -0x2FF0
    ctx->pc = 0x43b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955024));
label_43b988:
    // 0x43b988: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43b988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_43b98c:
    // 0x43b98c: 0x2442d048  addiu       $v0, $v0, -0x2FB8
    ctx->pc = 0x43b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955080));
label_43b990:
    // 0x43b990: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43b990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43b994:
    // 0x43b994: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x43b994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_43b998:
    // 0x43b998: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x43b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_43b99c:
    // 0x43b99c: 0xc0407c0  jal         func_101F00
label_43b9a0:
    if (ctx->pc == 0x43B9A0u) {
        ctx->pc = 0x43B9A0u;
            // 0x43b9a0: 0x24a5bac0  addiu       $a1, $a1, -0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949568));
        ctx->pc = 0x43B9A4u;
        goto label_43b9a4;
    }
    ctx->pc = 0x43B99Cu;
    SET_GPR_U32(ctx, 31, 0x43B9A4u);
    ctx->pc = 0x43B9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B99Cu;
            // 0x43b9a0: 0x24a5bac0  addiu       $a1, $a1, -0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B9A4u; }
        if (ctx->pc != 0x43B9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B9A4u; }
        if (ctx->pc != 0x43B9A4u) { return; }
    }
    ctx->pc = 0x43B9A4u;
label_43b9a4:
    // 0x43b9a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x43b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_43b9a8:
    // 0x43b9a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_43b9ac:
    if (ctx->pc == 0x43B9ACu) {
        ctx->pc = 0x43B9ACu;
            // 0x43b9ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x43B9B0u;
        goto label_43b9b0;
    }
    ctx->pc = 0x43B9A8u;
    {
        const bool branch_taken_0x43b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9a8) {
            ctx->pc = 0x43B9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B9A8u;
            // 0x43b9ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B9BCu;
            goto label_43b9bc;
        }
    }
    ctx->pc = 0x43B9B0u;
label_43b9b0:
    // 0x43b9b0: 0xc07507c  jal         func_1D41F0
label_43b9b4:
    if (ctx->pc == 0x43B9B4u) {
        ctx->pc = 0x43B9B4u;
            // 0x43b9b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x43B9B8u;
        goto label_43b9b8;
    }
    ctx->pc = 0x43B9B0u;
    SET_GPR_U32(ctx, 31, 0x43B9B8u);
    ctx->pc = 0x43B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B9B0u;
            // 0x43b9b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B9B8u; }
        if (ctx->pc != 0x43B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B9B8u; }
        if (ctx->pc != 0x43B9B8u) { return; }
    }
    ctx->pc = 0x43B9B8u;
label_43b9b8:
    // 0x43b9b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x43b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_43b9bc:
    // 0x43b9bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_43b9c0:
    if (ctx->pc == 0x43B9C0u) {
        ctx->pc = 0x43B9C0u;
            // 0x43b9c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x43B9C4u;
        goto label_43b9c4;
    }
    ctx->pc = 0x43B9BCu;
    {
        const bool branch_taken_0x43b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9bc) {
            ctx->pc = 0x43B9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B9BCu;
            // 0x43b9c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B9ECu;
            goto label_43b9ec;
        }
    }
    ctx->pc = 0x43B9C4u;
label_43b9c4:
    // 0x43b9c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_43b9c8:
    if (ctx->pc == 0x43B9C8u) {
        ctx->pc = 0x43B9CCu;
        goto label_43b9cc;
    }
    ctx->pc = 0x43B9C4u;
    {
        const bool branch_taken_0x43b9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9c4) {
            ctx->pc = 0x43B9E8u;
            goto label_43b9e8;
        }
    }
    ctx->pc = 0x43B9CCu;
label_43b9cc:
    // 0x43b9cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43b9d0:
    if (ctx->pc == 0x43B9D0u) {
        ctx->pc = 0x43B9D4u;
        goto label_43b9d4;
    }
    ctx->pc = 0x43B9CCu;
    {
        const bool branch_taken_0x43b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9cc) {
            ctx->pc = 0x43B9E8u;
            goto label_43b9e8;
        }
    }
    ctx->pc = 0x43B9D4u;
label_43b9d4:
    // 0x43b9d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x43b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_43b9d8:
    // 0x43b9d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43b9dc:
    if (ctx->pc == 0x43B9DCu) {
        ctx->pc = 0x43B9E0u;
        goto label_43b9e0;
    }
    ctx->pc = 0x43B9D8u;
    {
        const bool branch_taken_0x43b9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9d8) {
            ctx->pc = 0x43B9E8u;
            goto label_43b9e8;
        }
    }
    ctx->pc = 0x43B9E0u;
label_43b9e0:
    // 0x43b9e0: 0xc0400a8  jal         func_1002A0
label_43b9e4:
    if (ctx->pc == 0x43B9E4u) {
        ctx->pc = 0x43B9E8u;
        goto label_43b9e8;
    }
    ctx->pc = 0x43B9E0u;
    SET_GPR_U32(ctx, 31, 0x43B9E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B9E8u; }
        if (ctx->pc != 0x43B9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B9E8u; }
        if (ctx->pc != 0x43B9E8u) { return; }
    }
    ctx->pc = 0x43B9E8u;
label_43b9e8:
    // 0x43b9e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x43b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_43b9ec:
    // 0x43b9ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_43b9f0:
    if (ctx->pc == 0x43B9F0u) {
        ctx->pc = 0x43B9F0u;
            // 0x43b9f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x43B9F4u;
        goto label_43b9f4;
    }
    ctx->pc = 0x43B9ECu;
    {
        const bool branch_taken_0x43b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9ec) {
            ctx->pc = 0x43B9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B9ECu;
            // 0x43b9f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BA1Cu;
            goto label_43ba1c;
        }
    }
    ctx->pc = 0x43B9F4u;
label_43b9f4:
    // 0x43b9f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_43b9f8:
    if (ctx->pc == 0x43B9F8u) {
        ctx->pc = 0x43B9FCu;
        goto label_43b9fc;
    }
    ctx->pc = 0x43B9F4u;
    {
        const bool branch_taken_0x43b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9f4) {
            ctx->pc = 0x43BA18u;
            goto label_43ba18;
        }
    }
    ctx->pc = 0x43B9FCu;
label_43b9fc:
    // 0x43b9fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43ba00:
    if (ctx->pc == 0x43BA00u) {
        ctx->pc = 0x43BA04u;
        goto label_43ba04;
    }
    ctx->pc = 0x43B9FCu;
    {
        const bool branch_taken_0x43b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b9fc) {
            ctx->pc = 0x43BA18u;
            goto label_43ba18;
        }
    }
    ctx->pc = 0x43BA04u;
label_43ba04:
    // 0x43ba04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x43ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_43ba08:
    // 0x43ba08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43ba0c:
    if (ctx->pc == 0x43BA0Cu) {
        ctx->pc = 0x43BA10u;
        goto label_43ba10;
    }
    ctx->pc = 0x43BA08u;
    {
        const bool branch_taken_0x43ba08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ba08) {
            ctx->pc = 0x43BA18u;
            goto label_43ba18;
        }
    }
    ctx->pc = 0x43BA10u;
label_43ba10:
    // 0x43ba10: 0xc0400a8  jal         func_1002A0
label_43ba14:
    if (ctx->pc == 0x43BA14u) {
        ctx->pc = 0x43BA18u;
        goto label_43ba18;
    }
    ctx->pc = 0x43BA10u;
    SET_GPR_U32(ctx, 31, 0x43BA18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BA18u; }
        if (ctx->pc != 0x43BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BA18u; }
        if (ctx->pc != 0x43BA18u) { return; }
    }
    ctx->pc = 0x43BA18u;
label_43ba18:
    // 0x43ba18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x43ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_43ba1c:
    // 0x43ba1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43ba20:
    if (ctx->pc == 0x43BA20u) {
        ctx->pc = 0x43BA24u;
        goto label_43ba24;
    }
    ctx->pc = 0x43BA1Cu;
    {
        const bool branch_taken_0x43ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ba1c) {
            ctx->pc = 0x43BA38u;
            goto label_43ba38;
        }
    }
    ctx->pc = 0x43BA24u;
label_43ba24:
    // 0x43ba24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43ba28:
    // 0x43ba28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43ba2c:
    // 0x43ba2c: 0x2463cff8  addiu       $v1, $v1, -0x3008
    ctx->pc = 0x43ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955000));
label_43ba30:
    // 0x43ba30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x43ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_43ba34:
    // 0x43ba34: 0xac400d08  sw          $zero, 0xD08($v0)
    ctx->pc = 0x43ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3336), GPR_U32(ctx, 0));
label_43ba38:
    // 0x43ba38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_43ba3c:
    if (ctx->pc == 0x43BA3Cu) {
        ctx->pc = 0x43BA3Cu;
            // 0x43ba3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x43BA40u;
        goto label_43ba40;
    }
    ctx->pc = 0x43BA38u;
    {
        const bool branch_taken_0x43ba38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ba38) {
            ctx->pc = 0x43BA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA38u;
            // 0x43ba3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BA94u;
            goto label_43ba94;
        }
    }
    ctx->pc = 0x43BA40u;
label_43ba40:
    // 0x43ba40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43ba44:
    // 0x43ba44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x43ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_43ba48:
    // 0x43ba48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x43ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43ba4c:
    // 0x43ba4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x43ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_43ba50:
    // 0x43ba50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43ba54:
    if (ctx->pc == 0x43BA54u) {
        ctx->pc = 0x43BA54u;
            // 0x43ba54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x43BA58u;
        goto label_43ba58;
    }
    ctx->pc = 0x43BA50u;
    {
        const bool branch_taken_0x43ba50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ba50) {
            ctx->pc = 0x43BA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA50u;
            // 0x43ba54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BA6Cu;
            goto label_43ba6c;
        }
    }
    ctx->pc = 0x43BA58u;
label_43ba58:
    // 0x43ba58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43ba58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43ba5c:
    // 0x43ba5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43ba5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43ba60:
    // 0x43ba60: 0x320f809  jalr        $t9
label_43ba64:
    if (ctx->pc == 0x43BA64u) {
        ctx->pc = 0x43BA64u;
            // 0x43ba64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43BA68u;
        goto label_43ba68;
    }
    ctx->pc = 0x43BA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BA68u);
        ctx->pc = 0x43BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA60u;
            // 0x43ba64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BA68u; }
            if (ctx->pc != 0x43BA68u) { return; }
        }
        }
    }
    ctx->pc = 0x43BA68u;
label_43ba68:
    // 0x43ba68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x43ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_43ba6c:
    // 0x43ba6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43ba70:
    if (ctx->pc == 0x43BA70u) {
        ctx->pc = 0x43BA70u;
            // 0x43ba70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BA74u;
        goto label_43ba74;
    }
    ctx->pc = 0x43BA6Cu;
    {
        const bool branch_taken_0x43ba6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ba6c) {
            ctx->pc = 0x43BA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA6Cu;
            // 0x43ba70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BA88u;
            goto label_43ba88;
        }
    }
    ctx->pc = 0x43BA74u;
label_43ba74:
    // 0x43ba74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43ba74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43ba78:
    // 0x43ba78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43ba78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43ba7c:
    // 0x43ba7c: 0x320f809  jalr        $t9
label_43ba80:
    if (ctx->pc == 0x43BA80u) {
        ctx->pc = 0x43BA80u;
            // 0x43ba80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43BA84u;
        goto label_43ba84;
    }
    ctx->pc = 0x43BA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BA84u);
        ctx->pc = 0x43BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA7Cu;
            // 0x43ba80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BA84u; }
            if (ctx->pc != 0x43BA84u) { return; }
        }
        }
    }
    ctx->pc = 0x43BA84u;
label_43ba84:
    // 0x43ba84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ba88:
    // 0x43ba88: 0xc075bf8  jal         func_1D6FE0
label_43ba8c:
    if (ctx->pc == 0x43BA8Cu) {
        ctx->pc = 0x43BA8Cu;
            // 0x43ba8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BA90u;
        goto label_43ba90;
    }
    ctx->pc = 0x43BA88u;
    SET_GPR_U32(ctx, 31, 0x43BA90u);
    ctx->pc = 0x43BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA88u;
            // 0x43ba8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BA90u; }
        if (ctx->pc != 0x43BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BA90u; }
        if (ctx->pc != 0x43BA90u) { return; }
    }
    ctx->pc = 0x43BA90u;
label_43ba90:
    // 0x43ba90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x43ba90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_43ba94:
    // 0x43ba94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43ba94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43ba98:
    // 0x43ba98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43ba9c:
    if (ctx->pc == 0x43BA9Cu) {
        ctx->pc = 0x43BA9Cu;
            // 0x43ba9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BAA0u;
        goto label_43baa0;
    }
    ctx->pc = 0x43BA98u;
    {
        const bool branch_taken_0x43ba98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43ba98) {
            ctx->pc = 0x43BA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BA98u;
            // 0x43ba9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BAACu;
            goto label_43baac;
        }
    }
    ctx->pc = 0x43BAA0u;
label_43baa0:
    // 0x43baa0: 0xc0400a8  jal         func_1002A0
label_43baa4:
    if (ctx->pc == 0x43BAA4u) {
        ctx->pc = 0x43BAA4u;
            // 0x43baa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BAA8u;
        goto label_43baa8;
    }
    ctx->pc = 0x43BAA0u;
    SET_GPR_U32(ctx, 31, 0x43BAA8u);
    ctx->pc = 0x43BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BAA0u;
            // 0x43baa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BAA8u; }
        if (ctx->pc != 0x43BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BAA8u; }
        if (ctx->pc != 0x43BAA8u) { return; }
    }
    ctx->pc = 0x43BAA8u;
label_43baa8:
    // 0x43baa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43baa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43baac:
    // 0x43baac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43bab0:
    // 0x43bab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43bab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43bab4:
    // 0x43bab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43bab8:
    // 0x43bab8: 0x3e00008  jr          $ra
label_43babc:
    if (ctx->pc == 0x43BABCu) {
        ctx->pc = 0x43BABCu;
            // 0x43babc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43BAC0u;
        goto label_43bac0;
    }
    ctx->pc = 0x43BAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BAB8u;
            // 0x43babc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43BAC0u;
label_43bac0:
    // 0x43bac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43bac4:
    // 0x43bac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43bac8:
    // 0x43bac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43bacc:
    // 0x43bacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43bad0:
    // 0x43bad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43bad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43bad4:
    // 0x43bad4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_43bad8:
    if (ctx->pc == 0x43BAD8u) {
        ctx->pc = 0x43BAD8u;
            // 0x43bad8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BADCu;
        goto label_43badc;
    }
    ctx->pc = 0x43BAD4u;
    {
        const bool branch_taken_0x43bad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BAD4u;
            // 0x43bad8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bad4) {
            ctx->pc = 0x43BB9Cu;
            goto label_43bb9c;
        }
    }
    ctx->pc = 0x43BADCu;
label_43badc:
    // 0x43badc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43badcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43bae0:
    // 0x43bae0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43bae4:
    // 0x43bae4: 0x2463d0b0  addiu       $v1, $v1, -0x2F50
    ctx->pc = 0x43bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955184));
label_43bae8:
    // 0x43bae8: 0x2442d0f0  addiu       $v0, $v0, -0x2F10
    ctx->pc = 0x43bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955248));
label_43baec:
    // 0x43baec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43baecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43baf0:
    // 0x43baf0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43baf4:
    // 0x43baf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43baf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43baf8:
    // 0x43baf8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x43baf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_43bafc:
    // 0x43bafc: 0x320f809  jalr        $t9
label_43bb00:
    if (ctx->pc == 0x43BB00u) {
        ctx->pc = 0x43BB04u;
        goto label_43bb04;
    }
    ctx->pc = 0x43BAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BB04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BB04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BB04u; }
            if (ctx->pc != 0x43BB04u) { return; }
        }
        }
    }
    ctx->pc = 0x43BB04u;
label_43bb04:
    // 0x43bb04: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_43bb08:
    if (ctx->pc == 0x43BB08u) {
        ctx->pc = 0x43BB08u;
            // 0x43bb08: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x43BB0Cu;
        goto label_43bb0c;
    }
    ctx->pc = 0x43BB04u;
    {
        const bool branch_taken_0x43bb04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bb04) {
            ctx->pc = 0x43BB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB04u;
            // 0x43bb08: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BB88u;
            goto label_43bb88;
        }
    }
    ctx->pc = 0x43BB0Cu;
label_43bb0c:
    // 0x43bb0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43bb10:
    // 0x43bb10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43bb14:
    // 0x43bb14: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x43bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_43bb18:
    // 0x43bb18: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x43bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_43bb1c:
    // 0x43bb1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43bb20:
    // 0x43bb20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43bb24:
    // 0x43bb24: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x43bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_43bb28:
    // 0x43bb28: 0xc0aecc4  jal         func_2BB310
label_43bb2c:
    if (ctx->pc == 0x43BB2Cu) {
        ctx->pc = 0x43BB2Cu;
            // 0x43bb2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43BB30u;
        goto label_43bb30;
    }
    ctx->pc = 0x43BB28u;
    SET_GPR_U32(ctx, 31, 0x43BB30u);
    ctx->pc = 0x43BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB28u;
            // 0x43bb2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB30u; }
        if (ctx->pc != 0x43BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB30u; }
        if (ctx->pc != 0x43BB30u) { return; }
    }
    ctx->pc = 0x43BB30u;
label_43bb30:
    // 0x43bb30: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x43bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_43bb34:
    // 0x43bb34: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x43bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43bb38:
    // 0x43bb38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43bb3c:
    if (ctx->pc == 0x43BB3Cu) {
        ctx->pc = 0x43BB3Cu;
            // 0x43bb3c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x43BB40u;
        goto label_43bb40;
    }
    ctx->pc = 0x43BB38u;
    {
        const bool branch_taken_0x43bb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bb38) {
            ctx->pc = 0x43BB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB38u;
            // 0x43bb3c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BB54u;
            goto label_43bb54;
        }
    }
    ctx->pc = 0x43BB40u;
label_43bb40:
    // 0x43bb40: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x43bb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_43bb44:
    // 0x43bb44: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43bb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43bb48:
    // 0x43bb48: 0x320f809  jalr        $t9
label_43bb4c:
    if (ctx->pc == 0x43BB4Cu) {
        ctx->pc = 0x43BB4Cu;
            // 0x43bb4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43BB50u;
        goto label_43bb50;
    }
    ctx->pc = 0x43BB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BB50u);
        ctx->pc = 0x43BB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB48u;
            // 0x43bb4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BB50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BB50u; }
            if (ctx->pc != 0x43BB50u) { return; }
        }
        }
    }
    ctx->pc = 0x43BB50u;
label_43bb50:
    // 0x43bb50: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x43bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_43bb54:
    // 0x43bb54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x43bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43bb58:
    // 0x43bb58: 0xc0aec9c  jal         func_2BB270
label_43bb5c:
    if (ctx->pc == 0x43BB5Cu) {
        ctx->pc = 0x43BB5Cu;
            // 0x43bb5c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x43BB60u;
        goto label_43bb60;
    }
    ctx->pc = 0x43BB58u;
    SET_GPR_U32(ctx, 31, 0x43BB60u);
    ctx->pc = 0x43BB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB58u;
            // 0x43bb5c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB60u; }
        if (ctx->pc != 0x43BB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB60u; }
        if (ctx->pc != 0x43BB60u) { return; }
    }
    ctx->pc = 0x43BB60u;
label_43bb60:
    // 0x43bb60: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x43bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_43bb64:
    // 0x43bb64: 0xc0aec88  jal         func_2BB220
label_43bb68:
    if (ctx->pc == 0x43BB68u) {
        ctx->pc = 0x43BB68u;
            // 0x43bb68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x43BB6Cu;
        goto label_43bb6c;
    }
    ctx->pc = 0x43BB64u;
    SET_GPR_U32(ctx, 31, 0x43BB6Cu);
    ctx->pc = 0x43BB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB64u;
            // 0x43bb68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB6Cu; }
        if (ctx->pc != 0x43BB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB6Cu; }
        if (ctx->pc != 0x43BB6Cu) { return; }
    }
    ctx->pc = 0x43BB6Cu;
label_43bb6c:
    // 0x43bb6c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x43bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_43bb70:
    // 0x43bb70: 0xc0aec0c  jal         func_2BB030
label_43bb74:
    if (ctx->pc == 0x43BB74u) {
        ctx->pc = 0x43BB74u;
            // 0x43bb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BB78u;
        goto label_43bb78;
    }
    ctx->pc = 0x43BB70u;
    SET_GPR_U32(ctx, 31, 0x43BB78u);
    ctx->pc = 0x43BB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB70u;
            // 0x43bb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB78u; }
        if (ctx->pc != 0x43BB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB78u; }
        if (ctx->pc != 0x43BB78u) { return; }
    }
    ctx->pc = 0x43BB78u;
label_43bb78:
    // 0x43bb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43bb7c:
    // 0x43bb7c: 0xc0aeaa8  jal         func_2BAAA0
label_43bb80:
    if (ctx->pc == 0x43BB80u) {
        ctx->pc = 0x43BB80u;
            // 0x43bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BB84u;
        goto label_43bb84;
    }
    ctx->pc = 0x43BB7Cu;
    SET_GPR_U32(ctx, 31, 0x43BB84u);
    ctx->pc = 0x43BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB7Cu;
            // 0x43bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB84u; }
        if (ctx->pc != 0x43BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB84u; }
        if (ctx->pc != 0x43BB84u) { return; }
    }
    ctx->pc = 0x43BB84u;
label_43bb84:
    // 0x43bb84: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_43bb88:
    // 0x43bb88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43bb88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43bb8c:
    // 0x43bb8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43bb90:
    if (ctx->pc == 0x43BB90u) {
        ctx->pc = 0x43BB90u;
            // 0x43bb90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BB94u;
        goto label_43bb94;
    }
    ctx->pc = 0x43BB8Cu;
    {
        const bool branch_taken_0x43bb8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43bb8c) {
            ctx->pc = 0x43BB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB8Cu;
            // 0x43bb90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BBA0u;
            goto label_43bba0;
        }
    }
    ctx->pc = 0x43BB94u;
label_43bb94:
    // 0x43bb94: 0xc0400a8  jal         func_1002A0
label_43bb98:
    if (ctx->pc == 0x43BB98u) {
        ctx->pc = 0x43BB98u;
            // 0x43bb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BB9Cu;
        goto label_43bb9c;
    }
    ctx->pc = 0x43BB94u;
    SET_GPR_U32(ctx, 31, 0x43BB9Cu);
    ctx->pc = 0x43BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BB94u;
            // 0x43bb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB9Cu; }
        if (ctx->pc != 0x43BB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BB9Cu; }
        if (ctx->pc != 0x43BB9Cu) { return; }
    }
    ctx->pc = 0x43BB9Cu;
label_43bb9c:
    // 0x43bb9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43bb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43bba0:
    // 0x43bba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43bba4:
    // 0x43bba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43bba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43bba8:
    // 0x43bba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43bbac:
    // 0x43bbac: 0x3e00008  jr          $ra
label_43bbb0:
    if (ctx->pc == 0x43BBB0u) {
        ctx->pc = 0x43BBB0u;
            // 0x43bbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43BBB4u;
        goto label_43bbb4;
    }
    ctx->pc = 0x43BBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BBACu;
            // 0x43bbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43BBB4u;
label_43bbb4:
    // 0x43bbb4: 0x0  nop
    ctx->pc = 0x43bbb4u;
    // NOP
label_43bbb8:
    // 0x43bbb8: 0x0  nop
    ctx->pc = 0x43bbb8u;
    // NOP
label_43bbbc:
    // 0x43bbbc: 0x0  nop
    ctx->pc = 0x43bbbcu;
    // NOP
}
