#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004099E0
// Address: 0x4099e0 - 0x409d20
void sub_004099E0_0x4099e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004099E0_0x4099e0");
#endif

    switch (ctx->pc) {
        case 0x4099e0u: goto label_4099e0;
        case 0x4099e4u: goto label_4099e4;
        case 0x4099e8u: goto label_4099e8;
        case 0x4099ecu: goto label_4099ec;
        case 0x4099f0u: goto label_4099f0;
        case 0x4099f4u: goto label_4099f4;
        case 0x4099f8u: goto label_4099f8;
        case 0x4099fcu: goto label_4099fc;
        case 0x409a00u: goto label_409a00;
        case 0x409a04u: goto label_409a04;
        case 0x409a08u: goto label_409a08;
        case 0x409a0cu: goto label_409a0c;
        case 0x409a10u: goto label_409a10;
        case 0x409a14u: goto label_409a14;
        case 0x409a18u: goto label_409a18;
        case 0x409a1cu: goto label_409a1c;
        case 0x409a20u: goto label_409a20;
        case 0x409a24u: goto label_409a24;
        case 0x409a28u: goto label_409a28;
        case 0x409a2cu: goto label_409a2c;
        case 0x409a30u: goto label_409a30;
        case 0x409a34u: goto label_409a34;
        case 0x409a38u: goto label_409a38;
        case 0x409a3cu: goto label_409a3c;
        case 0x409a40u: goto label_409a40;
        case 0x409a44u: goto label_409a44;
        case 0x409a48u: goto label_409a48;
        case 0x409a4cu: goto label_409a4c;
        case 0x409a50u: goto label_409a50;
        case 0x409a54u: goto label_409a54;
        case 0x409a58u: goto label_409a58;
        case 0x409a5cu: goto label_409a5c;
        case 0x409a60u: goto label_409a60;
        case 0x409a64u: goto label_409a64;
        case 0x409a68u: goto label_409a68;
        case 0x409a6cu: goto label_409a6c;
        case 0x409a70u: goto label_409a70;
        case 0x409a74u: goto label_409a74;
        case 0x409a78u: goto label_409a78;
        case 0x409a7cu: goto label_409a7c;
        case 0x409a80u: goto label_409a80;
        case 0x409a84u: goto label_409a84;
        case 0x409a88u: goto label_409a88;
        case 0x409a8cu: goto label_409a8c;
        case 0x409a90u: goto label_409a90;
        case 0x409a94u: goto label_409a94;
        case 0x409a98u: goto label_409a98;
        case 0x409a9cu: goto label_409a9c;
        case 0x409aa0u: goto label_409aa0;
        case 0x409aa4u: goto label_409aa4;
        case 0x409aa8u: goto label_409aa8;
        case 0x409aacu: goto label_409aac;
        case 0x409ab0u: goto label_409ab0;
        case 0x409ab4u: goto label_409ab4;
        case 0x409ab8u: goto label_409ab8;
        case 0x409abcu: goto label_409abc;
        case 0x409ac0u: goto label_409ac0;
        case 0x409ac4u: goto label_409ac4;
        case 0x409ac8u: goto label_409ac8;
        case 0x409accu: goto label_409acc;
        case 0x409ad0u: goto label_409ad0;
        case 0x409ad4u: goto label_409ad4;
        case 0x409ad8u: goto label_409ad8;
        case 0x409adcu: goto label_409adc;
        case 0x409ae0u: goto label_409ae0;
        case 0x409ae4u: goto label_409ae4;
        case 0x409ae8u: goto label_409ae8;
        case 0x409aecu: goto label_409aec;
        case 0x409af0u: goto label_409af0;
        case 0x409af4u: goto label_409af4;
        case 0x409af8u: goto label_409af8;
        case 0x409afcu: goto label_409afc;
        case 0x409b00u: goto label_409b00;
        case 0x409b04u: goto label_409b04;
        case 0x409b08u: goto label_409b08;
        case 0x409b0cu: goto label_409b0c;
        case 0x409b10u: goto label_409b10;
        case 0x409b14u: goto label_409b14;
        case 0x409b18u: goto label_409b18;
        case 0x409b1cu: goto label_409b1c;
        case 0x409b20u: goto label_409b20;
        case 0x409b24u: goto label_409b24;
        case 0x409b28u: goto label_409b28;
        case 0x409b2cu: goto label_409b2c;
        case 0x409b30u: goto label_409b30;
        case 0x409b34u: goto label_409b34;
        case 0x409b38u: goto label_409b38;
        case 0x409b3cu: goto label_409b3c;
        case 0x409b40u: goto label_409b40;
        case 0x409b44u: goto label_409b44;
        case 0x409b48u: goto label_409b48;
        case 0x409b4cu: goto label_409b4c;
        case 0x409b50u: goto label_409b50;
        case 0x409b54u: goto label_409b54;
        case 0x409b58u: goto label_409b58;
        case 0x409b5cu: goto label_409b5c;
        case 0x409b60u: goto label_409b60;
        case 0x409b64u: goto label_409b64;
        case 0x409b68u: goto label_409b68;
        case 0x409b6cu: goto label_409b6c;
        case 0x409b70u: goto label_409b70;
        case 0x409b74u: goto label_409b74;
        case 0x409b78u: goto label_409b78;
        case 0x409b7cu: goto label_409b7c;
        case 0x409b80u: goto label_409b80;
        case 0x409b84u: goto label_409b84;
        case 0x409b88u: goto label_409b88;
        case 0x409b8cu: goto label_409b8c;
        case 0x409b90u: goto label_409b90;
        case 0x409b94u: goto label_409b94;
        case 0x409b98u: goto label_409b98;
        case 0x409b9cu: goto label_409b9c;
        case 0x409ba0u: goto label_409ba0;
        case 0x409ba4u: goto label_409ba4;
        case 0x409ba8u: goto label_409ba8;
        case 0x409bacu: goto label_409bac;
        case 0x409bb0u: goto label_409bb0;
        case 0x409bb4u: goto label_409bb4;
        case 0x409bb8u: goto label_409bb8;
        case 0x409bbcu: goto label_409bbc;
        case 0x409bc0u: goto label_409bc0;
        case 0x409bc4u: goto label_409bc4;
        case 0x409bc8u: goto label_409bc8;
        case 0x409bccu: goto label_409bcc;
        case 0x409bd0u: goto label_409bd0;
        case 0x409bd4u: goto label_409bd4;
        case 0x409bd8u: goto label_409bd8;
        case 0x409bdcu: goto label_409bdc;
        case 0x409be0u: goto label_409be0;
        case 0x409be4u: goto label_409be4;
        case 0x409be8u: goto label_409be8;
        case 0x409becu: goto label_409bec;
        case 0x409bf0u: goto label_409bf0;
        case 0x409bf4u: goto label_409bf4;
        case 0x409bf8u: goto label_409bf8;
        case 0x409bfcu: goto label_409bfc;
        case 0x409c00u: goto label_409c00;
        case 0x409c04u: goto label_409c04;
        case 0x409c08u: goto label_409c08;
        case 0x409c0cu: goto label_409c0c;
        case 0x409c10u: goto label_409c10;
        case 0x409c14u: goto label_409c14;
        case 0x409c18u: goto label_409c18;
        case 0x409c1cu: goto label_409c1c;
        case 0x409c20u: goto label_409c20;
        case 0x409c24u: goto label_409c24;
        case 0x409c28u: goto label_409c28;
        case 0x409c2cu: goto label_409c2c;
        case 0x409c30u: goto label_409c30;
        case 0x409c34u: goto label_409c34;
        case 0x409c38u: goto label_409c38;
        case 0x409c3cu: goto label_409c3c;
        case 0x409c40u: goto label_409c40;
        case 0x409c44u: goto label_409c44;
        case 0x409c48u: goto label_409c48;
        case 0x409c4cu: goto label_409c4c;
        case 0x409c50u: goto label_409c50;
        case 0x409c54u: goto label_409c54;
        case 0x409c58u: goto label_409c58;
        case 0x409c5cu: goto label_409c5c;
        case 0x409c60u: goto label_409c60;
        case 0x409c64u: goto label_409c64;
        case 0x409c68u: goto label_409c68;
        case 0x409c6cu: goto label_409c6c;
        case 0x409c70u: goto label_409c70;
        case 0x409c74u: goto label_409c74;
        case 0x409c78u: goto label_409c78;
        case 0x409c7cu: goto label_409c7c;
        case 0x409c80u: goto label_409c80;
        case 0x409c84u: goto label_409c84;
        case 0x409c88u: goto label_409c88;
        case 0x409c8cu: goto label_409c8c;
        case 0x409c90u: goto label_409c90;
        case 0x409c94u: goto label_409c94;
        case 0x409c98u: goto label_409c98;
        case 0x409c9cu: goto label_409c9c;
        case 0x409ca0u: goto label_409ca0;
        case 0x409ca4u: goto label_409ca4;
        case 0x409ca8u: goto label_409ca8;
        case 0x409cacu: goto label_409cac;
        case 0x409cb0u: goto label_409cb0;
        case 0x409cb4u: goto label_409cb4;
        case 0x409cb8u: goto label_409cb8;
        case 0x409cbcu: goto label_409cbc;
        case 0x409cc0u: goto label_409cc0;
        case 0x409cc4u: goto label_409cc4;
        case 0x409cc8u: goto label_409cc8;
        case 0x409cccu: goto label_409ccc;
        case 0x409cd0u: goto label_409cd0;
        case 0x409cd4u: goto label_409cd4;
        case 0x409cd8u: goto label_409cd8;
        case 0x409cdcu: goto label_409cdc;
        case 0x409ce0u: goto label_409ce0;
        case 0x409ce4u: goto label_409ce4;
        case 0x409ce8u: goto label_409ce8;
        case 0x409cecu: goto label_409cec;
        case 0x409cf0u: goto label_409cf0;
        case 0x409cf4u: goto label_409cf4;
        case 0x409cf8u: goto label_409cf8;
        case 0x409cfcu: goto label_409cfc;
        case 0x409d00u: goto label_409d00;
        case 0x409d04u: goto label_409d04;
        case 0x409d08u: goto label_409d08;
        case 0x409d0cu: goto label_409d0c;
        case 0x409d10u: goto label_409d10;
        case 0x409d14u: goto label_409d14;
        case 0x409d18u: goto label_409d18;
        case 0x409d1cu: goto label_409d1c;
        default: break;
    }

    ctx->pc = 0x4099e0u;

label_4099e0:
    // 0x4099e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4099e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4099e4:
    // 0x4099e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4099e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4099e8:
    // 0x4099e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4099e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4099ec:
    // 0x4099ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4099ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4099f0:
    // 0x4099f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4099f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4099f4:
    // 0x4099f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4099f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4099f8:
    // 0x4099f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4099f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4099fc:
    // 0x4099fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4099fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409a00:
    // 0x409a00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x409a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_409a04:
    // 0x409a04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x409a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_409a08:
    // 0x409a08: 0xc10ca68  jal         func_4329A0
label_409a0c:
    if (ctx->pc == 0x409A0Cu) {
        ctx->pc = 0x409A0Cu;
            // 0x409a0c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x409A10u;
        goto label_409a10;
    }
    ctx->pc = 0x409A08u;
    SET_GPR_U32(ctx, 31, 0x409A10u);
    ctx->pc = 0x409A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409A08u;
            // 0x409a0c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409A10u; }
        if (ctx->pc != 0x409A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409A10u; }
        if (ctx->pc != 0x409A10u) { return; }
    }
    ctx->pc = 0x409A10u;
label_409a10:
    // 0x409a10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x409a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_409a14:
    // 0x409a14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x409a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_409a18:
    // 0x409a18: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x409a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_409a1c:
    // 0x409a1c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x409a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_409a20:
    // 0x409a20: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x409a20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_409a24:
    // 0x409a24: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x409a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_409a28:
    // 0x409a28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x409a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_409a2c:
    // 0x409a2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x409a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_409a30:
    // 0x409a30: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x409a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_409a34:
    // 0x409a34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x409a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_409a38:
    // 0x409a38: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x409a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_409a3c:
    // 0x409a3c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x409a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_409a40:
    // 0x409a40: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x409a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_409a44:
    // 0x409a44: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x409a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_409a48:
    // 0x409a48: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x409a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_409a4c:
    // 0x409a4c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x409a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_409a50:
    // 0x409a50: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x409a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_409a54:
    // 0x409a54: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x409a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_409a58:
    // 0x409a58: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x409a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_409a5c:
    // 0x409a5c: 0xc0582cc  jal         func_160B30
label_409a60:
    if (ctx->pc == 0x409A60u) {
        ctx->pc = 0x409A60u;
            // 0x409a60: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x409A64u;
        goto label_409a64;
    }
    ctx->pc = 0x409A5Cu;
    SET_GPR_U32(ctx, 31, 0x409A64u);
    ctx->pc = 0x409A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409A5Cu;
            // 0x409a60: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409A64u; }
        if (ctx->pc != 0x409A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409A64u; }
        if (ctx->pc != 0x409A64u) { return; }
    }
    ctx->pc = 0x409A64u;
label_409a64:
    // 0x409a64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x409a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_409a68:
    // 0x409a68: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x409a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_409a6c:
    // 0x409a6c: 0x2463aa28  addiu       $v1, $v1, -0x55D8
    ctx->pc = 0x409a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945320));
label_409a70:
    // 0x409a70: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x409a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_409a74:
    // 0x409a74: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x409a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_409a78:
    // 0x409a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x409a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_409a7c:
    // 0x409a7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x409a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_409a80:
    // 0x409a80: 0xac4472a0  sw          $a0, 0x72A0($v0)
    ctx->pc = 0x409a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29344), GPR_U32(ctx, 4));
label_409a84:
    // 0x409a84: 0x2463aa40  addiu       $v1, $v1, -0x55C0
    ctx->pc = 0x409a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945344));
label_409a88:
    // 0x409a88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x409a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_409a8c:
    // 0x409a8c: 0x2442aa78  addiu       $v0, $v0, -0x5588
    ctx->pc = 0x409a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945400));
label_409a90:
    // 0x409a90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x409a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_409a94:
    // 0x409a94: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x409a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_409a98:
    // 0x409a98: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x409a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_409a9c:
    // 0x409a9c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x409a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_409aa0:
    // 0x409aa0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x409aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_409aa4:
    // 0x409aa4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x409aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_409aa8:
    // 0x409aa8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x409aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_409aac:
    // 0x409aac: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x409aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_409ab0:
    // 0x409ab0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x409ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_409ab4:
    // 0x409ab4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x409ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_409ab8:
    // 0x409ab8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x409ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_409abc:
    // 0x409abc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x409abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_409ac0:
    // 0x409ac0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x409ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_409ac4:
    // 0x409ac4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_409ac8:
    if (ctx->pc == 0x409AC8u) {
        ctx->pc = 0x409ACCu;
        goto label_409acc;
    }
    ctx->pc = 0x409AC4u;
    {
        const bool branch_taken_0x409ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x409ac4) {
            ctx->pc = 0x409B58u;
            goto label_409b58;
        }
    }
    ctx->pc = 0x409ACCu;
label_409acc:
    // 0x409acc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x409accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_409ad0:
    // 0x409ad0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x409ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_409ad4:
    // 0x409ad4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x409ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_409ad8:
    // 0x409ad8: 0xc040138  jal         func_1004E0
label_409adc:
    if (ctx->pc == 0x409ADCu) {
        ctx->pc = 0x409ADCu;
            // 0x409adc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x409AE0u;
        goto label_409ae0;
    }
    ctx->pc = 0x409AD8u;
    SET_GPR_U32(ctx, 31, 0x409AE0u);
    ctx->pc = 0x409ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409AD8u;
            // 0x409adc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409AE0u; }
        if (ctx->pc != 0x409AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409AE0u; }
        if (ctx->pc != 0x409AE0u) { return; }
    }
    ctx->pc = 0x409AE0u;
label_409ae0:
    // 0x409ae0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x409ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_409ae4:
    // 0x409ae4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x409ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_409ae8:
    // 0x409ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409aec:
    // 0x409aec: 0x24a57ca0  addiu       $a1, $a1, 0x7CA0
    ctx->pc = 0x409aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31904));
label_409af0:
    // 0x409af0: 0x24c67c10  addiu       $a2, $a2, 0x7C10
    ctx->pc = 0x409af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31760));
label_409af4:
    // 0x409af4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x409af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_409af8:
    // 0x409af8: 0xc040840  jal         func_102100
label_409afc:
    if (ctx->pc == 0x409AFCu) {
        ctx->pc = 0x409AFCu;
            // 0x409afc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409B00u;
        goto label_409b00;
    }
    ctx->pc = 0x409AF8u;
    SET_GPR_U32(ctx, 31, 0x409B00u);
    ctx->pc = 0x409AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409AF8u;
            // 0x409afc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B00u; }
        if (ctx->pc != 0x409B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B00u; }
        if (ctx->pc != 0x409B00u) { return; }
    }
    ctx->pc = 0x409B00u;
label_409b00:
    // 0x409b00: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x409b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_409b04:
    // 0x409b04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x409b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409b08:
    // 0x409b08: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x409b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_409b0c:
    // 0x409b0c: 0xc0788fc  jal         func_1E23F0
label_409b10:
    if (ctx->pc == 0x409B10u) {
        ctx->pc = 0x409B10u;
            // 0x409b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409B14u;
        goto label_409b14;
    }
    ctx->pc = 0x409B0Cu;
    SET_GPR_U32(ctx, 31, 0x409B14u);
    ctx->pc = 0x409B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409B0Cu;
            // 0x409b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B14u; }
        if (ctx->pc != 0x409B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B14u; }
        if (ctx->pc != 0x409B14u) { return; }
    }
    ctx->pc = 0x409B14u;
label_409b14:
    // 0x409b14: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x409b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_409b18:
    // 0x409b18: 0xc0788fc  jal         func_1E23F0
label_409b1c:
    if (ctx->pc == 0x409B1Cu) {
        ctx->pc = 0x409B1Cu;
            // 0x409b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409B20u;
        goto label_409b20;
    }
    ctx->pc = 0x409B18u;
    SET_GPR_U32(ctx, 31, 0x409B20u);
    ctx->pc = 0x409B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409B18u;
            // 0x409b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B20u; }
        if (ctx->pc != 0x409B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B20u; }
        if (ctx->pc != 0x409B20u) { return; }
    }
    ctx->pc = 0x409B20u;
label_409b20:
    // 0x409b20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x409b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409b24:
    // 0x409b24: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x409b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_409b28:
    // 0x409b28: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x409b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_409b2c:
    // 0x409b2c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x409b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_409b30:
    // 0x409b30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x409b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409b34:
    // 0x409b34: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x409b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_409b38:
    // 0x409b38: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x409b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_409b3c:
    // 0x409b3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x409b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_409b40:
    // 0x409b40: 0xc0a997c  jal         func_2A65F0
label_409b44:
    if (ctx->pc == 0x409B44u) {
        ctx->pc = 0x409B44u;
            // 0x409b44: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x409B48u;
        goto label_409b48;
    }
    ctx->pc = 0x409B40u;
    SET_GPR_U32(ctx, 31, 0x409B48u);
    ctx->pc = 0x409B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409B40u;
            // 0x409b44: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B48u; }
        if (ctx->pc != 0x409B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409B48u; }
        if (ctx->pc != 0x409B48u) { return; }
    }
    ctx->pc = 0x409B48u;
label_409b48:
    // 0x409b48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x409b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_409b4c:
    // 0x409b4c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x409b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_409b50:
    // 0x409b50: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_409b54:
    if (ctx->pc == 0x409B54u) {
        ctx->pc = 0x409B54u;
            // 0x409b54: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x409B58u;
        goto label_409b58;
    }
    ctx->pc = 0x409B50u;
    {
        const bool branch_taken_0x409b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409B50u;
            // 0x409b54: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b50) {
            ctx->pc = 0x409B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_409b24;
        }
    }
    ctx->pc = 0x409B58u;
label_409b58:
    // 0x409b58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x409b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_409b5c:
    // 0x409b5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x409b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_409b60:
    // 0x409b60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x409b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409b64:
    // 0x409b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_409b68:
    // 0x409b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_409b6c:
    // 0x409b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409b70:
    // 0x409b70: 0x3e00008  jr          $ra
label_409b74:
    if (ctx->pc == 0x409B74u) {
        ctx->pc = 0x409B74u;
            // 0x409b74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x409B78u;
        goto label_409b78;
    }
    ctx->pc = 0x409B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409B70u;
            // 0x409b74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409B78u;
label_409b78:
    // 0x409b78: 0x0  nop
    ctx->pc = 0x409b78u;
    // NOP
label_409b7c:
    // 0x409b7c: 0x0  nop
    ctx->pc = 0x409b7cu;
    // NOP
label_409b80:
    // 0x409b80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x409b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_409b84:
    // 0x409b84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x409b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_409b88:
    // 0x409b88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x409b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_409b8c:
    // 0x409b8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x409b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_409b90:
    // 0x409b90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x409b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_409b94:
    // 0x409b94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x409b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_409b98:
    // 0x409b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_409b9c:
    // 0x409b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x409b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409ba0:
    // 0x409ba0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x409ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_409ba4:
    // 0x409ba4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_409ba8:
    if (ctx->pc == 0x409BA8u) {
        ctx->pc = 0x409BA8u;
            // 0x409ba8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409BACu;
        goto label_409bac;
    }
    ctx->pc = 0x409BA4u;
    {
        const bool branch_taken_0x409ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x409BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409BA4u;
            // 0x409ba8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409ba4) {
            ctx->pc = 0x409BE8u;
            goto label_409be8;
        }
    }
    ctx->pc = 0x409BACu;
label_409bac:
    // 0x409bac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x409bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409bb0:
    // 0x409bb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x409bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409bb4:
    // 0x409bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x409bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409bb8:
    // 0x409bb8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x409bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_409bbc:
    // 0x409bbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x409bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_409bc0:
    // 0x409bc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x409bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409bc4:
    // 0x409bc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x409bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409bc8:
    // 0x409bc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x409bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_409bcc:
    // 0x409bcc: 0x320f809  jalr        $t9
label_409bd0:
    if (ctx->pc == 0x409BD0u) {
        ctx->pc = 0x409BD4u;
        goto label_409bd4;
    }
    ctx->pc = 0x409BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409BD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x409BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409BD4u; }
            if (ctx->pc != 0x409BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x409BD4u;
label_409bd4:
    // 0x409bd4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x409bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_409bd8:
    // 0x409bd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x409bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_409bdc:
    // 0x409bdc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x409bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_409be0:
    // 0x409be0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_409be4:
    if (ctx->pc == 0x409BE4u) {
        ctx->pc = 0x409BE4u;
            // 0x409be4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x409BE8u;
        goto label_409be8;
    }
    ctx->pc = 0x409BE0u;
    {
        const bool branch_taken_0x409be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409BE0u;
            // 0x409be4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409be0) {
            ctx->pc = 0x409BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_409bb8;
        }
    }
    ctx->pc = 0x409BE8u;
label_409be8:
    // 0x409be8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x409be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_409bec:
    // 0x409bec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x409becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_409bf0:
    // 0x409bf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x409bf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_409bf4:
    // 0x409bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x409bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409bf8:
    // 0x409bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_409bfc:
    // 0x409bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_409c00:
    // 0x409c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409c04:
    // 0x409c04: 0x3e00008  jr          $ra
label_409c08:
    if (ctx->pc == 0x409C08u) {
        ctx->pc = 0x409C08u;
            // 0x409c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x409C0Cu;
        goto label_409c0c;
    }
    ctx->pc = 0x409C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409C04u;
            // 0x409c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409C0Cu;
label_409c0c:
    // 0x409c0c: 0x0  nop
    ctx->pc = 0x409c0cu;
    // NOP
label_409c10:
    // 0x409c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_409c14:
    // 0x409c14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x409c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409c18:
    // 0x409c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x409c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_409c1c:
    // 0x409c1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x409c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_409c20:
    // 0x409c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x409c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409c24:
    // 0x409c24: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x409c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_409c28:
    // 0x409c28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x409c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_409c2c:
    // 0x409c2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x409c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_409c30:
    // 0x409c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x409c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_409c34:
    // 0x409c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x409c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_409c38:
    // 0x409c38: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x409c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_409c3c:
    // 0x409c3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x409c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_409c40:
    // 0x409c40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x409c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_409c44:
    // 0x409c44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x409c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_409c48:
    // 0x409c48: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x409c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_409c4c:
    // 0x409c4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x409c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_409c50:
    // 0x409c50: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x409c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_409c54:
    // 0x409c54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x409c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_409c58:
    // 0x409c58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x409c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_409c5c:
    // 0x409c5c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x409c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_409c60:
    // 0x409c60: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x409c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_409c64:
    // 0x409c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x409c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_409c68:
    // 0x409c68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x409c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_409c6c:
    // 0x409c6c: 0xc0a997c  jal         func_2A65F0
label_409c70:
    if (ctx->pc == 0x409C70u) {
        ctx->pc = 0x409C70u;
            // 0x409c70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x409C74u;
        goto label_409c74;
    }
    ctx->pc = 0x409C6Cu;
    SET_GPR_U32(ctx, 31, 0x409C74u);
    ctx->pc = 0x409C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409C6Cu;
            // 0x409c70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409C74u; }
        if (ctx->pc != 0x409C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409C74u; }
        if (ctx->pc != 0x409C74u) { return; }
    }
    ctx->pc = 0x409C74u;
label_409c74:
    // 0x409c74: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x409c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_409c78:
    // 0x409c78: 0xc0d879c  jal         func_361E70
label_409c7c:
    if (ctx->pc == 0x409C7Cu) {
        ctx->pc = 0x409C7Cu;
            // 0x409c7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409C80u;
        goto label_409c80;
    }
    ctx->pc = 0x409C78u;
    SET_GPR_U32(ctx, 31, 0x409C80u);
    ctx->pc = 0x409C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409C78u;
            // 0x409c7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409C80u; }
        if (ctx->pc != 0x409C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409C80u; }
        if (ctx->pc != 0x409C80u) { return; }
    }
    ctx->pc = 0x409C80u;
label_409c80:
    // 0x409c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x409c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_409c84:
    // 0x409c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409c88:
    // 0x409c88: 0x3e00008  jr          $ra
label_409c8c:
    if (ctx->pc == 0x409C8Cu) {
        ctx->pc = 0x409C8Cu;
            // 0x409c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x409C90u;
        goto label_409c90;
    }
    ctx->pc = 0x409C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409C88u;
            // 0x409c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409C90u;
label_409c90:
    // 0x409c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_409c94:
    // 0x409c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x409c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_409c98:
    // 0x409c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_409c9c:
    // 0x409c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x409c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409ca0:
    // 0x409ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_409ca4:
    // 0x409ca4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x409ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_409ca8:
    // 0x409ca8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_409cac:
    if (ctx->pc == 0x409CACu) {
        ctx->pc = 0x409CACu;
            // 0x409cac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409CB0u;
        goto label_409cb0;
    }
    ctx->pc = 0x409CA8u;
    {
        const bool branch_taken_0x409ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x409CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409CA8u;
            // 0x409cac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409ca8) {
            ctx->pc = 0x409CD8u;
            goto label_409cd8;
        }
    }
    ctx->pc = 0x409CB0u;
label_409cb0:
    // 0x409cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x409cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_409cb4:
    // 0x409cb4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x409cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_409cb8:
    // 0x409cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x409cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409cbc:
    // 0x409cbc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x409cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_409cc0:
    // 0x409cc0: 0x320f809  jalr        $t9
label_409cc4:
    if (ctx->pc == 0x409CC4u) {
        ctx->pc = 0x409CC8u;
        goto label_409cc8;
    }
    ctx->pc = 0x409CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409CC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x409CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409CC8u; }
            if (ctx->pc != 0x409CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x409CC8u;
label_409cc8:
    // 0x409cc8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x409cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_409ccc:
    // 0x409ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x409cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409cd0:
    // 0x409cd0: 0xc0d86a0  jal         func_361A80
label_409cd4:
    if (ctx->pc == 0x409CD4u) {
        ctx->pc = 0x409CD4u;
            // 0x409cd4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409CD8u;
        goto label_409cd8;
    }
    ctx->pc = 0x409CD0u;
    SET_GPR_U32(ctx, 31, 0x409CD8u);
    ctx->pc = 0x409CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409CD0u;
            // 0x409cd4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361A80u;
    if (runtime->hasFunction(0x361A80u)) {
        auto targetFn = runtime->lookupFunction(0x361A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409CD8u; }
        if (ctx->pc != 0x409CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361A80_0x361a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409CD8u; }
        if (ctx->pc != 0x409CD8u) { return; }
    }
    ctx->pc = 0x409CD8u;
label_409cd8:
    // 0x409cd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x409cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_409cdc:
    // 0x409cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_409ce0:
    // 0x409ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409ce4:
    // 0x409ce4: 0x3e00008  jr          $ra
label_409ce8:
    if (ctx->pc == 0x409CE8u) {
        ctx->pc = 0x409CE8u;
            // 0x409ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x409CECu;
        goto label_409cec;
    }
    ctx->pc = 0x409CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409CE4u;
            // 0x409ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409CECu;
label_409cec:
    // 0x409cec: 0x0  nop
    ctx->pc = 0x409cecu;
    // NOP
label_409cf0:
    // 0x409cf0: 0x8102610  j           func_409840
label_409cf4:
    if (ctx->pc == 0x409CF4u) {
        ctx->pc = 0x409CF4u;
            // 0x409cf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x409CF8u;
        goto label_409cf8;
    }
    ctx->pc = 0x409CF0u;
    ctx->pc = 0x409CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409CF0u;
            // 0x409cf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409840u;
    {
        auto targetFn = runtime->lookupFunction(0x409840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x409CF8u;
label_409cf8:
    // 0x409cf8: 0x0  nop
    ctx->pc = 0x409cf8u;
    // NOP
label_409cfc:
    // 0x409cfc: 0x0  nop
    ctx->pc = 0x409cfcu;
    // NOP
label_409d00:
    // 0x409d00: 0x81024d0  j           func_409340
label_409d04:
    if (ctx->pc == 0x409D04u) {
        ctx->pc = 0x409D04u;
            // 0x409d04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x409D08u;
        goto label_409d08;
    }
    ctx->pc = 0x409D00u;
    ctx->pc = 0x409D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409D00u;
            // 0x409d04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409340u;
    if (runtime->hasFunction(0x409340u)) {
        auto targetFn = runtime->lookupFunction(0x409340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00409340_0x409340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x409D08u;
label_409d08:
    // 0x409d08: 0x0  nop
    ctx->pc = 0x409d08u;
    // NOP
label_409d0c:
    // 0x409d0c: 0x0  nop
    ctx->pc = 0x409d0cu;
    // NOP
label_409d10:
    // 0x409d10: 0x810248c  j           func_409230
label_409d14:
    if (ctx->pc == 0x409D14u) {
        ctx->pc = 0x409D14u;
            // 0x409d14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x409D18u;
        goto label_409d18;
    }
    ctx->pc = 0x409D10u;
    ctx->pc = 0x409D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409D10u;
            // 0x409d14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409230u;
    {
        auto targetFn = runtime->lookupFunction(0x409230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x409D18u;
label_409d18:
    // 0x409d18: 0x0  nop
    ctx->pc = 0x409d18u;
    // NOP
label_409d1c:
    // 0x409d1c: 0x0  nop
    ctx->pc = 0x409d1cu;
    // NOP
}
