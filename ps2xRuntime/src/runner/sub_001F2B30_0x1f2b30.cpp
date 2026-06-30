#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2B30
// Address: 0x1f2b30 - 0x1f2ec0
void sub_001F2B30_0x1f2b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2B30_0x1f2b30");
#endif

    switch (ctx->pc) {
        case 0x1f2b30u: goto label_1f2b30;
        case 0x1f2b34u: goto label_1f2b34;
        case 0x1f2b38u: goto label_1f2b38;
        case 0x1f2b3cu: goto label_1f2b3c;
        case 0x1f2b40u: goto label_1f2b40;
        case 0x1f2b44u: goto label_1f2b44;
        case 0x1f2b48u: goto label_1f2b48;
        case 0x1f2b4cu: goto label_1f2b4c;
        case 0x1f2b50u: goto label_1f2b50;
        case 0x1f2b54u: goto label_1f2b54;
        case 0x1f2b58u: goto label_1f2b58;
        case 0x1f2b5cu: goto label_1f2b5c;
        case 0x1f2b60u: goto label_1f2b60;
        case 0x1f2b64u: goto label_1f2b64;
        case 0x1f2b68u: goto label_1f2b68;
        case 0x1f2b6cu: goto label_1f2b6c;
        case 0x1f2b70u: goto label_1f2b70;
        case 0x1f2b74u: goto label_1f2b74;
        case 0x1f2b78u: goto label_1f2b78;
        case 0x1f2b7cu: goto label_1f2b7c;
        case 0x1f2b80u: goto label_1f2b80;
        case 0x1f2b84u: goto label_1f2b84;
        case 0x1f2b88u: goto label_1f2b88;
        case 0x1f2b8cu: goto label_1f2b8c;
        case 0x1f2b90u: goto label_1f2b90;
        case 0x1f2b94u: goto label_1f2b94;
        case 0x1f2b98u: goto label_1f2b98;
        case 0x1f2b9cu: goto label_1f2b9c;
        case 0x1f2ba0u: goto label_1f2ba0;
        case 0x1f2ba4u: goto label_1f2ba4;
        case 0x1f2ba8u: goto label_1f2ba8;
        case 0x1f2bacu: goto label_1f2bac;
        case 0x1f2bb0u: goto label_1f2bb0;
        case 0x1f2bb4u: goto label_1f2bb4;
        case 0x1f2bb8u: goto label_1f2bb8;
        case 0x1f2bbcu: goto label_1f2bbc;
        case 0x1f2bc0u: goto label_1f2bc0;
        case 0x1f2bc4u: goto label_1f2bc4;
        case 0x1f2bc8u: goto label_1f2bc8;
        case 0x1f2bccu: goto label_1f2bcc;
        case 0x1f2bd0u: goto label_1f2bd0;
        case 0x1f2bd4u: goto label_1f2bd4;
        case 0x1f2bd8u: goto label_1f2bd8;
        case 0x1f2bdcu: goto label_1f2bdc;
        case 0x1f2be0u: goto label_1f2be0;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2be8u: goto label_1f2be8;
        case 0x1f2becu: goto label_1f2bec;
        case 0x1f2bf0u: goto label_1f2bf0;
        case 0x1f2bf4u: goto label_1f2bf4;
        case 0x1f2bf8u: goto label_1f2bf8;
        case 0x1f2bfcu: goto label_1f2bfc;
        case 0x1f2c00u: goto label_1f2c00;
        case 0x1f2c04u: goto label_1f2c04;
        case 0x1f2c08u: goto label_1f2c08;
        case 0x1f2c0cu: goto label_1f2c0c;
        case 0x1f2c10u: goto label_1f2c10;
        case 0x1f2c14u: goto label_1f2c14;
        case 0x1f2c18u: goto label_1f2c18;
        case 0x1f2c1cu: goto label_1f2c1c;
        case 0x1f2c20u: goto label_1f2c20;
        case 0x1f2c24u: goto label_1f2c24;
        case 0x1f2c28u: goto label_1f2c28;
        case 0x1f2c2cu: goto label_1f2c2c;
        case 0x1f2c30u: goto label_1f2c30;
        case 0x1f2c34u: goto label_1f2c34;
        case 0x1f2c38u: goto label_1f2c38;
        case 0x1f2c3cu: goto label_1f2c3c;
        case 0x1f2c40u: goto label_1f2c40;
        case 0x1f2c44u: goto label_1f2c44;
        case 0x1f2c48u: goto label_1f2c48;
        case 0x1f2c4cu: goto label_1f2c4c;
        case 0x1f2c50u: goto label_1f2c50;
        case 0x1f2c54u: goto label_1f2c54;
        case 0x1f2c58u: goto label_1f2c58;
        case 0x1f2c5cu: goto label_1f2c5c;
        case 0x1f2c60u: goto label_1f2c60;
        case 0x1f2c64u: goto label_1f2c64;
        case 0x1f2c68u: goto label_1f2c68;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c70u: goto label_1f2c70;
        case 0x1f2c74u: goto label_1f2c74;
        case 0x1f2c78u: goto label_1f2c78;
        case 0x1f2c7cu: goto label_1f2c7c;
        case 0x1f2c80u: goto label_1f2c80;
        case 0x1f2c84u: goto label_1f2c84;
        case 0x1f2c88u: goto label_1f2c88;
        case 0x1f2c8cu: goto label_1f2c8c;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2c94u: goto label_1f2c94;
        case 0x1f2c98u: goto label_1f2c98;
        case 0x1f2c9cu: goto label_1f2c9c;
        case 0x1f2ca0u: goto label_1f2ca0;
        case 0x1f2ca4u: goto label_1f2ca4;
        case 0x1f2ca8u: goto label_1f2ca8;
        case 0x1f2cacu: goto label_1f2cac;
        case 0x1f2cb0u: goto label_1f2cb0;
        case 0x1f2cb4u: goto label_1f2cb4;
        case 0x1f2cb8u: goto label_1f2cb8;
        case 0x1f2cbcu: goto label_1f2cbc;
        case 0x1f2cc0u: goto label_1f2cc0;
        case 0x1f2cc4u: goto label_1f2cc4;
        case 0x1f2cc8u: goto label_1f2cc8;
        case 0x1f2cccu: goto label_1f2ccc;
        case 0x1f2cd0u: goto label_1f2cd0;
        case 0x1f2cd4u: goto label_1f2cd4;
        case 0x1f2cd8u: goto label_1f2cd8;
        case 0x1f2cdcu: goto label_1f2cdc;
        case 0x1f2ce0u: goto label_1f2ce0;
        case 0x1f2ce4u: goto label_1f2ce4;
        case 0x1f2ce8u: goto label_1f2ce8;
        case 0x1f2cecu: goto label_1f2cec;
        case 0x1f2cf0u: goto label_1f2cf0;
        case 0x1f2cf4u: goto label_1f2cf4;
        case 0x1f2cf8u: goto label_1f2cf8;
        case 0x1f2cfcu: goto label_1f2cfc;
        case 0x1f2d00u: goto label_1f2d00;
        case 0x1f2d04u: goto label_1f2d04;
        case 0x1f2d08u: goto label_1f2d08;
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d10u: goto label_1f2d10;
        case 0x1f2d14u: goto label_1f2d14;
        case 0x1f2d18u: goto label_1f2d18;
        case 0x1f2d1cu: goto label_1f2d1c;
        case 0x1f2d20u: goto label_1f2d20;
        case 0x1f2d24u: goto label_1f2d24;
        case 0x1f2d28u: goto label_1f2d28;
        case 0x1f2d2cu: goto label_1f2d2c;
        case 0x1f2d30u: goto label_1f2d30;
        case 0x1f2d34u: goto label_1f2d34;
        case 0x1f2d38u: goto label_1f2d38;
        case 0x1f2d3cu: goto label_1f2d3c;
        case 0x1f2d40u: goto label_1f2d40;
        case 0x1f2d44u: goto label_1f2d44;
        case 0x1f2d48u: goto label_1f2d48;
        case 0x1f2d4cu: goto label_1f2d4c;
        case 0x1f2d50u: goto label_1f2d50;
        case 0x1f2d54u: goto label_1f2d54;
        case 0x1f2d58u: goto label_1f2d58;
        case 0x1f2d5cu: goto label_1f2d5c;
        case 0x1f2d60u: goto label_1f2d60;
        case 0x1f2d64u: goto label_1f2d64;
        case 0x1f2d68u: goto label_1f2d68;
        case 0x1f2d6cu: goto label_1f2d6c;
        case 0x1f2d70u: goto label_1f2d70;
        case 0x1f2d74u: goto label_1f2d74;
        case 0x1f2d78u: goto label_1f2d78;
        case 0x1f2d7cu: goto label_1f2d7c;
        case 0x1f2d80u: goto label_1f2d80;
        case 0x1f2d84u: goto label_1f2d84;
        case 0x1f2d88u: goto label_1f2d88;
        case 0x1f2d8cu: goto label_1f2d8c;
        case 0x1f2d90u: goto label_1f2d90;
        case 0x1f2d94u: goto label_1f2d94;
        case 0x1f2d98u: goto label_1f2d98;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2da0u: goto label_1f2da0;
        case 0x1f2da4u: goto label_1f2da4;
        case 0x1f2da8u: goto label_1f2da8;
        case 0x1f2dacu: goto label_1f2dac;
        case 0x1f2db0u: goto label_1f2db0;
        case 0x1f2db4u: goto label_1f2db4;
        case 0x1f2db8u: goto label_1f2db8;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2dc0u: goto label_1f2dc0;
        case 0x1f2dc4u: goto label_1f2dc4;
        case 0x1f2dc8u: goto label_1f2dc8;
        case 0x1f2dccu: goto label_1f2dcc;
        case 0x1f2dd0u: goto label_1f2dd0;
        case 0x1f2dd4u: goto label_1f2dd4;
        case 0x1f2dd8u: goto label_1f2dd8;
        case 0x1f2ddcu: goto label_1f2ddc;
        case 0x1f2de0u: goto label_1f2de0;
        case 0x1f2de4u: goto label_1f2de4;
        case 0x1f2de8u: goto label_1f2de8;
        case 0x1f2decu: goto label_1f2dec;
        case 0x1f2df0u: goto label_1f2df0;
        case 0x1f2df4u: goto label_1f2df4;
        case 0x1f2df8u: goto label_1f2df8;
        case 0x1f2dfcu: goto label_1f2dfc;
        case 0x1f2e00u: goto label_1f2e00;
        case 0x1f2e04u: goto label_1f2e04;
        case 0x1f2e08u: goto label_1f2e08;
        case 0x1f2e0cu: goto label_1f2e0c;
        case 0x1f2e10u: goto label_1f2e10;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e18u: goto label_1f2e18;
        case 0x1f2e1cu: goto label_1f2e1c;
        case 0x1f2e20u: goto label_1f2e20;
        case 0x1f2e24u: goto label_1f2e24;
        case 0x1f2e28u: goto label_1f2e28;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e30u: goto label_1f2e30;
        case 0x1f2e34u: goto label_1f2e34;
        case 0x1f2e38u: goto label_1f2e38;
        case 0x1f2e3cu: goto label_1f2e3c;
        case 0x1f2e40u: goto label_1f2e40;
        case 0x1f2e44u: goto label_1f2e44;
        case 0x1f2e48u: goto label_1f2e48;
        case 0x1f2e4cu: goto label_1f2e4c;
        case 0x1f2e50u: goto label_1f2e50;
        case 0x1f2e54u: goto label_1f2e54;
        case 0x1f2e58u: goto label_1f2e58;
        case 0x1f2e5cu: goto label_1f2e5c;
        case 0x1f2e60u: goto label_1f2e60;
        case 0x1f2e64u: goto label_1f2e64;
        case 0x1f2e68u: goto label_1f2e68;
        case 0x1f2e6cu: goto label_1f2e6c;
        case 0x1f2e70u: goto label_1f2e70;
        case 0x1f2e74u: goto label_1f2e74;
        case 0x1f2e78u: goto label_1f2e78;
        case 0x1f2e7cu: goto label_1f2e7c;
        case 0x1f2e80u: goto label_1f2e80;
        case 0x1f2e84u: goto label_1f2e84;
        case 0x1f2e88u: goto label_1f2e88;
        case 0x1f2e8cu: goto label_1f2e8c;
        case 0x1f2e90u: goto label_1f2e90;
        case 0x1f2e94u: goto label_1f2e94;
        case 0x1f2e98u: goto label_1f2e98;
        case 0x1f2e9cu: goto label_1f2e9c;
        case 0x1f2ea0u: goto label_1f2ea0;
        case 0x1f2ea4u: goto label_1f2ea4;
        case 0x1f2ea8u: goto label_1f2ea8;
        case 0x1f2eacu: goto label_1f2eac;
        case 0x1f2eb0u: goto label_1f2eb0;
        case 0x1f2eb4u: goto label_1f2eb4;
        case 0x1f2eb8u: goto label_1f2eb8;
        case 0x1f2ebcu: goto label_1f2ebc;
        default: break;
    }

    ctx->pc = 0x1f2b30u;

label_1f2b30:
    // 0x1f2b30: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1f2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1f2b34:
    // 0x1f2b34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f2b38:
    // 0x1f2b38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f2b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2b3c:
    // 0x1f2b3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f2b40:
    // 0x1f2b40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f2b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f2b44:
    // 0x1f2b44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f2b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f2b48:
    // 0x1f2b48: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f2b48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b4c:
    // 0x1f2b4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f2b50:
    // 0x1f2b50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f2b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b54:
    // 0x1f2b54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f2b58:
    // 0x1f2b58: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f2b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b5c:
    // 0x1f2b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f2b60:
    // 0x1f2b60: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f2b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b64:
    // 0x1f2b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2b68:
    // 0x1f2b68: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f2b6c:
    // 0x1f2b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b70:
    // 0x1f2b70: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x1f2b70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f2b74:
    // 0x1f2b74: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f2b78:
    // 0x1f2b78: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f2b7c:
    // 0x1f2b7c: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f2b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f2b80:
    // 0x1f2b80: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f2b84:
    // 0x1f2b84: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f2b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f2b88:
    // 0x1f2b88: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f2b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f2b8c:
    // 0x1f2b8c: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f2b90:
    // 0x1f2b90: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f2b94:
    // 0x1f2b94: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f2b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f2b98:
    // 0x1f2b98: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f2b9c:
    // 0x1f2b9c: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f2ba0:
    // 0x1f2ba0: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f2ba4:
    // 0x1f2ba4: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f2ba8:
    // 0x1f2ba8: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f2ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2bac:
    // 0x1f2bac: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f2bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2bb0:
    // 0x1f2bb0: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f2bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2bb4:
    // 0x1f2bb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2bb8:
    // 0x1f2bb8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f2bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f2bbc:
    // 0x1f2bbc: 0xe7b000c4  swc1        $f16, 0xC4($sp)
    ctx->pc = 0x1f2bbcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f2bc0:
    // 0x1f2bc0: 0xe7af00c8  swc1        $f15, 0xC8($sp)
    ctx->pc = 0x1f2bc0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f2bc4:
    // 0x1f2bc4: 0xe7ae00cc  swc1        $f14, 0xCC($sp)
    ctx->pc = 0x1f2bc4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f2bc8:
    // 0x1f2bc8: 0xe7ad00d0  swc1        $f13, 0xD0($sp)
    ctx->pc = 0x1f2bc8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f2bcc:
    // 0x1f2bcc: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1f2bccu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f2bd0:
    // 0x1f2bd0: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1f2bd0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f2bd4:
    // 0x1f2bd4: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1f2bd4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f2bd8:
    // 0x1f2bd8: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f2bd8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f2bdc:
    // 0x1f2bdc: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x1f2bdcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f2be0:
    // 0x1f2be0: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x1f2be0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f2be4:
    // 0x1f2be4: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x1f2be4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f2be8:
    // 0x1f2be8: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f2be8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f2bec:
    // 0x1f2bec: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1f2becu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f2bf0:
    // 0x1f2bf0: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f2bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f2bf4:
    // 0x1f2bf4: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f2bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f2bf8:
    // 0x1f2bf8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2bfc:
    // 0x1f2bfc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f2bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f2c00:
    // 0x1f2c00: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c04:
    // 0x1f2c04: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f2c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f2c08:
    // 0x1f2c08: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f2c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c0c:
    // 0x1f2c0c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f2c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f2c10:
    // 0x1f2c10: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f2c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c14:
    // 0x1f2c14: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f2c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f2c18:
    // 0x1f2c18: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f2c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c1c:
    // 0x1f2c1c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f2c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f2c20:
    // 0x1f2c20: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f2c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c24:
    // 0x1f2c24: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f2c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f2c28:
    // 0x1f2c28: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c2c:
    // 0x1f2c2c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f2c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f2c30:
    // 0x1f2c30: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f2c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c34:
    // 0x1f2c34: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f2c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f2c38:
    // 0x1f2c38: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f2c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c3c:
    // 0x1f2c3c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f2c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f2c40:
    // 0x1f2c40: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c44:
    // 0x1f2c44: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f2c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f2c48:
    // 0x1f2c48: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f2c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c4c:
    // 0x1f2c4c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f2c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f2c50:
    // 0x1f2c50: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f2c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c54:
    // 0x1f2c54: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f2c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f2c58:
    // 0x1f2c58: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c5c:
    // 0x1f2c5c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f2c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f2c60:
    // 0x1f2c60: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c64:
    // 0x1f2c64: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f2c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f2c68:
    // 0x1f2c68: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f2c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c6c:
    // 0x1f2c6c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f2c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f2c70:
    // 0x1f2c70: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f2c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c74:
    // 0x1f2c74: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f2c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f2c78:
    // 0x1f2c78: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c7c:
    // 0x1f2c7c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f2c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f2c80:
    // 0x1f2c80: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f2c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c84:
    // 0x1f2c84: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f2c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f2c88:
    // 0x1f2c88: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f2c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c8c:
    // 0x1f2c8c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f2c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f2c90:
    // 0x1f2c90: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f2c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c94:
    // 0x1f2c94: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f2c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f2c98:
    // 0x1f2c98: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2c9c:
    // 0x1f2c9c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f2c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f2ca0:
    // 0x1f2ca0: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f2ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2ca4:
    // 0x1f2ca4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f2ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f2ca8:
    // 0x1f2ca8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f2ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cac:
    // 0x1f2cac: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f2cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f2cb0:
    // 0x1f2cb0: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cb4:
    // 0x1f2cb4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f2cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f2cb8:
    // 0x1f2cb8: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f2cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cbc:
    // 0x1f2cbc: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f2cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f2cc0:
    // 0x1f2cc0: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f2cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cc4:
    // 0x1f2cc4: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f2cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f2cc8:
    // 0x1f2cc8: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f2cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2ccc:
    // 0x1f2ccc: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f2cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f2cd0:
    // 0x1f2cd0: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f2cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cd4:
    // 0x1f2cd4: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f2cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f2cd8:
    // 0x1f2cd8: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cdc:
    // 0x1f2cdc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f2ce0:
    // 0x1f2ce0: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f2ce0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f2ce4:
    // 0x1f2ce4: 0xa7a20174  sh          $v0, 0x174($sp)
    ctx->pc = 0x1f2ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 372), (uint16_t)GPR_U32(ctx, 2));
label_1f2ce8:
    // 0x1f2ce8: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f2ce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f2cec:
    // 0x1f2cec: 0xa7a20176  sh          $v0, 0x176($sp)
    ctx->pc = 0x1f2cecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 2));
label_1f2cf0:
    // 0x1f2cf0: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2cf4:
    // 0x1f2cf4: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2cf8:
    // 0x1f2cf8: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x1f2cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f2cfc:
    // 0x1f2cfc: 0xc0827ac  jal         func_209EB0
label_1f2d00:
    if (ctx->pc == 0x1F2D00u) {
        ctx->pc = 0x1F2D00u;
            // 0x1f2d00: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->pc = 0x1F2D04u;
        goto label_1f2d04;
    }
    ctx->pc = 0x1F2CFCu;
    SET_GPR_U32(ctx, 31, 0x1F2D04u);
    ctx->pc = 0x1F2D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CFCu;
            // 0x1f2d00: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D04u; }
        if (ctx->pc != 0x1F2D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D04u; }
        if (ctx->pc != 0x1F2D04u) { return; }
    }
    ctx->pc = 0x1F2D04u;
label_1f2d04:
    // 0x1f2d04: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1f2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f2d08:
    // 0x1f2d08: 0xafb5009c  sw          $s5, 0x9C($sp)
    ctx->pc = 0x1f2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 21));
label_1f2d0c:
    // 0x1f2d0c: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1f2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_1f2d10:
    // 0x1f2d10: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1f2d10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f2d14:
    // 0x1f2d14: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f2d18:
    // 0x1f2d18: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f2d1c:
    // 0x1f2d1c: 0x600005a  bltz        $s0, . + 4 + (0x5A << 2)
label_1f2d20:
    if (ctx->pc == 0x1F2D20u) {
        ctx->pc = 0x1F2D24u;
        goto label_1f2d24;
    }
    ctx->pc = 0x1F2D1Cu;
    {
        const bool branch_taken_0x1f2d1c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1f2d1c) {
            ctx->pc = 0x1F2E88u;
            goto label_1f2e88;
        }
    }
    ctx->pc = 0x1F2D24u;
label_1f2d24:
    // 0x1f2d24: 0x6000058  bltz        $s0, . + 4 + (0x58 << 2)
label_1f2d28:
    if (ctx->pc == 0x1F2D28u) {
        ctx->pc = 0x1F2D2Cu;
        goto label_1f2d2c;
    }
    ctx->pc = 0x1F2D24u;
    {
        const bool branch_taken_0x1f2d24 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1f2d24) {
            ctx->pc = 0x1F2E88u;
            goto label_1f2e88;
        }
    }
    ctx->pc = 0x1F2D2Cu;
label_1f2d2c:
    // 0x1f2d2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f2d30:
    // 0x1f2d30: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f2d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2d34:
    // 0x1f2d34: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x1f2d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f2d38:
    // 0x1f2d38: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1f2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f2d3c:
    // 0x1f2d3c: 0xc7a700e0  lwc1        $f7, 0xE0($sp)
    ctx->pc = 0x1f2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f2d40:
    // 0x1f2d40: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f2d44:
    // 0x1f2d44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f2d48:
    // 0x1f2d48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f2d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d4c:
    // 0x1f2d4c: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x1f2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1f2d50:
    // 0x1f2d50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f2d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d54:
    // 0x1f2d54: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x1f2d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f2d58:
    // 0x1f2d58: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f2d5c:
    // 0x1f2d5c: 0xc48a0020  lwc1        $f10, 0x20($a0)
    ctx->pc = 0x1f2d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f2d60:
    // 0x1f2d60: 0xc4880028  lwc1        $f8, 0x28($a0)
    ctx->pc = 0x1f2d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f2d64:
    // 0x1f2d64: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x1f2d64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_1f2d68:
    // 0x1f2d68: 0x4606501e  madda.s     $f10, $f6
    ctx->pc = 0x1f2d68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[6]));
label_1f2d6c:
    // 0x1f2d6c: 0x4607419c  madd.s      $f6, $f8, $f7
    ctx->pc = 0x1f2d6cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
label_1f2d70:
    // 0x1f2d70: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x1f2d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2d74:
    // 0x1f2d74: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1f2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f2d78:
    // 0x1f2d78: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x1f2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f2d7c:
    // 0x1f2d7c: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x1f2d7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_1f2d80:
    // 0x1f2d80: 0x4604501e  madda.s     $f10, $f4
    ctx->pc = 0x1f2d80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_1f2d84:
    // 0x1f2d84: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f2d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2d88:
    // 0x1f2d88: 0x460540dc  madd.s      $f3, $f8, $f5
    ctx->pc = 0x1f2d88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_1f2d8c:
    // 0x1f2d8c: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x1f2d8cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f2d90:
    // 0x1f2d90: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1f2d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2d94:
    // 0x1f2d94: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x1f2d94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_1f2d98:
    // 0x1f2d98: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1f2d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2d9c:
    // 0x1f2d9c: 0x4601501e  madda.s     $f10, $f1
    ctx->pc = 0x1f2d9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
label_1f2da0:
    // 0x1f2da0: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1f2da0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f2da4:
    // 0x1f2da4: 0x4602401c  madd.s      $f0, $f8, $f2
    ctx->pc = 0x1f2da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
label_1f2da8:
    // 0x1f2da8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1f2da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f2dac:
    // 0x1f2dac: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1f2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1f2db0:
    // 0x1f2db0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1f2db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2db4:
    // 0x1f2db4: 0xc7a40080  lwc1        $f4, 0x80($sp)
    ctx->pc = 0x1f2db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f2db8:
    // 0x1f2db8: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x1f2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2dbc:
    // 0x1f2dbc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1f2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2dc0:
    // 0x1f2dc0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f2dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f2dc4:
    // 0x1f2dc4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f2dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f2dc8:
    // 0x1f2dc8: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1f2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2dcc:
    // 0x1f2dcc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1f2dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2dd0:
    // 0x1f2dd0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f2dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f2dd4:
    // 0x1f2dd4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f2dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f2dd8:
    // 0x1f2dd8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1f2dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2ddc:
    // 0x1f2ddc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f2ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f2de0:
    // 0x1f2de0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f2de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f2de4:
    // 0x1f2de4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f2de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2de8:
    // 0x1f2de8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f2dec:
    // 0x1f2dec: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1f2decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f2df0:
    // 0x1f2df0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f2df4:
    // 0x1f2df4: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f2df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2df8:
    // 0x1f2df8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f2df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f2dfc:
    // 0x1f2dfc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f2dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f2e00:
    // 0x1f2e00: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f2e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e04:
    // 0x1f2e04: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f2e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f2e08:
    // 0x1f2e08: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f2e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f2e0c:
    // 0x1f2e0c: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f2e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e10:
    // 0x1f2e10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f2e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f2e14:
    // 0x1f2e14: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f2e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f2e18:
    // 0x1f2e18: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e1c:
    // 0x1f2e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f2e20:
    // 0x1f2e20: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f2e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f2e24:
    // 0x1f2e24: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f2e28:
    // 0x1f2e28: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f2e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e2c:
    // 0x1f2e2c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f2e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f2e30:
    // 0x1f2e30: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f2e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f2e34:
    // 0x1f2e34: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e38:
    // 0x1f2e38: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f2e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f2e3c:
    // 0x1f2e3c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f2e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f2e40:
    // 0x1f2e40: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f2e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e44:
    // 0x1f2e44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f2e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f2e48:
    // 0x1f2e48: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f2e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f2e4c:
    // 0x1f2e4c: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e50:
    // 0x1f2e50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f2e54:
    // 0x1f2e54: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f2e58:
    // 0x1f2e58: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1f2e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2e5c:
    // 0x1f2e5c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f2e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f2e60:
    // 0x1f2e60: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1f2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1f2e64:
    // 0x1f2e64: 0xafb00094  sw          $s0, 0x94($sp)
    ctx->pc = 0x1f2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 16));
label_1f2e68:
    // 0x1f2e68: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f2e6c:
    // 0x1f2e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f2e70:
    // 0x1f2e70: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f2e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f2e74:
    // 0x1f2e74: 0x320f809  jalr        $t9
label_1f2e78:
    if (ctx->pc == 0x1F2E78u) {
        ctx->pc = 0x1F2E78u;
            // 0x1f2e78: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E7Cu;
        goto label_1f2e7c;
    }
    ctx->pc = 0x1F2E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F2E7Cu);
        ctx->pc = 0x1F2E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E74u;
            // 0x1f2e78: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F2E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E7Cu; }
            if (ctx->pc != 0x1F2E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F2E7Cu;
label_1f2e7c:
    // 0x1f2e7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1f2e80:
    // 0x1f2e80: 0x601ffaa  bgez        $s0, . + 4 + (-0x56 << 2)
label_1f2e84:
    if (ctx->pc == 0x1F2E84u) {
        ctx->pc = 0x1F2E84u;
            // 0x1f2e84: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1F2E88u;
        goto label_1f2e88;
    }
    ctx->pc = 0x1F2E80u;
    {
        const bool branch_taken_0x1f2e80 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F2E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E80u;
            // 0x1f2e84: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e80) {
            ctx->pc = 0x1F2D2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2d2c;
        }
    }
    ctx->pc = 0x1F2E88u;
label_1f2e88:
    // 0x1f2e88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f2e8c:
    // 0x1f2e8c: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f2e90:
    // 0x1f2e90: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1f2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1f2e94:
    // 0x1f2e94: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f2e98:
    // 0x1f2e98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f2e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f2e9c:
    // 0x1f2e9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f2e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f2ea0:
    // 0x1f2ea0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f2ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2ea4:
    // 0x1f2ea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f2ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2ea8:
    // 0x1f2ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2eac:
    // 0x1f2eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2eb0:
    // 0x1f2eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2eb4:
    // 0x1f2eb4: 0x3e00008  jr          $ra
label_1f2eb8:
    if (ctx->pc == 0x1F2EB8u) {
        ctx->pc = 0x1F2EB8u;
            // 0x1f2eb8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F2EBCu;
        goto label_1f2ebc;
    }
    ctx->pc = 0x1F2EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EB4u;
            // 0x1f2eb8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2EBCu;
label_1f2ebc:
    // 0x1f2ebc: 0x0  nop
    ctx->pc = 0x1f2ebcu;
    // NOP
}
