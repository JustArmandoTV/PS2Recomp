#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3BE0
// Address: 0x1f3be0 - 0x1f3f10
void sub_001F3BE0_0x1f3be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3BE0_0x1f3be0");
#endif

    switch (ctx->pc) {
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3be4u: goto label_1f3be4;
        case 0x1f3be8u: goto label_1f3be8;
        case 0x1f3becu: goto label_1f3bec;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3bf4u: goto label_1f3bf4;
        case 0x1f3bf8u: goto label_1f3bf8;
        case 0x1f3bfcu: goto label_1f3bfc;
        case 0x1f3c00u: goto label_1f3c00;
        case 0x1f3c04u: goto label_1f3c04;
        case 0x1f3c08u: goto label_1f3c08;
        case 0x1f3c0cu: goto label_1f3c0c;
        case 0x1f3c10u: goto label_1f3c10;
        case 0x1f3c14u: goto label_1f3c14;
        case 0x1f3c18u: goto label_1f3c18;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c20u: goto label_1f3c20;
        case 0x1f3c24u: goto label_1f3c24;
        case 0x1f3c28u: goto label_1f3c28;
        case 0x1f3c2cu: goto label_1f3c2c;
        case 0x1f3c30u: goto label_1f3c30;
        case 0x1f3c34u: goto label_1f3c34;
        case 0x1f3c38u: goto label_1f3c38;
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3c40u: goto label_1f3c40;
        case 0x1f3c44u: goto label_1f3c44;
        case 0x1f3c48u: goto label_1f3c48;
        case 0x1f3c4cu: goto label_1f3c4c;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c5cu: goto label_1f3c5c;
        case 0x1f3c60u: goto label_1f3c60;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c6cu: goto label_1f3c6c;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c74u: goto label_1f3c74;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c84u: goto label_1f3c84;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c90u: goto label_1f3c90;
        case 0x1f3c94u: goto label_1f3c94;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3c9cu: goto label_1f3c9c;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3cb0u: goto label_1f3cb0;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cc0u: goto label_1f3cc0;
        case 0x1f3cc4u: goto label_1f3cc4;
        case 0x1f3cc8u: goto label_1f3cc8;
        case 0x1f3cccu: goto label_1f3ccc;
        case 0x1f3cd0u: goto label_1f3cd0;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3cd8u: goto label_1f3cd8;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3ce0u: goto label_1f3ce0;
        case 0x1f3ce4u: goto label_1f3ce4;
        case 0x1f3ce8u: goto label_1f3ce8;
        case 0x1f3cecu: goto label_1f3cec;
        case 0x1f3cf0u: goto label_1f3cf0;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3cf8u: goto label_1f3cf8;
        case 0x1f3cfcu: goto label_1f3cfc;
        case 0x1f3d00u: goto label_1f3d00;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d08u: goto label_1f3d08;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d14u: goto label_1f3d14;
        case 0x1f3d18u: goto label_1f3d18;
        case 0x1f3d1cu: goto label_1f3d1c;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d28u: goto label_1f3d28;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d30u: goto label_1f3d30;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d38u: goto label_1f3d38;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d40u: goto label_1f3d40;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d48u: goto label_1f3d48;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d50u: goto label_1f3d50;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d68u: goto label_1f3d68;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d78u: goto label_1f3d78;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d80u: goto label_1f3d80;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d90u: goto label_1f3d90;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d98u: goto label_1f3d98;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3da4u: goto label_1f3da4;
        case 0x1f3da8u: goto label_1f3da8;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3db8u: goto label_1f3db8;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dc4u: goto label_1f3dc4;
        case 0x1f3dc8u: goto label_1f3dc8;
        case 0x1f3dccu: goto label_1f3dcc;
        case 0x1f3dd0u: goto label_1f3dd0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3dd8u: goto label_1f3dd8;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3de0u: goto label_1f3de0;
        case 0x1f3de4u: goto label_1f3de4;
        case 0x1f3de8u: goto label_1f3de8;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df0u: goto label_1f3df0;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3dfcu: goto label_1f3dfc;
        case 0x1f3e00u: goto label_1f3e00;
        case 0x1f3e04u: goto label_1f3e04;
        case 0x1f3e08u: goto label_1f3e08;
        case 0x1f3e0cu: goto label_1f3e0c;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e14u: goto label_1f3e14;
        case 0x1f3e18u: goto label_1f3e18;
        case 0x1f3e1cu: goto label_1f3e1c;
        case 0x1f3e20u: goto label_1f3e20;
        case 0x1f3e24u: goto label_1f3e24;
        case 0x1f3e28u: goto label_1f3e28;
        case 0x1f3e2cu: goto label_1f3e2c;
        case 0x1f3e30u: goto label_1f3e30;
        case 0x1f3e34u: goto label_1f3e34;
        case 0x1f3e38u: goto label_1f3e38;
        case 0x1f3e3cu: goto label_1f3e3c;
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3e44u: goto label_1f3e44;
        case 0x1f3e48u: goto label_1f3e48;
        case 0x1f3e4cu: goto label_1f3e4c;
        case 0x1f3e50u: goto label_1f3e50;
        case 0x1f3e54u: goto label_1f3e54;
        case 0x1f3e58u: goto label_1f3e58;
        case 0x1f3e5cu: goto label_1f3e5c;
        case 0x1f3e60u: goto label_1f3e60;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e68u: goto label_1f3e68;
        case 0x1f3e6cu: goto label_1f3e6c;
        case 0x1f3e70u: goto label_1f3e70;
        case 0x1f3e74u: goto label_1f3e74;
        case 0x1f3e78u: goto label_1f3e78;
        case 0x1f3e7cu: goto label_1f3e7c;
        case 0x1f3e80u: goto label_1f3e80;
        case 0x1f3e84u: goto label_1f3e84;
        case 0x1f3e88u: goto label_1f3e88;
        case 0x1f3e8cu: goto label_1f3e8c;
        case 0x1f3e90u: goto label_1f3e90;
        case 0x1f3e94u: goto label_1f3e94;
        case 0x1f3e98u: goto label_1f3e98;
        case 0x1f3e9cu: goto label_1f3e9c;
        case 0x1f3ea0u: goto label_1f3ea0;
        case 0x1f3ea4u: goto label_1f3ea4;
        case 0x1f3ea8u: goto label_1f3ea8;
        case 0x1f3eacu: goto label_1f3eac;
        case 0x1f3eb0u: goto label_1f3eb0;
        case 0x1f3eb4u: goto label_1f3eb4;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ebcu: goto label_1f3ebc;
        case 0x1f3ec0u: goto label_1f3ec0;
        case 0x1f3ec4u: goto label_1f3ec4;
        case 0x1f3ec8u: goto label_1f3ec8;
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3ed4u: goto label_1f3ed4;
        case 0x1f3ed8u: goto label_1f3ed8;
        case 0x1f3edcu: goto label_1f3edc;
        case 0x1f3ee0u: goto label_1f3ee0;
        case 0x1f3ee4u: goto label_1f3ee4;
        case 0x1f3ee8u: goto label_1f3ee8;
        case 0x1f3eecu: goto label_1f3eec;
        case 0x1f3ef0u: goto label_1f3ef0;
        case 0x1f3ef4u: goto label_1f3ef4;
        case 0x1f3ef8u: goto label_1f3ef8;
        case 0x1f3efcu: goto label_1f3efc;
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f04u: goto label_1f3f04;
        case 0x1f3f08u: goto label_1f3f08;
        case 0x1f3f0cu: goto label_1f3f0c;
        default: break;
    }

    ctx->pc = 0x1f3be0u;

label_1f3be0:
    // 0x1f3be0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1f3be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1f3be4:
    // 0x1f3be4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f3be8:
    // 0x1f3be8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3bec:
    // 0x1f3bec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f3becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f3bf0:
    // 0x1f3bf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f3bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f3bf4:
    // 0x1f3bf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f3bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f3bf8:
    // 0x1f3bf8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f3bf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bfc:
    // 0x1f3bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f3c00:
    // 0x1f3c00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f3c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c04:
    // 0x1f3c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f3c08:
    // 0x1f3c08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f3c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c0c:
    // 0x1f3c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3c10:
    // 0x1f3c10: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f3c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c14:
    // 0x1f3c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f3c18:
    // 0x1f3c18: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f3c1c:
    // 0x1f3c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c20:
    // 0x1f3c20: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x1f3c20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3c24:
    // 0x1f3c24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f3c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f3c28:
    // 0x1f3c28: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f3c2c:
    // 0x1f3c2c: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f3c30:
    // 0x1f3c30: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f3c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f3c34:
    // 0x1f3c34: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f3c38:
    // 0x1f3c38: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f3c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f3c3c:
    // 0x1f3c3c: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f3c40:
    // 0x1f3c40: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f3c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f3c44:
    // 0x1f3c44: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3c48:
    // 0x1f3c48: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f3c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f3c4c:
    // 0x1f3c4c: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f3c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3c50:
    // 0x1f3c50: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f3c54:
    // 0x1f3c54: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f3c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3c58:
    // 0x1f3c58: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3c5c:
    // 0x1f3c5c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f3c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3c60:
    // 0x1f3c60: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3c64:
    // 0x1f3c64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3c68:
    // 0x1f3c68: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f3c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f3c6c:
    // 0x1f3c6c: 0xe7b000c4  swc1        $f16, 0xC4($sp)
    ctx->pc = 0x1f3c6cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f3c70:
    // 0x1f3c70: 0xe7af00c8  swc1        $f15, 0xC8($sp)
    ctx->pc = 0x1f3c70u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f3c74:
    // 0x1f3c74: 0xe7ae00cc  swc1        $f14, 0xCC($sp)
    ctx->pc = 0x1f3c74u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f3c78:
    // 0x1f3c78: 0xe7ad00d0  swc1        $f13, 0xD0($sp)
    ctx->pc = 0x1f3c78u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f3c7c:
    // 0x1f3c7c: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1f3c7cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f3c80:
    // 0x1f3c80: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1f3c80u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f3c84:
    // 0x1f3c84: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1f3c84u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f3c88:
    // 0x1f3c88: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f3c88u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f3c8c:
    // 0x1f3c8c: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x1f3c8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f3c90:
    // 0x1f3c90: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x1f3c90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f3c94:
    // 0x1f3c94: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x1f3c94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f3c98:
    // 0x1f3c98: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f3c98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f3c9c:
    // 0x1f3c9c: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1f3c9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f3ca0:
    // 0x1f3ca0: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f3ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f3ca4:
    // 0x1f3ca4: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f3ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f3ca8:
    // 0x1f3ca8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cac:
    // 0x1f3cac: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f3cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f3cb0:
    // 0x1f3cb0: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f3cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cb4:
    // 0x1f3cb4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f3cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f3cb8:
    // 0x1f3cb8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f3cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cbc:
    // 0x1f3cbc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f3cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f3cc0:
    // 0x1f3cc0: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f3cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cc4:
    // 0x1f3cc4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f3cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f3cc8:
    // 0x1f3cc8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ccc:
    // 0x1f3ccc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f3cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f3cd0:
    // 0x1f3cd0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cd4:
    // 0x1f3cd4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f3cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f3cd8:
    // 0x1f3cd8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cdc:
    // 0x1f3cdc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f3cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f3ce0:
    // 0x1f3ce0: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f3ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ce4:
    // 0x1f3ce4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f3ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f3ce8:
    // 0x1f3ce8: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f3ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cec:
    // 0x1f3cec: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f3cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f3cf0:
    // 0x1f3cf0: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f3cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cf4:
    // 0x1f3cf4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f3cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f3cf8:
    // 0x1f3cf8: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cfc:
    // 0x1f3cfc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f3cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f3d00:
    // 0x1f3d00: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f3d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d04:
    // 0x1f3d04: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f3d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f3d08:
    // 0x1f3d08: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f3d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d0c:
    // 0x1f3d0c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f3d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f3d10:
    // 0x1f3d10: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d14:
    // 0x1f3d14: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f3d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f3d18:
    // 0x1f3d18: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d1c:
    // 0x1f3d1c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f3d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f3d20:
    // 0x1f3d20: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d24:
    // 0x1f3d24: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f3d28:
    // 0x1f3d28: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d2c:
    // 0x1f3d2c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f3d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f3d30:
    // 0x1f3d30: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d34:
    // 0x1f3d34: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f3d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f3d38:
    // 0x1f3d38: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f3d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d3c:
    // 0x1f3d3c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f3d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f3d40:
    // 0x1f3d40: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d44:
    // 0x1f3d44: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f3d48:
    // 0x1f3d48: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f3d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d4c:
    // 0x1f3d4c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f3d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f3d50:
    // 0x1f3d50: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d54:
    // 0x1f3d54: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f3d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f3d58:
    // 0x1f3d58: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f3d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d5c:
    // 0x1f3d5c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f3d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f3d60:
    // 0x1f3d60: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f3d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d64:
    // 0x1f3d64: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f3d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f3d68:
    // 0x1f3d68: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f3d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d6c:
    // 0x1f3d6c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f3d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f3d70:
    // 0x1f3d70: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d74:
    // 0x1f3d74: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f3d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f3d78:
    // 0x1f3d78: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f3d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d7c:
    // 0x1f3d7c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f3d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f3d80:
    // 0x1f3d80: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d84:
    // 0x1f3d84: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f3d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f3d88:
    // 0x1f3d88: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d8c:
    // 0x1f3d8c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f3d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f3d90:
    // 0x1f3d90: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f3d90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f3d94:
    // 0x1f3d94: 0xa7a20174  sh          $v0, 0x174($sp)
    ctx->pc = 0x1f3d94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 372), (uint16_t)GPR_U32(ctx, 2));
label_1f3d98:
    // 0x1f3d98: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f3d98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f3d9c:
    // 0x1f3d9c: 0xa7a20176  sh          $v0, 0x176($sp)
    ctx->pc = 0x1f3d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 2));
label_1f3da0:
    // 0x1f3da0: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3da4:
    // 0x1f3da4: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3da8:
    // 0x1f3da8: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x1f3da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f3dac:
    // 0x1f3dac: 0xc0827ac  jal         func_209EB0
label_1f3db0:
    if (ctx->pc == 0x1F3DB0u) {
        ctx->pc = 0x1F3DB0u;
            // 0x1f3db0: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->pc = 0x1F3DB4u;
        goto label_1f3db4;
    }
    ctx->pc = 0x1F3DACu;
    SET_GPR_U32(ctx, 31, 0x1F3DB4u);
    ctx->pc = 0x1F3DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DACu;
            // 0x1f3db0: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DB4u; }
        if (ctx->pc != 0x1F3DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DB4u; }
        if (ctx->pc != 0x1F3DB4u) { return; }
    }
    ctx->pc = 0x1F3DB4u;
label_1f3db4:
    // 0x1f3db4: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1f3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f3db8:
    // 0x1f3db8: 0xafb5009c  sw          $s5, 0x9C($sp)
    ctx->pc = 0x1f3db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 21));
label_1f3dbc:
    // 0x1f3dbc: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1f3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_1f3dc0:
    // 0x1f3dc0: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f3dc4:
    // 0x1f3dc4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f3dc8:
    // 0x1f3dc8: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1f3dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f3dcc:
    // 0x1f3dcc: 0x6000040  bltz        $s0, . + 4 + (0x40 << 2)
label_1f3dd0:
    if (ctx->pc == 0x1F3DD0u) {
        ctx->pc = 0x1F3DD4u;
        goto label_1f3dd4;
    }
    ctx->pc = 0x1F3DCCu;
    {
        const bool branch_taken_0x1f3dcc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1f3dcc) {
            ctx->pc = 0x1F3ED0u;
            goto label_1f3ed0;
        }
    }
    ctx->pc = 0x1F3DD4u;
label_1f3dd4:
    // 0x1f3dd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f3dd8:
    // 0x1f3dd8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f3dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ddc:
    // 0x1f3ddc: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x1f3ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3de0:
    // 0x1f3de0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f3de4:
    // 0x1f3de4: 0xc7a800e0  lwc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3de8:
    // 0x1f3de8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f3dec:
    // 0x1f3dec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f3df0:
    // 0x1f3df0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f3df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3df4:
    // 0x1f3df4: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x1f3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1f3df8:
    // 0x1f3df8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f3df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3dfc:
    // 0x1f3dfc: 0xc48a0024  lwc1        $f10, 0x24($a0)
    ctx->pc = 0x1f3dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f3e00:
    // 0x1f3e00: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f3e04:
    // 0x1f3e04: 0xc48b0020  lwc1        $f11, 0x20($a0)
    ctx->pc = 0x1f3e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f3e08:
    // 0x1f3e08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f3e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e0c:
    // 0x1f3e0c: 0xc4890028  lwc1        $f9, 0x28($a0)
    ctx->pc = 0x1f3e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f3e10:
    // 0x1f3e10: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1f3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1f3e14:
    // 0x1f3e14: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x1f3e14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_1f3e18:
    // 0x1f3e18: 0x4606581e  madda.s     $f11, $f6
    ctx->pc = 0x1f3e18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[6]));
label_1f3e1c:
    // 0x1f3e1c: 0x4608499c  madd.s      $f6, $f9, $f8
    ctx->pc = 0x1f3e1cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
label_1f3e20:
    // 0x1f3e20: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x1f3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3e24:
    // 0x1f3e24: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1f3e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3e28:
    // 0x1f3e28: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x1f3e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f3e2c:
    // 0x1f3e2c: 0x4603501a  mula.s      $f10, $f3
    ctx->pc = 0x1f3e2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_1f3e30:
    // 0x1f3e30: 0x4604581e  madda.s     $f11, $f4
    ctx->pc = 0x1f3e30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[4]));
label_1f3e34:
    // 0x1f3e34: 0x460548dc  madd.s      $f3, $f9, $f5
    ctx->pc = 0x1f3e34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
label_1f3e38:
    // 0x1f3e38: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f3e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e3c:
    // 0x1f3e3c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1f3e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3e40:
    // 0x1f3e40: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1f3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3e44:
    // 0x1f3e44: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x1f3e44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_1f3e48:
    // 0x1f3e48: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1f3e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e4c:
    // 0x1f3e4c: 0x4601581e  madda.s     $f11, $f1
    ctx->pc = 0x1f3e4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_1f3e50:
    // 0x1f3e50: 0x4602485c  madd.s      $f1, $f9, $f2
    ctx->pc = 0x1f3e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_1f3e54:
    // 0x1f3e54: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1f3e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1f3e58:
    // 0x1f3e58: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f3e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f3e5c:
    // 0x1f3e5c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1f3e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e60:
    // 0x1f3e60: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1f3e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1f3e64:
    // 0x1f3e64: 0x0  nop
    ctx->pc = 0x1f3e64u;
    // NOP
label_1f3e68:
    // 0x1f3e68: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x1f3e68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f3e6c:
    // 0x1f3e6c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f3e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f3e70:
    // 0x1f3e70: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f3e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f3e74:
    // 0x1f3e74: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1f3e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e78:
    // 0x1f3e78: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1f3e78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f3e7c:
    // 0x1f3e7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3e80:
    // 0x1f3e80: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f3e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f3e84:
    // 0x1f3e84: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f3e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e88:
    // 0x1f3e88: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1f3e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1f3e8c:
    // 0x1f3e8c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1f3e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f3e90:
    // 0x1f3e90: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1f3e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e94:
    // 0x1f3e94: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f3e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f3e98:
    // 0x1f3e98: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1f3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1f3e9c:
    // 0x1f3e9c: 0xafb00094  sw          $s0, 0x94($sp)
    ctx->pc = 0x1f3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 16));
label_1f3ea0:
    // 0x1f3ea0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f3ea4:
    // 0x1f3ea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f3ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3ea8:
    // 0x1f3ea8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f3eac:
    // 0x1f3eac: 0x320f809  jalr        $t9
label_1f3eb0:
    if (ctx->pc == 0x1F3EB0u) {
        ctx->pc = 0x1F3EB0u;
            // 0x1f3eb0: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1F3EB4u;
        goto label_1f3eb4;
    }
    ctx->pc = 0x1F3EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F3EB4u);
        ctx->pc = 0x1F3EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EACu;
            // 0x1f3eb0: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F3EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EB4u; }
            if (ctx->pc != 0x1F3EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F3EB4u;
label_1f3eb4:
    // 0x1f3eb4: 0x82430004  lb          $v1, 0x4($s2)
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1f3eb8:
    // 0x1f3eb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1f3ebc:
    if (ctx->pc == 0x1F3EBCu) {
        ctx->pc = 0x1F3EC0u;
        goto label_1f3ec0;
    }
    ctx->pc = 0x1F3EB8u;
    {
        const bool branch_taken_0x1f3eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3eb8) {
            ctx->pc = 0x1F3ED0u;
            goto label_1f3ed0;
        }
    }
    ctx->pc = 0x1F3EC0u;
label_1f3ec0:
    // 0x1f3ec0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1f3ec4:
    // 0x1f3ec4: 0x601ffc3  bgez        $s0, . + 4 + (-0x3D << 2)
label_1f3ec8:
    if (ctx->pc == 0x1F3EC8u) {
        ctx->pc = 0x1F3EC8u;
            // 0x1f3ec8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1F3ECCu;
        goto label_1f3ecc;
    }
    ctx->pc = 0x1F3EC4u;
    {
        const bool branch_taken_0x1f3ec4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F3EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EC4u;
            // 0x1f3ec8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ec4) {
            ctx->pc = 0x1F3DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3dd4;
        }
    }
    ctx->pc = 0x1F3ECCu;
label_1f3ecc:
    // 0x1f3ecc: 0x0  nop
    ctx->pc = 0x1f3eccu;
    // NOP
label_1f3ed0:
    // 0x1f3ed0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f3ed4:
    // 0x1f3ed4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f3ed8:
    // 0x1f3ed8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1f3ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1f3edc:
    // 0x1f3edc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f3edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f3ee0:
    // 0x1f3ee0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f3ee0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f3ee4:
    // 0x1f3ee4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f3ee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f3ee8:
    // 0x1f3ee8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f3ee8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f3eec:
    // 0x1f3eec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f3eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3ef0:
    // 0x1f3ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f3ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3ef4:
    // 0x1f3ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3ef8:
    // 0x1f3ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3efc:
    // 0x1f3efc: 0x3e00008  jr          $ra
label_1f3f00:
    if (ctx->pc == 0x1F3F00u) {
        ctx->pc = 0x1F3F00u;
            // 0x1f3f00: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F3F04u;
        goto label_1f3f04;
    }
    ctx->pc = 0x1F3EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EFCu;
            // 0x1f3f00: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3F04u;
label_1f3f04:
    // 0x1f3f04: 0x0  nop
    ctx->pc = 0x1f3f04u;
    // NOP
label_1f3f08:
    // 0x1f3f08: 0x0  nop
    ctx->pc = 0x1f3f08u;
    // NOP
label_1f3f0c:
    // 0x1f3f0c: 0x0  nop
    ctx->pc = 0x1f3f0cu;
    // NOP
}
