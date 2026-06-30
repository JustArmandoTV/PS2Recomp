#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002359B0
// Address: 0x2359b0 - 0x235f20
void sub_002359B0_0x2359b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002359B0_0x2359b0");
#endif

    switch (ctx->pc) {
        case 0x2359b0u: goto label_2359b0;
        case 0x2359b4u: goto label_2359b4;
        case 0x2359b8u: goto label_2359b8;
        case 0x2359bcu: goto label_2359bc;
        case 0x2359c0u: goto label_2359c0;
        case 0x2359c4u: goto label_2359c4;
        case 0x2359c8u: goto label_2359c8;
        case 0x2359ccu: goto label_2359cc;
        case 0x2359d0u: goto label_2359d0;
        case 0x2359d4u: goto label_2359d4;
        case 0x2359d8u: goto label_2359d8;
        case 0x2359dcu: goto label_2359dc;
        case 0x2359e0u: goto label_2359e0;
        case 0x2359e4u: goto label_2359e4;
        case 0x2359e8u: goto label_2359e8;
        case 0x2359ecu: goto label_2359ec;
        case 0x2359f0u: goto label_2359f0;
        case 0x2359f4u: goto label_2359f4;
        case 0x2359f8u: goto label_2359f8;
        case 0x2359fcu: goto label_2359fc;
        case 0x235a00u: goto label_235a00;
        case 0x235a04u: goto label_235a04;
        case 0x235a08u: goto label_235a08;
        case 0x235a0cu: goto label_235a0c;
        case 0x235a10u: goto label_235a10;
        case 0x235a14u: goto label_235a14;
        case 0x235a18u: goto label_235a18;
        case 0x235a1cu: goto label_235a1c;
        case 0x235a20u: goto label_235a20;
        case 0x235a24u: goto label_235a24;
        case 0x235a28u: goto label_235a28;
        case 0x235a2cu: goto label_235a2c;
        case 0x235a30u: goto label_235a30;
        case 0x235a34u: goto label_235a34;
        case 0x235a38u: goto label_235a38;
        case 0x235a3cu: goto label_235a3c;
        case 0x235a40u: goto label_235a40;
        case 0x235a44u: goto label_235a44;
        case 0x235a48u: goto label_235a48;
        case 0x235a4cu: goto label_235a4c;
        case 0x235a50u: goto label_235a50;
        case 0x235a54u: goto label_235a54;
        case 0x235a58u: goto label_235a58;
        case 0x235a5cu: goto label_235a5c;
        case 0x235a60u: goto label_235a60;
        case 0x235a64u: goto label_235a64;
        case 0x235a68u: goto label_235a68;
        case 0x235a6cu: goto label_235a6c;
        case 0x235a70u: goto label_235a70;
        case 0x235a74u: goto label_235a74;
        case 0x235a78u: goto label_235a78;
        case 0x235a7cu: goto label_235a7c;
        case 0x235a80u: goto label_235a80;
        case 0x235a84u: goto label_235a84;
        case 0x235a88u: goto label_235a88;
        case 0x235a8cu: goto label_235a8c;
        case 0x235a90u: goto label_235a90;
        case 0x235a94u: goto label_235a94;
        case 0x235a98u: goto label_235a98;
        case 0x235a9cu: goto label_235a9c;
        case 0x235aa0u: goto label_235aa0;
        case 0x235aa4u: goto label_235aa4;
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        case 0x235af0u: goto label_235af0;
        case 0x235af4u: goto label_235af4;
        case 0x235af8u: goto label_235af8;
        case 0x235afcu: goto label_235afc;
        case 0x235b00u: goto label_235b00;
        case 0x235b04u: goto label_235b04;
        case 0x235b08u: goto label_235b08;
        case 0x235b0cu: goto label_235b0c;
        case 0x235b10u: goto label_235b10;
        case 0x235b14u: goto label_235b14;
        case 0x235b18u: goto label_235b18;
        case 0x235b1cu: goto label_235b1c;
        case 0x235b20u: goto label_235b20;
        case 0x235b24u: goto label_235b24;
        case 0x235b28u: goto label_235b28;
        case 0x235b2cu: goto label_235b2c;
        case 0x235b30u: goto label_235b30;
        case 0x235b34u: goto label_235b34;
        case 0x235b38u: goto label_235b38;
        case 0x235b3cu: goto label_235b3c;
        case 0x235b40u: goto label_235b40;
        case 0x235b44u: goto label_235b44;
        case 0x235b48u: goto label_235b48;
        case 0x235b4cu: goto label_235b4c;
        case 0x235b50u: goto label_235b50;
        case 0x235b54u: goto label_235b54;
        case 0x235b58u: goto label_235b58;
        case 0x235b5cu: goto label_235b5c;
        case 0x235b60u: goto label_235b60;
        case 0x235b64u: goto label_235b64;
        case 0x235b68u: goto label_235b68;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b70u: goto label_235b70;
        case 0x235b74u: goto label_235b74;
        case 0x235b78u: goto label_235b78;
        case 0x235b7cu: goto label_235b7c;
        case 0x235b80u: goto label_235b80;
        case 0x235b84u: goto label_235b84;
        case 0x235b88u: goto label_235b88;
        case 0x235b8cu: goto label_235b8c;
        case 0x235b90u: goto label_235b90;
        case 0x235b94u: goto label_235b94;
        case 0x235b98u: goto label_235b98;
        case 0x235b9cu: goto label_235b9c;
        case 0x235ba0u: goto label_235ba0;
        case 0x235ba4u: goto label_235ba4;
        case 0x235ba8u: goto label_235ba8;
        case 0x235bacu: goto label_235bac;
        case 0x235bb0u: goto label_235bb0;
        case 0x235bb4u: goto label_235bb4;
        case 0x235bb8u: goto label_235bb8;
        case 0x235bbcu: goto label_235bbc;
        case 0x235bc0u: goto label_235bc0;
        case 0x235bc4u: goto label_235bc4;
        case 0x235bc8u: goto label_235bc8;
        case 0x235bccu: goto label_235bcc;
        case 0x235bd0u: goto label_235bd0;
        case 0x235bd4u: goto label_235bd4;
        case 0x235bd8u: goto label_235bd8;
        case 0x235bdcu: goto label_235bdc;
        case 0x235be0u: goto label_235be0;
        case 0x235be4u: goto label_235be4;
        case 0x235be8u: goto label_235be8;
        case 0x235becu: goto label_235bec;
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        case 0x235c70u: goto label_235c70;
        case 0x235c74u: goto label_235c74;
        case 0x235c78u: goto label_235c78;
        case 0x235c7cu: goto label_235c7c;
        case 0x235c80u: goto label_235c80;
        case 0x235c84u: goto label_235c84;
        case 0x235c88u: goto label_235c88;
        case 0x235c8cu: goto label_235c8c;
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        case 0x235d30u: goto label_235d30;
        case 0x235d34u: goto label_235d34;
        case 0x235d38u: goto label_235d38;
        case 0x235d3cu: goto label_235d3c;
        case 0x235d40u: goto label_235d40;
        case 0x235d44u: goto label_235d44;
        case 0x235d48u: goto label_235d48;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d50u: goto label_235d50;
        case 0x235d54u: goto label_235d54;
        case 0x235d58u: goto label_235d58;
        case 0x235d5cu: goto label_235d5c;
        case 0x235d60u: goto label_235d60;
        case 0x235d64u: goto label_235d64;
        case 0x235d68u: goto label_235d68;
        case 0x235d6cu: goto label_235d6c;
        case 0x235d70u: goto label_235d70;
        case 0x235d74u: goto label_235d74;
        case 0x235d78u: goto label_235d78;
        case 0x235d7cu: goto label_235d7c;
        case 0x235d80u: goto label_235d80;
        case 0x235d84u: goto label_235d84;
        case 0x235d88u: goto label_235d88;
        case 0x235d8cu: goto label_235d8c;
        case 0x235d90u: goto label_235d90;
        case 0x235d94u: goto label_235d94;
        case 0x235d98u: goto label_235d98;
        case 0x235d9cu: goto label_235d9c;
        case 0x235da0u: goto label_235da0;
        case 0x235da4u: goto label_235da4;
        case 0x235da8u: goto label_235da8;
        case 0x235dacu: goto label_235dac;
        case 0x235db0u: goto label_235db0;
        case 0x235db4u: goto label_235db4;
        case 0x235db8u: goto label_235db8;
        case 0x235dbcu: goto label_235dbc;
        case 0x235dc0u: goto label_235dc0;
        case 0x235dc4u: goto label_235dc4;
        case 0x235dc8u: goto label_235dc8;
        case 0x235dccu: goto label_235dcc;
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd4u: goto label_235dd4;
        case 0x235dd8u: goto label_235dd8;
        case 0x235ddcu: goto label_235ddc;
        case 0x235de0u: goto label_235de0;
        case 0x235de4u: goto label_235de4;
        case 0x235de8u: goto label_235de8;
        case 0x235decu: goto label_235dec;
        case 0x235df0u: goto label_235df0;
        case 0x235df4u: goto label_235df4;
        case 0x235df8u: goto label_235df8;
        case 0x235dfcu: goto label_235dfc;
        case 0x235e00u: goto label_235e00;
        case 0x235e04u: goto label_235e04;
        case 0x235e08u: goto label_235e08;
        case 0x235e0cu: goto label_235e0c;
        case 0x235e10u: goto label_235e10;
        case 0x235e14u: goto label_235e14;
        case 0x235e18u: goto label_235e18;
        case 0x235e1cu: goto label_235e1c;
        case 0x235e20u: goto label_235e20;
        case 0x235e24u: goto label_235e24;
        case 0x235e28u: goto label_235e28;
        case 0x235e2cu: goto label_235e2c;
        case 0x235e30u: goto label_235e30;
        case 0x235e34u: goto label_235e34;
        case 0x235e38u: goto label_235e38;
        case 0x235e3cu: goto label_235e3c;
        case 0x235e40u: goto label_235e40;
        case 0x235e44u: goto label_235e44;
        case 0x235e48u: goto label_235e48;
        case 0x235e4cu: goto label_235e4c;
        case 0x235e50u: goto label_235e50;
        case 0x235e54u: goto label_235e54;
        case 0x235e58u: goto label_235e58;
        case 0x235e5cu: goto label_235e5c;
        case 0x235e60u: goto label_235e60;
        case 0x235e64u: goto label_235e64;
        case 0x235e68u: goto label_235e68;
        case 0x235e6cu: goto label_235e6c;
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        default: break;
    }

    ctx->pc = 0x2359b0u;

label_2359b0:
    // 0x2359b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2359b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2359b4:
    // 0x2359b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2359b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2359b8:
    // 0x2359b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2359b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2359bc:
    // 0x2359bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2359bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2359c0:
    // 0x2359c0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_2359c4:
    if (ctx->pc == 0x2359C4u) {
        ctx->pc = 0x2359C4u;
            // 0x2359c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2359C8u;
        goto label_2359c8;
    }
    ctx->pc = 0x2359C0u;
    {
        const bool branch_taken_0x2359c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2359c0) {
            ctx->pc = 0x2359C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2359C0u;
            // 0x2359c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235A20u;
            goto label_235a20;
        }
    }
    ctx->pc = 0x2359C8u;
label_2359c8:
    // 0x2359c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2359c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2359cc:
    // 0x2359cc: 0x2442f140  addiu       $v0, $v0, -0xEC0
    ctx->pc = 0x2359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
label_2359d0:
    // 0x2359d0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2359d4:
    if (ctx->pc == 0x2359D4u) {
        ctx->pc = 0x2359D4u;
            // 0x2359d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2359D8u;
        goto label_2359d8;
    }
    ctx->pc = 0x2359D0u;
    {
        const bool branch_taken_0x2359d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359D0u;
            // 0x2359d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359d0) {
            ctx->pc = 0x2359F4u;
            goto label_2359f4;
        }
    }
    ctx->pc = 0x2359D8u;
label_2359d8:
    // 0x2359d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2359dc:
    // 0x2359dc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2359dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2359e0:
    // 0x2359e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2359e4:
    if (ctx->pc == 0x2359E4u) {
        ctx->pc = 0x2359E4u;
            // 0x2359e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2359E8u;
        goto label_2359e8;
    }
    ctx->pc = 0x2359E0u;
    {
        const bool branch_taken_0x2359e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359E0u;
            // 0x2359e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359e0) {
            ctx->pc = 0x2359F4u;
            goto label_2359f4;
        }
    }
    ctx->pc = 0x2359E8u;
label_2359e8:
    // 0x2359e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2359e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2359ec:
    // 0x2359ec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2359ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2359f0:
    // 0x2359f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2359f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2359f4:
    // 0x2359f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2359f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2359f8:
    // 0x2359f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2359f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2359fc:
    // 0x2359fc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_235a00:
    if (ctx->pc == 0x235A00u) {
        ctx->pc = 0x235A04u;
        goto label_235a04;
    }
    ctx->pc = 0x2359FCu;
    {
        const bool branch_taken_0x2359fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2359fc) {
            ctx->pc = 0x235A1Cu;
            goto label_235a1c;
        }
    }
    ctx->pc = 0x235A04u;
label_235a04:
    // 0x235a04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235a08:
    // 0x235a08: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x235a08u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_235a0c:
    // 0x235a0c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x235a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_235a10:
    // 0x235a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235a14:
    // 0x235a14: 0xc0a7ab4  jal         func_29EAD0
label_235a18:
    if (ctx->pc == 0x235A18u) {
        ctx->pc = 0x235A18u;
            // 0x235a18: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x235A1Cu;
        goto label_235a1c;
    }
    ctx->pc = 0x235A14u;
    SET_GPR_U32(ctx, 31, 0x235A1Cu);
    ctx->pc = 0x235A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A14u;
            // 0x235a18: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A1Cu; }
        if (ctx->pc != 0x235A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A1Cu; }
        if (ctx->pc != 0x235A1Cu) { return; }
    }
    ctx->pc = 0x235A1Cu;
label_235a1c:
    // 0x235a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235a20:
    // 0x235a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235a24:
    // 0x235a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235a28:
    // 0x235a28: 0x3e00008  jr          $ra
label_235a2c:
    if (ctx->pc == 0x235A2Cu) {
        ctx->pc = 0x235A2Cu;
            // 0x235a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235A30u;
        goto label_235a30;
    }
    ctx->pc = 0x235A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A28u;
            // 0x235a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235A30u;
label_235a30:
    // 0x235a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235a34:
    // 0x235a34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235a38:
    // 0x235a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_235a3c:
    // 0x235a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_235a40:
    // 0x235a40: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_235a44:
    // 0x235a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235a48:
    // 0x235a48: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235a4c:
    // 0x235a4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235a50:
    // 0x235a50: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235a54:
    // 0x235a54: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235a58:
    // 0x235a58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235a5c:
    if (ctx->pc == 0x235A5Cu) {
        ctx->pc = 0x235A5Cu;
            // 0x235a5c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235A60u;
        goto label_235a60;
    }
    ctx->pc = 0x235A58u;
    {
        const bool branch_taken_0x235a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A58u;
            // 0x235a5c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a58) {
            ctx->pc = 0x235A88u;
            goto label_235a88;
        }
    }
    ctx->pc = 0x235A60u;
label_235a60:
    // 0x235a60: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235a64:
    // 0x235a64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x235a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_235a68:
    // 0x235a68: 0x2442ccb8  addiu       $v0, $v0, -0x3348
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954168));
label_235a6c:
    // 0x235a6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235a70:
    // 0x235a70: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235a74:
    // 0x235a74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235a78:
    // 0x235a78: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235a7c:
    // 0x235a7c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235a80:
    // 0x235a80: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235a84:
    // 0x235a84: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235a88:
    // 0x235a88: 0xe60c0018  swc1        $f12, 0x18($s0)
    ctx->pc = 0x235a88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_235a8c:
    // 0x235a8c: 0xc08d1d4  jal         func_234750
label_235a90:
    if (ctx->pc == 0x235A90u) {
        ctx->pc = 0x235A90u;
            // 0x235a90: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x235A94u;
        goto label_235a94;
    }
    ctx->pc = 0x235A8Cu;
    SET_GPR_U32(ctx, 31, 0x235A94u);
    ctx->pc = 0x235A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235A8Cu;
            // 0x235a90: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234750u;
    if (runtime->hasFunction(0x234750u)) {
        auto targetFn = runtime->lookupFunction(0x234750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A94u; }
        if (ctx->pc != 0x235A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234750_0x234750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A94u; }
        if (ctx->pc != 0x235A94u) { return; }
    }
    ctx->pc = 0x235A94u;
label_235a94:
    // 0x235a94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235a98:
    // 0x235a98: 0x8c63ea40  lw          $v1, -0x15C0($v1)
    ctx->pc = 0x235a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_235a9c:
    // 0x235a9c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x235a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_235aa0:
    // 0x235aa0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x235aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_235aa4:
    // 0x235aa4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x235aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_235aa8:
    // 0x235aa8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x235aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_235aac:
    // 0x235aac: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x235aacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_235ab0:
    // 0x235ab0: 0x50200026  beql        $at, $zero, . + 4 + (0x26 << 2)
label_235ab4:
    if (ctx->pc == 0x235AB4u) {
        ctx->pc = 0x235AB4u;
            // 0x235ab4: 0xc6030014  lwc1        $f3, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x235AB8u;
        goto label_235ab8;
    }
    ctx->pc = 0x235AB0u;
    {
        const bool branch_taken_0x235ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ab0) {
            ctx->pc = 0x235AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235AB0u;
            // 0x235ab4: 0xc6030014  lwc1        $f3, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x235B4Cu;
            goto label_235b4c;
        }
    }
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235abc:
    // 0x235abc: 0x8c66ea20  lw          $a2, -0x15E0($v1)
    ctx->pc = 0x235abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_235ac0:
    // 0x235ac0: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x235ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_235ac4:
    // 0x235ac4: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x235ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_235ac8:
    // 0x235ac8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x235ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_235acc:
    // 0x235acc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x235accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_235ad0:
    // 0x235ad0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x235ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_235ad4:
    // 0x235ad4: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
label_235ad8:
    if (ctx->pc == 0x235AD8u) {
        ctx->pc = 0x235AD8u;
            // 0x235ad8: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x235ADCu;
        goto label_235adc;
    }
    ctx->pc = 0x235AD4u;
    {
        const bool branch_taken_0x235ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x235ad4) {
            ctx->pc = 0x235AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235AD4u;
            // 0x235ad8: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235AE0u;
            goto label_235ae0;
        }
    }
    ctx->pc = 0x235ADCu;
label_235adc:
    // 0x235adc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x235adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235ae0:
    // 0x235ae0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x235ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_235ae4:
    // 0x235ae4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_235ae8:
    if (ctx->pc == 0x235AE8u) {
        ctx->pc = 0x235AECu;
        goto label_235aec;
    }
    ctx->pc = 0x235AE4u;
    {
        const bool branch_taken_0x235ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ae4) {
            ctx->pc = 0x235B48u;
            goto label_235b48;
        }
    }
    ctx->pc = 0x235AECu;
label_235aec:
    // 0x235aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235af0:
    // 0x235af0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235af4:
    // 0x235af4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x235af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_235af8:
    // 0x235af8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235afc:
    // 0x235afc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x235afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_235b00:
    // 0x235b00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235b04:
    // 0x235b04: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x235b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_235b08:
    // 0x235b08: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235b0c:
    // 0x235b0c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235b10:
    // 0x235b10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235b14:
    if (ctx->pc == 0x235B14u) {
        ctx->pc = 0x235B14u;
            // 0x235b14: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235B18u;
        goto label_235b18;
    }
    ctx->pc = 0x235B10u;
    {
        const bool branch_taken_0x235b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B10u;
            // 0x235b14: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b10) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235B18u;
label_235b18:
    // 0x235b18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235b1c:
    // 0x235b1c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x235b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_235b20:
    // 0x235b20: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_235b24:
    // 0x235b24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235b28:
    // 0x235b28: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235b2c:
    // 0x235b2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235b30:
    // 0x235b30: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235b34:
    // 0x235b34: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235b38:
    // 0x235b38: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235b3c:
    // 0x235b3c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235b40:
    // 0x235b40: 0x10000044  b           . + 4 + (0x44 << 2)
label_235b44:
    if (ctx->pc == 0x235B44u) {
        ctx->pc = 0x235B44u;
            // 0x235b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235B48u;
        goto label_235b48;
    }
    ctx->pc = 0x235B40u;
    {
        const bool branch_taken_0x235b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B40u;
            // 0x235b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b40) {
            ctx->pc = 0x235C54u;
            goto label_235c54;
        }
    }
    ctx->pc = 0x235B48u;
label_235b48:
    // 0x235b48: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x235b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_235b4c:
    // 0x235b4c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x235b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235b50:
    // 0x235b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235b54:
    // 0x235b54: 0x0  nop
    ctx->pc = 0x235b54u;
    // NOP
label_235b58:
    // 0x235b58: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x235b58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_235b5c:
    // 0x235b5c: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x235b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_235b60:
    // 0x235b60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x235b60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_235b64:
    // 0x235b64: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x235b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_235b68:
    // 0x235b68: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x235b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_235b6c:
    // 0x235b6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_235b70:
    if (ctx->pc == 0x235B70u) {
        ctx->pc = 0x235B70u;
            // 0x235b70: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x235B74u;
        goto label_235b74;
    }
    ctx->pc = 0x235B6Cu;
    {
        const bool branch_taken_0x235b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B6Cu;
            // 0x235b70: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b6c) {
            ctx->pc = 0x235B7Cu;
            goto label_235b7c;
        }
    }
    ctx->pc = 0x235B74u;
label_235b74:
    // 0x235b74: 0x10000006  b           . + 4 + (0x6 << 2)
label_235b78:
    if (ctx->pc == 0x235B78u) {
        ctx->pc = 0x235B78u;
            // 0x235b78: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x235B7Cu;
        goto label_235b7c;
    }
    ctx->pc = 0x235B74u;
    {
        const bool branch_taken_0x235b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B74u;
            // 0x235b78: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b74) {
            ctx->pc = 0x235B90u;
            goto label_235b90;
        }
    }
    ctx->pc = 0x235B7Cu;
label_235b7c:
    // 0x235b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235b80:
    // 0x235b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235b84:
    // 0x235b84: 0x0  nop
    ctx->pc = 0x235b84u;
    // NOP
label_235b88:
    // 0x235b88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x235b88u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_235b8c:
    // 0x235b8c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x235b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_235b90:
    // 0x235b90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_235b94:
    // 0x235b94: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x235b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235b98:
    // 0x235b98: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x235b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
label_235b9c:
    // 0x235b9c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x235b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235ba0:
    // 0x235ba0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x235ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_235ba4:
    // 0x235ba4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x235ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235ba8:
    // 0x235ba8: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x235ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_235bac:
    // 0x235bac: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x235bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235bb0:
    // 0x235bb0: 0xe44001ac  swc1        $f0, 0x1AC($v0)
    ctx->pc = 0x235bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 428), bits); }
label_235bb4:
    // 0x235bb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x235bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_235bb8:
    // 0x235bb8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x235bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235bbc:
    // 0x235bbc: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x235bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_235bc0:
    // 0x235bc0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x235bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_235bc4:
    // 0x235bc4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x235bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235bc8:
    // 0x235bc8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x235bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_235bcc:
    // 0x235bcc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x235bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235bd0:
    // 0x235bd0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x235bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_235bd4:
    // 0x235bd4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x235bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235bd8:
    // 0x235bd8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x235bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_235bdc:
    // 0x235bdc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x235bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_235be0:
    // 0x235be0: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x235be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_235be4:
    // 0x235be4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235be8:
    // 0x235be8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x235be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_235bec:
    // 0x235bec: 0x320f809  jalr        $t9
label_235bf0:
    if (ctx->pc == 0x235BF0u) {
        ctx->pc = 0x235BF0u;
            // 0x235bf0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235BF4u;
        goto label_235bf4;
    }
    ctx->pc = 0x235BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235BF4u);
        ctx->pc = 0x235BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BECu;
            // 0x235bf0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235BF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235BF4u; }
            if (ctx->pc != 0x235BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x235BF4u;
label_235bf4:
    // 0x235bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235bf8:
    // 0x235bf8: 0xc08dbe8  jal         func_236FA0
label_235bfc:
    if (ctx->pc == 0x235BFCu) {
        ctx->pc = 0x235BFCu;
            // 0x235bfc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235C00u;
        goto label_235c00;
    }
    ctx->pc = 0x235BF8u;
    SET_GPR_U32(ctx, 31, 0x235C00u);
    ctx->pc = 0x235BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235BF8u;
            // 0x235bfc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236FA0u;
    if (runtime->hasFunction(0x236FA0u)) {
        auto targetFn = runtime->lookupFunction(0x236FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C00u; }
        if (ctx->pc != 0x235C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236FA0_0x236fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C00u; }
        if (ctx->pc != 0x235C00u) { return; }
    }
    ctx->pc = 0x235C00u;
label_235c00:
    // 0x235c00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x235c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_235c04:
    // 0x235c04: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235c08:
    // 0x235c08: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x235c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_235c0c:
    // 0x235c0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235c10:
    // 0x235c10: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_235c14:
    // 0x235c14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235c18:
    // 0x235c18: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235c1c:
    // 0x235c1c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235c20:
    // 0x235c20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235c24:
    if (ctx->pc == 0x235C24u) {
        ctx->pc = 0x235C24u;
            // 0x235c24: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235C28u;
        goto label_235c28;
    }
    ctx->pc = 0x235C20u;
    {
        const bool branch_taken_0x235c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C20u;
            // 0x235c24: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c20) {
            ctx->pc = 0x235C50u;
            goto label_235c50;
        }
    }
    ctx->pc = 0x235C28u;
label_235c28:
    // 0x235c28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235c2c:
    // 0x235c2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_235c30:
    // 0x235c30: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x235c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_235c34:
    // 0x235c34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235c38:
    // 0x235c38: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235c3c:
    // 0x235c3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235c40:
    // 0x235c40: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235c44:
    // 0x235c44: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235c48:
    // 0x235c48: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235c4c:
    // 0x235c4c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235c50:
    // 0x235c50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235c54:
    // 0x235c54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235c58:
    // 0x235c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235c5c:
    // 0x235c5c: 0x3e00008  jr          $ra
label_235c60:
    if (ctx->pc == 0x235C60u) {
        ctx->pc = 0x235C60u;
            // 0x235c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x235C64u;
        goto label_235c64;
    }
    ctx->pc = 0x235C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C5Cu;
            // 0x235c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235C64u;
label_235c64:
    // 0x235c64: 0x0  nop
    ctx->pc = 0x235c64u;
    // NOP
label_235c68:
    // 0x235c68: 0x0  nop
    ctx->pc = 0x235c68u;
    // NOP
label_235c6c:
    // 0x235c6c: 0x0  nop
    ctx->pc = 0x235c6cu;
    // NOP
label_235c70:
    // 0x235c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235c74:
    // 0x235c74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235c78:
    // 0x235c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_235c7c:
    // 0x235c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_235c80:
    // 0x235c80: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_235c84:
    // 0x235c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235c88:
    // 0x235c88: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235c8c:
    // 0x235c8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235c90:
    // 0x235c90: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235c94:
    // 0x235c94: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235c98:
    // 0x235c98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235c9c:
    if (ctx->pc == 0x235C9Cu) {
        ctx->pc = 0x235C9Cu;
            // 0x235c9c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235CA0u;
        goto label_235ca0;
    }
    ctx->pc = 0x235C98u;
    {
        const bool branch_taken_0x235c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C98u;
            // 0x235c9c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c98) {
            ctx->pc = 0x235CC8u;
            goto label_235cc8;
        }
    }
    ctx->pc = 0x235CA0u;
label_235ca0:
    // 0x235ca0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235ca4:
    // 0x235ca4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x235ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_235ca8:
    // 0x235ca8: 0x2442ccb8  addiu       $v0, $v0, -0x3348
    ctx->pc = 0x235ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954168));
label_235cac:
    // 0x235cac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235cb0:
    // 0x235cb0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235cb4:
    // 0x235cb4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235cb8:
    // 0x235cb8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235cbc:
    // 0x235cbc: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235cc0:
    // 0x235cc0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235cc4:
    // 0x235cc4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235cc8:
    // 0x235cc8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x235cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_235ccc:
    // 0x235ccc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_235cd0:
    if (ctx->pc == 0x235CD0u) {
        ctx->pc = 0x235CD0u;
            // 0x235cd0: 0xc6030014  lwc1        $f3, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x235CD4u;
        goto label_235cd4;
    }
    ctx->pc = 0x235CCCu;
    {
        const bool branch_taken_0x235ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ccc) {
            ctx->pc = 0x235CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235CCCu;
            // 0x235cd0: 0xc6030014  lwc1        $f3, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x235D30u;
            goto label_235d30;
        }
    }
    ctx->pc = 0x235CD4u;
label_235cd4:
    // 0x235cd4: 0xc08d7c8  jal         func_235F20
label_235cd8:
    if (ctx->pc == 0x235CD8u) {
        ctx->pc = 0x235CD8u;
            // 0x235cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235CDCu;
        goto label_235cdc;
    }
    ctx->pc = 0x235CD4u;
    SET_GPR_U32(ctx, 31, 0x235CDCu);
    ctx->pc = 0x235CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235CD4u;
            // 0x235cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235F20u;
    if (runtime->hasFunction(0x235F20u)) {
        auto targetFn = runtime->lookupFunction(0x235F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CDCu; }
        if (ctx->pc != 0x235CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235F20_0x235f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CDCu; }
        if (ctx->pc != 0x235CDCu) { return; }
    }
    ctx->pc = 0x235CDCu;
label_235cdc:
    // 0x235cdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235ce0:
    // 0x235ce0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x235ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_235ce4:
    // 0x235ce4: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x235ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_235ce8:
    // 0x235ce8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235cec:
    // 0x235cec: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x235cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_235cf0:
    // 0x235cf0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x235cf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_235cf4:
    // 0x235cf4: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_235cf8:
    if (ctx->pc == 0x235CF8u) {
        ctx->pc = 0x235CF8u;
            // 0x235cf8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x235CFCu;
        goto label_235cfc;
    }
    ctx->pc = 0x235CF4u;
    {
        const bool branch_taken_0x235cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235CF4u;
            // 0x235cf8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf4) {
            ctx->pc = 0x235F0Cu;
            goto label_235f0c;
        }
    }
    ctx->pc = 0x235CFCu;
label_235cfc:
    // 0x235cfc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x235cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_235d00:
    // 0x235d00: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x235d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_235d04:
    // 0x235d04: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x235d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_235d08:
    // 0x235d08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x235d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_235d0c:
    // 0x235d0c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_235d10:
    // 0x235d10: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x235d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_235d14:
    // 0x235d14: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_235d18:
    // 0x235d18: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x235d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_235d1c:
    // 0x235d1c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x235d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_235d20:
    // 0x235d20: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x235d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_235d24:
    // 0x235d24: 0x1000007a  b           . + 4 + (0x7A << 2)
label_235d28:
    if (ctx->pc == 0x235D28u) {
        ctx->pc = 0x235D28u;
            // 0x235d28: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x235D2Cu;
        goto label_235d2c;
    }
    ctx->pc = 0x235D24u;
    {
        const bool branch_taken_0x235d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235D24u;
            // 0x235d28: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d24) {
            ctx->pc = 0x235F10u;
            goto label_235f10;
        }
    }
    ctx->pc = 0x235D2Cu;
label_235d2c:
    // 0x235d2c: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x235d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_235d30:
    // 0x235d30: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x235d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235d34:
    // 0x235d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d38:
    // 0x235d38: 0x0  nop
    ctx->pc = 0x235d38u;
    // NOP
label_235d3c:
    // 0x235d3c: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x235d3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_235d40:
    // 0x235d40: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x235d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_235d44:
    // 0x235d44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x235d44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_235d48:
    // 0x235d48: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x235d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_235d4c:
    // 0x235d4c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x235d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_235d50:
    // 0x235d50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_235d54:
    if (ctx->pc == 0x235D54u) {
        ctx->pc = 0x235D54u;
            // 0x235d54: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x235D58u;
        goto label_235d58;
    }
    ctx->pc = 0x235D50u;
    {
        const bool branch_taken_0x235d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235D50u;
            // 0x235d54: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d50) {
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D58u;
label_235d58:
    // 0x235d58: 0x10000006  b           . + 4 + (0x6 << 2)
label_235d5c:
    if (ctx->pc == 0x235D5Cu) {
        ctx->pc = 0x235D5Cu;
            // 0x235d5c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x235D60u;
        goto label_235d60;
    }
    ctx->pc = 0x235D58u;
    {
        const bool branch_taken_0x235d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235D58u;
            // 0x235d5c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d58) {
            ctx->pc = 0x235D74u;
            goto label_235d74;
        }
    }
    ctx->pc = 0x235D60u;
label_235d60:
    // 0x235d60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235d64:
    // 0x235d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d68:
    // 0x235d68: 0x0  nop
    ctx->pc = 0x235d68u;
    // NOP
label_235d6c:
    // 0x235d6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x235d6cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_235d70:
    // 0x235d70: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x235d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_235d74:
    // 0x235d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235d78:
    // 0x235d78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x235d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235d7c:
    // 0x235d7c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x235d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_235d80:
    // 0x235d80: 0x320f809  jalr        $t9
label_235d84:
    if (ctx->pc == 0x235D84u) {
        ctx->pc = 0x235D84u;
            // 0x235d84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235D88u;
        goto label_235d88;
    }
    ctx->pc = 0x235D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235D88u);
        ctx->pc = 0x235D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235D80u;
            // 0x235d84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235D88u; }
            if (ctx->pc != 0x235D88u) { return; }
        }
        }
    }
    ctx->pc = 0x235D88u;
label_235d88:
    // 0x235d88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235d8c:
    // 0x235d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235d90:
    // 0x235d90: 0x8c42ea20  lw          $v0, -0x15E0($v0)
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961696)));
label_235d94:
    // 0x235d94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x235d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_235d98:
    // 0x235d98: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
label_235d9c:
    if (ctx->pc == 0x235D9Cu) {
        ctx->pc = 0x235D9Cu;
            // 0x235d9c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x235DA0u;
        goto label_235da0;
    }
    ctx->pc = 0x235D98u;
    {
        const bool branch_taken_0x235d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x235d98) {
            ctx->pc = 0x235D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235D98u;
            // 0x235d9c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x235DFCu;
            goto label_235dfc;
        }
    }
    ctx->pc = 0x235DA0u;
label_235da0:
    // 0x235da0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235da4:
    // 0x235da4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235da8:
    // 0x235da8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x235da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_235dac:
    // 0x235dac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235db0:
    // 0x235db0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_235db4:
    // 0x235db4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235db8:
    // 0x235db8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235dbc:
    // 0x235dbc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235dc0:
    // 0x235dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235dc4:
    if (ctx->pc == 0x235DC4u) {
        ctx->pc = 0x235DC4u;
            // 0x235dc4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235DC8u;
        goto label_235dc8;
    }
    ctx->pc = 0x235DC0u;
    {
        const bool branch_taken_0x235dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235DC0u;
            // 0x235dc4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dc0) {
            ctx->pc = 0x235DF0u;
            goto label_235df0;
        }
    }
    ctx->pc = 0x235DC8u;
label_235dc8:
    // 0x235dc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235dcc:
    // 0x235dcc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x235dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_235dd0:
    // 0x235dd0: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x235dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_235dd4:
    // 0x235dd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235dd8:
    // 0x235dd8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235ddc:
    // 0x235ddc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235de0:
    // 0x235de0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235de4:
    // 0x235de4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235de8:
    // 0x235de8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235dec:
    // 0x235dec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235df0:
    // 0x235df0: 0x10000046  b           . + 4 + (0x46 << 2)
label_235df4:
    if (ctx->pc == 0x235DF4u) {
        ctx->pc = 0x235DF4u;
            // 0x235df4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x235DF8u;
        goto label_235df8;
    }
    ctx->pc = 0x235DF0u;
    {
        const bool branch_taken_0x235df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235DF0u;
            // 0x235df4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235df0) {
            ctx->pc = 0x235F0Cu;
            goto label_235f0c;
        }
    }
    ctx->pc = 0x235DF8u;
label_235df8:
    // 0x235df8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x235df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235dfc:
    // 0x235dfc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x235dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235e00:
    // 0x235e00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x235e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_235e04:
    // 0x235e04: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x235e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_235e08:
    // 0x235e08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x235e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_235e0c:
    // 0x235e0c: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x235e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_235e10:
    // 0x235e10: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_235e14:
    if (ctx->pc == 0x235E14u) {
        ctx->pc = 0x235E14u;
            // 0x235e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235E18u;
        goto label_235e18;
    }
    ctx->pc = 0x235E10u;
    {
        const bool branch_taken_0x235e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e10) {
            ctx->pc = 0x235E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235E10u;
            // 0x235e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235EB8u;
            goto label_235eb8;
        }
    }
    ctx->pc = 0x235E18u;
label_235e18:
    // 0x235e18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235e1c:
    // 0x235e1c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235e20:
    // 0x235e20: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_235e24:
    // 0x235e24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235e28:
    // 0x235e28: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235e2c:
    // 0x235e2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235e30:
    // 0x235e30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235e34:
    if (ctx->pc == 0x235E34u) {
        ctx->pc = 0x235E34u;
            // 0x235e34: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235E38u;
        goto label_235e38;
    }
    ctx->pc = 0x235E30u;
    {
        const bool branch_taken_0x235e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235E30u;
            // 0x235e34: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e30) {
            ctx->pc = 0x235E60u;
            goto label_235e60;
        }
    }
    ctx->pc = 0x235E38u;
label_235e38:
    // 0x235e38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235e3c:
    // 0x235e3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x235e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_235e40:
    // 0x235e40: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x235e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
label_235e44:
    // 0x235e44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235e48:
    // 0x235e48: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235e4c:
    // 0x235e4c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235e50:
    // 0x235e50: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235e54:
    // 0x235e54: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235e58:
    // 0x235e58: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235e5c:
    // 0x235e5c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235e60:
    // 0x235e60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x235e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_235e64:
    // 0x235e64: 0xc08e948  jal         func_23A520
label_235e68:
    if (ctx->pc == 0x235E68u) {
        ctx->pc = 0x235E68u;
            // 0x235e68: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235E6Cu;
        goto label_235e6c;
    }
    ctx->pc = 0x235E64u;
    SET_GPR_U32(ctx, 31, 0x235E6Cu);
    ctx->pc = 0x235E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235E64u;
            // 0x235e68: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A520u;
    if (runtime->hasFunction(0x23A520u)) {
        auto targetFn = runtime->lookupFunction(0x23A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235E6Cu; }
        if (ctx->pc != 0x235E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A520_0x23a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235E6Cu; }
        if (ctx->pc != 0x235E6Cu) { return; }
    }
    ctx->pc = 0x235E6Cu;
label_235e6c:
    // 0x235e6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235e70:
    // 0x235e70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235e74:
    // 0x235e74: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_235e78:
    // 0x235e78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235e7c:
    // 0x235e7c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235e80:
    // 0x235e80: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235e84:
    // 0x235e84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235e88:
    if (ctx->pc == 0x235E88u) {
        ctx->pc = 0x235E88u;
            // 0x235e88: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235E8Cu;
        goto label_235e8c;
    }
    ctx->pc = 0x235E84u;
    {
        const bool branch_taken_0x235e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235E84u;
            // 0x235e88: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e84) {
            ctx->pc = 0x235EB4u;
            goto label_235eb4;
        }
    }
    ctx->pc = 0x235E8Cu;
label_235e8c:
    // 0x235e8c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235e90:
    // 0x235e90: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x235e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_235e94:
    // 0x235e94: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x235e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
label_235e98:
    // 0x235e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235e9c:
    // 0x235e9c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235ea0:
    // 0x235ea0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235ea4:
    // 0x235ea4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235ea8:
    // 0x235ea8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235eac:
    // 0x235eac: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235eb0:
    // 0x235eb0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235eb4:
    // 0x235eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235eb8:
    // 0x235eb8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235ebc:
    // 0x235ebc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x235ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_235ec0:
    // 0x235ec0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235ec4:
    // 0x235ec4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x235ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_235ec8:
    // 0x235ec8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235ecc:
    // 0x235ecc: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x235eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_235ed0:
    // 0x235ed0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235ed4:
    // 0x235ed4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235ed8:
    // 0x235ed8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235edc:
    if (ctx->pc == 0x235EDCu) {
        ctx->pc = 0x235EDCu;
            // 0x235edc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x235EE0u;
        goto label_235ee0;
    }
    ctx->pc = 0x235ED8u;
    {
        const bool branch_taken_0x235ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235ED8u;
            // 0x235edc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ed8) {
            ctx->pc = 0x235F08u;
            goto label_235f08;
        }
    }
    ctx->pc = 0x235EE0u;
label_235ee0:
    // 0x235ee0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235ee4:
    // 0x235ee4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x235ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_235ee8:
    // 0x235ee8: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_235eec:
    // 0x235eec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235ef0:
    // 0x235ef0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235ef4:
    // 0x235ef4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x235ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_235ef8:
    // 0x235ef8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235efc:
    // 0x235efc: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x235efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_235f00:
    // 0x235f00: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x235f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_235f04:
    // 0x235f04: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235f08:
    // 0x235f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f0c:
    // 0x235f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235f10:
    // 0x235f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235f14:
    // 0x235f14: 0x3e00008  jr          $ra
label_235f18:
    if (ctx->pc == 0x235F18u) {
        ctx->pc = 0x235F18u;
            // 0x235f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x235F1Cu;
        goto label_235f1c;
    }
    ctx->pc = 0x235F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235F14u;
            // 0x235f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235F1Cu;
label_235f1c:
    // 0x235f1c: 0x0  nop
    ctx->pc = 0x235f1cu;
    // NOP
}
