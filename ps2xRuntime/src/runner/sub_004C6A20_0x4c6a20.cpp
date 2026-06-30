#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C6A20
// Address: 0x4c6a20 - 0x4c6ef0
void sub_004C6A20_0x4c6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6A20_0x4c6a20");
#endif

    switch (ctx->pc) {
        case 0x4c6a20u: goto label_4c6a20;
        case 0x4c6a24u: goto label_4c6a24;
        case 0x4c6a28u: goto label_4c6a28;
        case 0x4c6a2cu: goto label_4c6a2c;
        case 0x4c6a30u: goto label_4c6a30;
        case 0x4c6a34u: goto label_4c6a34;
        case 0x4c6a38u: goto label_4c6a38;
        case 0x4c6a3cu: goto label_4c6a3c;
        case 0x4c6a40u: goto label_4c6a40;
        case 0x4c6a44u: goto label_4c6a44;
        case 0x4c6a48u: goto label_4c6a48;
        case 0x4c6a4cu: goto label_4c6a4c;
        case 0x4c6a50u: goto label_4c6a50;
        case 0x4c6a54u: goto label_4c6a54;
        case 0x4c6a58u: goto label_4c6a58;
        case 0x4c6a5cu: goto label_4c6a5c;
        case 0x4c6a60u: goto label_4c6a60;
        case 0x4c6a64u: goto label_4c6a64;
        case 0x4c6a68u: goto label_4c6a68;
        case 0x4c6a6cu: goto label_4c6a6c;
        case 0x4c6a70u: goto label_4c6a70;
        case 0x4c6a74u: goto label_4c6a74;
        case 0x4c6a78u: goto label_4c6a78;
        case 0x4c6a7cu: goto label_4c6a7c;
        case 0x4c6a80u: goto label_4c6a80;
        case 0x4c6a84u: goto label_4c6a84;
        case 0x4c6a88u: goto label_4c6a88;
        case 0x4c6a8cu: goto label_4c6a8c;
        case 0x4c6a90u: goto label_4c6a90;
        case 0x4c6a94u: goto label_4c6a94;
        case 0x4c6a98u: goto label_4c6a98;
        case 0x4c6a9cu: goto label_4c6a9c;
        case 0x4c6aa0u: goto label_4c6aa0;
        case 0x4c6aa4u: goto label_4c6aa4;
        case 0x4c6aa8u: goto label_4c6aa8;
        case 0x4c6aacu: goto label_4c6aac;
        case 0x4c6ab0u: goto label_4c6ab0;
        case 0x4c6ab4u: goto label_4c6ab4;
        case 0x4c6ab8u: goto label_4c6ab8;
        case 0x4c6abcu: goto label_4c6abc;
        case 0x4c6ac0u: goto label_4c6ac0;
        case 0x4c6ac4u: goto label_4c6ac4;
        case 0x4c6ac8u: goto label_4c6ac8;
        case 0x4c6accu: goto label_4c6acc;
        case 0x4c6ad0u: goto label_4c6ad0;
        case 0x4c6ad4u: goto label_4c6ad4;
        case 0x4c6ad8u: goto label_4c6ad8;
        case 0x4c6adcu: goto label_4c6adc;
        case 0x4c6ae0u: goto label_4c6ae0;
        case 0x4c6ae4u: goto label_4c6ae4;
        case 0x4c6ae8u: goto label_4c6ae8;
        case 0x4c6aecu: goto label_4c6aec;
        case 0x4c6af0u: goto label_4c6af0;
        case 0x4c6af4u: goto label_4c6af4;
        case 0x4c6af8u: goto label_4c6af8;
        case 0x4c6afcu: goto label_4c6afc;
        case 0x4c6b00u: goto label_4c6b00;
        case 0x4c6b04u: goto label_4c6b04;
        case 0x4c6b08u: goto label_4c6b08;
        case 0x4c6b0cu: goto label_4c6b0c;
        case 0x4c6b10u: goto label_4c6b10;
        case 0x4c6b14u: goto label_4c6b14;
        case 0x4c6b18u: goto label_4c6b18;
        case 0x4c6b1cu: goto label_4c6b1c;
        case 0x4c6b20u: goto label_4c6b20;
        case 0x4c6b24u: goto label_4c6b24;
        case 0x4c6b28u: goto label_4c6b28;
        case 0x4c6b2cu: goto label_4c6b2c;
        case 0x4c6b30u: goto label_4c6b30;
        case 0x4c6b34u: goto label_4c6b34;
        case 0x4c6b38u: goto label_4c6b38;
        case 0x4c6b3cu: goto label_4c6b3c;
        case 0x4c6b40u: goto label_4c6b40;
        case 0x4c6b44u: goto label_4c6b44;
        case 0x4c6b48u: goto label_4c6b48;
        case 0x4c6b4cu: goto label_4c6b4c;
        case 0x4c6b50u: goto label_4c6b50;
        case 0x4c6b54u: goto label_4c6b54;
        case 0x4c6b58u: goto label_4c6b58;
        case 0x4c6b5cu: goto label_4c6b5c;
        case 0x4c6b60u: goto label_4c6b60;
        case 0x4c6b64u: goto label_4c6b64;
        case 0x4c6b68u: goto label_4c6b68;
        case 0x4c6b6cu: goto label_4c6b6c;
        case 0x4c6b70u: goto label_4c6b70;
        case 0x4c6b74u: goto label_4c6b74;
        case 0x4c6b78u: goto label_4c6b78;
        case 0x4c6b7cu: goto label_4c6b7c;
        case 0x4c6b80u: goto label_4c6b80;
        case 0x4c6b84u: goto label_4c6b84;
        case 0x4c6b88u: goto label_4c6b88;
        case 0x4c6b8cu: goto label_4c6b8c;
        case 0x4c6b90u: goto label_4c6b90;
        case 0x4c6b94u: goto label_4c6b94;
        case 0x4c6b98u: goto label_4c6b98;
        case 0x4c6b9cu: goto label_4c6b9c;
        case 0x4c6ba0u: goto label_4c6ba0;
        case 0x4c6ba4u: goto label_4c6ba4;
        case 0x4c6ba8u: goto label_4c6ba8;
        case 0x4c6bacu: goto label_4c6bac;
        case 0x4c6bb0u: goto label_4c6bb0;
        case 0x4c6bb4u: goto label_4c6bb4;
        case 0x4c6bb8u: goto label_4c6bb8;
        case 0x4c6bbcu: goto label_4c6bbc;
        case 0x4c6bc0u: goto label_4c6bc0;
        case 0x4c6bc4u: goto label_4c6bc4;
        case 0x4c6bc8u: goto label_4c6bc8;
        case 0x4c6bccu: goto label_4c6bcc;
        case 0x4c6bd0u: goto label_4c6bd0;
        case 0x4c6bd4u: goto label_4c6bd4;
        case 0x4c6bd8u: goto label_4c6bd8;
        case 0x4c6bdcu: goto label_4c6bdc;
        case 0x4c6be0u: goto label_4c6be0;
        case 0x4c6be4u: goto label_4c6be4;
        case 0x4c6be8u: goto label_4c6be8;
        case 0x4c6becu: goto label_4c6bec;
        case 0x4c6bf0u: goto label_4c6bf0;
        case 0x4c6bf4u: goto label_4c6bf4;
        case 0x4c6bf8u: goto label_4c6bf8;
        case 0x4c6bfcu: goto label_4c6bfc;
        case 0x4c6c00u: goto label_4c6c00;
        case 0x4c6c04u: goto label_4c6c04;
        case 0x4c6c08u: goto label_4c6c08;
        case 0x4c6c0cu: goto label_4c6c0c;
        case 0x4c6c10u: goto label_4c6c10;
        case 0x4c6c14u: goto label_4c6c14;
        case 0x4c6c18u: goto label_4c6c18;
        case 0x4c6c1cu: goto label_4c6c1c;
        case 0x4c6c20u: goto label_4c6c20;
        case 0x4c6c24u: goto label_4c6c24;
        case 0x4c6c28u: goto label_4c6c28;
        case 0x4c6c2cu: goto label_4c6c2c;
        case 0x4c6c30u: goto label_4c6c30;
        case 0x4c6c34u: goto label_4c6c34;
        case 0x4c6c38u: goto label_4c6c38;
        case 0x4c6c3cu: goto label_4c6c3c;
        case 0x4c6c40u: goto label_4c6c40;
        case 0x4c6c44u: goto label_4c6c44;
        case 0x4c6c48u: goto label_4c6c48;
        case 0x4c6c4cu: goto label_4c6c4c;
        case 0x4c6c50u: goto label_4c6c50;
        case 0x4c6c54u: goto label_4c6c54;
        case 0x4c6c58u: goto label_4c6c58;
        case 0x4c6c5cu: goto label_4c6c5c;
        case 0x4c6c60u: goto label_4c6c60;
        case 0x4c6c64u: goto label_4c6c64;
        case 0x4c6c68u: goto label_4c6c68;
        case 0x4c6c6cu: goto label_4c6c6c;
        case 0x4c6c70u: goto label_4c6c70;
        case 0x4c6c74u: goto label_4c6c74;
        case 0x4c6c78u: goto label_4c6c78;
        case 0x4c6c7cu: goto label_4c6c7c;
        case 0x4c6c80u: goto label_4c6c80;
        case 0x4c6c84u: goto label_4c6c84;
        case 0x4c6c88u: goto label_4c6c88;
        case 0x4c6c8cu: goto label_4c6c8c;
        case 0x4c6c90u: goto label_4c6c90;
        case 0x4c6c94u: goto label_4c6c94;
        case 0x4c6c98u: goto label_4c6c98;
        case 0x4c6c9cu: goto label_4c6c9c;
        case 0x4c6ca0u: goto label_4c6ca0;
        case 0x4c6ca4u: goto label_4c6ca4;
        case 0x4c6ca8u: goto label_4c6ca8;
        case 0x4c6cacu: goto label_4c6cac;
        case 0x4c6cb0u: goto label_4c6cb0;
        case 0x4c6cb4u: goto label_4c6cb4;
        case 0x4c6cb8u: goto label_4c6cb8;
        case 0x4c6cbcu: goto label_4c6cbc;
        case 0x4c6cc0u: goto label_4c6cc0;
        case 0x4c6cc4u: goto label_4c6cc4;
        case 0x4c6cc8u: goto label_4c6cc8;
        case 0x4c6cccu: goto label_4c6ccc;
        case 0x4c6cd0u: goto label_4c6cd0;
        case 0x4c6cd4u: goto label_4c6cd4;
        case 0x4c6cd8u: goto label_4c6cd8;
        case 0x4c6cdcu: goto label_4c6cdc;
        case 0x4c6ce0u: goto label_4c6ce0;
        case 0x4c6ce4u: goto label_4c6ce4;
        case 0x4c6ce8u: goto label_4c6ce8;
        case 0x4c6cecu: goto label_4c6cec;
        case 0x4c6cf0u: goto label_4c6cf0;
        case 0x4c6cf4u: goto label_4c6cf4;
        case 0x4c6cf8u: goto label_4c6cf8;
        case 0x4c6cfcu: goto label_4c6cfc;
        case 0x4c6d00u: goto label_4c6d00;
        case 0x4c6d04u: goto label_4c6d04;
        case 0x4c6d08u: goto label_4c6d08;
        case 0x4c6d0cu: goto label_4c6d0c;
        case 0x4c6d10u: goto label_4c6d10;
        case 0x4c6d14u: goto label_4c6d14;
        case 0x4c6d18u: goto label_4c6d18;
        case 0x4c6d1cu: goto label_4c6d1c;
        case 0x4c6d20u: goto label_4c6d20;
        case 0x4c6d24u: goto label_4c6d24;
        case 0x4c6d28u: goto label_4c6d28;
        case 0x4c6d2cu: goto label_4c6d2c;
        case 0x4c6d30u: goto label_4c6d30;
        case 0x4c6d34u: goto label_4c6d34;
        case 0x4c6d38u: goto label_4c6d38;
        case 0x4c6d3cu: goto label_4c6d3c;
        case 0x4c6d40u: goto label_4c6d40;
        case 0x4c6d44u: goto label_4c6d44;
        case 0x4c6d48u: goto label_4c6d48;
        case 0x4c6d4cu: goto label_4c6d4c;
        case 0x4c6d50u: goto label_4c6d50;
        case 0x4c6d54u: goto label_4c6d54;
        case 0x4c6d58u: goto label_4c6d58;
        case 0x4c6d5cu: goto label_4c6d5c;
        case 0x4c6d60u: goto label_4c6d60;
        case 0x4c6d64u: goto label_4c6d64;
        case 0x4c6d68u: goto label_4c6d68;
        case 0x4c6d6cu: goto label_4c6d6c;
        case 0x4c6d70u: goto label_4c6d70;
        case 0x4c6d74u: goto label_4c6d74;
        case 0x4c6d78u: goto label_4c6d78;
        case 0x4c6d7cu: goto label_4c6d7c;
        case 0x4c6d80u: goto label_4c6d80;
        case 0x4c6d84u: goto label_4c6d84;
        case 0x4c6d88u: goto label_4c6d88;
        case 0x4c6d8cu: goto label_4c6d8c;
        case 0x4c6d90u: goto label_4c6d90;
        case 0x4c6d94u: goto label_4c6d94;
        case 0x4c6d98u: goto label_4c6d98;
        case 0x4c6d9cu: goto label_4c6d9c;
        case 0x4c6da0u: goto label_4c6da0;
        case 0x4c6da4u: goto label_4c6da4;
        case 0x4c6da8u: goto label_4c6da8;
        case 0x4c6dacu: goto label_4c6dac;
        case 0x4c6db0u: goto label_4c6db0;
        case 0x4c6db4u: goto label_4c6db4;
        case 0x4c6db8u: goto label_4c6db8;
        case 0x4c6dbcu: goto label_4c6dbc;
        case 0x4c6dc0u: goto label_4c6dc0;
        case 0x4c6dc4u: goto label_4c6dc4;
        case 0x4c6dc8u: goto label_4c6dc8;
        case 0x4c6dccu: goto label_4c6dcc;
        case 0x4c6dd0u: goto label_4c6dd0;
        case 0x4c6dd4u: goto label_4c6dd4;
        case 0x4c6dd8u: goto label_4c6dd8;
        case 0x4c6ddcu: goto label_4c6ddc;
        case 0x4c6de0u: goto label_4c6de0;
        case 0x4c6de4u: goto label_4c6de4;
        case 0x4c6de8u: goto label_4c6de8;
        case 0x4c6decu: goto label_4c6dec;
        case 0x4c6df0u: goto label_4c6df0;
        case 0x4c6df4u: goto label_4c6df4;
        case 0x4c6df8u: goto label_4c6df8;
        case 0x4c6dfcu: goto label_4c6dfc;
        case 0x4c6e00u: goto label_4c6e00;
        case 0x4c6e04u: goto label_4c6e04;
        case 0x4c6e08u: goto label_4c6e08;
        case 0x4c6e0cu: goto label_4c6e0c;
        case 0x4c6e10u: goto label_4c6e10;
        case 0x4c6e14u: goto label_4c6e14;
        case 0x4c6e18u: goto label_4c6e18;
        case 0x4c6e1cu: goto label_4c6e1c;
        case 0x4c6e20u: goto label_4c6e20;
        case 0x4c6e24u: goto label_4c6e24;
        case 0x4c6e28u: goto label_4c6e28;
        case 0x4c6e2cu: goto label_4c6e2c;
        case 0x4c6e30u: goto label_4c6e30;
        case 0x4c6e34u: goto label_4c6e34;
        case 0x4c6e38u: goto label_4c6e38;
        case 0x4c6e3cu: goto label_4c6e3c;
        case 0x4c6e40u: goto label_4c6e40;
        case 0x4c6e44u: goto label_4c6e44;
        case 0x4c6e48u: goto label_4c6e48;
        case 0x4c6e4cu: goto label_4c6e4c;
        case 0x4c6e50u: goto label_4c6e50;
        case 0x4c6e54u: goto label_4c6e54;
        case 0x4c6e58u: goto label_4c6e58;
        case 0x4c6e5cu: goto label_4c6e5c;
        case 0x4c6e60u: goto label_4c6e60;
        case 0x4c6e64u: goto label_4c6e64;
        case 0x4c6e68u: goto label_4c6e68;
        case 0x4c6e6cu: goto label_4c6e6c;
        case 0x4c6e70u: goto label_4c6e70;
        case 0x4c6e74u: goto label_4c6e74;
        case 0x4c6e78u: goto label_4c6e78;
        case 0x4c6e7cu: goto label_4c6e7c;
        case 0x4c6e80u: goto label_4c6e80;
        case 0x4c6e84u: goto label_4c6e84;
        case 0x4c6e88u: goto label_4c6e88;
        case 0x4c6e8cu: goto label_4c6e8c;
        case 0x4c6e90u: goto label_4c6e90;
        case 0x4c6e94u: goto label_4c6e94;
        case 0x4c6e98u: goto label_4c6e98;
        case 0x4c6e9cu: goto label_4c6e9c;
        case 0x4c6ea0u: goto label_4c6ea0;
        case 0x4c6ea4u: goto label_4c6ea4;
        case 0x4c6ea8u: goto label_4c6ea8;
        case 0x4c6eacu: goto label_4c6eac;
        case 0x4c6eb0u: goto label_4c6eb0;
        case 0x4c6eb4u: goto label_4c6eb4;
        case 0x4c6eb8u: goto label_4c6eb8;
        case 0x4c6ebcu: goto label_4c6ebc;
        case 0x4c6ec0u: goto label_4c6ec0;
        case 0x4c6ec4u: goto label_4c6ec4;
        case 0x4c6ec8u: goto label_4c6ec8;
        case 0x4c6eccu: goto label_4c6ecc;
        case 0x4c6ed0u: goto label_4c6ed0;
        case 0x4c6ed4u: goto label_4c6ed4;
        case 0x4c6ed8u: goto label_4c6ed8;
        case 0x4c6edcu: goto label_4c6edc;
        case 0x4c6ee0u: goto label_4c6ee0;
        case 0x4c6ee4u: goto label_4c6ee4;
        case 0x4c6ee8u: goto label_4c6ee8;
        case 0x4c6eecu: goto label_4c6eec;
        default: break;
    }

    ctx->pc = 0x4c6a20u;

label_4c6a20:
    // 0x4c6a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c6a24:
    // 0x4c6a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c6a28:
    // 0x4c6a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c6a2c:
    // 0x4c6a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c6a30:
    // 0x4c6a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c6a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c6a34:
    // 0x4c6a34: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4c6a38:
    if (ctx->pc == 0x4C6A38u) {
        ctx->pc = 0x4C6A38u;
            // 0x4c6a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A3Cu;
        goto label_4c6a3c;
    }
    ctx->pc = 0x4C6A34u;
    {
        const bool branch_taken_0x4c6a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6A34u;
            // 0x4c6a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a34) {
            ctx->pc = 0x4C6B68u;
            goto label_4c6b68;
        }
    }
    ctx->pc = 0x4C6A3Cu;
label_4c6a3c:
    // 0x4c6a3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c6a40:
    // 0x4c6a40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c6a44:
    // 0x4c6a44: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x4c6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
label_4c6a48:
    // 0x4c6a48: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4c6a4c:
    // 0x4c6a4c: 0x244217c8  addiu       $v0, $v0, 0x17C8
    ctx->pc = 0x4c6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6088));
label_4c6a50:
    // 0x4c6a50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c6a54:
    // 0x4c6a54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4c6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4c6a58:
    // 0x4c6a58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4c6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4c6a5c:
    // 0x4c6a5c: 0xc0407c0  jal         func_101F00
label_4c6a60:
    if (ctx->pc == 0x4C6A60u) {
        ctx->pc = 0x4C6A60u;
            // 0x4c6a60: 0x24a56b80  addiu       $a1, $a1, 0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
        ctx->pc = 0x4C6A64u;
        goto label_4c6a64;
    }
    ctx->pc = 0x4C6A5Cu;
    SET_GPR_U32(ctx, 31, 0x4C6A64u);
    ctx->pc = 0x4C6A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6A5Cu;
            // 0x4c6a60: 0x24a56b80  addiu       $a1, $a1, 0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6A64u; }
        if (ctx->pc != 0x4C6A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6A64u; }
        if (ctx->pc != 0x4C6A64u) { return; }
    }
    ctx->pc = 0x4C6A64u;
label_4c6a64:
    // 0x4c6a64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4c6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4c6a68:
    // 0x4c6a68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c6a6c:
    if (ctx->pc == 0x4C6A6Cu) {
        ctx->pc = 0x4C6A6Cu;
            // 0x4c6a6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4C6A70u;
        goto label_4c6a70;
    }
    ctx->pc = 0x4C6A68u;
    {
        const bool branch_taken_0x4c6a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6a68) {
            ctx->pc = 0x4C6A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6A68u;
            // 0x4c6a6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6A7Cu;
            goto label_4c6a7c;
        }
    }
    ctx->pc = 0x4C6A70u;
label_4c6a70:
    // 0x4c6a70: 0xc07507c  jal         func_1D41F0
label_4c6a74:
    if (ctx->pc == 0x4C6A74u) {
        ctx->pc = 0x4C6A74u;
            // 0x4c6a74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4C6A78u;
        goto label_4c6a78;
    }
    ctx->pc = 0x4C6A70u;
    SET_GPR_U32(ctx, 31, 0x4C6A78u);
    ctx->pc = 0x4C6A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6A70u;
            // 0x4c6a74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6A78u; }
        if (ctx->pc != 0x4C6A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6A78u; }
        if (ctx->pc != 0x4C6A78u) { return; }
    }
    ctx->pc = 0x4C6A78u;
label_4c6a78:
    // 0x4c6a78: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4c6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4c6a7c:
    // 0x4c6a7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c6a80:
    if (ctx->pc == 0x4C6A80u) {
        ctx->pc = 0x4C6A80u;
            // 0x4c6a80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4C6A84u;
        goto label_4c6a84;
    }
    ctx->pc = 0x4C6A7Cu;
    {
        const bool branch_taken_0x4c6a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6a7c) {
            ctx->pc = 0x4C6A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6A7Cu;
            // 0x4c6a80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6AACu;
            goto label_4c6aac;
        }
    }
    ctx->pc = 0x4C6A84u;
label_4c6a84:
    // 0x4c6a84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c6a88:
    if (ctx->pc == 0x4C6A88u) {
        ctx->pc = 0x4C6A8Cu;
        goto label_4c6a8c;
    }
    ctx->pc = 0x4C6A84u;
    {
        const bool branch_taken_0x4c6a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6a84) {
            ctx->pc = 0x4C6AA8u;
            goto label_4c6aa8;
        }
    }
    ctx->pc = 0x4C6A8Cu;
label_4c6a8c:
    // 0x4c6a8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c6a90:
    if (ctx->pc == 0x4C6A90u) {
        ctx->pc = 0x4C6A94u;
        goto label_4c6a94;
    }
    ctx->pc = 0x4C6A8Cu;
    {
        const bool branch_taken_0x4c6a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6a8c) {
            ctx->pc = 0x4C6AA8u;
            goto label_4c6aa8;
        }
    }
    ctx->pc = 0x4C6A94u;
label_4c6a94:
    // 0x4c6a94: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4c6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4c6a98:
    // 0x4c6a98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c6a9c:
    if (ctx->pc == 0x4C6A9Cu) {
        ctx->pc = 0x4C6AA0u;
        goto label_4c6aa0;
    }
    ctx->pc = 0x4C6A98u;
    {
        const bool branch_taken_0x4c6a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6a98) {
            ctx->pc = 0x4C6AA8u;
            goto label_4c6aa8;
        }
    }
    ctx->pc = 0x4C6AA0u;
label_4c6aa0:
    // 0x4c6aa0: 0xc0400a8  jal         func_1002A0
label_4c6aa4:
    if (ctx->pc == 0x4C6AA4u) {
        ctx->pc = 0x4C6AA8u;
        goto label_4c6aa8;
    }
    ctx->pc = 0x4C6AA0u;
    SET_GPR_U32(ctx, 31, 0x4C6AA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6AA8u; }
        if (ctx->pc != 0x4C6AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6AA8u; }
        if (ctx->pc != 0x4C6AA8u) { return; }
    }
    ctx->pc = 0x4C6AA8u;
label_4c6aa8:
    // 0x4c6aa8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4c6aac:
    // 0x4c6aac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c6ab0:
    if (ctx->pc == 0x4C6AB0u) {
        ctx->pc = 0x4C6AB0u;
            // 0x4c6ab0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4C6AB4u;
        goto label_4c6ab4;
    }
    ctx->pc = 0x4C6AACu;
    {
        const bool branch_taken_0x4c6aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6aac) {
            ctx->pc = 0x4C6AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6AACu;
            // 0x4c6ab0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6ADCu;
            goto label_4c6adc;
        }
    }
    ctx->pc = 0x4C6AB4u;
label_4c6ab4:
    // 0x4c6ab4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c6ab8:
    if (ctx->pc == 0x4C6AB8u) {
        ctx->pc = 0x4C6ABCu;
        goto label_4c6abc;
    }
    ctx->pc = 0x4C6AB4u;
    {
        const bool branch_taken_0x4c6ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6ab4) {
            ctx->pc = 0x4C6AD8u;
            goto label_4c6ad8;
        }
    }
    ctx->pc = 0x4C6ABCu;
label_4c6abc:
    // 0x4c6abc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c6ac0:
    if (ctx->pc == 0x4C6AC0u) {
        ctx->pc = 0x4C6AC4u;
        goto label_4c6ac4;
    }
    ctx->pc = 0x4C6ABCu;
    {
        const bool branch_taken_0x4c6abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6abc) {
            ctx->pc = 0x4C6AD8u;
            goto label_4c6ad8;
        }
    }
    ctx->pc = 0x4C6AC4u;
label_4c6ac4:
    // 0x4c6ac4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4c6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4c6ac8:
    // 0x4c6ac8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c6acc:
    if (ctx->pc == 0x4C6ACCu) {
        ctx->pc = 0x4C6AD0u;
        goto label_4c6ad0;
    }
    ctx->pc = 0x4C6AC8u;
    {
        const bool branch_taken_0x4c6ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6ac8) {
            ctx->pc = 0x4C6AD8u;
            goto label_4c6ad8;
        }
    }
    ctx->pc = 0x4C6AD0u;
label_4c6ad0:
    // 0x4c6ad0: 0xc0400a8  jal         func_1002A0
label_4c6ad4:
    if (ctx->pc == 0x4C6AD4u) {
        ctx->pc = 0x4C6AD8u;
        goto label_4c6ad8;
    }
    ctx->pc = 0x4C6AD0u;
    SET_GPR_U32(ctx, 31, 0x4C6AD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6AD8u; }
        if (ctx->pc != 0x4C6AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6AD8u; }
        if (ctx->pc != 0x4C6AD8u) { return; }
    }
    ctx->pc = 0x4C6AD8u;
label_4c6ad8:
    // 0x4c6ad8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4c6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4c6adc:
    // 0x4c6adc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c6ae0:
    if (ctx->pc == 0x4C6AE0u) {
        ctx->pc = 0x4C6AE4u;
        goto label_4c6ae4;
    }
    ctx->pc = 0x4C6ADCu;
    {
        const bool branch_taken_0x4c6adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6adc) {
            ctx->pc = 0x4C6AF8u;
            goto label_4c6af8;
        }
    }
    ctx->pc = 0x4C6AE4u;
label_4c6ae4:
    // 0x4c6ae4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c6ae8:
    // 0x4c6ae8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c6aec:
    // 0x4c6aec: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x4c6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_4c6af0:
    // 0x4c6af0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4c6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4c6af4:
    // 0x4c6af4: 0xac40aa00  sw          $zero, -0x5600($v0)
    ctx->pc = 0x4c6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945280), GPR_U32(ctx, 0));
label_4c6af8:
    // 0x4c6af8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4c6afc:
    if (ctx->pc == 0x4C6AFCu) {
        ctx->pc = 0x4C6AFCu;
            // 0x4c6afc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4C6B00u;
        goto label_4c6b00;
    }
    ctx->pc = 0x4C6AF8u;
    {
        const bool branch_taken_0x4c6af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6af8) {
            ctx->pc = 0x4C6AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6AF8u;
            // 0x4c6afc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6B54u;
            goto label_4c6b54;
        }
    }
    ctx->pc = 0x4C6B00u;
label_4c6b00:
    // 0x4c6b00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c6b04:
    // 0x4c6b04: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4c6b08:
    // 0x4c6b08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c6b0c:
    // 0x4c6b0c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4c6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4c6b10:
    // 0x4c6b10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c6b14:
    if (ctx->pc == 0x4C6B14u) {
        ctx->pc = 0x4C6B14u;
            // 0x4c6b14: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4C6B18u;
        goto label_4c6b18;
    }
    ctx->pc = 0x4C6B10u;
    {
        const bool branch_taken_0x4c6b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6b10) {
            ctx->pc = 0x4C6B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B10u;
            // 0x4c6b14: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6B2Cu;
            goto label_4c6b2c;
        }
    }
    ctx->pc = 0x4C6B18u;
label_4c6b18:
    // 0x4c6b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c6b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c6b1c:
    // 0x4c6b1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c6b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c6b20:
    // 0x4c6b20: 0x320f809  jalr        $t9
label_4c6b24:
    if (ctx->pc == 0x4C6B24u) {
        ctx->pc = 0x4C6B24u;
            // 0x4c6b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C6B28u;
        goto label_4c6b28;
    }
    ctx->pc = 0x4C6B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6B28u);
        ctx->pc = 0x4C6B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B20u;
            // 0x4c6b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6B28u; }
            if (ctx->pc != 0x4C6B28u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6B28u;
label_4c6b28:
    // 0x4c6b28: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4c6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4c6b2c:
    // 0x4c6b2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c6b30:
    if (ctx->pc == 0x4C6B30u) {
        ctx->pc = 0x4C6B30u;
            // 0x4c6b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B34u;
        goto label_4c6b34;
    }
    ctx->pc = 0x4C6B2Cu;
    {
        const bool branch_taken_0x4c6b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6b2c) {
            ctx->pc = 0x4C6B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B2Cu;
            // 0x4c6b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6B48u;
            goto label_4c6b48;
        }
    }
    ctx->pc = 0x4C6B34u;
label_4c6b34:
    // 0x4c6b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c6b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c6b38:
    // 0x4c6b38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c6b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c6b3c:
    // 0x4c6b3c: 0x320f809  jalr        $t9
label_4c6b40:
    if (ctx->pc == 0x4C6B40u) {
        ctx->pc = 0x4C6B40u;
            // 0x4c6b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C6B44u;
        goto label_4c6b44;
    }
    ctx->pc = 0x4C6B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6B44u);
        ctx->pc = 0x4C6B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B3Cu;
            // 0x4c6b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6B44u; }
            if (ctx->pc != 0x4C6B44u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6B44u;
label_4c6b44:
    // 0x4c6b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c6b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c6b48:
    // 0x4c6b48: 0xc075bf8  jal         func_1D6FE0
label_4c6b4c:
    if (ctx->pc == 0x4C6B4Cu) {
        ctx->pc = 0x4C6B4Cu;
            // 0x4c6b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B50u;
        goto label_4c6b50;
    }
    ctx->pc = 0x4C6B48u;
    SET_GPR_U32(ctx, 31, 0x4C6B50u);
    ctx->pc = 0x4C6B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B48u;
            // 0x4c6b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6B50u; }
        if (ctx->pc != 0x4C6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6B50u; }
        if (ctx->pc != 0x4C6B50u) { return; }
    }
    ctx->pc = 0x4C6B50u;
label_4c6b50:
    // 0x4c6b50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c6b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c6b54:
    // 0x4c6b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c6b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c6b58:
    // 0x4c6b58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c6b5c:
    if (ctx->pc == 0x4C6B5Cu) {
        ctx->pc = 0x4C6B5Cu;
            // 0x4c6b5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B60u;
        goto label_4c6b60;
    }
    ctx->pc = 0x4C6B58u;
    {
        const bool branch_taken_0x4c6b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c6b58) {
            ctx->pc = 0x4C6B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B58u;
            // 0x4c6b5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6B6Cu;
            goto label_4c6b6c;
        }
    }
    ctx->pc = 0x4C6B60u;
label_4c6b60:
    // 0x4c6b60: 0xc0400a8  jal         func_1002A0
label_4c6b64:
    if (ctx->pc == 0x4C6B64u) {
        ctx->pc = 0x4C6B64u;
            // 0x4c6b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B68u;
        goto label_4c6b68;
    }
    ctx->pc = 0x4C6B60u;
    SET_GPR_U32(ctx, 31, 0x4C6B68u);
    ctx->pc = 0x4C6B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B60u;
            // 0x4c6b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6B68u; }
        if (ctx->pc != 0x4C6B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6B68u; }
        if (ctx->pc != 0x4C6B68u) { return; }
    }
    ctx->pc = 0x4C6B68u;
label_4c6b68:
    // 0x4c6b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c6b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c6b6c:
    // 0x4c6b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c6b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c6b70:
    // 0x4c6b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c6b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c6b74:
    // 0x4c6b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c6b78:
    // 0x4c6b78: 0x3e00008  jr          $ra
label_4c6b7c:
    if (ctx->pc == 0x4C6B7Cu) {
        ctx->pc = 0x4C6B7Cu;
            // 0x4c6b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C6B80u;
        goto label_4c6b80;
    }
    ctx->pc = 0x4C6B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B78u;
            // 0x4c6b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6B80u;
label_4c6b80:
    // 0x4c6b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c6b84:
    // 0x4c6b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c6b88:
    // 0x4c6b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c6b8c:
    // 0x4c6b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c6b90:
    // 0x4c6b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c6b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c6b94:
    // 0x4c6b94: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_4c6b98:
    if (ctx->pc == 0x4C6B98u) {
        ctx->pc = 0x4C6B98u;
            // 0x4c6b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B9Cu;
        goto label_4c6b9c;
    }
    ctx->pc = 0x4C6B94u;
    {
        const bool branch_taken_0x4c6b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6B94u;
            // 0x4c6b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b94) {
            ctx->pc = 0x4C6BF4u;
            goto label_4c6bf4;
        }
    }
    ctx->pc = 0x4C6B9Cu;
label_4c6b9c:
    // 0x4c6b9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c6ba0:
    // 0x4c6ba0: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x4c6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_4c6ba4:
    // 0x4c6ba4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c6ba8:
    // 0x4c6ba8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c6ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c6bac:
    // 0x4c6bac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c6bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c6bb0:
    // 0x4c6bb0: 0x320f809  jalr        $t9
label_4c6bb4:
    if (ctx->pc == 0x4C6BB4u) {
        ctx->pc = 0x4C6BB8u;
        goto label_4c6bb8;
    }
    ctx->pc = 0x4C6BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6BB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6BB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6BB8u; }
            if (ctx->pc != 0x4C6BB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6BB8u;
label_4c6bb8:
    // 0x4c6bb8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4c6bbc:
    if (ctx->pc == 0x4C6BBCu) {
        ctx->pc = 0x4C6BBCu;
            // 0x4c6bbc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4C6BC0u;
        goto label_4c6bc0;
    }
    ctx->pc = 0x4C6BB8u;
    {
        const bool branch_taken_0x4c6bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6bb8) {
            ctx->pc = 0x4C6BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6BB8u;
            // 0x4c6bbc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6BE0u;
            goto label_4c6be0;
        }
    }
    ctx->pc = 0x4C6BC0u;
label_4c6bc0:
    // 0x4c6bc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c6bc4:
    // 0x4c6bc4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4c6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4c6bc8:
    // 0x4c6bc8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4c6bcc:
    if (ctx->pc == 0x4C6BCCu) {
        ctx->pc = 0x4C6BCCu;
            // 0x4c6bcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4C6BD0u;
        goto label_4c6bd0;
    }
    ctx->pc = 0x4C6BC8u;
    {
        const bool branch_taken_0x4c6bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6BC8u;
            // 0x4c6bcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6bc8) {
            ctx->pc = 0x4C6BDCu;
            goto label_4c6bdc;
        }
    }
    ctx->pc = 0x4C6BD0u;
label_4c6bd0:
    // 0x4c6bd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c6bd4:
    // 0x4c6bd4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4c6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4c6bd8:
    // 0x4c6bd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c6bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c6bdc:
    // 0x4c6bdc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c6bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c6be0:
    // 0x4c6be0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c6be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c6be4:
    // 0x4c6be4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c6be8:
    if (ctx->pc == 0x4C6BE8u) {
        ctx->pc = 0x4C6BE8u;
            // 0x4c6be8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6BECu;
        goto label_4c6bec;
    }
    ctx->pc = 0x4C6BE4u;
    {
        const bool branch_taken_0x4c6be4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c6be4) {
            ctx->pc = 0x4C6BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6BE4u;
            // 0x4c6be8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6BF8u;
            goto label_4c6bf8;
        }
    }
    ctx->pc = 0x4C6BECu;
label_4c6bec:
    // 0x4c6bec: 0xc0400a8  jal         func_1002A0
label_4c6bf0:
    if (ctx->pc == 0x4C6BF0u) {
        ctx->pc = 0x4C6BF0u;
            // 0x4c6bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6BF4u;
        goto label_4c6bf4;
    }
    ctx->pc = 0x4C6BECu;
    SET_GPR_U32(ctx, 31, 0x4C6BF4u);
    ctx->pc = 0x4C6BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6BECu;
            // 0x4c6bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6BF4u; }
        if (ctx->pc != 0x4C6BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6BF4u; }
        if (ctx->pc != 0x4C6BF4u) { return; }
    }
    ctx->pc = 0x4C6BF4u;
label_4c6bf4:
    // 0x4c6bf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c6bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c6bf8:
    // 0x4c6bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c6bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c6bfc:
    // 0x4c6bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c6bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c6c00:
    // 0x4c6c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c6c04:
    // 0x4c6c04: 0x3e00008  jr          $ra
label_4c6c08:
    if (ctx->pc == 0x4C6C08u) {
        ctx->pc = 0x4C6C08u;
            // 0x4c6c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C6C0Cu;
        goto label_4c6c0c;
    }
    ctx->pc = 0x4C6C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6C04u;
            // 0x4c6c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6C0Cu;
label_4c6c0c:
    // 0x4c6c0c: 0x0  nop
    ctx->pc = 0x4c6c0cu;
    // NOP
label_4c6c10:
    // 0x4c6c10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4c6c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4c6c14:
    // 0x4c6c14: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c6c18:
    // 0x4c6c18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4c6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4c6c1c:
    // 0x4c6c1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4c6c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4c6c20:
    // 0x4c6c20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4c6c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4c6c24:
    // 0x4c6c24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4c6c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4c6c28:
    // 0x4c6c28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c6c2c:
    // 0x4c6c2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c6c30:
    // 0x4c6c30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c6c34:
    // 0x4c6c34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c6c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c6c38:
    // 0x4c6c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c6c3c:
    // 0x4c6c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c6c40:
    // 0x4c6c40: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4c6c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c6c44:
    // 0x4c6c44: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4c6c44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c6c48:
    // 0x4c6c48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c6c4c:
    // 0x4c6c4c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4c6c50:
    if (ctx->pc == 0x4C6C50u) {
        ctx->pc = 0x4C6C50u;
            // 0x4c6c50: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6C54u;
        goto label_4c6c54;
    }
    ctx->pc = 0x4C6C4Cu;
    {
        const bool branch_taken_0x4c6c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C6C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6C4Cu;
            // 0x4c6c50: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6c4c) {
            ctx->pc = 0x4C6C90u;
            goto label_4c6c90;
        }
    }
    ctx->pc = 0x4C6C54u;
label_4c6c54:
    // 0x4c6c54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c6c58:
    // 0x4c6c58: 0x50a30054  beql        $a1, $v1, . + 4 + (0x54 << 2)
label_4c6c5c:
    if (ctx->pc == 0x4C6C5Cu) {
        ctx->pc = 0x4C6C5Cu;
            // 0x4c6c5c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4C6C60u;
        goto label_4c6c60;
    }
    ctx->pc = 0x4C6C58u;
    {
        const bool branch_taken_0x4c6c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c6c58) {
            ctx->pc = 0x4C6C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6C58u;
            // 0x4c6c5c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6DACu;
            goto label_4c6dac;
        }
    }
    ctx->pc = 0x4C6C60u;
label_4c6c60:
    // 0x4c6c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c6c64:
    // 0x4c6c64: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4c6c68:
    if (ctx->pc == 0x4C6C68u) {
        ctx->pc = 0x4C6C68u;
            // 0x4c6c68: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C6C6Cu;
        goto label_4c6c6c;
    }
    ctx->pc = 0x4C6C64u;
    {
        const bool branch_taken_0x4c6c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c6c64) {
            ctx->pc = 0x4C6C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6C64u;
            // 0x4c6c68: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6C74u;
            goto label_4c6c74;
        }
    }
    ctx->pc = 0x4C6C6Cu;
label_4c6c6c:
    // 0x4c6c6c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_4c6c70:
    if (ctx->pc == 0x4C6C70u) {
        ctx->pc = 0x4C6C74u;
        goto label_4c6c74;
    }
    ctx->pc = 0x4C6C6Cu;
    {
        const bool branch_taken_0x4c6c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6c6c) {
            ctx->pc = 0x4C6DA8u;
            goto label_4c6da8;
        }
    }
    ctx->pc = 0x4C6C74u;
label_4c6c74:
    // 0x4c6c74: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4c6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4c6c78:
    // 0x4c6c78: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4c6c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4c6c7c:
    // 0x4c6c7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c6c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c6c80:
    // 0x4c6c80: 0x320f809  jalr        $t9
label_4c6c84:
    if (ctx->pc == 0x4C6C84u) {
        ctx->pc = 0x4C6C84u;
            // 0x4c6c84: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4C6C88u;
        goto label_4c6c88;
    }
    ctx->pc = 0x4C6C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6C88u);
        ctx->pc = 0x4C6C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6C80u;
            // 0x4c6c84: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6C88u; }
            if (ctx->pc != 0x4C6C88u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6C88u;
label_4c6c88:
    // 0x4c6c88: 0x10000047  b           . + 4 + (0x47 << 2)
label_4c6c8c:
    if (ctx->pc == 0x4C6C8Cu) {
        ctx->pc = 0x4C6C90u;
        goto label_4c6c90;
    }
    ctx->pc = 0x4C6C88u;
    {
        const bool branch_taken_0x4c6c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6c88) {
            ctx->pc = 0x4C6DA8u;
            goto label_4c6da8;
        }
    }
    ctx->pc = 0x4C6C90u;
label_4c6c90:
    // 0x4c6c90: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x4c6c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4c6c94:
    // 0x4c6c94: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_4c6c98:
    if (ctx->pc == 0x4C6C98u) {
        ctx->pc = 0x4C6C9Cu;
        goto label_4c6c9c;
    }
    ctx->pc = 0x4C6C94u;
    {
        const bool branch_taken_0x4c6c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6c94) {
            ctx->pc = 0x4C6DA8u;
            goto label_4c6da8;
        }
    }
    ctx->pc = 0x4C6C9Cu;
label_4c6c9c:
    // 0x4c6c9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c6ca0:
    // 0x4c6ca0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c6ca4:
    // 0x4c6ca4: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4c6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c6ca8:
    // 0x4c6ca8: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x4c6ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4c6cac:
    // 0x4c6cac: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4c6cacu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4c6cb0:
    // 0x4c6cb0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4c6cb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6cb4:
    // 0x4c6cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c6cb8:
    // 0x4c6cb8: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4c6cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4c6cbc:
    // 0x4c6cbc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4c6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4c6cc0:
    // 0x4c6cc0: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4c6cc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4c6cc4:
    // 0x4c6cc4: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4c6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4c6cc8:
    // 0x4c6cc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4c6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c6ccc:
    // 0x4c6ccc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c6cd0:
    // 0x4c6cd0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4c6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4c6cd4:
    // 0x4c6cd4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4c6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4c6cd8:
    // 0x4c6cd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c6cdc:
    // 0x4c6cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c6ce0:
    // 0x4c6ce0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4c6ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c6ce4:
    // 0x4c6ce4: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x4c6ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4c6ce8:
    // 0x4c6ce8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_4c6cec:
    if (ctx->pc == 0x4C6CECu) {
        ctx->pc = 0x4C6CECu;
            // 0x4c6cec: 0x24960010  addiu       $s6, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x4C6CF0u;
        goto label_4c6cf0;
    }
    ctx->pc = 0x4C6CE8u;
    {
        const bool branch_taken_0x4c6ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C6CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6CE8u;
            // 0x4c6cec: 0x24960010  addiu       $s6, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6ce8) {
            ctx->pc = 0x4C6CF4u;
            goto label_4c6cf4;
        }
    }
    ctx->pc = 0x4C6CF0u;
label_4c6cf0:
    // 0x4c6cf0: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x4c6cf0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4c6cf4:
    // 0x4c6cf4: 0xc04e738  jal         func_139CE0
label_4c6cf8:
    if (ctx->pc == 0x4C6CF8u) {
        ctx->pc = 0x4C6CF8u;
            // 0x4c6cf8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x4C6CFCu;
        goto label_4c6cfc;
    }
    ctx->pc = 0x4C6CF4u;
    SET_GPR_U32(ctx, 31, 0x4C6CFCu);
    ctx->pc = 0x4C6CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6CF4u;
            // 0x4c6cf8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6CFCu; }
        if (ctx->pc != 0x4C6CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6CFCu; }
        if (ctx->pc != 0x4C6CFCu) { return; }
    }
    ctx->pc = 0x4C6CFCu;
label_4c6cfc:
    // 0x4c6cfc: 0x57c00006  bnel        $fp, $zero, . + 4 + (0x6 << 2)
label_4c6d00:
    if (ctx->pc == 0x4C6D00u) {
        ctx->pc = 0x4C6D00u;
            // 0x4c6d00: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4C6D04u;
        goto label_4c6d04;
    }
    ctx->pc = 0x4C6CFCu;
    {
        const bool branch_taken_0x4c6cfc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6cfc) {
            ctx->pc = 0x4C6D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6CFCu;
            // 0x4c6d00: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6D18u;
            goto label_4c6d18;
        }
    }
    ctx->pc = 0x4C6D04u;
label_4c6d04:
    // 0x4c6d04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c6d08:
    // 0x4c6d08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c6d0c:
    // 0x4c6d0c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4c6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4c6d10:
    // 0x4c6d10: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4c6d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4c6d14:
    // 0x4c6d14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4c6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c6d18:
    // 0x4c6d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c6d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d1c:
    // 0x4c6d1c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4c6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4c6d20:
    // 0x4c6d20: 0xc04e4a4  jal         func_139290
label_4c6d24:
    if (ctx->pc == 0x4C6D24u) {
        ctx->pc = 0x4C6D24u;
            // 0x4c6d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D28u;
        goto label_4c6d28;
    }
    ctx->pc = 0x4C6D20u;
    SET_GPR_U32(ctx, 31, 0x4C6D28u);
    ctx->pc = 0x4C6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6D20u;
            // 0x4c6d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6D28u; }
        if (ctx->pc != 0x4C6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6D28u; }
        if (ctx->pc != 0x4C6D28u) { return; }
    }
    ctx->pc = 0x4C6D28u;
label_4c6d28:
    // 0x4c6d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c6d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d2c:
    // 0x4c6d2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c6d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d30:
    // 0x4c6d30: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x4c6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4c6d34:
    // 0x4c6d34: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c6d38:
    // 0x4c6d38: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4c6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c6d3c:
    // 0x4c6d3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c6d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d40:
    // 0x4c6d40: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4c6d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d44:
    // 0x4c6d44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4c6d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d48:
    // 0x4c6d48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4c6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4c6d4c:
    // 0x4c6d4c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4c6d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c6d50:
    // 0x4c6d50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c6d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c6d54:
    // 0x4c6d54: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4c6d54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4c6d58:
    // 0x4c6d58: 0xc131ce0  jal         func_4C7380
label_4c6d5c:
    if (ctx->pc == 0x4C6D5Cu) {
        ctx->pc = 0x4C6D5Cu;
            // 0x4c6d5c: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4C6D60u;
        goto label_4c6d60;
    }
    ctx->pc = 0x4C6D58u;
    SET_GPR_U32(ctx, 31, 0x4C6D60u);
    ctx->pc = 0x4C6D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6D58u;
            // 0x4c6d5c: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7380u;
    if (runtime->hasFunction(0x4C7380u)) {
        auto targetFn = runtime->lookupFunction(0x4C7380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6D60u; }
        if (ctx->pc != 0x4C6D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7380_0x4c7380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6D60u; }
        if (ctx->pc != 0x4C6D60u) { return; }
    }
    ctx->pc = 0x4C6D60u;
label_4c6d60:
    // 0x4c6d60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c6d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c6d64:
    // 0x4c6d64: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4c6d64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c6d68:
    // 0x4c6d68: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4c6d6c:
    if (ctx->pc == 0x4C6D6Cu) {
        ctx->pc = 0x4C6D6Cu;
            // 0x4c6d6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C6D70u;
        goto label_4c6d70;
    }
    ctx->pc = 0x4C6D68u;
    {
        const bool branch_taken_0x4c6d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6D68u;
            // 0x4c6d6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d68) {
            ctx->pc = 0x4C6D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c6d30;
        }
    }
    ctx->pc = 0x4C6D70u;
label_4c6d70:
    // 0x4c6d70: 0x17c0000d  bnez        $fp, . + 4 + (0xD << 2)
label_4c6d74:
    if (ctx->pc == 0x4C6D74u) {
        ctx->pc = 0x4C6D78u;
        goto label_4c6d78;
    }
    ctx->pc = 0x4C6D70u;
    {
        const bool branch_taken_0x4c6d70 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6d70) {
            ctx->pc = 0x4C6DA8u;
            goto label_4c6da8;
        }
    }
    ctx->pc = 0x4C6D78u;
label_4c6d78:
    // 0x4c6d78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c6d7c:
    // 0x4c6d7c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4c6d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c6d80:
    // 0x4c6d80: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4c6d84:
    if (ctx->pc == 0x4C6D84u) {
        ctx->pc = 0x4C6D84u;
            // 0x4c6d84: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4C6D88u;
        goto label_4c6d88;
    }
    ctx->pc = 0x4C6D80u;
    {
        const bool branch_taken_0x4c6d80 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4C6D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6D80u;
            // 0x4c6d84: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d80) {
            ctx->pc = 0x4C6DA8u;
            goto label_4c6da8;
        }
    }
    ctx->pc = 0x4C6D88u;
label_4c6d88:
    // 0x4c6d88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c6d8c:
    // 0x4c6d8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c6d90:
    // 0x4c6d90: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4c6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4c6d94:
    // 0x4c6d94: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4c6d94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4c6d98:
    // 0x4c6d98: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4c6d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4c6d9c:
    // 0x4c6d9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4c6d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6da0:
    // 0x4c6da0: 0xc055d28  jal         func_1574A0
label_4c6da4:
    if (ctx->pc == 0x4C6DA4u) {
        ctx->pc = 0x4C6DA4u;
            // 0x4c6da4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6DA8u;
        goto label_4c6da8;
    }
    ctx->pc = 0x4C6DA0u;
    SET_GPR_U32(ctx, 31, 0x4C6DA8u);
    ctx->pc = 0x4C6DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6DA0u;
            // 0x4c6da4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6DA8u; }
        if (ctx->pc != 0x4C6DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6DA8u; }
        if (ctx->pc != 0x4C6DA8u) { return; }
    }
    ctx->pc = 0x4C6DA8u;
label_4c6da8:
    // 0x4c6da8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4c6da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4c6dac:
    // 0x4c6dac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4c6dacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4c6db0:
    // 0x4c6db0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4c6db0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c6db4:
    // 0x4c6db4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4c6db4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c6db8:
    // 0x4c6db8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c6db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c6dbc:
    // 0x4c6dbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c6dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c6dc0:
    // 0x4c6dc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c6dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c6dc4:
    // 0x4c6dc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c6dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c6dc8:
    // 0x4c6dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c6dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c6dcc:
    // 0x4c6dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c6dd0:
    // 0x4c6dd0: 0x3e00008  jr          $ra
label_4c6dd4:
    if (ctx->pc == 0x4C6DD4u) {
        ctx->pc = 0x4C6DD4u;
            // 0x4c6dd4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4C6DD8u;
        goto label_4c6dd8;
    }
    ctx->pc = 0x4C6DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6DD0u;
            // 0x4c6dd4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6DD8u;
label_4c6dd8:
    // 0x4c6dd8: 0x0  nop
    ctx->pc = 0x4c6dd8u;
    // NOP
label_4c6ddc:
    // 0x4c6ddc: 0x0  nop
    ctx->pc = 0x4c6ddcu;
    // NOP
label_4c6de0:
    // 0x4c6de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c6de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c6de4:
    // 0x4c6de4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c6de8:
    // 0x4c6de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c6de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c6dec:
    // 0x4c6dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c6df0:
    // 0x4c6df0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4c6df0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c6df4:
    // 0x4c6df4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4c6df8:
    if (ctx->pc == 0x4C6DF8u) {
        ctx->pc = 0x4C6DF8u;
            // 0x4c6df8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6DFCu;
        goto label_4c6dfc;
    }
    ctx->pc = 0x4C6DF4u;
    {
        const bool branch_taken_0x4c6df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6DF4u;
            // 0x4c6df8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6df4) {
            ctx->pc = 0x4C6E28u;
            goto label_4c6e28;
        }
    }
    ctx->pc = 0x4C6DFCu;
label_4c6dfc:
    // 0x4c6dfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c6dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c6e00:
    // 0x4c6e00: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4c6e04:
    if (ctx->pc == 0x4C6E04u) {
        ctx->pc = 0x4C6E04u;
            // 0x4c6e04: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C6E08u;
        goto label_4c6e08;
    }
    ctx->pc = 0x4C6E00u;
    {
        const bool branch_taken_0x4c6e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c6e00) {
            ctx->pc = 0x4C6E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6E00u;
            // 0x4c6e04: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6E1Cu;
            goto label_4c6e1c;
        }
    }
    ctx->pc = 0x4C6E08u;
label_4c6e08:
    // 0x4c6e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c6e0c:
    // 0x4c6e0c: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_4c6e10:
    if (ctx->pc == 0x4C6E10u) {
        ctx->pc = 0x4C6E14u;
        goto label_4c6e14;
    }
    ctx->pc = 0x4C6E0Cu;
    {
        const bool branch_taken_0x4c6e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c6e0c) {
            ctx->pc = 0x4C6EE0u;
            goto label_4c6ee0;
        }
    }
    ctx->pc = 0x4C6E14u;
label_4c6e14:
    // 0x4c6e14: 0x10000032  b           . + 4 + (0x32 << 2)
label_4c6e18:
    if (ctx->pc == 0x4C6E18u) {
        ctx->pc = 0x4C6E1Cu;
        goto label_4c6e1c;
    }
    ctx->pc = 0x4C6E14u;
    {
        const bool branch_taken_0x4c6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6e14) {
            ctx->pc = 0x4C6EE0u;
            goto label_4c6ee0;
        }
    }
    ctx->pc = 0x4C6E1Cu;
label_4c6e1c:
    // 0x4c6e1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4c6e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4c6e20:
    // 0x4c6e20: 0x320f809  jalr        $t9
label_4c6e24:
    if (ctx->pc == 0x4C6E24u) {
        ctx->pc = 0x4C6E28u;
        goto label_4c6e28;
    }
    ctx->pc = 0x4C6E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6E28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6E28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6E28u; }
            if (ctx->pc != 0x4C6E28u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6E28u;
label_4c6e28:
    // 0x4c6e28: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x4c6e28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4c6e2c:
    // 0x4c6e2c: 0x1120002c  beqz        $t1, . + 4 + (0x2C << 2)
label_4c6e30:
    if (ctx->pc == 0x4C6E30u) {
        ctx->pc = 0x4C6E34u;
        goto label_4c6e34;
    }
    ctx->pc = 0x4C6E2Cu;
    {
        const bool branch_taken_0x4c6e2c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6e2c) {
            ctx->pc = 0x4C6EE0u;
            goto label_4c6ee0;
        }
    }
    ctx->pc = 0x4C6E34u;
label_4c6e34:
    // 0x4c6e34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4c6e34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6e38:
    // 0x4c6e38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4c6e38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6e3c:
    // 0x4c6e3c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x4c6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_4c6e40:
    // 0x4c6e40: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4c6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4c6e44:
    // 0x4c6e44: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x4c6e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_4c6e48:
    // 0x4c6e48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4c6e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c6e4c:
    // 0x4c6e4c: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x4c6e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4c6e50:
    // 0x4c6e50: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x4c6e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_4c6e54:
    // 0x4c6e54: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4c6e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c6e58:
    // 0x4c6e58: 0x8ce60050  lw          $a2, 0x50($a3)
    ctx->pc = 0x4c6e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_4c6e5c:
    // 0x4c6e5c: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
label_4c6e60:
    if (ctx->pc == 0x4C6E60u) {
        ctx->pc = 0x4C6E64u;
        goto label_4c6e64;
    }
    ctx->pc = 0x4C6E5Cu;
    {
        const bool branch_taken_0x4c6e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x4c6e5c) {
            ctx->pc = 0x4C6E80u;
            goto label_4c6e80;
        }
    }
    ctx->pc = 0x4C6E64u;
label_4c6e64:
    // 0x4c6e64: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_4c6e68:
    if (ctx->pc == 0x4C6E68u) {
        ctx->pc = 0x4C6E6Cu;
        goto label_4c6e6c;
    }
    ctx->pc = 0x4C6E64u;
    {
        const bool branch_taken_0x4c6e64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6e64) {
            ctx->pc = 0x4C6E78u;
            goto label_4c6e78;
        }
    }
    ctx->pc = 0x4C6E6Cu;
label_4c6e6c:
    // 0x4c6e6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c6e70:
    if (ctx->pc == 0x4C6E70u) {
        ctx->pc = 0x4C6E74u;
        goto label_4c6e74;
    }
    ctx->pc = 0x4C6E6Cu;
    {
        const bool branch_taken_0x4c6e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6e6c) {
            ctx->pc = 0x4C6E80u;
            goto label_4c6e80;
        }
    }
    ctx->pc = 0x4C6E74u;
label_4c6e74:
    // 0x4c6e74: 0x0  nop
    ctx->pc = 0x4c6e74u;
    // NOP
label_4c6e78:
    // 0x4c6e78: 0xace80050  sw          $t0, 0x50($a3)
    ctx->pc = 0x4c6e78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 8));
label_4c6e7c:
    // 0x4c6e7c: 0x0  nop
    ctx->pc = 0x4c6e7cu;
    // NOP
label_4c6e80:
    // 0x4c6e80: 0x8e070074  lw          $a3, 0x74($s0)
    ctx->pc = 0x4c6e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4c6e84:
    // 0x4c6e84: 0x8ca6aa00  lw          $a2, -0x5600($a1)
    ctx->pc = 0x4c6e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945280)));
label_4c6e88:
    // 0x4c6e88: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x4c6e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_4c6e8c:
    // 0x4c6e8c: 0x8cc60098  lw          $a2, 0x98($a2)
    ctx->pc = 0x4c6e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
label_4c6e90:
    // 0x4c6e90: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_4c6e94:
    if (ctx->pc == 0x4C6E94u) {
        ctx->pc = 0x4C6E94u;
            // 0x4c6e94: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x4C6E98u;
        goto label_4c6e98;
    }
    ctx->pc = 0x4C6E90u;
    {
        const bool branch_taken_0x4c6e90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6E90u;
            // 0x4c6e94: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6e90) {
            ctx->pc = 0x4C6ED0u;
            goto label_4c6ed0;
        }
    }
    ctx->pc = 0x4C6E98u;
label_4c6e98:
    // 0x4c6e98: 0x8c868a08  lw          $a2, -0x75F8($a0)
    ctx->pc = 0x4c6e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_4c6e9c:
    // 0x4c6e9c: 0xc4e00054  lwc1        $f0, 0x54($a3)
    ctx->pc = 0x4c6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c6ea0:
    // 0x4c6ea0: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x4c6ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c6ea4:
    // 0x4c6ea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4c6ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4c6ea8:
    // 0x4c6ea8: 0xe4e00054  swc1        $f0, 0x54($a3)
    ctx->pc = 0x4c6ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
label_4c6eac:
    // 0x4c6eac: 0x8c66aa00  lw          $a2, -0x5600($v1)
    ctx->pc = 0x4c6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945280)));
label_4c6eb0:
    // 0x4c6eb0: 0xc4e00054  lwc1        $f0, 0x54($a3)
    ctx->pc = 0x4c6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c6eb4:
    // 0x4c6eb4: 0x8cc60098  lw          $a2, 0x98($a2)
    ctx->pc = 0x4c6eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
label_4c6eb8:
    // 0x4c6eb8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4c6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c6ebc:
    // 0x4c6ebc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c6ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c6ec0:
    // 0x4c6ec0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4c6ec4:
    if (ctx->pc == 0x4C6EC4u) {
        ctx->pc = 0x4C6EC8u;
        goto label_4c6ec8;
    }
    ctx->pc = 0x4C6EC0u;
    {
        const bool branch_taken_0x4c6ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c6ec0) {
            ctx->pc = 0x4C6ED0u;
            goto label_4c6ed0;
        }
    }
    ctx->pc = 0x4C6EC8u;
label_4c6ec8:
    // 0x4c6ec8: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x4c6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
label_4c6ecc:
    // 0x4c6ecc: 0x0  nop
    ctx->pc = 0x4c6eccu;
    // NOP
label_4c6ed0:
    // 0x4c6ed0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c6ed0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c6ed4:
    // 0x4c6ed4: 0x169302b  sltu        $a2, $t3, $t1
    ctx->pc = 0x4c6ed4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4c6ed8:
    // 0x4c6ed8: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
label_4c6edc:
    if (ctx->pc == 0x4C6EDCu) {
        ctx->pc = 0x4C6EDCu;
            // 0x4c6edc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x4C6EE0u;
        goto label_4c6ee0;
    }
    ctx->pc = 0x4C6ED8u;
    {
        const bool branch_taken_0x4c6ed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6ED8u;
            // 0x4c6edc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6ed8) {
            ctx->pc = 0x4C6E4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c6e4c;
        }
    }
    ctx->pc = 0x4C6EE0u;
label_4c6ee0:
    // 0x4c6ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c6ee4:
    // 0x4c6ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c6ee8:
    // 0x4c6ee8: 0x3e00008  jr          $ra
label_4c6eec:
    if (ctx->pc == 0x4C6EECu) {
        ctx->pc = 0x4C6EECu;
            // 0x4c6eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C6EF0u;
        goto label_fallthrough_0x4c6ee8;
    }
    ctx->pc = 0x4C6EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6EE8u;
            // 0x4c6eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4c6ee8:
    ctx->pc = 0x4C6EF0u;
}
