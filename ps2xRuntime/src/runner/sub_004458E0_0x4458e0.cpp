#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004458E0
// Address: 0x4458e0 - 0x445c50
void sub_004458E0_0x4458e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004458E0_0x4458e0");
#endif

    switch (ctx->pc) {
        case 0x4458e0u: goto label_4458e0;
        case 0x4458e4u: goto label_4458e4;
        case 0x4458e8u: goto label_4458e8;
        case 0x4458ecu: goto label_4458ec;
        case 0x4458f0u: goto label_4458f0;
        case 0x4458f4u: goto label_4458f4;
        case 0x4458f8u: goto label_4458f8;
        case 0x4458fcu: goto label_4458fc;
        case 0x445900u: goto label_445900;
        case 0x445904u: goto label_445904;
        case 0x445908u: goto label_445908;
        case 0x44590cu: goto label_44590c;
        case 0x445910u: goto label_445910;
        case 0x445914u: goto label_445914;
        case 0x445918u: goto label_445918;
        case 0x44591cu: goto label_44591c;
        case 0x445920u: goto label_445920;
        case 0x445924u: goto label_445924;
        case 0x445928u: goto label_445928;
        case 0x44592cu: goto label_44592c;
        case 0x445930u: goto label_445930;
        case 0x445934u: goto label_445934;
        case 0x445938u: goto label_445938;
        case 0x44593cu: goto label_44593c;
        case 0x445940u: goto label_445940;
        case 0x445944u: goto label_445944;
        case 0x445948u: goto label_445948;
        case 0x44594cu: goto label_44594c;
        case 0x445950u: goto label_445950;
        case 0x445954u: goto label_445954;
        case 0x445958u: goto label_445958;
        case 0x44595cu: goto label_44595c;
        case 0x445960u: goto label_445960;
        case 0x445964u: goto label_445964;
        case 0x445968u: goto label_445968;
        case 0x44596cu: goto label_44596c;
        case 0x445970u: goto label_445970;
        case 0x445974u: goto label_445974;
        case 0x445978u: goto label_445978;
        case 0x44597cu: goto label_44597c;
        case 0x445980u: goto label_445980;
        case 0x445984u: goto label_445984;
        case 0x445988u: goto label_445988;
        case 0x44598cu: goto label_44598c;
        case 0x445990u: goto label_445990;
        case 0x445994u: goto label_445994;
        case 0x445998u: goto label_445998;
        case 0x44599cu: goto label_44599c;
        case 0x4459a0u: goto label_4459a0;
        case 0x4459a4u: goto label_4459a4;
        case 0x4459a8u: goto label_4459a8;
        case 0x4459acu: goto label_4459ac;
        case 0x4459b0u: goto label_4459b0;
        case 0x4459b4u: goto label_4459b4;
        case 0x4459b8u: goto label_4459b8;
        case 0x4459bcu: goto label_4459bc;
        case 0x4459c0u: goto label_4459c0;
        case 0x4459c4u: goto label_4459c4;
        case 0x4459c8u: goto label_4459c8;
        case 0x4459ccu: goto label_4459cc;
        case 0x4459d0u: goto label_4459d0;
        case 0x4459d4u: goto label_4459d4;
        case 0x4459d8u: goto label_4459d8;
        case 0x4459dcu: goto label_4459dc;
        case 0x4459e0u: goto label_4459e0;
        case 0x4459e4u: goto label_4459e4;
        case 0x4459e8u: goto label_4459e8;
        case 0x4459ecu: goto label_4459ec;
        case 0x4459f0u: goto label_4459f0;
        case 0x4459f4u: goto label_4459f4;
        case 0x4459f8u: goto label_4459f8;
        case 0x4459fcu: goto label_4459fc;
        case 0x445a00u: goto label_445a00;
        case 0x445a04u: goto label_445a04;
        case 0x445a08u: goto label_445a08;
        case 0x445a0cu: goto label_445a0c;
        case 0x445a10u: goto label_445a10;
        case 0x445a14u: goto label_445a14;
        case 0x445a18u: goto label_445a18;
        case 0x445a1cu: goto label_445a1c;
        case 0x445a20u: goto label_445a20;
        case 0x445a24u: goto label_445a24;
        case 0x445a28u: goto label_445a28;
        case 0x445a2cu: goto label_445a2c;
        case 0x445a30u: goto label_445a30;
        case 0x445a34u: goto label_445a34;
        case 0x445a38u: goto label_445a38;
        case 0x445a3cu: goto label_445a3c;
        case 0x445a40u: goto label_445a40;
        case 0x445a44u: goto label_445a44;
        case 0x445a48u: goto label_445a48;
        case 0x445a4cu: goto label_445a4c;
        case 0x445a50u: goto label_445a50;
        case 0x445a54u: goto label_445a54;
        case 0x445a58u: goto label_445a58;
        case 0x445a5cu: goto label_445a5c;
        case 0x445a60u: goto label_445a60;
        case 0x445a64u: goto label_445a64;
        case 0x445a68u: goto label_445a68;
        case 0x445a6cu: goto label_445a6c;
        case 0x445a70u: goto label_445a70;
        case 0x445a74u: goto label_445a74;
        case 0x445a78u: goto label_445a78;
        case 0x445a7cu: goto label_445a7c;
        case 0x445a80u: goto label_445a80;
        case 0x445a84u: goto label_445a84;
        case 0x445a88u: goto label_445a88;
        case 0x445a8cu: goto label_445a8c;
        case 0x445a90u: goto label_445a90;
        case 0x445a94u: goto label_445a94;
        case 0x445a98u: goto label_445a98;
        case 0x445a9cu: goto label_445a9c;
        case 0x445aa0u: goto label_445aa0;
        case 0x445aa4u: goto label_445aa4;
        case 0x445aa8u: goto label_445aa8;
        case 0x445aacu: goto label_445aac;
        case 0x445ab0u: goto label_445ab0;
        case 0x445ab4u: goto label_445ab4;
        case 0x445ab8u: goto label_445ab8;
        case 0x445abcu: goto label_445abc;
        case 0x445ac0u: goto label_445ac0;
        case 0x445ac4u: goto label_445ac4;
        case 0x445ac8u: goto label_445ac8;
        case 0x445accu: goto label_445acc;
        case 0x445ad0u: goto label_445ad0;
        case 0x445ad4u: goto label_445ad4;
        case 0x445ad8u: goto label_445ad8;
        case 0x445adcu: goto label_445adc;
        case 0x445ae0u: goto label_445ae0;
        case 0x445ae4u: goto label_445ae4;
        case 0x445ae8u: goto label_445ae8;
        case 0x445aecu: goto label_445aec;
        case 0x445af0u: goto label_445af0;
        case 0x445af4u: goto label_445af4;
        case 0x445af8u: goto label_445af8;
        case 0x445afcu: goto label_445afc;
        case 0x445b00u: goto label_445b00;
        case 0x445b04u: goto label_445b04;
        case 0x445b08u: goto label_445b08;
        case 0x445b0cu: goto label_445b0c;
        case 0x445b10u: goto label_445b10;
        case 0x445b14u: goto label_445b14;
        case 0x445b18u: goto label_445b18;
        case 0x445b1cu: goto label_445b1c;
        case 0x445b20u: goto label_445b20;
        case 0x445b24u: goto label_445b24;
        case 0x445b28u: goto label_445b28;
        case 0x445b2cu: goto label_445b2c;
        case 0x445b30u: goto label_445b30;
        case 0x445b34u: goto label_445b34;
        case 0x445b38u: goto label_445b38;
        case 0x445b3cu: goto label_445b3c;
        case 0x445b40u: goto label_445b40;
        case 0x445b44u: goto label_445b44;
        case 0x445b48u: goto label_445b48;
        case 0x445b4cu: goto label_445b4c;
        case 0x445b50u: goto label_445b50;
        case 0x445b54u: goto label_445b54;
        case 0x445b58u: goto label_445b58;
        case 0x445b5cu: goto label_445b5c;
        case 0x445b60u: goto label_445b60;
        case 0x445b64u: goto label_445b64;
        case 0x445b68u: goto label_445b68;
        case 0x445b6cu: goto label_445b6c;
        case 0x445b70u: goto label_445b70;
        case 0x445b74u: goto label_445b74;
        case 0x445b78u: goto label_445b78;
        case 0x445b7cu: goto label_445b7c;
        case 0x445b80u: goto label_445b80;
        case 0x445b84u: goto label_445b84;
        case 0x445b88u: goto label_445b88;
        case 0x445b8cu: goto label_445b8c;
        case 0x445b90u: goto label_445b90;
        case 0x445b94u: goto label_445b94;
        case 0x445b98u: goto label_445b98;
        case 0x445b9cu: goto label_445b9c;
        case 0x445ba0u: goto label_445ba0;
        case 0x445ba4u: goto label_445ba4;
        case 0x445ba8u: goto label_445ba8;
        case 0x445bacu: goto label_445bac;
        case 0x445bb0u: goto label_445bb0;
        case 0x445bb4u: goto label_445bb4;
        case 0x445bb8u: goto label_445bb8;
        case 0x445bbcu: goto label_445bbc;
        case 0x445bc0u: goto label_445bc0;
        case 0x445bc4u: goto label_445bc4;
        case 0x445bc8u: goto label_445bc8;
        case 0x445bccu: goto label_445bcc;
        case 0x445bd0u: goto label_445bd0;
        case 0x445bd4u: goto label_445bd4;
        case 0x445bd8u: goto label_445bd8;
        case 0x445bdcu: goto label_445bdc;
        case 0x445be0u: goto label_445be0;
        case 0x445be4u: goto label_445be4;
        case 0x445be8u: goto label_445be8;
        case 0x445becu: goto label_445bec;
        case 0x445bf0u: goto label_445bf0;
        case 0x445bf4u: goto label_445bf4;
        case 0x445bf8u: goto label_445bf8;
        case 0x445bfcu: goto label_445bfc;
        case 0x445c00u: goto label_445c00;
        case 0x445c04u: goto label_445c04;
        case 0x445c08u: goto label_445c08;
        case 0x445c0cu: goto label_445c0c;
        case 0x445c10u: goto label_445c10;
        case 0x445c14u: goto label_445c14;
        case 0x445c18u: goto label_445c18;
        case 0x445c1cu: goto label_445c1c;
        case 0x445c20u: goto label_445c20;
        case 0x445c24u: goto label_445c24;
        case 0x445c28u: goto label_445c28;
        case 0x445c2cu: goto label_445c2c;
        case 0x445c30u: goto label_445c30;
        case 0x445c34u: goto label_445c34;
        case 0x445c38u: goto label_445c38;
        case 0x445c3cu: goto label_445c3c;
        case 0x445c40u: goto label_445c40;
        case 0x445c44u: goto label_445c44;
        case 0x445c48u: goto label_445c48;
        case 0x445c4cu: goto label_445c4c;
        default: break;
    }

    ctx->pc = 0x4458e0u;

label_4458e0:
    // 0x4458e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4458e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4458e4:
    // 0x4458e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4458e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4458e8:
    // 0x4458e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4458e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4458ec:
    // 0x4458ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4458ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4458f0:
    // 0x4458f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4458f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4458f4:
    // 0x4458f4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4458f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_4458f8:
    // 0x4458f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4458f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4458fc:
    // 0x4458fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4458fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_445900:
    // 0x445900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x445900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445904:
    // 0x445904: 0xc0aeaf4  jal         func_2BABD0
label_445908:
    if (ctx->pc == 0x445908u) {
        ctx->pc = 0x445908u;
            // 0x445908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x44590Cu;
        goto label_44590c;
    }
    ctx->pc = 0x445904u;
    SET_GPR_U32(ctx, 31, 0x44590Cu);
    ctx->pc = 0x445908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445904u;
            // 0x445908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44590Cu; }
        if (ctx->pc != 0x44590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44590Cu; }
        if (ctx->pc != 0x44590Cu) { return; }
    }
    ctx->pc = 0x44590Cu;
label_44590c:
    // 0x44590c: 0xc1117f4  jal         func_445FD0
label_445910:
    if (ctx->pc == 0x445910u) {
        ctx->pc = 0x445910u;
            // 0x445910: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x445914u;
        goto label_445914;
    }
    ctx->pc = 0x44590Cu;
    SET_GPR_U32(ctx, 31, 0x445914u);
    ctx->pc = 0x445910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44590Cu;
            // 0x445910: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445FD0u;
    if (runtime->hasFunction(0x445FD0u)) {
        auto targetFn = runtime->lookupFunction(0x445FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445914u; }
        if (ctx->pc != 0x445914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445FD0_0x445fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445914u; }
        if (ctx->pc != 0x445914u) { return; }
    }
    ctx->pc = 0x445914u;
label_445914:
    // 0x445914: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x445914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_445918:
    // 0x445918: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x445918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44591c:
    // 0x44591c: 0x2463d520  addiu       $v1, $v1, -0x2AE0
    ctx->pc = 0x44591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956320));
label_445920:
    // 0x445920: 0x2442d558  addiu       $v0, $v0, -0x2AA8
    ctx->pc = 0x445920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956376));
label_445924:
    // 0x445924: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x445924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_445928:
    // 0x445928: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x445928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_44592c:
    // 0x44592c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x44592cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_445930:
    // 0x445930: 0xc1117ec  jal         func_445FB0
label_445934:
    if (ctx->pc == 0x445934u) {
        ctx->pc = 0x445934u;
            // 0x445934: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x445938u;
        goto label_445938;
    }
    ctx->pc = 0x445930u;
    SET_GPR_U32(ctx, 31, 0x445938u);
    ctx->pc = 0x445934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445930u;
            // 0x445934: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445FB0u;
    if (runtime->hasFunction(0x445FB0u)) {
        auto targetFn = runtime->lookupFunction(0x445FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445938u; }
        if (ctx->pc != 0x445938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445FB0_0x445fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445938u; }
        if (ctx->pc != 0x445938u) { return; }
    }
    ctx->pc = 0x445938u;
label_445938:
    // 0x445938: 0xc1117ec  jal         func_445FB0
label_44593c:
    if (ctx->pc == 0x44593Cu) {
        ctx->pc = 0x44593Cu;
            // 0x44593c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x445940u;
        goto label_445940;
    }
    ctx->pc = 0x445938u;
    SET_GPR_U32(ctx, 31, 0x445940u);
    ctx->pc = 0x44593Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445938u;
            // 0x44593c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445FB0u;
    if (runtime->hasFunction(0x445FB0u)) {
        auto targetFn = runtime->lookupFunction(0x445FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445940u; }
        if (ctx->pc != 0x445940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445FB0_0x445fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445940u; }
        if (ctx->pc != 0x445940u) { return; }
    }
    ctx->pc = 0x445940u;
label_445940:
    // 0x445940: 0xc1117e4  jal         func_445F90
label_445944:
    if (ctx->pc == 0x445944u) {
        ctx->pc = 0x445944u;
            // 0x445944: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x445948u;
        goto label_445948;
    }
    ctx->pc = 0x445940u;
    SET_GPR_U32(ctx, 31, 0x445948u);
    ctx->pc = 0x445944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445940u;
            // 0x445944: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445F90u;
    if (runtime->hasFunction(0x445F90u)) {
        auto targetFn = runtime->lookupFunction(0x445F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445948u; }
        if (ctx->pc != 0x445948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445F90_0x445f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445948u; }
        if (ctx->pc != 0x445948u) { return; }
    }
    ctx->pc = 0x445948u;
label_445948:
    // 0x445948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44594c:
    // 0x44594c: 0xc0aeac0  jal         func_2BAB00
label_445950:
    if (ctx->pc == 0x445950u) {
        ctx->pc = 0x445950u;
            // 0x445950: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x445954u;
        goto label_445954;
    }
    ctx->pc = 0x44594Cu;
    SET_GPR_U32(ctx, 31, 0x445954u);
    ctx->pc = 0x445950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44594Cu;
            // 0x445950: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445954u; }
        if (ctx->pc != 0x445954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445954u; }
        if (ctx->pc != 0x445954u) { return; }
    }
    ctx->pc = 0x445954u;
label_445954:
    // 0x445954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x445954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445958:
    // 0x445958: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_44595c:
    if (ctx->pc == 0x44595Cu) {
        ctx->pc = 0x445960u;
        goto label_445960;
    }
    ctx->pc = 0x445958u;
    {
        const bool branch_taken_0x445958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x445958) {
            ctx->pc = 0x4459D8u;
            goto label_4459d8;
        }
    }
    ctx->pc = 0x445960u;
label_445960:
    // 0x445960: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x445960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_445964:
    // 0x445964: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x445964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_445968:
    // 0x445968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x445968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44596c:
    // 0x44596c: 0xc040138  jal         func_1004E0
label_445970:
    if (ctx->pc == 0x445970u) {
        ctx->pc = 0x445970u;
            // 0x445970: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x445974u;
        goto label_445974;
    }
    ctx->pc = 0x44596Cu;
    SET_GPR_U32(ctx, 31, 0x445974u);
    ctx->pc = 0x445970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44596Cu;
            // 0x445970: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445974u; }
        if (ctx->pc != 0x445974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445974u; }
        if (ctx->pc != 0x445974u) { return; }
    }
    ctx->pc = 0x445974u;
label_445974:
    // 0x445974: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x445974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_445978:
    // 0x445978: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x445978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_44597c:
    // 0x44597c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445980:
    // 0x445980: 0x24a55ea0  addiu       $a1, $a1, 0x5EA0
    ctx->pc = 0x445980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24224));
label_445984:
    // 0x445984: 0x24c65dc0  addiu       $a2, $a2, 0x5DC0
    ctx->pc = 0x445984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24000));
label_445988:
    // 0x445988: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x445988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_44598c:
    // 0x44598c: 0xc040840  jal         func_102100
label_445990:
    if (ctx->pc == 0x445990u) {
        ctx->pc = 0x445990u;
            // 0x445990: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445994u;
        goto label_445994;
    }
    ctx->pc = 0x44598Cu;
    SET_GPR_U32(ctx, 31, 0x445994u);
    ctx->pc = 0x445990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44598Cu;
            // 0x445990: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445994u; }
        if (ctx->pc != 0x445994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445994u; }
        if (ctx->pc != 0x445994u) { return; }
    }
    ctx->pc = 0x445994u;
label_445994:
    // 0x445994: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x445994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_445998:
    // 0x445998: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x445998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44599c:
    // 0x44599c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x44599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4459a0:
    // 0x4459a0: 0xc11176c  jal         func_445DB0
label_4459a4:
    if (ctx->pc == 0x4459A4u) {
        ctx->pc = 0x4459A4u;
            // 0x4459a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4459A8u;
        goto label_4459a8;
    }
    ctx->pc = 0x4459A0u;
    SET_GPR_U32(ctx, 31, 0x4459A8u);
    ctx->pc = 0x4459A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4459A0u;
            // 0x4459a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445DB0u;
    if (runtime->hasFunction(0x445DB0u)) {
        auto targetFn = runtime->lookupFunction(0x445DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4459A8u; }
        if (ctx->pc != 0x4459A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445DB0_0x445db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4459A8u; }
        if (ctx->pc != 0x4459A8u) { return; }
    }
    ctx->pc = 0x4459A8u;
label_4459a8:
    // 0x4459a8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4459a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4459ac:
    // 0x4459ac: 0xc11176c  jal         func_445DB0
label_4459b0:
    if (ctx->pc == 0x4459B0u) {
        ctx->pc = 0x4459B0u;
            // 0x4459b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4459B4u;
        goto label_4459b4;
    }
    ctx->pc = 0x4459ACu;
    SET_GPR_U32(ctx, 31, 0x4459B4u);
    ctx->pc = 0x4459B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4459ACu;
            // 0x4459b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445DB0u;
    if (runtime->hasFunction(0x445DB0u)) {
        auto targetFn = runtime->lookupFunction(0x445DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4459B4u; }
        if (ctx->pc != 0x4459B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445DB0_0x445db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4459B4u; }
        if (ctx->pc != 0x4459B4u) { return; }
    }
    ctx->pc = 0x4459B4u;
label_4459b4:
    // 0x4459b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4459b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4459b8:
    // 0x4459b8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4459b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4459bc:
    // 0x4459bc: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x4459bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_4459c0:
    // 0x4459c0: 0xc111764  jal         func_445D90
label_4459c4:
    if (ctx->pc == 0x4459C4u) {
        ctx->pc = 0x4459C4u;
            // 0x4459c4: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->pc = 0x4459C8u;
        goto label_4459c8;
    }
    ctx->pc = 0x4459C0u;
    SET_GPR_U32(ctx, 31, 0x4459C8u);
    ctx->pc = 0x4459C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4459C0u;
            // 0x4459c4: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445D90u;
    if (runtime->hasFunction(0x445D90u)) {
        auto targetFn = runtime->lookupFunction(0x445D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4459C8u; }
        if (ctx->pc != 0x4459C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445D90_0x445d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4459C8u; }
        if (ctx->pc != 0x4459C8u) { return; }
    }
    ctx->pc = 0x4459C8u;
label_4459c8:
    // 0x4459c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4459c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4459cc:
    // 0x4459cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4459ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4459d0:
    // 0x4459d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4459d4:
    if (ctx->pc == 0x4459D4u) {
        ctx->pc = 0x4459D4u;
            // 0x4459d4: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x4459D8u;
        goto label_4459d8;
    }
    ctx->pc = 0x4459D0u;
    {
        const bool branch_taken_0x4459d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4459D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4459D0u;
            // 0x4459d4: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4459d0) {
            ctx->pc = 0x4459B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4459b8;
        }
    }
    ctx->pc = 0x4459D8u;
label_4459d8:
    // 0x4459d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4459d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4459dc:
    // 0x4459dc: 0x2442d4d0  addiu       $v0, $v0, -0x2B30
    ctx->pc = 0x4459dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956240));
label_4459e0:
    // 0x4459e0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4459e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4459e4:
    // 0x4459e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4459e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4459e8:
    // 0x4459e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4459e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4459ec:
    // 0x4459ec: 0x2442d508  addiu       $v0, $v0, -0x2AF8
    ctx->pc = 0x4459ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956296));
label_4459f0:
    // 0x4459f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4459f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4459f4:
    // 0x4459f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4459f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4459f8:
    // 0x4459f8: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4459f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4459fc:
    // 0x4459fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4459fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_445a00:
    // 0x445a00: 0xc0a7a88  jal         func_29EA20
label_445a04:
    if (ctx->pc == 0x445A04u) {
        ctx->pc = 0x445A04u;
            // 0x445a04: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x445A08u;
        goto label_445a08;
    }
    ctx->pc = 0x445A00u;
    SET_GPR_U32(ctx, 31, 0x445A08u);
    ctx->pc = 0x445A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445A00u;
            // 0x445a04: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445A08u; }
        if (ctx->pc != 0x445A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445A08u; }
        if (ctx->pc != 0x445A08u) { return; }
    }
    ctx->pc = 0x445A08u;
label_445a08:
    // 0x445a08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x445a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_445a0c:
    // 0x445a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x445a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445a10:
    // 0x445a10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_445a14:
    if (ctx->pc == 0x445A14u) {
        ctx->pc = 0x445A14u;
            // 0x445a14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x445A18u;
        goto label_445a18;
    }
    ctx->pc = 0x445A10u;
    {
        const bool branch_taken_0x445a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445A10u;
            // 0x445a14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445a10) {
            ctx->pc = 0x445A30u;
            goto label_445a30;
        }
    }
    ctx->pc = 0x445A18u;
label_445a18:
    // 0x445a18: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x445a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_445a1c:
    // 0x445a1c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x445a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_445a20:
    // 0x445a20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x445a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_445a24:
    // 0x445a24: 0xc0827ac  jal         func_209EB0
label_445a28:
    if (ctx->pc == 0x445A28u) {
        ctx->pc = 0x445A2Cu;
        goto label_445a2c;
    }
    ctx->pc = 0x445A24u;
    SET_GPR_U32(ctx, 31, 0x445A2Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445A2Cu; }
        if (ctx->pc != 0x445A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445A2Cu; }
        if (ctx->pc != 0x445A2Cu) { return; }
    }
    ctx->pc = 0x445A2Cu;
label_445a2c:
    // 0x445a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x445a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445a30:
    // 0x445a30: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x445a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
label_445a34:
    // 0x445a34: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x445a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_445a38:
    // 0x445a38: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x445a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_445a3c:
    // 0x445a3c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x445a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_445a40:
    // 0x445a40: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x445a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_445a44:
    // 0x445a44: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x445a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_445a48:
    // 0x445a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x445a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_445a4c:
    // 0x445a4c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x445a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_445a50:
    // 0x445a50: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x445a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_445a54:
    // 0x445a54: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x445a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_445a58:
    // 0x445a58: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x445a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_445a5c:
    // 0x445a5c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x445a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_445a60:
    // 0x445a60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445a64:
    // 0x445a64: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x445a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_445a68:
    // 0x445a68: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x445a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_445a6c:
    // 0x445a6c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x445a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_445a70:
    // 0x445a70: 0xc0a7a88  jal         func_29EA20
label_445a74:
    if (ctx->pc == 0x445A74u) {
        ctx->pc = 0x445A74u;
            // 0x445a74: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x445A78u;
        goto label_445a78;
    }
    ctx->pc = 0x445A70u;
    SET_GPR_U32(ctx, 31, 0x445A78u);
    ctx->pc = 0x445A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445A70u;
            // 0x445a74: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445A78u; }
        if (ctx->pc != 0x445A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445A78u; }
        if (ctx->pc != 0x445A78u) { return; }
    }
    ctx->pc = 0x445A78u;
label_445a78:
    // 0x445a78: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x445a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_445a7c:
    // 0x445a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x445a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445a80:
    // 0x445a80: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_445a84:
    if (ctx->pc == 0x445A84u) {
        ctx->pc = 0x445A84u;
            // 0x445a84: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x445A88u;
        goto label_445a88;
    }
    ctx->pc = 0x445A80u;
    {
        const bool branch_taken_0x445a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445A80u;
            // 0x445a84: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445a80) {
            ctx->pc = 0x445AA4u;
            goto label_445aa4;
        }
    }
    ctx->pc = 0x445A88u;
label_445a88:
    // 0x445a88: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x445a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_445a8c:
    // 0x445a8c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x445a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_445a90:
    // 0x445a90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x445a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_445a94:
    // 0x445a94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x445a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_445a98:
    // 0x445a98: 0xc0807e0  jal         func_201F80
label_445a9c:
    if (ctx->pc == 0x445A9Cu) {
        ctx->pc = 0x445A9Cu;
            // 0x445a9c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x445AA0u;
        goto label_445aa0;
    }
    ctx->pc = 0x445A98u;
    SET_GPR_U32(ctx, 31, 0x445AA0u);
    ctx->pc = 0x445A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445A98u;
            // 0x445a9c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445AA0u; }
        if (ctx->pc != 0x445AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201F80_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445AA0u; }
        if (ctx->pc != 0x445AA0u) { return; }
    }
    ctx->pc = 0x445AA0u;
label_445aa0:
    // 0x445aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x445aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445aa4:
    // 0x445aa4: 0xae2400a0  sw          $a0, 0xA0($s1)
    ctx->pc = 0x445aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 4));
label_445aa8:
    // 0x445aa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x445aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445aac:
    // 0x445aac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x445aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_445ab0:
    // 0x445ab0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x445ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445ab4:
    // 0x445ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445ab8:
    // 0x445ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445abc:
    // 0x445abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x445abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445ac0:
    // 0x445ac0: 0x3e00008  jr          $ra
label_445ac4:
    if (ctx->pc == 0x445AC4u) {
        ctx->pc = 0x445AC4u;
            // 0x445ac4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x445AC8u;
        goto label_445ac8;
    }
    ctx->pc = 0x445AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445AC0u;
            // 0x445ac4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445AC8u;
label_445ac8:
    // 0x445ac8: 0x0  nop
    ctx->pc = 0x445ac8u;
    // NOP
label_445acc:
    // 0x445acc: 0x0  nop
    ctx->pc = 0x445accu;
    // NOP
label_445ad0:
    // 0x445ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x445ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_445ad4:
    // 0x445ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x445ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_445ad8:
    // 0x445ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_445adc:
    // 0x445adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x445adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445ae0:
    // 0x445ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x445ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445ae4:
    // 0x445ae4: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_445ae8:
    if (ctx->pc == 0x445AE8u) {
        ctx->pc = 0x445AE8u;
            // 0x445ae8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445AECu;
        goto label_445aec;
    }
    ctx->pc = 0x445AE4u;
    {
        const bool branch_taken_0x445ae4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x445AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445AE4u;
            // 0x445ae8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ae4) {
            ctx->pc = 0x445C38u;
            goto label_445c38;
        }
    }
    ctx->pc = 0x445AECu;
label_445aec:
    // 0x445aec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x445aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_445af0:
    // 0x445af0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x445af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_445af4:
    // 0x445af4: 0x2463d520  addiu       $v1, $v1, -0x2AE0
    ctx->pc = 0x445af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956320));
label_445af8:
    // 0x445af8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x445af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_445afc:
    // 0x445afc: 0x2442d558  addiu       $v0, $v0, -0x2AA8
    ctx->pc = 0x445afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956376));
label_445b00:
    // 0x445b00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x445b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_445b04:
    // 0x445b04: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x445b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_445b08:
    // 0x445b08: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x445b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_445b0c:
    // 0x445b0c: 0xc0407c0  jal         func_101F00
label_445b10:
    if (ctx->pc == 0x445B10u) {
        ctx->pc = 0x445B10u;
            // 0x445b10: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
        ctx->pc = 0x445B14u;
        goto label_445b14;
    }
    ctx->pc = 0x445B0Cu;
    SET_GPR_U32(ctx, 31, 0x445B14u);
    ctx->pc = 0x445B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445B0Cu;
            // 0x445b10: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B14u; }
        if (ctx->pc != 0x445B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B14u; }
        if (ctx->pc != 0x445B14u) { return; }
    }
    ctx->pc = 0x445B14u;
label_445b14:
    // 0x445b14: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x445b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_445b18:
    // 0x445b18: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_445b1c:
    if (ctx->pc == 0x445B1Cu) {
        ctx->pc = 0x445B1Cu;
            // 0x445b1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x445B20u;
        goto label_445b20;
    }
    ctx->pc = 0x445B18u;
    {
        const bool branch_taken_0x445b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b18) {
            ctx->pc = 0x445B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445B18u;
            // 0x445b1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445B4Cu;
            goto label_445b4c;
        }
    }
    ctx->pc = 0x445B20u;
label_445b20:
    // 0x445b20: 0x26220094  addiu       $v0, $s1, 0x94
    ctx->pc = 0x445b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_445b24:
    // 0x445b24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_445b28:
    if (ctx->pc == 0x445B28u) {
        ctx->pc = 0x445B28u;
            // 0x445b28: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x445B2Cu;
        goto label_445b2c;
    }
    ctx->pc = 0x445B24u;
    {
        const bool branch_taken_0x445b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b24) {
            ctx->pc = 0x445B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445B24u;
            // 0x445b28: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445B38u;
            goto label_445b38;
        }
    }
    ctx->pc = 0x445B2Cu;
label_445b2c:
    // 0x445b2c: 0xc07507c  jal         func_1D41F0
label_445b30:
    if (ctx->pc == 0x445B30u) {
        ctx->pc = 0x445B30u;
            // 0x445b30: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x445B34u;
        goto label_445b34;
    }
    ctx->pc = 0x445B2Cu;
    SET_GPR_U32(ctx, 31, 0x445B34u);
    ctx->pc = 0x445B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445B2Cu;
            // 0x445b30: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B34u; }
        if (ctx->pc != 0x445B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B34u; }
        if (ctx->pc != 0x445B34u) { return; }
    }
    ctx->pc = 0x445B34u;
label_445b34:
    // 0x445b34: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x445b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_445b38:
    // 0x445b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_445b3c:
    if (ctx->pc == 0x445B3Cu) {
        ctx->pc = 0x445B40u;
        goto label_445b40;
    }
    ctx->pc = 0x445B38u;
    {
        const bool branch_taken_0x445b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b38) {
            ctx->pc = 0x445B48u;
            goto label_445b48;
        }
    }
    ctx->pc = 0x445B40u;
label_445b40:
    // 0x445b40: 0xc07507c  jal         func_1D41F0
label_445b44:
    if (ctx->pc == 0x445B44u) {
        ctx->pc = 0x445B44u;
            // 0x445b44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x445B48u;
        goto label_445b48;
    }
    ctx->pc = 0x445B40u;
    SET_GPR_U32(ctx, 31, 0x445B48u);
    ctx->pc = 0x445B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445B40u;
            // 0x445b44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B48u; }
        if (ctx->pc != 0x445B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B48u; }
        if (ctx->pc != 0x445B48u) { return; }
    }
    ctx->pc = 0x445B48u;
label_445b48:
    // 0x445b48: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x445b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_445b4c:
    // 0x445b4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_445b50:
    if (ctx->pc == 0x445B50u) {
        ctx->pc = 0x445B50u;
            // 0x445b50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x445B54u;
        goto label_445b54;
    }
    ctx->pc = 0x445B4Cu;
    {
        const bool branch_taken_0x445b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b4c) {
            ctx->pc = 0x445B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445B4Cu;
            // 0x445b50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445B7Cu;
            goto label_445b7c;
        }
    }
    ctx->pc = 0x445B54u;
label_445b54:
    // 0x445b54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_445b58:
    if (ctx->pc == 0x445B58u) {
        ctx->pc = 0x445B5Cu;
        goto label_445b5c;
    }
    ctx->pc = 0x445B54u;
    {
        const bool branch_taken_0x445b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b54) {
            ctx->pc = 0x445B78u;
            goto label_445b78;
        }
    }
    ctx->pc = 0x445B5Cu;
label_445b5c:
    // 0x445b5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_445b60:
    if (ctx->pc == 0x445B60u) {
        ctx->pc = 0x445B64u;
        goto label_445b64;
    }
    ctx->pc = 0x445B5Cu;
    {
        const bool branch_taken_0x445b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b5c) {
            ctx->pc = 0x445B78u;
            goto label_445b78;
        }
    }
    ctx->pc = 0x445B64u;
label_445b64:
    // 0x445b64: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x445b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_445b68:
    // 0x445b68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_445b6c:
    if (ctx->pc == 0x445B6Cu) {
        ctx->pc = 0x445B70u;
        goto label_445b70;
    }
    ctx->pc = 0x445B68u;
    {
        const bool branch_taken_0x445b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b68) {
            ctx->pc = 0x445B78u;
            goto label_445b78;
        }
    }
    ctx->pc = 0x445B70u;
label_445b70:
    // 0x445b70: 0xc0400a8  jal         func_1002A0
label_445b74:
    if (ctx->pc == 0x445B74u) {
        ctx->pc = 0x445B78u;
        goto label_445b78;
    }
    ctx->pc = 0x445B70u;
    SET_GPR_U32(ctx, 31, 0x445B78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B78u; }
        if (ctx->pc != 0x445B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445B78u; }
        if (ctx->pc != 0x445B78u) { return; }
    }
    ctx->pc = 0x445B78u;
label_445b78:
    // 0x445b78: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x445b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_445b7c:
    // 0x445b7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_445b80:
    if (ctx->pc == 0x445B80u) {
        ctx->pc = 0x445B80u;
            // 0x445b80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x445B84u;
        goto label_445b84;
    }
    ctx->pc = 0x445B7Cu;
    {
        const bool branch_taken_0x445b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b7c) {
            ctx->pc = 0x445B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445B7Cu;
            // 0x445b80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445BACu;
            goto label_445bac;
        }
    }
    ctx->pc = 0x445B84u;
label_445b84:
    // 0x445b84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_445b88:
    if (ctx->pc == 0x445B88u) {
        ctx->pc = 0x445B8Cu;
        goto label_445b8c;
    }
    ctx->pc = 0x445B84u;
    {
        const bool branch_taken_0x445b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b84) {
            ctx->pc = 0x445BA8u;
            goto label_445ba8;
        }
    }
    ctx->pc = 0x445B8Cu;
label_445b8c:
    // 0x445b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_445b90:
    if (ctx->pc == 0x445B90u) {
        ctx->pc = 0x445B94u;
        goto label_445b94;
    }
    ctx->pc = 0x445B8Cu;
    {
        const bool branch_taken_0x445b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b8c) {
            ctx->pc = 0x445BA8u;
            goto label_445ba8;
        }
    }
    ctx->pc = 0x445B94u;
label_445b94:
    // 0x445b94: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x445b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_445b98:
    // 0x445b98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_445b9c:
    if (ctx->pc == 0x445B9Cu) {
        ctx->pc = 0x445BA0u;
        goto label_445ba0;
    }
    ctx->pc = 0x445B98u;
    {
        const bool branch_taken_0x445b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x445b98) {
            ctx->pc = 0x445BA8u;
            goto label_445ba8;
        }
    }
    ctx->pc = 0x445BA0u;
label_445ba0:
    // 0x445ba0: 0xc0400a8  jal         func_1002A0
label_445ba4:
    if (ctx->pc == 0x445BA4u) {
        ctx->pc = 0x445BA8u;
        goto label_445ba8;
    }
    ctx->pc = 0x445BA0u;
    SET_GPR_U32(ctx, 31, 0x445BA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445BA8u; }
        if (ctx->pc != 0x445BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445BA8u; }
        if (ctx->pc != 0x445BA8u) { return; }
    }
    ctx->pc = 0x445BA8u;
label_445ba8:
    // 0x445ba8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x445ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_445bac:
    // 0x445bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_445bb0:
    if (ctx->pc == 0x445BB0u) {
        ctx->pc = 0x445BB4u;
        goto label_445bb4;
    }
    ctx->pc = 0x445BACu;
    {
        const bool branch_taken_0x445bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445bac) {
            ctx->pc = 0x445BC8u;
            goto label_445bc8;
        }
    }
    ctx->pc = 0x445BB4u;
label_445bb4:
    // 0x445bb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x445bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_445bb8:
    // 0x445bb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x445bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_445bbc:
    // 0x445bbc: 0x2463d4c0  addiu       $v1, $v1, -0x2B40
    ctx->pc = 0x445bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956224));
label_445bc0:
    // 0x445bc0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x445bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_445bc4:
    // 0x445bc4: 0xac407528  sw          $zero, 0x7528($v0)
    ctx->pc = 0x445bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29992), GPR_U32(ctx, 0));
label_445bc8:
    // 0x445bc8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_445bcc:
    if (ctx->pc == 0x445BCCu) {
        ctx->pc = 0x445BCCu;
            // 0x445bcc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x445BD0u;
        goto label_445bd0;
    }
    ctx->pc = 0x445BC8u;
    {
        const bool branch_taken_0x445bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x445bc8) {
            ctx->pc = 0x445BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445BC8u;
            // 0x445bcc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445C24u;
            goto label_445c24;
        }
    }
    ctx->pc = 0x445BD0u;
label_445bd0:
    // 0x445bd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445bd4:
    // 0x445bd4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x445bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_445bd8:
    // 0x445bd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x445bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_445bdc:
    // 0x445bdc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x445bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_445be0:
    // 0x445be0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_445be4:
    if (ctx->pc == 0x445BE4u) {
        ctx->pc = 0x445BE4u;
            // 0x445be4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x445BE8u;
        goto label_445be8;
    }
    ctx->pc = 0x445BE0u;
    {
        const bool branch_taken_0x445be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x445be0) {
            ctx->pc = 0x445BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445BE0u;
            // 0x445be4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445BFCu;
            goto label_445bfc;
        }
    }
    ctx->pc = 0x445BE8u;
label_445be8:
    // 0x445be8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x445be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_445bec:
    // 0x445bec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x445becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_445bf0:
    // 0x445bf0: 0x320f809  jalr        $t9
label_445bf4:
    if (ctx->pc == 0x445BF4u) {
        ctx->pc = 0x445BF4u;
            // 0x445bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x445BF8u;
        goto label_445bf8;
    }
    ctx->pc = 0x445BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x445BF8u);
        ctx->pc = 0x445BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445BF0u;
            // 0x445bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x445BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x445BF8u; }
            if (ctx->pc != 0x445BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x445BF8u;
label_445bf8:
    // 0x445bf8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x445bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_445bfc:
    // 0x445bfc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_445c00:
    if (ctx->pc == 0x445C00u) {
        ctx->pc = 0x445C00u;
            // 0x445c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445C04u;
        goto label_445c04;
    }
    ctx->pc = 0x445BFCu;
    {
        const bool branch_taken_0x445bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x445bfc) {
            ctx->pc = 0x445C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445BFCu;
            // 0x445c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445C18u;
            goto label_445c18;
        }
    }
    ctx->pc = 0x445C04u;
label_445c04:
    // 0x445c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x445c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_445c08:
    // 0x445c08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x445c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_445c0c:
    // 0x445c0c: 0x320f809  jalr        $t9
label_445c10:
    if (ctx->pc == 0x445C10u) {
        ctx->pc = 0x445C10u;
            // 0x445c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x445C14u;
        goto label_445c14;
    }
    ctx->pc = 0x445C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x445C14u);
        ctx->pc = 0x445C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445C0Cu;
            // 0x445c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x445C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x445C14u; }
            if (ctx->pc != 0x445C14u) { return; }
        }
        }
    }
    ctx->pc = 0x445C14u;
label_445c14:
    // 0x445c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445c18:
    // 0x445c18: 0xc075bf8  jal         func_1D6FE0
label_445c1c:
    if (ctx->pc == 0x445C1Cu) {
        ctx->pc = 0x445C1Cu;
            // 0x445c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445C20u;
        goto label_445c20;
    }
    ctx->pc = 0x445C18u;
    SET_GPR_U32(ctx, 31, 0x445C20u);
    ctx->pc = 0x445C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445C18u;
            // 0x445c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C20u; }
        if (ctx->pc != 0x445C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C20u; }
        if (ctx->pc != 0x445C20u) { return; }
    }
    ctx->pc = 0x445C20u;
label_445c20:
    // 0x445c20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x445c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_445c24:
    // 0x445c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x445c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_445c28:
    // 0x445c28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_445c2c:
    if (ctx->pc == 0x445C2Cu) {
        ctx->pc = 0x445C2Cu;
            // 0x445c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445C30u;
        goto label_445c30;
    }
    ctx->pc = 0x445C28u;
    {
        const bool branch_taken_0x445c28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x445c28) {
            ctx->pc = 0x445C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445C28u;
            // 0x445c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445C3Cu;
            goto label_445c3c;
        }
    }
    ctx->pc = 0x445C30u;
label_445c30:
    // 0x445c30: 0xc0400a8  jal         func_1002A0
label_445c34:
    if (ctx->pc == 0x445C34u) {
        ctx->pc = 0x445C34u;
            // 0x445c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445C38u;
        goto label_445c38;
    }
    ctx->pc = 0x445C30u;
    SET_GPR_U32(ctx, 31, 0x445C38u);
    ctx->pc = 0x445C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445C30u;
            // 0x445c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C38u; }
        if (ctx->pc != 0x445C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445C38u; }
        if (ctx->pc != 0x445C38u) { return; }
    }
    ctx->pc = 0x445C38u;
label_445c38:
    // 0x445c38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x445c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445c3c:
    // 0x445c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x445c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_445c40:
    // 0x445c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445c44:
    // 0x445c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x445c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445c48:
    // 0x445c48: 0x3e00008  jr          $ra
label_445c4c:
    if (ctx->pc == 0x445C4Cu) {
        ctx->pc = 0x445C4Cu;
            // 0x445c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x445C50u;
        goto label_fallthrough_0x445c48;
    }
    ctx->pc = 0x445C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445C48u;
            // 0x445c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x445c48:
    ctx->pc = 0x445C50u;
}
