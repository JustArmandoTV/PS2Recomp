#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A0BF0
// Address: 0x4a0bf0 - 0x4a10e0
void sub_004A0BF0_0x4a0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0BF0_0x4a0bf0");
#endif

    switch (ctx->pc) {
        case 0x4a0bf0u: goto label_4a0bf0;
        case 0x4a0bf4u: goto label_4a0bf4;
        case 0x4a0bf8u: goto label_4a0bf8;
        case 0x4a0bfcu: goto label_4a0bfc;
        case 0x4a0c00u: goto label_4a0c00;
        case 0x4a0c04u: goto label_4a0c04;
        case 0x4a0c08u: goto label_4a0c08;
        case 0x4a0c0cu: goto label_4a0c0c;
        case 0x4a0c10u: goto label_4a0c10;
        case 0x4a0c14u: goto label_4a0c14;
        case 0x4a0c18u: goto label_4a0c18;
        case 0x4a0c1cu: goto label_4a0c1c;
        case 0x4a0c20u: goto label_4a0c20;
        case 0x4a0c24u: goto label_4a0c24;
        case 0x4a0c28u: goto label_4a0c28;
        case 0x4a0c2cu: goto label_4a0c2c;
        case 0x4a0c30u: goto label_4a0c30;
        case 0x4a0c34u: goto label_4a0c34;
        case 0x4a0c38u: goto label_4a0c38;
        case 0x4a0c3cu: goto label_4a0c3c;
        case 0x4a0c40u: goto label_4a0c40;
        case 0x4a0c44u: goto label_4a0c44;
        case 0x4a0c48u: goto label_4a0c48;
        case 0x4a0c4cu: goto label_4a0c4c;
        case 0x4a0c50u: goto label_4a0c50;
        case 0x4a0c54u: goto label_4a0c54;
        case 0x4a0c58u: goto label_4a0c58;
        case 0x4a0c5cu: goto label_4a0c5c;
        case 0x4a0c60u: goto label_4a0c60;
        case 0x4a0c64u: goto label_4a0c64;
        case 0x4a0c68u: goto label_4a0c68;
        case 0x4a0c6cu: goto label_4a0c6c;
        case 0x4a0c70u: goto label_4a0c70;
        case 0x4a0c74u: goto label_4a0c74;
        case 0x4a0c78u: goto label_4a0c78;
        case 0x4a0c7cu: goto label_4a0c7c;
        case 0x4a0c80u: goto label_4a0c80;
        case 0x4a0c84u: goto label_4a0c84;
        case 0x4a0c88u: goto label_4a0c88;
        case 0x4a0c8cu: goto label_4a0c8c;
        case 0x4a0c90u: goto label_4a0c90;
        case 0x4a0c94u: goto label_4a0c94;
        case 0x4a0c98u: goto label_4a0c98;
        case 0x4a0c9cu: goto label_4a0c9c;
        case 0x4a0ca0u: goto label_4a0ca0;
        case 0x4a0ca4u: goto label_4a0ca4;
        case 0x4a0ca8u: goto label_4a0ca8;
        case 0x4a0cacu: goto label_4a0cac;
        case 0x4a0cb0u: goto label_4a0cb0;
        case 0x4a0cb4u: goto label_4a0cb4;
        case 0x4a0cb8u: goto label_4a0cb8;
        case 0x4a0cbcu: goto label_4a0cbc;
        case 0x4a0cc0u: goto label_4a0cc0;
        case 0x4a0cc4u: goto label_4a0cc4;
        case 0x4a0cc8u: goto label_4a0cc8;
        case 0x4a0cccu: goto label_4a0ccc;
        case 0x4a0cd0u: goto label_4a0cd0;
        case 0x4a0cd4u: goto label_4a0cd4;
        case 0x4a0cd8u: goto label_4a0cd8;
        case 0x4a0cdcu: goto label_4a0cdc;
        case 0x4a0ce0u: goto label_4a0ce0;
        case 0x4a0ce4u: goto label_4a0ce4;
        case 0x4a0ce8u: goto label_4a0ce8;
        case 0x4a0cecu: goto label_4a0cec;
        case 0x4a0cf0u: goto label_4a0cf0;
        case 0x4a0cf4u: goto label_4a0cf4;
        case 0x4a0cf8u: goto label_4a0cf8;
        case 0x4a0cfcu: goto label_4a0cfc;
        case 0x4a0d00u: goto label_4a0d00;
        case 0x4a0d04u: goto label_4a0d04;
        case 0x4a0d08u: goto label_4a0d08;
        case 0x4a0d0cu: goto label_4a0d0c;
        case 0x4a0d10u: goto label_4a0d10;
        case 0x4a0d14u: goto label_4a0d14;
        case 0x4a0d18u: goto label_4a0d18;
        case 0x4a0d1cu: goto label_4a0d1c;
        case 0x4a0d20u: goto label_4a0d20;
        case 0x4a0d24u: goto label_4a0d24;
        case 0x4a0d28u: goto label_4a0d28;
        case 0x4a0d2cu: goto label_4a0d2c;
        case 0x4a0d30u: goto label_4a0d30;
        case 0x4a0d34u: goto label_4a0d34;
        case 0x4a0d38u: goto label_4a0d38;
        case 0x4a0d3cu: goto label_4a0d3c;
        case 0x4a0d40u: goto label_4a0d40;
        case 0x4a0d44u: goto label_4a0d44;
        case 0x4a0d48u: goto label_4a0d48;
        case 0x4a0d4cu: goto label_4a0d4c;
        case 0x4a0d50u: goto label_4a0d50;
        case 0x4a0d54u: goto label_4a0d54;
        case 0x4a0d58u: goto label_4a0d58;
        case 0x4a0d5cu: goto label_4a0d5c;
        case 0x4a0d60u: goto label_4a0d60;
        case 0x4a0d64u: goto label_4a0d64;
        case 0x4a0d68u: goto label_4a0d68;
        case 0x4a0d6cu: goto label_4a0d6c;
        case 0x4a0d70u: goto label_4a0d70;
        case 0x4a0d74u: goto label_4a0d74;
        case 0x4a0d78u: goto label_4a0d78;
        case 0x4a0d7cu: goto label_4a0d7c;
        case 0x4a0d80u: goto label_4a0d80;
        case 0x4a0d84u: goto label_4a0d84;
        case 0x4a0d88u: goto label_4a0d88;
        case 0x4a0d8cu: goto label_4a0d8c;
        case 0x4a0d90u: goto label_4a0d90;
        case 0x4a0d94u: goto label_4a0d94;
        case 0x4a0d98u: goto label_4a0d98;
        case 0x4a0d9cu: goto label_4a0d9c;
        case 0x4a0da0u: goto label_4a0da0;
        case 0x4a0da4u: goto label_4a0da4;
        case 0x4a0da8u: goto label_4a0da8;
        case 0x4a0dacu: goto label_4a0dac;
        case 0x4a0db0u: goto label_4a0db0;
        case 0x4a0db4u: goto label_4a0db4;
        case 0x4a0db8u: goto label_4a0db8;
        case 0x4a0dbcu: goto label_4a0dbc;
        case 0x4a0dc0u: goto label_4a0dc0;
        case 0x4a0dc4u: goto label_4a0dc4;
        case 0x4a0dc8u: goto label_4a0dc8;
        case 0x4a0dccu: goto label_4a0dcc;
        case 0x4a0dd0u: goto label_4a0dd0;
        case 0x4a0dd4u: goto label_4a0dd4;
        case 0x4a0dd8u: goto label_4a0dd8;
        case 0x4a0ddcu: goto label_4a0ddc;
        case 0x4a0de0u: goto label_4a0de0;
        case 0x4a0de4u: goto label_4a0de4;
        case 0x4a0de8u: goto label_4a0de8;
        case 0x4a0decu: goto label_4a0dec;
        case 0x4a0df0u: goto label_4a0df0;
        case 0x4a0df4u: goto label_4a0df4;
        case 0x4a0df8u: goto label_4a0df8;
        case 0x4a0dfcu: goto label_4a0dfc;
        case 0x4a0e00u: goto label_4a0e00;
        case 0x4a0e04u: goto label_4a0e04;
        case 0x4a0e08u: goto label_4a0e08;
        case 0x4a0e0cu: goto label_4a0e0c;
        case 0x4a0e10u: goto label_4a0e10;
        case 0x4a0e14u: goto label_4a0e14;
        case 0x4a0e18u: goto label_4a0e18;
        case 0x4a0e1cu: goto label_4a0e1c;
        case 0x4a0e20u: goto label_4a0e20;
        case 0x4a0e24u: goto label_4a0e24;
        case 0x4a0e28u: goto label_4a0e28;
        case 0x4a0e2cu: goto label_4a0e2c;
        case 0x4a0e30u: goto label_4a0e30;
        case 0x4a0e34u: goto label_4a0e34;
        case 0x4a0e38u: goto label_4a0e38;
        case 0x4a0e3cu: goto label_4a0e3c;
        case 0x4a0e40u: goto label_4a0e40;
        case 0x4a0e44u: goto label_4a0e44;
        case 0x4a0e48u: goto label_4a0e48;
        case 0x4a0e4cu: goto label_4a0e4c;
        case 0x4a0e50u: goto label_4a0e50;
        case 0x4a0e54u: goto label_4a0e54;
        case 0x4a0e58u: goto label_4a0e58;
        case 0x4a0e5cu: goto label_4a0e5c;
        case 0x4a0e60u: goto label_4a0e60;
        case 0x4a0e64u: goto label_4a0e64;
        case 0x4a0e68u: goto label_4a0e68;
        case 0x4a0e6cu: goto label_4a0e6c;
        case 0x4a0e70u: goto label_4a0e70;
        case 0x4a0e74u: goto label_4a0e74;
        case 0x4a0e78u: goto label_4a0e78;
        case 0x4a0e7cu: goto label_4a0e7c;
        case 0x4a0e80u: goto label_4a0e80;
        case 0x4a0e84u: goto label_4a0e84;
        case 0x4a0e88u: goto label_4a0e88;
        case 0x4a0e8cu: goto label_4a0e8c;
        case 0x4a0e90u: goto label_4a0e90;
        case 0x4a0e94u: goto label_4a0e94;
        case 0x4a0e98u: goto label_4a0e98;
        case 0x4a0e9cu: goto label_4a0e9c;
        case 0x4a0ea0u: goto label_4a0ea0;
        case 0x4a0ea4u: goto label_4a0ea4;
        case 0x4a0ea8u: goto label_4a0ea8;
        case 0x4a0eacu: goto label_4a0eac;
        case 0x4a0eb0u: goto label_4a0eb0;
        case 0x4a0eb4u: goto label_4a0eb4;
        case 0x4a0eb8u: goto label_4a0eb8;
        case 0x4a0ebcu: goto label_4a0ebc;
        case 0x4a0ec0u: goto label_4a0ec0;
        case 0x4a0ec4u: goto label_4a0ec4;
        case 0x4a0ec8u: goto label_4a0ec8;
        case 0x4a0eccu: goto label_4a0ecc;
        case 0x4a0ed0u: goto label_4a0ed0;
        case 0x4a0ed4u: goto label_4a0ed4;
        case 0x4a0ed8u: goto label_4a0ed8;
        case 0x4a0edcu: goto label_4a0edc;
        case 0x4a0ee0u: goto label_4a0ee0;
        case 0x4a0ee4u: goto label_4a0ee4;
        case 0x4a0ee8u: goto label_4a0ee8;
        case 0x4a0eecu: goto label_4a0eec;
        case 0x4a0ef0u: goto label_4a0ef0;
        case 0x4a0ef4u: goto label_4a0ef4;
        case 0x4a0ef8u: goto label_4a0ef8;
        case 0x4a0efcu: goto label_4a0efc;
        case 0x4a0f00u: goto label_4a0f00;
        case 0x4a0f04u: goto label_4a0f04;
        case 0x4a0f08u: goto label_4a0f08;
        case 0x4a0f0cu: goto label_4a0f0c;
        case 0x4a0f10u: goto label_4a0f10;
        case 0x4a0f14u: goto label_4a0f14;
        case 0x4a0f18u: goto label_4a0f18;
        case 0x4a0f1cu: goto label_4a0f1c;
        case 0x4a0f20u: goto label_4a0f20;
        case 0x4a0f24u: goto label_4a0f24;
        case 0x4a0f28u: goto label_4a0f28;
        case 0x4a0f2cu: goto label_4a0f2c;
        case 0x4a0f30u: goto label_4a0f30;
        case 0x4a0f34u: goto label_4a0f34;
        case 0x4a0f38u: goto label_4a0f38;
        case 0x4a0f3cu: goto label_4a0f3c;
        case 0x4a0f40u: goto label_4a0f40;
        case 0x4a0f44u: goto label_4a0f44;
        case 0x4a0f48u: goto label_4a0f48;
        case 0x4a0f4cu: goto label_4a0f4c;
        case 0x4a0f50u: goto label_4a0f50;
        case 0x4a0f54u: goto label_4a0f54;
        case 0x4a0f58u: goto label_4a0f58;
        case 0x4a0f5cu: goto label_4a0f5c;
        case 0x4a0f60u: goto label_4a0f60;
        case 0x4a0f64u: goto label_4a0f64;
        case 0x4a0f68u: goto label_4a0f68;
        case 0x4a0f6cu: goto label_4a0f6c;
        case 0x4a0f70u: goto label_4a0f70;
        case 0x4a0f74u: goto label_4a0f74;
        case 0x4a0f78u: goto label_4a0f78;
        case 0x4a0f7cu: goto label_4a0f7c;
        case 0x4a0f80u: goto label_4a0f80;
        case 0x4a0f84u: goto label_4a0f84;
        case 0x4a0f88u: goto label_4a0f88;
        case 0x4a0f8cu: goto label_4a0f8c;
        case 0x4a0f90u: goto label_4a0f90;
        case 0x4a0f94u: goto label_4a0f94;
        case 0x4a0f98u: goto label_4a0f98;
        case 0x4a0f9cu: goto label_4a0f9c;
        case 0x4a0fa0u: goto label_4a0fa0;
        case 0x4a0fa4u: goto label_4a0fa4;
        case 0x4a0fa8u: goto label_4a0fa8;
        case 0x4a0facu: goto label_4a0fac;
        case 0x4a0fb0u: goto label_4a0fb0;
        case 0x4a0fb4u: goto label_4a0fb4;
        case 0x4a0fb8u: goto label_4a0fb8;
        case 0x4a0fbcu: goto label_4a0fbc;
        case 0x4a0fc0u: goto label_4a0fc0;
        case 0x4a0fc4u: goto label_4a0fc4;
        case 0x4a0fc8u: goto label_4a0fc8;
        case 0x4a0fccu: goto label_4a0fcc;
        case 0x4a0fd0u: goto label_4a0fd0;
        case 0x4a0fd4u: goto label_4a0fd4;
        case 0x4a0fd8u: goto label_4a0fd8;
        case 0x4a0fdcu: goto label_4a0fdc;
        case 0x4a0fe0u: goto label_4a0fe0;
        case 0x4a0fe4u: goto label_4a0fe4;
        case 0x4a0fe8u: goto label_4a0fe8;
        case 0x4a0fecu: goto label_4a0fec;
        case 0x4a0ff0u: goto label_4a0ff0;
        case 0x4a0ff4u: goto label_4a0ff4;
        case 0x4a0ff8u: goto label_4a0ff8;
        case 0x4a0ffcu: goto label_4a0ffc;
        case 0x4a1000u: goto label_4a1000;
        case 0x4a1004u: goto label_4a1004;
        case 0x4a1008u: goto label_4a1008;
        case 0x4a100cu: goto label_4a100c;
        case 0x4a1010u: goto label_4a1010;
        case 0x4a1014u: goto label_4a1014;
        case 0x4a1018u: goto label_4a1018;
        case 0x4a101cu: goto label_4a101c;
        case 0x4a1020u: goto label_4a1020;
        case 0x4a1024u: goto label_4a1024;
        case 0x4a1028u: goto label_4a1028;
        case 0x4a102cu: goto label_4a102c;
        case 0x4a1030u: goto label_4a1030;
        case 0x4a1034u: goto label_4a1034;
        case 0x4a1038u: goto label_4a1038;
        case 0x4a103cu: goto label_4a103c;
        case 0x4a1040u: goto label_4a1040;
        case 0x4a1044u: goto label_4a1044;
        case 0x4a1048u: goto label_4a1048;
        case 0x4a104cu: goto label_4a104c;
        case 0x4a1050u: goto label_4a1050;
        case 0x4a1054u: goto label_4a1054;
        case 0x4a1058u: goto label_4a1058;
        case 0x4a105cu: goto label_4a105c;
        case 0x4a1060u: goto label_4a1060;
        case 0x4a1064u: goto label_4a1064;
        case 0x4a1068u: goto label_4a1068;
        case 0x4a106cu: goto label_4a106c;
        case 0x4a1070u: goto label_4a1070;
        case 0x4a1074u: goto label_4a1074;
        case 0x4a1078u: goto label_4a1078;
        case 0x4a107cu: goto label_4a107c;
        case 0x4a1080u: goto label_4a1080;
        case 0x4a1084u: goto label_4a1084;
        case 0x4a1088u: goto label_4a1088;
        case 0x4a108cu: goto label_4a108c;
        case 0x4a1090u: goto label_4a1090;
        case 0x4a1094u: goto label_4a1094;
        case 0x4a1098u: goto label_4a1098;
        case 0x4a109cu: goto label_4a109c;
        case 0x4a10a0u: goto label_4a10a0;
        case 0x4a10a4u: goto label_4a10a4;
        case 0x4a10a8u: goto label_4a10a8;
        case 0x4a10acu: goto label_4a10ac;
        case 0x4a10b0u: goto label_4a10b0;
        case 0x4a10b4u: goto label_4a10b4;
        case 0x4a10b8u: goto label_4a10b8;
        case 0x4a10bcu: goto label_4a10bc;
        case 0x4a10c0u: goto label_4a10c0;
        case 0x4a10c4u: goto label_4a10c4;
        case 0x4a10c8u: goto label_4a10c8;
        case 0x4a10ccu: goto label_4a10cc;
        case 0x4a10d0u: goto label_4a10d0;
        case 0x4a10d4u: goto label_4a10d4;
        case 0x4a10d8u: goto label_4a10d8;
        case 0x4a10dcu: goto label_4a10dc;
        default: break;
    }

    ctx->pc = 0x4a0bf0u;

label_4a0bf0:
    // 0x4a0bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0bf4:
    // 0x4a0bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a0bf8:
    // 0x4a0bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0bfc:
    // 0x4a0bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0c00:
    // 0x4a0c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a0c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0c04:
    // 0x4a0c04: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4a0c08:
    if (ctx->pc == 0x4A0C08u) {
        ctx->pc = 0x4A0C08u;
            // 0x4a0c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0C0Cu;
        goto label_4a0c0c;
    }
    ctx->pc = 0x4A0C04u;
    {
        const bool branch_taken_0x4a0c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0C04u;
            // 0x4a0c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0c04) {
            ctx->pc = 0x4A0D38u;
            goto label_4a0d38;
        }
    }
    ctx->pc = 0x4A0C0Cu;
label_4a0c0c:
    // 0x4a0c0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a0c10:
    // 0x4a0c10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a0c14:
    // 0x4a0c14: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x4a0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_4a0c18:
    // 0x4a0c18: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x4a0c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_4a0c1c:
    // 0x4a0c1c: 0x24420318  addiu       $v0, $v0, 0x318
    ctx->pc = 0x4a0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 792));
label_4a0c20:
    // 0x4a0c20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a0c24:
    // 0x4a0c24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4a0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4a0c28:
    // 0x4a0c28: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4a0c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4a0c2c:
    // 0x4a0c2c: 0xc0407c0  jal         func_101F00
label_4a0c30:
    if (ctx->pc == 0x4A0C30u) {
        ctx->pc = 0x4A0C30u;
            // 0x4a0c30: 0x24a50d50  addiu       $a1, $a1, 0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3408));
        ctx->pc = 0x4A0C34u;
        goto label_4a0c34;
    }
    ctx->pc = 0x4A0C2Cu;
    SET_GPR_U32(ctx, 31, 0x4A0C34u);
    ctx->pc = 0x4A0C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0C2Cu;
            // 0x4a0c30: 0x24a50d50  addiu       $a1, $a1, 0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0C34u; }
        if (ctx->pc != 0x4A0C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0C34u; }
        if (ctx->pc != 0x4A0C34u) { return; }
    }
    ctx->pc = 0x4A0C34u;
label_4a0c34:
    // 0x4a0c34: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4a0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4a0c38:
    // 0x4a0c38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a0c3c:
    if (ctx->pc == 0x4A0C3Cu) {
        ctx->pc = 0x4A0C3Cu;
            // 0x4a0c3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4A0C40u;
        goto label_4a0c40;
    }
    ctx->pc = 0x4A0C38u;
    {
        const bool branch_taken_0x4a0c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c38) {
            ctx->pc = 0x4A0C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0C38u;
            // 0x4a0c3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0C4Cu;
            goto label_4a0c4c;
        }
    }
    ctx->pc = 0x4A0C40u;
label_4a0c40:
    // 0x4a0c40: 0xc07507c  jal         func_1D41F0
label_4a0c44:
    if (ctx->pc == 0x4A0C44u) {
        ctx->pc = 0x4A0C44u;
            // 0x4a0c44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4A0C48u;
        goto label_4a0c48;
    }
    ctx->pc = 0x4A0C40u;
    SET_GPR_U32(ctx, 31, 0x4A0C48u);
    ctx->pc = 0x4A0C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0C40u;
            // 0x4a0c44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0C48u; }
        if (ctx->pc != 0x4A0C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0C48u; }
        if (ctx->pc != 0x4A0C48u) { return; }
    }
    ctx->pc = 0x4A0C48u;
label_4a0c48:
    // 0x4a0c48: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4a0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4a0c4c:
    // 0x4a0c4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4a0c50:
    if (ctx->pc == 0x4A0C50u) {
        ctx->pc = 0x4A0C50u;
            // 0x4a0c50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4A0C54u;
        goto label_4a0c54;
    }
    ctx->pc = 0x4A0C4Cu;
    {
        const bool branch_taken_0x4a0c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c4c) {
            ctx->pc = 0x4A0C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0C4Cu;
            // 0x4a0c50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0C7Cu;
            goto label_4a0c7c;
        }
    }
    ctx->pc = 0x4A0C54u;
label_4a0c54:
    // 0x4a0c54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4a0c58:
    if (ctx->pc == 0x4A0C58u) {
        ctx->pc = 0x4A0C5Cu;
        goto label_4a0c5c;
    }
    ctx->pc = 0x4A0C54u;
    {
        const bool branch_taken_0x4a0c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c54) {
            ctx->pc = 0x4A0C78u;
            goto label_4a0c78;
        }
    }
    ctx->pc = 0x4A0C5Cu;
label_4a0c5c:
    // 0x4a0c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a0c60:
    if (ctx->pc == 0x4A0C60u) {
        ctx->pc = 0x4A0C64u;
        goto label_4a0c64;
    }
    ctx->pc = 0x4A0C5Cu;
    {
        const bool branch_taken_0x4a0c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c5c) {
            ctx->pc = 0x4A0C78u;
            goto label_4a0c78;
        }
    }
    ctx->pc = 0x4A0C64u;
label_4a0c64:
    // 0x4a0c64: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4a0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4a0c68:
    // 0x4a0c68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4a0c6c:
    if (ctx->pc == 0x4A0C6Cu) {
        ctx->pc = 0x4A0C70u;
        goto label_4a0c70;
    }
    ctx->pc = 0x4A0C68u;
    {
        const bool branch_taken_0x4a0c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c68) {
            ctx->pc = 0x4A0C78u;
            goto label_4a0c78;
        }
    }
    ctx->pc = 0x4A0C70u;
label_4a0c70:
    // 0x4a0c70: 0xc0400a8  jal         func_1002A0
label_4a0c74:
    if (ctx->pc == 0x4A0C74u) {
        ctx->pc = 0x4A0C78u;
        goto label_4a0c78;
    }
    ctx->pc = 0x4A0C70u;
    SET_GPR_U32(ctx, 31, 0x4A0C78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0C78u; }
        if (ctx->pc != 0x4A0C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0C78u; }
        if (ctx->pc != 0x4A0C78u) { return; }
    }
    ctx->pc = 0x4A0C78u;
label_4a0c78:
    // 0x4a0c78: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4a0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4a0c7c:
    // 0x4a0c7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4a0c80:
    if (ctx->pc == 0x4A0C80u) {
        ctx->pc = 0x4A0C80u;
            // 0x4a0c80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4A0C84u;
        goto label_4a0c84;
    }
    ctx->pc = 0x4A0C7Cu;
    {
        const bool branch_taken_0x4a0c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c7c) {
            ctx->pc = 0x4A0C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0C7Cu;
            // 0x4a0c80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0CACu;
            goto label_4a0cac;
        }
    }
    ctx->pc = 0x4A0C84u;
label_4a0c84:
    // 0x4a0c84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4a0c88:
    if (ctx->pc == 0x4A0C88u) {
        ctx->pc = 0x4A0C8Cu;
        goto label_4a0c8c;
    }
    ctx->pc = 0x4A0C84u;
    {
        const bool branch_taken_0x4a0c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c84) {
            ctx->pc = 0x4A0CA8u;
            goto label_4a0ca8;
        }
    }
    ctx->pc = 0x4A0C8Cu;
label_4a0c8c:
    // 0x4a0c8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a0c90:
    if (ctx->pc == 0x4A0C90u) {
        ctx->pc = 0x4A0C94u;
        goto label_4a0c94;
    }
    ctx->pc = 0x4A0C8Cu;
    {
        const bool branch_taken_0x4a0c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c8c) {
            ctx->pc = 0x4A0CA8u;
            goto label_4a0ca8;
        }
    }
    ctx->pc = 0x4A0C94u;
label_4a0c94:
    // 0x4a0c94: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4a0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4a0c98:
    // 0x4a0c98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4a0c9c:
    if (ctx->pc == 0x4A0C9Cu) {
        ctx->pc = 0x4A0CA0u;
        goto label_4a0ca0;
    }
    ctx->pc = 0x4A0C98u;
    {
        const bool branch_taken_0x4a0c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0c98) {
            ctx->pc = 0x4A0CA8u;
            goto label_4a0ca8;
        }
    }
    ctx->pc = 0x4A0CA0u;
label_4a0ca0:
    // 0x4a0ca0: 0xc0400a8  jal         func_1002A0
label_4a0ca4:
    if (ctx->pc == 0x4A0CA4u) {
        ctx->pc = 0x4A0CA8u;
        goto label_4a0ca8;
    }
    ctx->pc = 0x4A0CA0u;
    SET_GPR_U32(ctx, 31, 0x4A0CA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0CA8u; }
        if (ctx->pc != 0x4A0CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0CA8u; }
        if (ctx->pc != 0x4A0CA8u) { return; }
    }
    ctx->pc = 0x4A0CA8u;
label_4a0ca8:
    // 0x4a0ca8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4a0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4a0cac:
    // 0x4a0cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a0cb0:
    if (ctx->pc == 0x4A0CB0u) {
        ctx->pc = 0x4A0CB4u;
        goto label_4a0cb4;
    }
    ctx->pc = 0x4A0CACu;
    {
        const bool branch_taken_0x4a0cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0cac) {
            ctx->pc = 0x4A0CC8u;
            goto label_4a0cc8;
        }
    }
    ctx->pc = 0x4A0CB4u;
label_4a0cb4:
    // 0x4a0cb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a0cb8:
    // 0x4a0cb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a0cbc:
    // 0x4a0cbc: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x4a0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
label_4a0cc0:
    // 0x4a0cc0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4a0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4a0cc4:
    // 0x4a0cc4: 0xac407c20  sw          $zero, 0x7C20($v0)
    ctx->pc = 0x4a0cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31776), GPR_U32(ctx, 0));
label_4a0cc8:
    // 0x4a0cc8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4a0ccc:
    if (ctx->pc == 0x4A0CCCu) {
        ctx->pc = 0x4A0CCCu;
            // 0x4a0ccc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4A0CD0u;
        goto label_4a0cd0;
    }
    ctx->pc = 0x4A0CC8u;
    {
        const bool branch_taken_0x4a0cc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0cc8) {
            ctx->pc = 0x4A0CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0CC8u;
            // 0x4a0ccc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0D24u;
            goto label_4a0d24;
        }
    }
    ctx->pc = 0x4A0CD0u;
label_4a0cd0:
    // 0x4a0cd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a0cd4:
    // 0x4a0cd4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4a0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4a0cd8:
    // 0x4a0cd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4a0cdc:
    // 0x4a0cdc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4a0cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4a0ce0:
    // 0x4a0ce0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a0ce4:
    if (ctx->pc == 0x4A0CE4u) {
        ctx->pc = 0x4A0CE4u;
            // 0x4a0ce4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4A0CE8u;
        goto label_4a0ce8;
    }
    ctx->pc = 0x4A0CE0u;
    {
        const bool branch_taken_0x4a0ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0ce0) {
            ctx->pc = 0x4A0CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0CE0u;
            // 0x4a0ce4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0CFCu;
            goto label_4a0cfc;
        }
    }
    ctx->pc = 0x4A0CE8u;
label_4a0ce8:
    // 0x4a0ce8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a0ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0cec:
    // 0x4a0cec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a0cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a0cf0:
    // 0x4a0cf0: 0x320f809  jalr        $t9
label_4a0cf4:
    if (ctx->pc == 0x4A0CF4u) {
        ctx->pc = 0x4A0CF4u;
            // 0x4a0cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A0CF8u;
        goto label_4a0cf8;
    }
    ctx->pc = 0x4A0CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0CF8u);
        ctx->pc = 0x4A0CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0CF0u;
            // 0x4a0cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0CF8u; }
            if (ctx->pc != 0x4A0CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A0CF8u;
label_4a0cf8:
    // 0x4a0cf8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4a0cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4a0cfc:
    // 0x4a0cfc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a0d00:
    if (ctx->pc == 0x4A0D00u) {
        ctx->pc = 0x4A0D00u;
            // 0x4a0d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D04u;
        goto label_4a0d04;
    }
    ctx->pc = 0x4A0CFCu;
    {
        const bool branch_taken_0x4a0cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0cfc) {
            ctx->pc = 0x4A0D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0CFCu;
            // 0x4a0d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0D18u;
            goto label_4a0d18;
        }
    }
    ctx->pc = 0x4A0D04u;
label_4a0d04:
    // 0x4a0d04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a0d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0d08:
    // 0x4a0d08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a0d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a0d0c:
    // 0x4a0d0c: 0x320f809  jalr        $t9
label_4a0d10:
    if (ctx->pc == 0x4A0D10u) {
        ctx->pc = 0x4A0D10u;
            // 0x4a0d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A0D14u;
        goto label_4a0d14;
    }
    ctx->pc = 0x4A0D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0D14u);
        ctx->pc = 0x4A0D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D0Cu;
            // 0x4a0d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0D14u; }
            if (ctx->pc != 0x4A0D14u) { return; }
        }
        }
    }
    ctx->pc = 0x4A0D14u;
label_4a0d14:
    // 0x4a0d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a0d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a0d18:
    // 0x4a0d18: 0xc075bf8  jal         func_1D6FE0
label_4a0d1c:
    if (ctx->pc == 0x4A0D1Cu) {
        ctx->pc = 0x4A0D1Cu;
            // 0x4a0d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D20u;
        goto label_4a0d20;
    }
    ctx->pc = 0x4A0D18u;
    SET_GPR_U32(ctx, 31, 0x4A0D20u);
    ctx->pc = 0x4A0D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D18u;
            // 0x4a0d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0D20u; }
        if (ctx->pc != 0x4A0D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0D20u; }
        if (ctx->pc != 0x4A0D20u) { return; }
    }
    ctx->pc = 0x4A0D20u;
label_4a0d20:
    // 0x4a0d20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4a0d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4a0d24:
    // 0x4a0d24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a0d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4a0d28:
    // 0x4a0d28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4a0d2c:
    if (ctx->pc == 0x4A0D2Cu) {
        ctx->pc = 0x4A0D2Cu;
            // 0x4a0d2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D30u;
        goto label_4a0d30;
    }
    ctx->pc = 0x4A0D28u;
    {
        const bool branch_taken_0x4a0d28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a0d28) {
            ctx->pc = 0x4A0D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D28u;
            // 0x4a0d2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0D3Cu;
            goto label_4a0d3c;
        }
    }
    ctx->pc = 0x4A0D30u;
label_4a0d30:
    // 0x4a0d30: 0xc0400a8  jal         func_1002A0
label_4a0d34:
    if (ctx->pc == 0x4A0D34u) {
        ctx->pc = 0x4A0D34u;
            // 0x4a0d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D38u;
        goto label_4a0d38;
    }
    ctx->pc = 0x4A0D30u;
    SET_GPR_U32(ctx, 31, 0x4A0D38u);
    ctx->pc = 0x4A0D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D30u;
            // 0x4a0d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0D38u; }
        if (ctx->pc != 0x4A0D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0D38u; }
        if (ctx->pc != 0x4A0D38u) { return; }
    }
    ctx->pc = 0x4A0D38u;
label_4a0d38:
    // 0x4a0d38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a0d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a0d3c:
    // 0x4a0d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a0d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0d40:
    // 0x4a0d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0d44:
    // 0x4a0d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0d48:
    // 0x4a0d48: 0x3e00008  jr          $ra
label_4a0d4c:
    if (ctx->pc == 0x4A0D4Cu) {
        ctx->pc = 0x4A0D4Cu;
            // 0x4a0d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0D50u;
        goto label_4a0d50;
    }
    ctx->pc = 0x4A0D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D48u;
            // 0x4a0d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0D50u;
label_4a0d50:
    // 0x4a0d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0d54:
    // 0x4a0d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a0d58:
    // 0x4a0d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0d5c:
    // 0x4a0d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0d60:
    // 0x4a0d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a0d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0d64:
    // 0x4a0d64: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4a0d68:
    if (ctx->pc == 0x4A0D68u) {
        ctx->pc = 0x4A0D68u;
            // 0x4a0d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D6Cu;
        goto label_4a0d6c;
    }
    ctx->pc = 0x4A0D64u;
    {
        const bool branch_taken_0x4a0d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D64u;
            // 0x4a0d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d64) {
            ctx->pc = 0x4A0E2Cu;
            goto label_4a0e2c;
        }
    }
    ctx->pc = 0x4A0D6Cu;
label_4a0d6c:
    // 0x4a0d6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a0d70:
    // 0x4a0d70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a0d74:
    // 0x4a0d74: 0x24630230  addiu       $v1, $v1, 0x230
    ctx->pc = 0x4a0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
label_4a0d78:
    // 0x4a0d78: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x4a0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
label_4a0d7c:
    // 0x4a0d7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a0d80:
    // 0x4a0d80: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4a0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4a0d84:
    // 0x4a0d84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a0d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0d88:
    // 0x4a0d88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a0d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a0d8c:
    // 0x4a0d8c: 0x320f809  jalr        $t9
label_4a0d90:
    if (ctx->pc == 0x4A0D90u) {
        ctx->pc = 0x4A0D94u;
        goto label_4a0d94;
    }
    ctx->pc = 0x4A0D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0D94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0D94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0D94u; }
            if (ctx->pc != 0x4A0D94u) { return; }
        }
        }
    }
    ctx->pc = 0x4A0D94u;
label_4a0d94:
    // 0x4a0d94: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4a0d98:
    if (ctx->pc == 0x4A0D98u) {
        ctx->pc = 0x4A0D98u;
            // 0x4a0d98: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4A0D9Cu;
        goto label_4a0d9c;
    }
    ctx->pc = 0x4A0D94u;
    {
        const bool branch_taken_0x4a0d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0d94) {
            ctx->pc = 0x4A0D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0D94u;
            // 0x4a0d98: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0E18u;
            goto label_4a0e18;
        }
    }
    ctx->pc = 0x4A0D9Cu;
label_4a0d9c:
    // 0x4a0d9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a0d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4a0da0:
    // 0x4a0da0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a0da4:
    // 0x4a0da4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4a0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4a0da8:
    // 0x4a0da8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4a0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4a0dac:
    // 0x4a0dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a0db0:
    // 0x4a0db0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4a0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4a0db4:
    // 0x4a0db4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4a0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4a0db8:
    // 0x4a0db8: 0xc0aecc4  jal         func_2BB310
label_4a0dbc:
    if (ctx->pc == 0x4A0DBCu) {
        ctx->pc = 0x4A0DBCu;
            // 0x4a0dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A0DC0u;
        goto label_4a0dc0;
    }
    ctx->pc = 0x4A0DB8u;
    SET_GPR_U32(ctx, 31, 0x4A0DC0u);
    ctx->pc = 0x4A0DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0DB8u;
            // 0x4a0dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DC0u; }
        if (ctx->pc != 0x4A0DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DC0u; }
        if (ctx->pc != 0x4A0DC0u) { return; }
    }
    ctx->pc = 0x4A0DC0u;
label_4a0dc0:
    // 0x4a0dc0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4a0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4a0dc4:
    // 0x4a0dc4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4a0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4a0dc8:
    // 0x4a0dc8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a0dcc:
    if (ctx->pc == 0x4A0DCCu) {
        ctx->pc = 0x4A0DCCu;
            // 0x4a0dcc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4A0DD0u;
        goto label_4a0dd0;
    }
    ctx->pc = 0x4A0DC8u;
    {
        const bool branch_taken_0x4a0dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0dc8) {
            ctx->pc = 0x4A0DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0DC8u;
            // 0x4a0dcc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0DE4u;
            goto label_4a0de4;
        }
    }
    ctx->pc = 0x4A0DD0u;
label_4a0dd0:
    // 0x4a0dd0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4a0dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4a0dd4:
    // 0x4a0dd4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a0dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a0dd8:
    // 0x4a0dd8: 0x320f809  jalr        $t9
label_4a0ddc:
    if (ctx->pc == 0x4A0DDCu) {
        ctx->pc = 0x4A0DDCu;
            // 0x4a0ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A0DE0u;
        goto label_4a0de0;
    }
    ctx->pc = 0x4A0DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0DE0u);
        ctx->pc = 0x4A0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0DD8u;
            // 0x4a0ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DE0u; }
            if (ctx->pc != 0x4A0DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A0DE0u;
label_4a0de0:
    // 0x4a0de0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4a0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4a0de4:
    // 0x4a0de4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4a0de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a0de8:
    // 0x4a0de8: 0xc0aec9c  jal         func_2BB270
label_4a0dec:
    if (ctx->pc == 0x4A0DECu) {
        ctx->pc = 0x4A0DECu;
            // 0x4a0dec: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4A0DF0u;
        goto label_4a0df0;
    }
    ctx->pc = 0x4A0DE8u;
    SET_GPR_U32(ctx, 31, 0x4A0DF0u);
    ctx->pc = 0x4A0DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0DE8u;
            // 0x4a0dec: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DF0u; }
        if (ctx->pc != 0x4A0DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DF0u; }
        if (ctx->pc != 0x4A0DF0u) { return; }
    }
    ctx->pc = 0x4A0DF0u;
label_4a0df0:
    // 0x4a0df0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4a0df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4a0df4:
    // 0x4a0df4: 0xc0aec88  jal         func_2BB220
label_4a0df8:
    if (ctx->pc == 0x4A0DF8u) {
        ctx->pc = 0x4A0DF8u;
            // 0x4a0df8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4A0DFCu;
        goto label_4a0dfc;
    }
    ctx->pc = 0x4A0DF4u;
    SET_GPR_U32(ctx, 31, 0x4A0DFCu);
    ctx->pc = 0x4A0DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0DF4u;
            // 0x4a0df8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DFCu; }
        if (ctx->pc != 0x4A0DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0DFCu; }
        if (ctx->pc != 0x4A0DFCu) { return; }
    }
    ctx->pc = 0x4A0DFCu;
label_4a0dfc:
    // 0x4a0dfc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4a0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4a0e00:
    // 0x4a0e00: 0xc0aec0c  jal         func_2BB030
label_4a0e04:
    if (ctx->pc == 0x4A0E04u) {
        ctx->pc = 0x4A0E04u;
            // 0x4a0e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E08u;
        goto label_4a0e08;
    }
    ctx->pc = 0x4A0E00u;
    SET_GPR_U32(ctx, 31, 0x4A0E08u);
    ctx->pc = 0x4A0E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E00u;
            // 0x4a0e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0E08u; }
        if (ctx->pc != 0x4A0E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0E08u; }
        if (ctx->pc != 0x4A0E08u) { return; }
    }
    ctx->pc = 0x4A0E08u;
label_4a0e08:
    // 0x4a0e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a0e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0e0c:
    // 0x4a0e0c: 0xc0aeaa8  jal         func_2BAAA0
label_4a0e10:
    if (ctx->pc == 0x4A0E10u) {
        ctx->pc = 0x4A0E10u;
            // 0x4a0e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E14u;
        goto label_4a0e14;
    }
    ctx->pc = 0x4A0E0Cu;
    SET_GPR_U32(ctx, 31, 0x4A0E14u);
    ctx->pc = 0x4A0E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E0Cu;
            // 0x4a0e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0E14u; }
        if (ctx->pc != 0x4A0E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0E14u; }
        if (ctx->pc != 0x4A0E14u) { return; }
    }
    ctx->pc = 0x4A0E14u;
label_4a0e14:
    // 0x4a0e14: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4a0e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4a0e18:
    // 0x4a0e18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a0e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4a0e1c:
    // 0x4a0e1c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4a0e20:
    if (ctx->pc == 0x4A0E20u) {
        ctx->pc = 0x4A0E20u;
            // 0x4a0e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E24u;
        goto label_4a0e24;
    }
    ctx->pc = 0x4A0E1Cu;
    {
        const bool branch_taken_0x4a0e1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a0e1c) {
            ctx->pc = 0x4A0E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E1Cu;
            // 0x4a0e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0E30u;
            goto label_4a0e30;
        }
    }
    ctx->pc = 0x4A0E24u;
label_4a0e24:
    // 0x4a0e24: 0xc0400a8  jal         func_1002A0
label_4a0e28:
    if (ctx->pc == 0x4A0E28u) {
        ctx->pc = 0x4A0E28u;
            // 0x4a0e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E2Cu;
        goto label_4a0e2c;
    }
    ctx->pc = 0x4A0E24u;
    SET_GPR_U32(ctx, 31, 0x4A0E2Cu);
    ctx->pc = 0x4A0E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E24u;
            // 0x4a0e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0E2Cu; }
        if (ctx->pc != 0x4A0E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0E2Cu; }
        if (ctx->pc != 0x4A0E2Cu) { return; }
    }
    ctx->pc = 0x4A0E2Cu;
label_4a0e2c:
    // 0x4a0e2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a0e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0e30:
    // 0x4a0e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a0e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0e34:
    // 0x4a0e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0e38:
    // 0x4a0e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0e3c:
    // 0x4a0e3c: 0x3e00008  jr          $ra
label_4a0e40:
    if (ctx->pc == 0x4A0E40u) {
        ctx->pc = 0x4A0E40u;
            // 0x4a0e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0E44u;
        goto label_4a0e44;
    }
    ctx->pc = 0x4A0E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E3Cu;
            // 0x4a0e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0E44u;
label_4a0e44:
    // 0x4a0e44: 0x0  nop
    ctx->pc = 0x4a0e44u;
    // NOP
label_4a0e48:
    // 0x4a0e48: 0x0  nop
    ctx->pc = 0x4a0e48u;
    // NOP
label_4a0e4c:
    // 0x4a0e4c: 0x0  nop
    ctx->pc = 0x4a0e4cu;
    // NOP
label_4a0e50:
    // 0x4a0e50: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4a0e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4a0e54:
    // 0x4a0e54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a0e58:
    // 0x4a0e58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4a0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4a0e5c:
    // 0x4a0e5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4a0e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4a0e60:
    // 0x4a0e60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a0e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4a0e64:
    // 0x4a0e64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4a0e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4a0e68:
    // 0x4a0e68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a0e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4a0e6c:
    // 0x4a0e6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a0e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4a0e70:
    // 0x4a0e70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a0e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a0e74:
    // 0x4a0e74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a0e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a0e78:
    // 0x4a0e78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a0e7c:
    // 0x4a0e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a0e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a0e80:
    // 0x4a0e80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a0e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a0e84:
    // 0x4a0e84: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4a0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4a0e88:
    // 0x4a0e88: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4a0e88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a0e8c:
    // 0x4a0e8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a0e90:
    // 0x4a0e90: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4a0e94:
    if (ctx->pc == 0x4A0E94u) {
        ctx->pc = 0x4A0E94u;
            // 0x4a0e94: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E98u;
        goto label_4a0e98;
    }
    ctx->pc = 0x4A0E90u;
    {
        const bool branch_taken_0x4a0e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A0E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E90u;
            // 0x4a0e94: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e90) {
            ctx->pc = 0x4A0ED4u;
            goto label_4a0ed4;
        }
    }
    ctx->pc = 0x4A0E98u;
label_4a0e98:
    // 0x4a0e98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a0e9c:
    // 0x4a0e9c: 0x50a30083  beql        $a1, $v1, . + 4 + (0x83 << 2)
label_4a0ea0:
    if (ctx->pc == 0x4A0EA0u) {
        ctx->pc = 0x4A0EA0u;
            // 0x4a0ea0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4A0EA4u;
        goto label_4a0ea4;
    }
    ctx->pc = 0x4A0E9Cu;
    {
        const bool branch_taken_0x4a0e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a0e9c) {
            ctx->pc = 0x4A0EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0E9Cu;
            // 0x4a0ea0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A10ACu;
            goto label_4a10ac;
        }
    }
    ctx->pc = 0x4A0EA4u;
label_4a0ea4:
    // 0x4a0ea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a0ea8:
    // 0x4a0ea8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4a0eac:
    if (ctx->pc == 0x4A0EACu) {
        ctx->pc = 0x4A0EACu;
            // 0x4a0eac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A0EB0u;
        goto label_4a0eb0;
    }
    ctx->pc = 0x4A0EA8u;
    {
        const bool branch_taken_0x4a0ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a0ea8) {
            ctx->pc = 0x4A0EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0EA8u;
            // 0x4a0eac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0EB8u;
            goto label_4a0eb8;
        }
    }
    ctx->pc = 0x4A0EB0u;
label_4a0eb0:
    // 0x4a0eb0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_4a0eb4:
    if (ctx->pc == 0x4A0EB4u) {
        ctx->pc = 0x4A0EB8u;
        goto label_4a0eb8;
    }
    ctx->pc = 0x4A0EB0u;
    {
        const bool branch_taken_0x4a0eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0eb0) {
            ctx->pc = 0x4A10A8u;
            goto label_4a10a8;
        }
    }
    ctx->pc = 0x4A0EB8u;
label_4a0eb8:
    // 0x4a0eb8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4a0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4a0ebc:
    // 0x4a0ebc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4a0ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4a0ec0:
    // 0x4a0ec0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4a0ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4a0ec4:
    // 0x4a0ec4: 0x320f809  jalr        $t9
label_4a0ec8:
    if (ctx->pc == 0x4A0EC8u) {
        ctx->pc = 0x4A0EC8u;
            // 0x4a0ec8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4A0ECCu;
        goto label_4a0ecc;
    }
    ctx->pc = 0x4A0EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0ECCu);
        ctx->pc = 0x4A0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0EC4u;
            // 0x4a0ec8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0ECCu; }
            if (ctx->pc != 0x4A0ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A0ECCu;
label_4a0ecc:
    // 0x4a0ecc: 0x10000076  b           . + 4 + (0x76 << 2)
label_4a0ed0:
    if (ctx->pc == 0x4A0ED0u) {
        ctx->pc = 0x4A0ED4u;
        goto label_4a0ed4;
    }
    ctx->pc = 0x4A0ECCu;
    {
        const bool branch_taken_0x4a0ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0ecc) {
            ctx->pc = 0x4A10A8u;
            goto label_4a10a8;
        }
    }
    ctx->pc = 0x4A0ED4u;
label_4a0ed4:
    // 0x4a0ed4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4a0ed4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4a0ed8:
    // 0x4a0ed8: 0x12e00073  beqz        $s7, . + 4 + (0x73 << 2)
label_4a0edc:
    if (ctx->pc == 0x4A0EDCu) {
        ctx->pc = 0x4A0EE0u;
        goto label_4a0ee0;
    }
    ctx->pc = 0x4A0ED8u;
    {
        const bool branch_taken_0x4a0ed8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0ed8) {
            ctx->pc = 0x4A10A8u;
            goto label_4a10a8;
        }
    }
    ctx->pc = 0x4A0EE0u;
label_4a0ee0:
    // 0x4a0ee0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4a0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4a0ee4:
    // 0x4a0ee4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a0ee8:
    // 0x4a0ee8: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4a0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4a0eec:
    // 0x4a0eec: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4a0eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4a0ef0:
    // 0x4a0ef0: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4a0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4a0ef4:
    // 0x4a0ef4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a0ef8:
    // 0x4a0ef8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4a0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4a0efc:
    // 0x4a0efc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a0f00:
    // 0x4a0f00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4a0f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4a0f04:
    // 0x4a0f04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4a0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4a0f08:
    // 0x4a0f08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4a0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0f0c:
    // 0x4a0f0c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4a0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4a0f10:
    // 0x4a0f10: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x4a0f10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0f14:
    // 0x4a0f14: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4a0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4a0f18:
    // 0x4a0f18: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x4a0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_4a0f1c:
    // 0x4a0f1c: 0xc04e738  jal         func_139CE0
label_4a0f20:
    if (ctx->pc == 0x4A0F20u) {
        ctx->pc = 0x4A0F20u;
            // 0x4a0f20: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x4A0F24u;
        goto label_4a0f24;
    }
    ctx->pc = 0x4A0F1Cu;
    SET_GPR_U32(ctx, 31, 0x4A0F24u);
    ctx->pc = 0x4A0F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F1Cu;
            // 0x4a0f20: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F24u; }
        if (ctx->pc != 0x4A0F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F24u; }
        if (ctx->pc != 0x4A0F24u) { return; }
    }
    ctx->pc = 0x4A0F24u;
label_4a0f24:
    // 0x4a0f24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a0f28:
    // 0x4a0f28: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a0f28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0f2c:
    // 0x4a0f2c: 0xc4540ba0  lwc1        $f20, 0xBA0($v0)
    ctx->pc = 0x4a0f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a0f30:
    // 0x4a0f30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a0f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0f34:
    // 0x4a0f34: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4a0f38:
    // 0x4a0f38: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4a0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4a0f3c:
    // 0x4a0f3c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4a0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4a0f40:
    // 0x4a0f40: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4a0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4a0f44:
    // 0x4a0f44: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4a0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4a0f48:
    // 0x4a0f48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4a0f4c:
    // 0x4a0f4c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4a0f4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a0f50:
    // 0x4a0f50: 0xc0d639c  jal         func_358E70
label_4a0f54:
    if (ctx->pc == 0x4A0F54u) {
        ctx->pc = 0x4A0F54u;
            // 0x4a0f54: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4A0F58u;
        goto label_4a0f58;
    }
    ctx->pc = 0x4A0F50u;
    SET_GPR_U32(ctx, 31, 0x4A0F58u);
    ctx->pc = 0x4A0F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F50u;
            // 0x4a0f54: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F58u; }
        if (ctx->pc != 0x4A0F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F58u; }
        if (ctx->pc != 0x4A0F58u) { return; }
    }
    ctx->pc = 0x4A0F58u;
label_4a0f58:
    // 0x4a0f58: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4a0f5c:
    if (ctx->pc == 0x4A0F5Cu) {
        ctx->pc = 0x4A0F60u;
        goto label_4a0f60;
    }
    ctx->pc = 0x4A0F58u;
    {
        const bool branch_taken_0x4a0f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0f58) {
            ctx->pc = 0x4A1040u;
            goto label_4a1040;
        }
    }
    ctx->pc = 0x4A0F60u;
label_4a0f60:
    // 0x4a0f60: 0xc0d1c14  jal         func_347050
label_4a0f64:
    if (ctx->pc == 0x4A0F64u) {
        ctx->pc = 0x4A0F64u;
            // 0x4a0f64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F68u;
        goto label_4a0f68;
    }
    ctx->pc = 0x4A0F60u;
    SET_GPR_U32(ctx, 31, 0x4A0F68u);
    ctx->pc = 0x4A0F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F60u;
            // 0x4a0f64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F68u; }
        if (ctx->pc != 0x4A0F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F68u; }
        if (ctx->pc != 0x4A0F68u) { return; }
    }
    ctx->pc = 0x4A0F68u;
label_4a0f68:
    // 0x4a0f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a0f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0f6c:
    // 0x4a0f6c: 0xc04f278  jal         func_13C9E0
label_4a0f70:
    if (ctx->pc == 0x4A0F70u) {
        ctx->pc = 0x4A0F70u;
            // 0x4a0f70: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4A0F74u;
        goto label_4a0f74;
    }
    ctx->pc = 0x4A0F6Cu;
    SET_GPR_U32(ctx, 31, 0x4A0F74u);
    ctx->pc = 0x4A0F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F6Cu;
            // 0x4a0f70: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F74u; }
        if (ctx->pc != 0x4A0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F74u; }
        if (ctx->pc != 0x4A0F74u) { return; }
    }
    ctx->pc = 0x4A0F74u;
label_4a0f74:
    // 0x4a0f74: 0xc0d1c10  jal         func_347040
label_4a0f78:
    if (ctx->pc == 0x4A0F78u) {
        ctx->pc = 0x4A0F78u;
            // 0x4a0f78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F7Cu;
        goto label_4a0f7c;
    }
    ctx->pc = 0x4A0F74u;
    SET_GPR_U32(ctx, 31, 0x4A0F7Cu);
    ctx->pc = 0x4A0F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F74u;
            // 0x4a0f78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F7Cu; }
        if (ctx->pc != 0x4A0F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F7Cu; }
        if (ctx->pc != 0x4A0F7Cu) { return; }
    }
    ctx->pc = 0x4A0F7Cu;
label_4a0f7c:
    // 0x4a0f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a0f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0f80:
    // 0x4a0f80: 0xc04ce80  jal         func_133A00
label_4a0f84:
    if (ctx->pc == 0x4A0F84u) {
        ctx->pc = 0x4A0F84u;
            // 0x4a0f84: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4A0F88u;
        goto label_4a0f88;
    }
    ctx->pc = 0x4A0F80u;
    SET_GPR_U32(ctx, 31, 0x4A0F88u);
    ctx->pc = 0x4A0F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F80u;
            // 0x4a0f84: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F88u; }
        if (ctx->pc != 0x4A0F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F88u; }
        if (ctx->pc != 0x4A0F88u) { return; }
    }
    ctx->pc = 0x4A0F88u;
label_4a0f88:
    // 0x4a0f88: 0xc0d4108  jal         func_350420
label_4a0f8c:
    if (ctx->pc == 0x4A0F8Cu) {
        ctx->pc = 0x4A0F90u;
        goto label_4a0f90;
    }
    ctx->pc = 0x4A0F88u;
    SET_GPR_U32(ctx, 31, 0x4A0F90u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F90u; }
        if (ctx->pc != 0x4A0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F90u; }
        if (ctx->pc != 0x4A0F90u) { return; }
    }
    ctx->pc = 0x4A0F90u;
label_4a0f90:
    // 0x4a0f90: 0xc0b36b4  jal         func_2CDAD0
label_4a0f94:
    if (ctx->pc == 0x4A0F94u) {
        ctx->pc = 0x4A0F94u;
            // 0x4a0f94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F98u;
        goto label_4a0f98;
    }
    ctx->pc = 0x4A0F90u;
    SET_GPR_U32(ctx, 31, 0x4A0F98u);
    ctx->pc = 0x4A0F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F90u;
            // 0x4a0f94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F98u; }
        if (ctx->pc != 0x4A0F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0F98u; }
        if (ctx->pc != 0x4A0F98u) { return; }
    }
    ctx->pc = 0x4A0F98u;
label_4a0f98:
    // 0x4a0f98: 0xc0b9c64  jal         func_2E7190
label_4a0f9c:
    if (ctx->pc == 0x4A0F9Cu) {
        ctx->pc = 0x4A0F9Cu;
            // 0x4a0f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0FA0u;
        goto label_4a0fa0;
    }
    ctx->pc = 0x4A0F98u;
    SET_GPR_U32(ctx, 31, 0x4A0FA0u);
    ctx->pc = 0x4A0F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0F98u;
            // 0x4a0f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FA0u; }
        if (ctx->pc != 0x4A0FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FA0u; }
        if (ctx->pc != 0x4A0FA0u) { return; }
    }
    ctx->pc = 0x4A0FA0u;
label_4a0fa0:
    // 0x4a0fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a0fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fa4:
    // 0x4a0fa4: 0xc0d4104  jal         func_350410
label_4a0fa8:
    if (ctx->pc == 0x4A0FA8u) {
        ctx->pc = 0x4A0FA8u;
            // 0x4a0fa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0FACu;
        goto label_4a0fac;
    }
    ctx->pc = 0x4A0FA4u;
    SET_GPR_U32(ctx, 31, 0x4A0FACu);
    ctx->pc = 0x4A0FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0FA4u;
            // 0x4a0fa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FACu; }
        if (ctx->pc != 0x4A0FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FACu; }
        if (ctx->pc != 0x4A0FACu) { return; }
    }
    ctx->pc = 0x4A0FACu;
label_4a0fac:
    // 0x4a0fac: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4a0facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a0fb0:
    // 0x4a0fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a0fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fb4:
    // 0x4a0fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a0fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fb8:
    // 0x4a0fb8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4a0fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4a0fbc:
    // 0x4a0fbc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4a0fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fc0:
    // 0x4a0fc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a0fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fc4:
    // 0x4a0fc4: 0xc0d40ac  jal         func_3502B0
label_4a0fc8:
    if (ctx->pc == 0x4A0FC8u) {
        ctx->pc = 0x4A0FC8u;
            // 0x4a0fc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A0FCCu;
        goto label_4a0fcc;
    }
    ctx->pc = 0x4A0FC4u;
    SET_GPR_U32(ctx, 31, 0x4A0FCCu);
    ctx->pc = 0x4A0FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0FC4u;
            // 0x4a0fc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FCCu; }
        if (ctx->pc != 0x4A0FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FCCu; }
        if (ctx->pc != 0x4A0FCCu) { return; }
    }
    ctx->pc = 0x4A0FCCu;
label_4a0fcc:
    // 0x4a0fcc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4a0fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4a0fd0:
    // 0x4a0fd0: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_4a0fd4:
    if (ctx->pc == 0x4A0FD4u) {
        ctx->pc = 0x4A0FD4u;
            // 0x4a0fd4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4A0FD8u;
        goto label_4a0fd8;
    }
    ctx->pc = 0x4A0FD0u;
    {
        const bool branch_taken_0x4a0fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0FD0u;
            // 0x4a0fd4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0fd0) {
            ctx->pc = 0x4A1058u;
            goto label_4a1058;
        }
    }
    ctx->pc = 0x4A0FD8u;
label_4a0fd8:
    // 0x4a0fd8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a0fdc:
    // 0x4a0fdc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4a0fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4a0fe0:
    // 0x4a0fe0: 0xc128438  jal         func_4A10E0
label_4a0fe4:
    if (ctx->pc == 0x4A0FE4u) {
        ctx->pc = 0x4A0FE4u;
            // 0x4a0fe4: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4A0FE8u;
        goto label_4a0fe8;
    }
    ctx->pc = 0x4A0FE0u;
    SET_GPR_U32(ctx, 31, 0x4A0FE8u);
    ctx->pc = 0x4A0FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0FE0u;
            // 0x4a0fe4: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A10E0u;
    if (runtime->hasFunction(0x4A10E0u)) {
        auto targetFn = runtime->lookupFunction(0x4A10E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FE8u; }
        if (ctx->pc != 0x4A0FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A10E0_0x4a10e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FE8u; }
        if (ctx->pc != 0x4A0FE8u) { return; }
    }
    ctx->pc = 0x4A0FE8u;
label_4a0fe8:
    // 0x4a0fe8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4a0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4a0fec:
    // 0x4a0fec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4a0fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a0ff0:
    // 0x4a0ff0: 0xc04cd60  jal         func_133580
label_4a0ff4:
    if (ctx->pc == 0x4A0FF4u) {
        ctx->pc = 0x4A0FF4u;
            // 0x4a0ff4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4A0FF8u;
        goto label_4a0ff8;
    }
    ctx->pc = 0x4A0FF0u;
    SET_GPR_U32(ctx, 31, 0x4A0FF8u);
    ctx->pc = 0x4A0FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0FF0u;
            // 0x4a0ff4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FF8u; }
        if (ctx->pc != 0x4A0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0FF8u; }
        if (ctx->pc != 0x4A0FF8u) { return; }
    }
    ctx->pc = 0x4A0FF8u;
label_4a0ff8:
    // 0x4a0ff8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a0ffc:
    // 0x4a0ffc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4a0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4a1000:
    // 0x4a1000: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4a1000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4a1004:
    // 0x4a1004: 0xc04e4a4  jal         func_139290
label_4a1008:
    if (ctx->pc == 0x4A1008u) {
        ctx->pc = 0x4A1008u;
            // 0x4a1008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A100Cu;
        goto label_4a100c;
    }
    ctx->pc = 0x4A1004u;
    SET_GPR_U32(ctx, 31, 0x4A100Cu);
    ctx->pc = 0x4A1008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1004u;
            // 0x4a1008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A100Cu; }
        if (ctx->pc != 0x4A100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A100Cu; }
        if (ctx->pc != 0x4A100Cu) { return; }
    }
    ctx->pc = 0x4A100Cu;
label_4a100c:
    // 0x4a100c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a100cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a1010:
    // 0x4a1010: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4a1010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4a1014:
    // 0x4a1014: 0x320f809  jalr        $t9
label_4a1018:
    if (ctx->pc == 0x4A1018u) {
        ctx->pc = 0x4A1018u;
            // 0x4a1018: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A101Cu;
        goto label_4a101c;
    }
    ctx->pc = 0x4A1014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A101Cu);
        ctx->pc = 0x4A1018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1014u;
            // 0x4a1018: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A101Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A101Cu; }
            if (ctx->pc != 0x4A101Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A101Cu;
label_4a101c:
    // 0x4a101c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4a101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4a1020:
    // 0x4a1020: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4a1020u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4a1024:
    // 0x4a1024: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4a1024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4a1028:
    // 0x4a1028: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4a1028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a102c:
    // 0x4a102c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4a102cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a1030:
    // 0x4a1030: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4a1030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4a1034:
    // 0x4a1034: 0xc04cfcc  jal         func_133F30
label_4a1038:
    if (ctx->pc == 0x4A1038u) {
        ctx->pc = 0x4A1038u;
            // 0x4a1038: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x4A103Cu;
        goto label_4a103c;
    }
    ctx->pc = 0x4A1034u;
    SET_GPR_U32(ctx, 31, 0x4A103Cu);
    ctx->pc = 0x4A1038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1034u;
            // 0x4a1038: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A103Cu; }
        if (ctx->pc != 0x4A103Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A103Cu; }
        if (ctx->pc != 0x4A103Cu) { return; }
    }
    ctx->pc = 0x4A103Cu;
label_4a103c:
    // 0x4a103c: 0x0  nop
    ctx->pc = 0x4a103cu;
    // NOP
label_4a1040:
    // 0x4a1040: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x4a1040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_4a1044:
    // 0x4a1044: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4a1044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a1048:
    // 0x4a1048: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4a1048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4a104c:
    // 0x4a104c: 0xc0e325c  jal         func_38C970
label_4a1050:
    if (ctx->pc == 0x4A1050u) {
        ctx->pc = 0x4A1050u;
            // 0x4a1050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1054u;
        goto label_4a1054;
    }
    ctx->pc = 0x4A104Cu;
    SET_GPR_U32(ctx, 31, 0x4A1054u);
    ctx->pc = 0x4A1050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A104Cu;
            // 0x4a1050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1054u; }
        if (ctx->pc != 0x4A1054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1054u; }
        if (ctx->pc != 0x4A1054u) { return; }
    }
    ctx->pc = 0x4A1054u;
label_4a1054:
    // 0x4a1054: 0x0  nop
    ctx->pc = 0x4a1054u;
    // NOP
label_4a1058:
    // 0x4a1058: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4a1058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4a105c:
    // 0x4a105c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4a105cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4a1060:
    // 0x4a1060: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
label_4a1064:
    if (ctx->pc == 0x4A1064u) {
        ctx->pc = 0x4A1064u;
            // 0x4a1064: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4A1068u;
        goto label_4a1068;
    }
    ctx->pc = 0x4A1060u;
    {
        const bool branch_taken_0x4a1060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1060u;
            // 0x4a1064: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1060) {
            ctx->pc = 0x4A0F34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a0f34;
        }
    }
    ctx->pc = 0x4A1068u;
label_4a1068:
    // 0x4a1068: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a1068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a106c:
    // 0x4a106c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4a106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4a1070:
    // 0x4a1070: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_4a1074:
    if (ctx->pc == 0x4A1074u) {
        ctx->pc = 0x4A1078u;
        goto label_4a1078;
    }
    ctx->pc = 0x4A1070u;
    {
        const bool branch_taken_0x4a1070 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4a1070) {
            ctx->pc = 0x4A10A8u;
            goto label_4a10a8;
        }
    }
    ctx->pc = 0x4A1078u;
label_4a1078:
    // 0x4a1078: 0xc04e738  jal         func_139CE0
label_4a107c:
    if (ctx->pc == 0x4A107Cu) {
        ctx->pc = 0x4A107Cu;
            // 0x4a107c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4A1080u;
        goto label_4a1080;
    }
    ctx->pc = 0x4A1078u;
    SET_GPR_U32(ctx, 31, 0x4A1080u);
    ctx->pc = 0x4A107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1078u;
            // 0x4a107c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1080u; }
        if (ctx->pc != 0x4A1080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1080u; }
        if (ctx->pc != 0x4A1080u) { return; }
    }
    ctx->pc = 0x4A1080u;
label_4a1080:
    // 0x4a1080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a1084:
    // 0x4a1084: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a1084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a1088:
    // 0x4a1088: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4a1088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4a108c:
    // 0x4a108c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4a108cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4a1090:
    // 0x4a1090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a1094:
    // 0x4a1094: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4a1094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4a1098:
    // 0x4a1098: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a109c:
    // 0x4a109c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4a109cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4a10a0:
    // 0x4a10a0: 0xc055990  jal         func_156640
label_4a10a4:
    if (ctx->pc == 0x4A10A4u) {
        ctx->pc = 0x4A10A4u;
            // 0x4a10a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A10A8u;
        goto label_4a10a8;
    }
    ctx->pc = 0x4A10A0u;
    SET_GPR_U32(ctx, 31, 0x4A10A8u);
    ctx->pc = 0x4A10A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A10A0u;
            // 0x4a10a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A10A8u; }
        if (ctx->pc != 0x4A10A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A10A8u; }
        if (ctx->pc != 0x4A10A8u) { return; }
    }
    ctx->pc = 0x4A10A8u;
label_4a10a8:
    // 0x4a10a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4a10a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4a10ac:
    // 0x4a10ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a10acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a10b0:
    // 0x4a10b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4a10b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a10b4:
    // 0x4a10b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a10b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a10b8:
    // 0x4a10b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4a10b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a10bc:
    // 0x4a10bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a10bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a10c0:
    // 0x4a10c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a10c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a10c4:
    // 0x4a10c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a10c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a10c8:
    // 0x4a10c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a10c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a10cc:
    // 0x4a10cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a10ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a10d0:
    // 0x4a10d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a10d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a10d4:
    // 0x4a10d4: 0x3e00008  jr          $ra
label_4a10d8:
    if (ctx->pc == 0x4A10D8u) {
        ctx->pc = 0x4A10D8u;
            // 0x4a10d8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4A10DCu;
        goto label_4a10dc;
    }
    ctx->pc = 0x4A10D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A10D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A10D4u;
            // 0x4a10d8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A10DCu;
label_4a10dc:
    // 0x4a10dc: 0x0  nop
    ctx->pc = 0x4a10dcu;
    // NOP
}
