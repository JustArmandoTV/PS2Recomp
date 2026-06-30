#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001768E0
// Address: 0x1768e0 - 0x176c58
void sub_001768E0_0x1768e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001768E0_0x1768e0");
#endif

    switch (ctx->pc) {
        case 0x1768e0u: goto label_1768e0;
        case 0x1768e4u: goto label_1768e4;
        case 0x1768e8u: goto label_1768e8;
        case 0x1768ecu: goto label_1768ec;
        case 0x1768f0u: goto label_1768f0;
        case 0x1768f4u: goto label_1768f4;
        case 0x1768f8u: goto label_1768f8;
        case 0x1768fcu: goto label_1768fc;
        case 0x176900u: goto label_176900;
        case 0x176904u: goto label_176904;
        case 0x176908u: goto label_176908;
        case 0x17690cu: goto label_17690c;
        case 0x176910u: goto label_176910;
        case 0x176914u: goto label_176914;
        case 0x176918u: goto label_176918;
        case 0x17691cu: goto label_17691c;
        case 0x176920u: goto label_176920;
        case 0x176924u: goto label_176924;
        case 0x176928u: goto label_176928;
        case 0x17692cu: goto label_17692c;
        case 0x176930u: goto label_176930;
        case 0x176934u: goto label_176934;
        case 0x176938u: goto label_176938;
        case 0x17693cu: goto label_17693c;
        case 0x176940u: goto label_176940;
        case 0x176944u: goto label_176944;
        case 0x176948u: goto label_176948;
        case 0x17694cu: goto label_17694c;
        case 0x176950u: goto label_176950;
        case 0x176954u: goto label_176954;
        case 0x176958u: goto label_176958;
        case 0x17695cu: goto label_17695c;
        case 0x176960u: goto label_176960;
        case 0x176964u: goto label_176964;
        case 0x176968u: goto label_176968;
        case 0x17696cu: goto label_17696c;
        case 0x176970u: goto label_176970;
        case 0x176974u: goto label_176974;
        case 0x176978u: goto label_176978;
        case 0x17697cu: goto label_17697c;
        case 0x176980u: goto label_176980;
        case 0x176984u: goto label_176984;
        case 0x176988u: goto label_176988;
        case 0x17698cu: goto label_17698c;
        case 0x176990u: goto label_176990;
        case 0x176994u: goto label_176994;
        case 0x176998u: goto label_176998;
        case 0x17699cu: goto label_17699c;
        case 0x1769a0u: goto label_1769a0;
        case 0x1769a4u: goto label_1769a4;
        case 0x1769a8u: goto label_1769a8;
        case 0x1769acu: goto label_1769ac;
        case 0x1769b0u: goto label_1769b0;
        case 0x1769b4u: goto label_1769b4;
        case 0x1769b8u: goto label_1769b8;
        case 0x1769bcu: goto label_1769bc;
        case 0x1769c0u: goto label_1769c0;
        case 0x1769c4u: goto label_1769c4;
        case 0x1769c8u: goto label_1769c8;
        case 0x1769ccu: goto label_1769cc;
        case 0x1769d0u: goto label_1769d0;
        case 0x1769d4u: goto label_1769d4;
        case 0x1769d8u: goto label_1769d8;
        case 0x1769dcu: goto label_1769dc;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769e4u: goto label_1769e4;
        case 0x1769e8u: goto label_1769e8;
        case 0x1769ecu: goto label_1769ec;
        case 0x1769f0u: goto label_1769f0;
        case 0x1769f4u: goto label_1769f4;
        case 0x1769f8u: goto label_1769f8;
        case 0x1769fcu: goto label_1769fc;
        case 0x176a00u: goto label_176a00;
        case 0x176a04u: goto label_176a04;
        case 0x176a08u: goto label_176a08;
        case 0x176a0cu: goto label_176a0c;
        case 0x176a10u: goto label_176a10;
        case 0x176a14u: goto label_176a14;
        case 0x176a18u: goto label_176a18;
        case 0x176a1cu: goto label_176a1c;
        case 0x176a20u: goto label_176a20;
        case 0x176a24u: goto label_176a24;
        case 0x176a28u: goto label_176a28;
        case 0x176a2cu: goto label_176a2c;
        case 0x176a30u: goto label_176a30;
        case 0x176a34u: goto label_176a34;
        case 0x176a38u: goto label_176a38;
        case 0x176a3cu: goto label_176a3c;
        case 0x176a40u: goto label_176a40;
        case 0x176a44u: goto label_176a44;
        case 0x176a48u: goto label_176a48;
        case 0x176a4cu: goto label_176a4c;
        case 0x176a50u: goto label_176a50;
        case 0x176a54u: goto label_176a54;
        case 0x176a58u: goto label_176a58;
        case 0x176a5cu: goto label_176a5c;
        case 0x176a60u: goto label_176a60;
        case 0x176a64u: goto label_176a64;
        case 0x176a68u: goto label_176a68;
        case 0x176a6cu: goto label_176a6c;
        case 0x176a70u: goto label_176a70;
        case 0x176a74u: goto label_176a74;
        case 0x176a78u: goto label_176a78;
        case 0x176a7cu: goto label_176a7c;
        case 0x176a80u: goto label_176a80;
        case 0x176a84u: goto label_176a84;
        case 0x176a88u: goto label_176a88;
        case 0x176a8cu: goto label_176a8c;
        case 0x176a90u: goto label_176a90;
        case 0x176a94u: goto label_176a94;
        case 0x176a98u: goto label_176a98;
        case 0x176a9cu: goto label_176a9c;
        case 0x176aa0u: goto label_176aa0;
        case 0x176aa4u: goto label_176aa4;
        case 0x176aa8u: goto label_176aa8;
        case 0x176aacu: goto label_176aac;
        case 0x176ab0u: goto label_176ab0;
        case 0x176ab4u: goto label_176ab4;
        case 0x176ab8u: goto label_176ab8;
        case 0x176abcu: goto label_176abc;
        case 0x176ac0u: goto label_176ac0;
        case 0x176ac4u: goto label_176ac4;
        case 0x176ac8u: goto label_176ac8;
        case 0x176accu: goto label_176acc;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ad4u: goto label_176ad4;
        case 0x176ad8u: goto label_176ad8;
        case 0x176adcu: goto label_176adc;
        case 0x176ae0u: goto label_176ae0;
        case 0x176ae4u: goto label_176ae4;
        case 0x176ae8u: goto label_176ae8;
        case 0x176aecu: goto label_176aec;
        case 0x176af0u: goto label_176af0;
        case 0x176af4u: goto label_176af4;
        case 0x176af8u: goto label_176af8;
        case 0x176afcu: goto label_176afc;
        case 0x176b00u: goto label_176b00;
        case 0x176b04u: goto label_176b04;
        case 0x176b08u: goto label_176b08;
        case 0x176b0cu: goto label_176b0c;
        case 0x176b10u: goto label_176b10;
        case 0x176b14u: goto label_176b14;
        case 0x176b18u: goto label_176b18;
        case 0x176b1cu: goto label_176b1c;
        case 0x176b20u: goto label_176b20;
        case 0x176b24u: goto label_176b24;
        case 0x176b28u: goto label_176b28;
        case 0x176b2cu: goto label_176b2c;
        case 0x176b30u: goto label_176b30;
        case 0x176b34u: goto label_176b34;
        case 0x176b38u: goto label_176b38;
        case 0x176b3cu: goto label_176b3c;
        case 0x176b40u: goto label_176b40;
        case 0x176b44u: goto label_176b44;
        case 0x176b48u: goto label_176b48;
        case 0x176b4cu: goto label_176b4c;
        case 0x176b50u: goto label_176b50;
        case 0x176b54u: goto label_176b54;
        case 0x176b58u: goto label_176b58;
        case 0x176b5cu: goto label_176b5c;
        case 0x176b60u: goto label_176b60;
        case 0x176b64u: goto label_176b64;
        case 0x176b68u: goto label_176b68;
        case 0x176b6cu: goto label_176b6c;
        case 0x176b70u: goto label_176b70;
        case 0x176b74u: goto label_176b74;
        case 0x176b78u: goto label_176b78;
        case 0x176b7cu: goto label_176b7c;
        case 0x176b80u: goto label_176b80;
        case 0x176b84u: goto label_176b84;
        case 0x176b88u: goto label_176b88;
        case 0x176b8cu: goto label_176b8c;
        case 0x176b90u: goto label_176b90;
        case 0x176b94u: goto label_176b94;
        case 0x176b98u: goto label_176b98;
        case 0x176b9cu: goto label_176b9c;
        case 0x176ba0u: goto label_176ba0;
        case 0x176ba4u: goto label_176ba4;
        case 0x176ba8u: goto label_176ba8;
        case 0x176bacu: goto label_176bac;
        case 0x176bb0u: goto label_176bb0;
        case 0x176bb4u: goto label_176bb4;
        case 0x176bb8u: goto label_176bb8;
        case 0x176bbcu: goto label_176bbc;
        case 0x176bc0u: goto label_176bc0;
        case 0x176bc4u: goto label_176bc4;
        case 0x176bc8u: goto label_176bc8;
        case 0x176bccu: goto label_176bcc;
        case 0x176bd0u: goto label_176bd0;
        case 0x176bd4u: goto label_176bd4;
        case 0x176bd8u: goto label_176bd8;
        case 0x176bdcu: goto label_176bdc;
        case 0x176be0u: goto label_176be0;
        case 0x176be4u: goto label_176be4;
        case 0x176be8u: goto label_176be8;
        case 0x176becu: goto label_176bec;
        case 0x176bf0u: goto label_176bf0;
        case 0x176bf4u: goto label_176bf4;
        case 0x176bf8u: goto label_176bf8;
        case 0x176bfcu: goto label_176bfc;
        case 0x176c00u: goto label_176c00;
        case 0x176c04u: goto label_176c04;
        case 0x176c08u: goto label_176c08;
        case 0x176c0cu: goto label_176c0c;
        case 0x176c10u: goto label_176c10;
        case 0x176c14u: goto label_176c14;
        case 0x176c18u: goto label_176c18;
        case 0x176c1cu: goto label_176c1c;
        case 0x176c20u: goto label_176c20;
        case 0x176c24u: goto label_176c24;
        case 0x176c28u: goto label_176c28;
        case 0x176c2cu: goto label_176c2c;
        case 0x176c30u: goto label_176c30;
        case 0x176c34u: goto label_176c34;
        case 0x176c38u: goto label_176c38;
        case 0x176c3cu: goto label_176c3c;
        case 0x176c40u: goto label_176c40;
        case 0x176c44u: goto label_176c44;
        case 0x176c48u: goto label_176c48;
        case 0x176c4cu: goto label_176c4c;
        case 0x176c50u: goto label_176c50;
        case 0x176c54u: goto label_176c54;
        default: break;
    }

    ctx->pc = 0x1768e0u;

label_1768e0:
    // 0x1768e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1768e4:
    // 0x1768e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1768e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1768e8:
    // 0x1768e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1768e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1768ec:
    // 0x1768ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1768ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1768f0:
    // 0x1768f0: 0xc05c04c  jal         func_170130
label_1768f4:
    if (ctx->pc == 0x1768F4u) {
        ctx->pc = 0x1768F4u;
            // 0x1768f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1768F8u;
        goto label_1768f8;
    }
    ctx->pc = 0x1768F0u;
    SET_GPR_U32(ctx, 31, 0x1768F8u);
    ctx->pc = 0x1768F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768F0u;
            // 0x1768f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768F8u; }
        if (ctx->pc != 0x1768F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768F8u; }
        if (ctx->pc != 0x1768F8u) { return; }
    }
    ctx->pc = 0x1768F8u;
label_1768f8:
    // 0x1768f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1768f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1768fc:
    // 0x1768fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176900:
    // 0x176900: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_176904:
    if (ctx->pc == 0x176904u) {
        ctx->pc = 0x176904u;
            // 0x176904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176908u;
        goto label_176908;
    }
    ctx->pc = 0x176900u;
    {
        const bool branch_taken_0x176900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x176904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176900u;
            // 0x176904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176900) {
            ctx->pc = 0x176920u;
            goto label_176920;
        }
    }
    ctx->pc = 0x176908u;
label_176908:
    // 0x176908: 0x84860042  lh          $a2, 0x42($a0)
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
label_17690c:
    // 0x17690c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17690cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176910:
    // 0x176910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x176910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176914:
    // 0x176914: 0x805cf3e  j           func_173CF8
label_176918:
    if (ctx->pc == 0x176918u) {
        ctx->pc = 0x176918u;
            // 0x176918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17691Cu;
        goto label_17691c;
    }
    ctx->pc = 0x176914u;
    ctx->pc = 0x176918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176914u;
            // 0x176918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173CF8u;
    if (runtime->hasFunction(0x173CF8u)) {
        auto targetFn = runtime->lookupFunction(0x173CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173CF8_0x173cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17691Cu;
label_17691c:
    // 0x17691c: 0x0  nop
    ctx->pc = 0x17691cu;
    // NOP
label_176920:
    // 0x176920: 0x86060042  lh          $a2, 0x42($s0)
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_176924:
    // 0x176924: 0xc05cf3e  jal         func_173CF8
label_176928:
    if (ctx->pc == 0x176928u) {
        ctx->pc = 0x176928u;
            // 0x176928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17692Cu;
        goto label_17692c;
    }
    ctx->pc = 0x176924u;
    SET_GPR_U32(ctx, 31, 0x17692Cu);
    ctx->pc = 0x176928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176924u;
            // 0x176928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173CF8u;
    if (runtime->hasFunction(0x173CF8u)) {
        auto targetFn = runtime->lookupFunction(0x173CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17692Cu; }
        if (ctx->pc != 0x17692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173CF8_0x173cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17692Cu; }
        if (ctx->pc != 0x17692Cu) { return; }
    }
    ctx->pc = 0x17692Cu;
label_17692c:
    // 0x17692c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176930:
    // 0x176930: 0x84860044  lh          $a2, 0x44($a0)
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
label_176934:
    // 0x176934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176938:
    // 0x176938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17693c:
    // 0x17693c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17693cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176940:
    // 0x176940: 0x805cf3e  j           func_173CF8
label_176944:
    if (ctx->pc == 0x176944u) {
        ctx->pc = 0x176944u;
            // 0x176944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x176948u;
        goto label_176948;
    }
    ctx->pc = 0x176940u;
    ctx->pc = 0x176944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176940u;
            // 0x176944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173CF8u;
    if (runtime->hasFunction(0x173CF8u)) {
        auto targetFn = runtime->lookupFunction(0x173CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173CF8_0x173cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176948u;
label_176948:
    // 0x176948: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x176948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_17694c:
    // 0x17694c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x17694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_176950:
    // 0x176950: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x176950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176954:
    // 0x176954: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x176954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_176958:
    // 0x176958: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x176958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_17695c:
    // 0x17695c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x17695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_176960:
    // 0x176960: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x176960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_176964:
    // 0x176964: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x176964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_176968:
    // 0x176968: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x176968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_17696c:
    // 0x17696c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x17696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_176970:
    // 0x176970: 0x82820098  lb          $v0, 0x98($s4)
    ctx->pc = 0x176970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
label_176974:
    // 0x176974: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x176974u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_176978:
    // 0x176978: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_17697c:
    if (ctx->pc == 0x17697Cu) {
        ctx->pc = 0x17697Cu;
            // 0x17697c: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x176980u;
        goto label_176980;
    }
    ctx->pc = 0x176978u;
    {
        const bool branch_taken_0x176978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176978u;
            // 0x17697c: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176978) {
            ctx->pc = 0x176C2Cu;
            goto label_176c2c;
        }
    }
    ctx->pc = 0x176980u;
label_176980:
    // 0x176980: 0xc0599d2  jal         func_166748
label_176984:
    if (ctx->pc == 0x176984u) {
        ctx->pc = 0x176984u;
            // 0x176984: 0xa7a00042  sh          $zero, 0x42($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x176988u;
        goto label_176988;
    }
    ctx->pc = 0x176980u;
    SET_GPR_U32(ctx, 31, 0x176988u);
    ctx->pc = 0x176984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176980u;
            // 0x176984: 0xa7a00042  sh          $zero, 0x42($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176988u; }
        if (ctx->pc != 0x176988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176988u; }
        if (ctx->pc != 0x176988u) { return; }
    }
    ctx->pc = 0x176988u;
label_176988:
    // 0x176988: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17698c:
    // 0x17698c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x17698cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_176990:
    // 0x176990: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x176990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176994:
    // 0x176994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176998:
    // 0x176998: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17699c:
    // 0x17699c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1769a0:
    // 0x1769a0: 0x40f809  jalr        $v0
label_1769a4:
    if (ctx->pc == 0x1769A4u) {
        ctx->pc = 0x1769A4u;
            // 0x1769a4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1769A8u;
        goto label_1769a8;
    }
    ctx->pc = 0x1769A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1769A8u);
        ctx->pc = 0x1769A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769A0u;
            // 0x1769a4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1769A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1769A8u; }
            if (ctx->pc != 0x1769A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1769A8u;
label_1769a8:
    // 0x1769a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1769a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1769ac:
    // 0x1769ac: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1769acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1769b0:
    // 0x1769b0: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1769b4:
    // 0x1769b4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1769b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1769b8:
    // 0x1769b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1769b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1769bc:
    // 0x1769bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1769bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1769c0:
    // 0x1769c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1769c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1769c4:
    // 0x1769c4: 0x40f809  jalr        $v0
label_1769c8:
    if (ctx->pc == 0x1769C8u) {
        ctx->pc = 0x1769C8u;
            // 0x1769c8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1769CCu;
        goto label_1769cc;
    }
    ctx->pc = 0x1769C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1769CCu);
        ctx->pc = 0x1769C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769C4u;
            // 0x1769c8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1769CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1769CCu; }
            if (ctx->pc != 0x1769CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1769CCu;
label_1769cc:
    // 0x1769cc: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1769ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1769d0:
    // 0x1769d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1769d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1769d4:
    // 0x1769d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1769d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1769d8:
    // 0x1769d8: 0xc059ca2  jal         func_167288
label_1769dc:
    if (ctx->pc == 0x1769DCu) {
        ctx->pc = 0x1769DCu;
            // 0x1769dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1769E0u;
        goto label_1769e0;
    }
    ctx->pc = 0x1769D8u;
    SET_GPR_U32(ctx, 31, 0x1769E0u);
    ctx->pc = 0x1769DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1769D8u;
            // 0x1769dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167288u;
    if (runtime->hasFunction(0x167288u)) {
        auto targetFn = runtime->lookupFunction(0x167288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769E0u; }
        if (ctx->pc != 0x1769E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167288_0x167288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769E0u; }
        if (ctx->pc != 0x1769E0u) { return; }
    }
    ctx->pc = 0x1769E0u;
label_1769e0:
    // 0x1769e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1769e4:
    if (ctx->pc == 0x1769E4u) {
        ctx->pc = 0x1769E4u;
            // 0x1769e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1769E8u;
        goto label_1769e8;
    }
    ctx->pc = 0x1769E0u;
    {
        const bool branch_taken_0x1769e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1769E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769E0u;
            // 0x1769e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769e0) {
            ctx->pc = 0x176A30u;
            goto label_176a30;
        }
    }
    ctx->pc = 0x1769E8u;
label_1769e8:
    // 0x1769e8: 0xc05d5c0  jal         func_175700
label_1769ec:
    if (ctx->pc == 0x1769ECu) {
        ctx->pc = 0x1769ECu;
            // 0x1769ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1769F0u;
        goto label_1769f0;
    }
    ctx->pc = 0x1769E8u;
    SET_GPR_U32(ctx, 31, 0x1769F0u);
    ctx->pc = 0x1769ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1769E8u;
            // 0x1769ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769F0u; }
        if (ctx->pc != 0x1769F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175700_0x175700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769F0u; }
        if (ctx->pc != 0x1769F0u) { return; }
    }
    ctx->pc = 0x1769F0u;
label_1769f0:
    // 0x1769f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1769f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1769f4:
    // 0x1769f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1769f8:
    // 0x1769f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1769f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1769fc:
    // 0x1769fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1769fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176a00:
    // 0x176a00: 0x40f809  jalr        $v0
label_176a04:
    if (ctx->pc == 0x176A04u) {
        ctx->pc = 0x176A04u;
            // 0x176a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x176A08u;
        goto label_176a08;
    }
    ctx->pc = 0x176A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176A08u);
        ctx->pc = 0x176A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A00u;
            // 0x176a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176A08u; }
            if (ctx->pc != 0x176A08u) { return; }
        }
        }
    }
    ctx->pc = 0x176A08u;
label_176a08:
    // 0x176a08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176a0c:
    // 0x176a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176a10:
    // 0x176a10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176a14:
    // 0x176a14: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x176a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176a18:
    // 0x176a18: 0x40f809  jalr        $v0
label_176a1c:
    if (ctx->pc == 0x176A1Cu) {
        ctx->pc = 0x176A1Cu;
            // 0x176a1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176A20u;
        goto label_176a20;
    }
    ctx->pc = 0x176A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176A20u);
        ctx->pc = 0x176A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A18u;
            // 0x176a1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176A20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176A20u; }
            if (ctx->pc != 0x176A20u) { return; }
        }
        }
    }
    ctx->pc = 0x176A20u;
label_176a20:
    // 0x176a20: 0xc0599d8  jal         func_166760
label_176a24:
    if (ctx->pc == 0x176A24u) {
        ctx->pc = 0x176A28u;
        goto label_176a28;
    }
    ctx->pc = 0x176A20u;
    SET_GPR_U32(ctx, 31, 0x176A28u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A28u; }
        if (ctx->pc != 0x176A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A28u; }
        if (ctx->pc != 0x176A28u) { return; }
    }
    ctx->pc = 0x176A28u;
label_176a28:
    // 0x176a28: 0x10000081  b           . + 4 + (0x81 << 2)
label_176a2c:
    if (ctx->pc == 0x176A2Cu) {
        ctx->pc = 0x176A2Cu;
            // 0x176a2c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x176A30u;
        goto label_176a30;
    }
    ctx->pc = 0x176A28u;
    {
        const bool branch_taken_0x176a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A28u;
            // 0x176a2c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a28) {
            ctx->pc = 0x176C30u;
            goto label_176c30;
        }
    }
    ctx->pc = 0x176A30u;
label_176a30:
    // 0x176a30: 0x87b00040  lh          $s0, 0x40($sp)
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_176a34:
    // 0x176a34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x176a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176a38:
    // 0x176a38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_176a3c:
    // 0x176a3c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_176a40:
    // 0x176a40: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x176a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_176a44:
    // 0x176a44: 0xc059a3a  jal         func_1668E8
label_176a48:
    if (ctx->pc == 0x176A48u) {
        ctx->pc = 0x176A48u;
            // 0x176a48: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->pc = 0x176A4Cu;
        goto label_176a4c;
    }
    ctx->pc = 0x176A44u;
    SET_GPR_U32(ctx, 31, 0x176A4Cu);
    ctx->pc = 0x176A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A44u;
            // 0x176a48: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1668E8u;
    if (runtime->hasFunction(0x1668E8u)) {
        auto targetFn = runtime->lookupFunction(0x1668E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A4Cu; }
        if (ctx->pc != 0x176A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001668E8_0x1668e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A4Cu; }
        if (ctx->pc != 0x176A4Cu) { return; }
    }
    ctx->pc = 0x176A4Cu;
label_176a4c:
    // 0x176a4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x176a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176a50:
    // 0x176a50: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_176a54:
    if (ctx->pc == 0x176A54u) {
        ctx->pc = 0x176A54u;
            // 0x176a54: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x176A58u;
        goto label_176a58;
    }
    ctx->pc = 0x176A50u;
    {
        const bool branch_taken_0x176a50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A50u;
            // 0x176a54: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a50) {
            ctx->pc = 0x176A6Cu;
            goto label_176a6c;
        }
    }
    ctx->pc = 0x176A58u;
label_176a58:
    // 0x176a58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x176a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_176a5c:
    // 0x176a5c: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x176a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_176a60:
    // 0x176a60: 0xc059a3a  jal         func_1668E8
label_176a64:
    if (ctx->pc == 0x176A64u) {
        ctx->pc = 0x176A64u;
            // 0x176a64: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x176A68u;
        goto label_176a68;
    }
    ctx->pc = 0x176A60u;
    SET_GPR_U32(ctx, 31, 0x176A68u);
    ctx->pc = 0x176A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A60u;
            // 0x176a64: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1668E8u;
    if (runtime->hasFunction(0x1668E8u)) {
        auto targetFn = runtime->lookupFunction(0x1668E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A68u; }
        if (ctx->pc != 0x176A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001668E8_0x1668e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A68u; }
        if (ctx->pc != 0x176A68u) { return; }
    }
    ctx->pc = 0x176A68u;
label_176a68:
    // 0x176a68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x176a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176a6c:
    // 0x176a6c: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_176a70:
    // 0x176a70: 0x87b60042  lh          $s6, 0x42($sp)
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_176a74:
    // 0x176a74: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_176a78:
    if (ctx->pc == 0x176A78u) {
        ctx->pc = 0x176A78u;
            // 0x176a78: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x176A7Cu;
        goto label_176a7c;
    }
    ctx->pc = 0x176A74u;
    {
        const bool branch_taken_0x176a74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A74u;
            // 0x176a78: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a74) {
            ctx->pc = 0x176AD0u;
            goto label_176ad0;
        }
    }
    ctx->pc = 0x176A7Cu;
label_176a7c:
    // 0x176a7c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_176a80:
    if (ctx->pc == 0x176A80u) {
        ctx->pc = 0x176A80u;
            // 0x176a80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176A84u;
        goto label_176a84;
    }
    ctx->pc = 0x176A7Cu;
    {
        const bool branch_taken_0x176a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A7Cu;
            // 0x176a80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a7c) {
            ctx->pc = 0x176B38u;
            goto label_176b38;
        }
    }
    ctx->pc = 0x176A84u;
label_176a84:
    // 0x176a84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176a88:
    // 0x176a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176a8c:
    // 0x176a8c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176a90:
    // 0x176a90: 0x40f809  jalr        $v0
label_176a94:
    if (ctx->pc == 0x176A94u) {
        ctx->pc = 0x176A94u;
            // 0x176a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x176A98u;
        goto label_176a98;
    }
    ctx->pc = 0x176A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176A98u);
        ctx->pc = 0x176A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A90u;
            // 0x176a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176A98u; }
            if (ctx->pc != 0x176A98u) { return; }
        }
        }
    }
    ctx->pc = 0x176A98u;
label_176a98:
    // 0x176a98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176a9c:
    // 0x176a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176aa0:
    // 0x176aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176aa4:
    // 0x176aa4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x176aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176aa8:
    // 0x176aa8: 0x40f809  jalr        $v0
label_176aac:
    if (ctx->pc == 0x176AACu) {
        ctx->pc = 0x176AACu;
            // 0x176aac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176AB0u;
        goto label_176ab0;
    }
    ctx->pc = 0x176AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176AB0u);
        ctx->pc = 0x176AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176AA8u;
            // 0x176aac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176AB0u; }
            if (ctx->pc != 0x176AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x176AB0u;
label_176ab0:
    // 0x176ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x176ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_176ab4:
    // 0x176ab4: 0xc05d5c0  jal         func_175700
label_176ab8:
    if (ctx->pc == 0x176AB8u) {
        ctx->pc = 0x176AB8u;
            // 0x176ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176ABCu;
        goto label_176abc;
    }
    ctx->pc = 0x176AB4u;
    SET_GPR_U32(ctx, 31, 0x176ABCu);
    ctx->pc = 0x176AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AB4u;
            // 0x176ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ABCu; }
        if (ctx->pc != 0x176ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175700_0x175700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ABCu; }
        if (ctx->pc != 0x176ABCu) { return; }
    }
    ctx->pc = 0x176ABCu;
label_176abc:
    // 0x176abc: 0xc0599d8  jal         func_166760
label_176ac0:
    if (ctx->pc == 0x176AC0u) {
        ctx->pc = 0x176AC4u;
        goto label_176ac4;
    }
    ctx->pc = 0x176ABCu;
    SET_GPR_U32(ctx, 31, 0x176AC4u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AC4u; }
        if (ctx->pc != 0x176AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AC4u; }
        if (ctx->pc != 0x176AC4u) { return; }
    }
    ctx->pc = 0x176AC4u;
label_176ac4:
    // 0x176ac4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_176ac8:
    if (ctx->pc == 0x176AC8u) {
        ctx->pc = 0x176AC8u;
            // 0x176ac8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x176ACCu;
        goto label_176acc;
    }
    ctx->pc = 0x176AC4u;
    {
        const bool branch_taken_0x176ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176AC4u;
            // 0x176ac8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ac4) {
            ctx->pc = 0x176C30u;
            goto label_176c30;
        }
    }
    ctx->pc = 0x176ACCu;
label_176acc:
    // 0x176acc: 0x0  nop
    ctx->pc = 0x176accu;
    // NOP
label_176ad0:
    // 0x176ad0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176ad4:
    // 0x176ad4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x176ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_176ad8:
    // 0x176ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176adc:
    // 0x176adc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x176adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176ae0:
    // 0x176ae0: 0x40f809  jalr        $v0
label_176ae4:
    if (ctx->pc == 0x176AE4u) {
        ctx->pc = 0x176AE4u;
            // 0x176ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x176AE8u;
        goto label_176ae8;
    }
    ctx->pc = 0x176AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176AE8u);
        ctx->pc = 0x176AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176AE0u;
            // 0x176ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176AE8u; }
            if (ctx->pc != 0x176AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x176AE8u;
label_176ae8:
    // 0x176ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176aec:
    // 0x176aec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x176aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_176af0:
    // 0x176af0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x176af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176af4:
    // 0x176af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x176af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176af8:
    // 0x176af8: 0xc061c20  jal         func_187080
label_176afc:
    if (ctx->pc == 0x176AFCu) {
        ctx->pc = 0x176AFCu;
            // 0x176afc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176B00u;
        goto label_176b00;
    }
    ctx->pc = 0x176AF8u;
    SET_GPR_U32(ctx, 31, 0x176B00u);
    ctx->pc = 0x176AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AF8u;
            // 0x176afc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B00u; }
        if (ctx->pc != 0x176B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B00u; }
        if (ctx->pc != 0x176B00u) { return; }
    }
    ctx->pc = 0x176B00u;
label_176b00:
    // 0x176b00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176b04:
    // 0x176b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b08:
    // 0x176b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176b0c:
    // 0x176b0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x176b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_176b10:
    // 0x176b10: 0x40f809  jalr        $v0
label_176b14:
    if (ctx->pc == 0x176B14u) {
        ctx->pc = 0x176B14u;
            // 0x176b14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176B18u;
        goto label_176b18;
    }
    ctx->pc = 0x176B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176B18u);
        ctx->pc = 0x176B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B10u;
            // 0x176b14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176B18u; }
            if (ctx->pc != 0x176B18u) { return; }
        }
        }
    }
    ctx->pc = 0x176B18u;
label_176b18:
    // 0x176b18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176b1c:
    // 0x176b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b20:
    // 0x176b20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176b24:
    // 0x176b24: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x176b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176b28:
    // 0x176b28: 0x40f809  jalr        $v0
label_176b2c:
    if (ctx->pc == 0x176B2Cu) {
        ctx->pc = 0x176B2Cu;
            // 0x176b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x176B30u;
        goto label_176b30;
    }
    ctx->pc = 0x176B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176B30u);
        ctx->pc = 0x176B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B28u;
            // 0x176b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176B30u; }
            if (ctx->pc != 0x176B30u) { return; }
        }
        }
    }
    ctx->pc = 0x176B30u;
label_176b30:
    // 0x176b30: 0x10000019  b           . + 4 + (0x19 << 2)
label_176b34:
    if (ctx->pc == 0x176B34u) {
        ctx->pc = 0x176B38u;
        goto label_176b38;
    }
    ctx->pc = 0x176B30u;
    {
        const bool branch_taken_0x176b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176b30) {
            ctx->pc = 0x176B98u;
            goto label_176b98;
        }
    }
    ctx->pc = 0x176B38u;
label_176b38:
    // 0x176b38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176b3c:
    // 0x176b3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x176b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176b40:
    // 0x176b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b44:
    // 0x176b44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x176b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_176b48:
    // 0x176b48: 0x40f809  jalr        $v0
label_176b4c:
    if (ctx->pc == 0x176B4Cu) {
        ctx->pc = 0x176B4Cu;
            // 0x176b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176B50u;
        goto label_176b50;
    }
    ctx->pc = 0x176B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176B50u);
        ctx->pc = 0x176B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B48u;
            // 0x176b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176B50u; }
            if (ctx->pc != 0x176B50u) { return; }
        }
        }
    }
    ctx->pc = 0x176B50u;
label_176b50:
    // 0x176b50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x176b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_176b54:
    // 0x176b54: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x176b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_176b58:
    // 0x176b58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x176b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_176b5c:
    // 0x176b5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x176b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_176b60:
    // 0x176b60: 0xc061c20  jal         func_187080
label_176b64:
    if (ctx->pc == 0x176B64u) {
        ctx->pc = 0x176B64u;
            // 0x176b64: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176B68u;
        goto label_176b68;
    }
    ctx->pc = 0x176B60u;
    SET_GPR_U32(ctx, 31, 0x176B68u);
    ctx->pc = 0x176B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B60u;
            // 0x176b64: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B68u; }
        if (ctx->pc != 0x176B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B68u; }
        if (ctx->pc != 0x176B68u) { return; }
    }
    ctx->pc = 0x176B68u;
label_176b68:
    // 0x176b68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176b6c:
    // 0x176b6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x176b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_176b70:
    // 0x176b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b74:
    // 0x176b74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x176b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_176b78:
    // 0x176b78: 0x40f809  jalr        $v0
label_176b7c:
    if (ctx->pc == 0x176B7Cu) {
        ctx->pc = 0x176B7Cu;
            // 0x176b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176B80u;
        goto label_176b80;
    }
    ctx->pc = 0x176B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176B80u);
        ctx->pc = 0x176B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B78u;
            // 0x176b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176B80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176B80u; }
            if (ctx->pc != 0x176B80u) { return; }
        }
        }
    }
    ctx->pc = 0x176B80u;
label_176b80:
    // 0x176b80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176b84:
    // 0x176b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b88:
    // 0x176b88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176b8c:
    // 0x176b8c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x176b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176b90:
    // 0x176b90: 0x40f809  jalr        $v0
label_176b94:
    if (ctx->pc == 0x176B94u) {
        ctx->pc = 0x176B94u;
            // 0x176b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x176B98u;
        goto label_176b98;
    }
    ctx->pc = 0x176B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176B98u);
        ctx->pc = 0x176B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B90u;
            // 0x176b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176B98u; }
            if (ctx->pc != 0x176B98u) { return; }
        }
        }
    }
    ctx->pc = 0x176B98u;
label_176b98:
    // 0x176b98: 0xc0599d8  jal         func_166760
label_176b9c:
    if (ctx->pc == 0x176B9Cu) {
        ctx->pc = 0x176BA0u;
        goto label_176ba0;
    }
    ctx->pc = 0x176B98u;
    SET_GPR_U32(ctx, 31, 0x176BA0u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BA0u; }
        if (ctx->pc != 0x176BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BA0u; }
        if (ctx->pc != 0x176BA0u) { return; }
    }
    ctx->pc = 0x176BA0u;
label_176ba0:
    // 0x176ba0: 0xc05bfe0  jal         func_16FF80
label_176ba4:
    if (ctx->pc == 0x176BA4u) {
        ctx->pc = 0x176BA4u;
            // 0x176ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176BA8u;
        goto label_176ba8;
    }
    ctx->pc = 0x176BA0u;
    SET_GPR_U32(ctx, 31, 0x176BA8u);
    ctx->pc = 0x176BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BA0u;
            // 0x176ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF80u;
    if (runtime->hasFunction(0x16FF80u)) {
        auto targetFn = runtime->lookupFunction(0x16FF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BA8u; }
        if (ctx->pc != 0x176BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FF80_0x16ff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BA8u; }
        if (ctx->pc != 0x176BA8u) { return; }
    }
    ctx->pc = 0x176BA8u;
label_176ba8:
    // 0x176ba8: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x176ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_176bac:
    // 0x176bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176bb0:
    // 0x176bb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_176bb4:
    // 0x176bb4: 0xc05bc0e  jal         func_16F038
label_176bb8:
    if (ctx->pc == 0x176BB8u) {
        ctx->pc = 0x176BB8u;
            // 0x176bb8: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x176BBCu;
        goto label_176bbc;
    }
    ctx->pc = 0x176BB4u;
    SET_GPR_U32(ctx, 31, 0x176BBCu);
    ctx->pc = 0x176BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BB4u;
            // 0x176bb8: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F038u;
    if (runtime->hasFunction(0x16F038u)) {
        auto targetFn = runtime->lookupFunction(0x16F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BBCu; }
        if (ctx->pc != 0x176BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F038_0x16f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BBCu; }
        if (ctx->pc != 0x176BBCu) { return; }
    }
    ctx->pc = 0x176BBCu;
label_176bbc:
    // 0x176bbc: 0xc05bc02  jal         func_16F008
label_176bc0:
    if (ctx->pc == 0x176BC0u) {
        ctx->pc = 0x176BC0u;
            // 0x176bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176BC4u;
        goto label_176bc4;
    }
    ctx->pc = 0x176BBCu;
    SET_GPR_U32(ctx, 31, 0x176BC4u);
    ctx->pc = 0x176BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BBCu;
            // 0x176bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F008u;
    if (runtime->hasFunction(0x16F008u)) {
        auto targetFn = runtime->lookupFunction(0x16F008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BC4u; }
        if (ctx->pc != 0x176BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F008_0x16f008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BC4u; }
        if (ctx->pc != 0x176BC4u) { return; }
    }
    ctx->pc = 0x176BC4u;
label_176bc4:
    // 0x176bc4: 0xc05bee2  jal         func_16FB88
label_176bc8:
    if (ctx->pc == 0x176BC8u) {
        ctx->pc = 0x176BC8u;
            // 0x176bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176BCCu;
        goto label_176bcc;
    }
    ctx->pc = 0x176BC4u;
    SET_GPR_U32(ctx, 31, 0x176BCCu);
    ctx->pc = 0x176BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BC4u;
            // 0x176bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FB88u;
    if (runtime->hasFunction(0x16FB88u)) {
        auto targetFn = runtime->lookupFunction(0x16FB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BCCu; }
        if (ctx->pc != 0x176BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FB88_0x16fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BCCu; }
        if (ctx->pc != 0x176BCCu) { return; }
    }
    ctx->pc = 0x176BCCu;
label_176bcc:
    // 0x176bcc: 0xc05bbd0  jal         func_16EF40
label_176bd0:
    if (ctx->pc == 0x176BD0u) {
        ctx->pc = 0x176BD0u;
            // 0x176bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176BD4u;
        goto label_176bd4;
    }
    ctx->pc = 0x176BCCu;
    SET_GPR_U32(ctx, 31, 0x176BD4u);
    ctx->pc = 0x176BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BCCu;
            // 0x176bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BD4u; }
        if (ctx->pc != 0x176BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BD4u; }
        if (ctx->pc != 0x176BD4u) { return; }
    }
    ctx->pc = 0x176BD4u;
label_176bd4:
    // 0x176bd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176bd8:
    // 0x176bd8: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_176bdc:
    if (ctx->pc == 0x176BDCu) {
        ctx->pc = 0x176BDCu;
            // 0x176bdc: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->pc = 0x176BE0u;
        goto label_176be0;
    }
    ctx->pc = 0x176BD8u;
    {
        const bool branch_taken_0x176bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x176bd8) {
            ctx->pc = 0x176BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176BD8u;
            // 0x176bdc: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176BF8u;
            goto label_176bf8;
        }
    }
    ctx->pc = 0x176BE0u;
label_176be0:
    // 0x176be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x176be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_176be4:
    // 0x176be4: 0xc05d5c0  jal         func_175700
label_176be8:
    if (ctx->pc == 0x176BE8u) {
        ctx->pc = 0x176BE8u;
            // 0x176be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176BECu;
        goto label_176bec;
    }
    ctx->pc = 0x176BE4u;
    SET_GPR_U32(ctx, 31, 0x176BECu);
    ctx->pc = 0x176BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BE4u;
            // 0x176be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BECu; }
        if (ctx->pc != 0x176BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175700_0x175700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BECu; }
        if (ctx->pc != 0x176BECu) { return; }
    }
    ctx->pc = 0x176BECu;
label_176bec:
    // 0x176bec: 0x10000010  b           . + 4 + (0x10 << 2)
label_176bf0:
    if (ctx->pc == 0x176BF0u) {
        ctx->pc = 0x176BF0u;
            // 0x176bf0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x176BF4u;
        goto label_176bf4;
    }
    ctx->pc = 0x176BECu;
    {
        const bool branch_taken_0x176bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BECu;
            // 0x176bf0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bec) {
            ctx->pc = 0x176C30u;
            goto label_176c30;
        }
    }
    ctx->pc = 0x176BF4u;
label_176bf4:
    // 0x176bf4: 0x0  nop
    ctx->pc = 0x176bf4u;
    // NOP
label_176bf8:
    // 0x176bf8: 0xc05bbe6  jal         func_16EF98
label_176bfc:
    if (ctx->pc == 0x176BFCu) {
        ctx->pc = 0x176BFCu;
            // 0x176bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176C00u;
        goto label_176c00;
    }
    ctx->pc = 0x176BF8u;
    SET_GPR_U32(ctx, 31, 0x176C00u);
    ctx->pc = 0x176BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BF8u;
            // 0x176bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF98u;
    if (runtime->hasFunction(0x16EF98u)) {
        auto targetFn = runtime->lookupFunction(0x16EF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C00u; }
        if (ctx->pc != 0x176C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF98_0x16ef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C00u; }
        if (ctx->pc != 0x176C00u) { return; }
    }
    ctx->pc = 0x176C00u;
label_176c00:
    // 0x176c00: 0xc05c064  jal         func_170190
label_176c04:
    if (ctx->pc == 0x176C04u) {
        ctx->pc = 0x176C04u;
            // 0x176c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176C08u;
        goto label_176c08;
    }
    ctx->pc = 0x176C00u;
    SET_GPR_U32(ctx, 31, 0x176C08u);
    ctx->pc = 0x176C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C00u;
            // 0x176c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C08u; }
        if (ctx->pc != 0x176C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C08u; }
        if (ctx->pc != 0x176C08u) { return; }
    }
    ctx->pc = 0x176C08u;
label_176c08:
    // 0x176c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176c0c:
    // 0x176c0c: 0xc05c034  jal         func_1700D0
label_176c10:
    if (ctx->pc == 0x176C10u) {
        ctx->pc = 0x176C10u;
            // 0x176c10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176C14u;
        goto label_176c14;
    }
    ctx->pc = 0x176C0Cu;
    SET_GPR_U32(ctx, 31, 0x176C14u);
    ctx->pc = 0x176C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C0Cu;
            // 0x176c10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C14u; }
        if (ctx->pc != 0x176C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C14u; }
        if (ctx->pc != 0x176C14u) { return; }
    }
    ctx->pc = 0x176C14u;
label_176c14:
    // 0x176c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176c18:
    // 0x176c18: 0xc05c03c  jal         func_1700F0
label_176c1c:
    if (ctx->pc == 0x176C1Cu) {
        ctx->pc = 0x176C1Cu;
            // 0x176c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176C20u;
        goto label_176c20;
    }
    ctx->pc = 0x176C18u;
    SET_GPR_U32(ctx, 31, 0x176C20u);
    ctx->pc = 0x176C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C18u;
            // 0x176c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700F0u;
    if (runtime->hasFunction(0x1700F0u)) {
        auto targetFn = runtime->lookupFunction(0x1700F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C20u; }
        if (ctx->pc != 0x176C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700F0_0x1700f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C20u; }
        if (ctx->pc != 0x176C20u) { return; }
    }
    ctx->pc = 0x176C20u;
label_176c20:
    // 0x176c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176c24:
    // 0x176c24: 0xc05c038  jal         func_1700E0
label_176c28:
    if (ctx->pc == 0x176C28u) {
        ctx->pc = 0x176C28u;
            // 0x176c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176C2Cu;
        goto label_176c2c;
    }
    ctx->pc = 0x176C24u;
    SET_GPR_U32(ctx, 31, 0x176C2Cu);
    ctx->pc = 0x176C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C24u;
            // 0x176c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700E0u;
    if (runtime->hasFunction(0x1700E0u)) {
        auto targetFn = runtime->lookupFunction(0x1700E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C2Cu; }
        if (ctx->pc != 0x176C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700E0_0x1700e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C2Cu; }
        if (ctx->pc != 0x176C2Cu) { return; }
    }
    ctx->pc = 0x176C2Cu;
label_176c2c:
    // 0x176c2c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x176c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_176c30:
    // 0x176c30: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x176c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_176c34:
    // 0x176c34: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x176c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_176c38:
    // 0x176c38: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x176c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_176c3c:
    // 0x176c3c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x176c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_176c40:
    // 0x176c40: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x176c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_176c44:
    // 0x176c44: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x176c44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_176c48:
    // 0x176c48: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x176c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_176c4c:
    // 0x176c4c: 0x3e00008  jr          $ra
label_176c50:
    if (ctx->pc == 0x176C50u) {
        ctx->pc = 0x176C50u;
            // 0x176c50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x176C54u;
        goto label_176c54;
    }
    ctx->pc = 0x176C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C4Cu;
            // 0x176c50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176C54u;
label_176c54:
    // 0x176c54: 0x0  nop
    ctx->pc = 0x176c54u;
    // NOP
}
