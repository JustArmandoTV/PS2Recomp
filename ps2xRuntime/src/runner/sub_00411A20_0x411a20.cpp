#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00411A20
// Address: 0x411a20 - 0x411fb0
void sub_00411A20_0x411a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411A20_0x411a20");
#endif

    switch (ctx->pc) {
        case 0x411a20u: goto label_411a20;
        case 0x411a24u: goto label_411a24;
        case 0x411a28u: goto label_411a28;
        case 0x411a2cu: goto label_411a2c;
        case 0x411a30u: goto label_411a30;
        case 0x411a34u: goto label_411a34;
        case 0x411a38u: goto label_411a38;
        case 0x411a3cu: goto label_411a3c;
        case 0x411a40u: goto label_411a40;
        case 0x411a44u: goto label_411a44;
        case 0x411a48u: goto label_411a48;
        case 0x411a4cu: goto label_411a4c;
        case 0x411a50u: goto label_411a50;
        case 0x411a54u: goto label_411a54;
        case 0x411a58u: goto label_411a58;
        case 0x411a5cu: goto label_411a5c;
        case 0x411a60u: goto label_411a60;
        case 0x411a64u: goto label_411a64;
        case 0x411a68u: goto label_411a68;
        case 0x411a6cu: goto label_411a6c;
        case 0x411a70u: goto label_411a70;
        case 0x411a74u: goto label_411a74;
        case 0x411a78u: goto label_411a78;
        case 0x411a7cu: goto label_411a7c;
        case 0x411a80u: goto label_411a80;
        case 0x411a84u: goto label_411a84;
        case 0x411a88u: goto label_411a88;
        case 0x411a8cu: goto label_411a8c;
        case 0x411a90u: goto label_411a90;
        case 0x411a94u: goto label_411a94;
        case 0x411a98u: goto label_411a98;
        case 0x411a9cu: goto label_411a9c;
        case 0x411aa0u: goto label_411aa0;
        case 0x411aa4u: goto label_411aa4;
        case 0x411aa8u: goto label_411aa8;
        case 0x411aacu: goto label_411aac;
        case 0x411ab0u: goto label_411ab0;
        case 0x411ab4u: goto label_411ab4;
        case 0x411ab8u: goto label_411ab8;
        case 0x411abcu: goto label_411abc;
        case 0x411ac0u: goto label_411ac0;
        case 0x411ac4u: goto label_411ac4;
        case 0x411ac8u: goto label_411ac8;
        case 0x411accu: goto label_411acc;
        case 0x411ad0u: goto label_411ad0;
        case 0x411ad4u: goto label_411ad4;
        case 0x411ad8u: goto label_411ad8;
        case 0x411adcu: goto label_411adc;
        case 0x411ae0u: goto label_411ae0;
        case 0x411ae4u: goto label_411ae4;
        case 0x411ae8u: goto label_411ae8;
        case 0x411aecu: goto label_411aec;
        case 0x411af0u: goto label_411af0;
        case 0x411af4u: goto label_411af4;
        case 0x411af8u: goto label_411af8;
        case 0x411afcu: goto label_411afc;
        case 0x411b00u: goto label_411b00;
        case 0x411b04u: goto label_411b04;
        case 0x411b08u: goto label_411b08;
        case 0x411b0cu: goto label_411b0c;
        case 0x411b10u: goto label_411b10;
        case 0x411b14u: goto label_411b14;
        case 0x411b18u: goto label_411b18;
        case 0x411b1cu: goto label_411b1c;
        case 0x411b20u: goto label_411b20;
        case 0x411b24u: goto label_411b24;
        case 0x411b28u: goto label_411b28;
        case 0x411b2cu: goto label_411b2c;
        case 0x411b30u: goto label_411b30;
        case 0x411b34u: goto label_411b34;
        case 0x411b38u: goto label_411b38;
        case 0x411b3cu: goto label_411b3c;
        case 0x411b40u: goto label_411b40;
        case 0x411b44u: goto label_411b44;
        case 0x411b48u: goto label_411b48;
        case 0x411b4cu: goto label_411b4c;
        case 0x411b50u: goto label_411b50;
        case 0x411b54u: goto label_411b54;
        case 0x411b58u: goto label_411b58;
        case 0x411b5cu: goto label_411b5c;
        case 0x411b60u: goto label_411b60;
        case 0x411b64u: goto label_411b64;
        case 0x411b68u: goto label_411b68;
        case 0x411b6cu: goto label_411b6c;
        case 0x411b70u: goto label_411b70;
        case 0x411b74u: goto label_411b74;
        case 0x411b78u: goto label_411b78;
        case 0x411b7cu: goto label_411b7c;
        case 0x411b80u: goto label_411b80;
        case 0x411b84u: goto label_411b84;
        case 0x411b88u: goto label_411b88;
        case 0x411b8cu: goto label_411b8c;
        case 0x411b90u: goto label_411b90;
        case 0x411b94u: goto label_411b94;
        case 0x411b98u: goto label_411b98;
        case 0x411b9cu: goto label_411b9c;
        case 0x411ba0u: goto label_411ba0;
        case 0x411ba4u: goto label_411ba4;
        case 0x411ba8u: goto label_411ba8;
        case 0x411bacu: goto label_411bac;
        case 0x411bb0u: goto label_411bb0;
        case 0x411bb4u: goto label_411bb4;
        case 0x411bb8u: goto label_411bb8;
        case 0x411bbcu: goto label_411bbc;
        case 0x411bc0u: goto label_411bc0;
        case 0x411bc4u: goto label_411bc4;
        case 0x411bc8u: goto label_411bc8;
        case 0x411bccu: goto label_411bcc;
        case 0x411bd0u: goto label_411bd0;
        case 0x411bd4u: goto label_411bd4;
        case 0x411bd8u: goto label_411bd8;
        case 0x411bdcu: goto label_411bdc;
        case 0x411be0u: goto label_411be0;
        case 0x411be4u: goto label_411be4;
        case 0x411be8u: goto label_411be8;
        case 0x411becu: goto label_411bec;
        case 0x411bf0u: goto label_411bf0;
        case 0x411bf4u: goto label_411bf4;
        case 0x411bf8u: goto label_411bf8;
        case 0x411bfcu: goto label_411bfc;
        case 0x411c00u: goto label_411c00;
        case 0x411c04u: goto label_411c04;
        case 0x411c08u: goto label_411c08;
        case 0x411c0cu: goto label_411c0c;
        case 0x411c10u: goto label_411c10;
        case 0x411c14u: goto label_411c14;
        case 0x411c18u: goto label_411c18;
        case 0x411c1cu: goto label_411c1c;
        case 0x411c20u: goto label_411c20;
        case 0x411c24u: goto label_411c24;
        case 0x411c28u: goto label_411c28;
        case 0x411c2cu: goto label_411c2c;
        case 0x411c30u: goto label_411c30;
        case 0x411c34u: goto label_411c34;
        case 0x411c38u: goto label_411c38;
        case 0x411c3cu: goto label_411c3c;
        case 0x411c40u: goto label_411c40;
        case 0x411c44u: goto label_411c44;
        case 0x411c48u: goto label_411c48;
        case 0x411c4cu: goto label_411c4c;
        case 0x411c50u: goto label_411c50;
        case 0x411c54u: goto label_411c54;
        case 0x411c58u: goto label_411c58;
        case 0x411c5cu: goto label_411c5c;
        case 0x411c60u: goto label_411c60;
        case 0x411c64u: goto label_411c64;
        case 0x411c68u: goto label_411c68;
        case 0x411c6cu: goto label_411c6c;
        case 0x411c70u: goto label_411c70;
        case 0x411c74u: goto label_411c74;
        case 0x411c78u: goto label_411c78;
        case 0x411c7cu: goto label_411c7c;
        case 0x411c80u: goto label_411c80;
        case 0x411c84u: goto label_411c84;
        case 0x411c88u: goto label_411c88;
        case 0x411c8cu: goto label_411c8c;
        case 0x411c90u: goto label_411c90;
        case 0x411c94u: goto label_411c94;
        case 0x411c98u: goto label_411c98;
        case 0x411c9cu: goto label_411c9c;
        case 0x411ca0u: goto label_411ca0;
        case 0x411ca4u: goto label_411ca4;
        case 0x411ca8u: goto label_411ca8;
        case 0x411cacu: goto label_411cac;
        case 0x411cb0u: goto label_411cb0;
        case 0x411cb4u: goto label_411cb4;
        case 0x411cb8u: goto label_411cb8;
        case 0x411cbcu: goto label_411cbc;
        case 0x411cc0u: goto label_411cc0;
        case 0x411cc4u: goto label_411cc4;
        case 0x411cc8u: goto label_411cc8;
        case 0x411cccu: goto label_411ccc;
        case 0x411cd0u: goto label_411cd0;
        case 0x411cd4u: goto label_411cd4;
        case 0x411cd8u: goto label_411cd8;
        case 0x411cdcu: goto label_411cdc;
        case 0x411ce0u: goto label_411ce0;
        case 0x411ce4u: goto label_411ce4;
        case 0x411ce8u: goto label_411ce8;
        case 0x411cecu: goto label_411cec;
        case 0x411cf0u: goto label_411cf0;
        case 0x411cf4u: goto label_411cf4;
        case 0x411cf8u: goto label_411cf8;
        case 0x411cfcu: goto label_411cfc;
        case 0x411d00u: goto label_411d00;
        case 0x411d04u: goto label_411d04;
        case 0x411d08u: goto label_411d08;
        case 0x411d0cu: goto label_411d0c;
        case 0x411d10u: goto label_411d10;
        case 0x411d14u: goto label_411d14;
        case 0x411d18u: goto label_411d18;
        case 0x411d1cu: goto label_411d1c;
        case 0x411d20u: goto label_411d20;
        case 0x411d24u: goto label_411d24;
        case 0x411d28u: goto label_411d28;
        case 0x411d2cu: goto label_411d2c;
        case 0x411d30u: goto label_411d30;
        case 0x411d34u: goto label_411d34;
        case 0x411d38u: goto label_411d38;
        case 0x411d3cu: goto label_411d3c;
        case 0x411d40u: goto label_411d40;
        case 0x411d44u: goto label_411d44;
        case 0x411d48u: goto label_411d48;
        case 0x411d4cu: goto label_411d4c;
        case 0x411d50u: goto label_411d50;
        case 0x411d54u: goto label_411d54;
        case 0x411d58u: goto label_411d58;
        case 0x411d5cu: goto label_411d5c;
        case 0x411d60u: goto label_411d60;
        case 0x411d64u: goto label_411d64;
        case 0x411d68u: goto label_411d68;
        case 0x411d6cu: goto label_411d6c;
        case 0x411d70u: goto label_411d70;
        case 0x411d74u: goto label_411d74;
        case 0x411d78u: goto label_411d78;
        case 0x411d7cu: goto label_411d7c;
        case 0x411d80u: goto label_411d80;
        case 0x411d84u: goto label_411d84;
        case 0x411d88u: goto label_411d88;
        case 0x411d8cu: goto label_411d8c;
        case 0x411d90u: goto label_411d90;
        case 0x411d94u: goto label_411d94;
        case 0x411d98u: goto label_411d98;
        case 0x411d9cu: goto label_411d9c;
        case 0x411da0u: goto label_411da0;
        case 0x411da4u: goto label_411da4;
        case 0x411da8u: goto label_411da8;
        case 0x411dacu: goto label_411dac;
        case 0x411db0u: goto label_411db0;
        case 0x411db4u: goto label_411db4;
        case 0x411db8u: goto label_411db8;
        case 0x411dbcu: goto label_411dbc;
        case 0x411dc0u: goto label_411dc0;
        case 0x411dc4u: goto label_411dc4;
        case 0x411dc8u: goto label_411dc8;
        case 0x411dccu: goto label_411dcc;
        case 0x411dd0u: goto label_411dd0;
        case 0x411dd4u: goto label_411dd4;
        case 0x411dd8u: goto label_411dd8;
        case 0x411ddcu: goto label_411ddc;
        case 0x411de0u: goto label_411de0;
        case 0x411de4u: goto label_411de4;
        case 0x411de8u: goto label_411de8;
        case 0x411decu: goto label_411dec;
        case 0x411df0u: goto label_411df0;
        case 0x411df4u: goto label_411df4;
        case 0x411df8u: goto label_411df8;
        case 0x411dfcu: goto label_411dfc;
        case 0x411e00u: goto label_411e00;
        case 0x411e04u: goto label_411e04;
        case 0x411e08u: goto label_411e08;
        case 0x411e0cu: goto label_411e0c;
        case 0x411e10u: goto label_411e10;
        case 0x411e14u: goto label_411e14;
        case 0x411e18u: goto label_411e18;
        case 0x411e1cu: goto label_411e1c;
        case 0x411e20u: goto label_411e20;
        case 0x411e24u: goto label_411e24;
        case 0x411e28u: goto label_411e28;
        case 0x411e2cu: goto label_411e2c;
        case 0x411e30u: goto label_411e30;
        case 0x411e34u: goto label_411e34;
        case 0x411e38u: goto label_411e38;
        case 0x411e3cu: goto label_411e3c;
        case 0x411e40u: goto label_411e40;
        case 0x411e44u: goto label_411e44;
        case 0x411e48u: goto label_411e48;
        case 0x411e4cu: goto label_411e4c;
        case 0x411e50u: goto label_411e50;
        case 0x411e54u: goto label_411e54;
        case 0x411e58u: goto label_411e58;
        case 0x411e5cu: goto label_411e5c;
        case 0x411e60u: goto label_411e60;
        case 0x411e64u: goto label_411e64;
        case 0x411e68u: goto label_411e68;
        case 0x411e6cu: goto label_411e6c;
        case 0x411e70u: goto label_411e70;
        case 0x411e74u: goto label_411e74;
        case 0x411e78u: goto label_411e78;
        case 0x411e7cu: goto label_411e7c;
        case 0x411e80u: goto label_411e80;
        case 0x411e84u: goto label_411e84;
        case 0x411e88u: goto label_411e88;
        case 0x411e8cu: goto label_411e8c;
        case 0x411e90u: goto label_411e90;
        case 0x411e94u: goto label_411e94;
        case 0x411e98u: goto label_411e98;
        case 0x411e9cu: goto label_411e9c;
        case 0x411ea0u: goto label_411ea0;
        case 0x411ea4u: goto label_411ea4;
        case 0x411ea8u: goto label_411ea8;
        case 0x411eacu: goto label_411eac;
        case 0x411eb0u: goto label_411eb0;
        case 0x411eb4u: goto label_411eb4;
        case 0x411eb8u: goto label_411eb8;
        case 0x411ebcu: goto label_411ebc;
        case 0x411ec0u: goto label_411ec0;
        case 0x411ec4u: goto label_411ec4;
        case 0x411ec8u: goto label_411ec8;
        case 0x411eccu: goto label_411ecc;
        case 0x411ed0u: goto label_411ed0;
        case 0x411ed4u: goto label_411ed4;
        case 0x411ed8u: goto label_411ed8;
        case 0x411edcu: goto label_411edc;
        case 0x411ee0u: goto label_411ee0;
        case 0x411ee4u: goto label_411ee4;
        case 0x411ee8u: goto label_411ee8;
        case 0x411eecu: goto label_411eec;
        case 0x411ef0u: goto label_411ef0;
        case 0x411ef4u: goto label_411ef4;
        case 0x411ef8u: goto label_411ef8;
        case 0x411efcu: goto label_411efc;
        case 0x411f00u: goto label_411f00;
        case 0x411f04u: goto label_411f04;
        case 0x411f08u: goto label_411f08;
        case 0x411f0cu: goto label_411f0c;
        case 0x411f10u: goto label_411f10;
        case 0x411f14u: goto label_411f14;
        case 0x411f18u: goto label_411f18;
        case 0x411f1cu: goto label_411f1c;
        case 0x411f20u: goto label_411f20;
        case 0x411f24u: goto label_411f24;
        case 0x411f28u: goto label_411f28;
        case 0x411f2cu: goto label_411f2c;
        case 0x411f30u: goto label_411f30;
        case 0x411f34u: goto label_411f34;
        case 0x411f38u: goto label_411f38;
        case 0x411f3cu: goto label_411f3c;
        case 0x411f40u: goto label_411f40;
        case 0x411f44u: goto label_411f44;
        case 0x411f48u: goto label_411f48;
        case 0x411f4cu: goto label_411f4c;
        case 0x411f50u: goto label_411f50;
        case 0x411f54u: goto label_411f54;
        case 0x411f58u: goto label_411f58;
        case 0x411f5cu: goto label_411f5c;
        case 0x411f60u: goto label_411f60;
        case 0x411f64u: goto label_411f64;
        case 0x411f68u: goto label_411f68;
        case 0x411f6cu: goto label_411f6c;
        case 0x411f70u: goto label_411f70;
        case 0x411f74u: goto label_411f74;
        case 0x411f78u: goto label_411f78;
        case 0x411f7cu: goto label_411f7c;
        case 0x411f80u: goto label_411f80;
        case 0x411f84u: goto label_411f84;
        case 0x411f88u: goto label_411f88;
        case 0x411f8cu: goto label_411f8c;
        case 0x411f90u: goto label_411f90;
        case 0x411f94u: goto label_411f94;
        case 0x411f98u: goto label_411f98;
        case 0x411f9cu: goto label_411f9c;
        case 0x411fa0u: goto label_411fa0;
        case 0x411fa4u: goto label_411fa4;
        case 0x411fa8u: goto label_411fa8;
        case 0x411facu: goto label_411fac;
        default: break;
    }

    ctx->pc = 0x411a20u;

label_411a20:
    // 0x411a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x411a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_411a24:
    // 0x411a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_411a28:
    // 0x411a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x411a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_411a2c:
    // 0x411a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x411a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_411a30:
    // 0x411a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x411a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411a34:
    // 0x411a34: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_411a38:
    if (ctx->pc == 0x411A38u) {
        ctx->pc = 0x411A38u;
            // 0x411a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411A3Cu;
        goto label_411a3c;
    }
    ctx->pc = 0x411A34u;
    {
        const bool branch_taken_0x411a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x411A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411A34u;
            // 0x411a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411a34) {
            ctx->pc = 0x411A68u;
            goto label_411a68;
        }
    }
    ctx->pc = 0x411A3Cu;
label_411a3c:
    // 0x411a3c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x411a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_411a40:
    // 0x411a40: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x411a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_411a44:
    // 0x411a44: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x411a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
label_411a48:
    // 0x411a48: 0xc0407e8  jal         func_101FA0
label_411a4c:
    if (ctx->pc == 0x411A4Cu) {
        ctx->pc = 0x411A4Cu;
            // 0x411a4c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411A50u;
        goto label_411a50;
    }
    ctx->pc = 0x411A48u;
    SET_GPR_U32(ctx, 31, 0x411A50u);
    ctx->pc = 0x411A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411A48u;
            // 0x411a4c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411A50u; }
        if (ctx->pc != 0x411A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411A50u; }
        if (ctx->pc != 0x411A50u) { return; }
    }
    ctx->pc = 0x411A50u;
label_411a50:
    // 0x411a50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x411a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_411a54:
    // 0x411a54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x411a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_411a58:
    // 0x411a58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_411a5c:
    if (ctx->pc == 0x411A5Cu) {
        ctx->pc = 0x411A5Cu;
            // 0x411a5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411A60u;
        goto label_411a60;
    }
    ctx->pc = 0x411A58u;
    {
        const bool branch_taken_0x411a58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x411a58) {
            ctx->pc = 0x411A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411A58u;
            // 0x411a5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411A6Cu;
            goto label_411a6c;
        }
    }
    ctx->pc = 0x411A60u;
label_411a60:
    // 0x411a60: 0xc0400a8  jal         func_1002A0
label_411a64:
    if (ctx->pc == 0x411A64u) {
        ctx->pc = 0x411A64u;
            // 0x411a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411A68u;
        goto label_411a68;
    }
    ctx->pc = 0x411A60u;
    SET_GPR_U32(ctx, 31, 0x411A68u);
    ctx->pc = 0x411A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411A60u;
            // 0x411a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411A68u; }
        if (ctx->pc != 0x411A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411A68u; }
        if (ctx->pc != 0x411A68u) { return; }
    }
    ctx->pc = 0x411A68u;
label_411a68:
    // 0x411a68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x411a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411a6c:
    // 0x411a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411a70:
    // 0x411a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x411a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411a74:
    // 0x411a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_411a78:
    // 0x411a78: 0x3e00008  jr          $ra
label_411a7c:
    if (ctx->pc == 0x411A7Cu) {
        ctx->pc = 0x411A7Cu;
            // 0x411a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x411A80u;
        goto label_411a80;
    }
    ctx->pc = 0x411A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411A78u;
            // 0x411a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411A80u;
label_411a80:
    // 0x411a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x411a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_411a84:
    // 0x411a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_411a88:
    // 0x411a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x411a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_411a8c:
    // 0x411a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x411a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_411a90:
    // 0x411a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x411a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411a94:
    // 0x411a94: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_411a98:
    if (ctx->pc == 0x411A98u) {
        ctx->pc = 0x411A98u;
            // 0x411a98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411A9Cu;
        goto label_411a9c;
    }
    ctx->pc = 0x411A94u;
    {
        const bool branch_taken_0x411a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x411A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411A94u;
            // 0x411a98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411a94) {
            ctx->pc = 0x411B5Cu;
            goto label_411b5c;
        }
    }
    ctx->pc = 0x411A9Cu;
label_411a9c:
    // 0x411a9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x411a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_411aa0:
    // 0x411aa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x411aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_411aa4:
    // 0x411aa4: 0x2463afb0  addiu       $v1, $v1, -0x5050
    ctx->pc = 0x411aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946736));
label_411aa8:
    // 0x411aa8: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x411aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
label_411aac:
    // 0x411aac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x411aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_411ab0:
    // 0x411ab0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x411ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_411ab4:
    // 0x411ab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x411ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_411ab8:
    // 0x411ab8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x411ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_411abc:
    // 0x411abc: 0x320f809  jalr        $t9
label_411ac0:
    if (ctx->pc == 0x411AC0u) {
        ctx->pc = 0x411AC4u;
        goto label_411ac4;
    }
    ctx->pc = 0x411ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x411AC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x411AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x411AC4u; }
            if (ctx->pc != 0x411AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x411AC4u;
label_411ac4:
    // 0x411ac4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_411ac8:
    if (ctx->pc == 0x411AC8u) {
        ctx->pc = 0x411AC8u;
            // 0x411ac8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x411ACCu;
        goto label_411acc;
    }
    ctx->pc = 0x411AC4u;
    {
        const bool branch_taken_0x411ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x411ac4) {
            ctx->pc = 0x411AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411AC4u;
            // 0x411ac8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411B48u;
            goto label_411b48;
        }
    }
    ctx->pc = 0x411ACCu;
label_411acc:
    // 0x411acc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x411accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_411ad0:
    // 0x411ad0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x411ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_411ad4:
    // 0x411ad4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x411ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_411ad8:
    // 0x411ad8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x411ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_411adc:
    // 0x411adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x411adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_411ae0:
    // 0x411ae0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x411ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_411ae4:
    // 0x411ae4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x411ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_411ae8:
    // 0x411ae8: 0xc0aecc4  jal         func_2BB310
label_411aec:
    if (ctx->pc == 0x411AECu) {
        ctx->pc = 0x411AECu;
            // 0x411aec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x411AF0u;
        goto label_411af0;
    }
    ctx->pc = 0x411AE8u;
    SET_GPR_U32(ctx, 31, 0x411AF0u);
    ctx->pc = 0x411AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411AE8u;
            // 0x411aec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411AF0u; }
        if (ctx->pc != 0x411AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411AF0u; }
        if (ctx->pc != 0x411AF0u) { return; }
    }
    ctx->pc = 0x411AF0u;
label_411af0:
    // 0x411af0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x411af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_411af4:
    // 0x411af4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x411af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_411af8:
    // 0x411af8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_411afc:
    if (ctx->pc == 0x411AFCu) {
        ctx->pc = 0x411AFCu;
            // 0x411afc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x411B00u;
        goto label_411b00;
    }
    ctx->pc = 0x411AF8u;
    {
        const bool branch_taken_0x411af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x411af8) {
            ctx->pc = 0x411AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411AF8u;
            // 0x411afc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411B14u;
            goto label_411b14;
        }
    }
    ctx->pc = 0x411B00u;
label_411b00:
    // 0x411b00: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x411b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_411b04:
    // 0x411b04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x411b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_411b08:
    // 0x411b08: 0x320f809  jalr        $t9
label_411b0c:
    if (ctx->pc == 0x411B0Cu) {
        ctx->pc = 0x411B0Cu;
            // 0x411b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x411B10u;
        goto label_411b10;
    }
    ctx->pc = 0x411B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x411B10u);
        ctx->pc = 0x411B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411B08u;
            // 0x411b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x411B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x411B10u; }
            if (ctx->pc != 0x411B10u) { return; }
        }
        }
    }
    ctx->pc = 0x411B10u;
label_411b10:
    // 0x411b10: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x411b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_411b14:
    // 0x411b14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x411b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_411b18:
    // 0x411b18: 0xc0aec9c  jal         func_2BB270
label_411b1c:
    if (ctx->pc == 0x411B1Cu) {
        ctx->pc = 0x411B1Cu;
            // 0x411b1c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x411B20u;
        goto label_411b20;
    }
    ctx->pc = 0x411B18u;
    SET_GPR_U32(ctx, 31, 0x411B20u);
    ctx->pc = 0x411B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411B18u;
            // 0x411b1c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B20u; }
        if (ctx->pc != 0x411B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B20u; }
        if (ctx->pc != 0x411B20u) { return; }
    }
    ctx->pc = 0x411B20u;
label_411b20:
    // 0x411b20: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x411b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_411b24:
    // 0x411b24: 0xc0aec88  jal         func_2BB220
label_411b28:
    if (ctx->pc == 0x411B28u) {
        ctx->pc = 0x411B28u;
            // 0x411b28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x411B2Cu;
        goto label_411b2c;
    }
    ctx->pc = 0x411B24u;
    SET_GPR_U32(ctx, 31, 0x411B2Cu);
    ctx->pc = 0x411B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411B24u;
            // 0x411b28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B2Cu; }
        if (ctx->pc != 0x411B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B2Cu; }
        if (ctx->pc != 0x411B2Cu) { return; }
    }
    ctx->pc = 0x411B2Cu;
label_411b2c:
    // 0x411b2c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x411b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_411b30:
    // 0x411b30: 0xc0aec0c  jal         func_2BB030
label_411b34:
    if (ctx->pc == 0x411B34u) {
        ctx->pc = 0x411B34u;
            // 0x411b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411B38u;
        goto label_411b38;
    }
    ctx->pc = 0x411B30u;
    SET_GPR_U32(ctx, 31, 0x411B38u);
    ctx->pc = 0x411B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411B30u;
            // 0x411b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B38u; }
        if (ctx->pc != 0x411B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B38u; }
        if (ctx->pc != 0x411B38u) { return; }
    }
    ctx->pc = 0x411B38u;
label_411b38:
    // 0x411b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x411b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411b3c:
    // 0x411b3c: 0xc0aeaa8  jal         func_2BAAA0
label_411b40:
    if (ctx->pc == 0x411B40u) {
        ctx->pc = 0x411B40u;
            // 0x411b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411B44u;
        goto label_411b44;
    }
    ctx->pc = 0x411B3Cu;
    SET_GPR_U32(ctx, 31, 0x411B44u);
    ctx->pc = 0x411B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411B3Cu;
            // 0x411b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B44u; }
        if (ctx->pc != 0x411B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B44u; }
        if (ctx->pc != 0x411B44u) { return; }
    }
    ctx->pc = 0x411B44u;
label_411b44:
    // 0x411b44: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x411b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_411b48:
    // 0x411b48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x411b48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_411b4c:
    // 0x411b4c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_411b50:
    if (ctx->pc == 0x411B50u) {
        ctx->pc = 0x411B50u;
            // 0x411b50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411B54u;
        goto label_411b54;
    }
    ctx->pc = 0x411B4Cu;
    {
        const bool branch_taken_0x411b4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x411b4c) {
            ctx->pc = 0x411B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411B4Cu;
            // 0x411b50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411B60u;
            goto label_411b60;
        }
    }
    ctx->pc = 0x411B54u;
label_411b54:
    // 0x411b54: 0xc0400a8  jal         func_1002A0
label_411b58:
    if (ctx->pc == 0x411B58u) {
        ctx->pc = 0x411B58u;
            // 0x411b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411B5Cu;
        goto label_411b5c;
    }
    ctx->pc = 0x411B54u;
    SET_GPR_U32(ctx, 31, 0x411B5Cu);
    ctx->pc = 0x411B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411B54u;
            // 0x411b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B5Cu; }
        if (ctx->pc != 0x411B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411B5Cu; }
        if (ctx->pc != 0x411B5Cu) { return; }
    }
    ctx->pc = 0x411B5Cu;
label_411b5c:
    // 0x411b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x411b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411b60:
    // 0x411b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411b64:
    // 0x411b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x411b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411b68:
    // 0x411b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_411b6c:
    // 0x411b6c: 0x3e00008  jr          $ra
label_411b70:
    if (ctx->pc == 0x411B70u) {
        ctx->pc = 0x411B70u;
            // 0x411b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x411B74u;
        goto label_411b74;
    }
    ctx->pc = 0x411B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411B6Cu;
            // 0x411b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411B74u;
label_411b74:
    // 0x411b74: 0x0  nop
    ctx->pc = 0x411b74u;
    // NOP
label_411b78:
    // 0x411b78: 0x0  nop
    ctx->pc = 0x411b78u;
    // NOP
label_411b7c:
    // 0x411b7c: 0x0  nop
    ctx->pc = 0x411b7cu;
    // NOP
label_411b80:
    // 0x411b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x411b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_411b84:
    // 0x411b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_411b88:
    // 0x411b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x411b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_411b8c:
    // 0x411b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x411b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_411b90:
    // 0x411b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x411b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411b94:
    // 0x411b94: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_411b98:
    if (ctx->pc == 0x411B98u) {
        ctx->pc = 0x411B98u;
            // 0x411b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411B9Cu;
        goto label_411b9c;
    }
    ctx->pc = 0x411B94u;
    {
        const bool branch_taken_0x411b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x411B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411B94u;
            // 0x411b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411b94) {
            ctx->pc = 0x411C44u;
            goto label_411c44;
        }
    }
    ctx->pc = 0x411B9Cu;
label_411b9c:
    // 0x411b9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x411b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_411ba0:
    // 0x411ba0: 0x2442b050  addiu       $v0, $v0, -0x4FB0
    ctx->pc = 0x411ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946896));
label_411ba4:
    // 0x411ba4: 0xc0d37dc  jal         func_34DF70
label_411ba8:
    if (ctx->pc == 0x411BA8u) {
        ctx->pc = 0x411BA8u;
            // 0x411ba8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x411BACu;
        goto label_411bac;
    }
    ctx->pc = 0x411BA4u;
    SET_GPR_U32(ctx, 31, 0x411BACu);
    ctx->pc = 0x411BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411BA4u;
            // 0x411ba8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411BACu; }
        if (ctx->pc != 0x411BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411BACu; }
        if (ctx->pc != 0x411BACu) { return; }
    }
    ctx->pc = 0x411BACu;
label_411bac:
    // 0x411bac: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x411bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_411bb0:
    // 0x411bb0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_411bb4:
    if (ctx->pc == 0x411BB4u) {
        ctx->pc = 0x411BB8u;
        goto label_411bb8;
    }
    ctx->pc = 0x411BB0u;
    {
        const bool branch_taken_0x411bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bb0) {
            ctx->pc = 0x411BECu;
            goto label_411bec;
        }
    }
    ctx->pc = 0x411BB8u;
label_411bb8:
    // 0x411bb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_411bbc:
    if (ctx->pc == 0x411BBCu) {
        ctx->pc = 0x411BC0u;
        goto label_411bc0;
    }
    ctx->pc = 0x411BB8u;
    {
        const bool branch_taken_0x411bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bb8) {
            ctx->pc = 0x411BECu;
            goto label_411bec;
        }
    }
    ctx->pc = 0x411BC0u;
label_411bc0:
    // 0x411bc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_411bc4:
    if (ctx->pc == 0x411BC4u) {
        ctx->pc = 0x411BC8u;
        goto label_411bc8;
    }
    ctx->pc = 0x411BC0u;
    {
        const bool branch_taken_0x411bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bc0) {
            ctx->pc = 0x411BECu;
            goto label_411bec;
        }
    }
    ctx->pc = 0x411BC8u;
label_411bc8:
    // 0x411bc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411bcc:
    if (ctx->pc == 0x411BCCu) {
        ctx->pc = 0x411BD0u;
        goto label_411bd0;
    }
    ctx->pc = 0x411BC8u;
    {
        const bool branch_taken_0x411bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bc8) {
            ctx->pc = 0x411BECu;
            goto label_411bec;
        }
    }
    ctx->pc = 0x411BD0u;
label_411bd0:
    // 0x411bd0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x411bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_411bd4:
    // 0x411bd4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_411bd8:
    if (ctx->pc == 0x411BD8u) {
        ctx->pc = 0x411BDCu;
        goto label_411bdc;
    }
    ctx->pc = 0x411BD4u;
    {
        const bool branch_taken_0x411bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bd4) {
            ctx->pc = 0x411BECu;
            goto label_411bec;
        }
    }
    ctx->pc = 0x411BDCu;
label_411bdc:
    // 0x411bdc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411be0:
    if (ctx->pc == 0x411BE0u) {
        ctx->pc = 0x411BE4u;
        goto label_411be4;
    }
    ctx->pc = 0x411BDCu;
    {
        const bool branch_taken_0x411bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bdc) {
            ctx->pc = 0x411BECu;
            goto label_411bec;
        }
    }
    ctx->pc = 0x411BE4u;
label_411be4:
    // 0x411be4: 0xc0fe48c  jal         func_3F9230
label_411be8:
    if (ctx->pc == 0x411BE8u) {
        ctx->pc = 0x411BE8u;
            // 0x411be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411BECu;
        goto label_411bec;
    }
    ctx->pc = 0x411BE4u;
    SET_GPR_U32(ctx, 31, 0x411BECu);
    ctx->pc = 0x411BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411BE4u;
            // 0x411be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411BECu; }
        if (ctx->pc != 0x411BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411BECu; }
        if (ctx->pc != 0x411BECu) { return; }
    }
    ctx->pc = 0x411BECu;
label_411bec:
    // 0x411bec: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_411bf0:
    if (ctx->pc == 0x411BF0u) {
        ctx->pc = 0x411BF0u;
            // 0x411bf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x411BF4u;
        goto label_411bf4;
    }
    ctx->pc = 0x411BECu;
    {
        const bool branch_taken_0x411bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x411bec) {
            ctx->pc = 0x411BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411BECu;
            // 0x411bf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411C30u;
            goto label_411c30;
        }
    }
    ctx->pc = 0x411BF4u;
label_411bf4:
    // 0x411bf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x411bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_411bf8:
    // 0x411bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411bfc:
    // 0x411bfc: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x411bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_411c00:
    // 0x411c00: 0xc0d37dc  jal         func_34DF70
label_411c04:
    if (ctx->pc == 0x411C04u) {
        ctx->pc = 0x411C04u;
            // 0x411c04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x411C08u;
        goto label_411c08;
    }
    ctx->pc = 0x411C00u;
    SET_GPR_U32(ctx, 31, 0x411C08u);
    ctx->pc = 0x411C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411C00u;
            // 0x411c04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411C08u; }
        if (ctx->pc != 0x411C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411C08u; }
        if (ctx->pc != 0x411C08u) { return; }
    }
    ctx->pc = 0x411C08u;
label_411c08:
    // 0x411c08: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_411c0c:
    if (ctx->pc == 0x411C0Cu) {
        ctx->pc = 0x411C10u;
        goto label_411c10;
    }
    ctx->pc = 0x411C08u;
    {
        const bool branch_taken_0x411c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x411c08) {
            ctx->pc = 0x411C2Cu;
            goto label_411c2c;
        }
    }
    ctx->pc = 0x411C10u;
label_411c10:
    // 0x411c10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x411c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_411c14:
    // 0x411c14: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x411c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_411c18:
    // 0x411c18: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_411c1c:
    if (ctx->pc == 0x411C1Cu) {
        ctx->pc = 0x411C1Cu;
            // 0x411c1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x411C20u;
        goto label_411c20;
    }
    ctx->pc = 0x411C18u;
    {
        const bool branch_taken_0x411c18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x411C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411C18u;
            // 0x411c1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c18) {
            ctx->pc = 0x411C2Cu;
            goto label_411c2c;
        }
    }
    ctx->pc = 0x411C20u;
label_411c20:
    // 0x411c20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x411c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_411c24:
    // 0x411c24: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x411c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_411c28:
    // 0x411c28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x411c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_411c2c:
    // 0x411c2c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x411c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_411c30:
    // 0x411c30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x411c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_411c34:
    // 0x411c34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_411c38:
    if (ctx->pc == 0x411C38u) {
        ctx->pc = 0x411C38u;
            // 0x411c38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411C3Cu;
        goto label_411c3c;
    }
    ctx->pc = 0x411C34u;
    {
        const bool branch_taken_0x411c34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x411c34) {
            ctx->pc = 0x411C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411C34u;
            // 0x411c38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411C48u;
            goto label_411c48;
        }
    }
    ctx->pc = 0x411C3Cu;
label_411c3c:
    // 0x411c3c: 0xc0400a8  jal         func_1002A0
label_411c40:
    if (ctx->pc == 0x411C40u) {
        ctx->pc = 0x411C40u;
            // 0x411c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411C44u;
        goto label_411c44;
    }
    ctx->pc = 0x411C3Cu;
    SET_GPR_U32(ctx, 31, 0x411C44u);
    ctx->pc = 0x411C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411C3Cu;
            // 0x411c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411C44u; }
        if (ctx->pc != 0x411C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411C44u; }
        if (ctx->pc != 0x411C44u) { return; }
    }
    ctx->pc = 0x411C44u;
label_411c44:
    // 0x411c44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x411c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411c48:
    // 0x411c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411c4c:
    // 0x411c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x411c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411c50:
    // 0x411c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_411c54:
    // 0x411c54: 0x3e00008  jr          $ra
label_411c58:
    if (ctx->pc == 0x411C58u) {
        ctx->pc = 0x411C58u;
            // 0x411c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x411C5Cu;
        goto label_411c5c;
    }
    ctx->pc = 0x411C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411C54u;
            // 0x411c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411C5Cu;
label_411c5c:
    // 0x411c5c: 0x0  nop
    ctx->pc = 0x411c5cu;
    // NOP
label_411c60:
    // 0x411c60: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x411c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_411c64:
    // 0x411c64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x411c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_411c68:
    // 0x411c68: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x411c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_411c6c:
    // 0x411c6c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x411c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_411c70:
    // 0x411c70: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x411c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_411c74:
    // 0x411c74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x411c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_411c78:
    // 0x411c78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x411c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_411c7c:
    // 0x411c7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x411c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_411c80:
    // 0x411c80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x411c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_411c84:
    // 0x411c84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x411c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_411c88:
    // 0x411c88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x411c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_411c8c:
    // 0x411c8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x411c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_411c90:
    // 0x411c90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x411c90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_411c94:
    // 0x411c94: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x411c94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_411c98:
    // 0x411c98: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_411c9c:
    if (ctx->pc == 0x411C9Cu) {
        ctx->pc = 0x411C9Cu;
            // 0x411c9c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411CA0u;
        goto label_411ca0;
    }
    ctx->pc = 0x411C98u;
    {
        const bool branch_taken_0x411c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x411C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411C98u;
            // 0x411c9c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c98) {
            ctx->pc = 0x411CE8u;
            goto label_411ce8;
        }
    }
    ctx->pc = 0x411CA0u;
label_411ca0:
    // 0x411ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x411ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_411ca4:
    // 0x411ca4: 0x10a300b4  beq         $a1, $v1, . + 4 + (0xB4 << 2)
label_411ca8:
    if (ctx->pc == 0x411CA8u) {
        ctx->pc = 0x411CACu;
        goto label_411cac;
    }
    ctx->pc = 0x411CA4u;
    {
        const bool branch_taken_0x411ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x411ca4) {
            ctx->pc = 0x411F78u;
            goto label_411f78;
        }
    }
    ctx->pc = 0x411CACu;
label_411cac:
    // 0x411cac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x411cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_411cb0:
    // 0x411cb0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_411cb4:
    if (ctx->pc == 0x411CB4u) {
        ctx->pc = 0x411CB8u;
        goto label_411cb8;
    }
    ctx->pc = 0x411CB0u;
    {
        const bool branch_taken_0x411cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x411cb0) {
            ctx->pc = 0x411CC0u;
            goto label_411cc0;
        }
    }
    ctx->pc = 0x411CB8u;
label_411cb8:
    // 0x411cb8: 0x100000af  b           . + 4 + (0xAF << 2)
label_411cbc:
    if (ctx->pc == 0x411CBCu) {
        ctx->pc = 0x411CC0u;
        goto label_411cc0;
    }
    ctx->pc = 0x411CB8u;
    {
        const bool branch_taken_0x411cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411cb8) {
            ctx->pc = 0x411F78u;
            goto label_411f78;
        }
    }
    ctx->pc = 0x411CC0u;
label_411cc0:
    // 0x411cc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x411cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_411cc4:
    // 0x411cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x411cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_411cc8:
    // 0x411cc8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x411cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_411ccc:
    // 0x411ccc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x411cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_411cd0:
    // 0x411cd0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x411cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_411cd4:
    // 0x411cd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x411cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_411cd8:
    // 0x411cd8: 0x320f809  jalr        $t9
label_411cdc:
    if (ctx->pc == 0x411CDCu) {
        ctx->pc = 0x411CDCu;
            // 0x411cdc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x411CE0u;
        goto label_411ce0;
    }
    ctx->pc = 0x411CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x411CE0u);
        ctx->pc = 0x411CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411CD8u;
            // 0x411cdc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x411CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x411CE0u; }
            if (ctx->pc != 0x411CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x411CE0u;
label_411ce0:
    // 0x411ce0: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_411ce4:
    if (ctx->pc == 0x411CE4u) {
        ctx->pc = 0x411CE8u;
        goto label_411ce8;
    }
    ctx->pc = 0x411CE0u;
    {
        const bool branch_taken_0x411ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411ce0) {
            ctx->pc = 0x411F78u;
            goto label_411f78;
        }
    }
    ctx->pc = 0x411CE8u;
label_411ce8:
    // 0x411ce8: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x411ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_411cec:
    // 0x411cec: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_411cf0:
    if (ctx->pc == 0x411CF0u) {
        ctx->pc = 0x411CF0u;
            // 0x411cf0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x411CF4u;
        goto label_411cf4;
    }
    ctx->pc = 0x411CECu;
    {
        const bool branch_taken_0x411cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x411CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411CECu;
            // 0x411cf0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411cec) {
            ctx->pc = 0x411F78u;
            goto label_411f78;
        }
    }
    ctx->pc = 0x411CF4u;
label_411cf4:
    // 0x411cf4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x411cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_411cf8:
    // 0x411cf8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x411cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_411cfc:
    // 0x411cfc: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x411cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_411d00:
    // 0x411d00: 0x27d10084  addiu       $s1, $fp, 0x84
    ctx->pc = 0x411d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_411d04:
    // 0x411d04: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x411d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_411d08:
    // 0x411d08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x411d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411d0c:
    // 0x411d0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x411d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_411d10:
    // 0x411d10: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x411d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_411d14:
    // 0x411d14: 0x8c54e378  lw          $s4, -0x1C88($v0)
    ctx->pc = 0x411d14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_411d18:
    // 0x411d18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x411d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_411d1c:
    // 0x411d1c: 0x8c73e370  lw          $s3, -0x1C90($v1)
    ctx->pc = 0x411d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_411d20:
    // 0x411d20: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x411d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_411d24:
    // 0x411d24: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x411d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_411d28:
    // 0x411d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x411d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_411d2c:
    // 0x411d2c: 0x8fc501fc  lw          $a1, 0x1FC($fp)
    ctx->pc = 0x411d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 508)));
label_411d30:
    // 0x411d30: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x411d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_411d34:
    // 0x411d34: 0x8fc201f8  lw          $v0, 0x1F8($fp)
    ctx->pc = 0x411d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 504)));
label_411d38:
    // 0x411d38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x411d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_411d3c:
    // 0x411d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x411d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_411d40:
    // 0x411d40: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x411d40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_411d44:
    // 0x411d44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x411d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_411d48:
    // 0x411d48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x411d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_411d4c:
    // 0x411d4c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x411d4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_411d50:
    // 0x411d50: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x411d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_411d54:
    // 0x411d54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x411d54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_411d58:
    // 0x411d58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x411d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411d5c:
    // 0x411d5c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x411d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_411d60:
    // 0x411d60: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x411d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_411d64:
    // 0x411d64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x411d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_411d68:
    // 0x411d68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x411d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_411d6c:
    // 0x411d6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_411d70:
    if (ctx->pc == 0x411D70u) {
        ctx->pc = 0x411D70u;
            // 0x411d70: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x411D74u;
        goto label_411d74;
    }
    ctx->pc = 0x411D6Cu;
    {
        const bool branch_taken_0x411d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411D6Cu;
            // 0x411d70: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411d6c) {
            ctx->pc = 0x411D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_411d50;
        }
    }
    ctx->pc = 0x411D74u;
label_411d74:
    // 0x411d74: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x411d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_411d78:
    // 0x411d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x411d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411d7c:
    // 0x411d7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x411d7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411d80:
    // 0x411d80: 0x43b804  sllv        $s7, $v1, $v0
    ctx->pc = 0x411d80u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_411d84:
    // 0x411d84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x411d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_411d88:
    // 0x411d88: 0xc454c240  lwc1        $f20, -0x3DC0($v0)
    ctx->pc = 0x411d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_411d8c:
    // 0x411d8c: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x411d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_411d90:
    // 0x411d90: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x411d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_411d94:
    // 0x411d94: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x411d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_411d98:
    // 0x411d98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x411d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411d9c:
    // 0x411d9c: 0x260400e4  addiu       $a0, $s0, 0xE4
    ctx->pc = 0x411d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
label_411da0:
    // 0x411da0: 0xc0e054c  jal         func_381530
label_411da4:
    if (ctx->pc == 0x411DA4u) {
        ctx->pc = 0x411DA4u;
            // 0x411da4: 0xafb70140  sw          $s7, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 23));
        ctx->pc = 0x411DA8u;
        goto label_411da8;
    }
    ctx->pc = 0x411DA0u;
    SET_GPR_U32(ctx, 31, 0x411DA8u);
    ctx->pc = 0x411DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DA0u;
            // 0x411da4: 0xafb70140  sw          $s7, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381530u;
    if (runtime->hasFunction(0x381530u)) {
        auto targetFn = runtime->lookupFunction(0x381530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DA8u; }
        if (ctx->pc != 0x411DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381530_0x381530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DA8u; }
        if (ctx->pc != 0x411DA8u) { return; }
    }
    ctx->pc = 0x411DA8u;
label_411da8:
    // 0x411da8: 0xc0d639c  jal         func_358E70
label_411dac:
    if (ctx->pc == 0x411DACu) {
        ctx->pc = 0x411DACu;
            // 0x411dac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x411DB0u;
        goto label_411db0;
    }
    ctx->pc = 0x411DA8u;
    SET_GPR_U32(ctx, 31, 0x411DB0u);
    ctx->pc = 0x411DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DA8u;
            // 0x411dac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DB0u; }
        if (ctx->pc != 0x411DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DB0u; }
        if (ctx->pc != 0x411DB0u) { return; }
    }
    ctx->pc = 0x411DB0u;
label_411db0:
    // 0x411db0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_411db4:
    if (ctx->pc == 0x411DB4u) {
        ctx->pc = 0x411DB8u;
        goto label_411db8;
    }
    ctx->pc = 0x411DB0u;
    {
        const bool branch_taken_0x411db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411db0) {
            ctx->pc = 0x411E80u;
            goto label_411e80;
        }
    }
    ctx->pc = 0x411DB8u;
label_411db8:
    // 0x411db8: 0xc1048c0  jal         func_412300
label_411dbc:
    if (ctx->pc == 0x411DBCu) {
        ctx->pc = 0x411DBCu;
            // 0x411dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411DC0u;
        goto label_411dc0;
    }
    ctx->pc = 0x411DB8u;
    SET_GPR_U32(ctx, 31, 0x411DC0u);
    ctx->pc = 0x411DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DB8u;
            // 0x411dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412300u;
    if (runtime->hasFunction(0x412300u)) {
        auto targetFn = runtime->lookupFunction(0x412300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DC0u; }
        if (ctx->pc != 0x411DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412300_0x412300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DC0u; }
        if (ctx->pc != 0x411DC0u) { return; }
    }
    ctx->pc = 0x411DC0u;
label_411dc0:
    // 0x411dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x411dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411dc4:
    // 0x411dc4: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_411dc8:
    if (ctx->pc == 0x411DC8u) {
        ctx->pc = 0x411DCCu;
        goto label_411dcc;
    }
    ctx->pc = 0x411DC4u;
    {
        const bool branch_taken_0x411dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x411dc4) {
            ctx->pc = 0x411E80u;
            goto label_411e80;
        }
    }
    ctx->pc = 0x411DCCu;
label_411dcc:
    // 0x411dcc: 0xc0d1c14  jal         func_347050
label_411dd0:
    if (ctx->pc == 0x411DD0u) {
        ctx->pc = 0x411DD0u;
            // 0x411dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411DD4u;
        goto label_411dd4;
    }
    ctx->pc = 0x411DCCu;
    SET_GPR_U32(ctx, 31, 0x411DD4u);
    ctx->pc = 0x411DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DCCu;
            // 0x411dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DD4u; }
        if (ctx->pc != 0x411DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DD4u; }
        if (ctx->pc != 0x411DD4u) { return; }
    }
    ctx->pc = 0x411DD4u;
label_411dd4:
    // 0x411dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x411dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411dd8:
    // 0x411dd8: 0xc04f278  jal         func_13C9E0
label_411ddc:
    if (ctx->pc == 0x411DDCu) {
        ctx->pc = 0x411DDCu;
            // 0x411ddc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x411DE0u;
        goto label_411de0;
    }
    ctx->pc = 0x411DD8u;
    SET_GPR_U32(ctx, 31, 0x411DE0u);
    ctx->pc = 0x411DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DD8u;
            // 0x411ddc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DE0u; }
        if (ctx->pc != 0x411DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DE0u; }
        if (ctx->pc != 0x411DE0u) { return; }
    }
    ctx->pc = 0x411DE0u;
label_411de0:
    // 0x411de0: 0xc0d1c10  jal         func_347040
label_411de4:
    if (ctx->pc == 0x411DE4u) {
        ctx->pc = 0x411DE4u;
            // 0x411de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411DE8u;
        goto label_411de8;
    }
    ctx->pc = 0x411DE0u;
    SET_GPR_U32(ctx, 31, 0x411DE8u);
    ctx->pc = 0x411DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DE0u;
            // 0x411de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DE8u; }
        if (ctx->pc != 0x411DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DE8u; }
        if (ctx->pc != 0x411DE8u) { return; }
    }
    ctx->pc = 0x411DE8u;
label_411de8:
    // 0x411de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x411de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411dec:
    // 0x411dec: 0xc04ce80  jal         func_133A00
label_411df0:
    if (ctx->pc == 0x411DF0u) {
        ctx->pc = 0x411DF0u;
            // 0x411df0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x411DF4u;
        goto label_411df4;
    }
    ctx->pc = 0x411DECu;
    SET_GPR_U32(ctx, 31, 0x411DF4u);
    ctx->pc = 0x411DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411DECu;
            // 0x411df0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DF4u; }
        if (ctx->pc != 0x411DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DF4u; }
        if (ctx->pc != 0x411DF4u) { return; }
    }
    ctx->pc = 0x411DF4u;
label_411df4:
    // 0x411df4: 0xc0d4108  jal         func_350420
label_411df8:
    if (ctx->pc == 0x411DF8u) {
        ctx->pc = 0x411DFCu;
        goto label_411dfc;
    }
    ctx->pc = 0x411DF4u;
    SET_GPR_U32(ctx, 31, 0x411DFCu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DFCu; }
        if (ctx->pc != 0x411DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411DFCu; }
        if (ctx->pc != 0x411DFCu) { return; }
    }
    ctx->pc = 0x411DFCu;
label_411dfc:
    // 0x411dfc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x411dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_411e00:
    // 0x411e00: 0xc0d4104  jal         func_350410
label_411e04:
    if (ctx->pc == 0x411E04u) {
        ctx->pc = 0x411E04u;
            // 0x411e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411E08u;
        goto label_411e08;
    }
    ctx->pc = 0x411E00u;
    SET_GPR_U32(ctx, 31, 0x411E08u);
    ctx->pc = 0x411E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411E00u;
            // 0x411e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E08u; }
        if (ctx->pc != 0x411E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E08u; }
        if (ctx->pc != 0x411E08u) { return; }
    }
    ctx->pc = 0x411E08u;
label_411e08:
    // 0x411e08: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x411e08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_411e0c:
    // 0x411e0c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x411e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_411e10:
    // 0x411e10: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x411e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_411e14:
    // 0x411e14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x411e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411e18:
    // 0x411e18: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x411e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_411e1c:
    // 0x411e1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x411e1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_411e20:
    // 0x411e20: 0xc0d40ac  jal         func_3502B0
label_411e24:
    if (ctx->pc == 0x411E24u) {
        ctx->pc = 0x411E24u;
            // 0x411e24: 0x27a90144  addiu       $t1, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->pc = 0x411E28u;
        goto label_411e28;
    }
    ctx->pc = 0x411E20u;
    SET_GPR_U32(ctx, 31, 0x411E28u);
    ctx->pc = 0x411E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411E20u;
            // 0x411e24: 0x27a90144  addiu       $t1, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E28u; }
        if (ctx->pc != 0x411E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E28u; }
        if (ctx->pc != 0x411E28u) { return; }
    }
    ctx->pc = 0x411E28u;
label_411e28:
    // 0x411e28: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x411e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_411e2c:
    // 0x411e2c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_411e30:
    if (ctx->pc == 0x411E30u) {
        ctx->pc = 0x411E30u;
            // 0x411e30: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x411E34u;
        goto label_411e34;
    }
    ctx->pc = 0x411E2Cu;
    {
        const bool branch_taken_0x411e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411E2Cu;
            // 0x411e30: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e2c) {
            ctx->pc = 0x411E80u;
            goto label_411e80;
        }
    }
    ctx->pc = 0x411E34u;
label_411e34:
    // 0x411e34: 0x260400e4  addiu       $a0, $s0, 0xE4
    ctx->pc = 0x411e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
label_411e38:
    // 0x411e38: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x411e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_411e3c:
    // 0x411e3c: 0xc0e0544  jal         func_381510
label_411e40:
    if (ctx->pc == 0x411E40u) {
        ctx->pc = 0x411E40u;
            // 0x411e40: 0xafb7013c  sw          $s7, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 23));
        ctx->pc = 0x411E44u;
        goto label_411e44;
    }
    ctx->pc = 0x411E3Cu;
    SET_GPR_U32(ctx, 31, 0x411E44u);
    ctx->pc = 0x411E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411E3Cu;
            // 0x411e40: 0xafb7013c  sw          $s7, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381510u;
    if (runtime->hasFunction(0x381510u)) {
        auto targetFn = runtime->lookupFunction(0x381510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E44u; }
        if (ctx->pc != 0x411E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381510_0x381510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E44u; }
        if (ctx->pc != 0x411E44u) { return; }
    }
    ctx->pc = 0x411E44u;
label_411e44:
    // 0x411e44: 0xc1048bc  jal         func_4122F0
label_411e48:
    if (ctx->pc == 0x411E48u) {
        ctx->pc = 0x411E4Cu;
        goto label_411e4c;
    }
    ctx->pc = 0x411E44u;
    SET_GPR_U32(ctx, 31, 0x411E4Cu);
    ctx->pc = 0x4122F0u;
    if (runtime->hasFunction(0x4122F0u)) {
        auto targetFn = runtime->lookupFunction(0x4122F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E4Cu; }
        if (ctx->pc != 0x411E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004122F0_0x4122f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E4Cu; }
        if (ctx->pc != 0x411E4Cu) { return; }
    }
    ctx->pc = 0x411E4Cu;
label_411e4c:
    // 0x411e4c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x411e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_411e50:
    // 0x411e50: 0x3c03426c  lui         $v1, 0x426C
    ctx->pc = 0x411e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17004 << 16));
label_411e54:
    // 0x411e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x411e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411e58:
    // 0x411e58: 0x0  nop
    ctx->pc = 0x411e58u;
    // NOP
label_411e5c:
    // 0x411e5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x411e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_411e60:
    // 0x411e60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_411e64:
    if (ctx->pc == 0x411E64u) {
        ctx->pc = 0x411E64u;
            // 0x411e64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x411E68u;
        goto label_411e68;
    }
    ctx->pc = 0x411E60u;
    {
        const bool branch_taken_0x411e60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x411E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411E60u;
            // 0x411e64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e60) {
            ctx->pc = 0x411E6Cu;
            goto label_411e6c;
        }
    }
    ctx->pc = 0x411E68u;
label_411e68:
    // 0x411e68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x411e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411e6c:
    // 0x411e6c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x411e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_411e70:
    // 0x411e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x411e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411e74:
    // 0x411e74: 0xc1048a4  jal         func_412290
label_411e78:
    if (ctx->pc == 0x411E78u) {
        ctx->pc = 0x411E78u;
            // 0x411e78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411E7Cu;
        goto label_411e7c;
    }
    ctx->pc = 0x411E74u;
    SET_GPR_U32(ctx, 31, 0x411E7Cu);
    ctx->pc = 0x411E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411E74u;
            // 0x411e78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412290u;
    if (runtime->hasFunction(0x412290u)) {
        auto targetFn = runtime->lookupFunction(0x412290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E7Cu; }
        if (ctx->pc != 0x411E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412290_0x412290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411E7Cu; }
        if (ctx->pc != 0x411E7Cu) { return; }
    }
    ctx->pc = 0x411E7Cu;
label_411e7c:
    // 0x411e7c: 0x0  nop
    ctx->pc = 0x411e7cu;
    // NOP
label_411e80:
    // 0x411e80: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x411e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_411e84:
    // 0x411e84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x411e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_411e88:
    // 0x411e88: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x411e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_411e8c:
    // 0x411e8c: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_411e90:
    if (ctx->pc == 0x411E90u) {
        ctx->pc = 0x411E90u;
            // 0x411e90: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x411E94u;
        goto label_411e94;
    }
    ctx->pc = 0x411E8Cu;
    {
        const bool branch_taken_0x411e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411E8Cu;
            // 0x411e90: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e8c) {
            ctx->pc = 0x411D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_411d8c;
        }
    }
    ctx->pc = 0x411E94u;
label_411e94:
    // 0x411e94: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x411e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_411e98:
    // 0x411e98: 0xc1048a0  jal         func_412280
label_411e9c:
    if (ctx->pc == 0x411E9Cu) {
        ctx->pc = 0x411E9Cu;
            // 0x411e9c: 0x27c501f0  addiu       $a1, $fp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
        ctx->pc = 0x411EA0u;
        goto label_411ea0;
    }
    ctx->pc = 0x411E98u;
    SET_GPR_U32(ctx, 31, 0x411EA0u);
    ctx->pc = 0x411E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411E98u;
            // 0x411e9c: 0x27c501f0  addiu       $a1, $fp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412280u;
    if (runtime->hasFunction(0x412280u)) {
        auto targetFn = runtime->lookupFunction(0x412280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EA0u; }
        if (ctx->pc != 0x411EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412280_0x412280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EA0u; }
        if (ctx->pc != 0x411EA0u) { return; }
    }
    ctx->pc = 0x411EA0u;
label_411ea0:
    // 0x411ea0: 0x27c501f0  addiu       $a1, $fp, 0x1F0
    ctx->pc = 0x411ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
label_411ea4:
    // 0x411ea4: 0xc104898  jal         func_412260
label_411ea8:
    if (ctx->pc == 0x411EA8u) {
        ctx->pc = 0x411EA8u;
            // 0x411ea8: 0x27a40134  addiu       $a0, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->pc = 0x411EACu;
        goto label_411eac;
    }
    ctx->pc = 0x411EA4u;
    SET_GPR_U32(ctx, 31, 0x411EACu);
    ctx->pc = 0x411EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411EA4u;
            // 0x411ea8: 0x27a40134  addiu       $a0, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412260u;
    if (runtime->hasFunction(0x412260u)) {
        auto targetFn = runtime->lookupFunction(0x412260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EACu; }
        if (ctx->pc != 0x411EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412260_0x412260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EACu; }
        if (ctx->pc != 0x411EACu) { return; }
    }
    ctx->pc = 0x411EACu;
label_411eac:
    // 0x411eac: 0xc104894  jal         func_412250
label_411eb0:
    if (ctx->pc == 0x411EB0u) {
        ctx->pc = 0x411EB0u;
            // 0x411eb0: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->pc = 0x411EB4u;
        goto label_411eb4;
    }
    ctx->pc = 0x411EACu;
    SET_GPR_U32(ctx, 31, 0x411EB4u);
    ctx->pc = 0x411EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411EACu;
            // 0x411eb0: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412250u;
    if (runtime->hasFunction(0x412250u)) {
        auto targetFn = runtime->lookupFunction(0x412250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EB4u; }
        if (ctx->pc != 0x411EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412250_0x412250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EB4u; }
        if (ctx->pc != 0x411EB4u) { return; }
    }
    ctx->pc = 0x411EB4u;
label_411eb4:
    // 0x411eb4: 0xc104890  jal         func_412240
label_411eb8:
    if (ctx->pc == 0x411EB8u) {
        ctx->pc = 0x411EB8u;
            // 0x411eb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411EBCu;
        goto label_411ebc;
    }
    ctx->pc = 0x411EB4u;
    SET_GPR_U32(ctx, 31, 0x411EBCu);
    ctx->pc = 0x411EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411EB4u;
            // 0x411eb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412240u;
    if (runtime->hasFunction(0x412240u)) {
        auto targetFn = runtime->lookupFunction(0x412240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EBCu; }
        if (ctx->pc != 0x411EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412240_0x412240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EBCu; }
        if (ctx->pc != 0x411EBCu) { return; }
    }
    ctx->pc = 0x411EBCu;
label_411ebc:
    // 0x411ebc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_411ec0:
    if (ctx->pc == 0x411EC0u) {
        ctx->pc = 0x411EC4u;
        goto label_411ec4;
    }
    ctx->pc = 0x411EBCu;
    {
        const bool branch_taken_0x411ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411ebc) {
            ctx->pc = 0x411F50u;
            goto label_411f50;
        }
    }
    ctx->pc = 0x411EC4u;
label_411ec4:
    // 0x411ec4: 0xc104894  jal         func_412250
label_411ec8:
    if (ctx->pc == 0x411EC8u) {
        ctx->pc = 0x411EC8u;
            // 0x411ec8: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->pc = 0x411ECCu;
        goto label_411ecc;
    }
    ctx->pc = 0x411EC4u;
    SET_GPR_U32(ctx, 31, 0x411ECCu);
    ctx->pc = 0x411EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411EC4u;
            // 0x411ec8: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412250u;
    if (runtime->hasFunction(0x412250u)) {
        auto targetFn = runtime->lookupFunction(0x412250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411ECCu; }
        if (ctx->pc != 0x411ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412250_0x412250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411ECCu; }
        if (ctx->pc != 0x411ECCu) { return; }
    }
    ctx->pc = 0x411ECCu;
label_411ecc:
    // 0x411ecc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x411eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411ed0:
    // 0x411ed0: 0xc10488c  jal         func_412230
label_411ed4:
    if (ctx->pc == 0x411ED4u) {
        ctx->pc = 0x411ED4u;
            // 0x411ed4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x411ED8u;
        goto label_411ed8;
    }
    ctx->pc = 0x411ED0u;
    SET_GPR_U32(ctx, 31, 0x411ED8u);
    ctx->pc = 0x411ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411ED0u;
            // 0x411ed4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412230u;
    if (runtime->hasFunction(0x412230u)) {
        auto targetFn = runtime->lookupFunction(0x412230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411ED8u; }
        if (ctx->pc != 0x411ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412230_0x412230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411ED8u; }
        if (ctx->pc != 0x411ED8u) { return; }
    }
    ctx->pc = 0x411ED8u;
label_411ed8:
    // 0x411ed8: 0xc104894  jal         func_412250
label_411edc:
    if (ctx->pc == 0x411EDCu) {
        ctx->pc = 0x411EDCu;
            // 0x411edc: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->pc = 0x411EE0u;
        goto label_411ee0;
    }
    ctx->pc = 0x411ED8u;
    SET_GPR_U32(ctx, 31, 0x411EE0u);
    ctx->pc = 0x411EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411ED8u;
            // 0x411edc: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412250u;
    if (runtime->hasFunction(0x412250u)) {
        auto targetFn = runtime->lookupFunction(0x412250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EE0u; }
        if (ctx->pc != 0x411EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412250_0x412250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EE0u; }
        if (ctx->pc != 0x411EE0u) { return; }
    }
    ctx->pc = 0x411EE0u;
label_411ee0:
    // 0x411ee0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x411ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411ee4:
    // 0x411ee4: 0xc104884  jal         func_412210
label_411ee8:
    if (ctx->pc == 0x411EE8u) {
        ctx->pc = 0x411EE8u;
            // 0x411ee8: 0x27a4012c  addiu       $a0, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x411EECu;
        goto label_411eec;
    }
    ctx->pc = 0x411EE4u;
    SET_GPR_U32(ctx, 31, 0x411EECu);
    ctx->pc = 0x411EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411EE4u;
            // 0x411ee8: 0x27a4012c  addiu       $a0, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412210u;
    if (runtime->hasFunction(0x412210u)) {
        auto targetFn = runtime->lookupFunction(0x412210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EECu; }
        if (ctx->pc != 0x411EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412210_0x412210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EECu; }
        if (ctx->pc != 0x411EECu) { return; }
    }
    ctx->pc = 0x411EECu;
label_411eec:
    // 0x411eec: 0xc10487c  jal         func_4121F0
label_411ef0:
    if (ctx->pc == 0x411EF0u) {
        ctx->pc = 0x411EF4u;
        goto label_411ef4;
    }
    ctx->pc = 0x411EECu;
    SET_GPR_U32(ctx, 31, 0x411EF4u);
    ctx->pc = 0x4121F0u;
    if (runtime->hasFunction(0x4121F0u)) {
        auto targetFn = runtime->lookupFunction(0x4121F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EF4u; }
        if (ctx->pc != 0x411EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004121F0_0x4121f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EF4u; }
        if (ctx->pc != 0x411EF4u) { return; }
    }
    ctx->pc = 0x411EF4u;
label_411ef4:
    // 0x411ef4: 0xc04e738  jal         func_139CE0
label_411ef8:
    if (ctx->pc == 0x411EF8u) {
        ctx->pc = 0x411EF8u;
            // 0x411ef8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x411EFCu;
        goto label_411efc;
    }
    ctx->pc = 0x411EF4u;
    SET_GPR_U32(ctx, 31, 0x411EFCu);
    ctx->pc = 0x411EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411EF4u;
            // 0x411ef8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EFCu; }
        if (ctx->pc != 0x411EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411EFCu; }
        if (ctx->pc != 0x411EFCu) { return; }
    }
    ctx->pc = 0x411EFCu;
label_411efc:
    // 0x411efc: 0x0  nop
    ctx->pc = 0x411efcu;
    // NOP
label_411f00:
    // 0x411f00: 0xc104878  jal         func_4121E0
label_411f04:
    if (ctx->pc == 0x411F04u) {
        ctx->pc = 0x411F04u;
            // 0x411f04: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x411F08u;
        goto label_411f08;
    }
    ctx->pc = 0x411F00u;
    SET_GPR_U32(ctx, 31, 0x411F08u);
    ctx->pc = 0x411F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F00u;
            // 0x411f04: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4121E0u;
    if (runtime->hasFunction(0x4121E0u)) {
        auto targetFn = runtime->lookupFunction(0x4121E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F08u; }
        if (ctx->pc != 0x411F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004121E0_0x4121e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F08u; }
        if (ctx->pc != 0x411F08u) { return; }
    }
    ctx->pc = 0x411F08u;
label_411f08:
    // 0x411f08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x411f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411f0c:
    // 0x411f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x411f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411f10:
    // 0x411f10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x411f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_411f14:
    // 0x411f14: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x411f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_411f18:
    // 0x411f18: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x411f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_411f1c:
    // 0x411f1c: 0xc104824  jal         func_412090
label_411f20:
    if (ctx->pc == 0x411F20u) {
        ctx->pc = 0x411F20u;
            // 0x411f20: 0x27a900e0  addiu       $t1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x411F24u;
        goto label_411f24;
    }
    ctx->pc = 0x411F1Cu;
    SET_GPR_U32(ctx, 31, 0x411F24u);
    ctx->pc = 0x411F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F1Cu;
            // 0x411f20: 0x27a900e0  addiu       $t1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412090u;
    if (runtime->hasFunction(0x412090u)) {
        auto targetFn = runtime->lookupFunction(0x412090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F24u; }
        if (ctx->pc != 0x411F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412090_0x412090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F24u; }
        if (ctx->pc != 0x411F24u) { return; }
    }
    ctx->pc = 0x411F24u;
label_411f24:
    // 0x411f24: 0xc10481c  jal         func_412070
label_411f28:
    if (ctx->pc == 0x411F28u) {
        ctx->pc = 0x411F28u;
            // 0x411f28: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x411F2Cu;
        goto label_411f2c;
    }
    ctx->pc = 0x411F24u;
    SET_GPR_U32(ctx, 31, 0x411F2Cu);
    ctx->pc = 0x411F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F24u;
            // 0x411f28: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412070u;
    if (runtime->hasFunction(0x412070u)) {
        auto targetFn = runtime->lookupFunction(0x412070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F2Cu; }
        if (ctx->pc != 0x411F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412070_0x412070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F2Cu; }
        if (ctx->pc != 0x411F2Cu) { return; }
    }
    ctx->pc = 0x411F2Cu;
label_411f2c:
    // 0x411f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x411f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411f30:
    // 0x411f30: 0xc104814  jal         func_412050
label_411f34:
    if (ctx->pc == 0x411F34u) {
        ctx->pc = 0x411F34u;
            // 0x411f34: 0x27a5012c  addiu       $a1, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x411F38u;
        goto label_411f38;
    }
    ctx->pc = 0x411F30u;
    SET_GPR_U32(ctx, 31, 0x411F38u);
    ctx->pc = 0x411F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F30u;
            // 0x411f34: 0x27a5012c  addiu       $a1, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412050u;
    if (runtime->hasFunction(0x412050u)) {
        auto targetFn = runtime->lookupFunction(0x412050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F38u; }
        if (ctx->pc != 0x411F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00412050_0x412050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F38u; }
        if (ctx->pc != 0x411F38u) { return; }
    }
    ctx->pc = 0x411F38u;
label_411f38:
    // 0x411f38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_411f3c:
    if (ctx->pc == 0x411F3Cu) {
        ctx->pc = 0x411F40u;
        goto label_411f40;
    }
    ctx->pc = 0x411F38u;
    {
        const bool branch_taken_0x411f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x411f38) {
            ctx->pc = 0x411F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_411f00;
        }
    }
    ctx->pc = 0x411F40u;
label_411f40:
    // 0x411f40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x411f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_411f44:
    // 0x411f44: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x411f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_411f48:
    // 0x411f48: 0xc1047fc  jal         func_411FF0
label_411f4c:
    if (ctx->pc == 0x411F4Cu) {
        ctx->pc = 0x411F4Cu;
            // 0x411f4c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x411F50u;
        goto label_411f50;
    }
    ctx->pc = 0x411F48u;
    SET_GPR_U32(ctx, 31, 0x411F50u);
    ctx->pc = 0x411F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F48u;
            // 0x411f4c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411FF0u;
    if (runtime->hasFunction(0x411FF0u)) {
        auto targetFn = runtime->lookupFunction(0x411FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F50u; }
        if (ctx->pc != 0x411F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00411FF0_0x411ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F50u; }
        if (ctx->pc != 0x411F50u) { return; }
    }
    ctx->pc = 0x411F50u;
label_411f50:
    // 0x411f50: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x411f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_411f54:
    // 0x411f54: 0xc1047f4  jal         func_411FD0
label_411f58:
    if (ctx->pc == 0x411F58u) {
        ctx->pc = 0x411F58u;
            // 0x411f58: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x411F5Cu;
        goto label_411f5c;
    }
    ctx->pc = 0x411F54u;
    SET_GPR_U32(ctx, 31, 0x411F5Cu);
    ctx->pc = 0x411F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F54u;
            // 0x411f58: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411FD0u;
    if (runtime->hasFunction(0x411FD0u)) {
        auto targetFn = runtime->lookupFunction(0x411FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F5Cu; }
        if (ctx->pc != 0x411F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00411FD0_0x411fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F5Cu; }
        if (ctx->pc != 0x411F5Cu) { return; }
    }
    ctx->pc = 0x411F5Cu;
label_411f5c:
    // 0x411f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x411f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411f60:
    // 0x411f60: 0xc1047ec  jal         func_411FB0
label_411f64:
    if (ctx->pc == 0x411F64u) {
        ctx->pc = 0x411F64u;
            // 0x411f64: 0x27a50134  addiu       $a1, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->pc = 0x411F68u;
        goto label_411f68;
    }
    ctx->pc = 0x411F60u;
    SET_GPR_U32(ctx, 31, 0x411F68u);
    ctx->pc = 0x411F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411F60u;
            // 0x411f64: 0x27a50134  addiu       $a1, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411FB0u;
    if (runtime->hasFunction(0x411FB0u)) {
        auto targetFn = runtime->lookupFunction(0x411FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F68u; }
        if (ctx->pc != 0x411F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00411FB0_0x411fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411F68u; }
        if (ctx->pc != 0x411F68u) { return; }
    }
    ctx->pc = 0x411F68u;
label_411f68:
    // 0x411f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x411f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_411f6c:
    // 0x411f6c: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_411f70:
    if (ctx->pc == 0x411F70u) {
        ctx->pc = 0x411F74u;
        goto label_411f74;
    }
    ctx->pc = 0x411F6Cu;
    {
        const bool branch_taken_0x411f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x411f6c) {
            ctx->pc = 0x411EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_411eac;
        }
    }
    ctx->pc = 0x411F74u;
label_411f74:
    // 0x411f74: 0x0  nop
    ctx->pc = 0x411f74u;
    // NOP
label_411f78:
    // 0x411f78: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x411f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_411f7c:
    // 0x411f7c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x411f7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_411f80:
    // 0x411f80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x411f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_411f84:
    // 0x411f84: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x411f84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_411f88:
    // 0x411f88: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x411f88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_411f8c:
    // 0x411f8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x411f8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_411f90:
    // 0x411f90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x411f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411f94:
    // 0x411f94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x411f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411f98:
    // 0x411f98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x411f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411f9c:
    // 0x411f9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x411f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_411fa0:
    // 0x411fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x411fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411fa4:
    // 0x411fa4: 0x3e00008  jr          $ra
label_411fa8:
    if (ctx->pc == 0x411FA8u) {
        ctx->pc = 0x411FA8u;
            // 0x411fa8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x411FACu;
        goto label_411fac;
    }
    ctx->pc = 0x411FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411FA4u;
            // 0x411fa8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411FACu;
label_411fac:
    // 0x411fac: 0x0  nop
    ctx->pc = 0x411facu;
    // NOP
}
