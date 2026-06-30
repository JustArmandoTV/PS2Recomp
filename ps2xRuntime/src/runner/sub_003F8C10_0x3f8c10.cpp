#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F8C10
// Address: 0x3f8c10 - 0x3f9010
void sub_003F8C10_0x3f8c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8C10_0x3f8c10");
#endif

    switch (ctx->pc) {
        case 0x3f8c10u: goto label_3f8c10;
        case 0x3f8c14u: goto label_3f8c14;
        case 0x3f8c18u: goto label_3f8c18;
        case 0x3f8c1cu: goto label_3f8c1c;
        case 0x3f8c20u: goto label_3f8c20;
        case 0x3f8c24u: goto label_3f8c24;
        case 0x3f8c28u: goto label_3f8c28;
        case 0x3f8c2cu: goto label_3f8c2c;
        case 0x3f8c30u: goto label_3f8c30;
        case 0x3f8c34u: goto label_3f8c34;
        case 0x3f8c38u: goto label_3f8c38;
        case 0x3f8c3cu: goto label_3f8c3c;
        case 0x3f8c40u: goto label_3f8c40;
        case 0x3f8c44u: goto label_3f8c44;
        case 0x3f8c48u: goto label_3f8c48;
        case 0x3f8c4cu: goto label_3f8c4c;
        case 0x3f8c50u: goto label_3f8c50;
        case 0x3f8c54u: goto label_3f8c54;
        case 0x3f8c58u: goto label_3f8c58;
        case 0x3f8c5cu: goto label_3f8c5c;
        case 0x3f8c60u: goto label_3f8c60;
        case 0x3f8c64u: goto label_3f8c64;
        case 0x3f8c68u: goto label_3f8c68;
        case 0x3f8c6cu: goto label_3f8c6c;
        case 0x3f8c70u: goto label_3f8c70;
        case 0x3f8c74u: goto label_3f8c74;
        case 0x3f8c78u: goto label_3f8c78;
        case 0x3f8c7cu: goto label_3f8c7c;
        case 0x3f8c80u: goto label_3f8c80;
        case 0x3f8c84u: goto label_3f8c84;
        case 0x3f8c88u: goto label_3f8c88;
        case 0x3f8c8cu: goto label_3f8c8c;
        case 0x3f8c90u: goto label_3f8c90;
        case 0x3f8c94u: goto label_3f8c94;
        case 0x3f8c98u: goto label_3f8c98;
        case 0x3f8c9cu: goto label_3f8c9c;
        case 0x3f8ca0u: goto label_3f8ca0;
        case 0x3f8ca4u: goto label_3f8ca4;
        case 0x3f8ca8u: goto label_3f8ca8;
        case 0x3f8cacu: goto label_3f8cac;
        case 0x3f8cb0u: goto label_3f8cb0;
        case 0x3f8cb4u: goto label_3f8cb4;
        case 0x3f8cb8u: goto label_3f8cb8;
        case 0x3f8cbcu: goto label_3f8cbc;
        case 0x3f8cc0u: goto label_3f8cc0;
        case 0x3f8cc4u: goto label_3f8cc4;
        case 0x3f8cc8u: goto label_3f8cc8;
        case 0x3f8cccu: goto label_3f8ccc;
        case 0x3f8cd0u: goto label_3f8cd0;
        case 0x3f8cd4u: goto label_3f8cd4;
        case 0x3f8cd8u: goto label_3f8cd8;
        case 0x3f8cdcu: goto label_3f8cdc;
        case 0x3f8ce0u: goto label_3f8ce0;
        case 0x3f8ce4u: goto label_3f8ce4;
        case 0x3f8ce8u: goto label_3f8ce8;
        case 0x3f8cecu: goto label_3f8cec;
        case 0x3f8cf0u: goto label_3f8cf0;
        case 0x3f8cf4u: goto label_3f8cf4;
        case 0x3f8cf8u: goto label_3f8cf8;
        case 0x3f8cfcu: goto label_3f8cfc;
        case 0x3f8d00u: goto label_3f8d00;
        case 0x3f8d04u: goto label_3f8d04;
        case 0x3f8d08u: goto label_3f8d08;
        case 0x3f8d0cu: goto label_3f8d0c;
        case 0x3f8d10u: goto label_3f8d10;
        case 0x3f8d14u: goto label_3f8d14;
        case 0x3f8d18u: goto label_3f8d18;
        case 0x3f8d1cu: goto label_3f8d1c;
        case 0x3f8d20u: goto label_3f8d20;
        case 0x3f8d24u: goto label_3f8d24;
        case 0x3f8d28u: goto label_3f8d28;
        case 0x3f8d2cu: goto label_3f8d2c;
        case 0x3f8d30u: goto label_3f8d30;
        case 0x3f8d34u: goto label_3f8d34;
        case 0x3f8d38u: goto label_3f8d38;
        case 0x3f8d3cu: goto label_3f8d3c;
        case 0x3f8d40u: goto label_3f8d40;
        case 0x3f8d44u: goto label_3f8d44;
        case 0x3f8d48u: goto label_3f8d48;
        case 0x3f8d4cu: goto label_3f8d4c;
        case 0x3f8d50u: goto label_3f8d50;
        case 0x3f8d54u: goto label_3f8d54;
        case 0x3f8d58u: goto label_3f8d58;
        case 0x3f8d5cu: goto label_3f8d5c;
        case 0x3f8d60u: goto label_3f8d60;
        case 0x3f8d64u: goto label_3f8d64;
        case 0x3f8d68u: goto label_3f8d68;
        case 0x3f8d6cu: goto label_3f8d6c;
        case 0x3f8d70u: goto label_3f8d70;
        case 0x3f8d74u: goto label_3f8d74;
        case 0x3f8d78u: goto label_3f8d78;
        case 0x3f8d7cu: goto label_3f8d7c;
        case 0x3f8d80u: goto label_3f8d80;
        case 0x3f8d84u: goto label_3f8d84;
        case 0x3f8d88u: goto label_3f8d88;
        case 0x3f8d8cu: goto label_3f8d8c;
        case 0x3f8d90u: goto label_3f8d90;
        case 0x3f8d94u: goto label_3f8d94;
        case 0x3f8d98u: goto label_3f8d98;
        case 0x3f8d9cu: goto label_3f8d9c;
        case 0x3f8da0u: goto label_3f8da0;
        case 0x3f8da4u: goto label_3f8da4;
        case 0x3f8da8u: goto label_3f8da8;
        case 0x3f8dacu: goto label_3f8dac;
        case 0x3f8db0u: goto label_3f8db0;
        case 0x3f8db4u: goto label_3f8db4;
        case 0x3f8db8u: goto label_3f8db8;
        case 0x3f8dbcu: goto label_3f8dbc;
        case 0x3f8dc0u: goto label_3f8dc0;
        case 0x3f8dc4u: goto label_3f8dc4;
        case 0x3f8dc8u: goto label_3f8dc8;
        case 0x3f8dccu: goto label_3f8dcc;
        case 0x3f8dd0u: goto label_3f8dd0;
        case 0x3f8dd4u: goto label_3f8dd4;
        case 0x3f8dd8u: goto label_3f8dd8;
        case 0x3f8ddcu: goto label_3f8ddc;
        case 0x3f8de0u: goto label_3f8de0;
        case 0x3f8de4u: goto label_3f8de4;
        case 0x3f8de8u: goto label_3f8de8;
        case 0x3f8decu: goto label_3f8dec;
        case 0x3f8df0u: goto label_3f8df0;
        case 0x3f8df4u: goto label_3f8df4;
        case 0x3f8df8u: goto label_3f8df8;
        case 0x3f8dfcu: goto label_3f8dfc;
        case 0x3f8e00u: goto label_3f8e00;
        case 0x3f8e04u: goto label_3f8e04;
        case 0x3f8e08u: goto label_3f8e08;
        case 0x3f8e0cu: goto label_3f8e0c;
        case 0x3f8e10u: goto label_3f8e10;
        case 0x3f8e14u: goto label_3f8e14;
        case 0x3f8e18u: goto label_3f8e18;
        case 0x3f8e1cu: goto label_3f8e1c;
        case 0x3f8e20u: goto label_3f8e20;
        case 0x3f8e24u: goto label_3f8e24;
        case 0x3f8e28u: goto label_3f8e28;
        case 0x3f8e2cu: goto label_3f8e2c;
        case 0x3f8e30u: goto label_3f8e30;
        case 0x3f8e34u: goto label_3f8e34;
        case 0x3f8e38u: goto label_3f8e38;
        case 0x3f8e3cu: goto label_3f8e3c;
        case 0x3f8e40u: goto label_3f8e40;
        case 0x3f8e44u: goto label_3f8e44;
        case 0x3f8e48u: goto label_3f8e48;
        case 0x3f8e4cu: goto label_3f8e4c;
        case 0x3f8e50u: goto label_3f8e50;
        case 0x3f8e54u: goto label_3f8e54;
        case 0x3f8e58u: goto label_3f8e58;
        case 0x3f8e5cu: goto label_3f8e5c;
        case 0x3f8e60u: goto label_3f8e60;
        case 0x3f8e64u: goto label_3f8e64;
        case 0x3f8e68u: goto label_3f8e68;
        case 0x3f8e6cu: goto label_3f8e6c;
        case 0x3f8e70u: goto label_3f8e70;
        case 0x3f8e74u: goto label_3f8e74;
        case 0x3f8e78u: goto label_3f8e78;
        case 0x3f8e7cu: goto label_3f8e7c;
        case 0x3f8e80u: goto label_3f8e80;
        case 0x3f8e84u: goto label_3f8e84;
        case 0x3f8e88u: goto label_3f8e88;
        case 0x3f8e8cu: goto label_3f8e8c;
        case 0x3f8e90u: goto label_3f8e90;
        case 0x3f8e94u: goto label_3f8e94;
        case 0x3f8e98u: goto label_3f8e98;
        case 0x3f8e9cu: goto label_3f8e9c;
        case 0x3f8ea0u: goto label_3f8ea0;
        case 0x3f8ea4u: goto label_3f8ea4;
        case 0x3f8ea8u: goto label_3f8ea8;
        case 0x3f8eacu: goto label_3f8eac;
        case 0x3f8eb0u: goto label_3f8eb0;
        case 0x3f8eb4u: goto label_3f8eb4;
        case 0x3f8eb8u: goto label_3f8eb8;
        case 0x3f8ebcu: goto label_3f8ebc;
        case 0x3f8ec0u: goto label_3f8ec0;
        case 0x3f8ec4u: goto label_3f8ec4;
        case 0x3f8ec8u: goto label_3f8ec8;
        case 0x3f8eccu: goto label_3f8ecc;
        case 0x3f8ed0u: goto label_3f8ed0;
        case 0x3f8ed4u: goto label_3f8ed4;
        case 0x3f8ed8u: goto label_3f8ed8;
        case 0x3f8edcu: goto label_3f8edc;
        case 0x3f8ee0u: goto label_3f8ee0;
        case 0x3f8ee4u: goto label_3f8ee4;
        case 0x3f8ee8u: goto label_3f8ee8;
        case 0x3f8eecu: goto label_3f8eec;
        case 0x3f8ef0u: goto label_3f8ef0;
        case 0x3f8ef4u: goto label_3f8ef4;
        case 0x3f8ef8u: goto label_3f8ef8;
        case 0x3f8efcu: goto label_3f8efc;
        case 0x3f8f00u: goto label_3f8f00;
        case 0x3f8f04u: goto label_3f8f04;
        case 0x3f8f08u: goto label_3f8f08;
        case 0x3f8f0cu: goto label_3f8f0c;
        case 0x3f8f10u: goto label_3f8f10;
        case 0x3f8f14u: goto label_3f8f14;
        case 0x3f8f18u: goto label_3f8f18;
        case 0x3f8f1cu: goto label_3f8f1c;
        case 0x3f8f20u: goto label_3f8f20;
        case 0x3f8f24u: goto label_3f8f24;
        case 0x3f8f28u: goto label_3f8f28;
        case 0x3f8f2cu: goto label_3f8f2c;
        case 0x3f8f30u: goto label_3f8f30;
        case 0x3f8f34u: goto label_3f8f34;
        case 0x3f8f38u: goto label_3f8f38;
        case 0x3f8f3cu: goto label_3f8f3c;
        case 0x3f8f40u: goto label_3f8f40;
        case 0x3f8f44u: goto label_3f8f44;
        case 0x3f8f48u: goto label_3f8f48;
        case 0x3f8f4cu: goto label_3f8f4c;
        case 0x3f8f50u: goto label_3f8f50;
        case 0x3f8f54u: goto label_3f8f54;
        case 0x3f8f58u: goto label_3f8f58;
        case 0x3f8f5cu: goto label_3f8f5c;
        case 0x3f8f60u: goto label_3f8f60;
        case 0x3f8f64u: goto label_3f8f64;
        case 0x3f8f68u: goto label_3f8f68;
        case 0x3f8f6cu: goto label_3f8f6c;
        case 0x3f8f70u: goto label_3f8f70;
        case 0x3f8f74u: goto label_3f8f74;
        case 0x3f8f78u: goto label_3f8f78;
        case 0x3f8f7cu: goto label_3f8f7c;
        case 0x3f8f80u: goto label_3f8f80;
        case 0x3f8f84u: goto label_3f8f84;
        case 0x3f8f88u: goto label_3f8f88;
        case 0x3f8f8cu: goto label_3f8f8c;
        case 0x3f8f90u: goto label_3f8f90;
        case 0x3f8f94u: goto label_3f8f94;
        case 0x3f8f98u: goto label_3f8f98;
        case 0x3f8f9cu: goto label_3f8f9c;
        case 0x3f8fa0u: goto label_3f8fa0;
        case 0x3f8fa4u: goto label_3f8fa4;
        case 0x3f8fa8u: goto label_3f8fa8;
        case 0x3f8facu: goto label_3f8fac;
        case 0x3f8fb0u: goto label_3f8fb0;
        case 0x3f8fb4u: goto label_3f8fb4;
        case 0x3f8fb8u: goto label_3f8fb8;
        case 0x3f8fbcu: goto label_3f8fbc;
        case 0x3f8fc0u: goto label_3f8fc0;
        case 0x3f8fc4u: goto label_3f8fc4;
        case 0x3f8fc8u: goto label_3f8fc8;
        case 0x3f8fccu: goto label_3f8fcc;
        case 0x3f8fd0u: goto label_3f8fd0;
        case 0x3f8fd4u: goto label_3f8fd4;
        case 0x3f8fd8u: goto label_3f8fd8;
        case 0x3f8fdcu: goto label_3f8fdc;
        case 0x3f8fe0u: goto label_3f8fe0;
        case 0x3f8fe4u: goto label_3f8fe4;
        case 0x3f8fe8u: goto label_3f8fe8;
        case 0x3f8fecu: goto label_3f8fec;
        case 0x3f8ff0u: goto label_3f8ff0;
        case 0x3f8ff4u: goto label_3f8ff4;
        case 0x3f8ff8u: goto label_3f8ff8;
        case 0x3f8ffcu: goto label_3f8ffc;
        case 0x3f9000u: goto label_3f9000;
        case 0x3f9004u: goto label_3f9004;
        case 0x3f9008u: goto label_3f9008;
        case 0x3f900cu: goto label_3f900c;
        default: break;
    }

    ctx->pc = 0x3f8c10u;

label_3f8c10:
    // 0x3f8c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f8c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f8c14:
    // 0x3f8c14: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x3f8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3f8c18:
    // 0x3f8c18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f8c1c:
    // 0x3f8c1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f8c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f8c20:
    // 0x3f8c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f8c24:
    // 0x3f8c24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f8c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f8c28:
    // 0x3f8c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f8c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f8c2c:
    // 0x3f8c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f8c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f8c30:
    // 0x3f8c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f8c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f8c34:
    // 0x3f8c34: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3f8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f8c38:
    // 0x3f8c38: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x3f8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_3f8c3c:
    // 0x3f8c3c: 0x508300b9  beql        $a0, $v1, . + 4 + (0xB9 << 2)
label_3f8c40:
    if (ctx->pc == 0x3F8C40u) {
        ctx->pc = 0x3F8C40u;
            // 0x3f8c40: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3F8C44u;
        goto label_3f8c44;
    }
    ctx->pc = 0x3F8C3Cu;
    {
        const bool branch_taken_0x3f8c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8c3c) {
            ctx->pc = 0x3F8C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8C3Cu;
            // 0x3f8c40: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8F24u;
            goto label_3f8f24;
        }
    }
    ctx->pc = 0x3F8C44u;
label_3f8c44:
    // 0x3f8c44: 0x8ca20d74  lw          $v0, 0xD74($a1)
    ctx->pc = 0x3f8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_3f8c48:
    // 0x3f8c48: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x3f8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_3f8c4c:
    // 0x3f8c4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f8c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f8c50:
    // 0x3f8c50: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x3f8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_3f8c54:
    // 0x3f8c54: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3f8c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8c58:
    // 0x3f8c58: 0xc077fb0  jal         func_1DFEC0
label_3f8c5c:
    if (ctx->pc == 0x3F8C5Cu) {
        ctx->pc = 0x3F8C5Cu;
            // 0x3f8c5c: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x3F8C60u;
        goto label_3f8c60;
    }
    ctx->pc = 0x3F8C58u;
    SET_GPR_U32(ctx, 31, 0x3F8C60u);
    ctx->pc = 0x3F8C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8C58u;
            // 0x3f8c5c: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8C60u; }
        if (ctx->pc != 0x3F8C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8C60u; }
        if (ctx->pc != 0x3F8C60u) { return; }
    }
    ctx->pc = 0x3F8C60u;
label_3f8c60:
    // 0x3f8c60: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3f8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8c64:
    // 0x3f8c64: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3f8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f8c68:
    // 0x3f8c68: 0x8c840db0  lw          $a0, 0xDB0($a0)
    ctx->pc = 0x3f8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3f8c6c:
    // 0x3f8c6c: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
label_3f8c70:
    if (ctx->pc == 0x3F8C70u) {
        ctx->pc = 0x3F8C74u;
        goto label_3f8c74;
    }
    ctx->pc = 0x3F8C6Cu;
    {
        const bool branch_taken_0x3f8c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8c6c) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8C74u;
label_3f8c74:
    // 0x3f8c74: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_3f8c78:
    if (ctx->pc == 0x3F8C78u) {
        ctx->pc = 0x3F8C7Cu;
        goto label_3f8c7c;
    }
    ctx->pc = 0x3F8C74u;
    {
        const bool branch_taken_0x3f8c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8c74) {
            ctx->pc = 0x3F8C84u;
            goto label_3f8c84;
        }
    }
    ctx->pc = 0x3F8C7Cu;
label_3f8c7c:
    // 0x3f8c7c: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_3f8c80:
    if (ctx->pc == 0x3F8C80u) {
        ctx->pc = 0x3F8C84u;
        goto label_3f8c84;
    }
    ctx->pc = 0x3F8C7Cu;
    {
        const bool branch_taken_0x3f8c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8c7c) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8C84u;
label_3f8c84:
    // 0x3f8c84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f8c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3f8c88:
    // 0x3f8c88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8c8c:
    // 0x3f8c8c: 0xc04cc04  jal         func_133010
label_3f8c90:
    if (ctx->pc == 0x3F8C90u) {
        ctx->pc = 0x3F8C90u;
            // 0x3f8c90: 0x24a5b6a0  addiu       $a1, $a1, -0x4960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948512));
        ctx->pc = 0x3F8C94u;
        goto label_3f8c94;
    }
    ctx->pc = 0x3F8C8Cu;
    SET_GPR_U32(ctx, 31, 0x3F8C94u);
    ctx->pc = 0x3F8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8C8Cu;
            // 0x3f8c90: 0x24a5b6a0  addiu       $a1, $a1, -0x4960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8C94u; }
        if (ctx->pc != 0x3F8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8C94u; }
        if (ctx->pc != 0x3F8C94u) { return; }
    }
    ctx->pc = 0x3F8C94u;
label_3f8c94:
    // 0x3f8c94: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3f8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f8c98:
    // 0x3f8c98: 0x18600059  blez        $v1, . + 4 + (0x59 << 2)
label_3f8c9c:
    if (ctx->pc == 0x3F8C9Cu) {
        ctx->pc = 0x3F8C9Cu;
            // 0x3f8c9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CA0u;
        goto label_3f8ca0;
    }
    ctx->pc = 0x3F8C98u;
    {
        const bool branch_taken_0x3f8c98 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F8C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8C98u;
            // 0x3f8c9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8c98) {
            ctx->pc = 0x3F8E00u;
            goto label_3f8e00;
        }
    }
    ctx->pc = 0x3F8CA0u;
label_3f8ca0:
    // 0x3f8ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f8ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8ca4:
    // 0x3f8ca4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8ca8:
    // 0x3f8ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8cac:
    // 0x3f8cac: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x3f8cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3f8cb0:
    // 0x3f8cb0: 0x8ce50028  lw          $a1, 0x28($a3)
    ctx->pc = 0x3f8cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3f8cb4:
    // 0x3f8cb4: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x3f8cb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_3f8cb8:
    // 0x3f8cb8: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f8cbc:
    if (ctx->pc == 0x3F8CBCu) {
        ctx->pc = 0x3F8CBCu;
            // 0x3f8cbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CC0u;
        goto label_3f8cc0;
    }
    ctx->pc = 0x3F8CB8u;
    {
        const bool branch_taken_0x3f8cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8cb8) {
            ctx->pc = 0x3F8CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8CB8u;
            // 0x3f8cbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8CD0u;
            goto label_3f8cd0;
        }
    }
    ctx->pc = 0x3F8CC0u;
label_3f8cc0:
    // 0x3f8cc0: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x3f8cc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3f8cc4:
    // 0x3f8cc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f8cc8:
    if (ctx->pc == 0x3F8CC8u) {
        ctx->pc = 0x3F8CC8u;
            // 0x3f8cc8: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x3F8CCCu;
        goto label_3f8ccc;
    }
    ctx->pc = 0x3F8CC4u;
    {
        const bool branch_taken_0x3f8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8CC4u;
            // 0x3f8cc8: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8cc4) {
            ctx->pc = 0x3F8CD0u;
            goto label_3f8cd0;
        }
    }
    ctx->pc = 0x3F8CCCu;
label_3f8ccc:
    // 0x3f8ccc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3f8cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8cd0:
    // 0x3f8cd0: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
label_3f8cd4:
    if (ctx->pc == 0x3F8CD4u) {
        ctx->pc = 0x3F8CD4u;
            // 0x3f8cd4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x3F8CD8u;
        goto label_3f8cd8;
    }
    ctx->pc = 0x3F8CD0u;
    {
        const bool branch_taken_0x3f8cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8cd0) {
            ctx->pc = 0x3F8CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8CD0u;
            // 0x3f8cd4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8DECu;
            goto label_3f8dec;
        }
    }
    ctx->pc = 0x3F8CD8u;
label_3f8cd8:
    // 0x3f8cd8: 0x8c720200  lw          $s2, 0x200($v1)
    ctx->pc = 0x3f8cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
label_3f8cdc:
    // 0x3f8cdc: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
label_3f8ce0:
    if (ctx->pc == 0x3F8CE0u) {
        ctx->pc = 0x3F8CE4u;
        goto label_3f8ce4;
    }
    ctx->pc = 0x3F8CDCu;
    {
        const bool branch_taken_0x3f8cdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8cdc) {
            ctx->pc = 0x3F8DE8u;
            goto label_3f8de8;
        }
    }
    ctx->pc = 0x3F8CE4u;
label_3f8ce4:
    // 0x3f8ce4: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3f8ce4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3f8ce8:
    // 0x3f8ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8cec:
    // 0x3f8cec: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_3f8cf0:
    if (ctx->pc == 0x3F8CF0u) {
        ctx->pc = 0x3F8CF4u;
        goto label_3f8cf4;
    }
    ctx->pc = 0x3F8CECu;
    {
        const bool branch_taken_0x3f8cec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8cec) {
            ctx->pc = 0x3F8D00u;
            goto label_3f8d00;
        }
    }
    ctx->pc = 0x3F8CF4u;
label_3f8cf4:
    // 0x3f8cf4: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x3f8cf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3f8cf8:
    // 0x3f8cf8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3f8cfc:
    if (ctx->pc == 0x3F8CFCu) {
        ctx->pc = 0x3F8D00u;
        goto label_3f8d00;
    }
    ctx->pc = 0x3F8CF8u;
    {
        const bool branch_taken_0x3f8cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8cf8) {
            ctx->pc = 0x3F8D20u;
            goto label_3f8d20;
        }
    }
    ctx->pc = 0x3F8D00u;
label_3f8d00:
    // 0x3f8d00: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3f8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f8d04:
    // 0x3f8d04: 0x14a30028  bne         $a1, $v1, . + 4 + (0x28 << 2)
label_3f8d08:
    if (ctx->pc == 0x3F8D08u) {
        ctx->pc = 0x3F8D0Cu;
        goto label_3f8d0c;
    }
    ctx->pc = 0x3F8D04u;
    {
        const bool branch_taken_0x3f8d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8d04) {
            ctx->pc = 0x3F8DA8u;
            goto label_3f8da8;
        }
    }
    ctx->pc = 0x3F8D0Cu;
label_3f8d0c:
    // 0x3f8d0c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3f8d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8d10:
    // 0x3f8d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8d14:
    // 0x3f8d14: 0x8c84069c  lw          $a0, 0x69C($a0)
    ctx->pc = 0x3f8d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
label_3f8d18:
    // 0x3f8d18: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_3f8d1c:
    if (ctx->pc == 0x3F8D1Cu) {
        ctx->pc = 0x3F8D20u;
        goto label_3f8d20;
    }
    ctx->pc = 0x3F8D18u;
    {
        const bool branch_taken_0x3f8d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8d18) {
            ctx->pc = 0x3F8DA8u;
            goto label_3f8da8;
        }
    }
    ctx->pc = 0x3F8D20u;
label_3f8d20:
    // 0x3f8d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8d24:
    // 0x3f8d24: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x3f8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8d28:
    // 0x3f8d28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f8d2c:
    // 0x3f8d2c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3f8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f8d30:
    // 0x3f8d30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f8d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8d34:
    // 0x3f8d34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f8d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f8d38:
    // 0x3f8d38: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x3f8d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_3f8d3c:
    // 0x3f8d3c: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x3f8d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8d40:
    // 0x3f8d40: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3f8d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f8d44:
    // 0x3f8d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f8d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f8d48:
    // 0x3f8d48: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x3f8d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_3f8d4c:
    // 0x3f8d4c: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x3f8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8d50:
    // 0x3f8d50: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3f8d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f8d54:
    // 0x3f8d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f8d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f8d58:
    // 0x3f8d58: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x3f8d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3f8d5c:
    // 0x3f8d5c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3f8d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8d60:
    // 0x3f8d60: 0x8c620da0  lw          $v0, 0xDA0($v1)
    ctx->pc = 0x3f8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3f8d64:
    // 0x3f8d64: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3f8d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3f8d68:
    // 0x3f8d68: 0xc0fe058  jal         func_3F8160
label_3f8d6c:
    if (ctx->pc == 0x3F8D6Cu) {
        ctx->pc = 0x3F8D6Cu;
            // 0x3f8d6c: 0xac620da0  sw          $v0, 0xDA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3488), GPR_U32(ctx, 2));
        ctx->pc = 0x3F8D70u;
        goto label_3f8d70;
    }
    ctx->pc = 0x3F8D68u;
    SET_GPR_U32(ctx, 31, 0x3F8D70u);
    ctx->pc = 0x3F8D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8D68u;
            // 0x3f8d6c: 0xac620da0  sw          $v0, 0xDA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8160u;
    if (runtime->hasFunction(0x3F8160u)) {
        auto targetFn = runtime->lookupFunction(0x3F8160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8D70u; }
        if (ctx->pc != 0x3F8D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8160_0x3f8160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8D70u; }
        if (ctx->pc != 0x3F8D70u) { return; }
    }
    ctx->pc = 0x3F8D70u;
label_3f8d70:
    // 0x3f8d70: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x3f8d70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_3f8d74:
    // 0x3f8d74: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3f8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3f8d78:
    // 0x3f8d78: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3f8d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3f8d7c:
    // 0x3f8d7c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f8d80:
    if (ctx->pc == 0x3F8D80u) {
        ctx->pc = 0x3F8D84u;
        goto label_3f8d84;
    }
    ctx->pc = 0x3F8D7Cu;
    {
        const bool branch_taken_0x3f8d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8d7c) {
            ctx->pc = 0x3F8D88u;
            goto label_3f8d88;
        }
    }
    ctx->pc = 0x3F8D84u;
label_3f8d84:
    // 0x3f8d84: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x3f8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
label_3f8d88:
    // 0x3f8d88: 0x92440007  lbu         $a0, 0x7($s2)
    ctx->pc = 0x3f8d88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_3f8d8c:
    // 0x3f8d8c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x3f8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3f8d90:
    // 0x3f8d90: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3f8d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3f8d94:
    // 0x3f8d94: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_3f8d98:
    if (ctx->pc == 0x3F8D98u) {
        ctx->pc = 0x3F8D9Cu;
        goto label_3f8d9c;
    }
    ctx->pc = 0x3F8D94u;
    {
        const bool branch_taken_0x3f8d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8d94) {
            ctx->pc = 0x3F8DE8u;
            goto label_3f8de8;
        }
    }
    ctx->pc = 0x3F8D9Cu;
label_3f8d9c:
    // 0x3f8d9c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f8da0:
    if (ctx->pc == 0x3F8DA0u) {
        ctx->pc = 0x3F8DA0u;
            // 0x3f8da0: 0xae840024  sw          $a0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x3F8DA4u;
        goto label_3f8da4;
    }
    ctx->pc = 0x3F8D9Cu;
    {
        const bool branch_taken_0x3f8d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8D9Cu;
            // 0x3f8da0: 0xae840024  sw          $a0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d9c) {
            ctx->pc = 0x3F8DE8u;
            goto label_3f8de8;
        }
    }
    ctx->pc = 0x3F8DA4u;
label_3f8da4:
    // 0x3f8da4: 0x0  nop
    ctx->pc = 0x3f8da4u;
    // NOP
label_3f8da8:
    // 0x3f8da8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f8dac:
    // 0x3f8dac: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
label_3f8db0:
    if (ctx->pc == 0x3F8DB0u) {
        ctx->pc = 0x3F8DB4u;
        goto label_3f8db4;
    }
    ctx->pc = 0x3F8DACu;
    {
        const bool branch_taken_0x3f8dac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8dac) {
            ctx->pc = 0x3F8DE8u;
            goto label_3f8de8;
        }
    }
    ctx->pc = 0x3F8DB4u;
label_3f8db4:
    // 0x3f8db4: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3f8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8db8:
    // 0x3f8db8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f8db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8dbc:
    // 0x3f8dbc: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f8dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f8dc0:
    // 0x3f8dc0: 0x320f809  jalr        $t9
label_3f8dc4:
    if (ctx->pc == 0x3F8DC4u) {
        ctx->pc = 0x3F8DC4u;
            // 0x3f8dc4: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x3F8DC8u;
        goto label_3f8dc8;
    }
    ctx->pc = 0x3F8DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F8DC8u);
        ctx->pc = 0x3F8DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8DC0u;
            // 0x3f8dc4: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F8DC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F8DC8u; }
            if (ctx->pc != 0x3F8DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F8DC8u;
label_3f8dc8:
    // 0x3f8dc8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3f8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8dcc:
    // 0x3f8dcc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3f8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3f8dd0:
    // 0x3f8dd0: 0xc12ca3c  jal         func_4B28F0
label_3f8dd4:
    if (ctx->pc == 0x3F8DD4u) {
        ctx->pc = 0x3F8DD4u;
            // 0x3f8dd4: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x3F8DD8u;
        goto label_3f8dd8;
    }
    ctx->pc = 0x3F8DD0u;
    SET_GPR_U32(ctx, 31, 0x3F8DD8u);
    ctx->pc = 0x3F8DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8DD0u;
            // 0x3f8dd4: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8DD8u; }
        if (ctx->pc != 0x3F8DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8DD8u; }
        if (ctx->pc != 0x3F8DD8u) { return; }
    }
    ctx->pc = 0x3F8DD8u;
label_3f8dd8:
    // 0x3f8dd8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3f8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8ddc:
    // 0x3f8ddc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8de0:
    // 0x3f8de0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3f8de4:
    if (ctx->pc == 0x3F8DE4u) {
        ctx->pc = 0x3F8DE4u;
            // 0x3f8de4: 0xa06411c0  sb          $a0, 0x11C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4544), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3F8DE8u;
        goto label_3f8de8;
    }
    ctx->pc = 0x3F8DE0u;
    {
        const bool branch_taken_0x3f8de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8DE0u;
            // 0x3f8de4: 0xa06411c0  sb          $a0, 0x11C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4544), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8de0) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8DE8u;
label_3f8de8:
    // 0x3f8de8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3f8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f8dec:
    // 0x3f8dec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3f8decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3f8df0:
    // 0x3f8df0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3f8df0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f8df4:
    // 0x3f8df4: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
label_3f8df8:
    if (ctx->pc == 0x3F8DF8u) {
        ctx->pc = 0x3F8DF8u;
            // 0x3f8df8: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3F8DFCu;
        goto label_3f8dfc;
    }
    ctx->pc = 0x3F8DF4u;
    {
        const bool branch_taken_0x3f8df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8DF4u;
            // 0x3f8df8: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8df4) {
            ctx->pc = 0x3F8CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f8ca4;
        }
    }
    ctx->pc = 0x3F8DFCu;
label_3f8dfc:
    // 0x3f8dfc: 0x0  nop
    ctx->pc = 0x3f8dfcu;
    // NOP
label_3f8e00:
    // 0x3f8e00: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3f8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3f8e04:
    // 0x3f8e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8e08:
    // 0x3f8e08: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3f8e0c:
    if (ctx->pc == 0x3F8E0Cu) {
        ctx->pc = 0x3F8E0Cu;
            // 0x3f8e0c: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x3F8E10u;
        goto label_3f8e10;
    }
    ctx->pc = 0x3F8E08u;
    {
        const bool branch_taken_0x3f8e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8e08) {
            ctx->pc = 0x3F8E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8E08u;
            // 0x3f8e0c: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8E18u;
            goto label_3f8e18;
        }
    }
    ctx->pc = 0x3F8E10u;
label_3f8e10:
    // 0x3f8e10: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x3f8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_3f8e14:
    // 0x3f8e14: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3f8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8e18:
    // 0x3f8e18: 0x8c630da0  lw          $v1, 0xDA0($v1)
    ctx->pc = 0x3f8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3f8e1c:
    // 0x3f8e1c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3f8e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3f8e20:
    // 0x3f8e20: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_3f8e24:
    if (ctx->pc == 0x3F8E24u) {
        ctx->pc = 0x3F8E28u;
        goto label_3f8e28;
    }
    ctx->pc = 0x3F8E20u;
    {
        const bool branch_taken_0x3f8e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8e20) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8E28u;
label_3f8e28:
    // 0x3f8e28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8e2c:
    // 0x3f8e2c: 0xc04cc44  jal         func_133110
label_3f8e30:
    if (ctx->pc == 0x3F8E30u) {
        ctx->pc = 0x3F8E30u;
            // 0x3f8e30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E34u;
        goto label_3f8e34;
    }
    ctx->pc = 0x3F8E2Cu;
    SET_GPR_U32(ctx, 31, 0x3F8E34u);
    ctx->pc = 0x3F8E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8E2Cu;
            // 0x3f8e30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8E34u; }
        if (ctx->pc != 0x3F8E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8E34u; }
        if (ctx->pc != 0x3F8E34u) { return; }
    }
    ctx->pc = 0x3F8E34u;
label_3f8e34:
    // 0x3f8e34: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3f8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f8e38:
    // 0x3f8e38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3f8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3f8e3c:
    // 0x3f8e3c: 0x8c630db0  lw          $v1, 0xDB0($v1)
    ctx->pc = 0x3f8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_3f8e40:
    // 0x3f8e40: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
label_3f8e44:
    if (ctx->pc == 0x3F8E44u) {
        ctx->pc = 0x3F8E44u;
            // 0x3f8e44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E48u;
        goto label_3f8e48;
    }
    ctx->pc = 0x3F8E40u;
    {
        const bool branch_taken_0x3f8e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e40) {
            ctx->pc = 0x3F8E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8E40u;
            // 0x3f8e44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8F04u;
            goto label_3f8f04;
        }
    }
    ctx->pc = 0x3F8E48u;
label_3f8e48:
    // 0x3f8e48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3f8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f8e4c:
    // 0x3f8e4c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_3f8e50:
    if (ctx->pc == 0x3F8E50u) {
        ctx->pc = 0x3F8E54u;
        goto label_3f8e54;
    }
    ctx->pc = 0x3F8E4Cu;
    {
        const bool branch_taken_0x3f8e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e4c) {
            ctx->pc = 0x3F8F00u;
            goto label_3f8f00;
        }
    }
    ctx->pc = 0x3F8E54u;
label_3f8e54:
    // 0x3f8e54: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3f8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3f8e58:
    // 0x3f8e58: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_3f8e5c:
    if (ctx->pc == 0x3F8E5Cu) {
        ctx->pc = 0x3F8E60u;
        goto label_3f8e60;
    }
    ctx->pc = 0x3F8E58u;
    {
        const bool branch_taken_0x3f8e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e58) {
            ctx->pc = 0x3F8F00u;
            goto label_3f8f00;
        }
    }
    ctx->pc = 0x3F8E60u;
label_3f8e60:
    // 0x3f8e60: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x3f8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f8e64:
    // 0x3f8e64: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
label_3f8e68:
    if (ctx->pc == 0x3F8E68u) {
        ctx->pc = 0x3F8E68u;
            // 0x3f8e68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E6Cu;
        goto label_3f8e6c;
    }
    ctx->pc = 0x3F8E64u;
    {
        const bool branch_taken_0x3f8e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e64) {
            ctx->pc = 0x3F8E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8E64u;
            // 0x3f8e68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8EF0u;
            goto label_3f8ef0;
        }
    }
    ctx->pc = 0x3F8E6Cu;
label_3f8e6c:
    // 0x3f8e6c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3f8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3f8e70:
    // 0x3f8e70: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
label_3f8e74:
    if (ctx->pc == 0x3F8E74u) {
        ctx->pc = 0x3F8E74u;
            // 0x3f8e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E78u;
        goto label_3f8e78;
    }
    ctx->pc = 0x3F8E70u;
    {
        const bool branch_taken_0x3f8e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e70) {
            ctx->pc = 0x3F8E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8E70u;
            // 0x3f8e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8EDCu;
            goto label_3f8edc;
        }
    }
    ctx->pc = 0x3F8E78u;
label_3f8e78:
    // 0x3f8e78: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3f8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3f8e7c:
    // 0x3f8e7c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_3f8e80:
    if (ctx->pc == 0x3F8E80u) {
        ctx->pc = 0x3F8E84u;
        goto label_3f8e84;
    }
    ctx->pc = 0x3F8E7Cu;
    {
        const bool branch_taken_0x3f8e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e7c) {
            ctx->pc = 0x3F8ED8u;
            goto label_3f8ed8;
        }
    }
    ctx->pc = 0x3F8E84u;
label_3f8e84:
    // 0x3f8e84: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x3f8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3f8e88:
    // 0x3f8e88: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_3f8e8c:
    if (ctx->pc == 0x3F8E8Cu) {
        ctx->pc = 0x3F8E90u;
        goto label_3f8e90;
    }
    ctx->pc = 0x3F8E88u;
    {
        const bool branch_taken_0x3f8e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e88) {
            ctx->pc = 0x3F8ED8u;
            goto label_3f8ed8;
        }
    }
    ctx->pc = 0x3F8E90u;
label_3f8e90:
    // 0x3f8e90: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3f8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3f8e94:
    // 0x3f8e94: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_3f8e98:
    if (ctx->pc == 0x3F8E98u) {
        ctx->pc = 0x3F8E98u;
            // 0x3f8e98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E9Cu;
        goto label_3f8e9c;
    }
    ctx->pc = 0x3F8E94u;
    {
        const bool branch_taken_0x3f8e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8e94) {
            ctx->pc = 0x3F8E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8E94u;
            // 0x3f8e98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8EC8u;
            goto label_3f8ec8;
        }
    }
    ctx->pc = 0x3F8E9Cu;
label_3f8e9c:
    // 0x3f8e9c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3f8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f8ea0:
    // 0x3f8ea0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_3f8ea4:
    if (ctx->pc == 0x3F8EA4u) {
        ctx->pc = 0x3F8EA4u;
            // 0x3f8ea4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8EA8u;
        goto label_3f8ea8;
    }
    ctx->pc = 0x3F8EA0u;
    {
        const bool branch_taken_0x3f8ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f8ea0) {
            ctx->pc = 0x3F8EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8EA0u;
            // 0x3f8ea4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8EB4u;
            goto label_3f8eb4;
        }
    }
    ctx->pc = 0x3F8EA8u;
label_3f8ea8:
    // 0x3f8ea8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3f8eac:
    if (ctx->pc == 0x3F8EACu) {
        ctx->pc = 0x3F8EACu;
            // 0x3f8eac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8EB0u;
        goto label_3f8eb0;
    }
    ctx->pc = 0x3F8EA8u;
    {
        const bool branch_taken_0x3f8ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8EA8u;
            // 0x3f8eac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ea8) {
            ctx->pc = 0x3F8F18u;
            goto label_3f8f18;
        }
    }
    ctx->pc = 0x3F8EB0u;
label_3f8eb0:
    // 0x3f8eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8eb4:
    // 0x3f8eb4: 0xc0fdef4  jal         func_3F7BD0
label_3f8eb8:
    if (ctx->pc == 0x3F8EB8u) {
        ctx->pc = 0x3F8EBCu;
        goto label_3f8ebc;
    }
    ctx->pc = 0x3F8EB4u;
    SET_GPR_U32(ctx, 31, 0x3F8EBCu);
    ctx->pc = 0x3F7BD0u;
    if (runtime->hasFunction(0x3F7BD0u)) {
        auto targetFn = runtime->lookupFunction(0x3F7BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8EBCu; }
        if (ctx->pc != 0x3F8EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F7BD0_0x3f7bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8EBCu; }
        if (ctx->pc != 0x3F8EBCu) { return; }
    }
    ctx->pc = 0x3F8EBCu;
label_3f8ebc:
    // 0x3f8ebc: 0x10000018  b           . + 4 + (0x18 << 2)
label_3f8ec0:
    if (ctx->pc == 0x3F8EC0u) {
        ctx->pc = 0x3F8EC4u;
        goto label_3f8ec4;
    }
    ctx->pc = 0x3F8EBCu;
    {
        const bool branch_taken_0x3f8ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8ebc) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8EC4u;
label_3f8ec4:
    // 0x3f8ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8ec8:
    // 0x3f8ec8: 0xc0fdeac  jal         func_3F7AB0
label_3f8ecc:
    if (ctx->pc == 0x3F8ECCu) {
        ctx->pc = 0x3F8ED0u;
        goto label_3f8ed0;
    }
    ctx->pc = 0x3F8EC8u;
    SET_GPR_U32(ctx, 31, 0x3F8ED0u);
    ctx->pc = 0x3F7AB0u;
    if (runtime->hasFunction(0x3F7AB0u)) {
        auto targetFn = runtime->lookupFunction(0x3F7AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8ED0u; }
        if (ctx->pc != 0x3F8ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F7AB0_0x3f7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8ED0u; }
        if (ctx->pc != 0x3F8ED0u) { return; }
    }
    ctx->pc = 0x3F8ED0u;
label_3f8ed0:
    // 0x3f8ed0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3f8ed4:
    if (ctx->pc == 0x3F8ED4u) {
        ctx->pc = 0x3F8ED8u;
        goto label_3f8ed8;
    }
    ctx->pc = 0x3F8ED0u;
    {
        const bool branch_taken_0x3f8ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8ed0) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8ED8u;
label_3f8ed8:
    // 0x3f8ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8edc:
    // 0x3f8edc: 0xc0fdde0  jal         func_3F7780
label_3f8ee0:
    if (ctx->pc == 0x3F8EE0u) {
        ctx->pc = 0x3F8EE4u;
        goto label_3f8ee4;
    }
    ctx->pc = 0x3F8EDCu;
    SET_GPR_U32(ctx, 31, 0x3F8EE4u);
    ctx->pc = 0x3F7780u;
    if (runtime->hasFunction(0x3F7780u)) {
        auto targetFn = runtime->lookupFunction(0x3F7780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8EE4u; }
        if (ctx->pc != 0x3F8EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F7780_0x3f7780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8EE4u; }
        if (ctx->pc != 0x3F8EE4u) { return; }
    }
    ctx->pc = 0x3F8EE4u;
label_3f8ee4:
    // 0x3f8ee4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f8ee8:
    if (ctx->pc == 0x3F8EE8u) {
        ctx->pc = 0x3F8EECu;
        goto label_3f8eec;
    }
    ctx->pc = 0x3F8EE4u;
    {
        const bool branch_taken_0x3f8ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8ee4) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8EECu;
label_3f8eec:
    // 0x3f8eec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8ef0:
    // 0x3f8ef0: 0xc0fdd8c  jal         func_3F7630
label_3f8ef4:
    if (ctx->pc == 0x3F8EF4u) {
        ctx->pc = 0x3F8EF8u;
        goto label_3f8ef8;
    }
    ctx->pc = 0x3F8EF0u;
    SET_GPR_U32(ctx, 31, 0x3F8EF8u);
    ctx->pc = 0x3F7630u;
    if (runtime->hasFunction(0x3F7630u)) {
        auto targetFn = runtime->lookupFunction(0x3F7630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8EF8u; }
        if (ctx->pc != 0x3F8EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F7630_0x3f7630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8EF8u; }
        if (ctx->pc != 0x3F8EF8u) { return; }
    }
    ctx->pc = 0x3F8EF8u;
label_3f8ef8:
    // 0x3f8ef8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f8efc:
    if (ctx->pc == 0x3F8EFCu) {
        ctx->pc = 0x3F8F00u;
        goto label_3f8f00;
    }
    ctx->pc = 0x3F8EF8u;
    {
        const bool branch_taken_0x3f8ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8ef8) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8F00u;
label_3f8f00:
    // 0x3f8f00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8f04:
    // 0x3f8f04: 0xc0fdcb0  jal         func_3F72C0
label_3f8f08:
    if (ctx->pc == 0x3F8F08u) {
        ctx->pc = 0x3F8F0Cu;
        goto label_3f8f0c;
    }
    ctx->pc = 0x3F8F04u;
    SET_GPR_U32(ctx, 31, 0x3F8F0Cu);
    ctx->pc = 0x3F72C0u;
    if (runtime->hasFunction(0x3F72C0u)) {
        auto targetFn = runtime->lookupFunction(0x3F72C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8F0Cu; }
        if (ctx->pc != 0x3F8F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F72C0_0x3f72c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8F0Cu; }
        if (ctx->pc != 0x3F8F0Cu) { return; }
    }
    ctx->pc = 0x3F8F0Cu;
label_3f8f0c:
    // 0x3f8f0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f8f10:
    if (ctx->pc == 0x3F8F10u) {
        ctx->pc = 0x3F8F14u;
        goto label_3f8f14;
    }
    ctx->pc = 0x3F8F0Cu;
    {
        const bool branch_taken_0x3f8f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8f0c) {
            ctx->pc = 0x3F8F20u;
            goto label_3f8f20;
        }
    }
    ctx->pc = 0x3F8F14u;
label_3f8f14:
    // 0x3f8f14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f8f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f8f18:
    // 0x3f8f18: 0xc0fdd14  jal         func_3F7450
label_3f8f1c:
    if (ctx->pc == 0x3F8F1Cu) {
        ctx->pc = 0x3F8F20u;
        goto label_3f8f20;
    }
    ctx->pc = 0x3F8F18u;
    SET_GPR_U32(ctx, 31, 0x3F8F20u);
    ctx->pc = 0x3F7450u;
    if (runtime->hasFunction(0x3F7450u)) {
        auto targetFn = runtime->lookupFunction(0x3F7450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8F20u; }
        if (ctx->pc != 0x3F8F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F7450_0x3f7450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8F20u; }
        if (ctx->pc != 0x3F8F20u) { return; }
    }
    ctx->pc = 0x3F8F20u;
label_3f8f20:
    // 0x3f8f20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f8f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f8f24:
    // 0x3f8f24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f8f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f8f28:
    // 0x3f8f28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f8f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f8f2c:
    // 0x3f8f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f8f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f8f30:
    // 0x3f8f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f8f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f8f34:
    // 0x3f8f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f8f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f8f38:
    // 0x3f8f38: 0x3e00008  jr          $ra
label_3f8f3c:
    if (ctx->pc == 0x3F8F3Cu) {
        ctx->pc = 0x3F8F3Cu;
            // 0x3f8f3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F8F40u;
        goto label_3f8f40;
    }
    ctx->pc = 0x3F8F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8F38u;
            // 0x3f8f3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F8F40u;
label_3f8f40:
    // 0x3f8f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f8f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f8f44:
    // 0x3f8f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f8f48:
    // 0x3f8f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f8f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f8f4c:
    // 0x3f8f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f8f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f8f50:
    // 0x3f8f50: 0x8e190028  lw          $t9, 0x28($s0)
    ctx->pc = 0x3f8f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3f8f54:
    // 0x3f8f54: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3f8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3f8f58:
    // 0x3f8f58: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f8f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f8f5c:
    // 0x3f8f5c: 0x320f809  jalr        $t9
label_3f8f60:
    if (ctx->pc == 0x3F8F60u) {
        ctx->pc = 0x3F8F60u;
            // 0x3f8f60: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x3F8F64u;
        goto label_3f8f64;
    }
    ctx->pc = 0x3F8F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F8F64u);
        ctx->pc = 0x3F8F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8F5Cu;
            // 0x3f8f60: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F8F64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F8F64u; }
            if (ctx->pc != 0x3F8F64u) { return; }
        }
        }
    }
    ctx->pc = 0x3F8F64u;
label_3f8f64:
    // 0x3f8f64: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3f8f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f8f68:
    // 0x3f8f68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3f8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f8f6c:
    // 0x3f8f6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8f70:
    // 0x3f8f70: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3f8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3f8f74:
    // 0x3f8f74: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x3f8f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3f8f78:
    // 0x3f8f78: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3f8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3f8f7c:
    // 0x3f8f7c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3f8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3f8f80:
    // 0x3f8f80: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3f8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3f8f84:
    // 0x3f8f84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3f8f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3f8f88:
    // 0x3f8f88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f8f8c:
    // 0x3f8f8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3f8f90:
    // 0x3f8f90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f8f94:
    // 0x3f8f94: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3f8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_3f8f98:
    // 0x3f8f98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f8f9c:
    // 0x3f8f9c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3f8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_3f8fa0:
    // 0x3f8fa0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f8fa4:
    // 0x3f8fa4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f8fa8:
    // 0x3f8fa8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f8fac:
    // 0x3f8fac: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x3f8facu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_3f8fb0:
    // 0x3f8fb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8fb4:
    // 0x3f8fb4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x3f8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_3f8fb8:
    // 0x3f8fb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f8fbc:
    // 0x3f8fbc: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3f8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3f8fc0:
    // 0x3f8fc0: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x3f8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_3f8fc4:
    // 0x3f8fc4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8fc8:
    // 0x3f8fc8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3f8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3f8fcc:
    // 0x3f8fcc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8fd0:
    // 0x3f8fd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3f8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3f8fd4:
    // 0x3f8fd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8fd8:
    // 0x3f8fd8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3f8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_3f8fdc:
    // 0x3f8fdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f8fe0:
    // 0x3f8fe0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f8fe4:
    // 0x3f8fe4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x3f8fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_3f8fe8:
    // 0x3f8fe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f8fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8fec:
    // 0x3f8fec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f8fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f8ff0:
    // 0x3f8ff0: 0x320f809  jalr        $t9
label_3f8ff4:
    if (ctx->pc == 0x3F8FF4u) {
        ctx->pc = 0x3F8FF8u;
        goto label_3f8ff8;
    }
    ctx->pc = 0x3F8FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F8FF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F8FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F8FF8u; }
            if (ctx->pc != 0x3F8FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F8FF8u;
label_3f8ff8:
    // 0x3f8ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f8ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f8ffc:
    // 0x3f8ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f8ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9000:
    // 0x3f9000: 0x3e00008  jr          $ra
label_3f9004:
    if (ctx->pc == 0x3F9004u) {
        ctx->pc = 0x3F9004u;
            // 0x3f9004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F9008u;
        goto label_3f9008;
    }
    ctx->pc = 0x3F9000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9000u;
            // 0x3f9004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9008u;
label_3f9008:
    // 0x3f9008: 0x0  nop
    ctx->pc = 0x3f9008u;
    // NOP
label_3f900c:
    // 0x3f900c: 0x0  nop
    ctx->pc = 0x3f900cu;
    // NOP
}
