#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D0BC0
// Address: 0x3d0bc0 - 0x3d1020
void sub_003D0BC0_0x3d0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0BC0_0x3d0bc0");
#endif

    switch (ctx->pc) {
        case 0x3d0bc0u: goto label_3d0bc0;
        case 0x3d0bc4u: goto label_3d0bc4;
        case 0x3d0bc8u: goto label_3d0bc8;
        case 0x3d0bccu: goto label_3d0bcc;
        case 0x3d0bd0u: goto label_3d0bd0;
        case 0x3d0bd4u: goto label_3d0bd4;
        case 0x3d0bd8u: goto label_3d0bd8;
        case 0x3d0bdcu: goto label_3d0bdc;
        case 0x3d0be0u: goto label_3d0be0;
        case 0x3d0be4u: goto label_3d0be4;
        case 0x3d0be8u: goto label_3d0be8;
        case 0x3d0becu: goto label_3d0bec;
        case 0x3d0bf0u: goto label_3d0bf0;
        case 0x3d0bf4u: goto label_3d0bf4;
        case 0x3d0bf8u: goto label_3d0bf8;
        case 0x3d0bfcu: goto label_3d0bfc;
        case 0x3d0c00u: goto label_3d0c00;
        case 0x3d0c04u: goto label_3d0c04;
        case 0x3d0c08u: goto label_3d0c08;
        case 0x3d0c0cu: goto label_3d0c0c;
        case 0x3d0c10u: goto label_3d0c10;
        case 0x3d0c14u: goto label_3d0c14;
        case 0x3d0c18u: goto label_3d0c18;
        case 0x3d0c1cu: goto label_3d0c1c;
        case 0x3d0c20u: goto label_3d0c20;
        case 0x3d0c24u: goto label_3d0c24;
        case 0x3d0c28u: goto label_3d0c28;
        case 0x3d0c2cu: goto label_3d0c2c;
        case 0x3d0c30u: goto label_3d0c30;
        case 0x3d0c34u: goto label_3d0c34;
        case 0x3d0c38u: goto label_3d0c38;
        case 0x3d0c3cu: goto label_3d0c3c;
        case 0x3d0c40u: goto label_3d0c40;
        case 0x3d0c44u: goto label_3d0c44;
        case 0x3d0c48u: goto label_3d0c48;
        case 0x3d0c4cu: goto label_3d0c4c;
        case 0x3d0c50u: goto label_3d0c50;
        case 0x3d0c54u: goto label_3d0c54;
        case 0x3d0c58u: goto label_3d0c58;
        case 0x3d0c5cu: goto label_3d0c5c;
        case 0x3d0c60u: goto label_3d0c60;
        case 0x3d0c64u: goto label_3d0c64;
        case 0x3d0c68u: goto label_3d0c68;
        case 0x3d0c6cu: goto label_3d0c6c;
        case 0x3d0c70u: goto label_3d0c70;
        case 0x3d0c74u: goto label_3d0c74;
        case 0x3d0c78u: goto label_3d0c78;
        case 0x3d0c7cu: goto label_3d0c7c;
        case 0x3d0c80u: goto label_3d0c80;
        case 0x3d0c84u: goto label_3d0c84;
        case 0x3d0c88u: goto label_3d0c88;
        case 0x3d0c8cu: goto label_3d0c8c;
        case 0x3d0c90u: goto label_3d0c90;
        case 0x3d0c94u: goto label_3d0c94;
        case 0x3d0c98u: goto label_3d0c98;
        case 0x3d0c9cu: goto label_3d0c9c;
        case 0x3d0ca0u: goto label_3d0ca0;
        case 0x3d0ca4u: goto label_3d0ca4;
        case 0x3d0ca8u: goto label_3d0ca8;
        case 0x3d0cacu: goto label_3d0cac;
        case 0x3d0cb0u: goto label_3d0cb0;
        case 0x3d0cb4u: goto label_3d0cb4;
        case 0x3d0cb8u: goto label_3d0cb8;
        case 0x3d0cbcu: goto label_3d0cbc;
        case 0x3d0cc0u: goto label_3d0cc0;
        case 0x3d0cc4u: goto label_3d0cc4;
        case 0x3d0cc8u: goto label_3d0cc8;
        case 0x3d0cccu: goto label_3d0ccc;
        case 0x3d0cd0u: goto label_3d0cd0;
        case 0x3d0cd4u: goto label_3d0cd4;
        case 0x3d0cd8u: goto label_3d0cd8;
        case 0x3d0cdcu: goto label_3d0cdc;
        case 0x3d0ce0u: goto label_3d0ce0;
        case 0x3d0ce4u: goto label_3d0ce4;
        case 0x3d0ce8u: goto label_3d0ce8;
        case 0x3d0cecu: goto label_3d0cec;
        case 0x3d0cf0u: goto label_3d0cf0;
        case 0x3d0cf4u: goto label_3d0cf4;
        case 0x3d0cf8u: goto label_3d0cf8;
        case 0x3d0cfcu: goto label_3d0cfc;
        case 0x3d0d00u: goto label_3d0d00;
        case 0x3d0d04u: goto label_3d0d04;
        case 0x3d0d08u: goto label_3d0d08;
        case 0x3d0d0cu: goto label_3d0d0c;
        case 0x3d0d10u: goto label_3d0d10;
        case 0x3d0d14u: goto label_3d0d14;
        case 0x3d0d18u: goto label_3d0d18;
        case 0x3d0d1cu: goto label_3d0d1c;
        case 0x3d0d20u: goto label_3d0d20;
        case 0x3d0d24u: goto label_3d0d24;
        case 0x3d0d28u: goto label_3d0d28;
        case 0x3d0d2cu: goto label_3d0d2c;
        case 0x3d0d30u: goto label_3d0d30;
        case 0x3d0d34u: goto label_3d0d34;
        case 0x3d0d38u: goto label_3d0d38;
        case 0x3d0d3cu: goto label_3d0d3c;
        case 0x3d0d40u: goto label_3d0d40;
        case 0x3d0d44u: goto label_3d0d44;
        case 0x3d0d48u: goto label_3d0d48;
        case 0x3d0d4cu: goto label_3d0d4c;
        case 0x3d0d50u: goto label_3d0d50;
        case 0x3d0d54u: goto label_3d0d54;
        case 0x3d0d58u: goto label_3d0d58;
        case 0x3d0d5cu: goto label_3d0d5c;
        case 0x3d0d60u: goto label_3d0d60;
        case 0x3d0d64u: goto label_3d0d64;
        case 0x3d0d68u: goto label_3d0d68;
        case 0x3d0d6cu: goto label_3d0d6c;
        case 0x3d0d70u: goto label_3d0d70;
        case 0x3d0d74u: goto label_3d0d74;
        case 0x3d0d78u: goto label_3d0d78;
        case 0x3d0d7cu: goto label_3d0d7c;
        case 0x3d0d80u: goto label_3d0d80;
        case 0x3d0d84u: goto label_3d0d84;
        case 0x3d0d88u: goto label_3d0d88;
        case 0x3d0d8cu: goto label_3d0d8c;
        case 0x3d0d90u: goto label_3d0d90;
        case 0x3d0d94u: goto label_3d0d94;
        case 0x3d0d98u: goto label_3d0d98;
        case 0x3d0d9cu: goto label_3d0d9c;
        case 0x3d0da0u: goto label_3d0da0;
        case 0x3d0da4u: goto label_3d0da4;
        case 0x3d0da8u: goto label_3d0da8;
        case 0x3d0dacu: goto label_3d0dac;
        case 0x3d0db0u: goto label_3d0db0;
        case 0x3d0db4u: goto label_3d0db4;
        case 0x3d0db8u: goto label_3d0db8;
        case 0x3d0dbcu: goto label_3d0dbc;
        case 0x3d0dc0u: goto label_3d0dc0;
        case 0x3d0dc4u: goto label_3d0dc4;
        case 0x3d0dc8u: goto label_3d0dc8;
        case 0x3d0dccu: goto label_3d0dcc;
        case 0x3d0dd0u: goto label_3d0dd0;
        case 0x3d0dd4u: goto label_3d0dd4;
        case 0x3d0dd8u: goto label_3d0dd8;
        case 0x3d0ddcu: goto label_3d0ddc;
        case 0x3d0de0u: goto label_3d0de0;
        case 0x3d0de4u: goto label_3d0de4;
        case 0x3d0de8u: goto label_3d0de8;
        case 0x3d0decu: goto label_3d0dec;
        case 0x3d0df0u: goto label_3d0df0;
        case 0x3d0df4u: goto label_3d0df4;
        case 0x3d0df8u: goto label_3d0df8;
        case 0x3d0dfcu: goto label_3d0dfc;
        case 0x3d0e00u: goto label_3d0e00;
        case 0x3d0e04u: goto label_3d0e04;
        case 0x3d0e08u: goto label_3d0e08;
        case 0x3d0e0cu: goto label_3d0e0c;
        case 0x3d0e10u: goto label_3d0e10;
        case 0x3d0e14u: goto label_3d0e14;
        case 0x3d0e18u: goto label_3d0e18;
        case 0x3d0e1cu: goto label_3d0e1c;
        case 0x3d0e20u: goto label_3d0e20;
        case 0x3d0e24u: goto label_3d0e24;
        case 0x3d0e28u: goto label_3d0e28;
        case 0x3d0e2cu: goto label_3d0e2c;
        case 0x3d0e30u: goto label_3d0e30;
        case 0x3d0e34u: goto label_3d0e34;
        case 0x3d0e38u: goto label_3d0e38;
        case 0x3d0e3cu: goto label_3d0e3c;
        case 0x3d0e40u: goto label_3d0e40;
        case 0x3d0e44u: goto label_3d0e44;
        case 0x3d0e48u: goto label_3d0e48;
        case 0x3d0e4cu: goto label_3d0e4c;
        case 0x3d0e50u: goto label_3d0e50;
        case 0x3d0e54u: goto label_3d0e54;
        case 0x3d0e58u: goto label_3d0e58;
        case 0x3d0e5cu: goto label_3d0e5c;
        case 0x3d0e60u: goto label_3d0e60;
        case 0x3d0e64u: goto label_3d0e64;
        case 0x3d0e68u: goto label_3d0e68;
        case 0x3d0e6cu: goto label_3d0e6c;
        case 0x3d0e70u: goto label_3d0e70;
        case 0x3d0e74u: goto label_3d0e74;
        case 0x3d0e78u: goto label_3d0e78;
        case 0x3d0e7cu: goto label_3d0e7c;
        case 0x3d0e80u: goto label_3d0e80;
        case 0x3d0e84u: goto label_3d0e84;
        case 0x3d0e88u: goto label_3d0e88;
        case 0x3d0e8cu: goto label_3d0e8c;
        case 0x3d0e90u: goto label_3d0e90;
        case 0x3d0e94u: goto label_3d0e94;
        case 0x3d0e98u: goto label_3d0e98;
        case 0x3d0e9cu: goto label_3d0e9c;
        case 0x3d0ea0u: goto label_3d0ea0;
        case 0x3d0ea4u: goto label_3d0ea4;
        case 0x3d0ea8u: goto label_3d0ea8;
        case 0x3d0eacu: goto label_3d0eac;
        case 0x3d0eb0u: goto label_3d0eb0;
        case 0x3d0eb4u: goto label_3d0eb4;
        case 0x3d0eb8u: goto label_3d0eb8;
        case 0x3d0ebcu: goto label_3d0ebc;
        case 0x3d0ec0u: goto label_3d0ec0;
        case 0x3d0ec4u: goto label_3d0ec4;
        case 0x3d0ec8u: goto label_3d0ec8;
        case 0x3d0eccu: goto label_3d0ecc;
        case 0x3d0ed0u: goto label_3d0ed0;
        case 0x3d0ed4u: goto label_3d0ed4;
        case 0x3d0ed8u: goto label_3d0ed8;
        case 0x3d0edcu: goto label_3d0edc;
        case 0x3d0ee0u: goto label_3d0ee0;
        case 0x3d0ee4u: goto label_3d0ee4;
        case 0x3d0ee8u: goto label_3d0ee8;
        case 0x3d0eecu: goto label_3d0eec;
        case 0x3d0ef0u: goto label_3d0ef0;
        case 0x3d0ef4u: goto label_3d0ef4;
        case 0x3d0ef8u: goto label_3d0ef8;
        case 0x3d0efcu: goto label_3d0efc;
        case 0x3d0f00u: goto label_3d0f00;
        case 0x3d0f04u: goto label_3d0f04;
        case 0x3d0f08u: goto label_3d0f08;
        case 0x3d0f0cu: goto label_3d0f0c;
        case 0x3d0f10u: goto label_3d0f10;
        case 0x3d0f14u: goto label_3d0f14;
        case 0x3d0f18u: goto label_3d0f18;
        case 0x3d0f1cu: goto label_3d0f1c;
        case 0x3d0f20u: goto label_3d0f20;
        case 0x3d0f24u: goto label_3d0f24;
        case 0x3d0f28u: goto label_3d0f28;
        case 0x3d0f2cu: goto label_3d0f2c;
        case 0x3d0f30u: goto label_3d0f30;
        case 0x3d0f34u: goto label_3d0f34;
        case 0x3d0f38u: goto label_3d0f38;
        case 0x3d0f3cu: goto label_3d0f3c;
        case 0x3d0f40u: goto label_3d0f40;
        case 0x3d0f44u: goto label_3d0f44;
        case 0x3d0f48u: goto label_3d0f48;
        case 0x3d0f4cu: goto label_3d0f4c;
        case 0x3d0f50u: goto label_3d0f50;
        case 0x3d0f54u: goto label_3d0f54;
        case 0x3d0f58u: goto label_3d0f58;
        case 0x3d0f5cu: goto label_3d0f5c;
        case 0x3d0f60u: goto label_3d0f60;
        case 0x3d0f64u: goto label_3d0f64;
        case 0x3d0f68u: goto label_3d0f68;
        case 0x3d0f6cu: goto label_3d0f6c;
        case 0x3d0f70u: goto label_3d0f70;
        case 0x3d0f74u: goto label_3d0f74;
        case 0x3d0f78u: goto label_3d0f78;
        case 0x3d0f7cu: goto label_3d0f7c;
        case 0x3d0f80u: goto label_3d0f80;
        case 0x3d0f84u: goto label_3d0f84;
        case 0x3d0f88u: goto label_3d0f88;
        case 0x3d0f8cu: goto label_3d0f8c;
        case 0x3d0f90u: goto label_3d0f90;
        case 0x3d0f94u: goto label_3d0f94;
        case 0x3d0f98u: goto label_3d0f98;
        case 0x3d0f9cu: goto label_3d0f9c;
        case 0x3d0fa0u: goto label_3d0fa0;
        case 0x3d0fa4u: goto label_3d0fa4;
        case 0x3d0fa8u: goto label_3d0fa8;
        case 0x3d0facu: goto label_3d0fac;
        case 0x3d0fb0u: goto label_3d0fb0;
        case 0x3d0fb4u: goto label_3d0fb4;
        case 0x3d0fb8u: goto label_3d0fb8;
        case 0x3d0fbcu: goto label_3d0fbc;
        case 0x3d0fc0u: goto label_3d0fc0;
        case 0x3d0fc4u: goto label_3d0fc4;
        case 0x3d0fc8u: goto label_3d0fc8;
        case 0x3d0fccu: goto label_3d0fcc;
        case 0x3d0fd0u: goto label_3d0fd0;
        case 0x3d0fd4u: goto label_3d0fd4;
        case 0x3d0fd8u: goto label_3d0fd8;
        case 0x3d0fdcu: goto label_3d0fdc;
        case 0x3d0fe0u: goto label_3d0fe0;
        case 0x3d0fe4u: goto label_3d0fe4;
        case 0x3d0fe8u: goto label_3d0fe8;
        case 0x3d0fecu: goto label_3d0fec;
        case 0x3d0ff0u: goto label_3d0ff0;
        case 0x3d0ff4u: goto label_3d0ff4;
        case 0x3d0ff8u: goto label_3d0ff8;
        case 0x3d0ffcu: goto label_3d0ffc;
        case 0x3d1000u: goto label_3d1000;
        case 0x3d1004u: goto label_3d1004;
        case 0x3d1008u: goto label_3d1008;
        case 0x3d100cu: goto label_3d100c;
        case 0x3d1010u: goto label_3d1010;
        case 0x3d1014u: goto label_3d1014;
        case 0x3d1018u: goto label_3d1018;
        case 0x3d101cu: goto label_3d101c;
        default: break;
    }

    ctx->pc = 0x3d0bc0u;

label_3d0bc0:
    // 0x3d0bc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3d0bc4:
    // 0x3d0bc4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3d0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3d0bc8:
    // 0x3d0bc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d0bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3d0bcc:
    // 0x3d0bcc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3d0bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3d0bd0:
    // 0x3d0bd0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3d0bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3d0bd4:
    // 0x3d0bd4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d0bd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0bd8:
    // 0x3d0bd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3d0bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3d0bdc:
    // 0x3d0bdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d0bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d0be0:
    // 0x3d0be0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d0be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d0be4:
    // 0x3d0be4: 0x3445d08f  ori         $a1, $v0, 0xD08F
    ctx->pc = 0x3d0be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53391);
label_3d0be8:
    // 0x3d0be8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d0be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d0bec:
    // 0x3d0bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d0becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d0bf0:
    // 0x3d0bf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d0bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d0bf4:
    // 0x3d0bf4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d0bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d0bf8:
    // 0x3d0bf8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3d0bf8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3d0bfc:
    // 0x3d0bfc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3d0bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c00:
    // 0x3d0c00: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3d0c00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3d0c04:
    // 0x3d0c04: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3d0c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c08:
    // 0x3d0c08: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3d0c08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3d0c0c:
    // 0x3d0c0c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3d0c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c10:
    // 0x3d0c10: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3d0c10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3d0c14:
    // 0x3d0c14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3d0c14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3d0c18:
    // 0x3d0c18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d0c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d0c1c:
    // 0x3d0c1c: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x3d0c1cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_3d0c20:
    // 0x3d0c20: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x3d0c20u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_3d0c24:
    // 0x3d0c24: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x3d0c24u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_3d0c28:
    // 0x3d0c28: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x3d0c28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_3d0c2c:
    // 0x3d0c2c: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x3d0c2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
label_3d0c30:
    // 0x3d0c30: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
label_3d0c34:
    if (ctx->pc == 0x3D0C34u) {
        ctx->pc = 0x3D0C34u;
            // 0x3d0c34: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->pc = 0x3D0C38u;
        goto label_3d0c38;
    }
    ctx->pc = 0x3D0C30u;
    {
        const bool branch_taken_0x3d0c30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0C30u;
            // 0x3d0c34: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c30) {
            ctx->pc = 0x3D0C54u;
            goto label_3d0c54;
        }
    }
    ctx->pc = 0x3D0C38u;
label_3d0c38:
    // 0x3d0c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0c3c:
    // 0x3d0c3c: 0x50e20003  beql        $a3, $v0, . + 4 + (0x3 << 2)
label_3d0c40:
    if (ctx->pc == 0x3D0C40u) {
        ctx->pc = 0x3D0C40u;
            // 0x3d0c40: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->pc = 0x3D0C44u;
        goto label_3d0c44;
    }
    ctx->pc = 0x3D0C3Cu;
    {
        const bool branch_taken_0x3d0c3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d0c3c) {
            ctx->pc = 0x3D0C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0C3Cu;
            // 0x3d0c40: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0C4Cu;
            goto label_3d0c4c;
        }
    }
    ctx->pc = 0x3D0C44u;
label_3d0c44:
    // 0x3d0c44: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d0c48:
    if (ctx->pc == 0x3D0C48u) {
        ctx->pc = 0x3D0C48u;
            // 0x3d0c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C4Cu;
        goto label_3d0c4c;
    }
    ctx->pc = 0x3D0C44u;
    {
        const bool branch_taken_0x3d0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0C44u;
            // 0x3d0c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c44) {
            ctx->pc = 0x3D0C60u;
            goto label_3d0c60;
        }
    }
    ctx->pc = 0x3D0C4Cu;
label_3d0c4c:
    // 0x3d0c4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d0c50:
    if (ctx->pc == 0x3D0C50u) {
        ctx->pc = 0x3D0C50u;
            // 0x3d0c50: 0x34457a0f  ori         $a1, $v0, 0x7A0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31247);
        ctx->pc = 0x3D0C54u;
        goto label_3d0c54;
    }
    ctx->pc = 0x3D0C4Cu;
    {
        const bool branch_taken_0x3d0c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0C4Cu;
            // 0x3d0c50: 0x34457a0f  ori         $a1, $v0, 0x7A0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c4c) {
            ctx->pc = 0x3D0C5Cu;
            goto label_3d0c5c;
        }
    }
    ctx->pc = 0x3D0C54u;
label_3d0c54:
    // 0x3d0c54: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3d0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3d0c58:
    // 0x3d0c58: 0x34457a11  ori         $a1, $v0, 0x7A11
    ctx->pc = 0x3d0c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31249);
label_3d0c5c:
    // 0x3d0c5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d0c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c60:
    // 0x3d0c60: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3d0c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d0c64:
    // 0x3d0c64: 0xc10ca68  jal         func_4329A0
label_3d0c68:
    if (ctx->pc == 0x3D0C68u) {
        ctx->pc = 0x3D0C68u;
            // 0x3d0c68: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3D0C6Cu;
        goto label_3d0c6c;
    }
    ctx->pc = 0x3D0C64u;
    SET_GPR_U32(ctx, 31, 0x3D0C6Cu);
    ctx->pc = 0x3D0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0C64u;
            // 0x3d0c68: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0C6Cu; }
        if (ctx->pc != 0x3D0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0C6Cu; }
        if (ctx->pc != 0x3D0C6Cu) { return; }
    }
    ctx->pc = 0x3D0C6Cu;
label_3d0c6c:
    // 0x3d0c6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d0c70:
    // 0x3d0c70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d0c74:
    // 0x3d0c74: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3d0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3d0c78:
    // 0x3d0c78: 0x244291c0  addiu       $v0, $v0, -0x6E40
    ctx->pc = 0x3d0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
label_3d0c7c:
    // 0x3d0c7c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3d0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_3d0c80:
    // 0x3d0c80: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3d0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3d0c84:
    // 0x3d0c84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d0c88:
    // 0x3d0c88: 0xaeb200a0  sw          $s2, 0xA0($s5)
    ctx->pc = 0x3d0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 18));
label_3d0c8c:
    // 0x3d0c8c: 0x24636810  addiu       $v1, $v1, 0x6810
    ctx->pc = 0x3d0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26640));
label_3d0c90:
    // 0x3d0c90: 0xaeb400a4  sw          $s4, 0xA4($s5)
    ctx->pc = 0x3d0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 20));
label_3d0c94:
    // 0x3d0c94: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3d0c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c98:
    // 0x3d0c98: 0xaeb300a8  sw          $s3, 0xA8($s5)
    ctx->pc = 0x3d0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 168), GPR_U32(ctx, 19));
label_3d0c9c:
    // 0x3d0c9c: 0xaeb100ac  sw          $s1, 0xAC($s5)
    ctx->pc = 0x3d0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 172), GPR_U32(ctx, 17));
label_3d0ca0:
    // 0x3d0ca0: 0xaeb000b0  sw          $s0, 0xB0($s5)
    ctx->pc = 0x3d0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 16));
label_3d0ca4:
    // 0x3d0ca4: 0xaea000c0  sw          $zero, 0xC0($s5)
    ctx->pc = 0x3d0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 0));
label_3d0ca8:
    // 0x3d0ca8: 0xe6b600c4  swc1        $f22, 0xC4($s5)
    ctx->pc = 0x3d0ca8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 196), bits); }
label_3d0cac:
    // 0x3d0cac: 0xe6b500c8  swc1        $f21, 0xC8($s5)
    ctx->pc = 0x3d0cacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 200), bits); }
label_3d0cb0:
    // 0x3d0cb0: 0xe6b400cc  swc1        $f20, 0xCC($s5)
    ctx->pc = 0x3d0cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 204), bits); }
label_3d0cb4:
    // 0x3d0cb4: 0xe6b900b4  swc1        $f25, 0xB4($s5)
    ctx->pc = 0x3d0cb4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 180), bits); }
label_3d0cb8:
    // 0x3d0cb8: 0xe6b800b8  swc1        $f24, 0xB8($s5)
    ctx->pc = 0x3d0cb8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 184), bits); }
label_3d0cbc:
    // 0x3d0cbc: 0xe6b700bc  swc1        $f23, 0xBC($s5)
    ctx->pc = 0x3d0cbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 188), bits); }
label_3d0cc0:
    // 0x3d0cc0: 0x8ea500a8  lw          $a1, 0xA8($s5)
    ctx->pc = 0x3d0cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_3d0cc4:
    // 0x3d0cc4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3d0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3d0cc8:
    // 0x3d0cc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d0ccc:
    // 0x3d0ccc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d0cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0cd0:
    // 0x3d0cd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d0cd4:
    // 0x3d0cd4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d0cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0cd8:
    // 0x3d0cd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0cdc:
    // 0x3d0cdc: 0xaea300dc  sw          $v1, 0xDC($s5)
    ctx->pc = 0x3d0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 3));
label_3d0ce0:
    // 0x3d0ce0: 0xe6b600d8  swc1        $f22, 0xD8($s5)
    ctx->pc = 0x3d0ce0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
label_3d0ce4:
    // 0x3d0ce4: 0xe6b600d4  swc1        $f22, 0xD4($s5)
    ctx->pc = 0x3d0ce4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
label_3d0ce8:
    // 0x3d0ce8: 0xe6b600d0  swc1        $f22, 0xD0($s5)
    ctx->pc = 0x3d0ce8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 208), bits); }
label_3d0cec:
    // 0x3d0cec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d0cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d0cf0:
    // 0x3d0cf0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3d0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3d0cf4:
    // 0x3d0cf4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3d0cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d0cf8:
    // 0x3d0cf8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3d0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3d0cfc:
    // 0x3d0cfc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3d0cfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d0d00:
    // 0x3d0d00: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3d0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d0d04:
    // 0x3d0d04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3d0d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d0d08:
    // 0x3d0d08: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3d0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d0d0c:
    // 0x3d0d0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d0d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d0d10:
    // 0x3d0d10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3d0d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d0d14:
    // 0x3d0d14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d0d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d0d18:
    // 0x3d0d18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d0d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d0d1c:
    // 0x3d0d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d0d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0d20:
    // 0x3d0d20: 0x3e00008  jr          $ra
label_3d0d24:
    if (ctx->pc == 0x3D0D24u) {
        ctx->pc = 0x3D0D24u;
            // 0x3d0d24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D0D28u;
        goto label_3d0d28;
    }
    ctx->pc = 0x3D0D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0D20u;
            // 0x3d0d24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0D28u;
label_3d0d28:
    // 0x3d0d28: 0x0  nop
    ctx->pc = 0x3d0d28u;
    // NOP
label_3d0d2c:
    // 0x3d0d2c: 0x0  nop
    ctx->pc = 0x3d0d2cu;
    // NOP
label_3d0d30:
    // 0x3d0d30: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3d0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3d0d34:
    // 0x3d0d34: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3d0d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_3d0d38:
    // 0x3d0d38: 0x24846810  addiu       $a0, $a0, 0x6810
    ctx->pc = 0x3d0d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26640));
label_3d0d3c:
    // 0x3d0d3c: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x3d0d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
label_3d0d40:
    // 0x3d0d40: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x3d0d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3d0d44:
    // 0x3d0d44: 0x80407e8  j           func_101FA0
label_3d0d48:
    if (ctx->pc == 0x3D0D48u) {
        ctx->pc = 0x3D0D48u;
            // 0x3d0d48: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3D0D4Cu;
        goto label_3d0d4c;
    }
    ctx->pc = 0x3D0D44u;
    ctx->pc = 0x3D0D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0D44u;
            // 0x3d0d48: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00101FA0_0x101fa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D0D4Cu;
label_3d0d4c:
    // 0x3d0d4c: 0x0  nop
    ctx->pc = 0x3d0d4cu;
    // NOP
label_3d0d50:
    // 0x3d0d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d0d54:
    // 0x3d0d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d0d58:
    // 0x3d0d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d0d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d0d5c:
    // 0x3d0d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d0d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d0d60:
    // 0x3d0d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d0d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0d64:
    // 0x3d0d64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3d0d68:
    if (ctx->pc == 0x3D0D68u) {
        ctx->pc = 0x3D0D68u;
            // 0x3d0d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D6Cu;
        goto label_3d0d6c;
    }
    ctx->pc = 0x3D0D64u;
    {
        const bool branch_taken_0x3d0d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0D64u;
            // 0x3d0d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d64) {
            ctx->pc = 0x3D0DA8u;
            goto label_3d0da8;
        }
    }
    ctx->pc = 0x3D0D6Cu;
label_3d0d6c:
    // 0x3d0d6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d0d70:
    // 0x3d0d70: 0x244291f0  addiu       $v0, $v0, -0x6E10
    ctx->pc = 0x3d0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939120));
label_3d0d74:
    // 0x3d0d74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3d0d78:
    if (ctx->pc == 0x3D0D78u) {
        ctx->pc = 0x3D0D78u;
            // 0x3d0d78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D0D7Cu;
        goto label_3d0d7c;
    }
    ctx->pc = 0x3D0D74u;
    {
        const bool branch_taken_0x3d0d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0D74u;
            // 0x3d0d78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d74) {
            ctx->pc = 0x3D0D90u;
            goto label_3d0d90;
        }
    }
    ctx->pc = 0x3D0D7Cu;
label_3d0d7c:
    // 0x3d0d7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d0d80:
    // 0x3d0d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0d84:
    // 0x3d0d84: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3d0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3d0d88:
    // 0x3d0d88: 0xc057a68  jal         func_15E9A0
label_3d0d8c:
    if (ctx->pc == 0x3D0D8Cu) {
        ctx->pc = 0x3D0D8Cu;
            // 0x3d0d8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D0D90u;
        goto label_3d0d90;
    }
    ctx->pc = 0x3D0D88u;
    SET_GPR_U32(ctx, 31, 0x3D0D90u);
    ctx->pc = 0x3D0D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0D88u;
            // 0x3d0d8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0D90u; }
        if (ctx->pc != 0x3D0D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0D90u; }
        if (ctx->pc != 0x3D0D90u) { return; }
    }
    ctx->pc = 0x3D0D90u;
label_3d0d90:
    // 0x3d0d90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d0d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d0d94:
    // 0x3d0d94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d0d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d0d98:
    // 0x3d0d98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d0d9c:
    if (ctx->pc == 0x3D0D9Cu) {
        ctx->pc = 0x3D0D9Cu;
            // 0x3d0d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DA0u;
        goto label_3d0da0;
    }
    ctx->pc = 0x3D0D98u;
    {
        const bool branch_taken_0x3d0d98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d0d98) {
            ctx->pc = 0x3D0D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0D98u;
            // 0x3d0d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0DACu;
            goto label_3d0dac;
        }
    }
    ctx->pc = 0x3D0DA0u;
label_3d0da0:
    // 0x3d0da0: 0xc0400a8  jal         func_1002A0
label_3d0da4:
    if (ctx->pc == 0x3D0DA4u) {
        ctx->pc = 0x3D0DA4u;
            // 0x3d0da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DA8u;
        goto label_3d0da8;
    }
    ctx->pc = 0x3D0DA0u;
    SET_GPR_U32(ctx, 31, 0x3D0DA8u);
    ctx->pc = 0x3D0DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0DA0u;
            // 0x3d0da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0DA8u; }
        if (ctx->pc != 0x3D0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0DA8u; }
        if (ctx->pc != 0x3D0DA8u) { return; }
    }
    ctx->pc = 0x3D0DA8u;
label_3d0da8:
    // 0x3d0da8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d0da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0dac:
    // 0x3d0dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d0dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0db0:
    // 0x3d0db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d0db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0db4:
    // 0x3d0db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d0db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0db8:
    // 0x3d0db8: 0x3e00008  jr          $ra
label_3d0dbc:
    if (ctx->pc == 0x3D0DBCu) {
        ctx->pc = 0x3D0DBCu;
            // 0x3d0dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D0DC0u;
        goto label_3d0dc0;
    }
    ctx->pc = 0x3D0DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0DB8u;
            // 0x3d0dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0DC0u;
label_3d0dc0:
    // 0x3d0dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d0dc4:
    // 0x3d0dc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d0dc8:
    // 0x3d0dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d0dcc:
    // 0x3d0dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d0dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d0dd0:
    // 0x3d0dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d0dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d0dd4:
    // 0x3d0dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d0dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0dd8:
    // 0x3d0dd8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3d0dd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d0ddc:
    // 0x3d0ddc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3d0de0:
    if (ctx->pc == 0x3D0DE0u) {
        ctx->pc = 0x3D0DE4u;
        goto label_3d0de4;
    }
    ctx->pc = 0x3D0DDCu;
    {
        const bool branch_taken_0x3d0ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0ddc) {
            ctx->pc = 0x3D0DF0u;
            goto label_3d0df0;
        }
    }
    ctx->pc = 0x3D0DE4u;
label_3d0de4:
    // 0x3d0de4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d0de8:
    // 0x3d0de8: 0x5483002c  bnel        $a0, $v1, . + 4 + (0x2C << 2)
label_3d0dec:
    if (ctx->pc == 0x3D0DECu) {
        ctx->pc = 0x3D0DECu;
            // 0x3d0dec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3D0DF0u;
        goto label_3d0df0;
    }
    ctx->pc = 0x3D0DE8u;
    {
        const bool branch_taken_0x3d0de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d0de8) {
            ctx->pc = 0x3D0DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0DE8u;
            // 0x3d0dec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0E9Cu;
            goto label_3d0e9c;
        }
    }
    ctx->pc = 0x3D0DF0u;
label_3d0df0:
    // 0x3d0df0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3d0df4:
    // 0x3d0df4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d0df8:
    // 0x3d0df8: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x3d0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3d0dfc:
    // 0x3d0dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d0dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e00:
    // 0x3d0e00: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3d0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3d0e04:
    // 0x3d0e04: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3d0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3d0e08:
    // 0x3d0e08: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3d0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d0e0c:
    // 0x3d0e0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d0e10:
    // 0x3d0e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0e14:
    // 0x3d0e14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d0e18:
    // 0x3d0e18: 0xc05068c  jal         func_141A30
label_3d0e1c:
    if (ctx->pc == 0x3D0E1Cu) {
        ctx->pc = 0x3D0E1Cu;
            // 0x3d0e1c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3D0E20u;
        goto label_3d0e20;
    }
    ctx->pc = 0x3D0E18u;
    SET_GPR_U32(ctx, 31, 0x3D0E20u);
    ctx->pc = 0x3D0E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E18u;
            // 0x3d0e1c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E20u; }
        if (ctx->pc != 0x3D0E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E20u; }
        if (ctx->pc != 0x3D0E20u) { return; }
    }
    ctx->pc = 0x3D0E20u;
label_3d0e20:
    // 0x3d0e20: 0xc0508b0  jal         func_1422C0
label_3d0e24:
    if (ctx->pc == 0x3D0E24u) {
        ctx->pc = 0x3D0E24u;
            // 0x3d0e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E28u;
        goto label_3d0e28;
    }
    ctx->pc = 0x3D0E20u;
    SET_GPR_U32(ctx, 31, 0x3D0E28u);
    ctx->pc = 0x3D0E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E20u;
            // 0x3d0e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E28u; }
        if (ctx->pc != 0x3D0E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E28u; }
        if (ctx->pc != 0x3D0E28u) { return; }
    }
    ctx->pc = 0x3D0E28u;
label_3d0e28:
    // 0x3d0e28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d0e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e2c:
    // 0x3d0e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d0e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e30:
    // 0x3d0e30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e34:
    // 0x3d0e34: 0xc0506b8  jal         func_141AE0
label_3d0e38:
    if (ctx->pc == 0x3D0E38u) {
        ctx->pc = 0x3D0E38u;
            // 0x3d0e38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E3Cu;
        goto label_3d0e3c;
    }
    ctx->pc = 0x3D0E34u;
    SET_GPR_U32(ctx, 31, 0x3D0E3Cu);
    ctx->pc = 0x3D0E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E34u;
            // 0x3d0e38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E3Cu; }
        if (ctx->pc != 0x3D0E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E3Cu; }
        if (ctx->pc != 0x3D0E3Cu) { return; }
    }
    ctx->pc = 0x3D0E3Cu;
label_3d0e3c:
    // 0x3d0e3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d0e40:
    // 0x3d0e40: 0x8c446e98  lw          $a0, 0x6E98($v0)
    ctx->pc = 0x3d0e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28312)));
label_3d0e44:
    // 0x3d0e44: 0xc0506ac  jal         func_141AB0
label_3d0e48:
    if (ctx->pc == 0x3D0E48u) {
        ctx->pc = 0x3D0E48u;
            // 0x3d0e48: 0x920507e1  lbu         $a1, 0x7E1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2017)));
        ctx->pc = 0x3D0E4Cu;
        goto label_3d0e4c;
    }
    ctx->pc = 0x3D0E44u;
    SET_GPR_U32(ctx, 31, 0x3D0E4Cu);
    ctx->pc = 0x3D0E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E44u;
            // 0x3d0e48: 0x920507e1  lbu         $a1, 0x7E1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2017)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E4Cu; }
        if (ctx->pc != 0x3D0E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E4Cu; }
        if (ctx->pc != 0x3D0E4Cu) { return; }
    }
    ctx->pc = 0x3D0E4Cu;
label_3d0e4c:
    // 0x3d0e4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d0e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d0e50:
    // 0x3d0e50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d0e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0e54:
    // 0x3d0e54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e58:
    // 0x3d0e58: 0xc0508b4  jal         func_1422D0
label_3d0e5c:
    if (ctx->pc == 0x3D0E5Cu) {
        ctx->pc = 0x3D0E5Cu;
            // 0x3d0e5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E60u;
        goto label_3d0e60;
    }
    ctx->pc = 0x3D0E58u;
    SET_GPR_U32(ctx, 31, 0x3D0E60u);
    ctx->pc = 0x3D0E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E58u;
            // 0x3d0e5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E60u; }
        if (ctx->pc != 0x3D0E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E60u; }
        if (ctx->pc != 0x3D0E60u) { return; }
    }
    ctx->pc = 0x3D0E60u;
label_3d0e60:
    // 0x3d0e60: 0x8e0207e8  lw          $v0, 0x7E8($s0)
    ctx->pc = 0x3d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
label_3d0e64:
    // 0x3d0e64: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x3d0e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3d0e68:
    // 0x3d0e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0e6c:
    // 0x3d0e6c: 0xc050a08  jal         func_142820
label_3d0e70:
    if (ctx->pc == 0x3D0E70u) {
        ctx->pc = 0x3D0E70u;
            // 0x3d0e70: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3D0E74u;
        goto label_3d0e74;
    }
    ctx->pc = 0x3D0E6Cu;
    SET_GPR_U32(ctx, 31, 0x3D0E74u);
    ctx->pc = 0x3D0E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E6Cu;
            // 0x3d0e70: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E74u; }
        if (ctx->pc != 0x3D0E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E74u; }
        if (ctx->pc != 0x3D0E74u) { return; }
    }
    ctx->pc = 0x3D0E74u;
label_3d0e74:
    // 0x3d0e74: 0xc050a88  jal         func_142A20
label_3d0e78:
    if (ctx->pc == 0x3D0E78u) {
        ctx->pc = 0x3D0E7Cu;
        goto label_3d0e7c;
    }
    ctx->pc = 0x3D0E74u;
    SET_GPR_U32(ctx, 31, 0x3D0E7Cu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E7Cu; }
        if (ctx->pc != 0x3D0E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E7Cu; }
        if (ctx->pc != 0x3D0E7Cu) { return; }
    }
    ctx->pc = 0x3D0E7Cu;
label_3d0e7c:
    // 0x3d0e7c: 0xc05068c  jal         func_141A30
label_3d0e80:
    if (ctx->pc == 0x3D0E80u) {
        ctx->pc = 0x3D0E80u;
            // 0x3d0e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D0E84u;
        goto label_3d0e84;
    }
    ctx->pc = 0x3D0E7Cu;
    SET_GPR_U32(ctx, 31, 0x3D0E84u);
    ctx->pc = 0x3D0E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E7Cu;
            // 0x3d0e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E84u; }
        if (ctx->pc != 0x3D0E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E84u; }
        if (ctx->pc != 0x3D0E84u) { return; }
    }
    ctx->pc = 0x3D0E84u;
label_3d0e84:
    // 0x3d0e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0e88:
    // 0x3d0e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d0e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e8c:
    // 0x3d0e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d0e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e90:
    // 0x3d0e90: 0xc0506b8  jal         func_141AE0
label_3d0e94:
    if (ctx->pc == 0x3D0E94u) {
        ctx->pc = 0x3D0E94u;
            // 0x3d0e94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E98u;
        goto label_3d0e98;
    }
    ctx->pc = 0x3D0E90u;
    SET_GPR_U32(ctx, 31, 0x3D0E98u);
    ctx->pc = 0x3D0E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0E90u;
            // 0x3d0e94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E98u; }
        if (ctx->pc != 0x3D0E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0E98u; }
        if (ctx->pc != 0x3D0E98u) { return; }
    }
    ctx->pc = 0x3D0E98u;
label_3d0e98:
    // 0x3d0e98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d0e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0e9c:
    // 0x3d0e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d0e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0ea0:
    // 0x3d0ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d0ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0ea4:
    // 0x3d0ea4: 0x3e00008  jr          $ra
label_3d0ea8:
    if (ctx->pc == 0x3D0EA8u) {
        ctx->pc = 0x3D0EA8u;
            // 0x3d0ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D0EACu;
        goto label_3d0eac;
    }
    ctx->pc = 0x3D0EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0EA4u;
            // 0x3d0ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0EACu;
label_3d0eac:
    // 0x3d0eac: 0x0  nop
    ctx->pc = 0x3d0eacu;
    // NOP
label_3d0eb0:
    // 0x3d0eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d0eb4:
    // 0x3d0eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0eb8:
    // 0x3d0eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d0ebc:
    // 0x3d0ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d0ec0:
    // 0x3d0ec0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d0ec0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d0ec4:
    // 0x3d0ec4: 0x10a3004d  beq         $a1, $v1, . + 4 + (0x4D << 2)
label_3d0ec8:
    if (ctx->pc == 0x3D0EC8u) {
        ctx->pc = 0x3D0EC8u;
            // 0x3d0ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0ECCu;
        goto label_3d0ecc;
    }
    ctx->pc = 0x3D0EC4u;
    {
        const bool branch_taken_0x3d0ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0EC4u;
            // 0x3d0ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ec4) {
            ctx->pc = 0x3D0FFCu;
            goto label_3d0ffc;
        }
    }
    ctx->pc = 0x3D0ECCu;
label_3d0ecc:
    // 0x3d0ecc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d0ed0:
    // 0x3d0ed0: 0x50a3002a  beql        $a1, $v1, . + 4 + (0x2A << 2)
label_3d0ed4:
    if (ctx->pc == 0x3D0ED4u) {
        ctx->pc = 0x3D0ED4u;
            // 0x3d0ed4: 0x8e0307d8  lw          $v1, 0x7D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2008)));
        ctx->pc = 0x3D0ED8u;
        goto label_3d0ed8;
    }
    ctx->pc = 0x3D0ED0u;
    {
        const bool branch_taken_0x3d0ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0ed0) {
            ctx->pc = 0x3D0ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0ED0u;
            // 0x3d0ed4: 0x8e0307d8  lw          $v1, 0x7D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0F7Cu;
            goto label_3d0f7c;
        }
    }
    ctx->pc = 0x3D0ED8u;
label_3d0ed8:
    // 0x3d0ed8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d0edc:
    // 0x3d0edc: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_3d0ee0:
    if (ctx->pc == 0x3D0EE0u) {
        ctx->pc = 0x3D0EE0u;
            // 0x3d0ee0: 0x8e0407e4  lw          $a0, 0x7E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
        ctx->pc = 0x3D0EE4u;
        goto label_3d0ee4;
    }
    ctx->pc = 0x3D0EDCu;
    {
        const bool branch_taken_0x3d0edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0edc) {
            ctx->pc = 0x3D0EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0EDCu;
            // 0x3d0ee0: 0x8e0407e4  lw          $a0, 0x7E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0F14u;
            goto label_3d0f14;
        }
    }
    ctx->pc = 0x3D0EE4u;
label_3d0ee4:
    // 0x3d0ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d0ee8:
    // 0x3d0ee8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3d0eec:
    if (ctx->pc == 0x3D0EECu) {
        ctx->pc = 0x3D0EF0u;
        goto label_3d0ef0;
    }
    ctx->pc = 0x3D0EE8u;
    {
        const bool branch_taken_0x3d0ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0ee8) {
            ctx->pc = 0x3D0EF8u;
            goto label_3d0ef8;
        }
    }
    ctx->pc = 0x3D0EF0u;
label_3d0ef0:
    // 0x3d0ef0: 0x10000048  b           . + 4 + (0x48 << 2)
label_3d0ef4:
    if (ctx->pc == 0x3D0EF4u) {
        ctx->pc = 0x3D0EF4u;
            // 0x3d0ef4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D0EF8u;
        goto label_3d0ef8;
    }
    ctx->pc = 0x3D0EF0u;
    {
        const bool branch_taken_0x3d0ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0EF0u;
            // 0x3d0ef4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ef0) {
            ctx->pc = 0x3D1014u;
            goto label_3d1014;
        }
    }
    ctx->pc = 0x3D0EF8u;
label_3d0ef8:
    // 0x3d0ef8: 0xc0f4550  jal         func_3D1540
label_3d0efc:
    if (ctx->pc == 0x3D0EFCu) {
        ctx->pc = 0x3D0F00u;
        goto label_3d0f00;
    }
    ctx->pc = 0x3D0EF8u;
    SET_GPR_U32(ctx, 31, 0x3D0F00u);
    ctx->pc = 0x3D1540u;
    if (runtime->hasFunction(0x3D1540u)) {
        auto targetFn = runtime->lookupFunction(0x3D1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0F00u; }
        if (ctx->pc != 0x3D0F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D1540_0x3d1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0F00u; }
        if (ctx->pc != 0x3D0F00u) { return; }
    }
    ctx->pc = 0x3D0F00u;
label_3d0f00:
    // 0x3d0f00: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d0f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d0f04:
    // 0x3d0f04: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d0f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d0f08:
    // 0x3d0f08: 0x320f809  jalr        $t9
label_3d0f0c:
    if (ctx->pc == 0x3D0F0Cu) {
        ctx->pc = 0x3D0F0Cu;
            // 0x3d0f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F10u;
        goto label_3d0f10;
    }
    ctx->pc = 0x3D0F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D0F10u);
        ctx->pc = 0x3D0F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0F08u;
            // 0x3d0f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D0F10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D0F10u; }
            if (ctx->pc != 0x3D0F10u) { return; }
        }
        }
    }
    ctx->pc = 0x3D0F10u;
label_3d0f10:
    // 0x3d0f10: 0x8e0407e4  lw          $a0, 0x7E4($s0)
    ctx->pc = 0x3d0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
label_3d0f14:
    // 0x3d0f14: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3d0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3d0f18:
    // 0x3d0f18: 0x8c830db0  lw          $v1, 0xDB0($a0)
    ctx->pc = 0x3d0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3d0f1c:
    // 0x3d0f1c: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_3d0f20:
    if (ctx->pc == 0x3D0F20u) {
        ctx->pc = 0x3D0F20u;
            // 0x3d0f20: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D0F24u;
        goto label_3d0f24;
    }
    ctx->pc = 0x3D0F1Cu;
    {
        const bool branch_taken_0x3d0f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d0f1c) {
            ctx->pc = 0x3D0F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0F1Cu;
            // 0x3d0f20: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0F58u;
            goto label_3d0f58;
        }
    }
    ctx->pc = 0x3D0F24u;
label_3d0f24:
    // 0x3d0f24: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3d0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3d0f28:
    // 0x3d0f28: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3d0f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3d0f2c:
    // 0x3d0f2c: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_3d0f30:
    if (ctx->pc == 0x3D0F30u) {
        ctx->pc = 0x3D0F30u;
            // 0x3d0f30: 0x8c820d70  lw          $v0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x3D0F34u;
        goto label_3d0f34;
    }
    ctx->pc = 0x3D0F2Cu;
    {
        const bool branch_taken_0x3d0f2c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3d0f2c) {
            ctx->pc = 0x3D0F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0F2Cu;
            // 0x3d0f30: 0x8c820d70  lw          $v0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0F48u;
            goto label_3d0f48;
        }
    }
    ctx->pc = 0x3D0F34u;
label_3d0f34:
    // 0x3d0f34: 0x8c820da4  lw          $v0, 0xDA4($a0)
    ctx->pc = 0x3d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3492)));
label_3d0f38:
    // 0x3d0f38: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3d0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_3d0f3c:
    // 0x3d0f3c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_3d0f40:
    if (ctx->pc == 0x3D0F40u) {
        ctx->pc = 0x3D0F44u;
        goto label_3d0f44;
    }
    ctx->pc = 0x3D0F3Cu;
    {
        const bool branch_taken_0x3d0f3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d0f3c) {
            ctx->pc = 0x3D0F54u;
            goto label_3d0f54;
        }
    }
    ctx->pc = 0x3D0F44u;
label_3d0f44:
    // 0x3d0f44: 0x8c820d70  lw          $v0, 0xD70($a0)
    ctx->pc = 0x3d0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3d0f48:
    // 0x3d0f48: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x3d0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d0f4c:
    // 0x3d0f4c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3d0f50:
    if (ctx->pc == 0x3D0F50u) {
        ctx->pc = 0x3D0F50u;
            // 0x3d0f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F54u;
        goto label_3d0f54;
    }
    ctx->pc = 0x3D0F4Cu;
    {
        const bool branch_taken_0x3d0f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0f4c) {
            ctx->pc = 0x3D0F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0F4Cu;
            // 0x3d0f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0F6Cu;
            goto label_3d0f6c;
        }
    }
    ctx->pc = 0x3D0F54u;
label_3d0f54:
    // 0x3d0f54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d0f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d0f58:
    // 0x3d0f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0f5c:
    // 0x3d0f5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3d0f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3d0f60:
    // 0x3d0f60: 0x320f809  jalr        $t9
label_3d0f64:
    if (ctx->pc == 0x3D0F64u) {
        ctx->pc = 0x3D0F64u;
            // 0x3d0f64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3D0F68u;
        goto label_3d0f68;
    }
    ctx->pc = 0x3D0F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D0F68u);
        ctx->pc = 0x3D0F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0F60u;
            // 0x3d0f64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D0F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D0F68u; }
            if (ctx->pc != 0x3D0F68u) { return; }
        }
        }
    }
    ctx->pc = 0x3D0F68u;
label_3d0f68:
    // 0x3d0f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0f6c:
    // 0x3d0f6c: 0xc0f4408  jal         func_3D1020
label_3d0f70:
    if (ctx->pc == 0x3D0F70u) {
        ctx->pc = 0x3D0F74u;
        goto label_3d0f74;
    }
    ctx->pc = 0x3D0F6Cu;
    SET_GPR_U32(ctx, 31, 0x3D0F74u);
    ctx->pc = 0x3D1020u;
    if (runtime->hasFunction(0x3D1020u)) {
        auto targetFn = runtime->lookupFunction(0x3D1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0F74u; }
        if (ctx->pc != 0x3D0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D1020_0x3d1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0F74u; }
        if (ctx->pc != 0x3D0F74u) { return; }
    }
    ctx->pc = 0x3D0F74u;
label_3d0f74:
    // 0x3d0f74: 0x10000026  b           . + 4 + (0x26 << 2)
label_3d0f78:
    if (ctx->pc == 0x3D0F78u) {
        ctx->pc = 0x3D0F7Cu;
        goto label_3d0f7c;
    }
    ctx->pc = 0x3D0F74u;
    {
        const bool branch_taken_0x3d0f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0f74) {
            ctx->pc = 0x3D1010u;
            goto label_3d1010;
        }
    }
    ctx->pc = 0x3D0F7Cu;
label_3d0f7c:
    // 0x3d0f7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d0f80:
    // 0x3d0f80: 0xae0307d8  sw          $v1, 0x7D8($s0)
    ctx->pc = 0x3d0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 3));
label_3d0f84:
    // 0x3d0f84: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3d0f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d0f88:
    // 0x3d0f88: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_3d0f8c:
    if (ctx->pc == 0x3D0F8Cu) {
        ctx->pc = 0x3D0F90u;
        goto label_3d0f90;
    }
    ctx->pc = 0x3D0F88u;
    {
        const bool branch_taken_0x3d0f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0f88) {
            ctx->pc = 0x3D1010u;
            goto label_3d1010;
        }
    }
    ctx->pc = 0x3D0F90u;
label_3d0f90:
    // 0x3d0f90: 0xae0007d8  sw          $zero, 0x7D8($s0)
    ctx->pc = 0x3d0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 0));
label_3d0f94:
    // 0x3d0f94: 0x8e0307e8  lw          $v1, 0x7E8($s0)
    ctx->pc = 0x3d0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
label_3d0f98:
    // 0x3d0f98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d0f9c:
    // 0x3d0f9c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3d0fa0:
    if (ctx->pc == 0x3D0FA0u) {
        ctx->pc = 0x3D0FA0u;
            // 0x3d0fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0FA4u;
        goto label_3d0fa4;
    }
    ctx->pc = 0x3D0F9Cu;
    {
        const bool branch_taken_0x3d0f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0F9Cu;
            // 0x3d0fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f9c) {
            ctx->pc = 0x3D0FD0u;
            goto label_3d0fd0;
        }
    }
    ctx->pc = 0x3D0FA4u;
label_3d0fa4:
    // 0x3d0fa4: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x3d0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_3d0fa8:
    // 0x3d0fa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d0fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3d0fac:
    // 0x3d0fac: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x3d0facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_3d0fb0:
    // 0x3d0fb0: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x3d0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_3d0fb4:
    // 0x3d0fb4: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x3d0fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
label_3d0fb8:
    // 0x3d0fb8: 0x8e0307e8  lw          $v1, 0x7E8($s0)
    ctx->pc = 0x3d0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
label_3d0fbc:
    // 0x3d0fbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d0fc0:
    // 0x3d0fc0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3d0fc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d0fc4:
    // 0x3d0fc4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3d0fc8:
    if (ctx->pc == 0x3D0FC8u) {
        ctx->pc = 0x3D0FC8u;
            // 0x3d0fc8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x3D0FCCu;
        goto label_3d0fcc;
    }
    ctx->pc = 0x3D0FC4u;
    {
        const bool branch_taken_0x3d0fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0FC4u;
            // 0x3d0fc8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0fc4) {
            ctx->pc = 0x3D0FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d0fa4;
        }
    }
    ctx->pc = 0x3D0FCCu;
label_3d0fcc:
    // 0x3d0fcc: 0x0  nop
    ctx->pc = 0x3d0fccu;
    // NOP
label_3d0fd0:
    // 0x3d0fd0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3d0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3d0fd4:
    // 0x3d0fd4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3d0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3d0fd8:
    // 0x3d0fd8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_3d0fdc:
    if (ctx->pc == 0x3D0FDCu) {
        ctx->pc = 0x3D0FE0u;
        goto label_3d0fe0;
    }
    ctx->pc = 0x3D0FD8u;
    {
        const bool branch_taken_0x3d0fd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d0fd8) {
            ctx->pc = 0x3D1010u;
            goto label_3d1010;
        }
    }
    ctx->pc = 0x3D0FE0u;
label_3d0fe0:
    // 0x3d0fe0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d0fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d0fe4:
    // 0x3d0fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0fe8:
    // 0x3d0fe8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3d0fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3d0fec:
    // 0x3d0fec: 0x320f809  jalr        $t9
label_3d0ff0:
    if (ctx->pc == 0x3D0FF0u) {
        ctx->pc = 0x3D0FF0u;
            // 0x3d0ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D0FF4u;
        goto label_3d0ff4;
    }
    ctx->pc = 0x3D0FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D0FF4u);
        ctx->pc = 0x3D0FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0FECu;
            // 0x3d0ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D0FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D0FF4u; }
            if (ctx->pc != 0x3D0FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D0FF4u;
label_3d0ff4:
    // 0x3d0ff4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d0ff8:
    if (ctx->pc == 0x3D0FF8u) {
        ctx->pc = 0x3D0FFCu;
        goto label_3d0ffc;
    }
    ctx->pc = 0x3D0FF4u;
    {
        const bool branch_taken_0x3d0ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0ff4) {
            ctx->pc = 0x3D1010u;
            goto label_3d1010;
        }
    }
    ctx->pc = 0x3D0FFCu;
label_3d0ffc:
    // 0x3d0ffc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d1000:
    // 0x3d1000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d1000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1004:
    // 0x3d1004: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3d1004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d1008:
    // 0x3d1008: 0xc057b7c  jal         func_15EDF0
label_3d100c:
    if (ctx->pc == 0x3D100Cu) {
        ctx->pc = 0x3D100Cu;
            // 0x3d100c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D1010u;
        goto label_3d1010;
    }
    ctx->pc = 0x3D1008u;
    SET_GPR_U32(ctx, 31, 0x3D1010u);
    ctx->pc = 0x3D100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1008u;
            // 0x3d100c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1010u; }
        if (ctx->pc != 0x3D1010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1010u; }
        if (ctx->pc != 0x3D1010u) { return; }
    }
    ctx->pc = 0x3D1010u;
label_3d1010:
    // 0x3d1010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d1010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1014:
    // 0x3d1014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1018:
    // 0x3d1018: 0x3e00008  jr          $ra
label_3d101c:
    if (ctx->pc == 0x3D101Cu) {
        ctx->pc = 0x3D101Cu;
            // 0x3d101c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D1020u;
        goto label_fallthrough_0x3d1018;
    }
    ctx->pc = 0x3D1018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1018u;
            // 0x3d101c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3d1018:
    ctx->pc = 0x3D1020u;
}
