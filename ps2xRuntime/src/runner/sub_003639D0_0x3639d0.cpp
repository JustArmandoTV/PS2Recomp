#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003639D0
// Address: 0x3639d0 - 0x363ca0
void sub_003639D0_0x3639d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003639D0_0x3639d0");
#endif

    switch (ctx->pc) {
        case 0x3639d0u: goto label_3639d0;
        case 0x3639d4u: goto label_3639d4;
        case 0x3639d8u: goto label_3639d8;
        case 0x3639dcu: goto label_3639dc;
        case 0x3639e0u: goto label_3639e0;
        case 0x3639e4u: goto label_3639e4;
        case 0x3639e8u: goto label_3639e8;
        case 0x3639ecu: goto label_3639ec;
        case 0x3639f0u: goto label_3639f0;
        case 0x3639f4u: goto label_3639f4;
        case 0x3639f8u: goto label_3639f8;
        case 0x3639fcu: goto label_3639fc;
        case 0x363a00u: goto label_363a00;
        case 0x363a04u: goto label_363a04;
        case 0x363a08u: goto label_363a08;
        case 0x363a0cu: goto label_363a0c;
        case 0x363a10u: goto label_363a10;
        case 0x363a14u: goto label_363a14;
        case 0x363a18u: goto label_363a18;
        case 0x363a1cu: goto label_363a1c;
        case 0x363a20u: goto label_363a20;
        case 0x363a24u: goto label_363a24;
        case 0x363a28u: goto label_363a28;
        case 0x363a2cu: goto label_363a2c;
        case 0x363a30u: goto label_363a30;
        case 0x363a34u: goto label_363a34;
        case 0x363a38u: goto label_363a38;
        case 0x363a3cu: goto label_363a3c;
        case 0x363a40u: goto label_363a40;
        case 0x363a44u: goto label_363a44;
        case 0x363a48u: goto label_363a48;
        case 0x363a4cu: goto label_363a4c;
        case 0x363a50u: goto label_363a50;
        case 0x363a54u: goto label_363a54;
        case 0x363a58u: goto label_363a58;
        case 0x363a5cu: goto label_363a5c;
        case 0x363a60u: goto label_363a60;
        case 0x363a64u: goto label_363a64;
        case 0x363a68u: goto label_363a68;
        case 0x363a6cu: goto label_363a6c;
        case 0x363a70u: goto label_363a70;
        case 0x363a74u: goto label_363a74;
        case 0x363a78u: goto label_363a78;
        case 0x363a7cu: goto label_363a7c;
        case 0x363a80u: goto label_363a80;
        case 0x363a84u: goto label_363a84;
        case 0x363a88u: goto label_363a88;
        case 0x363a8cu: goto label_363a8c;
        case 0x363a90u: goto label_363a90;
        case 0x363a94u: goto label_363a94;
        case 0x363a98u: goto label_363a98;
        case 0x363a9cu: goto label_363a9c;
        case 0x363aa0u: goto label_363aa0;
        case 0x363aa4u: goto label_363aa4;
        case 0x363aa8u: goto label_363aa8;
        case 0x363aacu: goto label_363aac;
        case 0x363ab0u: goto label_363ab0;
        case 0x363ab4u: goto label_363ab4;
        case 0x363ab8u: goto label_363ab8;
        case 0x363abcu: goto label_363abc;
        case 0x363ac0u: goto label_363ac0;
        case 0x363ac4u: goto label_363ac4;
        case 0x363ac8u: goto label_363ac8;
        case 0x363accu: goto label_363acc;
        case 0x363ad0u: goto label_363ad0;
        case 0x363ad4u: goto label_363ad4;
        case 0x363ad8u: goto label_363ad8;
        case 0x363adcu: goto label_363adc;
        case 0x363ae0u: goto label_363ae0;
        case 0x363ae4u: goto label_363ae4;
        case 0x363ae8u: goto label_363ae8;
        case 0x363aecu: goto label_363aec;
        case 0x363af0u: goto label_363af0;
        case 0x363af4u: goto label_363af4;
        case 0x363af8u: goto label_363af8;
        case 0x363afcu: goto label_363afc;
        case 0x363b00u: goto label_363b00;
        case 0x363b04u: goto label_363b04;
        case 0x363b08u: goto label_363b08;
        case 0x363b0cu: goto label_363b0c;
        case 0x363b10u: goto label_363b10;
        case 0x363b14u: goto label_363b14;
        case 0x363b18u: goto label_363b18;
        case 0x363b1cu: goto label_363b1c;
        case 0x363b20u: goto label_363b20;
        case 0x363b24u: goto label_363b24;
        case 0x363b28u: goto label_363b28;
        case 0x363b2cu: goto label_363b2c;
        case 0x363b30u: goto label_363b30;
        case 0x363b34u: goto label_363b34;
        case 0x363b38u: goto label_363b38;
        case 0x363b3cu: goto label_363b3c;
        case 0x363b40u: goto label_363b40;
        case 0x363b44u: goto label_363b44;
        case 0x363b48u: goto label_363b48;
        case 0x363b4cu: goto label_363b4c;
        case 0x363b50u: goto label_363b50;
        case 0x363b54u: goto label_363b54;
        case 0x363b58u: goto label_363b58;
        case 0x363b5cu: goto label_363b5c;
        case 0x363b60u: goto label_363b60;
        case 0x363b64u: goto label_363b64;
        case 0x363b68u: goto label_363b68;
        case 0x363b6cu: goto label_363b6c;
        case 0x363b70u: goto label_363b70;
        case 0x363b74u: goto label_363b74;
        case 0x363b78u: goto label_363b78;
        case 0x363b7cu: goto label_363b7c;
        case 0x363b80u: goto label_363b80;
        case 0x363b84u: goto label_363b84;
        case 0x363b88u: goto label_363b88;
        case 0x363b8cu: goto label_363b8c;
        case 0x363b90u: goto label_363b90;
        case 0x363b94u: goto label_363b94;
        case 0x363b98u: goto label_363b98;
        case 0x363b9cu: goto label_363b9c;
        case 0x363ba0u: goto label_363ba0;
        case 0x363ba4u: goto label_363ba4;
        case 0x363ba8u: goto label_363ba8;
        case 0x363bacu: goto label_363bac;
        case 0x363bb0u: goto label_363bb0;
        case 0x363bb4u: goto label_363bb4;
        case 0x363bb8u: goto label_363bb8;
        case 0x363bbcu: goto label_363bbc;
        case 0x363bc0u: goto label_363bc0;
        case 0x363bc4u: goto label_363bc4;
        case 0x363bc8u: goto label_363bc8;
        case 0x363bccu: goto label_363bcc;
        case 0x363bd0u: goto label_363bd0;
        case 0x363bd4u: goto label_363bd4;
        case 0x363bd8u: goto label_363bd8;
        case 0x363bdcu: goto label_363bdc;
        case 0x363be0u: goto label_363be0;
        case 0x363be4u: goto label_363be4;
        case 0x363be8u: goto label_363be8;
        case 0x363becu: goto label_363bec;
        case 0x363bf0u: goto label_363bf0;
        case 0x363bf4u: goto label_363bf4;
        case 0x363bf8u: goto label_363bf8;
        case 0x363bfcu: goto label_363bfc;
        case 0x363c00u: goto label_363c00;
        case 0x363c04u: goto label_363c04;
        case 0x363c08u: goto label_363c08;
        case 0x363c0cu: goto label_363c0c;
        case 0x363c10u: goto label_363c10;
        case 0x363c14u: goto label_363c14;
        case 0x363c18u: goto label_363c18;
        case 0x363c1cu: goto label_363c1c;
        case 0x363c20u: goto label_363c20;
        case 0x363c24u: goto label_363c24;
        case 0x363c28u: goto label_363c28;
        case 0x363c2cu: goto label_363c2c;
        case 0x363c30u: goto label_363c30;
        case 0x363c34u: goto label_363c34;
        case 0x363c38u: goto label_363c38;
        case 0x363c3cu: goto label_363c3c;
        case 0x363c40u: goto label_363c40;
        case 0x363c44u: goto label_363c44;
        case 0x363c48u: goto label_363c48;
        case 0x363c4cu: goto label_363c4c;
        case 0x363c50u: goto label_363c50;
        case 0x363c54u: goto label_363c54;
        case 0x363c58u: goto label_363c58;
        case 0x363c5cu: goto label_363c5c;
        case 0x363c60u: goto label_363c60;
        case 0x363c64u: goto label_363c64;
        case 0x363c68u: goto label_363c68;
        case 0x363c6cu: goto label_363c6c;
        case 0x363c70u: goto label_363c70;
        case 0x363c74u: goto label_363c74;
        case 0x363c78u: goto label_363c78;
        case 0x363c7cu: goto label_363c7c;
        case 0x363c80u: goto label_363c80;
        case 0x363c84u: goto label_363c84;
        case 0x363c88u: goto label_363c88;
        case 0x363c8cu: goto label_363c8c;
        case 0x363c90u: goto label_363c90;
        case 0x363c94u: goto label_363c94;
        case 0x363c98u: goto label_363c98;
        case 0x363c9cu: goto label_363c9c;
        default: break;
    }

    ctx->pc = 0x3639d0u;

label_3639d0:
    // 0x3639d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3639d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3639d4:
    // 0x3639d4: 0x3c02c2f1  lui         $v0, 0xC2F1
    ctx->pc = 0x3639d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49905 << 16));
label_3639d8:
    // 0x3639d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3639d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3639dc:
    // 0x3639dc: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x3639dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_3639e0:
    // 0x3639e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3639e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3639e4:
    // 0x3639e4: 0x3c024312  lui         $v0, 0x4312
    ctx->pc = 0x3639e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17170 << 16));
label_3639e8:
    // 0x3639e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3639e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3639ec:
    // 0x3639ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3639ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3639f0:
    // 0x3639f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3639f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3639f4:
    // 0x3639f4: 0x3c02c38b  lui         $v0, 0xC38B
    ctx->pc = 0x3639f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50059 << 16));
label_3639f8:
    // 0x3639f8: 0x8c870074  lw          $a3, 0x74($a0)
    ctx->pc = 0x3639f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3639fc:
    // 0x3639fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3639fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363a00:
    // 0x363a00: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x363a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_363a04:
    // 0x363a04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x363a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_363a08:
    // 0x363a08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x363a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_363a0c:
    // 0x363a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x363a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363a10:
    // 0x363a10: 0x8cf00550  lw          $s0, 0x550($a3)
    ctx->pc = 0x363a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1360)));
label_363a14:
    // 0x363a14: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x363a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_363a18:
    // 0x363a18: 0x8ce30d74  lw          $v1, 0xD74($a3)
    ctx->pc = 0x363a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3444)));
label_363a1c:
    // 0x363a1c: 0xac6602b0  sw          $a2, 0x2B0($v1)
    ctx->pc = 0x363a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 6));
label_363a20:
    // 0x363a20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x363a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_363a24:
    // 0x363a24: 0xac450db8  sw          $a1, 0xDB8($v0)
    ctx->pc = 0x363a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3512), GPR_U32(ctx, 5));
label_363a28:
    // 0x363a28: 0xc04cbd8  jal         func_132F60
label_363a2c:
    if (ctx->pc == 0x363A2Cu) {
        ctx->pc = 0x363A2Cu;
            // 0x363a2c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x363A30u;
        goto label_363a30;
    }
    ctx->pc = 0x363A28u;
    SET_GPR_U32(ctx, 31, 0x363A30u);
    ctx->pc = 0x363A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363A28u;
            // 0x363a2c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A30u; }
        if (ctx->pc != 0x363A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A30u; }
        if (ctx->pc != 0x363A30u) { return; }
    }
    ctx->pc = 0x363A30u;
label_363a30:
    // 0x363a30: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363a34:
    // 0x363a34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x363a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_363a38:
    // 0x363a38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x363a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363a3c:
    // 0x363a3c: 0xc04cc90  jal         func_133240
label_363a40:
    if (ctx->pc == 0x363A40u) {
        ctx->pc = 0x363A40u;
            // 0x363a40: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x363A44u;
        goto label_363a44;
    }
    ctx->pc = 0x363A3Cu;
    SET_GPR_U32(ctx, 31, 0x363A44u);
    ctx->pc = 0x363A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363A3Cu;
            // 0x363a40: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A44u; }
        if (ctx->pc != 0x363A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A44u; }
        if (ctx->pc != 0x363A44u) { return; }
    }
    ctx->pc = 0x363A44u;
label_363a44:
    // 0x363a44: 0xc04cc14  jal         func_133050
label_363a48:
    if (ctx->pc == 0x363A48u) {
        ctx->pc = 0x363A48u;
            // 0x363a48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x363A4Cu;
        goto label_363a4c;
    }
    ctx->pc = 0x363A44u;
    SET_GPR_U32(ctx, 31, 0x363A4Cu);
    ctx->pc = 0x363A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363A44u;
            // 0x363a48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A4Cu; }
        if (ctx->pc != 0x363A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A4Cu; }
        if (ctx->pc != 0x363A4Cu) { return; }
    }
    ctx->pc = 0x363A4Cu;
label_363a4c:
    // 0x363a4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x363a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_363a50:
    // 0x363a50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363a50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_363a54:
    // 0x363a54: 0xc04cc44  jal         func_133110
label_363a58:
    if (ctx->pc == 0x363A58u) {
        ctx->pc = 0x363A58u;
            // 0x363a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363A5Cu;
        goto label_363a5c;
    }
    ctx->pc = 0x363A54u;
    SET_GPR_U32(ctx, 31, 0x363A5Cu);
    ctx->pc = 0x363A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363A54u;
            // 0x363a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A5Cu; }
        if (ctx->pc != 0x363A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A5Cu; }
        if (ctx->pc != 0x363A5Cu) { return; }
    }
    ctx->pc = 0x363A5Cu;
label_363a5c:
    // 0x363a5c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363a60:
    // 0x363a60: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x363a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_363a64:
    // 0x363a64: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x363a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_363a68:
    // 0x363a68: 0xc04cc70  jal         func_1331C0
label_363a6c:
    if (ctx->pc == 0x363A6Cu) {
        ctx->pc = 0x363A6Cu;
            // 0x363a6c: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->pc = 0x363A70u;
        goto label_363a70;
    }
    ctx->pc = 0x363A68u;
    SET_GPR_U32(ctx, 31, 0x363A70u);
    ctx->pc = 0x363A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363A68u;
            // 0x363a6c: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A70u; }
        if (ctx->pc != 0x363A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A70u; }
        if (ctx->pc != 0x363A70u) { return; }
    }
    ctx->pc = 0x363A70u;
label_363a70:
    // 0x363a70: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363a74:
    // 0x363a74: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x363a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_363a78:
    // 0x363a78: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x363a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_363a7c:
    // 0x363a7c: 0xc04cc04  jal         func_133010
label_363a80:
    if (ctx->pc == 0x363A80u) {
        ctx->pc = 0x363A80u;
            // 0x363a80: 0x24440340  addiu       $a0, $v0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
        ctx->pc = 0x363A84u;
        goto label_363a84;
    }
    ctx->pc = 0x363A7Cu;
    SET_GPR_U32(ctx, 31, 0x363A84u);
    ctx->pc = 0x363A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363A7Cu;
            // 0x363a80: 0x24440340  addiu       $a0, $v0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A84u; }
        if (ctx->pc != 0x363A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363A84u; }
        if (ctx->pc != 0x363A84u) { return; }
    }
    ctx->pc = 0x363A84u;
label_363a84:
    // 0x363a84: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x363a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363a88:
    // 0x363a88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x363a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_363a8c:
    // 0x363a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x363a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_363a90:
    // 0x363a90: 0x0  nop
    ctx->pc = 0x363a90u;
    // NOP
label_363a94:
    // 0x363a94: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x363a94u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
label_363a98:
    // 0x363a98: 0x0  nop
    ctx->pc = 0x363a98u;
    // NOP
label_363a9c:
    // 0x363a9c: 0x0  nop
    ctx->pc = 0x363a9cu;
    // NOP
label_363aa0:
    // 0x363aa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x363aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363aa4:
    // 0x363aa4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_363aa8:
    if (ctx->pc == 0x363AA8u) {
        ctx->pc = 0x363AA8u;
            // 0x363aa8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x363AACu;
        goto label_363aac;
    }
    ctx->pc = 0x363AA4u;
    {
        const bool branch_taken_0x363aa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363aa4) {
            ctx->pc = 0x363AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x363AA4u;
            // 0x363aa8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x363ABCu;
            goto label_363abc;
        }
    }
    ctx->pc = 0x363AACu;
label_363aac:
    // 0x363aac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x363aacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_363ab0:
    // 0x363ab0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x363ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_363ab4:
    // 0x363ab4: 0x10000006  b           . + 4 + (0x6 << 2)
label_363ab8:
    if (ctx->pc == 0x363AB8u) {
        ctx->pc = 0x363ABCu;
        goto label_363abc;
    }
    ctx->pc = 0x363AB4u;
    {
        const bool branch_taken_0x363ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363ab4) {
            ctx->pc = 0x363AD0u;
            goto label_363ad0;
        }
    }
    ctx->pc = 0x363ABCu;
label_363abc:
    // 0x363abc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x363abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_363ac0:
    // 0x363ac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x363ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_363ac4:
    // 0x363ac4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x363ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_363ac8:
    // 0x363ac8: 0x0  nop
    ctx->pc = 0x363ac8u;
    // NOP
label_363acc:
    // 0x363acc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x363accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_363ad0:
    // 0x363ad0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_363ad4:
    if (ctx->pc == 0x363AD4u) {
        ctx->pc = 0x363AD4u;
            // 0x363ad4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x363AD8u;
        goto label_363ad8;
    }
    ctx->pc = 0x363AD0u;
    {
        const bool branch_taken_0x363ad0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x363ad0) {
            ctx->pc = 0x363AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x363AD0u;
            // 0x363ad4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x363AE4u;
            goto label_363ae4;
        }
    }
    ctx->pc = 0x363AD8u;
label_363ad8:
    // 0x363ad8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x363ad8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_363adc:
    // 0x363adc: 0x10000007  b           . + 4 + (0x7 << 2)
label_363ae0:
    if (ctx->pc == 0x363AE0u) {
        ctx->pc = 0x363AE0u;
            // 0x363ae0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x363AE4u;
        goto label_363ae4;
    }
    ctx->pc = 0x363ADCu;
    {
        const bool branch_taken_0x363adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363ADCu;
            // 0x363ae0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363adc) {
            ctx->pc = 0x363AFCu;
            goto label_363afc;
        }
    }
    ctx->pc = 0x363AE4u;
label_363ae4:
    // 0x363ae4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x363ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_363ae8:
    // 0x363ae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x363ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_363aec:
    // 0x363aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_363af0:
    // 0x363af0: 0x0  nop
    ctx->pc = 0x363af0u;
    // NOP
label_363af4:
    // 0x363af4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x363af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_363af8:
    // 0x363af8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x363af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_363afc:
    // 0x363afc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x363afcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_363b00:
    // 0x363b00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x363b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_363b04:
    // 0x363b04: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x363b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_363b08:
    // 0x363b08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x363b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_363b0c:
    // 0x363b0c: 0xc04cbf0  jal         func_132FC0
label_363b10:
    if (ctx->pc == 0x363B10u) {
        ctx->pc = 0x363B10u;
            // 0x363b10: 0x24c64b40  addiu       $a2, $a2, 0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19264));
        ctx->pc = 0x363B14u;
        goto label_363b14;
    }
    ctx->pc = 0x363B0Cu;
    SET_GPR_U32(ctx, 31, 0x363B14u);
    ctx->pc = 0x363B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B0Cu;
            // 0x363b10: 0x24c64b40  addiu       $a2, $a2, 0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B14u; }
        if (ctx->pc != 0x363B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B14u; }
        if (ctx->pc != 0x363B14u) { return; }
    }
    ctx->pc = 0x363B14u;
label_363b14:
    // 0x363b14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x363b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_363b18:
    // 0x363b18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x363b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_363b1c:
    // 0x363b1c: 0xc04cbf0  jal         func_132FC0
label_363b20:
    if (ctx->pc == 0x363B20u) {
        ctx->pc = 0x363B20u;
            // 0x363b20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363B24u;
        goto label_363b24;
    }
    ctx->pc = 0x363B1Cu;
    SET_GPR_U32(ctx, 31, 0x363B24u);
    ctx->pc = 0x363B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B1Cu;
            // 0x363b20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B24u; }
        if (ctx->pc != 0x363B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B24u; }
        if (ctx->pc != 0x363B24u) { return; }
    }
    ctx->pc = 0x363B24u;
label_363b24:
    // 0x363b24: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b28:
    // 0x363b28: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x363b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_363b2c:
    // 0x363b2c: 0xc04cc04  jal         func_133010
label_363b30:
    if (ctx->pc == 0x363B30u) {
        ctx->pc = 0x363B30u;
            // 0x363b30: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->pc = 0x363B34u;
        goto label_363b34;
    }
    ctx->pc = 0x363B2Cu;
    SET_GPR_U32(ctx, 31, 0x363B34u);
    ctx->pc = 0x363B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B2Cu;
            // 0x363b30: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B34u; }
        if (ctx->pc != 0x363B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B34u; }
        if (ctx->pc != 0x363B34u) { return; }
    }
    ctx->pc = 0x363B34u;
label_363b34:
    // 0x363b34: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b38:
    // 0x363b38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x363b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_363b3c:
    // 0x363b3c: 0xc075318  jal         func_1D4C60
label_363b40:
    if (ctx->pc == 0x363B40u) {
        ctx->pc = 0x363B40u;
            // 0x363b40: 0x24440560  addiu       $a0, $v0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
        ctx->pc = 0x363B44u;
        goto label_363b44;
    }
    ctx->pc = 0x363B3Cu;
    SET_GPR_U32(ctx, 31, 0x363B44u);
    ctx->pc = 0x363B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B3Cu;
            // 0x363b40: 0x24440560  addiu       $a0, $v0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B44u; }
        if (ctx->pc != 0x363B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B44u; }
        if (ctx->pc != 0x363B44u) { return; }
    }
    ctx->pc = 0x363B44u;
label_363b44:
    // 0x363b44: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b48:
    // 0x363b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x363b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363b4c:
    // 0x363b4c: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x363b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_363b50:
    // 0x363b50: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x363b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_363b54:
    // 0x363b54: 0xc0c6250  jal         func_318940
label_363b58:
    if (ctx->pc == 0x363B58u) {
        ctx->pc = 0x363B58u;
            // 0x363b58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363B5Cu;
        goto label_363b5c;
    }
    ctx->pc = 0x363B54u;
    SET_GPR_U32(ctx, 31, 0x363B5Cu);
    ctx->pc = 0x363B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B54u;
            // 0x363b58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B5Cu; }
        if (ctx->pc != 0x363B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B5Cu; }
        if (ctx->pc != 0x363B5Cu) { return; }
    }
    ctx->pc = 0x363B5Cu;
label_363b5c:
    // 0x363b5c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b60:
    // 0x363b60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x363b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363b64:
    // 0x363b64: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x363b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_363b68:
    // 0x363b68: 0x244408f0  addiu       $a0, $v0, 0x8F0
    ctx->pc = 0x363b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
label_363b6c:
    // 0x363b6c: 0xc0c6250  jal         func_318940
label_363b70:
    if (ctx->pc == 0x363B70u) {
        ctx->pc = 0x363B70u;
            // 0x363b70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363B74u;
        goto label_363b74;
    }
    ctx->pc = 0x363B6Cu;
    SET_GPR_U32(ctx, 31, 0x363B74u);
    ctx->pc = 0x363B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B6Cu;
            // 0x363b70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B74u; }
        if (ctx->pc != 0x363B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B74u; }
        if (ctx->pc != 0x363B74u) { return; }
    }
    ctx->pc = 0x363B74u;
label_363b74:
    // 0x363b74: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b78:
    // 0x363b78: 0xc0b9210  jal         func_2E4840
label_363b7c:
    if (ctx->pc == 0x363B7Cu) {
        ctx->pc = 0x363B7Cu;
            // 0x363b7c: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x363B80u;
        goto label_363b80;
    }
    ctx->pc = 0x363B78u;
    SET_GPR_U32(ctx, 31, 0x363B80u);
    ctx->pc = 0x363B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B78u;
            // 0x363b7c: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B80u; }
        if (ctx->pc != 0x363B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B80u; }
        if (ctx->pc != 0x363B80u) { return; }
    }
    ctx->pc = 0x363B80u;
label_363b80:
    // 0x363b80: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b84:
    // 0x363b84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x363b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_363b88:
    // 0x363b88: 0x24440560  addiu       $a0, $v0, 0x560
    ctx->pc = 0x363b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_363b8c:
    // 0x363b8c: 0xc075378  jal         func_1D4DE0
label_363b90:
    if (ctx->pc == 0x363B90u) {
        ctx->pc = 0x363B90u;
            // 0x363b90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363B94u;
        goto label_363b94;
    }
    ctx->pc = 0x363B8Cu;
    SET_GPR_U32(ctx, 31, 0x363B94u);
    ctx->pc = 0x363B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363B8Cu;
            // 0x363b90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B94u; }
        if (ctx->pc != 0x363B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363B94u; }
        if (ctx->pc != 0x363B94u) { return; }
    }
    ctx->pc = 0x363B94u;
label_363b94:
    // 0x363b94: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363b98:
    // 0x363b98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_363b9c:
    // 0x363b9c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x363b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_363ba0:
    // 0x363ba0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363ba0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_363ba4:
    // 0x363ba4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x363ba4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_363ba8:
    // 0x363ba8: 0xc0c753c  jal         func_31D4F0
label_363bac:
    if (ctx->pc == 0x363BACu) {
        ctx->pc = 0x363BACu;
            // 0x363bac: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->pc = 0x363BB0u;
        goto label_363bb0;
    }
    ctx->pc = 0x363BA8u;
    SET_GPR_U32(ctx, 31, 0x363BB0u);
    ctx->pc = 0x363BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363BA8u;
            // 0x363bac: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363BB0u; }
        if (ctx->pc != 0x363BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363BB0u; }
        if (ctx->pc != 0x363BB0u) { return; }
    }
    ctx->pc = 0x363BB0u;
label_363bb0:
    // 0x363bb0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x363bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_363bb4:
    // 0x363bb4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x363bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_363bb8:
    // 0x363bb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363bb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_363bbc:
    // 0x363bbc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x363bbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_363bc0:
    // 0x363bc0: 0xc0c753c  jal         func_31D4F0
label_363bc4:
    if (ctx->pc == 0x363BC4u) {
        ctx->pc = 0x363BC4u;
            // 0x363bc4: 0x2444087c  addiu       $a0, $v0, 0x87C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
        ctx->pc = 0x363BC8u;
        goto label_363bc8;
    }
    ctx->pc = 0x363BC0u;
    SET_GPR_U32(ctx, 31, 0x363BC8u);
    ctx->pc = 0x363BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363BC0u;
            // 0x363bc4: 0x2444087c  addiu       $a0, $v0, 0x87C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363BC8u; }
        if (ctx->pc != 0x363BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363BC8u; }
        if (ctx->pc != 0x363BC8u) { return; }
    }
    ctx->pc = 0x363BC8u;
label_363bc8:
    // 0x363bc8: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x363bc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_363bcc:
    // 0x363bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363bd0:
    // 0x363bd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x363bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_363bd4:
    // 0x363bd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x363bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_363bd8:
    // 0x363bd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x363bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_363bdc:
    // 0x363bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363be0:
    // 0x363be0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x363be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_363be4:
    // 0x363be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363be8:
    // 0x363be8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x363be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_363bec:
    // 0x363bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_363bf0:
    // 0x363bf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x363bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_363bf4:
    // 0x363bf4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x363bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_363bf8:
    // 0x363bf8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x363bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_363bfc:
    // 0x363bfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x363bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363c00:
    // 0x363c00: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x363c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_363c04:
    // 0x363c04: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_363c08:
    // 0x363c08: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x363c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_363c0c:
    // 0x363c0c: 0x320f809  jalr        $t9
label_363c10:
    if (ctx->pc == 0x363C10u) {
        ctx->pc = 0x363C10u;
            // 0x363c10: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x363C14u;
        goto label_363c14;
    }
    ctx->pc = 0x363C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x363C14u);
        ctx->pc = 0x363C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363C0Cu;
            // 0x363c10: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x363C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x363C14u; }
            if (ctx->pc != 0x363C14u) { return; }
        }
        }
    }
    ctx->pc = 0x363C14u;
label_363c14:
    // 0x363c14: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x363c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_363c18:
    // 0x363c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363c1c:
    // 0x363c1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_363c20:
    // 0x363c20: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x363c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_363c24:
    // 0x363c24: 0x320f809  jalr        $t9
label_363c28:
    if (ctx->pc == 0x363C28u) {
        ctx->pc = 0x363C28u;
            // 0x363c28: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x363C2Cu;
        goto label_363c2c;
    }
    ctx->pc = 0x363C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x363C2Cu);
        ctx->pc = 0x363C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363C24u;
            // 0x363c28: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x363C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x363C2Cu; }
            if (ctx->pc != 0x363C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x363C2Cu;
label_363c2c:
    // 0x363c2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x363c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_363c30:
    // 0x363c30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x363c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_363c34:
    // 0x363c34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x363c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_363c38:
    // 0x363c38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x363c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_363c3c:
    // 0x363c3c: 0x3e00008  jr          $ra
label_363c40:
    if (ctx->pc == 0x363C40u) {
        ctx->pc = 0x363C40u;
            // 0x363c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x363C44u;
        goto label_363c44;
    }
    ctx->pc = 0x363C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363C3Cu;
            // 0x363c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x363C44u;
label_363c44:
    // 0x363c44: 0x0  nop
    ctx->pc = 0x363c44u;
    // NOP
label_363c48:
    // 0x363c48: 0x0  nop
    ctx->pc = 0x363c48u;
    // NOP
label_363c4c:
    // 0x363c4c: 0x0  nop
    ctx->pc = 0x363c4cu;
    // NOP
label_363c50:
    // 0x363c50: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x363c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_363c54:
    // 0x363c54: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_363c58:
    if (ctx->pc == 0x363C58u) {
        ctx->pc = 0x363C5Cu;
        goto label_363c5c;
    }
    ctx->pc = 0x363C54u;
    {
        const bool branch_taken_0x363c54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x363c54) {
            ctx->pc = 0x363C98u;
            goto label_363c98;
        }
    }
    ctx->pc = 0x363C5Cu;
label_363c5c:
    // 0x363c5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x363c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363c60:
    // 0x363c60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x363c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363c64:
    // 0x363c64: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x363c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_363c68:
    // 0x363c68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x363c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_363c6c:
    // 0x363c6c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x363c6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_363c70:
    // 0x363c70: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x363c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_363c74:
    // 0x363c74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x363c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_363c78:
    // 0x363c78: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x363c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_363c7c:
    // 0x363c7c: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x363c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
label_363c80:
    // 0x363c80: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x363c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
label_363c84:
    // 0x363c84: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x363c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
label_363c88:
    // 0x363c88: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x363c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
label_363c8c:
    // 0x363c8c: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x363c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
label_363c90:
    // 0x363c90: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_363c94:
    if (ctx->pc == 0x363C94u) {
        ctx->pc = 0x363C94u;
            // 0x363c94: 0xa0a00094  sb          $zero, 0x94($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 148), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x363C98u;
        goto label_363c98;
    }
    ctx->pc = 0x363C90u;
    {
        const bool branch_taken_0x363c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363C90u;
            // 0x363c94: 0xa0a00094  sb          $zero, 0x94($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 148), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c90) {
            ctx->pc = 0x363C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_363c64;
        }
    }
    ctx->pc = 0x363C98u;
label_363c98:
    // 0x363c98: 0x3e00008  jr          $ra
label_363c9c:
    if (ctx->pc == 0x363C9Cu) {
        ctx->pc = 0x363CA0u;
        goto label_fallthrough_0x363c98;
    }
    ctx->pc = 0x363C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x363c98:
    ctx->pc = 0x363CA0u;
}
