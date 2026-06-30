#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00272B70
// Address: 0x272b70 - 0x273160
void sub_00272B70_0x272b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272B70_0x272b70");
#endif

    switch (ctx->pc) {
        case 0x272b70u: goto label_272b70;
        case 0x272b74u: goto label_272b74;
        case 0x272b78u: goto label_272b78;
        case 0x272b7cu: goto label_272b7c;
        case 0x272b80u: goto label_272b80;
        case 0x272b84u: goto label_272b84;
        case 0x272b88u: goto label_272b88;
        case 0x272b8cu: goto label_272b8c;
        case 0x272b90u: goto label_272b90;
        case 0x272b94u: goto label_272b94;
        case 0x272b98u: goto label_272b98;
        case 0x272b9cu: goto label_272b9c;
        case 0x272ba0u: goto label_272ba0;
        case 0x272ba4u: goto label_272ba4;
        case 0x272ba8u: goto label_272ba8;
        case 0x272bacu: goto label_272bac;
        case 0x272bb0u: goto label_272bb0;
        case 0x272bb4u: goto label_272bb4;
        case 0x272bb8u: goto label_272bb8;
        case 0x272bbcu: goto label_272bbc;
        case 0x272bc0u: goto label_272bc0;
        case 0x272bc4u: goto label_272bc4;
        case 0x272bc8u: goto label_272bc8;
        case 0x272bccu: goto label_272bcc;
        case 0x272bd0u: goto label_272bd0;
        case 0x272bd4u: goto label_272bd4;
        case 0x272bd8u: goto label_272bd8;
        case 0x272bdcu: goto label_272bdc;
        case 0x272be0u: goto label_272be0;
        case 0x272be4u: goto label_272be4;
        case 0x272be8u: goto label_272be8;
        case 0x272becu: goto label_272bec;
        case 0x272bf0u: goto label_272bf0;
        case 0x272bf4u: goto label_272bf4;
        case 0x272bf8u: goto label_272bf8;
        case 0x272bfcu: goto label_272bfc;
        case 0x272c00u: goto label_272c00;
        case 0x272c04u: goto label_272c04;
        case 0x272c08u: goto label_272c08;
        case 0x272c0cu: goto label_272c0c;
        case 0x272c10u: goto label_272c10;
        case 0x272c14u: goto label_272c14;
        case 0x272c18u: goto label_272c18;
        case 0x272c1cu: goto label_272c1c;
        case 0x272c20u: goto label_272c20;
        case 0x272c24u: goto label_272c24;
        case 0x272c28u: goto label_272c28;
        case 0x272c2cu: goto label_272c2c;
        case 0x272c30u: goto label_272c30;
        case 0x272c34u: goto label_272c34;
        case 0x272c38u: goto label_272c38;
        case 0x272c3cu: goto label_272c3c;
        case 0x272c40u: goto label_272c40;
        case 0x272c44u: goto label_272c44;
        case 0x272c48u: goto label_272c48;
        case 0x272c4cu: goto label_272c4c;
        case 0x272c50u: goto label_272c50;
        case 0x272c54u: goto label_272c54;
        case 0x272c58u: goto label_272c58;
        case 0x272c5cu: goto label_272c5c;
        case 0x272c60u: goto label_272c60;
        case 0x272c64u: goto label_272c64;
        case 0x272c68u: goto label_272c68;
        case 0x272c6cu: goto label_272c6c;
        case 0x272c70u: goto label_272c70;
        case 0x272c74u: goto label_272c74;
        case 0x272c78u: goto label_272c78;
        case 0x272c7cu: goto label_272c7c;
        case 0x272c80u: goto label_272c80;
        case 0x272c84u: goto label_272c84;
        case 0x272c88u: goto label_272c88;
        case 0x272c8cu: goto label_272c8c;
        case 0x272c90u: goto label_272c90;
        case 0x272c94u: goto label_272c94;
        case 0x272c98u: goto label_272c98;
        case 0x272c9cu: goto label_272c9c;
        case 0x272ca0u: goto label_272ca0;
        case 0x272ca4u: goto label_272ca4;
        case 0x272ca8u: goto label_272ca8;
        case 0x272cacu: goto label_272cac;
        case 0x272cb0u: goto label_272cb0;
        case 0x272cb4u: goto label_272cb4;
        case 0x272cb8u: goto label_272cb8;
        case 0x272cbcu: goto label_272cbc;
        case 0x272cc0u: goto label_272cc0;
        case 0x272cc4u: goto label_272cc4;
        case 0x272cc8u: goto label_272cc8;
        case 0x272cccu: goto label_272ccc;
        case 0x272cd0u: goto label_272cd0;
        case 0x272cd4u: goto label_272cd4;
        case 0x272cd8u: goto label_272cd8;
        case 0x272cdcu: goto label_272cdc;
        case 0x272ce0u: goto label_272ce0;
        case 0x272ce4u: goto label_272ce4;
        case 0x272ce8u: goto label_272ce8;
        case 0x272cecu: goto label_272cec;
        case 0x272cf0u: goto label_272cf0;
        case 0x272cf4u: goto label_272cf4;
        case 0x272cf8u: goto label_272cf8;
        case 0x272cfcu: goto label_272cfc;
        case 0x272d00u: goto label_272d00;
        case 0x272d04u: goto label_272d04;
        case 0x272d08u: goto label_272d08;
        case 0x272d0cu: goto label_272d0c;
        case 0x272d10u: goto label_272d10;
        case 0x272d14u: goto label_272d14;
        case 0x272d18u: goto label_272d18;
        case 0x272d1cu: goto label_272d1c;
        case 0x272d20u: goto label_272d20;
        case 0x272d24u: goto label_272d24;
        case 0x272d28u: goto label_272d28;
        case 0x272d2cu: goto label_272d2c;
        case 0x272d30u: goto label_272d30;
        case 0x272d34u: goto label_272d34;
        case 0x272d38u: goto label_272d38;
        case 0x272d3cu: goto label_272d3c;
        case 0x272d40u: goto label_272d40;
        case 0x272d44u: goto label_272d44;
        case 0x272d48u: goto label_272d48;
        case 0x272d4cu: goto label_272d4c;
        case 0x272d50u: goto label_272d50;
        case 0x272d54u: goto label_272d54;
        case 0x272d58u: goto label_272d58;
        case 0x272d5cu: goto label_272d5c;
        case 0x272d60u: goto label_272d60;
        case 0x272d64u: goto label_272d64;
        case 0x272d68u: goto label_272d68;
        case 0x272d6cu: goto label_272d6c;
        case 0x272d70u: goto label_272d70;
        case 0x272d74u: goto label_272d74;
        case 0x272d78u: goto label_272d78;
        case 0x272d7cu: goto label_272d7c;
        case 0x272d80u: goto label_272d80;
        case 0x272d84u: goto label_272d84;
        case 0x272d88u: goto label_272d88;
        case 0x272d8cu: goto label_272d8c;
        case 0x272d90u: goto label_272d90;
        case 0x272d94u: goto label_272d94;
        case 0x272d98u: goto label_272d98;
        case 0x272d9cu: goto label_272d9c;
        case 0x272da0u: goto label_272da0;
        case 0x272da4u: goto label_272da4;
        case 0x272da8u: goto label_272da8;
        case 0x272dacu: goto label_272dac;
        case 0x272db0u: goto label_272db0;
        case 0x272db4u: goto label_272db4;
        case 0x272db8u: goto label_272db8;
        case 0x272dbcu: goto label_272dbc;
        case 0x272dc0u: goto label_272dc0;
        case 0x272dc4u: goto label_272dc4;
        case 0x272dc8u: goto label_272dc8;
        case 0x272dccu: goto label_272dcc;
        case 0x272dd0u: goto label_272dd0;
        case 0x272dd4u: goto label_272dd4;
        case 0x272dd8u: goto label_272dd8;
        case 0x272ddcu: goto label_272ddc;
        case 0x272de0u: goto label_272de0;
        case 0x272de4u: goto label_272de4;
        case 0x272de8u: goto label_272de8;
        case 0x272decu: goto label_272dec;
        case 0x272df0u: goto label_272df0;
        case 0x272df4u: goto label_272df4;
        case 0x272df8u: goto label_272df8;
        case 0x272dfcu: goto label_272dfc;
        case 0x272e00u: goto label_272e00;
        case 0x272e04u: goto label_272e04;
        case 0x272e08u: goto label_272e08;
        case 0x272e0cu: goto label_272e0c;
        case 0x272e10u: goto label_272e10;
        case 0x272e14u: goto label_272e14;
        case 0x272e18u: goto label_272e18;
        case 0x272e1cu: goto label_272e1c;
        case 0x272e20u: goto label_272e20;
        case 0x272e24u: goto label_272e24;
        case 0x272e28u: goto label_272e28;
        case 0x272e2cu: goto label_272e2c;
        case 0x272e30u: goto label_272e30;
        case 0x272e34u: goto label_272e34;
        case 0x272e38u: goto label_272e38;
        case 0x272e3cu: goto label_272e3c;
        case 0x272e40u: goto label_272e40;
        case 0x272e44u: goto label_272e44;
        case 0x272e48u: goto label_272e48;
        case 0x272e4cu: goto label_272e4c;
        case 0x272e50u: goto label_272e50;
        case 0x272e54u: goto label_272e54;
        case 0x272e58u: goto label_272e58;
        case 0x272e5cu: goto label_272e5c;
        case 0x272e60u: goto label_272e60;
        case 0x272e64u: goto label_272e64;
        case 0x272e68u: goto label_272e68;
        case 0x272e6cu: goto label_272e6c;
        case 0x272e70u: goto label_272e70;
        case 0x272e74u: goto label_272e74;
        case 0x272e78u: goto label_272e78;
        case 0x272e7cu: goto label_272e7c;
        case 0x272e80u: goto label_272e80;
        case 0x272e84u: goto label_272e84;
        case 0x272e88u: goto label_272e88;
        case 0x272e8cu: goto label_272e8c;
        case 0x272e90u: goto label_272e90;
        case 0x272e94u: goto label_272e94;
        case 0x272e98u: goto label_272e98;
        case 0x272e9cu: goto label_272e9c;
        case 0x272ea0u: goto label_272ea0;
        case 0x272ea4u: goto label_272ea4;
        case 0x272ea8u: goto label_272ea8;
        case 0x272eacu: goto label_272eac;
        case 0x272eb0u: goto label_272eb0;
        case 0x272eb4u: goto label_272eb4;
        case 0x272eb8u: goto label_272eb8;
        case 0x272ebcu: goto label_272ebc;
        case 0x272ec0u: goto label_272ec0;
        case 0x272ec4u: goto label_272ec4;
        case 0x272ec8u: goto label_272ec8;
        case 0x272eccu: goto label_272ecc;
        case 0x272ed0u: goto label_272ed0;
        case 0x272ed4u: goto label_272ed4;
        case 0x272ed8u: goto label_272ed8;
        case 0x272edcu: goto label_272edc;
        case 0x272ee0u: goto label_272ee0;
        case 0x272ee4u: goto label_272ee4;
        case 0x272ee8u: goto label_272ee8;
        case 0x272eecu: goto label_272eec;
        case 0x272ef0u: goto label_272ef0;
        case 0x272ef4u: goto label_272ef4;
        case 0x272ef8u: goto label_272ef8;
        case 0x272efcu: goto label_272efc;
        case 0x272f00u: goto label_272f00;
        case 0x272f04u: goto label_272f04;
        case 0x272f08u: goto label_272f08;
        case 0x272f0cu: goto label_272f0c;
        case 0x272f10u: goto label_272f10;
        case 0x272f14u: goto label_272f14;
        case 0x272f18u: goto label_272f18;
        case 0x272f1cu: goto label_272f1c;
        case 0x272f20u: goto label_272f20;
        case 0x272f24u: goto label_272f24;
        case 0x272f28u: goto label_272f28;
        case 0x272f2cu: goto label_272f2c;
        case 0x272f30u: goto label_272f30;
        case 0x272f34u: goto label_272f34;
        case 0x272f38u: goto label_272f38;
        case 0x272f3cu: goto label_272f3c;
        case 0x272f40u: goto label_272f40;
        case 0x272f44u: goto label_272f44;
        case 0x272f48u: goto label_272f48;
        case 0x272f4cu: goto label_272f4c;
        case 0x272f50u: goto label_272f50;
        case 0x272f54u: goto label_272f54;
        case 0x272f58u: goto label_272f58;
        case 0x272f5cu: goto label_272f5c;
        case 0x272f60u: goto label_272f60;
        case 0x272f64u: goto label_272f64;
        case 0x272f68u: goto label_272f68;
        case 0x272f6cu: goto label_272f6c;
        case 0x272f70u: goto label_272f70;
        case 0x272f74u: goto label_272f74;
        case 0x272f78u: goto label_272f78;
        case 0x272f7cu: goto label_272f7c;
        case 0x272f80u: goto label_272f80;
        case 0x272f84u: goto label_272f84;
        case 0x272f88u: goto label_272f88;
        case 0x272f8cu: goto label_272f8c;
        case 0x272f90u: goto label_272f90;
        case 0x272f94u: goto label_272f94;
        case 0x272f98u: goto label_272f98;
        case 0x272f9cu: goto label_272f9c;
        case 0x272fa0u: goto label_272fa0;
        case 0x272fa4u: goto label_272fa4;
        case 0x272fa8u: goto label_272fa8;
        case 0x272facu: goto label_272fac;
        case 0x272fb0u: goto label_272fb0;
        case 0x272fb4u: goto label_272fb4;
        case 0x272fb8u: goto label_272fb8;
        case 0x272fbcu: goto label_272fbc;
        case 0x272fc0u: goto label_272fc0;
        case 0x272fc4u: goto label_272fc4;
        case 0x272fc8u: goto label_272fc8;
        case 0x272fccu: goto label_272fcc;
        case 0x272fd0u: goto label_272fd0;
        case 0x272fd4u: goto label_272fd4;
        case 0x272fd8u: goto label_272fd8;
        case 0x272fdcu: goto label_272fdc;
        case 0x272fe0u: goto label_272fe0;
        case 0x272fe4u: goto label_272fe4;
        case 0x272fe8u: goto label_272fe8;
        case 0x272fecu: goto label_272fec;
        case 0x272ff0u: goto label_272ff0;
        case 0x272ff4u: goto label_272ff4;
        case 0x272ff8u: goto label_272ff8;
        case 0x272ffcu: goto label_272ffc;
        case 0x273000u: goto label_273000;
        case 0x273004u: goto label_273004;
        case 0x273008u: goto label_273008;
        case 0x27300cu: goto label_27300c;
        case 0x273010u: goto label_273010;
        case 0x273014u: goto label_273014;
        case 0x273018u: goto label_273018;
        case 0x27301cu: goto label_27301c;
        case 0x273020u: goto label_273020;
        case 0x273024u: goto label_273024;
        case 0x273028u: goto label_273028;
        case 0x27302cu: goto label_27302c;
        case 0x273030u: goto label_273030;
        case 0x273034u: goto label_273034;
        case 0x273038u: goto label_273038;
        case 0x27303cu: goto label_27303c;
        case 0x273040u: goto label_273040;
        case 0x273044u: goto label_273044;
        case 0x273048u: goto label_273048;
        case 0x27304cu: goto label_27304c;
        case 0x273050u: goto label_273050;
        case 0x273054u: goto label_273054;
        case 0x273058u: goto label_273058;
        case 0x27305cu: goto label_27305c;
        case 0x273060u: goto label_273060;
        case 0x273064u: goto label_273064;
        case 0x273068u: goto label_273068;
        case 0x27306cu: goto label_27306c;
        case 0x273070u: goto label_273070;
        case 0x273074u: goto label_273074;
        case 0x273078u: goto label_273078;
        case 0x27307cu: goto label_27307c;
        case 0x273080u: goto label_273080;
        case 0x273084u: goto label_273084;
        case 0x273088u: goto label_273088;
        case 0x27308cu: goto label_27308c;
        case 0x273090u: goto label_273090;
        case 0x273094u: goto label_273094;
        case 0x273098u: goto label_273098;
        case 0x27309cu: goto label_27309c;
        case 0x2730a0u: goto label_2730a0;
        case 0x2730a4u: goto label_2730a4;
        case 0x2730a8u: goto label_2730a8;
        case 0x2730acu: goto label_2730ac;
        case 0x2730b0u: goto label_2730b0;
        case 0x2730b4u: goto label_2730b4;
        case 0x2730b8u: goto label_2730b8;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730c0u: goto label_2730c0;
        case 0x2730c4u: goto label_2730c4;
        case 0x2730c8u: goto label_2730c8;
        case 0x2730ccu: goto label_2730cc;
        case 0x2730d0u: goto label_2730d0;
        case 0x2730d4u: goto label_2730d4;
        case 0x2730d8u: goto label_2730d8;
        case 0x2730dcu: goto label_2730dc;
        case 0x2730e0u: goto label_2730e0;
        case 0x2730e4u: goto label_2730e4;
        case 0x2730e8u: goto label_2730e8;
        case 0x2730ecu: goto label_2730ec;
        case 0x2730f0u: goto label_2730f0;
        case 0x2730f4u: goto label_2730f4;
        case 0x2730f8u: goto label_2730f8;
        case 0x2730fcu: goto label_2730fc;
        case 0x273100u: goto label_273100;
        case 0x273104u: goto label_273104;
        case 0x273108u: goto label_273108;
        case 0x27310cu: goto label_27310c;
        case 0x273110u: goto label_273110;
        case 0x273114u: goto label_273114;
        case 0x273118u: goto label_273118;
        case 0x27311cu: goto label_27311c;
        case 0x273120u: goto label_273120;
        case 0x273124u: goto label_273124;
        case 0x273128u: goto label_273128;
        case 0x27312cu: goto label_27312c;
        case 0x273130u: goto label_273130;
        case 0x273134u: goto label_273134;
        case 0x273138u: goto label_273138;
        case 0x27313cu: goto label_27313c;
        case 0x273140u: goto label_273140;
        case 0x273144u: goto label_273144;
        case 0x273148u: goto label_273148;
        case 0x27314cu: goto label_27314c;
        case 0x273150u: goto label_273150;
        case 0x273154u: goto label_273154;
        case 0x273158u: goto label_273158;
        case 0x27315cu: goto label_27315c;
        default: break;
    }

    ctx->pc = 0x272b70u;

label_272b70:
    // 0x272b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_272b74:
    // 0x272b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_272b78:
    // 0x272b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_272b7c:
    // 0x272b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272b80:
    // 0x272b80: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_272b84:
    if (ctx->pc == 0x272B84u) {
        ctx->pc = 0x272B84u;
            // 0x272b84: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->pc = 0x272B88u;
        goto label_272b88;
    }
    ctx->pc = 0x272B80u;
    {
        const bool branch_taken_0x272b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B80u;
            // 0x272b84: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b80) {
            ctx->pc = 0x272BF0u;
            goto label_272bf0;
        }
    }
    ctx->pc = 0x272B88u;
label_272b88:
    // 0x272b88: 0x2442f3b0  addiu       $v0, $v0, -0xC50
    ctx->pc = 0x272b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964144));
label_272b8c:
    // 0x272b8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x272b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_272b90:
    // 0x272b90: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_272b94:
    if (ctx->pc == 0x272B94u) {
        ctx->pc = 0x272B94u;
            // 0x272b94: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x272B98u;
        goto label_272b98;
    }
    ctx->pc = 0x272B90u;
    {
        const bool branch_taken_0x272b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B90u;
            // 0x272b94: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b90) {
            ctx->pc = 0x272BC8u;
            goto label_272bc8;
        }
    }
    ctx->pc = 0x272B98u;
label_272b98:
    // 0x272b98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272b9c:
    // 0x272b9c: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x272b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
label_272ba0:
    // 0x272ba0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_272ba4:
    if (ctx->pc == 0x272BA4u) {
        ctx->pc = 0x272BA4u;
            // 0x272ba4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x272BA8u;
        goto label_272ba8;
    }
    ctx->pc = 0x272BA0u;
    {
        const bool branch_taken_0x272ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BA0u;
            // 0x272ba4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ba0) {
            ctx->pc = 0x272BC8u;
            goto label_272bc8;
        }
    }
    ctx->pc = 0x272BA8u;
label_272ba8:
    // 0x272ba8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272bac:
    // 0x272bac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x272bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_272bb0:
    // 0x272bb0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_272bb4:
    if (ctx->pc == 0x272BB4u) {
        ctx->pc = 0x272BB4u;
            // 0x272bb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x272BB8u;
        goto label_272bb8;
    }
    ctx->pc = 0x272BB0u;
    {
        const bool branch_taken_0x272bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BB0u;
            // 0x272bb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bb0) {
            ctx->pc = 0x272BC8u;
            goto label_272bc8;
        }
    }
    ctx->pc = 0x272BB8u;
label_272bb8:
    // 0x272bb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272bbc:
    // 0x272bbc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x272bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_272bc0:
    // 0x272bc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x272bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_272bc4:
    // 0x272bc4: 0x0  nop
    ctx->pc = 0x272bc4u;
    // NOP
label_272bc8:
    // 0x272bc8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x272bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_272bcc:
    // 0x272bcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_272bd0:
    // 0x272bd0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_272bd4:
    if (ctx->pc == 0x272BD4u) {
        ctx->pc = 0x272BD4u;
            // 0x272bd4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x272BD8u;
        goto label_272bd8;
    }
    ctx->pc = 0x272BD0u;
    {
        const bool branch_taken_0x272bd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BD0u;
            // 0x272bd4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bd0) {
            ctx->pc = 0x272BF0u;
            goto label_272bf0;
        }
    }
    ctx->pc = 0x272BD8u;
label_272bd8:
    // 0x272bd8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x272bd8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_272bdc:
    // 0x272bdc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x272bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_272be0:
    // 0x272be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x272be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272be4:
    // 0x272be4: 0xc0a7ab4  jal         func_29EAD0
label_272be8:
    if (ctx->pc == 0x272BE8u) {
        ctx->pc = 0x272BE8u;
            // 0x272be8: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x272BECu;
        goto label_272bec;
    }
    ctx->pc = 0x272BE4u;
    SET_GPR_U32(ctx, 31, 0x272BECu);
    ctx->pc = 0x272BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272BE4u;
            // 0x272be8: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BECu; }
        if (ctx->pc != 0x272BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BECu; }
        if (ctx->pc != 0x272BECu) { return; }
    }
    ctx->pc = 0x272BECu;
label_272bec:
    // 0x272bec: 0x0  nop
    ctx->pc = 0x272becu;
    // NOP
label_272bf0:
    // 0x272bf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x272bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272bf4:
    // 0x272bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_272bf8:
    // 0x272bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_272bfc:
    // 0x272bfc: 0x3e00008  jr          $ra
label_272c00:
    if (ctx->pc == 0x272C00u) {
        ctx->pc = 0x272C00u;
            // 0x272c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x272C04u;
        goto label_272c04;
    }
    ctx->pc = 0x272BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BFCu;
            // 0x272c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272C04u;
label_272c04:
    // 0x272c04: 0x0  nop
    ctx->pc = 0x272c04u;
    // NOP
label_272c08:
    // 0x272c08: 0x0  nop
    ctx->pc = 0x272c08u;
    // NOP
label_272c0c:
    // 0x272c0c: 0x0  nop
    ctx->pc = 0x272c0cu;
    // NOP
label_272c10:
    // 0x272c10: 0x3e00008  jr          $ra
label_272c14:
    if (ctx->pc == 0x272C14u) {
        ctx->pc = 0x272C18u;
        goto label_272c18;
    }
    ctx->pc = 0x272C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272C18u;
label_272c18:
    // 0x272c18: 0x0  nop
    ctx->pc = 0x272c18u;
    // NOP
label_272c1c:
    // 0x272c1c: 0x0  nop
    ctx->pc = 0x272c1cu;
    // NOP
label_272c20:
    // 0x272c20: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x272c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_272c24:
    // 0x272c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272c28:
    // 0x272c28: 0x3e00008  jr          $ra
label_272c2c:
    if (ctx->pc == 0x272C2Cu) {
        ctx->pc = 0x272C2Cu;
            // 0x272c2c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x272C30u;
        goto label_272c30;
    }
    ctx->pc = 0x272C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C28u;
            // 0x272c2c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272C30u;
label_272c30:
    // 0x272c30: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x272c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_272c34:
    // 0x272c34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x272c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_272c38:
    // 0x272c38: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x272c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_272c3c:
    // 0x272c3c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x272c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_272c40:
    // 0x272c40: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x272c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_272c44:
    // 0x272c44: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x272c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_272c48:
    // 0x272c48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x272c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_272c4c:
    // 0x272c4c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x272c4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_272c50:
    // 0x272c50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x272c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_272c54:
    // 0x272c54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x272c54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272c58:
    // 0x272c58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x272c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_272c5c:
    // 0x272c5c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x272c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_272c60:
    // 0x272c60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x272c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_272c64:
    // 0x272c64: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x272c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_272c68:
    // 0x272c68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x272c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_272c6c:
    // 0x272c6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x272c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_272c70:
    // 0x272c70: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x272c70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_272c74:
    // 0x272c74: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x272c74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_272c78:
    // 0x272c78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x272c78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_272c7c:
    // 0x272c7c: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x272c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_272c80:
    // 0x272c80: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x272c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_272c84:
    // 0x272c84: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x272c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_272c88:
    // 0x272c88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272c8c:
    // 0x272c8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x272c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272c90:
    // 0x272c90: 0x320f809  jalr        $t9
label_272c94:
    if (ctx->pc == 0x272C94u) {
        ctx->pc = 0x272C94u;
            // 0x272c94: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272C98u;
        goto label_272c98;
    }
    ctx->pc = 0x272C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272C98u);
        ctx->pc = 0x272C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C90u;
            // 0x272c94: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272C98u; }
            if (ctx->pc != 0x272C98u) { return; }
        }
        }
    }
    ctx->pc = 0x272C98u;
label_272c98:
    // 0x272c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272c9c:
    // 0x272c9c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_272ca0:
    if (ctx->pc == 0x272CA0u) {
        ctx->pc = 0x272CA4u;
        goto label_272ca4;
    }
    ctx->pc = 0x272C9Cu;
    {
        const bool branch_taken_0x272c9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c9c) {
            ctx->pc = 0x272D08u;
            goto label_272d08;
        }
    }
    ctx->pc = 0x272CA4u;
label_272ca4:
    // 0x272ca4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272ca8:
    // 0x272ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272cac:
    // 0x272cac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272cb0:
    // 0x272cb0: 0x320f809  jalr        $t9
label_272cb4:
    if (ctx->pc == 0x272CB4u) {
        ctx->pc = 0x272CB4u;
            // 0x272cb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272CB8u;
        goto label_272cb8;
    }
    ctx->pc = 0x272CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272CB8u);
        ctx->pc = 0x272CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272CB0u;
            // 0x272cb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272CB8u; }
            if (ctx->pc != 0x272CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x272CB8u;
label_272cb8:
    // 0x272cb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x272cb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_272cbc:
    // 0x272cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272cc0:
    // 0x272cc0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x272cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272cc4:
    // 0x272cc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272cc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272cc8:
    // 0x272cc8: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x272cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_272ccc:
    // 0x272ccc: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x272cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272cd0:
    // 0x272cd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272cd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272cd4:
    // 0x272cd4: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x272cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_272cd8:
    // 0x272cd8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x272cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272cdc:
    // 0x272cdc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272cdcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272ce0:
    // 0x272ce0: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x272ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_272ce4:
    // 0x272ce4: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x272ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272ce8:
    // 0x272ce8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272ce8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272cec:
    // 0x272cec: 0xe7a002dc  swc1        $f0, 0x2DC($sp)
    ctx->pc = 0x272cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
label_272cf0:
    // 0x272cf0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272cf4:
    // 0x272cf4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272cf8:
    // 0x272cf8: 0x320f809  jalr        $t9
label_272cfc:
    if (ctx->pc == 0x272CFCu) {
        ctx->pc = 0x272CFCu;
            // 0x272cfc: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x272D00u;
        goto label_272d00;
    }
    ctx->pc = 0x272CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272D00u);
        ctx->pc = 0x272CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272CF8u;
            // 0x272cfc: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272D00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272D00u; }
            if (ctx->pc != 0x272D00u) { return; }
        }
        }
    }
    ctx->pc = 0x272D00u;
label_272d00:
    // 0x272d00: 0x10000005  b           . + 4 + (0x5 << 2)
label_272d04:
    if (ctx->pc == 0x272D04u) {
        ctx->pc = 0x272D04u;
            // 0x272d04: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x272D08u;
        goto label_272d08;
    }
    ctx->pc = 0x272D00u;
    {
        const bool branch_taken_0x272d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D00u;
            // 0x272d04: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d00) {
            ctx->pc = 0x272D18u;
            goto label_272d18;
        }
    }
    ctx->pc = 0x272D08u;
label_272d08:
    // 0x272d08: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x272d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_272d0c:
    // 0x272d0c: 0x0  nop
    ctx->pc = 0x272d0cu;
    // NOP
label_272d10:
    // 0x272d10: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x272d10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_272d14:
    // 0x272d14: 0x0  nop
    ctx->pc = 0x272d14u;
    // NOP
label_272d18:
    // 0x272d18: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x272d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_272d1c:
    // 0x272d1c: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x272d1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_272d20:
    // 0x272d20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x272d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272d24:
    // 0x272d24: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
label_272d28:
    if (ctx->pc == 0x272D28u) {
        ctx->pc = 0x272D28u;
            // 0x272d28: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x272D2Cu;
        goto label_272d2c;
    }
    ctx->pc = 0x272D24u;
    {
        const bool branch_taken_0x272d24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x272D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D24u;
            // 0x272d28: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d24) {
            ctx->pc = 0x272E10u;
            goto label_272e10;
        }
    }
    ctx->pc = 0x272D2Cu;
label_272d2c:
    // 0x272d2c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x272d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_272d30:
    // 0x272d30: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x272d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_272d34:
    // 0x272d34: 0x27be00c8  addiu       $fp, $sp, 0xC8
    ctx->pc = 0x272d34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_272d38:
    // 0x272d38: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x272d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_272d3c:
    // 0x272d3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x272d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_272d40:
    // 0x272d40: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x272d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_272d44:
    // 0x272d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272d48:
    // 0x272d48: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x272d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272d4c:
    // 0x272d4c: 0x320f809  jalr        $t9
label_272d50:
    if (ctx->pc == 0x272D50u) {
        ctx->pc = 0x272D50u;
            // 0x272d50: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x272D54u;
        goto label_272d54;
    }
    ctx->pc = 0x272D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272D54u);
        ctx->pc = 0x272D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D4Cu;
            // 0x272d50: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272D54u; }
            if (ctx->pc != 0x272D54u) { return; }
        }
        }
    }
    ctx->pc = 0x272D54u;
label_272d54:
    // 0x272d54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272d58:
    // 0x272d58: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_272d5c:
    if (ctx->pc == 0x272D5Cu) {
        ctx->pc = 0x272D60u;
        goto label_272d60;
    }
    ctx->pc = 0x272D58u;
    {
        const bool branch_taken_0x272d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d58) {
            ctx->pc = 0x272DC8u;
            goto label_272dc8;
        }
    }
    ctx->pc = 0x272D60u;
label_272d60:
    // 0x272d60: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272d64:
    // 0x272d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272d68:
    // 0x272d68: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272d6c:
    // 0x272d6c: 0x320f809  jalr        $t9
label_272d70:
    if (ctx->pc == 0x272D70u) {
        ctx->pc = 0x272D70u;
            // 0x272d70: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272D74u;
        goto label_272d74;
    }
    ctx->pc = 0x272D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272D74u);
        ctx->pc = 0x272D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D6Cu;
            // 0x272d70: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272D74u; }
            if (ctx->pc != 0x272D74u) { return; }
        }
        }
    }
    ctx->pc = 0x272D74u;
label_272d74:
    // 0x272d74: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x272d74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_272d78:
    // 0x272d78: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x272d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_272d7c:
    // 0x272d7c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x272d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d80:
    // 0x272d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272d84:
    // 0x272d84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272d84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272d88:
    // 0x272d88: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x272d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_272d8c:
    // 0x272d8c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x272d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d90:
    // 0x272d90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272d90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272d94:
    // 0x272d94: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x272d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_272d98:
    // 0x272d98: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x272d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d9c:
    // 0x272d9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272d9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272da0:
    // 0x272da0: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x272da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_272da4:
    // 0x272da4: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x272da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272da8:
    // 0x272da8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272da8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272dac:
    // 0x272dac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x272dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_272db0:
    // 0x272db0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272db4:
    // 0x272db4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272db8:
    // 0x272db8: 0x320f809  jalr        $t9
label_272dbc:
    if (ctx->pc == 0x272DBCu) {
        ctx->pc = 0x272DBCu;
            // 0x272dbc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x272DC0u;
        goto label_272dc0;
    }
    ctx->pc = 0x272DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272DC0u);
        ctx->pc = 0x272DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DB8u;
            // 0x272dbc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272DC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272DC0u; }
            if (ctx->pc != 0x272DC0u) { return; }
        }
        }
    }
    ctx->pc = 0x272DC0u;
label_272dc0:
    // 0x272dc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_272dc4:
    if (ctx->pc == 0x272DC4u) {
        ctx->pc = 0x272DC4u;
            // 0x272dc4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x272DC8u;
        goto label_272dc8;
    }
    ctx->pc = 0x272DC0u;
    {
        const bool branch_taken_0x272dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DC0u;
            // 0x272dc4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dc0) {
            ctx->pc = 0x272DD8u;
            goto label_272dd8;
        }
    }
    ctx->pc = 0x272DC8u;
label_272dc8:
    // 0x272dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272dcc:
    // 0x272dcc: 0x0  nop
    ctx->pc = 0x272dccu;
    // NOP
label_272dd0:
    // 0x272dd0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x272dd0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_272dd4:
    // 0x272dd4: 0x0  nop
    ctx->pc = 0x272dd4u;
    // NOP
label_272dd8:
    // 0x272dd8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x272dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_272ddc:
    // 0x272ddc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x272ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272de0:
    // 0x272de0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_272de4:
    if (ctx->pc == 0x272DE4u) {
        ctx->pc = 0x272DE4u;
            // 0x272de4: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x272DE8u;
        goto label_272de8;
    }
    ctx->pc = 0x272DE0u;
    {
        const bool branch_taken_0x272de0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DE0u;
            // 0x272de4: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272de0) {
            ctx->pc = 0x272DF0u;
            goto label_272df0;
        }
    }
    ctx->pc = 0x272DE8u;
label_272de8:
    // 0x272de8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x272de8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_272dec:
    // 0x272dec: 0x0  nop
    ctx->pc = 0x272decu;
    // NOP
label_272df0:
    // 0x272df0: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x272df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272df4:
    // 0x272df4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_272df8:
    if (ctx->pc == 0x272DF8u) {
        ctx->pc = 0x272DFCu;
        goto label_272dfc;
    }
    ctx->pc = 0x272DF4u;
    {
        const bool branch_taken_0x272df4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272df4) {
            ctx->pc = 0x272E00u;
            goto label_272e00;
        }
    }
    ctx->pc = 0x272DFCu;
label_272dfc:
    // 0x272dfc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x272dfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_272e00:
    // 0x272e00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x272e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_272e04:
    // 0x272e04: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x272e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_272e08:
    // 0x272e08: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_272e0c:
    if (ctx->pc == 0x272E0Cu) {
        ctx->pc = 0x272E0Cu;
            // 0x272e0c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x272E10u;
        goto label_272e10;
    }
    ctx->pc = 0x272E08u;
    {
        const bool branch_taken_0x272e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E08u;
            // 0x272e0c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e08) {
            ctx->pc = 0x272D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272d38;
        }
    }
    ctx->pc = 0x272E10u;
label_272e10:
    // 0x272e10: 0xe6760000  swc1        $f22, 0x0($s3)
    ctx->pc = 0x272e10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_272e14:
    // 0x272e14: 0xe6d40000  swc1        $f20, 0x0($s6)
    ctx->pc = 0x272e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_272e18:
    // 0x272e18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x272e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_272e1c:
    // 0x272e1c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x272e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_272e20:
    // 0x272e20: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x272e20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_272e24:
    // 0x272e24: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x272e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_272e28:
    // 0x272e28: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x272e28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_272e2c:
    // 0x272e2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x272e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_272e30:
    // 0x272e30: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x272e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_272e34:
    // 0x272e34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x272e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_272e38:
    // 0x272e38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x272e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_272e3c:
    // 0x272e3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x272e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_272e40:
    // 0x272e40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x272e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_272e44:
    // 0x272e44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x272e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_272e48:
    // 0x272e48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x272e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_272e4c:
    // 0x272e4c: 0x3e00008  jr          $ra
label_272e50:
    if (ctx->pc == 0x272E50u) {
        ctx->pc = 0x272E50u;
            // 0x272e50: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = 0x272E54u;
        goto label_272e54;
    }
    ctx->pc = 0x272E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E4Cu;
            // 0x272e50: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272E54u;
label_272e54:
    // 0x272e54: 0x0  nop
    ctx->pc = 0x272e54u;
    // NOP
label_272e58:
    // 0x272e58: 0x0  nop
    ctx->pc = 0x272e58u;
    // NOP
label_272e5c:
    // 0x272e5c: 0x0  nop
    ctx->pc = 0x272e5cu;
    // NOP
label_272e60:
    // 0x272e60: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x272e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_272e64:
    // 0x272e64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x272e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_272e68:
    // 0x272e68: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x272e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_272e6c:
    // 0x272e6c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x272e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_272e70:
    // 0x272e70: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x272e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_272e74:
    // 0x272e74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x272e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_272e78:
    // 0x272e78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x272e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_272e7c:
    // 0x272e7c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x272e7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_272e80:
    // 0x272e80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x272e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_272e84:
    // 0x272e84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x272e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272e88:
    // 0x272e88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x272e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_272e8c:
    // 0x272e8c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x272e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_272e90:
    // 0x272e90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x272e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_272e94:
    // 0x272e94: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x272e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_272e98:
    // 0x272e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x272e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_272e9c:
    // 0x272e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x272e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_272ea0:
    // 0x272ea0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x272ea0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_272ea4:
    // 0x272ea4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x272ea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_272ea8:
    // 0x272ea8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x272ea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_272eac:
    // 0x272eac: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x272eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_272eb0:
    // 0x272eb0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x272eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_272eb4:
    // 0x272eb4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x272eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_272eb8:
    // 0x272eb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272ebc:
    // 0x272ebc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x272ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272ec0:
    // 0x272ec0: 0x320f809  jalr        $t9
label_272ec4:
    if (ctx->pc == 0x272EC4u) {
        ctx->pc = 0x272EC4u;
            // 0x272ec4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272EC8u;
        goto label_272ec8;
    }
    ctx->pc = 0x272EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272EC8u);
        ctx->pc = 0x272EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EC0u;
            // 0x272ec4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272EC8u; }
            if (ctx->pc != 0x272EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x272EC8u;
label_272ec8:
    // 0x272ec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272ecc:
    // 0x272ecc: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_272ed0:
    if (ctx->pc == 0x272ED0u) {
        ctx->pc = 0x272ED4u;
        goto label_272ed4;
    }
    ctx->pc = 0x272ECCu;
    {
        const bool branch_taken_0x272ecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x272ecc) {
            ctx->pc = 0x272F38u;
            goto label_272f38;
        }
    }
    ctx->pc = 0x272ED4u;
label_272ed4:
    // 0x272ed4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272ed8:
    // 0x272ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272edc:
    // 0x272edc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272ee0:
    // 0x272ee0: 0x320f809  jalr        $t9
label_272ee4:
    if (ctx->pc == 0x272EE4u) {
        ctx->pc = 0x272EE4u;
            // 0x272ee4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272EE8u;
        goto label_272ee8;
    }
    ctx->pc = 0x272EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272EE8u);
        ctx->pc = 0x272EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EE0u;
            // 0x272ee4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272EE8u; }
            if (ctx->pc != 0x272EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x272EE8u;
label_272ee8:
    // 0x272ee8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x272ee8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_272eec:
    // 0x272eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272ef0:
    // 0x272ef0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x272ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272ef4:
    // 0x272ef4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272ef4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272ef8:
    // 0x272ef8: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x272ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_272efc:
    // 0x272efc: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x272efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f00:
    // 0x272f00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272f00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272f04:
    // 0x272f04: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x272f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_272f08:
    // 0x272f08: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x272f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f0c:
    // 0x272f0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272f0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272f10:
    // 0x272f10: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x272f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_272f14:
    // 0x272f14: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x272f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f18:
    // 0x272f18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272f18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272f1c:
    // 0x272f1c: 0xe7a002dc  swc1        $f0, 0x2DC($sp)
    ctx->pc = 0x272f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
label_272f20:
    // 0x272f20: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272f24:
    // 0x272f24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272f28:
    // 0x272f28: 0x320f809  jalr        $t9
label_272f2c:
    if (ctx->pc == 0x272F2Cu) {
        ctx->pc = 0x272F2Cu;
            // 0x272f2c: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x272F30u;
        goto label_272f30;
    }
    ctx->pc = 0x272F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272F30u);
        ctx->pc = 0x272F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F28u;
            // 0x272f2c: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272F30u; }
            if (ctx->pc != 0x272F30u) { return; }
        }
        }
    }
    ctx->pc = 0x272F30u;
label_272f30:
    // 0x272f30: 0x10000005  b           . + 4 + (0x5 << 2)
label_272f34:
    if (ctx->pc == 0x272F34u) {
        ctx->pc = 0x272F34u;
            // 0x272f34: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x272F38u;
        goto label_272f38;
    }
    ctx->pc = 0x272F30u;
    {
        const bool branch_taken_0x272f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F30u;
            // 0x272f34: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f30) {
            ctx->pc = 0x272F48u;
            goto label_272f48;
        }
    }
    ctx->pc = 0x272F38u;
label_272f38:
    // 0x272f38: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x272f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_272f3c:
    // 0x272f3c: 0x0  nop
    ctx->pc = 0x272f3cu;
    // NOP
label_272f40:
    // 0x272f40: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x272f40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_272f44:
    // 0x272f44: 0x0  nop
    ctx->pc = 0x272f44u;
    // NOP
label_272f48:
    // 0x272f48: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x272f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_272f4c:
    // 0x272f4c: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
label_272f50:
    if (ctx->pc == 0x272F50u) {
        ctx->pc = 0x272F50u;
            // 0x272f50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x272F54u;
        goto label_272f54;
    }
    ctx->pc = 0x272F4Cu;
    {
        const bool branch_taken_0x272f4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x272F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F4Cu;
            // 0x272f50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f4c) {
            ctx->pc = 0x273030u;
            goto label_273030;
        }
    }
    ctx->pc = 0x272F54u;
label_272f54:
    // 0x272f54: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x272f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_272f58:
    // 0x272f58: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_272f5c:
    // 0x272f5c: 0x27be00c8  addiu       $fp, $sp, 0xC8
    ctx->pc = 0x272f5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_272f60:
    // 0x272f60: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x272f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_272f64:
    // 0x272f64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x272f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_272f68:
    // 0x272f68: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x272f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_272f6c:
    // 0x272f6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272f70:
    // 0x272f70: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x272f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272f74:
    // 0x272f74: 0x320f809  jalr        $t9
label_272f78:
    if (ctx->pc == 0x272F78u) {
        ctx->pc = 0x272F78u;
            // 0x272f78: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x272F7Cu;
        goto label_272f7c;
    }
    ctx->pc = 0x272F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272F7Cu);
        ctx->pc = 0x272F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F74u;
            // 0x272f78: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272F7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272F7Cu; }
            if (ctx->pc != 0x272F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x272F7Cu;
label_272f7c:
    // 0x272f7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272f80:
    // 0x272f80: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_272f84:
    if (ctx->pc == 0x272F84u) {
        ctx->pc = 0x272F88u;
        goto label_272f88;
    }
    ctx->pc = 0x272F80u;
    {
        const bool branch_taken_0x272f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f80) {
            ctx->pc = 0x272FF0u;
            goto label_272ff0;
        }
    }
    ctx->pc = 0x272F88u;
label_272f88:
    // 0x272f88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272f8c:
    // 0x272f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272f90:
    // 0x272f90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272f94:
    // 0x272f94: 0x320f809  jalr        $t9
label_272f98:
    if (ctx->pc == 0x272F98u) {
        ctx->pc = 0x272F98u;
            // 0x272f98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272F9Cu;
        goto label_272f9c;
    }
    ctx->pc = 0x272F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272F9Cu);
        ctx->pc = 0x272F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F94u;
            // 0x272f98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272F9Cu; }
            if (ctx->pc != 0x272F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x272F9Cu;
label_272f9c:
    // 0x272f9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x272f9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_272fa0:
    // 0x272fa0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x272fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_272fa4:
    // 0x272fa4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x272fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fa8:
    // 0x272fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272fac:
    // 0x272fac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272facu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272fb0:
    // 0x272fb0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x272fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_272fb4:
    // 0x272fb4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x272fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fb8:
    // 0x272fb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272fb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272fbc:
    // 0x272fbc: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x272fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_272fc0:
    // 0x272fc0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x272fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fc4:
    // 0x272fc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272fc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272fc8:
    // 0x272fc8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x272fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_272fcc:
    // 0x272fcc: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x272fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fd0:
    // 0x272fd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272fd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272fd4:
    // 0x272fd4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x272fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_272fd8:
    // 0x272fd8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x272fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272fdc:
    // 0x272fdc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272fe0:
    // 0x272fe0: 0x320f809  jalr        $t9
label_272fe4:
    if (ctx->pc == 0x272FE4u) {
        ctx->pc = 0x272FE4u;
            // 0x272fe4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x272FE8u;
        goto label_272fe8;
    }
    ctx->pc = 0x272FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272FE8u);
        ctx->pc = 0x272FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272FE0u;
            // 0x272fe4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272FE8u; }
            if (ctx->pc != 0x272FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x272FE8u;
label_272fe8:
    // 0x272fe8: 0x10000005  b           . + 4 + (0x5 << 2)
label_272fec:
    if (ctx->pc == 0x272FECu) {
        ctx->pc = 0x272FECu;
            // 0x272fec: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x272FF0u;
        goto label_272ff0;
    }
    ctx->pc = 0x272FE8u;
    {
        const bool branch_taken_0x272fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272FE8u;
            // 0x272fec: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fe8) {
            ctx->pc = 0x273000u;
            goto label_273000;
        }
    }
    ctx->pc = 0x272FF0u;
label_272ff0:
    // 0x272ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272ff4:
    // 0x272ff4: 0x0  nop
    ctx->pc = 0x272ff4u;
    // NOP
label_272ff8:
    // 0x272ff8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x272ff8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_272ffc:
    // 0x272ffc: 0x0  nop
    ctx->pc = 0x272ffcu;
    // NOP
label_273000:
    // 0x273000: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x273000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273004:
    // 0x273004: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_273008:
    if (ctx->pc == 0x273008u) {
        ctx->pc = 0x27300Cu;
        goto label_27300c;
    }
    ctx->pc = 0x273004u;
    {
        const bool branch_taken_0x273004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273004) {
            ctx->pc = 0x273010u;
            goto label_273010;
        }
    }
    ctx->pc = 0x27300Cu;
label_27300c:
    // 0x27300c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27300cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_273010:
    // 0x273010: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x273010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273014:
    // 0x273014: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_273018:
    if (ctx->pc == 0x273018u) {
        ctx->pc = 0x27301Cu;
        goto label_27301c;
    }
    ctx->pc = 0x273014u;
    {
        const bool branch_taken_0x273014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273014) {
            ctx->pc = 0x273020u;
            goto label_273020;
        }
    }
    ctx->pc = 0x27301Cu;
label_27301c:
    // 0x27301c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x27301cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_273020:
    // 0x273020: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x273020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_273024:
    // 0x273024: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x273024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_273028:
    // 0x273028: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_27302c:
    if (ctx->pc == 0x27302Cu) {
        ctx->pc = 0x27302Cu;
            // 0x27302c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x273030u;
        goto label_273030;
    }
    ctx->pc = 0x273028u;
    {
        const bool branch_taken_0x273028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273028u;
            // 0x27302c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273028) {
            ctx->pc = 0x272F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272f60;
        }
    }
    ctx->pc = 0x273030u;
label_273030:
    // 0x273030: 0xe6760000  swc1        $f22, 0x0($s3)
    ctx->pc = 0x273030u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_273034:
    // 0x273034: 0xe6d40000  swc1        $f20, 0x0($s6)
    ctx->pc = 0x273034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_273038:
    // 0x273038: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x273038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27303c:
    // 0x27303c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_273040:
    // 0x273040: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x273040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_273044:
    // 0x273044: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x273044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_273048:
    // 0x273048: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x273048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27304c:
    // 0x27304c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_273050:
    // 0x273050: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x273050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_273054:
    // 0x273054: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x273054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_273058:
    // 0x273058: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x273058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27305c:
    // 0x27305c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27305cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273060:
    // 0x273060: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x273060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273064:
    // 0x273064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x273064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273068:
    // 0x273068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27306c:
    // 0x27306c: 0x3e00008  jr          $ra
label_273070:
    if (ctx->pc == 0x273070u) {
        ctx->pc = 0x273070u;
            // 0x273070: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = 0x273074u;
        goto label_273074;
    }
    ctx->pc = 0x27306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27306Cu;
            // 0x273070: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273074u;
label_273074:
    // 0x273074: 0x0  nop
    ctx->pc = 0x273074u;
    // NOP
label_273078:
    // 0x273078: 0x0  nop
    ctx->pc = 0x273078u;
    // NOP
label_27307c:
    // 0x27307c: 0x0  nop
    ctx->pc = 0x27307cu;
    // NOP
label_273080:
    // 0x273080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_273084:
    // 0x273084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x273084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_273088:
    // 0x273088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27308c:
    // 0x27308c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_273090:
    // 0x273090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x273090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273094:
    // 0x273094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_273098:
    // 0x273098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27309c:
    // 0x27309c: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x27309cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2730a0:
    // 0x2730a0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2730a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2730a4:
    // 0x2730a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2730a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2730a8:
    // 0x2730a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2730a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2730ac:
    // 0x2730ac: 0x320f809  jalr        $t9
label_2730b0:
    if (ctx->pc == 0x2730B0u) {
        ctx->pc = 0x2730B0u;
            // 0x2730b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2730B4u;
        goto label_2730b4;
    }
    ctx->pc = 0x2730ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2730B4u);
        ctx->pc = 0x2730B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730ACu;
            // 0x2730b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2730B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2730B4u; }
            if (ctx->pc != 0x2730B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2730B4u;
label_2730b4:
    // 0x2730b4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2730b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2730b8:
    // 0x2730b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2730b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2730bc:
    // 0x2730bc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_2730c0:
    if (ctx->pc == 0x2730C0u) {
        ctx->pc = 0x2730C0u;
            // 0x2730c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2730C4u;
        goto label_2730c4;
    }
    ctx->pc = 0x2730BCu;
    {
        const bool branch_taken_0x2730bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730BCu;
            // 0x2730c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730bc) {
            ctx->pc = 0x2730F8u;
            goto label_2730f8;
        }
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x0  nop
    ctx->pc = 0x2730c4u;
    // NOP
label_2730c8:
    // 0x2730c8: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2730c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_2730cc:
    // 0x2730cc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2730ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2730d0:
    // 0x2730d0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2730d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2730d4:
    // 0x2730d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2730d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2730d8:
    // 0x2730d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2730d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2730dc:
    // 0x2730dc: 0x320f809  jalr        $t9
label_2730e0:
    if (ctx->pc == 0x2730E0u) {
        ctx->pc = 0x2730E0u;
            // 0x2730e0: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x2730E4u;
        goto label_2730e4;
    }
    ctx->pc = 0x2730DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2730E4u);
        ctx->pc = 0x2730E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730DCu;
            // 0x2730e0: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2730E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2730E4u; }
            if (ctx->pc != 0x2730E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2730E4u;
label_2730e4:
    // 0x2730e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2730e8:
    // 0x2730e8: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2730e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2730ec:
    // 0x2730ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_2730f0:
    if (ctx->pc == 0x2730F0u) {
        ctx->pc = 0x2730F0u;
            // 0x2730f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2730F4u;
        goto label_2730f4;
    }
    ctx->pc = 0x2730ECu;
    {
        const bool branch_taken_0x2730ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2730F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730ECu;
            // 0x2730f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730ec) {
            ctx->pc = 0x2730C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2730c8;
        }
    }
    ctx->pc = 0x2730F4u;
label_2730f4:
    // 0x2730f4: 0x0  nop
    ctx->pc = 0x2730f4u;
    // NOP
label_2730f8:
    // 0x2730f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2730f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2730fc:
    // 0x2730fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2730fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273100:
    // 0x273100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273104:
    // 0x273104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273108:
    // 0x273108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27310c:
    // 0x27310c: 0x3e00008  jr          $ra
label_273110:
    if (ctx->pc == 0x273110u) {
        ctx->pc = 0x273110u;
            // 0x273110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x273114u;
        goto label_273114;
    }
    ctx->pc = 0x27310Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27310Cu;
            // 0x273110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273114u;
label_273114:
    // 0x273114: 0x0  nop
    ctx->pc = 0x273114u;
    // NOP
label_273118:
    // 0x273118: 0x0  nop
    ctx->pc = 0x273118u;
    // NOP
label_27311c:
    // 0x27311c: 0x0  nop
    ctx->pc = 0x27311cu;
    // NOP
label_273120:
    // 0x273120: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x273120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_273124:
    // 0x273124: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x273124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_273128:
    // 0x273128: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x273128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27312c:
    // 0x27312c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x27312cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_273130:
    // 0x273130: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x273130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273134:
    // 0x273134: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x273134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273138:
    // 0x273138: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x273138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_27313c:
    // 0x27313c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x27313cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_273140:
    // 0x273140: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x273140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_273144:
    // 0x273144: 0x3e00008  jr          $ra
label_273148:
    if (ctx->pc == 0x273148u) {
        ctx->pc = 0x273148u;
            // 0x273148: 0xad030010  sw          $v1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x27314Cu;
        goto label_27314c;
    }
    ctx->pc = 0x273144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273144u;
            // 0x273148: 0xad030010  sw          $v1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27314Cu;
label_27314c:
    // 0x27314c: 0x0  nop
    ctx->pc = 0x27314cu;
    // NOP
label_273150:
    // 0x273150: 0x3e00008  jr          $ra
label_273154:
    if (ctx->pc == 0x273154u) {
        ctx->pc = 0x273154u;
            // 0x273154: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x273158u;
        goto label_273158;
    }
    ctx->pc = 0x273150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273150u;
            // 0x273154: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273158u;
label_273158:
    // 0x273158: 0x0  nop
    ctx->pc = 0x273158u;
    // NOP
label_27315c:
    // 0x27315c: 0x0  nop
    ctx->pc = 0x27315cu;
    // NOP
}
