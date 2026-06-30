#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0AA0
// Address: 0x2f0aa0 - 0x2f0e20
void sub_002F0AA0_0x2f0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0AA0_0x2f0aa0");
#endif

    switch (ctx->pc) {
        case 0x2f0aa0u: goto label_2f0aa0;
        case 0x2f0aa4u: goto label_2f0aa4;
        case 0x2f0aa8u: goto label_2f0aa8;
        case 0x2f0aacu: goto label_2f0aac;
        case 0x2f0ab0u: goto label_2f0ab0;
        case 0x2f0ab4u: goto label_2f0ab4;
        case 0x2f0ab8u: goto label_2f0ab8;
        case 0x2f0abcu: goto label_2f0abc;
        case 0x2f0ac0u: goto label_2f0ac0;
        case 0x2f0ac4u: goto label_2f0ac4;
        case 0x2f0ac8u: goto label_2f0ac8;
        case 0x2f0accu: goto label_2f0acc;
        case 0x2f0ad0u: goto label_2f0ad0;
        case 0x2f0ad4u: goto label_2f0ad4;
        case 0x2f0ad8u: goto label_2f0ad8;
        case 0x2f0adcu: goto label_2f0adc;
        case 0x2f0ae0u: goto label_2f0ae0;
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0ae8u: goto label_2f0ae8;
        case 0x2f0aecu: goto label_2f0aec;
        case 0x2f0af0u: goto label_2f0af0;
        case 0x2f0af4u: goto label_2f0af4;
        case 0x2f0af8u: goto label_2f0af8;
        case 0x2f0afcu: goto label_2f0afc;
        case 0x2f0b00u: goto label_2f0b00;
        case 0x2f0b04u: goto label_2f0b04;
        case 0x2f0b08u: goto label_2f0b08;
        case 0x2f0b0cu: goto label_2f0b0c;
        case 0x2f0b10u: goto label_2f0b10;
        case 0x2f0b14u: goto label_2f0b14;
        case 0x2f0b18u: goto label_2f0b18;
        case 0x2f0b1cu: goto label_2f0b1c;
        case 0x2f0b20u: goto label_2f0b20;
        case 0x2f0b24u: goto label_2f0b24;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b2cu: goto label_2f0b2c;
        case 0x2f0b30u: goto label_2f0b30;
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b38u: goto label_2f0b38;
        case 0x2f0b3cu: goto label_2f0b3c;
        case 0x2f0b40u: goto label_2f0b40;
        case 0x2f0b44u: goto label_2f0b44;
        case 0x2f0b48u: goto label_2f0b48;
        case 0x2f0b4cu: goto label_2f0b4c;
        case 0x2f0b50u: goto label_2f0b50;
        case 0x2f0b54u: goto label_2f0b54;
        case 0x2f0b58u: goto label_2f0b58;
        case 0x2f0b5cu: goto label_2f0b5c;
        case 0x2f0b60u: goto label_2f0b60;
        case 0x2f0b64u: goto label_2f0b64;
        case 0x2f0b68u: goto label_2f0b68;
        case 0x2f0b6cu: goto label_2f0b6c;
        case 0x2f0b70u: goto label_2f0b70;
        case 0x2f0b74u: goto label_2f0b74;
        case 0x2f0b78u: goto label_2f0b78;
        case 0x2f0b7cu: goto label_2f0b7c;
        case 0x2f0b80u: goto label_2f0b80;
        case 0x2f0b84u: goto label_2f0b84;
        case 0x2f0b88u: goto label_2f0b88;
        case 0x2f0b8cu: goto label_2f0b8c;
        case 0x2f0b90u: goto label_2f0b90;
        case 0x2f0b94u: goto label_2f0b94;
        case 0x2f0b98u: goto label_2f0b98;
        case 0x2f0b9cu: goto label_2f0b9c;
        case 0x2f0ba0u: goto label_2f0ba0;
        case 0x2f0ba4u: goto label_2f0ba4;
        case 0x2f0ba8u: goto label_2f0ba8;
        case 0x2f0bacu: goto label_2f0bac;
        case 0x2f0bb0u: goto label_2f0bb0;
        case 0x2f0bb4u: goto label_2f0bb4;
        case 0x2f0bb8u: goto label_2f0bb8;
        case 0x2f0bbcu: goto label_2f0bbc;
        case 0x2f0bc0u: goto label_2f0bc0;
        case 0x2f0bc4u: goto label_2f0bc4;
        case 0x2f0bc8u: goto label_2f0bc8;
        case 0x2f0bccu: goto label_2f0bcc;
        case 0x2f0bd0u: goto label_2f0bd0;
        case 0x2f0bd4u: goto label_2f0bd4;
        case 0x2f0bd8u: goto label_2f0bd8;
        case 0x2f0bdcu: goto label_2f0bdc;
        case 0x2f0be0u: goto label_2f0be0;
        case 0x2f0be4u: goto label_2f0be4;
        case 0x2f0be8u: goto label_2f0be8;
        case 0x2f0becu: goto label_2f0bec;
        case 0x2f0bf0u: goto label_2f0bf0;
        case 0x2f0bf4u: goto label_2f0bf4;
        case 0x2f0bf8u: goto label_2f0bf8;
        case 0x2f0bfcu: goto label_2f0bfc;
        case 0x2f0c00u: goto label_2f0c00;
        case 0x2f0c04u: goto label_2f0c04;
        case 0x2f0c08u: goto label_2f0c08;
        case 0x2f0c0cu: goto label_2f0c0c;
        case 0x2f0c10u: goto label_2f0c10;
        case 0x2f0c14u: goto label_2f0c14;
        case 0x2f0c18u: goto label_2f0c18;
        case 0x2f0c1cu: goto label_2f0c1c;
        case 0x2f0c20u: goto label_2f0c20;
        case 0x2f0c24u: goto label_2f0c24;
        case 0x2f0c28u: goto label_2f0c28;
        case 0x2f0c2cu: goto label_2f0c2c;
        case 0x2f0c30u: goto label_2f0c30;
        case 0x2f0c34u: goto label_2f0c34;
        case 0x2f0c38u: goto label_2f0c38;
        case 0x2f0c3cu: goto label_2f0c3c;
        case 0x2f0c40u: goto label_2f0c40;
        case 0x2f0c44u: goto label_2f0c44;
        case 0x2f0c48u: goto label_2f0c48;
        case 0x2f0c4cu: goto label_2f0c4c;
        case 0x2f0c50u: goto label_2f0c50;
        case 0x2f0c54u: goto label_2f0c54;
        case 0x2f0c58u: goto label_2f0c58;
        case 0x2f0c5cu: goto label_2f0c5c;
        case 0x2f0c60u: goto label_2f0c60;
        case 0x2f0c64u: goto label_2f0c64;
        case 0x2f0c68u: goto label_2f0c68;
        case 0x2f0c6cu: goto label_2f0c6c;
        case 0x2f0c70u: goto label_2f0c70;
        case 0x2f0c74u: goto label_2f0c74;
        case 0x2f0c78u: goto label_2f0c78;
        case 0x2f0c7cu: goto label_2f0c7c;
        case 0x2f0c80u: goto label_2f0c80;
        case 0x2f0c84u: goto label_2f0c84;
        case 0x2f0c88u: goto label_2f0c88;
        case 0x2f0c8cu: goto label_2f0c8c;
        case 0x2f0c90u: goto label_2f0c90;
        case 0x2f0c94u: goto label_2f0c94;
        case 0x2f0c98u: goto label_2f0c98;
        case 0x2f0c9cu: goto label_2f0c9c;
        case 0x2f0ca0u: goto label_2f0ca0;
        case 0x2f0ca4u: goto label_2f0ca4;
        case 0x2f0ca8u: goto label_2f0ca8;
        case 0x2f0cacu: goto label_2f0cac;
        case 0x2f0cb0u: goto label_2f0cb0;
        case 0x2f0cb4u: goto label_2f0cb4;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cbcu: goto label_2f0cbc;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cc4u: goto label_2f0cc4;
        case 0x2f0cc8u: goto label_2f0cc8;
        case 0x2f0cccu: goto label_2f0ccc;
        case 0x2f0cd0u: goto label_2f0cd0;
        case 0x2f0cd4u: goto label_2f0cd4;
        case 0x2f0cd8u: goto label_2f0cd8;
        case 0x2f0cdcu: goto label_2f0cdc;
        case 0x2f0ce0u: goto label_2f0ce0;
        case 0x2f0ce4u: goto label_2f0ce4;
        case 0x2f0ce8u: goto label_2f0ce8;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0cf0u: goto label_2f0cf0;
        case 0x2f0cf4u: goto label_2f0cf4;
        case 0x2f0cf8u: goto label_2f0cf8;
        case 0x2f0cfcu: goto label_2f0cfc;
        case 0x2f0d00u: goto label_2f0d00;
        case 0x2f0d04u: goto label_2f0d04;
        case 0x2f0d08u: goto label_2f0d08;
        case 0x2f0d0cu: goto label_2f0d0c;
        case 0x2f0d10u: goto label_2f0d10;
        case 0x2f0d14u: goto label_2f0d14;
        case 0x2f0d18u: goto label_2f0d18;
        case 0x2f0d1cu: goto label_2f0d1c;
        case 0x2f0d20u: goto label_2f0d20;
        case 0x2f0d24u: goto label_2f0d24;
        case 0x2f0d28u: goto label_2f0d28;
        case 0x2f0d2cu: goto label_2f0d2c;
        case 0x2f0d30u: goto label_2f0d30;
        case 0x2f0d34u: goto label_2f0d34;
        case 0x2f0d38u: goto label_2f0d38;
        case 0x2f0d3cu: goto label_2f0d3c;
        case 0x2f0d40u: goto label_2f0d40;
        case 0x2f0d44u: goto label_2f0d44;
        case 0x2f0d48u: goto label_2f0d48;
        case 0x2f0d4cu: goto label_2f0d4c;
        case 0x2f0d50u: goto label_2f0d50;
        case 0x2f0d54u: goto label_2f0d54;
        case 0x2f0d58u: goto label_2f0d58;
        case 0x2f0d5cu: goto label_2f0d5c;
        case 0x2f0d60u: goto label_2f0d60;
        case 0x2f0d64u: goto label_2f0d64;
        case 0x2f0d68u: goto label_2f0d68;
        case 0x2f0d6cu: goto label_2f0d6c;
        case 0x2f0d70u: goto label_2f0d70;
        case 0x2f0d74u: goto label_2f0d74;
        case 0x2f0d78u: goto label_2f0d78;
        case 0x2f0d7cu: goto label_2f0d7c;
        case 0x2f0d80u: goto label_2f0d80;
        case 0x2f0d84u: goto label_2f0d84;
        case 0x2f0d88u: goto label_2f0d88;
        case 0x2f0d8cu: goto label_2f0d8c;
        case 0x2f0d90u: goto label_2f0d90;
        case 0x2f0d94u: goto label_2f0d94;
        case 0x2f0d98u: goto label_2f0d98;
        case 0x2f0d9cu: goto label_2f0d9c;
        case 0x2f0da0u: goto label_2f0da0;
        case 0x2f0da4u: goto label_2f0da4;
        case 0x2f0da8u: goto label_2f0da8;
        case 0x2f0dacu: goto label_2f0dac;
        case 0x2f0db0u: goto label_2f0db0;
        case 0x2f0db4u: goto label_2f0db4;
        case 0x2f0db8u: goto label_2f0db8;
        case 0x2f0dbcu: goto label_2f0dbc;
        case 0x2f0dc0u: goto label_2f0dc0;
        case 0x2f0dc4u: goto label_2f0dc4;
        case 0x2f0dc8u: goto label_2f0dc8;
        case 0x2f0dccu: goto label_2f0dcc;
        case 0x2f0dd0u: goto label_2f0dd0;
        case 0x2f0dd4u: goto label_2f0dd4;
        case 0x2f0dd8u: goto label_2f0dd8;
        case 0x2f0ddcu: goto label_2f0ddc;
        case 0x2f0de0u: goto label_2f0de0;
        case 0x2f0de4u: goto label_2f0de4;
        case 0x2f0de8u: goto label_2f0de8;
        case 0x2f0decu: goto label_2f0dec;
        case 0x2f0df0u: goto label_2f0df0;
        case 0x2f0df4u: goto label_2f0df4;
        case 0x2f0df8u: goto label_2f0df8;
        case 0x2f0dfcu: goto label_2f0dfc;
        case 0x2f0e00u: goto label_2f0e00;
        case 0x2f0e04u: goto label_2f0e04;
        case 0x2f0e08u: goto label_2f0e08;
        case 0x2f0e0cu: goto label_2f0e0c;
        case 0x2f0e10u: goto label_2f0e10;
        case 0x2f0e14u: goto label_2f0e14;
        case 0x2f0e18u: goto label_2f0e18;
        case 0x2f0e1cu: goto label_2f0e1c;
        default: break;
    }

    ctx->pc = 0x2f0aa0u;

label_2f0aa0:
    // 0x2f0aa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f0aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2f0aa4:
    // 0x2f0aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f0aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f0aa8:
    // 0x2f0aa8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2f0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2f0aac:
    // 0x2f0aac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2f0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2f0ab0:
    // 0x2f0ab0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2f0ab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ab4:
    // 0x2f0ab4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f0ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2f0ab8:
    // 0x2f0ab8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f0abc:
    // 0x2f0abc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f0abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ac0:
    // 0x2f0ac0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f0ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f0ac4:
    // 0x2f0ac4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f0ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ac8:
    // 0x2f0ac8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f0acc:
    // 0x2f0acc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f0accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ad0:
    // 0x2f0ad0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f0ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f0ad4:
    // 0x2f0ad4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f0ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ad8:
    // 0x2f0ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f0adc:
    // 0x2f0adc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2f0adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ae0:
    // 0x2f0ae0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0ae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f0ae4:
    // 0x2f0ae4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f0ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ae8:
    // 0x2f0ae8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f0ae8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2f0aec:
    // 0x2f0aec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f0aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0af0:
    // 0x2f0af0: 0x0  nop
    ctx->pc = 0x2f0af0u;
    // NOP
label_2f0af4:
    // 0x2f0af4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f0af4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f0af8:
    // 0x2f0af8: 0xc04cbd8  jal         func_132F60
label_2f0afc:
    if (ctx->pc == 0x2F0AFCu) {
        ctx->pc = 0x2F0AFCu;
            // 0x2f0afc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F0B00u;
        goto label_2f0b00;
    }
    ctx->pc = 0x2F0AF8u;
    SET_GPR_U32(ctx, 31, 0x2F0B00u);
    ctx->pc = 0x2F0AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0AF8u;
            // 0x2f0afc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0B00u; }
        if (ctx->pc != 0x2F0B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0B00u; }
        if (ctx->pc != 0x2F0B00u) { return; }
    }
    ctx->pc = 0x2F0B00u;
label_2f0b00:
    // 0x2f0b00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f0b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0b04:
    // 0x2f0b04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b08:
    // 0x2f0b08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f0b08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f0b0c:
    // 0x2f0b0c: 0xc04cbd8  jal         func_132F60
label_2f0b10:
    if (ctx->pc == 0x2F0B10u) {
        ctx->pc = 0x2F0B10u;
            // 0x2f0b10: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F0B14u;
        goto label_2f0b14;
    }
    ctx->pc = 0x2F0B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F0B14u);
    ctx->pc = 0x2F0B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B0Cu;
            // 0x2f0b10: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0B14u; }
        if (ctx->pc != 0x2F0B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0B14u; }
        if (ctx->pc != 0x2F0B14u) { return; }
    }
    ctx->pc = 0x2F0B14u;
label_2f0b14:
    // 0x2f0b14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f0b18:
    // 0x2f0b18: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2f0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2f0b1c:
    // 0x2f0b1c: 0xa4511cf8  sh          $s1, 0x1CF8($v0)
    ctx->pc = 0x2f0b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7416), (uint16_t)GPR_U32(ctx, 17));
label_2f0b20:
    // 0x2f0b20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f0b24:
    // 0x2f0b24: 0xac431cf0  sw          $v1, 0x1CF0($v0)
    ctx->pc = 0x2f0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7408), GPR_U32(ctx, 3));
label_2f0b28:
    // 0x2f0b28: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2f0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2f0b2c:
    // 0x2f0b2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f0b30:
    // 0x2f0b30: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2f0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0b34:
    // 0x2f0b34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0b38:
    // 0x2f0b38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f0b38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0b3c:
    // 0x2f0b3c: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
label_2f0b40:
    if (ctx->pc == 0x2F0B40u) {
        ctx->pc = 0x2F0B40u;
            // 0x2f0b40: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2F0B44u;
        goto label_2f0b44;
    }
    ctx->pc = 0x2F0B3Cu;
    {
        const bool branch_taken_0x2f0b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0b3c) {
            ctx->pc = 0x2F0B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B3Cu;
            // 0x2f0b40: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BF4u;
            goto label_2f0bf4;
        }
    }
    ctx->pc = 0x2F0B44u;
label_2f0b44:
    // 0x2f0b44: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2f0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0b48:
    // 0x2f0b48: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0b4c:
    // 0x2f0b4c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f0b4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0b50:
    // 0x2f0b50: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_2f0b54:
    if (ctx->pc == 0x2F0B54u) {
        ctx->pc = 0x2F0B58u;
        goto label_2f0b58;
    }
    ctx->pc = 0x2F0B50u;
    {
        const bool branch_taken_0x2f0b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0b50) {
            ctx->pc = 0x2F0BF0u;
            goto label_2f0bf0;
        }
    }
    ctx->pc = 0x2F0B58u;
label_2f0b58:
    // 0x2f0b58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0b5c:
    // 0x2f0b5c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2f0b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0b60:
    // 0x2f0b60: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f0b60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0b64:
    // 0x2f0b64: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_2f0b68:
    if (ctx->pc == 0x2F0B68u) {
        ctx->pc = 0x2F0B6Cu;
        goto label_2f0b6c;
    }
    ctx->pc = 0x2F0B64u;
    {
        const bool branch_taken_0x2f0b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0b64) {
            ctx->pc = 0x2F0BF0u;
            goto label_2f0bf0;
        }
    }
    ctx->pc = 0x2F0B6Cu;
label_2f0b6c:
    // 0x2f0b6c: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x2f0b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_2f0b70:
    // 0x2f0b70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f0b74:
    // 0x2f0b74: 0x3c16002f  lui         $s6, 0x2F
    ctx->pc = 0x2f0b74u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)47 << 16));
label_2f0b78:
    // 0x2f0b78: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2f0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f0b7c:
    // 0x2f0b7c: 0xac431cf0  sw          $v1, 0x1CF0($v0)
    ctx->pc = 0x2f0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7408), GPR_U32(ctx, 3));
label_2f0b80:
    // 0x2f0b80: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2f0b84:
    if (ctx->pc == 0x2F0B84u) {
        ctx->pc = 0x2F0B84u;
            // 0x2f0b84: 0x26d60e20  addiu       $s6, $s6, 0xE20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3616));
        ctx->pc = 0x2F0B88u;
        goto label_2f0b88;
    }
    ctx->pc = 0x2F0B80u;
    {
        const bool branch_taken_0x2f0b80 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F0B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B80u;
            // 0x2f0b84: 0x26d60e20  addiu       $s6, $s6, 0xE20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b80) {
            ctx->pc = 0x2F0B94u;
            goto label_2f0b94;
        }
    }
    ctx->pc = 0x2F0B88u;
label_2f0b88:
    // 0x2f0b88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f0b88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0b8c:
    // 0x2f0b8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f0b90:
    if (ctx->pc == 0x2F0B90u) {
        ctx->pc = 0x2F0B90u;
            // 0x2f0b90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F0B94u;
        goto label_2f0b94;
    }
    ctx->pc = 0x2F0B8Cu;
    {
        const bool branch_taken_0x2f0b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B8Cu;
            // 0x2f0b90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b8c) {
            ctx->pc = 0x2F0BB0u;
            goto label_2f0bb0;
        }
    }
    ctx->pc = 0x2F0B94u;
label_2f0b94:
    // 0x2f0b94: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2f0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2f0b98:
    // 0x2f0b98: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f0b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2f0b9c:
    // 0x2f0b9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0ba0:
    // 0x2f0ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0ba4:
    // 0x2f0ba4: 0x0  nop
    ctx->pc = 0x2f0ba4u;
    // NOP
label_2f0ba8:
    // 0x2f0ba8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f0bac:
    // 0x2f0bac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0bb0:
    // 0x2f0bb0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2f0bb4:
    if (ctx->pc == 0x2F0BB4u) {
        ctx->pc = 0x2F0BB4u;
            // 0x2f0bb4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2F0BB8u;
        goto label_2f0bb8;
    }
    ctx->pc = 0x2F0BB0u;
    {
        const bool branch_taken_0x2f0bb0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F0BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BB0u;
            // 0x2f0bb4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bb0) {
            ctx->pc = 0x2F0BC4u;
            goto label_2f0bc4;
        }
    }
    ctx->pc = 0x2F0BB8u;
label_2f0bb8:
    // 0x2f0bb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f0bb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0bbc:
    // 0x2f0bbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f0bc0:
    if (ctx->pc == 0x2F0BC0u) {
        ctx->pc = 0x2F0BC0u;
            // 0x2f0bc0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F0BC4u;
        goto label_2f0bc4;
    }
    ctx->pc = 0x2F0BBCu;
    {
        const bool branch_taken_0x2f0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BBCu;
            // 0x2f0bc0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bbc) {
            ctx->pc = 0x2F0BE0u;
            goto label_2f0be0;
        }
    }
    ctx->pc = 0x2F0BC4u;
label_2f0bc4:
    // 0x2f0bc4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2f0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2f0bc8:
    // 0x2f0bc8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f0bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2f0bcc:
    // 0x2f0bcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0bd0:
    // 0x2f0bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0bd4:
    // 0x2f0bd4: 0x0  nop
    ctx->pc = 0x2f0bd4u;
    // NOP
label_2f0bd8:
    // 0x2f0bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f0bdc:
    // 0x2f0bdc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0be0:
    // 0x2f0be0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f0be4:
    // 0x2f0be4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2f0be4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0be8:
    // 0x2f0be8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2f0bec:
    if (ctx->pc == 0x2F0BECu) {
        ctx->pc = 0x2F0BECu;
            // 0x2f0bec: 0xe4401d00  swc1        $f0, 0x1D00($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7424), bits); }
        ctx->pc = 0x2F0BF0u;
        goto label_2f0bf0;
    }
    ctx->pc = 0x2F0BE8u;
    {
        const bool branch_taken_0x2f0be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BE8u;
            // 0x2f0bec: 0xe4401d00  swc1        $f0, 0x1D00($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0be8) {
            ctx->pc = 0x2F0C68u;
            goto label_2f0c68;
        }
    }
    ctx->pc = 0x2F0BF0u;
label_2f0bf0:
    // 0x2f0bf0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x2f0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_2f0bf4:
    // 0x2f0bf4: 0x3c16002f  lui         $s6, 0x2F
    ctx->pc = 0x2f0bf4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)47 << 16));
label_2f0bf8:
    // 0x2f0bf8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f0bfc:
    // 0x2f0bfc: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x2f0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f0c00:
    // 0x2f0c00: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2f0c04:
    if (ctx->pc == 0x2F0C04u) {
        ctx->pc = 0x2F0C04u;
            // 0x2f0c04: 0x26d61260  addiu       $s6, $s6, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4704));
        ctx->pc = 0x2F0C08u;
        goto label_2f0c08;
    }
    ctx->pc = 0x2F0C00u;
    {
        const bool branch_taken_0x2f0c00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F0C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C00u;
            // 0x2f0c04: 0x26d61260  addiu       $s6, $s6, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c00) {
            ctx->pc = 0x2F0C14u;
            goto label_2f0c14;
        }
    }
    ctx->pc = 0x2F0C08u;
label_2f0c08:
    // 0x2f0c08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f0c08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0c0c:
    // 0x2f0c0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f0c10:
    if (ctx->pc == 0x2F0C10u) {
        ctx->pc = 0x2F0C10u;
            // 0x2f0c10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F0C14u;
        goto label_2f0c14;
    }
    ctx->pc = 0x2F0C0Cu;
    {
        const bool branch_taken_0x2f0c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C0Cu;
            // 0x2f0c10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c0c) {
            ctx->pc = 0x2F0C30u;
            goto label_2f0c30;
        }
    }
    ctx->pc = 0x2F0C14u;
label_2f0c14:
    // 0x2f0c14: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2f0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2f0c18:
    // 0x2f0c18: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f0c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2f0c1c:
    // 0x2f0c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0c20:
    // 0x2f0c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0c24:
    // 0x2f0c24: 0x0  nop
    ctx->pc = 0x2f0c24u;
    // NOP
label_2f0c28:
    // 0x2f0c28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f0c2c:
    // 0x2f0c2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0c30:
    // 0x2f0c30: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2f0c34:
    if (ctx->pc == 0x2F0C34u) {
        ctx->pc = 0x2F0C34u;
            // 0x2f0c34: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2F0C38u;
        goto label_2f0c38;
    }
    ctx->pc = 0x2F0C30u;
    {
        const bool branch_taken_0x2f0c30 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C30u;
            // 0x2f0c34: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c30) {
            ctx->pc = 0x2F0C44u;
            goto label_2f0c44;
        }
    }
    ctx->pc = 0x2F0C38u;
label_2f0c38:
    // 0x2f0c38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f0c38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0c3c:
    // 0x2f0c3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f0c40:
    if (ctx->pc == 0x2F0C40u) {
        ctx->pc = 0x2F0C40u;
            // 0x2f0c40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F0C44u;
        goto label_2f0c44;
    }
    ctx->pc = 0x2F0C3Cu;
    {
        const bool branch_taken_0x2f0c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C3Cu;
            // 0x2f0c40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c3c) {
            ctx->pc = 0x2F0C60u;
            goto label_2f0c60;
        }
    }
    ctx->pc = 0x2F0C44u;
label_2f0c44:
    // 0x2f0c44: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2f0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2f0c48:
    // 0x2f0c48: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f0c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2f0c4c:
    // 0x2f0c4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0c50:
    // 0x2f0c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0c54:
    // 0x2f0c54: 0x0  nop
    ctx->pc = 0x2f0c54u;
    // NOP
label_2f0c58:
    // 0x2f0c58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f0c5c:
    // 0x2f0c5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0c60:
    // 0x2f0c60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f0c64:
    // 0x2f0c64: 0xe4401d00  swc1        $f0, 0x1D00($v0)
    ctx->pc = 0x2f0c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7424), bits); }
label_2f0c68:
    // 0x2f0c68: 0x217b823  subu        $s7, $s0, $s7
    ctx->pc = 0x2f0c68u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2f0c6c:
    // 0x2f0c6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f0c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c70:
    // 0x2f0c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c74:
    // 0x2f0c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f0c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c78:
    // 0x2f0c78: 0x2c0f809  jalr        $s6
label_2f0c7c:
    if (ctx->pc == 0x2F0C7Cu) {
        ctx->pc = 0x2F0C7Cu;
            // 0x2f0c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2F0C80u;
        goto label_2f0c80;
    }
    ctx->pc = 0x2F0C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x2F0C80u);
        ctx->pc = 0x2F0C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C78u;
            // 0x2f0c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C80u; }
            if (ctx->pc != 0x2F0C80u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0C80u;
label_2f0c80:
    // 0x2f0c80: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2f0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0c84:
    // 0x2f0c84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f0c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f0c88:
    // 0x2f0c88: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2f0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0c8c:
    // 0x2f0c8c: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x2f0c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_2f0c90:
    // 0x2f0c90: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2f0c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f0c94:
    // 0x2f0c94: 0x0  nop
    ctx->pc = 0x2f0c94u;
    // NOP
label_2f0c98:
    // 0x2f0c98: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2f0c98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2f0c9c:
    // 0x2f0c9c: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2f0c9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2f0ca0:
    // 0x2f0ca0: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2f0ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_2f0ca4:
    // 0x2f0ca4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2f0ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0ca8:
    // 0x2f0ca8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2f0ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0cac:
    // 0x2f0cac: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2f0cacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2f0cb0:
    // 0x2f0cb0: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2f0cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2f0cb4:
    // 0x2f0cb4: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x2f0cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2f0cb8:
    // 0x2f0cb8: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x2f0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0cbc:
    // 0x2f0cbc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2f0cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0cc0:
    // 0x2f0cc0: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2f0cc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2f0cc4:
    // 0x2f0cc4: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2f0cc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2f0cc8:
    // 0x2f0cc8: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x2f0cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2f0ccc:
    // 0x2f0ccc: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2f0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0cd0:
    // 0x2f0cd0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2f0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0cd4:
    // 0x2f0cd4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2f0cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0cd8:
    // 0x2f0cd8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2f0cd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2f0cdc:
    // 0x2f0cdc: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2f0cdcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2f0ce0:
    // 0x2f0ce0: 0x4602005c  madd.s      $f1, $f0, $f2
    ctx->pc = 0x2f0ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_2f0ce4:
    // 0x2f0ce4: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x2f0ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2f0ce8:
    // 0x2f0ce8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2f0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0cec:
    // 0x2f0cec: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2f0cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0cf0:
    // 0x2f0cf0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2f0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0cf4:
    // 0x2f0cf4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2f0cf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2f0cf8:
    // 0x2f0cf8: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2f0cf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2f0cfc:
    // 0x2f0cfc: 0x4602005c  madd.s      $f1, $f0, $f2
    ctx->pc = 0x2f0cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_2f0d00:
    // 0x2f0d00: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2f0d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2f0d04:
    // 0x2f0d04: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2f0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0d08:
    // 0x2f0d08: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2f0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0d0c:
    // 0x2f0d0c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2f0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0d10:
    // 0x2f0d10: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f0d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2f0d14:
    // 0x2f0d14: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2f0d14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2f0d18:
    // 0x2f0d18: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2f0d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2f0d1c:
    // 0x2f0d1c: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2f0d1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2f0d20:
    // 0x2f0d20: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x2f0d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_2f0d24:
    // 0x2f0d24: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_2f0d28:
    if (ctx->pc == 0x2F0D28u) {
        ctx->pc = 0x2F0D28u;
            // 0x2f0d28: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->pc = 0x2F0D2Cu;
        goto label_2f0d2c;
    }
    ctx->pc = 0x2F0D24u;
    {
        const bool branch_taken_0x2f0d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D24u;
            // 0x2f0d28: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d24) {
            ctx->pc = 0x2F0C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0c70;
        }
    }
    ctx->pc = 0x2F0D2Cu;
label_2f0d2c:
    // 0x2f0d2c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f0d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d30:
    // 0x2f0d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d34:
    // 0x2f0d34: 0xc04cc90  jal         func_133240
label_2f0d38:
    if (ctx->pc == 0x2F0D38u) {
        ctx->pc = 0x2F0D38u;
            // 0x2f0d38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D3Cu;
        goto label_2f0d3c;
    }
    ctx->pc = 0x2F0D34u;
    SET_GPR_U32(ctx, 31, 0x2F0D3Cu);
    ctx->pc = 0x2F0D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D34u;
            // 0x2f0d38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D3Cu; }
        if (ctx->pc != 0x2F0D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D3Cu; }
        if (ctx->pc != 0x2F0D3Cu) { return; }
    }
    ctx->pc = 0x2F0D3Cu;
label_2f0d3c:
    // 0x2f0d3c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2f0d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0d40:
    // 0x2f0d40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f0d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0d44:
    // 0x2f0d44: 0x0  nop
    ctx->pc = 0x2f0d44u;
    // NOP
label_2f0d48:
    // 0x2f0d48: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f0d48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0d4c:
    // 0x2f0d4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f0d50:
    if (ctx->pc == 0x2F0D50u) {
        ctx->pc = 0x2F0D50u;
            // 0x2f0d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0D54u;
        goto label_2f0d54;
    }
    ctx->pc = 0x2F0D4Cu;
    {
        const bool branch_taken_0x2f0d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D4Cu;
            // 0x2f0d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d4c) {
            ctx->pc = 0x2F0D58u;
            goto label_2f0d58;
        }
    }
    ctx->pc = 0x2F0D54u;
label_2f0d54:
    // 0x2f0d54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d58:
    // 0x2f0d58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f0d5c:
    if (ctx->pc == 0x2F0D5Cu) {
        ctx->pc = 0x2F0D60u;
        goto label_2f0d60;
    }
    ctx->pc = 0x2F0D58u;
    {
        const bool branch_taken_0x2f0d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d58) {
            ctx->pc = 0x2F0D7Cu;
            goto label_2f0d7c;
        }
    }
    ctx->pc = 0x2F0D60u;
label_2f0d60:
    // 0x2f0d60: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2f0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0d64:
    // 0x2f0d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f0d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0d68:
    // 0x2f0d68: 0x0  nop
    ctx->pc = 0x2f0d68u;
    // NOP
label_2f0d6c:
    // 0x2f0d6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f0d6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0d70:
    // 0x2f0d70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f0d74:
    if (ctx->pc == 0x2F0D74u) {
        ctx->pc = 0x2F0D74u;
            // 0x2f0d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0D78u;
        goto label_2f0d78;
    }
    ctx->pc = 0x2F0D70u;
    {
        const bool branch_taken_0x2f0d70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D70u;
            // 0x2f0d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d70) {
            ctx->pc = 0x2F0D7Cu;
            goto label_2f0d7c;
        }
    }
    ctx->pc = 0x2F0D78u;
label_2f0d78:
    // 0x2f0d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d7c:
    // 0x2f0d7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f0d80:
    if (ctx->pc == 0x2F0D80u) {
        ctx->pc = 0x2F0D84u;
        goto label_2f0d84;
    }
    ctx->pc = 0x2F0D7Cu;
    {
        const bool branch_taken_0x2f0d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d7c) {
            ctx->pc = 0x2F0DA0u;
            goto label_2f0da0;
        }
    }
    ctx->pc = 0x2F0D84u;
label_2f0d84:
    // 0x2f0d84: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2f0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0d88:
    // 0x2f0d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f0d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0d8c:
    // 0x2f0d8c: 0x0  nop
    ctx->pc = 0x2f0d8cu;
    // NOP
label_2f0d90:
    // 0x2f0d90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f0d90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0d94:
    // 0x2f0d94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f0d98:
    if (ctx->pc == 0x2F0D98u) {
        ctx->pc = 0x2F0D98u;
            // 0x2f0d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0D9Cu;
        goto label_2f0d9c;
    }
    ctx->pc = 0x2F0D94u;
    {
        const bool branch_taken_0x2f0d94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D94u;
            // 0x2f0d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d94) {
            ctx->pc = 0x2F0DA0u;
            goto label_2f0da0;
        }
    }
    ctx->pc = 0x2F0D9Cu;
label_2f0d9c:
    // 0x2f0d9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0da0:
    // 0x2f0da0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2f0da4:
    if (ctx->pc == 0x2F0DA4u) {
        ctx->pc = 0x2F0DA4u;
            // 0x2f0da4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2F0DA8u;
        goto label_2f0da8;
    }
    ctx->pc = 0x2F0DA0u;
    {
        const bool branch_taken_0x2f0da0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f0da0) {
            ctx->pc = 0x2F0DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DA0u;
            // 0x2f0da4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0DB4u;
            goto label_2f0db4;
        }
    }
    ctx->pc = 0x2F0DA8u;
label_2f0da8:
    // 0x2f0da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0dac:
    // 0x2f0dac: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f0db0:
    if (ctx->pc == 0x2F0DB0u) {
        ctx->pc = 0x2F0DB0u;
            // 0x2f0db0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F0DB4u;
        goto label_2f0db4;
    }
    ctx->pc = 0x2F0DACu;
    {
        const bool branch_taken_0x2f0dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DACu;
            // 0x2f0db0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0dac) {
            ctx->pc = 0x2F0DCCu;
            goto label_2f0dcc;
        }
    }
    ctx->pc = 0x2F0DB4u;
label_2f0db4:
    // 0x2f0db4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f0db8:
    // 0x2f0db8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0dbc:
    // 0x2f0dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0dc0:
    // 0x2f0dc0: 0x0  nop
    ctx->pc = 0x2f0dc0u;
    // NOP
label_2f0dc4:
    // 0x2f0dc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f0dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2f0dc8:
    // 0x2f0dc8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f0dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f0dcc:
    // 0x2f0dcc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2f0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0dd0:
    // 0x2f0dd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0dd4:
    // 0x2f0dd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f0dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0dd8:
    // 0x2f0dd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f0dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f0ddc:
    // 0x2f0ddc: 0xc04cc44  jal         func_133110
label_2f0de0:
    if (ctx->pc == 0x2F0DE0u) {
        ctx->pc = 0x2F0DE0u;
            // 0x2f0de0: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->pc = 0x2F0DE4u;
        goto label_2f0de4;
    }
    ctx->pc = 0x2F0DDCu;
    SET_GPR_U32(ctx, 31, 0x2F0DE4u);
    ctx->pc = 0x2F0DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DDCu;
            // 0x2f0de0: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DE4u; }
        if (ctx->pc != 0x2F0DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DE4u; }
        if (ctx->pc != 0x2F0DE4u) { return; }
    }
    ctx->pc = 0x2F0DE4u;
label_2f0de4:
    // 0x2f0de4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2f0de4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2f0de8:
    // 0x2f0de8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f0de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f0dec:
    // 0x2f0dec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2f0decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f0df0:
    // 0x2f0df0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f0df4:
    // 0x2f0df4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2f0df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f0df8:
    // 0x2f0df8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f0df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f0dfc:
    // 0x2f0dfc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f0dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0e00:
    // 0x2f0e00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0e04:
    // 0x2f0e04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0e08:
    // 0x2f0e08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0e0c:
    // 0x2f0e0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0e10:
    // 0x2f0e10: 0x3e00008  jr          $ra
label_2f0e14:
    if (ctx->pc == 0x2F0E14u) {
        ctx->pc = 0x2F0E14u;
            // 0x2f0e14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2F0E18u;
        goto label_2f0e18;
    }
    ctx->pc = 0x2F0E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E10u;
            // 0x2f0e14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0E18u;
label_2f0e18:
    // 0x2f0e18: 0x0  nop
    ctx->pc = 0x2f0e18u;
    // NOP
label_2f0e1c:
    // 0x2f0e1c: 0x0  nop
    ctx->pc = 0x2f0e1cu;
    // NOP
}
