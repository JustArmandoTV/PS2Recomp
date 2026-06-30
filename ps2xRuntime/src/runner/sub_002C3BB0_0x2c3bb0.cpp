#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C3BB0
// Address: 0x2c3bb0 - 0x2c3f80
void sub_002C3BB0_0x2c3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3BB0_0x2c3bb0");
#endif

    switch (ctx->pc) {
        case 0x2c3bb0u: goto label_2c3bb0;
        case 0x2c3bb4u: goto label_2c3bb4;
        case 0x2c3bb8u: goto label_2c3bb8;
        case 0x2c3bbcu: goto label_2c3bbc;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bc4u: goto label_2c3bc4;
        case 0x2c3bc8u: goto label_2c3bc8;
        case 0x2c3bccu: goto label_2c3bcc;
        case 0x2c3bd0u: goto label_2c3bd0;
        case 0x2c3bd4u: goto label_2c3bd4;
        case 0x2c3bd8u: goto label_2c3bd8;
        case 0x2c3bdcu: goto label_2c3bdc;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3be4u: goto label_2c3be4;
        case 0x2c3be8u: goto label_2c3be8;
        case 0x2c3becu: goto label_2c3bec;
        case 0x2c3bf0u: goto label_2c3bf0;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3bfcu: goto label_2c3bfc;
        case 0x2c3c00u: goto label_2c3c00;
        case 0x2c3c04u: goto label_2c3c04;
        case 0x2c3c08u: goto label_2c3c08;
        case 0x2c3c0cu: goto label_2c3c0c;
        case 0x2c3c10u: goto label_2c3c10;
        case 0x2c3c14u: goto label_2c3c14;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c1cu: goto label_2c3c1c;
        case 0x2c3c20u: goto label_2c3c20;
        case 0x2c3c24u: goto label_2c3c24;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c2cu: goto label_2c3c2c;
        case 0x2c3c30u: goto label_2c3c30;
        case 0x2c3c34u: goto label_2c3c34;
        case 0x2c3c38u: goto label_2c3c38;
        case 0x2c3c3cu: goto label_2c3c3c;
        case 0x2c3c40u: goto label_2c3c40;
        case 0x2c3c44u: goto label_2c3c44;
        case 0x2c3c48u: goto label_2c3c48;
        case 0x2c3c4cu: goto label_2c3c4c;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c54u: goto label_2c3c54;
        case 0x2c3c58u: goto label_2c3c58;
        case 0x2c3c5cu: goto label_2c3c5c;
        case 0x2c3c60u: goto label_2c3c60;
        case 0x2c3c64u: goto label_2c3c64;
        case 0x2c3c68u: goto label_2c3c68;
        case 0x2c3c6cu: goto label_2c3c6c;
        case 0x2c3c70u: goto label_2c3c70;
        case 0x2c3c74u: goto label_2c3c74;
        case 0x2c3c78u: goto label_2c3c78;
        case 0x2c3c7cu: goto label_2c3c7c;
        case 0x2c3c80u: goto label_2c3c80;
        case 0x2c3c84u: goto label_2c3c84;
        case 0x2c3c88u: goto label_2c3c88;
        case 0x2c3c8cu: goto label_2c3c8c;
        case 0x2c3c90u: goto label_2c3c90;
        case 0x2c3c94u: goto label_2c3c94;
        case 0x2c3c98u: goto label_2c3c98;
        case 0x2c3c9cu: goto label_2c3c9c;
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3ca4u: goto label_2c3ca4;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cacu: goto label_2c3cac;
        case 0x2c3cb0u: goto label_2c3cb0;
        case 0x2c3cb4u: goto label_2c3cb4;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3cc0u: goto label_2c3cc0;
        case 0x2c3cc4u: goto label_2c3cc4;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3cccu: goto label_2c3ccc;
        case 0x2c3cd0u: goto label_2c3cd0;
        case 0x2c3cd4u: goto label_2c3cd4;
        case 0x2c3cd8u: goto label_2c3cd8;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3ce0u: goto label_2c3ce0;
        case 0x2c3ce4u: goto label_2c3ce4;
        case 0x2c3ce8u: goto label_2c3ce8;
        case 0x2c3cecu: goto label_2c3cec;
        case 0x2c3cf0u: goto label_2c3cf0;
        case 0x2c3cf4u: goto label_2c3cf4;
        case 0x2c3cf8u: goto label_2c3cf8;
        case 0x2c3cfcu: goto label_2c3cfc;
        case 0x2c3d00u: goto label_2c3d00;
        case 0x2c3d04u: goto label_2c3d04;
        case 0x2c3d08u: goto label_2c3d08;
        case 0x2c3d0cu: goto label_2c3d0c;
        case 0x2c3d10u: goto label_2c3d10;
        case 0x2c3d14u: goto label_2c3d14;
        case 0x2c3d18u: goto label_2c3d18;
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3d20u: goto label_2c3d20;
        case 0x2c3d24u: goto label_2c3d24;
        case 0x2c3d28u: goto label_2c3d28;
        case 0x2c3d2cu: goto label_2c3d2c;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d34u: goto label_2c3d34;
        case 0x2c3d38u: goto label_2c3d38;
        case 0x2c3d3cu: goto label_2c3d3c;
        case 0x2c3d40u: goto label_2c3d40;
        case 0x2c3d44u: goto label_2c3d44;
        case 0x2c3d48u: goto label_2c3d48;
        case 0x2c3d4cu: goto label_2c3d4c;
        case 0x2c3d50u: goto label_2c3d50;
        case 0x2c3d54u: goto label_2c3d54;
        case 0x2c3d58u: goto label_2c3d58;
        case 0x2c3d5cu: goto label_2c3d5c;
        case 0x2c3d60u: goto label_2c3d60;
        case 0x2c3d64u: goto label_2c3d64;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d6cu: goto label_2c3d6c;
        case 0x2c3d70u: goto label_2c3d70;
        case 0x2c3d74u: goto label_2c3d74;
        case 0x2c3d78u: goto label_2c3d78;
        case 0x2c3d7cu: goto label_2c3d7c;
        case 0x2c3d80u: goto label_2c3d80;
        case 0x2c3d84u: goto label_2c3d84;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d8cu: goto label_2c3d8c;
        case 0x2c3d90u: goto label_2c3d90;
        case 0x2c3d94u: goto label_2c3d94;
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3da0u: goto label_2c3da0;
        case 0x2c3da4u: goto label_2c3da4;
        case 0x2c3da8u: goto label_2c3da8;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3db0u: goto label_2c3db0;
        case 0x2c3db4u: goto label_2c3db4;
        case 0x2c3db8u: goto label_2c3db8;
        case 0x2c3dbcu: goto label_2c3dbc;
        case 0x2c3dc0u: goto label_2c3dc0;
        case 0x2c3dc4u: goto label_2c3dc4;
        case 0x2c3dc8u: goto label_2c3dc8;
        case 0x2c3dccu: goto label_2c3dcc;
        case 0x2c3dd0u: goto label_2c3dd0;
        case 0x2c3dd4u: goto label_2c3dd4;
        case 0x2c3dd8u: goto label_2c3dd8;
        case 0x2c3ddcu: goto label_2c3ddc;
        case 0x2c3de0u: goto label_2c3de0;
        case 0x2c3de4u: goto label_2c3de4;
        case 0x2c3de8u: goto label_2c3de8;
        case 0x2c3decu: goto label_2c3dec;
        case 0x2c3df0u: goto label_2c3df0;
        case 0x2c3df4u: goto label_2c3df4;
        case 0x2c3df8u: goto label_2c3df8;
        case 0x2c3dfcu: goto label_2c3dfc;
        case 0x2c3e00u: goto label_2c3e00;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e08u: goto label_2c3e08;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e10u: goto label_2c3e10;
        case 0x2c3e14u: goto label_2c3e14;
        case 0x2c3e18u: goto label_2c3e18;
        case 0x2c3e1cu: goto label_2c3e1c;
        case 0x2c3e20u: goto label_2c3e20;
        case 0x2c3e24u: goto label_2c3e24;
        case 0x2c3e28u: goto label_2c3e28;
        case 0x2c3e2cu: goto label_2c3e2c;
        case 0x2c3e30u: goto label_2c3e30;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e38u: goto label_2c3e38;
        case 0x2c3e3cu: goto label_2c3e3c;
        case 0x2c3e40u: goto label_2c3e40;
        case 0x2c3e44u: goto label_2c3e44;
        case 0x2c3e48u: goto label_2c3e48;
        case 0x2c3e4cu: goto label_2c3e4c;
        case 0x2c3e50u: goto label_2c3e50;
        case 0x2c3e54u: goto label_2c3e54;
        case 0x2c3e58u: goto label_2c3e58;
        case 0x2c3e5cu: goto label_2c3e5c;
        case 0x2c3e60u: goto label_2c3e60;
        case 0x2c3e64u: goto label_2c3e64;
        case 0x2c3e68u: goto label_2c3e68;
        case 0x2c3e6cu: goto label_2c3e6c;
        case 0x2c3e70u: goto label_2c3e70;
        case 0x2c3e74u: goto label_2c3e74;
        case 0x2c3e78u: goto label_2c3e78;
        case 0x2c3e7cu: goto label_2c3e7c;
        case 0x2c3e80u: goto label_2c3e80;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3e88u: goto label_2c3e88;
        case 0x2c3e8cu: goto label_2c3e8c;
        case 0x2c3e90u: goto label_2c3e90;
        case 0x2c3e94u: goto label_2c3e94;
        case 0x2c3e98u: goto label_2c3e98;
        case 0x2c3e9cu: goto label_2c3e9c;
        case 0x2c3ea0u: goto label_2c3ea0;
        case 0x2c3ea4u: goto label_2c3ea4;
        case 0x2c3ea8u: goto label_2c3ea8;
        case 0x2c3eacu: goto label_2c3eac;
        case 0x2c3eb0u: goto label_2c3eb0;
        case 0x2c3eb4u: goto label_2c3eb4;
        case 0x2c3eb8u: goto label_2c3eb8;
        case 0x2c3ebcu: goto label_2c3ebc;
        case 0x2c3ec0u: goto label_2c3ec0;
        case 0x2c3ec4u: goto label_2c3ec4;
        case 0x2c3ec8u: goto label_2c3ec8;
        case 0x2c3eccu: goto label_2c3ecc;
        case 0x2c3ed0u: goto label_2c3ed0;
        case 0x2c3ed4u: goto label_2c3ed4;
        case 0x2c3ed8u: goto label_2c3ed8;
        case 0x2c3edcu: goto label_2c3edc;
        case 0x2c3ee0u: goto label_2c3ee0;
        case 0x2c3ee4u: goto label_2c3ee4;
        case 0x2c3ee8u: goto label_2c3ee8;
        case 0x2c3eecu: goto label_2c3eec;
        case 0x2c3ef0u: goto label_2c3ef0;
        case 0x2c3ef4u: goto label_2c3ef4;
        case 0x2c3ef8u: goto label_2c3ef8;
        case 0x2c3efcu: goto label_2c3efc;
        case 0x2c3f00u: goto label_2c3f00;
        case 0x2c3f04u: goto label_2c3f04;
        case 0x2c3f08u: goto label_2c3f08;
        case 0x2c3f0cu: goto label_2c3f0c;
        case 0x2c3f10u: goto label_2c3f10;
        case 0x2c3f14u: goto label_2c3f14;
        case 0x2c3f18u: goto label_2c3f18;
        case 0x2c3f1cu: goto label_2c3f1c;
        case 0x2c3f20u: goto label_2c3f20;
        case 0x2c3f24u: goto label_2c3f24;
        case 0x2c3f28u: goto label_2c3f28;
        case 0x2c3f2cu: goto label_2c3f2c;
        case 0x2c3f30u: goto label_2c3f30;
        case 0x2c3f34u: goto label_2c3f34;
        case 0x2c3f38u: goto label_2c3f38;
        case 0x2c3f3cu: goto label_2c3f3c;
        case 0x2c3f40u: goto label_2c3f40;
        case 0x2c3f44u: goto label_2c3f44;
        case 0x2c3f48u: goto label_2c3f48;
        case 0x2c3f4cu: goto label_2c3f4c;
        case 0x2c3f50u: goto label_2c3f50;
        case 0x2c3f54u: goto label_2c3f54;
        case 0x2c3f58u: goto label_2c3f58;
        case 0x2c3f5cu: goto label_2c3f5c;
        case 0x2c3f60u: goto label_2c3f60;
        case 0x2c3f64u: goto label_2c3f64;
        case 0x2c3f68u: goto label_2c3f68;
        case 0x2c3f6cu: goto label_2c3f6c;
        case 0x2c3f70u: goto label_2c3f70;
        case 0x2c3f74u: goto label_2c3f74;
        case 0x2c3f78u: goto label_2c3f78;
        case 0x2c3f7cu: goto label_2c3f7c;
        default: break;
    }

    ctx->pc = 0x2c3bb0u;

label_2c3bb0:
    // 0x2c3bb0: 0x80788fc  j           func_1E23F0
label_2c3bb4:
    if (ctx->pc == 0x2C3BB4u) {
        ctx->pc = 0x2C3BB8u;
        goto label_2c3bb8;
    }
    ctx->pc = 0x2C3BB0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C3BB8u;
label_2c3bb8:
    // 0x2c3bb8: 0x0  nop
    ctx->pc = 0x2c3bb8u;
    // NOP
label_2c3bbc:
    // 0x2c3bbc: 0x0  nop
    ctx->pc = 0x2c3bbcu;
    // NOP
label_2c3bc0:
    // 0x2c3bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c3bc4:
    // 0x2c3bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c3bc8:
    // 0x2c3bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c3bcc:
    // 0x2c3bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c3bd0:
    // 0x2c3bd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c3bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3bd4:
    // 0x2c3bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c3bd8:
    // 0x2c3bd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c3bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c3bdc:
    // 0x2c3bdc: 0x12600077  beqz        $s3, . + 4 + (0x77 << 2)
label_2c3be0:
    if (ctx->pc == 0x2C3BE0u) {
        ctx->pc = 0x2C3BE0u;
            // 0x2c3be0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C3BE4u;
        goto label_2c3be4;
    }
    ctx->pc = 0x2C3BDCu;
    {
        const bool branch_taken_0x2c3bdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BDCu;
            // 0x2c3be0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bdc) {
            ctx->pc = 0x2C3DBCu;
            goto label_2c3dbc;
        }
    }
    ctx->pc = 0x2C3BE4u;
label_2c3be4:
    // 0x2c3be4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c3be8:
    // 0x2c3be8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c3bec:
    // 0x2c3bec: 0x2463a560  addiu       $v1, $v1, -0x5AA0
    ctx->pc = 0x2c3becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944096));
label_2c3bf0:
    // 0x2c3bf0: 0x2442a5a0  addiu       $v0, $v0, -0x5A60
    ctx->pc = 0x2c3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
label_2c3bf4:
    // 0x2c3bf4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2c3bf8:
    // 0x2c3bf8: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2c3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_2c3bfc:
    // 0x2c3bfc: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x2c3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2c3c00:
    // 0x2c3c00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2c3c04:
    if (ctx->pc == 0x2C3C04u) {
        ctx->pc = 0x2C3C04u;
            // 0x2c3c04: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->pc = 0x2C3C08u;
        goto label_2c3c08;
    }
    ctx->pc = 0x2C3C00u;
    {
        const bool branch_taken_0x2c3c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c00) {
            ctx->pc = 0x2C3C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C00u;
            // 0x2c3c04: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C14u;
            goto label_2c3c14;
        }
    }
    ctx->pc = 0x2C3C08u;
label_2c3c08:
    // 0x2c3c08: 0xc04008c  jal         func_100230
label_2c3c0c:
    if (ctx->pc == 0x2C3C0Cu) {
        ctx->pc = 0x2C3C10u;
        goto label_2c3c10;
    }
    ctx->pc = 0x2C3C08u;
    SET_GPR_U32(ctx, 31, 0x2C3C10u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C10u; }
        if (ctx->pc != 0x2C3C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C10u; }
        if (ctx->pc != 0x2C3C10u) { return; }
    }
    ctx->pc = 0x2C3C10u;
label_2c3c10:
    // 0x2c3c10: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x2c3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_2c3c14:
    // 0x2c3c14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2c3c18:
    if (ctx->pc == 0x2C3C18u) {
        ctx->pc = 0x2C3C18u;
            // 0x2c3c18: 0x8e6200c8  lw          $v0, 0xC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
        ctx->pc = 0x2C3C1Cu;
        goto label_2c3c1c;
    }
    ctx->pc = 0x2C3C14u;
    {
        const bool branch_taken_0x2c3c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c14) {
            ctx->pc = 0x2C3C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C14u;
            // 0x2c3c18: 0x8e6200c8  lw          $v0, 0xC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C28u;
            goto label_2c3c28;
        }
    }
    ctx->pc = 0x2C3C1Cu;
label_2c3c1c:
    // 0x2c3c1c: 0xc04008c  jal         func_100230
label_2c3c20:
    if (ctx->pc == 0x2C3C20u) {
        ctx->pc = 0x2C3C24u;
        goto label_2c3c24;
    }
    ctx->pc = 0x2C3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C24u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C24u; }
        if (ctx->pc != 0x2C3C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C24u; }
        if (ctx->pc != 0x2C3C24u) { return; }
    }
    ctx->pc = 0x2C3C24u;
label_2c3c24:
    // 0x2c3c24: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2c3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_2c3c28:
    // 0x2c3c28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2c3c2c:
    if (ctx->pc == 0x2C3C2Cu) {
        ctx->pc = 0x2C3C2Cu;
            // 0x2c3c2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C30u;
        goto label_2c3c30;
    }
    ctx->pc = 0x2C3C28u;
    {
        const bool branch_taken_0x2c3c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C28u;
            // 0x2c3c2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c28) {
            ctx->pc = 0x2C3C58u;
            goto label_2c3c58;
        }
    }
    ctx->pc = 0x2C3C30u;
label_2c3c30:
    // 0x2c3c30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c3c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3c34:
    // 0x2c3c34: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x2c3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_2c3c38:
    // 0x2c3c38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c3c3c:
    // 0x2c3c3c: 0xc04008c  jal         func_100230
label_2c3c40:
    if (ctx->pc == 0x2C3C40u) {
        ctx->pc = 0x2C3C40u;
            // 0x2c3c40: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2C3C44u;
        goto label_2c3c44;
    }
    ctx->pc = 0x2C3C3Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C44u);
    ctx->pc = 0x2C3C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C3Cu;
            // 0x2c3c40: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C44u; }
        if (ctx->pc != 0x2C3C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C44u; }
        if (ctx->pc != 0x2C3C44u) { return; }
    }
    ctx->pc = 0x2C3C44u;
label_2c3c44:
    // 0x2c3c44: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2c3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_2c3c48:
    // 0x2c3c48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c3c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c3c4c:
    // 0x2c3c4c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2c3c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c3c50:
    // 0x2c3c50: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2c3c54:
    if (ctx->pc == 0x2C3C54u) {
        ctx->pc = 0x2C3C54u;
            // 0x2c3c54: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x2C3C58u;
        goto label_2c3c58;
    }
    ctx->pc = 0x2C3C50u;
    {
        const bool branch_taken_0x2c3c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C50u;
            // 0x2c3c54: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c50) {
            ctx->pc = 0x2C3C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3c34;
        }
    }
    ctx->pc = 0x2C3C58u;
label_2c3c58:
    // 0x2c3c58: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x2c3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_2c3c5c:
    // 0x2c3c5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2c3c60:
    if (ctx->pc == 0x2C3C60u) {
        ctx->pc = 0x2C3C60u;
            // 0x2c3c60: 0x8e6400e8  lw          $a0, 0xE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
        ctx->pc = 0x2C3C64u;
        goto label_2c3c64;
    }
    ctx->pc = 0x2C3C5Cu;
    {
        const bool branch_taken_0x2c3c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c5c) {
            ctx->pc = 0x2C3C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C5Cu;
            // 0x2c3c60: 0x8e6400e8  lw          $a0, 0xE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C70u;
            goto label_2c3c70;
        }
    }
    ctx->pc = 0x2C3C64u;
label_2c3c64:
    // 0x2c3c64: 0xc04008c  jal         func_100230
label_2c3c68:
    if (ctx->pc == 0x2C3C68u) {
        ctx->pc = 0x2C3C6Cu;
        goto label_2c3c6c;
    }
    ctx->pc = 0x2C3C64u;
    SET_GPR_U32(ctx, 31, 0x2C3C6Cu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C6Cu; }
        if (ctx->pc != 0x2C3C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C6Cu; }
        if (ctx->pc != 0x2C3C6Cu) { return; }
    }
    ctx->pc = 0x2C3C6Cu;
label_2c3c6c:
    // 0x2c3c6c: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x2c3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_2c3c70:
    // 0x2c3c70: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2c3c74:
    if (ctx->pc == 0x2C3C74u) {
        ctx->pc = 0x2C3C74u;
            // 0x2c3c74: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->pc = 0x2C3C78u;
        goto label_2c3c78;
    }
    ctx->pc = 0x2C3C70u;
    {
        const bool branch_taken_0x2c3c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c70) {
            ctx->pc = 0x2C3C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C70u;
            // 0x2c3c74: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C84u;
            goto label_2c3c84;
        }
    }
    ctx->pc = 0x2C3C78u;
label_2c3c78:
    // 0x2c3c78: 0xc04008c  jal         func_100230
label_2c3c7c:
    if (ctx->pc == 0x2C3C7Cu) {
        ctx->pc = 0x2C3C80u;
        goto label_2c3c80;
    }
    ctx->pc = 0x2C3C78u;
    SET_GPR_U32(ctx, 31, 0x2C3C80u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C80u; }
        if (ctx->pc != 0x2C3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C80u; }
        if (ctx->pc != 0x2C3C80u) { return; }
    }
    ctx->pc = 0x2C3C80u;
label_2c3c80:
    // 0x2c3c80: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x2c3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_2c3c84:
    // 0x2c3c84: 0x8e6400f4  lw          $a0, 0xF4($s3)
    ctx->pc = 0x2c3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2c3c88:
    // 0x2c3c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c3c8c:
    // 0x2c3c8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c3c90:
    // 0x2c3c90: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2c3c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_2c3c94:
    // 0x2c3c94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c3c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c3c98:
    // 0x2c3c98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c3c9c:
    // 0x2c3c9c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2c3ca0:
    if (ctx->pc == 0x2C3CA0u) {
        ctx->pc = 0x2C3CA0u;
            // 0x2c3ca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CA4u;
        goto label_2c3ca4;
    }
    ctx->pc = 0x2C3C9Cu;
    {
        const bool branch_taken_0x2c3c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C9Cu;
            // 0x2c3ca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c9c) {
            ctx->pc = 0x2C3CF8u;
            goto label_2c3cf8;
        }
    }
    ctx->pc = 0x2C3CA4u;
label_2c3ca4:
    // 0x2c3ca4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2c3ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2c3ca8:
    // 0x2c3ca8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c3ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2c3cac:
    // 0x2c3cac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3cb0:
    // 0x2c3cb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2c3cb4:
    if (ctx->pc == 0x2C3CB4u) {
        ctx->pc = 0x2C3CB8u;
        goto label_2c3cb8;
    }
    ctx->pc = 0x2C3CB0u;
    {
        const bool branch_taken_0x2c3cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cb0) {
            ctx->pc = 0x2C3CC8u;
            goto label_2c3cc8;
        }
    }
    ctx->pc = 0x2C3CB8u;
label_2c3cb8:
    // 0x2c3cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c3cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c3cbc:
    // 0x2c3cbc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c3cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c3cc0:
    // 0x2c3cc0: 0x320f809  jalr        $t9
label_2c3cc4:
    if (ctx->pc == 0x2C3CC4u) {
        ctx->pc = 0x2C3CC4u;
            // 0x2c3cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3CC8u;
        goto label_2c3cc8;
    }
    ctx->pc = 0x2C3CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3CC8u);
        ctx->pc = 0x2C3CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CC0u;
            // 0x2c3cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CC8u; }
            if (ctx->pc != 0x2C3CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C3CC8u;
label_2c3cc8:
    // 0x2c3cc8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2c3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2c3ccc:
    // 0x2c3ccc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c3cccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2c3cd0:
    // 0x2c3cd0: 0x8e6400f4  lw          $a0, 0xF4($s3)
    ctx->pc = 0x2c3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2c3cd4:
    // 0x2c3cd4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2c3cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2c3cd8:
    // 0x2c3cd8: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x2c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_2c3cdc:
    // 0x2c3cdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c3ce0:
    // 0x2c3ce0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c3ce4:
    // 0x2c3ce4: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2c3ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2c3ce8:
    // 0x2c3ce8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c3ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c3cec:
    // 0x2c3cec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c3cf0:
    // 0x2c3cf0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_2c3cf4:
    if (ctx->pc == 0x2C3CF4u) {
        ctx->pc = 0x2C3CF4u;
            // 0x2c3cf4: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x2C3CF8u;
        goto label_2c3cf8;
    }
    ctx->pc = 0x2C3CF0u;
    {
        const bool branch_taken_0x2c3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cf0) {
            ctx->pc = 0x2C3CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CF0u;
            // 0x2c3cf4: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3ca8;
        }
    }
    ctx->pc = 0x2C3CF8u;
label_2c3cf8:
    // 0x2c3cf8: 0x266200ec  addiu       $v0, $s3, 0xEC
    ctx->pc = 0x2c3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
label_2c3cfc:
    // 0x2c3cfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c3d00:
    if (ctx->pc == 0x2C3D00u) {
        ctx->pc = 0x2C3D04u;
        goto label_2c3d04;
    }
    ctx->pc = 0x2C3CFCu;
    {
        const bool branch_taken_0x2c3cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cfc) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3D04u;
label_2c3d04:
    // 0x2c3d04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2c3d08:
    if (ctx->pc == 0x2C3D08u) {
        ctx->pc = 0x2C3D0Cu;
        goto label_2c3d0c;
    }
    ctx->pc = 0x2C3D04u;
    {
        const bool branch_taken_0x2c3d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d04) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3D0Cu;
label_2c3d0c:
    // 0x2c3d0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c3d10:
    if (ctx->pc == 0x2C3D10u) {
        ctx->pc = 0x2C3D14u;
        goto label_2c3d14;
    }
    ctx->pc = 0x2C3D0Cu;
    {
        const bool branch_taken_0x2c3d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d0c) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3D14u;
label_2c3d14:
    // 0x2c3d14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c3d18:
    if (ctx->pc == 0x2C3D18u) {
        ctx->pc = 0x2C3D1Cu;
        goto label_2c3d1c;
    }
    ctx->pc = 0x2C3D14u;
    {
        const bool branch_taken_0x2c3d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d14) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3D1Cu;
label_2c3d1c:
    // 0x2c3d1c: 0xc0400a8  jal         func_1002A0
label_2c3d20:
    if (ctx->pc == 0x2C3D20u) {
        ctx->pc = 0x2C3D24u;
        goto label_2c3d24;
    }
    ctx->pc = 0x2C3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C3D24u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D24u; }
        if (ctx->pc != 0x2C3D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D24u; }
        if (ctx->pc != 0x2C3D24u) { return; }
    }
    ctx->pc = 0x2C3D24u;
label_2c3d24:
    // 0x2c3d24: 0x52600020  beql        $s3, $zero, . + 4 + (0x20 << 2)
label_2c3d28:
    if (ctx->pc == 0x2C3D28u) {
        ctx->pc = 0x2C3D28u;
            // 0x2c3d28: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2C3D2Cu;
        goto label_2c3d2c;
    }
    ctx->pc = 0x2C3D24u;
    {
        const bool branch_taken_0x2c3d24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d24) {
            ctx->pc = 0x2C3D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D24u;
            // 0x2c3d28: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DA8u;
            goto label_2c3da8;
        }
    }
    ctx->pc = 0x2C3D2Cu;
label_2c3d2c:
    // 0x2c3d2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3d30:
    // 0x2c3d30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3d34:
    // 0x2c3d34: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2c3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2c3d38:
    // 0x2c3d38: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2c3d3c:
    // 0x2c3d3c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c3d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2c3d40:
    // 0x2c3d40: 0x26620050  addiu       $v0, $s3, 0x50
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_2c3d44:
    // 0x2c3d44: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c3d48:
    if (ctx->pc == 0x2C3D48u) {
        ctx->pc = 0x2C3D48u;
            // 0x2c3d48: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2C3D4Cu;
        goto label_2c3d4c;
    }
    ctx->pc = 0x2C3D44u;
    {
        const bool branch_taken_0x2c3d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D44u;
            // 0x2c3d48: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d44) {
            ctx->pc = 0x2C3D80u;
            goto label_2c3d80;
        }
    }
    ctx->pc = 0x2C3D4Cu;
label_2c3d4c:
    // 0x2c3d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3d50:
    // 0x2c3d50: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2c3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2c3d54:
    // 0x2c3d54: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2c3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_2c3d58:
    // 0x2c3d58: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x2c3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_2c3d5c:
    // 0x2c3d5c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2c3d60:
    if (ctx->pc == 0x2C3D60u) {
        ctx->pc = 0x2C3D64u;
        goto label_2c3d64;
    }
    ctx->pc = 0x2C3D5Cu;
    {
        const bool branch_taken_0x2c3d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d5c) {
            ctx->pc = 0x2C3D80u;
            goto label_2c3d80;
        }
    }
    ctx->pc = 0x2C3D64u;
label_2c3d64:
    // 0x2c3d64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c3d68:
    if (ctx->pc == 0x2C3D68u) {
        ctx->pc = 0x2C3D68u;
            // 0x2c3d68: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2C3D6Cu;
        goto label_2c3d6c;
    }
    ctx->pc = 0x2C3D64u;
    {
        const bool branch_taken_0x2c3d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d64) {
            ctx->pc = 0x2C3D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D64u;
            // 0x2c3d68: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3D80u;
            goto label_2c3d80;
        }
    }
    ctx->pc = 0x2C3D6Cu;
label_2c3d6c:
    // 0x2c3d6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c3d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c3d70:
    // 0x2c3d70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c3d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c3d74:
    // 0x2c3d74: 0x320f809  jalr        $t9
label_2c3d78:
    if (ctx->pc == 0x2C3D78u) {
        ctx->pc = 0x2C3D78u;
            // 0x2c3d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3D7Cu;
        goto label_2c3d7c;
    }
    ctx->pc = 0x2C3D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3D7Cu);
        ctx->pc = 0x2C3D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D74u;
            // 0x2c3d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3D7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D7Cu; }
            if (ctx->pc != 0x2C3D7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C3D7Cu;
label_2c3d7c:
    // 0x2c3d7c: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x2c3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
label_2c3d80:
    // 0x2c3d80: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2c3d84:
    if (ctx->pc == 0x2C3D84u) {
        ctx->pc = 0x2C3D88u;
        goto label_2c3d88;
    }
    ctx->pc = 0x2C3D80u;
    {
        const bool branch_taken_0x2c3d80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d80) {
            ctx->pc = 0x2C3DA4u;
            goto label_2c3da4;
        }
    }
    ctx->pc = 0x2C3D88u;
label_2c3d88:
    // 0x2c3d88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3d8c:
    // 0x2c3d8c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c3d90:
    // 0x2c3d90: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2c3d94:
    if (ctx->pc == 0x2C3D94u) {
        ctx->pc = 0x2C3D94u;
            // 0x2c3d94: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C3D98u;
        goto label_2c3d98;
    }
    ctx->pc = 0x2C3D90u;
    {
        const bool branch_taken_0x2c3d90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D90u;
            // 0x2c3d94: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d90) {
            ctx->pc = 0x2C3DA4u;
            goto label_2c3da4;
        }
    }
    ctx->pc = 0x2C3D98u;
label_2c3d98:
    // 0x2c3d98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3d9c:
    // 0x2c3d9c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c3da0:
    // 0x2c3da0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c3da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2c3da4:
    // 0x2c3da4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2c3da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2c3da8:
    // 0x2c3da8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c3dac:
    // 0x2c3dac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c3db0:
    if (ctx->pc == 0x2C3DB0u) {
        ctx->pc = 0x2C3DB0u;
            // 0x2c3db0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DB4u;
        goto label_2c3db4;
    }
    ctx->pc = 0x2C3DACu;
    {
        const bool branch_taken_0x2c3dac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3dac) {
            ctx->pc = 0x2C3DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DACu;
            // 0x2c3db0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DC0u;
            goto label_2c3dc0;
        }
    }
    ctx->pc = 0x2C3DB4u;
label_2c3db4:
    // 0x2c3db4: 0xc0400a8  jal         func_1002A0
label_2c3db8:
    if (ctx->pc == 0x2C3DB8u) {
        ctx->pc = 0x2C3DB8u;
            // 0x2c3db8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DBCu;
        goto label_2c3dbc;
    }
    ctx->pc = 0x2C3DB4u;
    SET_GPR_U32(ctx, 31, 0x2C3DBCu);
    ctx->pc = 0x2C3DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DB4u;
            // 0x2c3db8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DBCu; }
        if (ctx->pc != 0x2C3DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DBCu; }
        if (ctx->pc != 0x2C3DBCu) { return; }
    }
    ctx->pc = 0x2C3DBCu;
label_2c3dbc:
    // 0x2c3dbc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c3dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dc0:
    // 0x2c3dc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c3dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c3dc4:
    // 0x2c3dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3dc8:
    // 0x2c3dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3dcc:
    // 0x2c3dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3dd0:
    // 0x2c3dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3dd4:
    // 0x2c3dd4: 0x3e00008  jr          $ra
label_2c3dd8:
    if (ctx->pc == 0x2C3DD8u) {
        ctx->pc = 0x2C3DD8u;
            // 0x2c3dd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C3DDCu;
        goto label_2c3ddc;
    }
    ctx->pc = 0x2C3DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DD4u;
            // 0x2c3dd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3DDCu;
label_2c3ddc:
    // 0x2c3ddc: 0x0  nop
    ctx->pc = 0x2c3ddcu;
    // NOP
label_2c3de0:
    // 0x2c3de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c3de4:
    // 0x2c3de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c3de8:
    // 0x2c3de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c3dec:
    // 0x2c3dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c3df0:
    // 0x2c3df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3df4:
    // 0x2c3df4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2c3df8:
    if (ctx->pc == 0x2C3DF8u) {
        ctx->pc = 0x2C3DF8u;
            // 0x2c3df8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DFCu;
        goto label_2c3dfc;
    }
    ctx->pc = 0x2C3DF4u;
    {
        const bool branch_taken_0x2c3df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DF4u;
            // 0x2c3df8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3df4) {
            ctx->pc = 0x2C3E58u;
            goto label_2c3e58;
        }
    }
    ctx->pc = 0x2C3DFCu;
label_2c3dfc:
    // 0x2c3dfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c3e00:
    // 0x2c3e00: 0x2442a5b0  addiu       $v0, $v0, -0x5A50
    ctx->pc = 0x2c3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944176));
label_2c3e04:
    // 0x2c3e04: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2c3e08:
    if (ctx->pc == 0x2C3E08u) {
        ctx->pc = 0x2C3E08u;
            // 0x2c3e08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C3E0Cu;
        goto label_2c3e0c;
    }
    ctx->pc = 0x2C3E04u;
    {
        const bool branch_taken_0x2c3e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E04u;
            // 0x2c3e08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e04) {
            ctx->pc = 0x2C3E40u;
            goto label_2c3e40;
        }
    }
    ctx->pc = 0x2C3E0Cu;
label_2c3e0c:
    // 0x2c3e0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3e10:
    // 0x2c3e10: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c3e14:
    // 0x2c3e14: 0xc0d37dc  jal         func_34DF70
label_2c3e18:
    if (ctx->pc == 0x2C3E18u) {
        ctx->pc = 0x2C3E18u;
            // 0x2c3e18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C3E1Cu;
        goto label_2c3e1c;
    }
    ctx->pc = 0x2C3E14u;
    SET_GPR_U32(ctx, 31, 0x2C3E1Cu);
    ctx->pc = 0x2C3E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E14u;
            // 0x2c3e18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E1Cu; }
        if (ctx->pc != 0x2C3E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E1Cu; }
        if (ctx->pc != 0x2C3E1Cu) { return; }
    }
    ctx->pc = 0x2C3E1Cu;
label_2c3e1c:
    // 0x2c3e1c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_2c3e20:
    if (ctx->pc == 0x2C3E20u) {
        ctx->pc = 0x2C3E20u;
            // 0x2c3e20: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C3E24u;
        goto label_2c3e24;
    }
    ctx->pc = 0x2C3E1Cu;
    {
        const bool branch_taken_0x2c3e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e1c) {
            ctx->pc = 0x2C3E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E1Cu;
            // 0x2c3e20: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E44u;
            goto label_2c3e44;
        }
    }
    ctx->pc = 0x2C3E24u;
label_2c3e24:
    // 0x2c3e24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3e28:
    // 0x2c3e28: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c3e2c:
    // 0x2c3e2c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2c3e30:
    if (ctx->pc == 0x2C3E30u) {
        ctx->pc = 0x2C3E30u;
            // 0x2c3e30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C3E34u;
        goto label_2c3e34;
    }
    ctx->pc = 0x2C3E2Cu;
    {
        const bool branch_taken_0x2c3e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E2Cu;
            // 0x2c3e30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e2c) {
            ctx->pc = 0x2C3E40u;
            goto label_2c3e40;
        }
    }
    ctx->pc = 0x2C3E34u;
label_2c3e34:
    // 0x2c3e34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3e38:
    // 0x2c3e38: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c3e3c:
    // 0x2c3e3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c3e40:
    // 0x2c3e40: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c3e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c3e44:
    // 0x2c3e44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c3e48:
    // 0x2c3e48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c3e4c:
    if (ctx->pc == 0x2C3E4Cu) {
        ctx->pc = 0x2C3E4Cu;
            // 0x2c3e4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E50u;
        goto label_2c3e50;
    }
    ctx->pc = 0x2C3E48u;
    {
        const bool branch_taken_0x2c3e48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3e48) {
            ctx->pc = 0x2C3E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E48u;
            // 0x2c3e4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E5Cu;
            goto label_2c3e5c;
        }
    }
    ctx->pc = 0x2C3E50u;
label_2c3e50:
    // 0x2c3e50: 0xc0400a8  jal         func_1002A0
label_2c3e54:
    if (ctx->pc == 0x2C3E54u) {
        ctx->pc = 0x2C3E54u;
            // 0x2c3e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E58u;
        goto label_2c3e58;
    }
    ctx->pc = 0x2C3E50u;
    SET_GPR_U32(ctx, 31, 0x2C3E58u);
    ctx->pc = 0x2C3E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E50u;
            // 0x2c3e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E58u; }
        if (ctx->pc != 0x2C3E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E58u; }
        if (ctx->pc != 0x2C3E58u) { return; }
    }
    ctx->pc = 0x2C3E58u;
label_2c3e58:
    // 0x2c3e58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e5c:
    // 0x2c3e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3e60:
    // 0x2c3e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3e64:
    // 0x2c3e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3e68:
    // 0x2c3e68: 0x3e00008  jr          $ra
label_2c3e6c:
    if (ctx->pc == 0x2C3E6Cu) {
        ctx->pc = 0x2C3E6Cu;
            // 0x2c3e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C3E70u;
        goto label_2c3e70;
    }
    ctx->pc = 0x2C3E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E68u;
            // 0x2c3e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3E70u;
label_2c3e70:
    // 0x2c3e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3e74:
    // 0x2c3e74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3e78:
    // 0x2c3e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c3e7c:
    // 0x2c3e7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3e80:
    // 0x2c3e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c3e84:
    // 0x2c3e84: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c3e88:
    // 0x2c3e88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3e8c:
    // 0x2c3e8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c3e90:
    // 0x2c3e90: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2c3e94:
    // 0x2c3e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3e98:
    // 0x2c3e98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2c3e9c:
    // 0x2c3e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ea0:
    // 0x2c3ea0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2c3ea4:
    // 0x2c3ea4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c3ea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c3ea8:
    // 0x2c3ea8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2c3eac:
    // 0x2c3eac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c3eacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2c3eb0:
    // 0x2c3eb0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c3eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2c3eb4:
    // 0x2c3eb4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c3eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2c3eb8:
    // 0x2c3eb8: 0xc04cbd8  jal         func_132F60
label_2c3ebc:
    if (ctx->pc == 0x2C3EBCu) {
        ctx->pc = 0x2C3EBCu;
            // 0x2c3ebc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2C3EC0u;
        goto label_2c3ec0;
    }
    ctx->pc = 0x2C3EB8u;
    SET_GPR_U32(ctx, 31, 0x2C3EC0u);
    ctx->pc = 0x2C3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3EB8u;
            // 0x2c3ebc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3EC0u; }
        if (ctx->pc != 0x2C3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3EC0u; }
        if (ctx->pc != 0x2C3EC0u) { return; }
    }
    ctx->pc = 0x2C3EC0u;
label_2c3ec0:
    // 0x2c3ec0: 0xc04c968  jal         func_1325A0
label_2c3ec4:
    if (ctx->pc == 0x2C3EC4u) {
        ctx->pc = 0x2C3EC4u;
            // 0x2c3ec4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2C3EC8u;
        goto label_2c3ec8;
    }
    ctx->pc = 0x2C3EC0u;
    SET_GPR_U32(ctx, 31, 0x2C3EC8u);
    ctx->pc = 0x2C3EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3EC0u;
            // 0x2c3ec4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3EC8u; }
        if (ctx->pc != 0x2C3EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3EC8u; }
        if (ctx->pc != 0x2C3EC8u) { return; }
    }
    ctx->pc = 0x2C3EC8u;
label_2c3ec8:
    // 0x2c3ec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c3ecc:
    // 0x2c3ecc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2c3eccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_2c3ed0:
    // 0x2c3ed0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2c3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2c3ed4:
    // 0x2c3ed4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c3ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2c3ed8:
    // 0x2c3ed8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_2c3edc:
    // 0x2c3edc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2c3edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_2c3ee0:
    // 0x2c3ee0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2c3ee4:
    // 0x2c3ee4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c3ee8:
    // 0x2c3ee8: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x2c3ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_2c3eec:
    // 0x2c3eec: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x2c3eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_2c3ef0:
    // 0x2c3ef0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x2c3ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_2c3ef4:
    // 0x2c3ef4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x2c3ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_2c3ef8:
    // 0x2c3ef8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_2c3efc:
    // 0x2c3efc: 0x2484a560  addiu       $a0, $a0, -0x5AA0
    ctx->pc = 0x2c3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944096));
label_2c3f00:
    // 0x2c3f00: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2c3f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2c3f04:
    // 0x2c3f04: 0x2463a5a0  addiu       $v1, $v1, -0x5A60
    ctx->pc = 0x2c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944160));
label_2c3f08:
    // 0x2c3f08: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2c3f08u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2c3f0c:
    // 0x2c3f0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f10:
    // 0x2c3f10: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x2c3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_2c3f14:
    // 0x2c3f14: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2c3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_2c3f18:
    // 0x2c3f18: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2c3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2c3f1c:
    // 0x2c3f1c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2c3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_2c3f20:
    // 0x2c3f20: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2c3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_2c3f24:
    // 0x2c3f24: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2c3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2c3f28:
    // 0x2c3f28: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2c3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_2c3f2c:
    // 0x2c3f2c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2c3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2c3f30:
    // 0x2c3f30: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_2c3f34:
    // 0x2c3f34: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_2c3f38:
    // 0x2c3f38: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x2c3f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_2c3f3c:
    // 0x2c3f3c: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2c3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_2c3f40:
    // 0x2c3f40: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2c3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_2c3f44:
    // 0x2c3f44: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2c3f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2c3f48:
    // 0x2c3f48: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2c3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2c3f4c:
    // 0x2c3f4c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x2c3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_2c3f50:
    // 0x2c3f50: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2c3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_2c3f54:
    // 0x2c3f54: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2c3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_2c3f58:
    // 0x2c3f58: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2c3f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_2c3f5c:
    // 0x2c3f5c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2c3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_2c3f60:
    // 0x2c3f60: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x2c3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_2c3f64:
    // 0x2c3f64: 0xa20000f8  sb          $zero, 0xF8($s0)
    ctx->pc = 0x2c3f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 248), (uint8_t)GPR_U32(ctx, 0));
label_2c3f68:
    // 0x2c3f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3f6c:
    // 0x2c3f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3f70:
    // 0x2c3f70: 0x3e00008  jr          $ra
label_2c3f74:
    if (ctx->pc == 0x2C3F74u) {
        ctx->pc = 0x2C3F74u;
            // 0x2c3f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C3F78u;
        goto label_2c3f78;
    }
    ctx->pc = 0x2C3F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F70u;
            // 0x2c3f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3F78u;
label_2c3f78:
    // 0x2c3f78: 0x0  nop
    ctx->pc = 0x2c3f78u;
    // NOP
label_2c3f7c:
    // 0x2c3f7c: 0x0  nop
    ctx->pc = 0x2c3f7cu;
    // NOP
}
