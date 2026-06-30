#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D7B40
// Address: 0x3d7b40 - 0x3d8000
void sub_003D7B40_0x3d7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7B40_0x3d7b40");
#endif

    switch (ctx->pc) {
        case 0x3d7b40u: goto label_3d7b40;
        case 0x3d7b44u: goto label_3d7b44;
        case 0x3d7b48u: goto label_3d7b48;
        case 0x3d7b4cu: goto label_3d7b4c;
        case 0x3d7b50u: goto label_3d7b50;
        case 0x3d7b54u: goto label_3d7b54;
        case 0x3d7b58u: goto label_3d7b58;
        case 0x3d7b5cu: goto label_3d7b5c;
        case 0x3d7b60u: goto label_3d7b60;
        case 0x3d7b64u: goto label_3d7b64;
        case 0x3d7b68u: goto label_3d7b68;
        case 0x3d7b6cu: goto label_3d7b6c;
        case 0x3d7b70u: goto label_3d7b70;
        case 0x3d7b74u: goto label_3d7b74;
        case 0x3d7b78u: goto label_3d7b78;
        case 0x3d7b7cu: goto label_3d7b7c;
        case 0x3d7b80u: goto label_3d7b80;
        case 0x3d7b84u: goto label_3d7b84;
        case 0x3d7b88u: goto label_3d7b88;
        case 0x3d7b8cu: goto label_3d7b8c;
        case 0x3d7b90u: goto label_3d7b90;
        case 0x3d7b94u: goto label_3d7b94;
        case 0x3d7b98u: goto label_3d7b98;
        case 0x3d7b9cu: goto label_3d7b9c;
        case 0x3d7ba0u: goto label_3d7ba0;
        case 0x3d7ba4u: goto label_3d7ba4;
        case 0x3d7ba8u: goto label_3d7ba8;
        case 0x3d7bacu: goto label_3d7bac;
        case 0x3d7bb0u: goto label_3d7bb0;
        case 0x3d7bb4u: goto label_3d7bb4;
        case 0x3d7bb8u: goto label_3d7bb8;
        case 0x3d7bbcu: goto label_3d7bbc;
        case 0x3d7bc0u: goto label_3d7bc0;
        case 0x3d7bc4u: goto label_3d7bc4;
        case 0x3d7bc8u: goto label_3d7bc8;
        case 0x3d7bccu: goto label_3d7bcc;
        case 0x3d7bd0u: goto label_3d7bd0;
        case 0x3d7bd4u: goto label_3d7bd4;
        case 0x3d7bd8u: goto label_3d7bd8;
        case 0x3d7bdcu: goto label_3d7bdc;
        case 0x3d7be0u: goto label_3d7be0;
        case 0x3d7be4u: goto label_3d7be4;
        case 0x3d7be8u: goto label_3d7be8;
        case 0x3d7becu: goto label_3d7bec;
        case 0x3d7bf0u: goto label_3d7bf0;
        case 0x3d7bf4u: goto label_3d7bf4;
        case 0x3d7bf8u: goto label_3d7bf8;
        case 0x3d7bfcu: goto label_3d7bfc;
        case 0x3d7c00u: goto label_3d7c00;
        case 0x3d7c04u: goto label_3d7c04;
        case 0x3d7c08u: goto label_3d7c08;
        case 0x3d7c0cu: goto label_3d7c0c;
        case 0x3d7c10u: goto label_3d7c10;
        case 0x3d7c14u: goto label_3d7c14;
        case 0x3d7c18u: goto label_3d7c18;
        case 0x3d7c1cu: goto label_3d7c1c;
        case 0x3d7c20u: goto label_3d7c20;
        case 0x3d7c24u: goto label_3d7c24;
        case 0x3d7c28u: goto label_3d7c28;
        case 0x3d7c2cu: goto label_3d7c2c;
        case 0x3d7c30u: goto label_3d7c30;
        case 0x3d7c34u: goto label_3d7c34;
        case 0x3d7c38u: goto label_3d7c38;
        case 0x3d7c3cu: goto label_3d7c3c;
        case 0x3d7c40u: goto label_3d7c40;
        case 0x3d7c44u: goto label_3d7c44;
        case 0x3d7c48u: goto label_3d7c48;
        case 0x3d7c4cu: goto label_3d7c4c;
        case 0x3d7c50u: goto label_3d7c50;
        case 0x3d7c54u: goto label_3d7c54;
        case 0x3d7c58u: goto label_3d7c58;
        case 0x3d7c5cu: goto label_3d7c5c;
        case 0x3d7c60u: goto label_3d7c60;
        case 0x3d7c64u: goto label_3d7c64;
        case 0x3d7c68u: goto label_3d7c68;
        case 0x3d7c6cu: goto label_3d7c6c;
        case 0x3d7c70u: goto label_3d7c70;
        case 0x3d7c74u: goto label_3d7c74;
        case 0x3d7c78u: goto label_3d7c78;
        case 0x3d7c7cu: goto label_3d7c7c;
        case 0x3d7c80u: goto label_3d7c80;
        case 0x3d7c84u: goto label_3d7c84;
        case 0x3d7c88u: goto label_3d7c88;
        case 0x3d7c8cu: goto label_3d7c8c;
        case 0x3d7c90u: goto label_3d7c90;
        case 0x3d7c94u: goto label_3d7c94;
        case 0x3d7c98u: goto label_3d7c98;
        case 0x3d7c9cu: goto label_3d7c9c;
        case 0x3d7ca0u: goto label_3d7ca0;
        case 0x3d7ca4u: goto label_3d7ca4;
        case 0x3d7ca8u: goto label_3d7ca8;
        case 0x3d7cacu: goto label_3d7cac;
        case 0x3d7cb0u: goto label_3d7cb0;
        case 0x3d7cb4u: goto label_3d7cb4;
        case 0x3d7cb8u: goto label_3d7cb8;
        case 0x3d7cbcu: goto label_3d7cbc;
        case 0x3d7cc0u: goto label_3d7cc0;
        case 0x3d7cc4u: goto label_3d7cc4;
        case 0x3d7cc8u: goto label_3d7cc8;
        case 0x3d7cccu: goto label_3d7ccc;
        case 0x3d7cd0u: goto label_3d7cd0;
        case 0x3d7cd4u: goto label_3d7cd4;
        case 0x3d7cd8u: goto label_3d7cd8;
        case 0x3d7cdcu: goto label_3d7cdc;
        case 0x3d7ce0u: goto label_3d7ce0;
        case 0x3d7ce4u: goto label_3d7ce4;
        case 0x3d7ce8u: goto label_3d7ce8;
        case 0x3d7cecu: goto label_3d7cec;
        case 0x3d7cf0u: goto label_3d7cf0;
        case 0x3d7cf4u: goto label_3d7cf4;
        case 0x3d7cf8u: goto label_3d7cf8;
        case 0x3d7cfcu: goto label_3d7cfc;
        case 0x3d7d00u: goto label_3d7d00;
        case 0x3d7d04u: goto label_3d7d04;
        case 0x3d7d08u: goto label_3d7d08;
        case 0x3d7d0cu: goto label_3d7d0c;
        case 0x3d7d10u: goto label_3d7d10;
        case 0x3d7d14u: goto label_3d7d14;
        case 0x3d7d18u: goto label_3d7d18;
        case 0x3d7d1cu: goto label_3d7d1c;
        case 0x3d7d20u: goto label_3d7d20;
        case 0x3d7d24u: goto label_3d7d24;
        case 0x3d7d28u: goto label_3d7d28;
        case 0x3d7d2cu: goto label_3d7d2c;
        case 0x3d7d30u: goto label_3d7d30;
        case 0x3d7d34u: goto label_3d7d34;
        case 0x3d7d38u: goto label_3d7d38;
        case 0x3d7d3cu: goto label_3d7d3c;
        case 0x3d7d40u: goto label_3d7d40;
        case 0x3d7d44u: goto label_3d7d44;
        case 0x3d7d48u: goto label_3d7d48;
        case 0x3d7d4cu: goto label_3d7d4c;
        case 0x3d7d50u: goto label_3d7d50;
        case 0x3d7d54u: goto label_3d7d54;
        case 0x3d7d58u: goto label_3d7d58;
        case 0x3d7d5cu: goto label_3d7d5c;
        case 0x3d7d60u: goto label_3d7d60;
        case 0x3d7d64u: goto label_3d7d64;
        case 0x3d7d68u: goto label_3d7d68;
        case 0x3d7d6cu: goto label_3d7d6c;
        case 0x3d7d70u: goto label_3d7d70;
        case 0x3d7d74u: goto label_3d7d74;
        case 0x3d7d78u: goto label_3d7d78;
        case 0x3d7d7cu: goto label_3d7d7c;
        case 0x3d7d80u: goto label_3d7d80;
        case 0x3d7d84u: goto label_3d7d84;
        case 0x3d7d88u: goto label_3d7d88;
        case 0x3d7d8cu: goto label_3d7d8c;
        case 0x3d7d90u: goto label_3d7d90;
        case 0x3d7d94u: goto label_3d7d94;
        case 0x3d7d98u: goto label_3d7d98;
        case 0x3d7d9cu: goto label_3d7d9c;
        case 0x3d7da0u: goto label_3d7da0;
        case 0x3d7da4u: goto label_3d7da4;
        case 0x3d7da8u: goto label_3d7da8;
        case 0x3d7dacu: goto label_3d7dac;
        case 0x3d7db0u: goto label_3d7db0;
        case 0x3d7db4u: goto label_3d7db4;
        case 0x3d7db8u: goto label_3d7db8;
        case 0x3d7dbcu: goto label_3d7dbc;
        case 0x3d7dc0u: goto label_3d7dc0;
        case 0x3d7dc4u: goto label_3d7dc4;
        case 0x3d7dc8u: goto label_3d7dc8;
        case 0x3d7dccu: goto label_3d7dcc;
        case 0x3d7dd0u: goto label_3d7dd0;
        case 0x3d7dd4u: goto label_3d7dd4;
        case 0x3d7dd8u: goto label_3d7dd8;
        case 0x3d7ddcu: goto label_3d7ddc;
        case 0x3d7de0u: goto label_3d7de0;
        case 0x3d7de4u: goto label_3d7de4;
        case 0x3d7de8u: goto label_3d7de8;
        case 0x3d7decu: goto label_3d7dec;
        case 0x3d7df0u: goto label_3d7df0;
        case 0x3d7df4u: goto label_3d7df4;
        case 0x3d7df8u: goto label_3d7df8;
        case 0x3d7dfcu: goto label_3d7dfc;
        case 0x3d7e00u: goto label_3d7e00;
        case 0x3d7e04u: goto label_3d7e04;
        case 0x3d7e08u: goto label_3d7e08;
        case 0x3d7e0cu: goto label_3d7e0c;
        case 0x3d7e10u: goto label_3d7e10;
        case 0x3d7e14u: goto label_3d7e14;
        case 0x3d7e18u: goto label_3d7e18;
        case 0x3d7e1cu: goto label_3d7e1c;
        case 0x3d7e20u: goto label_3d7e20;
        case 0x3d7e24u: goto label_3d7e24;
        case 0x3d7e28u: goto label_3d7e28;
        case 0x3d7e2cu: goto label_3d7e2c;
        case 0x3d7e30u: goto label_3d7e30;
        case 0x3d7e34u: goto label_3d7e34;
        case 0x3d7e38u: goto label_3d7e38;
        case 0x3d7e3cu: goto label_3d7e3c;
        case 0x3d7e40u: goto label_3d7e40;
        case 0x3d7e44u: goto label_3d7e44;
        case 0x3d7e48u: goto label_3d7e48;
        case 0x3d7e4cu: goto label_3d7e4c;
        case 0x3d7e50u: goto label_3d7e50;
        case 0x3d7e54u: goto label_3d7e54;
        case 0x3d7e58u: goto label_3d7e58;
        case 0x3d7e5cu: goto label_3d7e5c;
        case 0x3d7e60u: goto label_3d7e60;
        case 0x3d7e64u: goto label_3d7e64;
        case 0x3d7e68u: goto label_3d7e68;
        case 0x3d7e6cu: goto label_3d7e6c;
        case 0x3d7e70u: goto label_3d7e70;
        case 0x3d7e74u: goto label_3d7e74;
        case 0x3d7e78u: goto label_3d7e78;
        case 0x3d7e7cu: goto label_3d7e7c;
        case 0x3d7e80u: goto label_3d7e80;
        case 0x3d7e84u: goto label_3d7e84;
        case 0x3d7e88u: goto label_3d7e88;
        case 0x3d7e8cu: goto label_3d7e8c;
        case 0x3d7e90u: goto label_3d7e90;
        case 0x3d7e94u: goto label_3d7e94;
        case 0x3d7e98u: goto label_3d7e98;
        case 0x3d7e9cu: goto label_3d7e9c;
        case 0x3d7ea0u: goto label_3d7ea0;
        case 0x3d7ea4u: goto label_3d7ea4;
        case 0x3d7ea8u: goto label_3d7ea8;
        case 0x3d7eacu: goto label_3d7eac;
        case 0x3d7eb0u: goto label_3d7eb0;
        case 0x3d7eb4u: goto label_3d7eb4;
        case 0x3d7eb8u: goto label_3d7eb8;
        case 0x3d7ebcu: goto label_3d7ebc;
        case 0x3d7ec0u: goto label_3d7ec0;
        case 0x3d7ec4u: goto label_3d7ec4;
        case 0x3d7ec8u: goto label_3d7ec8;
        case 0x3d7eccu: goto label_3d7ecc;
        case 0x3d7ed0u: goto label_3d7ed0;
        case 0x3d7ed4u: goto label_3d7ed4;
        case 0x3d7ed8u: goto label_3d7ed8;
        case 0x3d7edcu: goto label_3d7edc;
        case 0x3d7ee0u: goto label_3d7ee0;
        case 0x3d7ee4u: goto label_3d7ee4;
        case 0x3d7ee8u: goto label_3d7ee8;
        case 0x3d7eecu: goto label_3d7eec;
        case 0x3d7ef0u: goto label_3d7ef0;
        case 0x3d7ef4u: goto label_3d7ef4;
        case 0x3d7ef8u: goto label_3d7ef8;
        case 0x3d7efcu: goto label_3d7efc;
        case 0x3d7f00u: goto label_3d7f00;
        case 0x3d7f04u: goto label_3d7f04;
        case 0x3d7f08u: goto label_3d7f08;
        case 0x3d7f0cu: goto label_3d7f0c;
        case 0x3d7f10u: goto label_3d7f10;
        case 0x3d7f14u: goto label_3d7f14;
        case 0x3d7f18u: goto label_3d7f18;
        case 0x3d7f1cu: goto label_3d7f1c;
        case 0x3d7f20u: goto label_3d7f20;
        case 0x3d7f24u: goto label_3d7f24;
        case 0x3d7f28u: goto label_3d7f28;
        case 0x3d7f2cu: goto label_3d7f2c;
        case 0x3d7f30u: goto label_3d7f30;
        case 0x3d7f34u: goto label_3d7f34;
        case 0x3d7f38u: goto label_3d7f38;
        case 0x3d7f3cu: goto label_3d7f3c;
        case 0x3d7f40u: goto label_3d7f40;
        case 0x3d7f44u: goto label_3d7f44;
        case 0x3d7f48u: goto label_3d7f48;
        case 0x3d7f4cu: goto label_3d7f4c;
        case 0x3d7f50u: goto label_3d7f50;
        case 0x3d7f54u: goto label_3d7f54;
        case 0x3d7f58u: goto label_3d7f58;
        case 0x3d7f5cu: goto label_3d7f5c;
        case 0x3d7f60u: goto label_3d7f60;
        case 0x3d7f64u: goto label_3d7f64;
        case 0x3d7f68u: goto label_3d7f68;
        case 0x3d7f6cu: goto label_3d7f6c;
        case 0x3d7f70u: goto label_3d7f70;
        case 0x3d7f74u: goto label_3d7f74;
        case 0x3d7f78u: goto label_3d7f78;
        case 0x3d7f7cu: goto label_3d7f7c;
        case 0x3d7f80u: goto label_3d7f80;
        case 0x3d7f84u: goto label_3d7f84;
        case 0x3d7f88u: goto label_3d7f88;
        case 0x3d7f8cu: goto label_3d7f8c;
        case 0x3d7f90u: goto label_3d7f90;
        case 0x3d7f94u: goto label_3d7f94;
        case 0x3d7f98u: goto label_3d7f98;
        case 0x3d7f9cu: goto label_3d7f9c;
        case 0x3d7fa0u: goto label_3d7fa0;
        case 0x3d7fa4u: goto label_3d7fa4;
        case 0x3d7fa8u: goto label_3d7fa8;
        case 0x3d7facu: goto label_3d7fac;
        case 0x3d7fb0u: goto label_3d7fb0;
        case 0x3d7fb4u: goto label_3d7fb4;
        case 0x3d7fb8u: goto label_3d7fb8;
        case 0x3d7fbcu: goto label_3d7fbc;
        case 0x3d7fc0u: goto label_3d7fc0;
        case 0x3d7fc4u: goto label_3d7fc4;
        case 0x3d7fc8u: goto label_3d7fc8;
        case 0x3d7fccu: goto label_3d7fcc;
        case 0x3d7fd0u: goto label_3d7fd0;
        case 0x3d7fd4u: goto label_3d7fd4;
        case 0x3d7fd8u: goto label_3d7fd8;
        case 0x3d7fdcu: goto label_3d7fdc;
        case 0x3d7fe0u: goto label_3d7fe0;
        case 0x3d7fe4u: goto label_3d7fe4;
        case 0x3d7fe8u: goto label_3d7fe8;
        case 0x3d7fecu: goto label_3d7fec;
        case 0x3d7ff0u: goto label_3d7ff0;
        case 0x3d7ff4u: goto label_3d7ff4;
        case 0x3d7ff8u: goto label_3d7ff8;
        case 0x3d7ffcu: goto label_3d7ffc;
        default: break;
    }

    ctx->pc = 0x3d7b40u;

label_3d7b40:
    // 0x3d7b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d7b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d7b44:
    // 0x3d7b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d7b48:
    // 0x3d7b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d7b4c:
    // 0x3d7b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7b50:
    // 0x3d7b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b54:
    // 0x3d7b54: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3d7b58:
    if (ctx->pc == 0x3D7B58u) {
        ctx->pc = 0x3D7B58u;
            // 0x3d7b58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B5Cu;
        goto label_3d7b5c;
    }
    ctx->pc = 0x3D7B54u;
    {
        const bool branch_taken_0x3d7b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B54u;
            // 0x3d7b58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7b54) {
            ctx->pc = 0x3D7C88u;
            goto label_3d7c88;
        }
    }
    ctx->pc = 0x3D7B5Cu;
label_3d7b5c:
    // 0x3d7b5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d7b60:
    // 0x3d7b60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d7b64:
    // 0x3d7b64: 0x246396c0  addiu       $v1, $v1, -0x6940
    ctx->pc = 0x3d7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940352));
label_3d7b68:
    // 0x3d7b68: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d7b6c:
    // 0x3d7b6c: 0x244296f8  addiu       $v0, $v0, -0x6908
    ctx->pc = 0x3d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940408));
label_3d7b70:
    // 0x3d7b70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d7b74:
    // 0x3d7b74: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3d7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3d7b78:
    // 0x3d7b78: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3d7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3d7b7c:
    // 0x3d7b7c: 0xc0407c0  jal         func_101F00
label_3d7b80:
    if (ctx->pc == 0x3D7B80u) {
        ctx->pc = 0x3D7B80u;
            // 0x3d7b80: 0x24a57ca0  addiu       $a1, $a1, 0x7CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31904));
        ctx->pc = 0x3D7B84u;
        goto label_3d7b84;
    }
    ctx->pc = 0x3D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x3D7B84u);
    ctx->pc = 0x3D7B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B7Cu;
            // 0x3d7b80: 0x24a57ca0  addiu       $a1, $a1, 0x7CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B84u; }
        if (ctx->pc != 0x3D7B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B84u; }
        if (ctx->pc != 0x3D7B84u) { return; }
    }
    ctx->pc = 0x3D7B84u;
label_3d7b84:
    // 0x3d7b84: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3d7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3d7b88:
    // 0x3d7b88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3d7b8c:
    if (ctx->pc == 0x3D7B8Cu) {
        ctx->pc = 0x3D7B8Cu;
            // 0x3d7b8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3D7B90u;
        goto label_3d7b90;
    }
    ctx->pc = 0x3D7B88u;
    {
        const bool branch_taken_0x3d7b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7b88) {
            ctx->pc = 0x3D7B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B88u;
            // 0x3d7b8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7B9Cu;
            goto label_3d7b9c;
        }
    }
    ctx->pc = 0x3D7B90u;
label_3d7b90:
    // 0x3d7b90: 0xc07507c  jal         func_1D41F0
label_3d7b94:
    if (ctx->pc == 0x3D7B94u) {
        ctx->pc = 0x3D7B94u;
            // 0x3d7b94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3D7B98u;
        goto label_3d7b98;
    }
    ctx->pc = 0x3D7B90u;
    SET_GPR_U32(ctx, 31, 0x3D7B98u);
    ctx->pc = 0x3D7B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B90u;
            // 0x3d7b94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B98u; }
        if (ctx->pc != 0x3D7B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B98u; }
        if (ctx->pc != 0x3D7B98u) { return; }
    }
    ctx->pc = 0x3D7B98u;
label_3d7b98:
    // 0x3d7b98: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3d7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3d7b9c:
    // 0x3d7b9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d7ba0:
    if (ctx->pc == 0x3D7BA0u) {
        ctx->pc = 0x3D7BA0u;
            // 0x3d7ba0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3D7BA4u;
        goto label_3d7ba4;
    }
    ctx->pc = 0x3D7B9Cu;
    {
        const bool branch_taken_0x3d7b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7b9c) {
            ctx->pc = 0x3D7BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B9Cu;
            // 0x3d7ba0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7BCCu;
            goto label_3d7bcc;
        }
    }
    ctx->pc = 0x3D7BA4u;
label_3d7ba4:
    // 0x3d7ba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d7ba8:
    if (ctx->pc == 0x3D7BA8u) {
        ctx->pc = 0x3D7BACu;
        goto label_3d7bac;
    }
    ctx->pc = 0x3D7BA4u;
    {
        const bool branch_taken_0x3d7ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7ba4) {
            ctx->pc = 0x3D7BC8u;
            goto label_3d7bc8;
        }
    }
    ctx->pc = 0x3D7BACu;
label_3d7bac:
    // 0x3d7bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d7bb0:
    if (ctx->pc == 0x3D7BB0u) {
        ctx->pc = 0x3D7BB4u;
        goto label_3d7bb4;
    }
    ctx->pc = 0x3D7BACu;
    {
        const bool branch_taken_0x3d7bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bac) {
            ctx->pc = 0x3D7BC8u;
            goto label_3d7bc8;
        }
    }
    ctx->pc = 0x3D7BB4u;
label_3d7bb4:
    // 0x3d7bb4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3d7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3d7bb8:
    // 0x3d7bb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d7bbc:
    if (ctx->pc == 0x3D7BBCu) {
        ctx->pc = 0x3D7BC0u;
        goto label_3d7bc0;
    }
    ctx->pc = 0x3D7BB8u;
    {
        const bool branch_taken_0x3d7bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bb8) {
            ctx->pc = 0x3D7BC8u;
            goto label_3d7bc8;
        }
    }
    ctx->pc = 0x3D7BC0u;
label_3d7bc0:
    // 0x3d7bc0: 0xc0400a8  jal         func_1002A0
label_3d7bc4:
    if (ctx->pc == 0x3D7BC4u) {
        ctx->pc = 0x3D7BC8u;
        goto label_3d7bc8;
    }
    ctx->pc = 0x3D7BC0u;
    SET_GPR_U32(ctx, 31, 0x3D7BC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7BC8u; }
        if (ctx->pc != 0x3D7BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7BC8u; }
        if (ctx->pc != 0x3D7BC8u) { return; }
    }
    ctx->pc = 0x3D7BC8u;
label_3d7bc8:
    // 0x3d7bc8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3d7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3d7bcc:
    // 0x3d7bcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d7bd0:
    if (ctx->pc == 0x3D7BD0u) {
        ctx->pc = 0x3D7BD0u;
            // 0x3d7bd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3D7BD4u;
        goto label_3d7bd4;
    }
    ctx->pc = 0x3D7BCCu;
    {
        const bool branch_taken_0x3d7bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bcc) {
            ctx->pc = 0x3D7BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7BCCu;
            // 0x3d7bd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7BFCu;
            goto label_3d7bfc;
        }
    }
    ctx->pc = 0x3D7BD4u;
label_3d7bd4:
    // 0x3d7bd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d7bd8:
    if (ctx->pc == 0x3D7BD8u) {
        ctx->pc = 0x3D7BDCu;
        goto label_3d7bdc;
    }
    ctx->pc = 0x3D7BD4u;
    {
        const bool branch_taken_0x3d7bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bd4) {
            ctx->pc = 0x3D7BF8u;
            goto label_3d7bf8;
        }
    }
    ctx->pc = 0x3D7BDCu;
label_3d7bdc:
    // 0x3d7bdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d7be0:
    if (ctx->pc == 0x3D7BE0u) {
        ctx->pc = 0x3D7BE4u;
        goto label_3d7be4;
    }
    ctx->pc = 0x3D7BDCu;
    {
        const bool branch_taken_0x3d7bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bdc) {
            ctx->pc = 0x3D7BF8u;
            goto label_3d7bf8;
        }
    }
    ctx->pc = 0x3D7BE4u;
label_3d7be4:
    // 0x3d7be4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3d7be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3d7be8:
    // 0x3d7be8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d7bec:
    if (ctx->pc == 0x3D7BECu) {
        ctx->pc = 0x3D7BF0u;
        goto label_3d7bf0;
    }
    ctx->pc = 0x3D7BE8u;
    {
        const bool branch_taken_0x3d7be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7be8) {
            ctx->pc = 0x3D7BF8u;
            goto label_3d7bf8;
        }
    }
    ctx->pc = 0x3D7BF0u;
label_3d7bf0:
    // 0x3d7bf0: 0xc0400a8  jal         func_1002A0
label_3d7bf4:
    if (ctx->pc == 0x3D7BF4u) {
        ctx->pc = 0x3D7BF8u;
        goto label_3d7bf8;
    }
    ctx->pc = 0x3D7BF0u;
    SET_GPR_U32(ctx, 31, 0x3D7BF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7BF8u; }
        if (ctx->pc != 0x3D7BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7BF8u; }
        if (ctx->pc != 0x3D7BF8u) { return; }
    }
    ctx->pc = 0x3D7BF8u;
label_3d7bf8:
    // 0x3d7bf8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3d7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3d7bfc:
    // 0x3d7bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d7c00:
    if (ctx->pc == 0x3D7C00u) {
        ctx->pc = 0x3D7C04u;
        goto label_3d7c04;
    }
    ctx->pc = 0x3D7BFCu;
    {
        const bool branch_taken_0x3d7bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bfc) {
            ctx->pc = 0x3D7C18u;
            goto label_3d7c18;
        }
    }
    ctx->pc = 0x3D7C04u;
label_3d7c04:
    // 0x3d7c04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d7c08:
    // 0x3d7c08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d7c0c:
    // 0x3d7c0c: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x3d7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
label_3d7c10:
    // 0x3d7c10: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3d7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3d7c14:
    // 0x3d7c14: 0xac406eb0  sw          $zero, 0x6EB0($v0)
    ctx->pc = 0x3d7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28336), GPR_U32(ctx, 0));
label_3d7c18:
    // 0x3d7c18: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3d7c1c:
    if (ctx->pc == 0x3D7C1Cu) {
        ctx->pc = 0x3D7C1Cu;
            // 0x3d7c1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3D7C20u;
        goto label_3d7c20;
    }
    ctx->pc = 0x3D7C18u;
    {
        const bool branch_taken_0x3d7c18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c18) {
            ctx->pc = 0x3D7C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C18u;
            // 0x3d7c1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C74u;
            goto label_3d7c74;
        }
    }
    ctx->pc = 0x3D7C20u;
label_3d7c20:
    // 0x3d7c20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d7c24:
    // 0x3d7c24: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d7c28:
    // 0x3d7c28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d7c2c:
    // 0x3d7c2c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3d7c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3d7c30:
    // 0x3d7c30: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d7c34:
    if (ctx->pc == 0x3D7C34u) {
        ctx->pc = 0x3D7C34u;
            // 0x3d7c34: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3D7C38u;
        goto label_3d7c38;
    }
    ctx->pc = 0x3D7C30u;
    {
        const bool branch_taken_0x3d7c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c30) {
            ctx->pc = 0x3D7C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C30u;
            // 0x3d7c34: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C4Cu;
            goto label_3d7c4c;
        }
    }
    ctx->pc = 0x3D7C38u;
label_3d7c38:
    // 0x3d7c38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d7c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7c3c:
    // 0x3d7c3c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d7c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d7c40:
    // 0x3d7c40: 0x320f809  jalr        $t9
label_3d7c44:
    if (ctx->pc == 0x3D7C44u) {
        ctx->pc = 0x3D7C44u;
            // 0x3d7c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D7C48u;
        goto label_3d7c48;
    }
    ctx->pc = 0x3D7C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7C48u);
        ctx->pc = 0x3D7C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C40u;
            // 0x3d7c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7C48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7C48u; }
            if (ctx->pc != 0x3D7C48u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7C48u;
label_3d7c48:
    // 0x3d7c48: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3d7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3d7c4c:
    // 0x3d7c4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d7c50:
    if (ctx->pc == 0x3D7C50u) {
        ctx->pc = 0x3D7C50u;
            // 0x3d7c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C54u;
        goto label_3d7c54;
    }
    ctx->pc = 0x3D7C4Cu;
    {
        const bool branch_taken_0x3d7c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c4c) {
            ctx->pc = 0x3D7C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C4Cu;
            // 0x3d7c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C68u;
            goto label_3d7c68;
        }
    }
    ctx->pc = 0x3D7C54u;
label_3d7c54:
    // 0x3d7c54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d7c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7c58:
    // 0x3d7c58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d7c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d7c5c:
    // 0x3d7c5c: 0x320f809  jalr        $t9
label_3d7c60:
    if (ctx->pc == 0x3D7C60u) {
        ctx->pc = 0x3D7C60u;
            // 0x3d7c60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D7C64u;
        goto label_3d7c64;
    }
    ctx->pc = 0x3D7C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7C64u);
        ctx->pc = 0x3D7C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C5Cu;
            // 0x3d7c60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7C64u; }
            if (ctx->pc != 0x3D7C64u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7C64u;
label_3d7c64:
    // 0x3d7c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c68:
    // 0x3d7c68: 0xc075bf8  jal         func_1D6FE0
label_3d7c6c:
    if (ctx->pc == 0x3D7C6Cu) {
        ctx->pc = 0x3D7C6Cu;
            // 0x3d7c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C70u;
        goto label_3d7c70;
    }
    ctx->pc = 0x3D7C68u;
    SET_GPR_U32(ctx, 31, 0x3D7C70u);
    ctx->pc = 0x3D7C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C68u;
            // 0x3d7c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7C70u; }
        if (ctx->pc != 0x3D7C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7C70u; }
        if (ctx->pc != 0x3D7C70u) { return; }
    }
    ctx->pc = 0x3D7C70u;
label_3d7c70:
    // 0x3d7c70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d7c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d7c74:
    // 0x3d7c74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d7c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d7c78:
    // 0x3d7c78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d7c7c:
    if (ctx->pc == 0x3D7C7Cu) {
        ctx->pc = 0x3D7C7Cu;
            // 0x3d7c7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C80u;
        goto label_3d7c80;
    }
    ctx->pc = 0x3D7C78u;
    {
        const bool branch_taken_0x3d7c78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d7c78) {
            ctx->pc = 0x3D7C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C78u;
            // 0x3d7c7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C8Cu;
            goto label_3d7c8c;
        }
    }
    ctx->pc = 0x3D7C80u;
label_3d7c80:
    // 0x3d7c80: 0xc0400a8  jal         func_1002A0
label_3d7c84:
    if (ctx->pc == 0x3D7C84u) {
        ctx->pc = 0x3D7C84u;
            // 0x3d7c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C88u;
        goto label_3d7c88;
    }
    ctx->pc = 0x3D7C80u;
    SET_GPR_U32(ctx, 31, 0x3D7C88u);
    ctx->pc = 0x3D7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C80u;
            // 0x3d7c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7C88u; }
        if (ctx->pc != 0x3D7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7C88u; }
        if (ctx->pc != 0x3D7C88u) { return; }
    }
    ctx->pc = 0x3D7C88u;
label_3d7c88:
    // 0x3d7c88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d7c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c8c:
    // 0x3d7c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7c90:
    // 0x3d7c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7c94:
    // 0x3d7c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7c98:
    // 0x3d7c98: 0x3e00008  jr          $ra
label_3d7c9c:
    if (ctx->pc == 0x3D7C9Cu) {
        ctx->pc = 0x3D7C9Cu;
            // 0x3d7c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D7CA0u;
        goto label_3d7ca0;
    }
    ctx->pc = 0x3D7C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7C98u;
            // 0x3d7c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7CA0u;
label_3d7ca0:
    // 0x3d7ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d7ca4:
    // 0x3d7ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d7ca8:
    // 0x3d7ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d7cac:
    // 0x3d7cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7cb0:
    // 0x3d7cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7cb4:
    // 0x3d7cb4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_3d7cb8:
    if (ctx->pc == 0x3D7CB8u) {
        ctx->pc = 0x3D7CB8u;
            // 0x3d7cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CBCu;
        goto label_3d7cbc;
    }
    ctx->pc = 0x3D7CB4u;
    {
        const bool branch_taken_0x3d7cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7CB4u;
            // 0x3d7cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7cb4) {
            ctx->pc = 0x3D7D28u;
            goto label_3d7d28;
        }
    }
    ctx->pc = 0x3D7CBCu;
label_3d7cbc:
    // 0x3d7cbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d7cc0:
    // 0x3d7cc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d7cc4:
    // 0x3d7cc4: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x3d7cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
label_3d7cc8:
    // 0x3d7cc8: 0x24429640  addiu       $v0, $v0, -0x69C0
    ctx->pc = 0x3d7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940224));
label_3d7ccc:
    // 0x3d7ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d7cd0:
    // 0x3d7cd0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d7cd4:
    // 0x3d7cd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d7cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7cd8:
    // 0x3d7cd8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3d7cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3d7cdc:
    // 0x3d7cdc: 0x320f809  jalr        $t9
label_3d7ce0:
    if (ctx->pc == 0x3D7CE0u) {
        ctx->pc = 0x3D7CE4u;
        goto label_3d7ce4;
    }
    ctx->pc = 0x3D7CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7CE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7CE4u; }
            if (ctx->pc != 0x3D7CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7CE4u;
label_3d7ce4:
    // 0x3d7ce4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_3d7ce8:
    if (ctx->pc == 0x3D7CE8u) {
        ctx->pc = 0x3D7CE8u;
            // 0x3d7ce8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3D7CECu;
        goto label_3d7cec;
    }
    ctx->pc = 0x3D7CE4u;
    {
        const bool branch_taken_0x3d7ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7ce4) {
            ctx->pc = 0x3D7CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7CE4u;
            // 0x3d7ce8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7D14u;
            goto label_3d7d14;
        }
    }
    ctx->pc = 0x3D7CECu;
label_3d7cec:
    // 0x3d7cec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d7cf0:
    // 0x3d7cf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d7cf4:
    // 0x3d7cf4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x3d7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_3d7cf8:
    // 0x3d7cf8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x3d7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_3d7cfc:
    // 0x3d7cfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d7cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d7d00:
    // 0x3d7d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d04:
    // 0x3d7d04: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d7d08:
    // 0x3d7d08: 0xc0aee40  jal         func_2BB900
label_3d7d0c:
    if (ctx->pc == 0x3D7D0Cu) {
        ctx->pc = 0x3D7D0Cu;
            // 0x3d7d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D10u;
        goto label_3d7d10;
    }
    ctx->pc = 0x3D7D08u;
    SET_GPR_U32(ctx, 31, 0x3D7D10u);
    ctx->pc = 0x3D7D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D08u;
            // 0x3d7d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7D10u; }
        if (ctx->pc != 0x3D7D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7D10u; }
        if (ctx->pc != 0x3D7D10u) { return; }
    }
    ctx->pc = 0x3D7D10u;
label_3d7d10:
    // 0x3d7d10: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d7d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3d7d14:
    // 0x3d7d14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d7d14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d7d18:
    // 0x3d7d18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d7d1c:
    if (ctx->pc == 0x3D7D1Cu) {
        ctx->pc = 0x3D7D1Cu;
            // 0x3d7d1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D20u;
        goto label_3d7d20;
    }
    ctx->pc = 0x3D7D18u;
    {
        const bool branch_taken_0x3d7d18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d7d18) {
            ctx->pc = 0x3D7D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D18u;
            // 0x3d7d1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7D2Cu;
            goto label_3d7d2c;
        }
    }
    ctx->pc = 0x3D7D20u;
label_3d7d20:
    // 0x3d7d20: 0xc0400a8  jal         func_1002A0
label_3d7d24:
    if (ctx->pc == 0x3D7D24u) {
        ctx->pc = 0x3D7D24u;
            // 0x3d7d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D28u;
        goto label_3d7d28;
    }
    ctx->pc = 0x3D7D20u;
    SET_GPR_U32(ctx, 31, 0x3D7D28u);
    ctx->pc = 0x3D7D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D20u;
            // 0x3d7d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7D28u; }
        if (ctx->pc != 0x3D7D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7D28u; }
        if (ctx->pc != 0x3D7D28u) { return; }
    }
    ctx->pc = 0x3D7D28u;
label_3d7d28:
    // 0x3d7d28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d7d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d2c:
    // 0x3d7d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7d30:
    // 0x3d7d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7d34:
    // 0x3d7d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7d38:
    // 0x3d7d38: 0x3e00008  jr          $ra
label_3d7d3c:
    if (ctx->pc == 0x3D7D3Cu) {
        ctx->pc = 0x3D7D3Cu;
            // 0x3d7d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D7D40u;
        goto label_3d7d40;
    }
    ctx->pc = 0x3D7D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D38u;
            // 0x3d7d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7D40u;
label_3d7d40:
    // 0x3d7d40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3d7d44:
    // 0x3d7d44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d7d48:
    // 0x3d7d48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3d7d4c:
    // 0x3d7d4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d7d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3d7d50:
    // 0x3d7d50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d7d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3d7d54:
    // 0x3d7d54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d7d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d7d58:
    // 0x3d7d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d7d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d7d5c:
    // 0x3d7d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d7d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d7d60:
    // 0x3d7d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7d64:
    // 0x3d7d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d7d68:
    // 0x3d7d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7d6c:
    // 0x3d7d6c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3d7d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3d7d70:
    // 0x3d7d70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d7d70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d7d74:
    // 0x3d7d74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7d78:
    // 0x3d7d78: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3d7d7c:
    if (ctx->pc == 0x3D7D7Cu) {
        ctx->pc = 0x3D7D7Cu;
            // 0x3d7d7c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D80u;
        goto label_3d7d80;
    }
    ctx->pc = 0x3D7D78u;
    {
        const bool branch_taken_0x3d7d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D7D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D78u;
            // 0x3d7d7c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d78) {
            ctx->pc = 0x3D7DBCu;
            goto label_3d7dbc;
        }
    }
    ctx->pc = 0x3D7D80u;
label_3d7d80:
    // 0x3d7d80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d7d84:
    // 0x3d7d84: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_3d7d88:
    if (ctx->pc == 0x3D7D88u) {
        ctx->pc = 0x3D7D88u;
            // 0x3d7d88: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x3D7D8Cu;
        goto label_3d7d8c;
    }
    ctx->pc = 0x3D7D84u;
    {
        const bool branch_taken_0x3d7d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7d84) {
            ctx->pc = 0x3D7D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D84u;
            // 0x3d7d88: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7EA4u;
            goto label_3d7ea4;
        }
    }
    ctx->pc = 0x3D7D8Cu;
label_3d7d8c:
    // 0x3d7d8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7d90:
    // 0x3d7d90: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3d7d94:
    if (ctx->pc == 0x3D7D94u) {
        ctx->pc = 0x3D7D94u;
            // 0x3d7d94: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D7D98u;
        goto label_3d7d98;
    }
    ctx->pc = 0x3D7D90u;
    {
        const bool branch_taken_0x3d7d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7d90) {
            ctx->pc = 0x3D7D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7D90u;
            // 0x3d7d94: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DA0u;
            goto label_3d7da0;
        }
    }
    ctx->pc = 0x3D7D98u;
label_3d7d98:
    // 0x3d7d98: 0x10000041  b           . + 4 + (0x41 << 2)
label_3d7d9c:
    if (ctx->pc == 0x3D7D9Cu) {
        ctx->pc = 0x3D7DA0u;
        goto label_3d7da0;
    }
    ctx->pc = 0x3D7D98u;
    {
        const bool branch_taken_0x3d7d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d98) {
            ctx->pc = 0x3D7EA0u;
            goto label_3d7ea0;
        }
    }
    ctx->pc = 0x3D7DA0u;
label_3d7da0:
    // 0x3d7da0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3d7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3d7da4:
    // 0x3d7da4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3d7da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3d7da8:
    // 0x3d7da8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d7da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3d7dac:
    // 0x3d7dac: 0x320f809  jalr        $t9
label_3d7db0:
    if (ctx->pc == 0x3D7DB0u) {
        ctx->pc = 0x3D7DB0u;
            // 0x3d7db0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3D7DB4u;
        goto label_3d7db4;
    }
    ctx->pc = 0x3D7DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7DB4u);
        ctx->pc = 0x3D7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7DACu;
            // 0x3d7db0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7DB4u; }
            if (ctx->pc != 0x3D7DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7DB4u;
label_3d7db4:
    // 0x3d7db4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3d7db8:
    if (ctx->pc == 0x3D7DB8u) {
        ctx->pc = 0x3D7DBCu;
        goto label_3d7dbc;
    }
    ctx->pc = 0x3D7DB4u;
    {
        const bool branch_taken_0x3d7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7db4) {
            ctx->pc = 0x3D7EA0u;
            goto label_3d7ea0;
        }
    }
    ctx->pc = 0x3D7DBCu;
label_3d7dbc:
    // 0x3d7dbc: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x3d7dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3d7dc0:
    // 0x3d7dc0: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_3d7dc4:
    if (ctx->pc == 0x3D7DC4u) {
        ctx->pc = 0x3D7DC8u;
        goto label_3d7dc8;
    }
    ctx->pc = 0x3D7DC0u;
    {
        const bool branch_taken_0x3d7dc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7dc0) {
            ctx->pc = 0x3D7EA0u;
            goto label_3d7ea0;
        }
    }
    ctx->pc = 0x3D7DC8u;
label_3d7dc8:
    // 0x3d7dc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7dcc:
    // 0x3d7dcc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d7dd0:
    // 0x3d7dd0: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x3d7dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3d7dd4:
    // 0x3d7dd4: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x3d7dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_3d7dd8:
    // 0x3d7dd8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3d7dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d7ddc:
    // 0x3d7ddc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d7ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7de0:
    // 0x3d7de0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d7de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7de4:
    // 0x3d7de4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3d7de8:
    // 0x3d7de8: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x3d7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3d7dec:
    // 0x3d7dec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7df0:
    // 0x3d7df0: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3d7df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3d7df4:
    // 0x3d7df4: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x3d7df4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3d7df8:
    // 0x3d7df8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3d7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3d7dfc:
    // 0x3d7dfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7e00:
    // 0x3d7e00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3d7e00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d7e04:
    // 0x3d7e04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7e08:
    // 0x3d7e08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d7e0c:
    // 0x3d7e0c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3d7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7e10:
    // 0x3d7e10: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3d7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3d7e14:
    // 0x3d7e14: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x3d7e14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3d7e18:
    // 0x3d7e18: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3d7e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3d7e1c:
    // 0x3d7e1c: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x3d7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3d7e20:
    // 0x3d7e20: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d7e24:
    // 0x3d7e24: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3d7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d7e28:
    // 0x3d7e28: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d7e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e2c:
    // 0x3d7e2c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7e30:
    // 0x3d7e30: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3d7e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e34:
    // 0x3d7e34: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3d7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3d7e38:
    // 0x3d7e38: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3d7e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e3c:
    // 0x3d7e3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d7e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d7e40:
    // 0x3d7e40: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x3d7e40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3d7e44:
    // 0x3d7e44: 0xc0f6344  jal         func_3D8D10
label_3d7e48:
    if (ctx->pc == 0x3D7E48u) {
        ctx->pc = 0x3D7E48u;
            // 0x3d7e48: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D7E4Cu;
        goto label_3d7e4c;
    }
    ctx->pc = 0x3D7E44u;
    SET_GPR_U32(ctx, 31, 0x3D7E4Cu);
    ctx->pc = 0x3D7E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7E44u;
            // 0x3d7e48: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D8D10u;
    if (runtime->hasFunction(0x3D8D10u)) {
        auto targetFn = runtime->lookupFunction(0x3D8D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7E4Cu; }
        if (ctx->pc != 0x3D7E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D8D10_0x3d8d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7E4Cu; }
        if (ctx->pc != 0x3D7E4Cu) { return; }
    }
    ctx->pc = 0x3D7E4Cu;
label_3d7e4c:
    // 0x3d7e4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d7e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d7e50:
    // 0x3d7e50: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3d7e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d7e54:
    // 0x3d7e54: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_3d7e58:
    if (ctx->pc == 0x3D7E58u) {
        ctx->pc = 0x3D7E58u;
            // 0x3d7e58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D7E5Cu;
        goto label_3d7e5c;
    }
    ctx->pc = 0x3D7E54u;
    {
        const bool branch_taken_0x3d7e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7E54u;
            // 0x3d7e58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7e54) {
            ctx->pc = 0x3D7E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d7e1c;
        }
    }
    ctx->pc = 0x3D7E5Cu;
label_3d7e5c:
    // 0x3d7e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7e60:
    // 0x3d7e60: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3d7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d7e64:
    // 0x3d7e64: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_3d7e68:
    if (ctx->pc == 0x3D7E68u) {
        ctx->pc = 0x3D7E6Cu;
        goto label_3d7e6c;
    }
    ctx->pc = 0x3D7E64u;
    {
        const bool branch_taken_0x3d7e64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3d7e64) {
            ctx->pc = 0x3D7EA0u;
            goto label_3d7ea0;
        }
    }
    ctx->pc = 0x3D7E6Cu;
label_3d7e6c:
    // 0x3d7e6c: 0xc04e738  jal         func_139CE0
label_3d7e70:
    if (ctx->pc == 0x3D7E70u) {
        ctx->pc = 0x3D7E70u;
            // 0x3d7e70: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3D7E74u;
        goto label_3d7e74;
    }
    ctx->pc = 0x3D7E6Cu;
    SET_GPR_U32(ctx, 31, 0x3D7E74u);
    ctx->pc = 0x3D7E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7E6Cu;
            // 0x3d7e70: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7E74u; }
        if (ctx->pc != 0x3D7E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7E74u; }
        if (ctx->pc != 0x3D7E74u) { return; }
    }
    ctx->pc = 0x3D7E74u;
label_3d7e74:
    // 0x3d7e74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7e78:
    // 0x3d7e78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7e7c:
    // 0x3d7e7c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3d7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_3d7e80:
    // 0x3d7e80: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d7e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d7e84:
    // 0x3d7e84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d7e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e88:
    // 0x3d7e88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7e8c:
    // 0x3d7e8c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3d7e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3d7e90:
    // 0x3d7e90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7e94:
    // 0x3d7e94: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x3d7e94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_3d7e98:
    // 0x3d7e98: 0xc055d28  jal         func_1574A0
label_3d7e9c:
    if (ctx->pc == 0x3D7E9Cu) {
        ctx->pc = 0x3D7E9Cu;
            // 0x3d7e9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7EA0u;
        goto label_3d7ea0;
    }
    ctx->pc = 0x3D7E98u;
    SET_GPR_U32(ctx, 31, 0x3D7EA0u);
    ctx->pc = 0x3D7E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7E98u;
            // 0x3d7e9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7EA0u; }
        if (ctx->pc != 0x3D7EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7EA0u; }
        if (ctx->pc != 0x3D7EA0u) { return; }
    }
    ctx->pc = 0x3D7EA0u;
label_3d7ea0:
    // 0x3d7ea0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d7ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d7ea4:
    // 0x3d7ea4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d7ea4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d7ea8:
    // 0x3d7ea8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d7ea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7eac:
    // 0x3d7eac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d7eacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7eb0:
    // 0x3d7eb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d7eb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7eb4:
    // 0x3d7eb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d7eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7eb8:
    // 0x3d7eb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7ebc:
    // 0x3d7ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7ec0:
    // 0x3d7ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7ec4:
    // 0x3d7ec4: 0x3e00008  jr          $ra
label_3d7ec8:
    if (ctx->pc == 0x3D7EC8u) {
        ctx->pc = 0x3D7EC8u;
            // 0x3d7ec8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D7ECCu;
        goto label_3d7ecc;
    }
    ctx->pc = 0x3D7EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7EC4u;
            // 0x3d7ec8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7ECCu;
label_3d7ecc:
    // 0x3d7ecc: 0x0  nop
    ctx->pc = 0x3d7eccu;
    // NOP
label_3d7ed0:
    // 0x3d7ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d7ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d7ed4:
    // 0x3d7ed4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7ed8:
    // 0x3d7ed8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d7edc:
    // 0x3d7edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d7edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d7ee0:
    // 0x3d7ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7ee4:
    // 0x3d7ee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d7ee8:
    // 0x3d7ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7eec:
    // 0x3d7eec: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d7eecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d7ef0:
    // 0x3d7ef0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3d7ef4:
    if (ctx->pc == 0x3D7EF4u) {
        ctx->pc = 0x3D7EF4u;
            // 0x3d7ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7EF8u;
        goto label_3d7ef8;
    }
    ctx->pc = 0x3D7EF0u;
    {
        const bool branch_taken_0x3d7ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D7EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7EF0u;
            // 0x3d7ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ef0) {
            ctx->pc = 0x3D7F24u;
            goto label_3d7f24;
        }
    }
    ctx->pc = 0x3D7EF8u;
label_3d7ef8:
    // 0x3d7ef8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d7efc:
    // 0x3d7efc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3d7f00:
    if (ctx->pc == 0x3D7F00u) {
        ctx->pc = 0x3D7F00u;
            // 0x3d7f00: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D7F04u;
        goto label_3d7f04;
    }
    ctx->pc = 0x3D7EFCu;
    {
        const bool branch_taken_0x3d7efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7efc) {
            ctx->pc = 0x3D7F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7EFCu;
            // 0x3d7f00: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7F18u;
            goto label_3d7f18;
        }
    }
    ctx->pc = 0x3D7F04u;
label_3d7f04:
    // 0x3d7f04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7f08:
    // 0x3d7f08: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3d7f0c:
    if (ctx->pc == 0x3D7F0Cu) {
        ctx->pc = 0x3D7F10u;
        goto label_3d7f10;
    }
    ctx->pc = 0x3D7F08u;
    {
        const bool branch_taken_0x3d7f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7f08) {
            ctx->pc = 0x3D7F58u;
            goto label_3d7f58;
        }
    }
    ctx->pc = 0x3D7F10u;
label_3d7f10:
    // 0x3d7f10: 0x10000011  b           . + 4 + (0x11 << 2)
label_3d7f14:
    if (ctx->pc == 0x3D7F14u) {
        ctx->pc = 0x3D7F18u;
        goto label_3d7f18;
    }
    ctx->pc = 0x3D7F10u;
    {
        const bool branch_taken_0x3d7f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7f10) {
            ctx->pc = 0x3D7F58u;
            goto label_3d7f58;
        }
    }
    ctx->pc = 0x3D7F18u;
label_3d7f18:
    // 0x3d7f18: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d7f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d7f1c:
    // 0x3d7f1c: 0x320f809  jalr        $t9
label_3d7f20:
    if (ctx->pc == 0x3D7F20u) {
        ctx->pc = 0x3D7F24u;
        goto label_3d7f24;
    }
    ctx->pc = 0x3D7F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7F24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7F24u; }
            if (ctx->pc != 0x3D7F24u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7F24u;
label_3d7f24:
    // 0x3d7f24: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3d7f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3d7f28:
    // 0x3d7f28: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3d7f2c:
    if (ctx->pc == 0x3D7F2Cu) {
        ctx->pc = 0x3D7F30u;
        goto label_3d7f30;
    }
    ctx->pc = 0x3D7F28u;
    {
        const bool branch_taken_0x3d7f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7f28) {
            ctx->pc = 0x3D7F58u;
            goto label_3d7f58;
        }
    }
    ctx->pc = 0x3D7F30u;
label_3d7f30:
    // 0x3d7f30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d7f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f34:
    // 0x3d7f34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d7f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f38:
    // 0x3d7f38: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3d7f3c:
    // 0x3d7f3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d7f40:
    // 0x3d7f40: 0xc0e3658  jal         func_38D960
label_3d7f44:
    if (ctx->pc == 0x3D7F44u) {
        ctx->pc = 0x3D7F44u;
            // 0x3d7f44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3D7F48u;
        goto label_3d7f48;
    }
    ctx->pc = 0x3D7F40u;
    SET_GPR_U32(ctx, 31, 0x3D7F48u);
    ctx->pc = 0x3D7F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7F40u;
            // 0x3d7f44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7F48u; }
        if (ctx->pc != 0x3D7F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7F48u; }
        if (ctx->pc != 0x3D7F48u) { return; }
    }
    ctx->pc = 0x3D7F48u;
label_3d7f48:
    // 0x3d7f48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d7f48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d7f4c:
    // 0x3d7f4c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3d7f4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d7f50:
    // 0x3d7f50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3d7f54:
    if (ctx->pc == 0x3D7F54u) {
        ctx->pc = 0x3D7F54u;
            // 0x3d7f54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D7F58u;
        goto label_3d7f58;
    }
    ctx->pc = 0x3D7F50u;
    {
        const bool branch_taken_0x3d7f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7F50u;
            // 0x3d7f54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f50) {
            ctx->pc = 0x3D7F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d7f38;
        }
    }
    ctx->pc = 0x3D7F58u;
label_3d7f58:
    // 0x3d7f58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d7f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7f5c:
    // 0x3d7f5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d7f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7f60:
    // 0x3d7f60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7f64:
    // 0x3d7f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7f68:
    // 0x3d7f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7f6c:
    // 0x3d7f6c: 0x3e00008  jr          $ra
label_3d7f70:
    if (ctx->pc == 0x3D7F70u) {
        ctx->pc = 0x3D7F70u;
            // 0x3d7f70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D7F74u;
        goto label_3d7f74;
    }
    ctx->pc = 0x3D7F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7F6Cu;
            // 0x3d7f70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7F74u;
label_3d7f74:
    // 0x3d7f74: 0x0  nop
    ctx->pc = 0x3d7f74u;
    // NOP
label_3d7f78:
    // 0x3d7f78: 0x0  nop
    ctx->pc = 0x3d7f78u;
    // NOP
label_3d7f7c:
    // 0x3d7f7c: 0x0  nop
    ctx->pc = 0x3d7f7cu;
    // NOP
label_3d7f80:
    // 0x3d7f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d7f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d7f84:
    // 0x3d7f84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d7f88:
    // 0x3d7f88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d7f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d7f8c:
    // 0x3d7f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7f90:
    // 0x3d7f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d7f94:
    // 0x3d7f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7f98:
    // 0x3d7f98: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3d7f98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d7f9c:
    // 0x3d7f9c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3d7fa0:
    if (ctx->pc == 0x3D7FA0u) {
        ctx->pc = 0x3D7FA0u;
            // 0x3d7fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FA4u;
        goto label_3d7fa4;
    }
    ctx->pc = 0x3D7F9Cu;
    {
        const bool branch_taken_0x3d7f9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7F9Cu;
            // 0x3d7fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f9c) {
            ctx->pc = 0x3D7FD8u;
            goto label_3d7fd8;
        }
    }
    ctx->pc = 0x3D7FA4u;
label_3d7fa4:
    // 0x3d7fa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d7fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7fa8:
    // 0x3d7fa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d7fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7fac:
    // 0x3d7fac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3d7fb0:
    // 0x3d7fb0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d7fb4:
    // 0x3d7fb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7fb8:
    // 0x3d7fb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d7fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7fbc:
    // 0x3d7fbc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3d7fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3d7fc0:
    // 0x3d7fc0: 0x320f809  jalr        $t9
label_3d7fc4:
    if (ctx->pc == 0x3D7FC4u) {
        ctx->pc = 0x3D7FC8u;
        goto label_3d7fc8;
    }
    ctx->pc = 0x3D7FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7FC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7FC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7FC8u; }
            if (ctx->pc != 0x3D7FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7FC8u;
label_3d7fc8:
    // 0x3d7fc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d7fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d7fcc:
    // 0x3d7fcc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3d7fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d7fd0:
    // 0x3d7fd0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3d7fd4:
    if (ctx->pc == 0x3D7FD4u) {
        ctx->pc = 0x3D7FD4u;
            // 0x3d7fd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D7FD8u;
        goto label_3d7fd8;
    }
    ctx->pc = 0x3D7FD0u;
    {
        const bool branch_taken_0x3d7fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7FD0u;
            // 0x3d7fd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fd0) {
            ctx->pc = 0x3D7FACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d7fac;
        }
    }
    ctx->pc = 0x3D7FD8u;
label_3d7fd8:
    // 0x3d7fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d7fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7fdc:
    // 0x3d7fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d7fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7fe0:
    // 0x3d7fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7fe4:
    // 0x3d7fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7fe8:
    // 0x3d7fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7fec:
    // 0x3d7fec: 0x3e00008  jr          $ra
label_3d7ff0:
    if (ctx->pc == 0x3D7FF0u) {
        ctx->pc = 0x3D7FF0u;
            // 0x3d7ff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D7FF4u;
        goto label_3d7ff4;
    }
    ctx->pc = 0x3D7FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7FECu;
            // 0x3d7ff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7FF4u;
label_3d7ff4:
    // 0x3d7ff4: 0x0  nop
    ctx->pc = 0x3d7ff4u;
    // NOP
label_3d7ff8:
    // 0x3d7ff8: 0x0  nop
    ctx->pc = 0x3d7ff8u;
    // NOP
label_3d7ffc:
    // 0x3d7ffc: 0x0  nop
    ctx->pc = 0x3d7ffcu;
    // NOP
}
