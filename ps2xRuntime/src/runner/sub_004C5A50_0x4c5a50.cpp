#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C5A50
// Address: 0x4c5a50 - 0x4c5d60
void sub_004C5A50_0x4c5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5A50_0x4c5a50");
#endif

    switch (ctx->pc) {
        case 0x4c5a50u: goto label_4c5a50;
        case 0x4c5a54u: goto label_4c5a54;
        case 0x4c5a58u: goto label_4c5a58;
        case 0x4c5a5cu: goto label_4c5a5c;
        case 0x4c5a60u: goto label_4c5a60;
        case 0x4c5a64u: goto label_4c5a64;
        case 0x4c5a68u: goto label_4c5a68;
        case 0x4c5a6cu: goto label_4c5a6c;
        case 0x4c5a70u: goto label_4c5a70;
        case 0x4c5a74u: goto label_4c5a74;
        case 0x4c5a78u: goto label_4c5a78;
        case 0x4c5a7cu: goto label_4c5a7c;
        case 0x4c5a80u: goto label_4c5a80;
        case 0x4c5a84u: goto label_4c5a84;
        case 0x4c5a88u: goto label_4c5a88;
        case 0x4c5a8cu: goto label_4c5a8c;
        case 0x4c5a90u: goto label_4c5a90;
        case 0x4c5a94u: goto label_4c5a94;
        case 0x4c5a98u: goto label_4c5a98;
        case 0x4c5a9cu: goto label_4c5a9c;
        case 0x4c5aa0u: goto label_4c5aa0;
        case 0x4c5aa4u: goto label_4c5aa4;
        case 0x4c5aa8u: goto label_4c5aa8;
        case 0x4c5aacu: goto label_4c5aac;
        case 0x4c5ab0u: goto label_4c5ab0;
        case 0x4c5ab4u: goto label_4c5ab4;
        case 0x4c5ab8u: goto label_4c5ab8;
        case 0x4c5abcu: goto label_4c5abc;
        case 0x4c5ac0u: goto label_4c5ac0;
        case 0x4c5ac4u: goto label_4c5ac4;
        case 0x4c5ac8u: goto label_4c5ac8;
        case 0x4c5accu: goto label_4c5acc;
        case 0x4c5ad0u: goto label_4c5ad0;
        case 0x4c5ad4u: goto label_4c5ad4;
        case 0x4c5ad8u: goto label_4c5ad8;
        case 0x4c5adcu: goto label_4c5adc;
        case 0x4c5ae0u: goto label_4c5ae0;
        case 0x4c5ae4u: goto label_4c5ae4;
        case 0x4c5ae8u: goto label_4c5ae8;
        case 0x4c5aecu: goto label_4c5aec;
        case 0x4c5af0u: goto label_4c5af0;
        case 0x4c5af4u: goto label_4c5af4;
        case 0x4c5af8u: goto label_4c5af8;
        case 0x4c5afcu: goto label_4c5afc;
        case 0x4c5b00u: goto label_4c5b00;
        case 0x4c5b04u: goto label_4c5b04;
        case 0x4c5b08u: goto label_4c5b08;
        case 0x4c5b0cu: goto label_4c5b0c;
        case 0x4c5b10u: goto label_4c5b10;
        case 0x4c5b14u: goto label_4c5b14;
        case 0x4c5b18u: goto label_4c5b18;
        case 0x4c5b1cu: goto label_4c5b1c;
        case 0x4c5b20u: goto label_4c5b20;
        case 0x4c5b24u: goto label_4c5b24;
        case 0x4c5b28u: goto label_4c5b28;
        case 0x4c5b2cu: goto label_4c5b2c;
        case 0x4c5b30u: goto label_4c5b30;
        case 0x4c5b34u: goto label_4c5b34;
        case 0x4c5b38u: goto label_4c5b38;
        case 0x4c5b3cu: goto label_4c5b3c;
        case 0x4c5b40u: goto label_4c5b40;
        case 0x4c5b44u: goto label_4c5b44;
        case 0x4c5b48u: goto label_4c5b48;
        case 0x4c5b4cu: goto label_4c5b4c;
        case 0x4c5b50u: goto label_4c5b50;
        case 0x4c5b54u: goto label_4c5b54;
        case 0x4c5b58u: goto label_4c5b58;
        case 0x4c5b5cu: goto label_4c5b5c;
        case 0x4c5b60u: goto label_4c5b60;
        case 0x4c5b64u: goto label_4c5b64;
        case 0x4c5b68u: goto label_4c5b68;
        case 0x4c5b6cu: goto label_4c5b6c;
        case 0x4c5b70u: goto label_4c5b70;
        case 0x4c5b74u: goto label_4c5b74;
        case 0x4c5b78u: goto label_4c5b78;
        case 0x4c5b7cu: goto label_4c5b7c;
        case 0x4c5b80u: goto label_4c5b80;
        case 0x4c5b84u: goto label_4c5b84;
        case 0x4c5b88u: goto label_4c5b88;
        case 0x4c5b8cu: goto label_4c5b8c;
        case 0x4c5b90u: goto label_4c5b90;
        case 0x4c5b94u: goto label_4c5b94;
        case 0x4c5b98u: goto label_4c5b98;
        case 0x4c5b9cu: goto label_4c5b9c;
        case 0x4c5ba0u: goto label_4c5ba0;
        case 0x4c5ba4u: goto label_4c5ba4;
        case 0x4c5ba8u: goto label_4c5ba8;
        case 0x4c5bacu: goto label_4c5bac;
        case 0x4c5bb0u: goto label_4c5bb0;
        case 0x4c5bb4u: goto label_4c5bb4;
        case 0x4c5bb8u: goto label_4c5bb8;
        case 0x4c5bbcu: goto label_4c5bbc;
        case 0x4c5bc0u: goto label_4c5bc0;
        case 0x4c5bc4u: goto label_4c5bc4;
        case 0x4c5bc8u: goto label_4c5bc8;
        case 0x4c5bccu: goto label_4c5bcc;
        case 0x4c5bd0u: goto label_4c5bd0;
        case 0x4c5bd4u: goto label_4c5bd4;
        case 0x4c5bd8u: goto label_4c5bd8;
        case 0x4c5bdcu: goto label_4c5bdc;
        case 0x4c5be0u: goto label_4c5be0;
        case 0x4c5be4u: goto label_4c5be4;
        case 0x4c5be8u: goto label_4c5be8;
        case 0x4c5becu: goto label_4c5bec;
        case 0x4c5bf0u: goto label_4c5bf0;
        case 0x4c5bf4u: goto label_4c5bf4;
        case 0x4c5bf8u: goto label_4c5bf8;
        case 0x4c5bfcu: goto label_4c5bfc;
        case 0x4c5c00u: goto label_4c5c00;
        case 0x4c5c04u: goto label_4c5c04;
        case 0x4c5c08u: goto label_4c5c08;
        case 0x4c5c0cu: goto label_4c5c0c;
        case 0x4c5c10u: goto label_4c5c10;
        case 0x4c5c14u: goto label_4c5c14;
        case 0x4c5c18u: goto label_4c5c18;
        case 0x4c5c1cu: goto label_4c5c1c;
        case 0x4c5c20u: goto label_4c5c20;
        case 0x4c5c24u: goto label_4c5c24;
        case 0x4c5c28u: goto label_4c5c28;
        case 0x4c5c2cu: goto label_4c5c2c;
        case 0x4c5c30u: goto label_4c5c30;
        case 0x4c5c34u: goto label_4c5c34;
        case 0x4c5c38u: goto label_4c5c38;
        case 0x4c5c3cu: goto label_4c5c3c;
        case 0x4c5c40u: goto label_4c5c40;
        case 0x4c5c44u: goto label_4c5c44;
        case 0x4c5c48u: goto label_4c5c48;
        case 0x4c5c4cu: goto label_4c5c4c;
        case 0x4c5c50u: goto label_4c5c50;
        case 0x4c5c54u: goto label_4c5c54;
        case 0x4c5c58u: goto label_4c5c58;
        case 0x4c5c5cu: goto label_4c5c5c;
        case 0x4c5c60u: goto label_4c5c60;
        case 0x4c5c64u: goto label_4c5c64;
        case 0x4c5c68u: goto label_4c5c68;
        case 0x4c5c6cu: goto label_4c5c6c;
        case 0x4c5c70u: goto label_4c5c70;
        case 0x4c5c74u: goto label_4c5c74;
        case 0x4c5c78u: goto label_4c5c78;
        case 0x4c5c7cu: goto label_4c5c7c;
        case 0x4c5c80u: goto label_4c5c80;
        case 0x4c5c84u: goto label_4c5c84;
        case 0x4c5c88u: goto label_4c5c88;
        case 0x4c5c8cu: goto label_4c5c8c;
        case 0x4c5c90u: goto label_4c5c90;
        case 0x4c5c94u: goto label_4c5c94;
        case 0x4c5c98u: goto label_4c5c98;
        case 0x4c5c9cu: goto label_4c5c9c;
        case 0x4c5ca0u: goto label_4c5ca0;
        case 0x4c5ca4u: goto label_4c5ca4;
        case 0x4c5ca8u: goto label_4c5ca8;
        case 0x4c5cacu: goto label_4c5cac;
        case 0x4c5cb0u: goto label_4c5cb0;
        case 0x4c5cb4u: goto label_4c5cb4;
        case 0x4c5cb8u: goto label_4c5cb8;
        case 0x4c5cbcu: goto label_4c5cbc;
        case 0x4c5cc0u: goto label_4c5cc0;
        case 0x4c5cc4u: goto label_4c5cc4;
        case 0x4c5cc8u: goto label_4c5cc8;
        case 0x4c5cccu: goto label_4c5ccc;
        case 0x4c5cd0u: goto label_4c5cd0;
        case 0x4c5cd4u: goto label_4c5cd4;
        case 0x4c5cd8u: goto label_4c5cd8;
        case 0x4c5cdcu: goto label_4c5cdc;
        case 0x4c5ce0u: goto label_4c5ce0;
        case 0x4c5ce4u: goto label_4c5ce4;
        case 0x4c5ce8u: goto label_4c5ce8;
        case 0x4c5cecu: goto label_4c5cec;
        case 0x4c5cf0u: goto label_4c5cf0;
        case 0x4c5cf4u: goto label_4c5cf4;
        case 0x4c5cf8u: goto label_4c5cf8;
        case 0x4c5cfcu: goto label_4c5cfc;
        case 0x4c5d00u: goto label_4c5d00;
        case 0x4c5d04u: goto label_4c5d04;
        case 0x4c5d08u: goto label_4c5d08;
        case 0x4c5d0cu: goto label_4c5d0c;
        case 0x4c5d10u: goto label_4c5d10;
        case 0x4c5d14u: goto label_4c5d14;
        case 0x4c5d18u: goto label_4c5d18;
        case 0x4c5d1cu: goto label_4c5d1c;
        case 0x4c5d20u: goto label_4c5d20;
        case 0x4c5d24u: goto label_4c5d24;
        case 0x4c5d28u: goto label_4c5d28;
        case 0x4c5d2cu: goto label_4c5d2c;
        case 0x4c5d30u: goto label_4c5d30;
        case 0x4c5d34u: goto label_4c5d34;
        case 0x4c5d38u: goto label_4c5d38;
        case 0x4c5d3cu: goto label_4c5d3c;
        case 0x4c5d40u: goto label_4c5d40;
        case 0x4c5d44u: goto label_4c5d44;
        case 0x4c5d48u: goto label_4c5d48;
        case 0x4c5d4cu: goto label_4c5d4c;
        case 0x4c5d50u: goto label_4c5d50;
        case 0x4c5d54u: goto label_4c5d54;
        case 0x4c5d58u: goto label_4c5d58;
        case 0x4c5d5cu: goto label_4c5d5c;
        default: break;
    }

    ctx->pc = 0x4c5a50u;

label_4c5a50:
    // 0x4c5a50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4c5a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4c5a54:
    // 0x4c5a54: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4c5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4c5a58:
    // 0x4c5a58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c5a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c5a5c:
    // 0x4c5a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5a60:
    // 0x4c5a60: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4c5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4c5a64:
    // 0x4c5a64: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4c5a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4c5a68:
    // 0x4c5a68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4c5a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4c5a6c:
    // 0x4c5a6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4c5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4c5a70:
    // 0x4c5a70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4c5a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4c5a74:
    // 0x4c5a74: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x4c5a74u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4c5a78:
    // 0x4c5a78: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x4c5a78u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c5a7c:
    // 0x4c5a7c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x4c5a7cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4c5a80:
    // 0x4c5a80: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x4c5a80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4c5a84:
    // 0x4c5a84: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4c5a84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4c5a88:
    // 0x4c5a88: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4c5a88u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4c5a8c:
    // 0x4c5a8c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4c5a8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4c5a90:
    // 0x4c5a90: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4c5a90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c5a94:
    // 0x4c5a94: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c5a94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c5a98:
    // 0x4c5a98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c5a9c:
    // 0x4c5a9c: 0xc4c10a7c  lwc1        $f1, 0xA7C($a2)
    ctx->pc = 0x4c5a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c5aa0:
    // 0x4c5aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c5aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c5aa4:
    // 0x4c5aa4: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
label_4c5aa8:
    if (ctx->pc == 0x4C5AA8u) {
        ctx->pc = 0x4C5AA8u;
            // 0x4c5aa8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AACu;
        goto label_4c5aac;
    }
    ctx->pc = 0x4C5AA4u;
    {
        const bool branch_taken_0x4c5aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C5AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5AA4u;
            // 0x4c5aa8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5aa4) {
            ctx->pc = 0x4C5D10u;
            goto label_4c5d10;
        }
    }
    ctx->pc = 0x4C5AACu;
label_4c5aac:
    // 0x4c5aac: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x4c5aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4c5ab0:
    // 0x4c5ab0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4c5ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4c5ab4:
    // 0x4c5ab4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c5ab8:
    // 0x4c5ab8: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4c5ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4c5abc:
    // 0x4c5abc: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x4c5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4c5ac0:
    // 0x4c5ac0: 0x92930008  lbu         $s3, 0x8($s4)
    ctx->pc = 0x4c5ac0u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_4c5ac4:
    // 0x4c5ac4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4c5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4c5ac8:
    // 0x4c5ac8: 0xc694000c  lwc1        $f20, 0xC($s4)
    ctx->pc = 0x4c5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c5acc:
    // 0x4c5acc: 0x2652a3e0  addiu       $s2, $s2, -0x5C20
    ctx->pc = 0x4c5accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943712));
label_4c5ad0:
    // 0x4c5ad0: 0x90500116  lbu         $s0, 0x116($v0)
    ctx->pc = 0x4c5ad0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_4c5ad4:
    // 0x4c5ad4: 0x213082a  slt         $at, $s0, $s3
    ctx->pc = 0x4c5ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_4c5ad8:
    // 0x4c5ad8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4c5adc:
    if (ctx->pc == 0x4C5ADCu) {
        ctx->pc = 0x4C5ADCu;
            // 0x4c5adc: 0x26312120  addiu       $s1, $s1, 0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8480));
        ctx->pc = 0x4C5AE0u;
        goto label_4c5ae0;
    }
    ctx->pc = 0x4C5AD8u;
    {
        const bool branch_taken_0x4c5ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5AD8u;
            // 0x4c5adc: 0x26312120  addiu       $s1, $s1, 0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5ad8) {
            ctx->pc = 0x4C5AE4u;
            goto label_4c5ae4;
        }
    }
    ctx->pc = 0x4C5AE0u;
label_4c5ae0:
    // 0x4c5ae0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4c5ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5ae4:
    // 0x4c5ae4: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x4c5ae4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_4c5ae8:
    // 0x4c5ae8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c5aec:
    // 0x4c5aec: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4c5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4c5af0:
    // 0x4c5af0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c5af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c5af4:
    // 0x4c5af4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c5af4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5af8:
    // 0x4c5af8: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x4c5af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_4c5afc:
    // 0x4c5afc: 0x46800760  cvt.s.w     $f29, $f0
    ctx->pc = 0x4c5afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[29] = FPU_CVT_S_W(tmp); }
label_4c5b00:
    // 0x4c5b00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5b04:
    // 0x4c5b04: 0xc0506ac  jal         func_141AB0
label_4c5b08:
    if (ctx->pc == 0x4C5B08u) {
        ctx->pc = 0x4C5B08u;
            // 0x4c5b08: 0x46800720  cvt.s.w     $f28, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4C5B0Cu;
        goto label_4c5b0c;
    }
    ctx->pc = 0x4C5B04u;
    SET_GPR_U32(ctx, 31, 0x4C5B0Cu);
    ctx->pc = 0x4C5B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5B04u;
            // 0x4c5b08: 0x46800720  cvt.s.w     $f28, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5B0Cu; }
        if (ctx->pc != 0x4C5B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5B0Cu; }
        if (ctx->pc != 0x4C5B0Cu) { return; }
    }
    ctx->pc = 0x4C5B0Cu;
label_4c5b0c:
    // 0x4c5b0c: 0xc642012c  lwc1        $f2, 0x12C($s2)
    ctx->pc = 0x4c5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5b10:
    // 0x4c5b10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4c5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4c5b14:
    // 0x4c5b14: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x4c5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5b18:
    // 0x4c5b18: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4c5b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4c5b1c:
    // 0x4c5b1c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c5b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5b20:
    // 0x4c5b20: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4c5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_4c5b24:
    // 0x4c5b24: 0x46022682  mul.s       $f26, $f4, $f2
    ctx->pc = 0x4c5b24u;
    ctx->f[26] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4c5b28:
    // 0x4c5b28: 0x46140642  mul.s       $f25, $f0, $f20
    ctx->pc = 0x4c5b28u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c5b2c:
    // 0x4c5b2c: 0xc6420178  lwc1        $f2, 0x178($s2)
    ctx->pc = 0x4c5b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5b30:
    // 0x4c5b30: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x4c5b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5b34:
    // 0x4c5b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c5b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c5b38:
    // 0x4c5b38: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c5b38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5b3c:
    // 0x4c5b3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4c5b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c5b40:
    // 0x4c5b40: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x4c5b40u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4c5b44:
    // 0x4c5b44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4c5b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4c5b48:
    // 0x4c5b48: 0xc6430128  lwc1        $f3, 0x128($s2)
    ctx->pc = 0x4c5b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c5b4c:
    // 0x4c5b4c: 0xc641013c  lwc1        $f1, 0x13C($s2)
    ctx->pc = 0x4c5b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c5b50:
    // 0x4c5b50: 0xc6420138  lwc1        $f2, 0x138($s2)
    ctx->pc = 0x4c5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5b54:
    // 0x4c5b54: 0x46141ec2  mul.s       $f27, $f3, $f20
    ctx->pc = 0x4c5b54u;
    ctx->f[27] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_4c5b58:
    // 0x4c5b58: 0xc643015c  lwc1        $f3, 0x15C($s2)
    ctx->pc = 0x4c5b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c5b5c:
    // 0x4c5b5c: 0x46002582  mul.s       $f22, $f4, $f0
    ctx->pc = 0x4c5b5cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c5b60:
    // 0x4c5b60: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x4c5b60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_4c5b64:
    // 0x4c5b64: 0x4619d800  add.s       $f0, $f27, $f25
    ctx->pc = 0x4c5b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[25]);
label_4c5b68:
    // 0x4c5b68: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4c5b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4c5b6c:
    // 0x4c5b6c: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x4c5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c5b70:
    // 0x4c5b70: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c5b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5b74:
    // 0x4c5b74: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x4c5b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_4c5b78:
    // 0x4c5b78: 0x46022d42  mul.s       $f21, $f5, $f2
    ctx->pc = 0x4c5b78u;
    ctx->f[21] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4c5b7c:
    // 0x4c5b7c: 0x46012502  mul.s       $f20, $f4, $f1
    ctx->pc = 0x4c5b7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_4c5b80:
    // 0x4c5b80: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x4c5b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_4c5b84:
    // 0x4c5b84: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x4c5b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4c5b88:
    // 0x4c5b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c5b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5b8c:
    // 0x4c5b8c: 0x0  nop
    ctx->pc = 0x4c5b8cu;
    // NOP
label_4c5b90:
    // 0x4c5b90: 0x461d0018  adda.s      $f0, $f29
    ctx->pc = 0x4c5b90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
label_4c5b94:
    // 0x4c5b94: 0x46032602  mul.s       $f24, $f4, $f3
    ctx->pc = 0x4c5b94u;
    ctx->f[24] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_4c5b98:
    // 0x4c5b98: 0xc0bcf34  jal         func_2F3CD0
label_4c5b9c:
    if (ctx->pc == 0x4C5B9Cu) {
        ctx->pc = 0x4C5B9Cu;
            // 0x4c5b9c: 0x4601275d  msub.s      $f29, $f4, $f1 (Delay Slot)
        ctx->f[29] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
        ctx->pc = 0x4C5BA0u;
        goto label_4c5ba0;
    }
    ctx->pc = 0x4C5B98u;
    SET_GPR_U32(ctx, 31, 0x4C5BA0u);
    ctx->pc = 0x4C5B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5B98u;
            // 0x4c5b9c: 0x4601275d  msub.s      $f29, $f4, $f1 (Delay Slot)
        ctx->f[29] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5BA0u; }
        if (ctx->pc != 0x4C5BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5BA0u; }
        if (ctx->pc != 0x4C5BA0u) { return; }
    }
    ctx->pc = 0x4C5BA0u;
label_4c5ba0:
    // 0x4c5ba0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4c5ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c5ba4:
    // 0x4c5ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c5ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c5ba8:
    // 0x4c5ba8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c5ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c5bac:
    // 0x4c5bac: 0x320f809  jalr        $t9
label_4c5bb0:
    if (ctx->pc == 0x4C5BB0u) {
        ctx->pc = 0x4C5BB0u;
            // 0x4c5bb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C5BB4u;
        goto label_4c5bb4;
    }
    ctx->pc = 0x4C5BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C5BB4u);
        ctx->pc = 0x4C5BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5BACu;
            // 0x4c5bb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C5BB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C5BB4u; }
            if (ctx->pc != 0x4C5BB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C5BB4u;
label_4c5bb4:
    // 0x4c5bb4: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x4c5bb4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5bb8:
    // 0x4c5bb8: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4c5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5bbc:
    // 0x4c5bbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5bc0:
    // 0x4c5bc0: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x4c5bc0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5bc4:
    // 0x4c5bc4: 0x461ae341  sub.s       $f13, $f28, $f26
    ctx->pc = 0x4c5bc4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[26]);
label_4c5bc8:
    // 0x4c5bc8: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x4c5bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_4c5bcc:
    // 0x4c5bcc: 0x2033025  or          $a2, $s0, $v1
    ctx->pc = 0x4c5bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_4c5bd0:
    // 0x4c5bd0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5bd4:
    // 0x4c5bd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5bd8:
    // 0x4c5bd8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4c5bd8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5bdc:
    // 0x4c5bdc: 0x0  nop
    ctx->pc = 0x4c5bdcu;
    // NOP
label_4c5be0:
    // 0x4c5be0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5be4:
    // 0x4c5be4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5be4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5be8:
    // 0x4c5be8: 0x0  nop
    ctx->pc = 0x4c5be8u;
    // NOP
label_4c5bec:
    // 0x4c5bec: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5bf0:
    // 0x4c5bf0: 0x461ae3c0  add.s       $f15, $f28, $f26
    ctx->pc = 0x4c5bf0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
label_4c5bf4:
    // 0x4c5bf4: 0x461beb80  add.s       $f14, $f29, $f27
    ctx->pc = 0x4c5bf4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[29], ctx->f[27]);
label_4c5bf8:
    // 0x4c5bf8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5bfc:
    // 0x4c5bfc: 0xc0bc284  jal         func_2F0A10
label_4c5c00:
    if (ctx->pc == 0x4C5C00u) {
        ctx->pc = 0x4C5C00u;
            // 0x4c5c00: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[29]);
        ctx->pc = 0x4C5C04u;
        goto label_4c5c04;
    }
    ctx->pc = 0x4C5BFCu;
    SET_GPR_U32(ctx, 31, 0x4C5C04u);
    ctx->pc = 0x4C5C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5BFCu;
            // 0x4c5c00: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5C04u; }
        if (ctx->pc != 0x4C5C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5C04u; }
        if (ctx->pc != 0x4C5C04u) { return; }
    }
    ctx->pc = 0x4C5C04u;
label_4c5c04:
    // 0x4c5c04: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4c5c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5c08:
    // 0x4c5c08: 0x461bee80  add.s       $f26, $f29, $f27
    ctx->pc = 0x4c5c08u;
    ctx->f[26] = FPU_ADD_S(ctx->f[29], ctx->f[27]);
label_4c5c0c:
    // 0x4c5c0c: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x4c5c0cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5c10:
    // 0x4c5c10: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x4c5c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_4c5c14:
    // 0x4c5c14: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5c18:
    // 0x4c5c18: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x4c5c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_4c5c1c:
    // 0x4c5c1c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4c5c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c5c20:
    // 0x4c5c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5c24:
    // 0x4c5c24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4c5c24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5c28:
    // 0x4c5c28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5c2c:
    // 0x4c5c2c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5c30:
    // 0x4c5c30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5c34:
    // 0x4c5c34: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5c34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5c38:
    // 0x4c5c38: 0x0  nop
    ctx->pc = 0x4c5c38u;
    // NOP
label_4c5c3c:
    // 0x4c5c3c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5c40:
    // 0x4c5c40: 0x4618e341  sub.s       $f13, $f28, $f24
    ctx->pc = 0x4c5c40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[24]);
label_4c5c44:
    // 0x4c5c44: 0x4618e3c0  add.s       $f15, $f28, $f24
    ctx->pc = 0x4c5c44u;
    ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[24]);
label_4c5c48:
    // 0x4c5c48: 0x4619d380  add.s       $f14, $f26, $f25
    ctx->pc = 0x4c5c48u;
    ctx->f[14] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
label_4c5c4c:
    // 0x4c5c4c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5c50:
    // 0x4c5c50: 0xc0bc284  jal         func_2F0A10
label_4c5c54:
    if (ctx->pc == 0x4C5C54u) {
        ctx->pc = 0x4C5C54u;
            // 0x4c5c54: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x4C5C58u;
        goto label_4c5c58;
    }
    ctx->pc = 0x4C5C50u;
    SET_GPR_U32(ctx, 31, 0x4C5C58u);
    ctx->pc = 0x4C5C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5C50u;
            // 0x4c5c54: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5C58u; }
        if (ctx->pc != 0x4C5C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5C58u; }
        if (ctx->pc != 0x4C5C58u) { return; }
    }
    ctx->pc = 0x4C5C58u;
label_4c5c58:
    // 0x4c5c58: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4c5c58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5c5c:
    // 0x4c5c5c: 0x4619d680  add.s       $f26, $f26, $f25
    ctx->pc = 0x4c5c5cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
label_4c5c60:
    // 0x4c5c60: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5c64:
    // 0x4c5c64: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c5c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5c68:
    // 0x4c5c68: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4c5c68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4c5c6c:
    // 0x4c5c6c: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x4c5c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_4c5c70:
    // 0x4c5c70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5c74:
    // 0x4c5c74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5c78:
    // 0x4c5c78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c5c78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5c7c:
    // 0x4c5c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5c80:
    // 0x4c5c80: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5c84:
    // 0x4c5c84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c5c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5c88:
    // 0x4c5c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5c8c:
    // 0x4c5c8c: 0x0  nop
    ctx->pc = 0x4c5c8cu;
    // NOP
label_4c5c90:
    // 0x4c5c90: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5c94:
    // 0x4c5c94: 0x4616e341  sub.s       $f13, $f28, $f22
    ctx->pc = 0x4c5c94u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[22]);
label_4c5c98:
    // 0x4c5c98: 0x4616e3c0  add.s       $f15, $f28, $f22
    ctx->pc = 0x4c5c98u;
    ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[22]);
label_4c5c9c:
    // 0x4c5c9c: 0x4617d380  add.s       $f14, $f26, $f23
    ctx->pc = 0x4c5c9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[26], ctx->f[23]);
label_4c5ca0:
    // 0x4c5ca0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5ca4:
    // 0x4c5ca4: 0xc0bc284  jal         func_2F0A10
label_4c5ca8:
    if (ctx->pc == 0x4C5CA8u) {
        ctx->pc = 0x4C5CA8u;
            // 0x4c5ca8: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x4C5CACu;
        goto label_4c5cac;
    }
    ctx->pc = 0x4C5CA4u;
    SET_GPR_U32(ctx, 31, 0x4C5CACu);
    ctx->pc = 0x4C5CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5CA4u;
            // 0x4c5ca8: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5CACu; }
        if (ctx->pc != 0x4C5CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5CACu; }
        if (ctx->pc != 0x4C5CACu) { return; }
    }
    ctx->pc = 0x4C5CACu;
label_4c5cac:
    // 0x4c5cac: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4c5cacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5cb0:
    // 0x4c5cb0: 0x4617d300  add.s       $f12, $f26, $f23
    ctx->pc = 0x4c5cb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[26], ctx->f[23]);
label_4c5cb4:
    // 0x4c5cb4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5cb8:
    // 0x4c5cb8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c5cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5cbc:
    // 0x4c5cbc: 0x26450130  addiu       $a1, $s2, 0x130
    ctx->pc = 0x4c5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
label_4c5cc0:
    // 0x4c5cc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c5cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5cc4:
    // 0x4c5cc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5cc8:
    // 0x4c5cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5ccc:
    // 0x4c5ccc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5cccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5cd0:
    // 0x4c5cd0: 0x0  nop
    ctx->pc = 0x4c5cd0u;
    // NOP
label_4c5cd4:
    // 0x4c5cd4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5cd8:
    // 0x4c5cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5cdc:
    // 0x4c5cdc: 0x0  nop
    ctx->pc = 0x4c5cdcu;
    // NOP
label_4c5ce0:
    // 0x4c5ce0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5ce4:
    // 0x4c5ce4: 0x46156380  add.s       $f14, $f12, $f21
    ctx->pc = 0x4c5ce4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_4c5ce8:
    // 0x4c5ce8: 0x4614e341  sub.s       $f13, $f28, $f20
    ctx->pc = 0x4c5ce8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[20]);
label_4c5cec:
    // 0x4c5cec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5cf0:
    // 0x4c5cf0: 0xc0bc284  jal         func_2F0A10
label_4c5cf4:
    if (ctx->pc == 0x4C5CF4u) {
        ctx->pc = 0x4C5CF4u;
            // 0x4c5cf4: 0x4614e3c0  add.s       $f15, $f28, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
        ctx->pc = 0x4C5CF8u;
        goto label_4c5cf8;
    }
    ctx->pc = 0x4C5CF0u;
    SET_GPR_U32(ctx, 31, 0x4C5CF8u);
    ctx->pc = 0x4C5CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5CF0u;
            // 0x4c5cf4: 0x4614e3c0  add.s       $f15, $f28, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5CF8u; }
        if (ctx->pc != 0x4C5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5CF8u; }
        if (ctx->pc != 0x4C5CF8u) { return; }
    }
    ctx->pc = 0x4C5CF8u;
label_4c5cf8:
    // 0x4c5cf8: 0xc0bcf34  jal         func_2F3CD0
label_4c5cfc:
    if (ctx->pc == 0x4C5CFCu) {
        ctx->pc = 0x4C5D00u;
        goto label_4c5d00;
    }
    ctx->pc = 0x4C5CF8u;
    SET_GPR_U32(ctx, 31, 0x4C5D00u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5D00u; }
        if (ctx->pc != 0x4C5D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5D00u; }
        if (ctx->pc != 0x4C5D00u) { return; }
    }
    ctx->pc = 0x4C5D00u;
label_4c5d00:
    // 0x4c5d00: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4c5d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c5d04:
    // 0x4c5d04: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c5d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c5d08:
    // 0x4c5d08: 0x320f809  jalr        $t9
label_4c5d0c:
    if (ctx->pc == 0x4C5D0Cu) {
        ctx->pc = 0x4C5D0Cu;
            // 0x4c5d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D10u;
        goto label_4c5d10;
    }
    ctx->pc = 0x4C5D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C5D10u);
        ctx->pc = 0x4C5D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5D08u;
            // 0x4c5d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C5D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C5D10u; }
            if (ctx->pc != 0x4C5D10u) { return; }
        }
        }
    }
    ctx->pc = 0x4C5D10u;
label_4c5d10:
    // 0x4c5d10: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c5d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c5d14:
    // 0x4c5d14: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x4c5d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_4c5d18:
    // 0x4c5d18: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4c5d18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c5d1c:
    // 0x4c5d1c: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x4c5d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_4c5d20:
    // 0x4c5d20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4c5d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c5d24:
    // 0x4c5d24: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x4c5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4c5d28:
    // 0x4c5d28: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4c5d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c5d2c:
    // 0x4c5d2c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4c5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4c5d30:
    // 0x4c5d30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4c5d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c5d34:
    // 0x4c5d34: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4c5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4c5d38:
    // 0x4c5d38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4c5d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c5d3c:
    // 0x4c5d3c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4c5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4c5d40:
    // 0x4c5d40: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4c5d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4c5d44:
    // 0x4c5d44: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4c5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4c5d48:
    // 0x4c5d48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c5d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c5d4c:
    // 0x4c5d4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c5d50:
    // 0x4c5d50: 0x3e00008  jr          $ra
label_4c5d54:
    if (ctx->pc == 0x4C5D54u) {
        ctx->pc = 0x4C5D54u;
            // 0x4c5d54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C5D58u;
        goto label_4c5d58;
    }
    ctx->pc = 0x4C5D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5D50u;
            // 0x4c5d54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5D58u;
label_4c5d58:
    // 0x4c5d58: 0x0  nop
    ctx->pc = 0x4c5d58u;
    // NOP
label_4c5d5c:
    // 0x4c5d5c: 0x0  nop
    ctx->pc = 0x4c5d5cu;
    // NOP
}
