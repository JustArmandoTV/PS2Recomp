#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8CC0
// Address: 0x2a8cc0 - 0x2a91b0
void sub_002A8CC0_0x2a8cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8CC0_0x2a8cc0");
#endif

    switch (ctx->pc) {
        case 0x2a8cc0u: goto label_2a8cc0;
        case 0x2a8cc4u: goto label_2a8cc4;
        case 0x2a8cc8u: goto label_2a8cc8;
        case 0x2a8cccu: goto label_2a8ccc;
        case 0x2a8cd0u: goto label_2a8cd0;
        case 0x2a8cd4u: goto label_2a8cd4;
        case 0x2a8cd8u: goto label_2a8cd8;
        case 0x2a8cdcu: goto label_2a8cdc;
        case 0x2a8ce0u: goto label_2a8ce0;
        case 0x2a8ce4u: goto label_2a8ce4;
        case 0x2a8ce8u: goto label_2a8ce8;
        case 0x2a8cecu: goto label_2a8cec;
        case 0x2a8cf0u: goto label_2a8cf0;
        case 0x2a8cf4u: goto label_2a8cf4;
        case 0x2a8cf8u: goto label_2a8cf8;
        case 0x2a8cfcu: goto label_2a8cfc;
        case 0x2a8d00u: goto label_2a8d00;
        case 0x2a8d04u: goto label_2a8d04;
        case 0x2a8d08u: goto label_2a8d08;
        case 0x2a8d0cu: goto label_2a8d0c;
        case 0x2a8d10u: goto label_2a8d10;
        case 0x2a8d14u: goto label_2a8d14;
        case 0x2a8d18u: goto label_2a8d18;
        case 0x2a8d1cu: goto label_2a8d1c;
        case 0x2a8d20u: goto label_2a8d20;
        case 0x2a8d24u: goto label_2a8d24;
        case 0x2a8d28u: goto label_2a8d28;
        case 0x2a8d2cu: goto label_2a8d2c;
        case 0x2a8d30u: goto label_2a8d30;
        case 0x2a8d34u: goto label_2a8d34;
        case 0x2a8d38u: goto label_2a8d38;
        case 0x2a8d3cu: goto label_2a8d3c;
        case 0x2a8d40u: goto label_2a8d40;
        case 0x2a8d44u: goto label_2a8d44;
        case 0x2a8d48u: goto label_2a8d48;
        case 0x2a8d4cu: goto label_2a8d4c;
        case 0x2a8d50u: goto label_2a8d50;
        case 0x2a8d54u: goto label_2a8d54;
        case 0x2a8d58u: goto label_2a8d58;
        case 0x2a8d5cu: goto label_2a8d5c;
        case 0x2a8d60u: goto label_2a8d60;
        case 0x2a8d64u: goto label_2a8d64;
        case 0x2a8d68u: goto label_2a8d68;
        case 0x2a8d6cu: goto label_2a8d6c;
        case 0x2a8d70u: goto label_2a8d70;
        case 0x2a8d74u: goto label_2a8d74;
        case 0x2a8d78u: goto label_2a8d78;
        case 0x2a8d7cu: goto label_2a8d7c;
        case 0x2a8d80u: goto label_2a8d80;
        case 0x2a8d84u: goto label_2a8d84;
        case 0x2a8d88u: goto label_2a8d88;
        case 0x2a8d8cu: goto label_2a8d8c;
        case 0x2a8d90u: goto label_2a8d90;
        case 0x2a8d94u: goto label_2a8d94;
        case 0x2a8d98u: goto label_2a8d98;
        case 0x2a8d9cu: goto label_2a8d9c;
        case 0x2a8da0u: goto label_2a8da0;
        case 0x2a8da4u: goto label_2a8da4;
        case 0x2a8da8u: goto label_2a8da8;
        case 0x2a8dacu: goto label_2a8dac;
        case 0x2a8db0u: goto label_2a8db0;
        case 0x2a8db4u: goto label_2a8db4;
        case 0x2a8db8u: goto label_2a8db8;
        case 0x2a8dbcu: goto label_2a8dbc;
        case 0x2a8dc0u: goto label_2a8dc0;
        case 0x2a8dc4u: goto label_2a8dc4;
        case 0x2a8dc8u: goto label_2a8dc8;
        case 0x2a8dccu: goto label_2a8dcc;
        case 0x2a8dd0u: goto label_2a8dd0;
        case 0x2a8dd4u: goto label_2a8dd4;
        case 0x2a8dd8u: goto label_2a8dd8;
        case 0x2a8ddcu: goto label_2a8ddc;
        case 0x2a8de0u: goto label_2a8de0;
        case 0x2a8de4u: goto label_2a8de4;
        case 0x2a8de8u: goto label_2a8de8;
        case 0x2a8decu: goto label_2a8dec;
        case 0x2a8df0u: goto label_2a8df0;
        case 0x2a8df4u: goto label_2a8df4;
        case 0x2a8df8u: goto label_2a8df8;
        case 0x2a8dfcu: goto label_2a8dfc;
        case 0x2a8e00u: goto label_2a8e00;
        case 0x2a8e04u: goto label_2a8e04;
        case 0x2a8e08u: goto label_2a8e08;
        case 0x2a8e0cu: goto label_2a8e0c;
        case 0x2a8e10u: goto label_2a8e10;
        case 0x2a8e14u: goto label_2a8e14;
        case 0x2a8e18u: goto label_2a8e18;
        case 0x2a8e1cu: goto label_2a8e1c;
        case 0x2a8e20u: goto label_2a8e20;
        case 0x2a8e24u: goto label_2a8e24;
        case 0x2a8e28u: goto label_2a8e28;
        case 0x2a8e2cu: goto label_2a8e2c;
        case 0x2a8e30u: goto label_2a8e30;
        case 0x2a8e34u: goto label_2a8e34;
        case 0x2a8e38u: goto label_2a8e38;
        case 0x2a8e3cu: goto label_2a8e3c;
        case 0x2a8e40u: goto label_2a8e40;
        case 0x2a8e44u: goto label_2a8e44;
        case 0x2a8e48u: goto label_2a8e48;
        case 0x2a8e4cu: goto label_2a8e4c;
        case 0x2a8e50u: goto label_2a8e50;
        case 0x2a8e54u: goto label_2a8e54;
        case 0x2a8e58u: goto label_2a8e58;
        case 0x2a8e5cu: goto label_2a8e5c;
        case 0x2a8e60u: goto label_2a8e60;
        case 0x2a8e64u: goto label_2a8e64;
        case 0x2a8e68u: goto label_2a8e68;
        case 0x2a8e6cu: goto label_2a8e6c;
        case 0x2a8e70u: goto label_2a8e70;
        case 0x2a8e74u: goto label_2a8e74;
        case 0x2a8e78u: goto label_2a8e78;
        case 0x2a8e7cu: goto label_2a8e7c;
        case 0x2a8e80u: goto label_2a8e80;
        case 0x2a8e84u: goto label_2a8e84;
        case 0x2a8e88u: goto label_2a8e88;
        case 0x2a8e8cu: goto label_2a8e8c;
        case 0x2a8e90u: goto label_2a8e90;
        case 0x2a8e94u: goto label_2a8e94;
        case 0x2a8e98u: goto label_2a8e98;
        case 0x2a8e9cu: goto label_2a8e9c;
        case 0x2a8ea0u: goto label_2a8ea0;
        case 0x2a8ea4u: goto label_2a8ea4;
        case 0x2a8ea8u: goto label_2a8ea8;
        case 0x2a8eacu: goto label_2a8eac;
        case 0x2a8eb0u: goto label_2a8eb0;
        case 0x2a8eb4u: goto label_2a8eb4;
        case 0x2a8eb8u: goto label_2a8eb8;
        case 0x2a8ebcu: goto label_2a8ebc;
        case 0x2a8ec0u: goto label_2a8ec0;
        case 0x2a8ec4u: goto label_2a8ec4;
        case 0x2a8ec8u: goto label_2a8ec8;
        case 0x2a8eccu: goto label_2a8ecc;
        case 0x2a8ed0u: goto label_2a8ed0;
        case 0x2a8ed4u: goto label_2a8ed4;
        case 0x2a8ed8u: goto label_2a8ed8;
        case 0x2a8edcu: goto label_2a8edc;
        case 0x2a8ee0u: goto label_2a8ee0;
        case 0x2a8ee4u: goto label_2a8ee4;
        case 0x2a8ee8u: goto label_2a8ee8;
        case 0x2a8eecu: goto label_2a8eec;
        case 0x2a8ef0u: goto label_2a8ef0;
        case 0x2a8ef4u: goto label_2a8ef4;
        case 0x2a8ef8u: goto label_2a8ef8;
        case 0x2a8efcu: goto label_2a8efc;
        case 0x2a8f00u: goto label_2a8f00;
        case 0x2a8f04u: goto label_2a8f04;
        case 0x2a8f08u: goto label_2a8f08;
        case 0x2a8f0cu: goto label_2a8f0c;
        case 0x2a8f10u: goto label_2a8f10;
        case 0x2a8f14u: goto label_2a8f14;
        case 0x2a8f18u: goto label_2a8f18;
        case 0x2a8f1cu: goto label_2a8f1c;
        case 0x2a8f20u: goto label_2a8f20;
        case 0x2a8f24u: goto label_2a8f24;
        case 0x2a8f28u: goto label_2a8f28;
        case 0x2a8f2cu: goto label_2a8f2c;
        case 0x2a8f30u: goto label_2a8f30;
        case 0x2a8f34u: goto label_2a8f34;
        case 0x2a8f38u: goto label_2a8f38;
        case 0x2a8f3cu: goto label_2a8f3c;
        case 0x2a8f40u: goto label_2a8f40;
        case 0x2a8f44u: goto label_2a8f44;
        case 0x2a8f48u: goto label_2a8f48;
        case 0x2a8f4cu: goto label_2a8f4c;
        case 0x2a8f50u: goto label_2a8f50;
        case 0x2a8f54u: goto label_2a8f54;
        case 0x2a8f58u: goto label_2a8f58;
        case 0x2a8f5cu: goto label_2a8f5c;
        case 0x2a8f60u: goto label_2a8f60;
        case 0x2a8f64u: goto label_2a8f64;
        case 0x2a8f68u: goto label_2a8f68;
        case 0x2a8f6cu: goto label_2a8f6c;
        case 0x2a8f70u: goto label_2a8f70;
        case 0x2a8f74u: goto label_2a8f74;
        case 0x2a8f78u: goto label_2a8f78;
        case 0x2a8f7cu: goto label_2a8f7c;
        case 0x2a8f80u: goto label_2a8f80;
        case 0x2a8f84u: goto label_2a8f84;
        case 0x2a8f88u: goto label_2a8f88;
        case 0x2a8f8cu: goto label_2a8f8c;
        case 0x2a8f90u: goto label_2a8f90;
        case 0x2a8f94u: goto label_2a8f94;
        case 0x2a8f98u: goto label_2a8f98;
        case 0x2a8f9cu: goto label_2a8f9c;
        case 0x2a8fa0u: goto label_2a8fa0;
        case 0x2a8fa4u: goto label_2a8fa4;
        case 0x2a8fa8u: goto label_2a8fa8;
        case 0x2a8facu: goto label_2a8fac;
        case 0x2a8fb0u: goto label_2a8fb0;
        case 0x2a8fb4u: goto label_2a8fb4;
        case 0x2a8fb8u: goto label_2a8fb8;
        case 0x2a8fbcu: goto label_2a8fbc;
        case 0x2a8fc0u: goto label_2a8fc0;
        case 0x2a8fc4u: goto label_2a8fc4;
        case 0x2a8fc8u: goto label_2a8fc8;
        case 0x2a8fccu: goto label_2a8fcc;
        case 0x2a8fd0u: goto label_2a8fd0;
        case 0x2a8fd4u: goto label_2a8fd4;
        case 0x2a8fd8u: goto label_2a8fd8;
        case 0x2a8fdcu: goto label_2a8fdc;
        case 0x2a8fe0u: goto label_2a8fe0;
        case 0x2a8fe4u: goto label_2a8fe4;
        case 0x2a8fe8u: goto label_2a8fe8;
        case 0x2a8fecu: goto label_2a8fec;
        case 0x2a8ff0u: goto label_2a8ff0;
        case 0x2a8ff4u: goto label_2a8ff4;
        case 0x2a8ff8u: goto label_2a8ff8;
        case 0x2a8ffcu: goto label_2a8ffc;
        case 0x2a9000u: goto label_2a9000;
        case 0x2a9004u: goto label_2a9004;
        case 0x2a9008u: goto label_2a9008;
        case 0x2a900cu: goto label_2a900c;
        case 0x2a9010u: goto label_2a9010;
        case 0x2a9014u: goto label_2a9014;
        case 0x2a9018u: goto label_2a9018;
        case 0x2a901cu: goto label_2a901c;
        case 0x2a9020u: goto label_2a9020;
        case 0x2a9024u: goto label_2a9024;
        case 0x2a9028u: goto label_2a9028;
        case 0x2a902cu: goto label_2a902c;
        case 0x2a9030u: goto label_2a9030;
        case 0x2a9034u: goto label_2a9034;
        case 0x2a9038u: goto label_2a9038;
        case 0x2a903cu: goto label_2a903c;
        case 0x2a9040u: goto label_2a9040;
        case 0x2a9044u: goto label_2a9044;
        case 0x2a9048u: goto label_2a9048;
        case 0x2a904cu: goto label_2a904c;
        case 0x2a9050u: goto label_2a9050;
        case 0x2a9054u: goto label_2a9054;
        case 0x2a9058u: goto label_2a9058;
        case 0x2a905cu: goto label_2a905c;
        case 0x2a9060u: goto label_2a9060;
        case 0x2a9064u: goto label_2a9064;
        case 0x2a9068u: goto label_2a9068;
        case 0x2a906cu: goto label_2a906c;
        case 0x2a9070u: goto label_2a9070;
        case 0x2a9074u: goto label_2a9074;
        case 0x2a9078u: goto label_2a9078;
        case 0x2a907cu: goto label_2a907c;
        case 0x2a9080u: goto label_2a9080;
        case 0x2a9084u: goto label_2a9084;
        case 0x2a9088u: goto label_2a9088;
        case 0x2a908cu: goto label_2a908c;
        case 0x2a9090u: goto label_2a9090;
        case 0x2a9094u: goto label_2a9094;
        case 0x2a9098u: goto label_2a9098;
        case 0x2a909cu: goto label_2a909c;
        case 0x2a90a0u: goto label_2a90a0;
        case 0x2a90a4u: goto label_2a90a4;
        case 0x2a90a8u: goto label_2a90a8;
        case 0x2a90acu: goto label_2a90ac;
        case 0x2a90b0u: goto label_2a90b0;
        case 0x2a90b4u: goto label_2a90b4;
        case 0x2a90b8u: goto label_2a90b8;
        case 0x2a90bcu: goto label_2a90bc;
        case 0x2a90c0u: goto label_2a90c0;
        case 0x2a90c4u: goto label_2a90c4;
        case 0x2a90c8u: goto label_2a90c8;
        case 0x2a90ccu: goto label_2a90cc;
        case 0x2a90d0u: goto label_2a90d0;
        case 0x2a90d4u: goto label_2a90d4;
        case 0x2a90d8u: goto label_2a90d8;
        case 0x2a90dcu: goto label_2a90dc;
        case 0x2a90e0u: goto label_2a90e0;
        case 0x2a90e4u: goto label_2a90e4;
        case 0x2a90e8u: goto label_2a90e8;
        case 0x2a90ecu: goto label_2a90ec;
        case 0x2a90f0u: goto label_2a90f0;
        case 0x2a90f4u: goto label_2a90f4;
        case 0x2a90f8u: goto label_2a90f8;
        case 0x2a90fcu: goto label_2a90fc;
        case 0x2a9100u: goto label_2a9100;
        case 0x2a9104u: goto label_2a9104;
        case 0x2a9108u: goto label_2a9108;
        case 0x2a910cu: goto label_2a910c;
        case 0x2a9110u: goto label_2a9110;
        case 0x2a9114u: goto label_2a9114;
        case 0x2a9118u: goto label_2a9118;
        case 0x2a911cu: goto label_2a911c;
        case 0x2a9120u: goto label_2a9120;
        case 0x2a9124u: goto label_2a9124;
        case 0x2a9128u: goto label_2a9128;
        case 0x2a912cu: goto label_2a912c;
        case 0x2a9130u: goto label_2a9130;
        case 0x2a9134u: goto label_2a9134;
        case 0x2a9138u: goto label_2a9138;
        case 0x2a913cu: goto label_2a913c;
        case 0x2a9140u: goto label_2a9140;
        case 0x2a9144u: goto label_2a9144;
        case 0x2a9148u: goto label_2a9148;
        case 0x2a914cu: goto label_2a914c;
        case 0x2a9150u: goto label_2a9150;
        case 0x2a9154u: goto label_2a9154;
        case 0x2a9158u: goto label_2a9158;
        case 0x2a915cu: goto label_2a915c;
        case 0x2a9160u: goto label_2a9160;
        case 0x2a9164u: goto label_2a9164;
        case 0x2a9168u: goto label_2a9168;
        case 0x2a916cu: goto label_2a916c;
        case 0x2a9170u: goto label_2a9170;
        case 0x2a9174u: goto label_2a9174;
        case 0x2a9178u: goto label_2a9178;
        case 0x2a917cu: goto label_2a917c;
        case 0x2a9180u: goto label_2a9180;
        case 0x2a9184u: goto label_2a9184;
        case 0x2a9188u: goto label_2a9188;
        case 0x2a918cu: goto label_2a918c;
        case 0x2a9190u: goto label_2a9190;
        case 0x2a9194u: goto label_2a9194;
        case 0x2a9198u: goto label_2a9198;
        case 0x2a919cu: goto label_2a919c;
        case 0x2a91a0u: goto label_2a91a0;
        case 0x2a91a4u: goto label_2a91a4;
        case 0x2a91a8u: goto label_2a91a8;
        case 0x2a91acu: goto label_2a91ac;
        default: break;
    }

    ctx->pc = 0x2a8cc0u;

label_2a8cc0:
    // 0x2a8cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a8cc4:
    // 0x2a8cc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a8cc8:
    // 0x2a8cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a8ccc:
    // 0x2a8ccc: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x2a8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_2a8cd0:
    // 0x2a8cd0: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a8cd4:
    // 0x2a8cd4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a8cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a8cd8:
    // 0x2a8cd8: 0x320f809  jalr        $t9
label_2a8cdc:
    if (ctx->pc == 0x2A8CDCu) {
        ctx->pc = 0x2A8CDCu;
            // 0x2a8cdc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2A8CE0u;
        goto label_2a8ce0;
    }
    ctx->pc = 0x2A8CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A8CE0u);
        ctx->pc = 0x2A8CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8CD8u;
            // 0x2a8cdc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A8CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A8CE0u; }
            if (ctx->pc != 0x2A8CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A8CE0u;
label_2a8ce0:
    // 0x2a8ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8ce4:
    // 0x2a8ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ce8:
    // 0x2a8ce8: 0x3e00008  jr          $ra
label_2a8cec:
    if (ctx->pc == 0x2A8CECu) {
        ctx->pc = 0x2A8CECu;
            // 0x2a8cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A8CF0u;
        goto label_2a8cf0;
    }
    ctx->pc = 0x2A8CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8CE8u;
            // 0x2a8cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8CF0u;
label_2a8cf0:
    // 0x2a8cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a8cf4:
    // 0x2a8cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a8cf8:
    // 0x2a8cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8cfc:
    // 0x2a8cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d00:
    // 0x2a8d00: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2a8d04:
    if (ctx->pc == 0x2A8D04u) {
        ctx->pc = 0x2A8D04u;
            // 0x2a8d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D08u;
        goto label_2a8d08;
    }
    ctx->pc = 0x2A8D00u;
    {
        const bool branch_taken_0x2a8d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8d00) {
            ctx->pc = 0x2A8D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D00u;
            // 0x2a8d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D34u;
            goto label_2a8d34;
        }
    }
    ctx->pc = 0x2A8D08u;
label_2a8d08:
    // 0x2a8d08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a8d0c:
    // 0x2a8d0c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2a8d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_2a8d10:
    // 0x2a8d10: 0x2442fc68  addiu       $v0, $v0, -0x398
    ctx->pc = 0x2a8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966376));
label_2a8d14:
    // 0x2a8d14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a8d14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2a8d18:
    // 0x2a8d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a8d1c:
    // 0x2a8d1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a8d20:
    // 0x2a8d20: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_2a8d24:
    if (ctx->pc == 0x2A8D24u) {
        ctx->pc = 0x2A8D24u;
            // 0x2a8d24: 0xac40a348  sw          $zero, -0x5CB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943560), GPR_U32(ctx, 0));
        ctx->pc = 0x2A8D28u;
        goto label_2a8d28;
    }
    ctx->pc = 0x2A8D20u;
    {
        const bool branch_taken_0x2a8d20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A8D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D20u;
            // 0x2a8d24: 0xac40a348  sw          $zero, -0x5CB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d20) {
            ctx->pc = 0x2A8D30u;
            goto label_2a8d30;
        }
    }
    ctx->pc = 0x2A8D28u;
label_2a8d28:
    // 0x2a8d28: 0xc0400a8  jal         func_1002A0
label_2a8d2c:
    if (ctx->pc == 0x2A8D2Cu) {
        ctx->pc = 0x2A8D30u;
        goto label_2a8d30;
    }
    ctx->pc = 0x2A8D28u;
    SET_GPR_U32(ctx, 31, 0x2A8D30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D30u; }
        if (ctx->pc != 0x2A8D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D30u; }
        if (ctx->pc != 0x2A8D30u) { return; }
    }
    ctx->pc = 0x2A8D30u;
label_2a8d30:
    // 0x2a8d30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d34:
    // 0x2a8d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8d38:
    // 0x2a8d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8d3c:
    // 0x2a8d3c: 0x3e00008  jr          $ra
label_2a8d40:
    if (ctx->pc == 0x2A8D40u) {
        ctx->pc = 0x2A8D40u;
            // 0x2a8d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A8D44u;
        goto label_2a8d44;
    }
    ctx->pc = 0x2A8D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D3Cu;
            // 0x2a8d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8D44u;
label_2a8d44:
    // 0x2a8d44: 0x0  nop
    ctx->pc = 0x2a8d44u;
    // NOP
label_2a8d48:
    // 0x2a8d48: 0x0  nop
    ctx->pc = 0x2a8d48u;
    // NOP
label_2a8d4c:
    // 0x2a8d4c: 0x0  nop
    ctx->pc = 0x2a8d4cu;
    // NOP
label_2a8d50:
    // 0x2a8d50: 0x80aa22c  j           func_2A88B0
label_2a8d54:
    if (ctx->pc == 0x2A8D54u) {
        ctx->pc = 0x2A8D54u;
            // 0x2a8d54: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8D58u;
        goto label_2a8d58;
    }
    ctx->pc = 0x2A8D50u;
    ctx->pc = 0x2A8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D50u;
            // 0x2a8d54: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8D58u;
label_2a8d58:
    // 0x2a8d58: 0x0  nop
    ctx->pc = 0x2a8d58u;
    // NOP
label_2a8d5c:
    // 0x2a8d5c: 0x0  nop
    ctx->pc = 0x2a8d5cu;
    // NOP
label_2a8d60:
    // 0x2a8d60: 0x80aa2a0  j           func_2A8A80
label_2a8d64:
    if (ctx->pc == 0x2A8D64u) {
        ctx->pc = 0x2A8D64u;
            // 0x2a8d64: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8D68u;
        goto label_2a8d68;
    }
    ctx->pc = 0x2A8D60u;
    ctx->pc = 0x2A8D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D60u;
            // 0x2a8d64: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A80u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8D68u;
label_2a8d68:
    // 0x2a8d68: 0x0  nop
    ctx->pc = 0x2a8d68u;
    // NOP
label_2a8d6c:
    // 0x2a8d6c: 0x0  nop
    ctx->pc = 0x2a8d6cu;
    // NOP
label_2a8d70:
    // 0x2a8d70: 0x80aa2a4  j           func_2A8A90
label_2a8d74:
    if (ctx->pc == 0x2A8D74u) {
        ctx->pc = 0x2A8D74u;
            // 0x2a8d74: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8D78u;
        goto label_2a8d78;
    }
    ctx->pc = 0x2A8D70u;
    ctx->pc = 0x2A8D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D70u;
            // 0x2a8d74: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A90u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8D78u;
label_2a8d78:
    // 0x2a8d78: 0x0  nop
    ctx->pc = 0x2a8d78u;
    // NOP
label_2a8d7c:
    // 0x2a8d7c: 0x0  nop
    ctx->pc = 0x2a8d7cu;
    // NOP
label_2a8d80:
    // 0x2a8d80: 0x80aa2b0  j           func_2A8AC0
label_2a8d84:
    if (ctx->pc == 0x2A8D84u) {
        ctx->pc = 0x2A8D84u;
            // 0x2a8d84: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8D88u;
        goto label_2a8d88;
    }
    ctx->pc = 0x2A8D80u;
    ctx->pc = 0x2A8D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D80u;
            // 0x2a8d84: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8AC0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8D88u;
label_2a8d88:
    // 0x2a8d88: 0x0  nop
    ctx->pc = 0x2a8d88u;
    // NOP
label_2a8d8c:
    // 0x2a8d8c: 0x0  nop
    ctx->pc = 0x2a8d8cu;
    // NOP
label_2a8d90:
    // 0x2a8d90: 0x80aa2d0  j           func_2A8B40
label_2a8d94:
    if (ctx->pc == 0x2A8D94u) {
        ctx->pc = 0x2A8D94u;
            // 0x2a8d94: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8D98u;
        goto label_2a8d98;
    }
    ctx->pc = 0x2A8D90u;
    ctx->pc = 0x2A8D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D90u;
            // 0x2a8d94: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B40u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8D98u;
label_2a8d98:
    // 0x2a8d98: 0x0  nop
    ctx->pc = 0x2a8d98u;
    // NOP
label_2a8d9c:
    // 0x2a8d9c: 0x0  nop
    ctx->pc = 0x2a8d9cu;
    // NOP
label_2a8da0:
    // 0x2a8da0: 0x80aa2d4  j           func_2A8B50
label_2a8da4:
    if (ctx->pc == 0x2A8DA4u) {
        ctx->pc = 0x2A8DA4u;
            // 0x2a8da4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8DA8u;
        goto label_2a8da8;
    }
    ctx->pc = 0x2A8DA0u;
    ctx->pc = 0x2A8DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DA0u;
            // 0x2a8da4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B50u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8DA8u;
label_2a8da8:
    // 0x2a8da8: 0x0  nop
    ctx->pc = 0x2a8da8u;
    // NOP
label_2a8dac:
    // 0x2a8dac: 0x0  nop
    ctx->pc = 0x2a8dacu;
    // NOP
label_2a8db0:
    // 0x2a8db0: 0x80aa25c  j           func_2A8970
label_2a8db4:
    if (ctx->pc == 0x2A8DB4u) {
        ctx->pc = 0x2A8DB4u;
            // 0x2a8db4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8DB8u;
        goto label_2a8db8;
    }
    ctx->pc = 0x2A8DB0u;
    ctx->pc = 0x2A8DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DB0u;
            // 0x2a8db4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8970u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8DB8u;
label_2a8db8:
    // 0x2a8db8: 0x0  nop
    ctx->pc = 0x2a8db8u;
    // NOP
label_2a8dbc:
    // 0x2a8dbc: 0x0  nop
    ctx->pc = 0x2a8dbcu;
    // NOP
label_2a8dc0:
    // 0x2a8dc0: 0x80aa27c  j           func_2A89F0
label_2a8dc4:
    if (ctx->pc == 0x2A8DC4u) {
        ctx->pc = 0x2A8DC4u;
            // 0x2a8dc4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8DC8u;
        goto label_2a8dc8;
    }
    ctx->pc = 0x2A8DC0u;
    ctx->pc = 0x2A8DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DC0u;
            // 0x2a8dc4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A89F0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8DC8u;
label_2a8dc8:
    // 0x2a8dc8: 0x0  nop
    ctx->pc = 0x2a8dc8u;
    // NOP
label_2a8dcc:
    // 0x2a8dcc: 0x0  nop
    ctx->pc = 0x2a8dccu;
    // NOP
label_2a8dd0:
    // 0x2a8dd0: 0x80aa2e4  j           func_2A8B90
label_2a8dd4:
    if (ctx->pc == 0x2A8DD4u) {
        ctx->pc = 0x2A8DD4u;
            // 0x2a8dd4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8DD8u;
        goto label_2a8dd8;
    }
    ctx->pc = 0x2A8DD0u;
    ctx->pc = 0x2A8DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DD0u;
            // 0x2a8dd4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B90u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8DD8u;
label_2a8dd8:
    // 0x2a8dd8: 0x0  nop
    ctx->pc = 0x2a8dd8u;
    // NOP
label_2a8ddc:
    // 0x2a8ddc: 0x0  nop
    ctx->pc = 0x2a8ddcu;
    // NOP
label_2a8de0:
    // 0x2a8de0: 0x80aa2e8  j           func_2A8BA0
label_2a8de4:
    if (ctx->pc == 0x2A8DE4u) {
        ctx->pc = 0x2A8DE4u;
            // 0x2a8de4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8DE8u;
        goto label_2a8de8;
    }
    ctx->pc = 0x2A8DE0u;
    ctx->pc = 0x2A8DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DE0u;
            // 0x2a8de4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BA0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8DE8u;
label_2a8de8:
    // 0x2a8de8: 0x0  nop
    ctx->pc = 0x2a8de8u;
    // NOP
label_2a8dec:
    // 0x2a8dec: 0x0  nop
    ctx->pc = 0x2a8decu;
    // NOP
label_2a8df0:
    // 0x2a8df0: 0x80aa2fc  j           func_2A8BF0
label_2a8df4:
    if (ctx->pc == 0x2A8DF4u) {
        ctx->pc = 0x2A8DF4u;
            // 0x2a8df4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8DF8u;
        goto label_2a8df8;
    }
    ctx->pc = 0x2A8DF0u;
    ctx->pc = 0x2A8DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DF0u;
            // 0x2a8df4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BF0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8DF8u;
label_2a8df8:
    // 0x2a8df8: 0x0  nop
    ctx->pc = 0x2a8df8u;
    // NOP
label_2a8dfc:
    // 0x2a8dfc: 0x0  nop
    ctx->pc = 0x2a8dfcu;
    // NOP
label_2a8e00:
    // 0x2a8e00: 0x80aa2e0  j           func_2A8B80
label_2a8e04:
    if (ctx->pc == 0x2A8E04u) {
        ctx->pc = 0x2A8E04u;
            // 0x2a8e04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8E08u;
        goto label_2a8e08;
    }
    ctx->pc = 0x2A8E00u;
    ctx->pc = 0x2A8E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E00u;
            // 0x2a8e04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B80u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8E08u;
label_2a8e08:
    // 0x2a8e08: 0x0  nop
    ctx->pc = 0x2a8e08u;
    // NOP
label_2a8e0c:
    // 0x2a8e0c: 0x0  nop
    ctx->pc = 0x2a8e0cu;
    // NOP
label_2a8e10:
    // 0x2a8e10: 0x80aa30c  j           func_2A8C30
label_2a8e14:
    if (ctx->pc == 0x2A8E14u) {
        ctx->pc = 0x2A8E14u;
            // 0x2a8e14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8E18u;
        goto label_2a8e18;
    }
    ctx->pc = 0x2A8E10u;
    ctx->pc = 0x2A8E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E10u;
            // 0x2a8e14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8C30u;
    {
        auto targetFn = runtime->lookupFunction(0x2A8C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8E18u;
label_2a8e18:
    // 0x2a8e18: 0x0  nop
    ctx->pc = 0x2a8e18u;
    // NOP
label_2a8e1c:
    // 0x2a8e1c: 0x0  nop
    ctx->pc = 0x2a8e1cu;
    // NOP
label_2a8e20:
    // 0x2a8e20: 0x80aa238  j           func_2A88E0
label_2a8e24:
    if (ctx->pc == 0x2A8E24u) {
        ctx->pc = 0x2A8E24u;
            // 0x2a8e24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x2A8E28u;
        goto label_2a8e28;
    }
    ctx->pc = 0x2A8E20u;
    ctx->pc = 0x2A8E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E20u;
            // 0x2a8e24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88E0u;
    if (runtime->hasFunction(0x2A88E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A88E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A88E0_0x2a88e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A8E28u;
label_2a8e28:
    // 0x2a8e28: 0x0  nop
    ctx->pc = 0x2a8e28u;
    // NOP
label_2a8e2c:
    // 0x2a8e2c: 0x0  nop
    ctx->pc = 0x2a8e2cu;
    // NOP
label_2a8e30:
    // 0x2a8e30: 0x3e00008  jr          $ra
label_2a8e34:
    if (ctx->pc == 0x2A8E34u) {
        ctx->pc = 0x2A8E38u;
        goto label_2a8e38;
    }
    ctx->pc = 0x2A8E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8E38u;
label_2a8e38:
    // 0x2a8e38: 0x0  nop
    ctx->pc = 0x2a8e38u;
    // NOP
label_2a8e3c:
    // 0x2a8e3c: 0x0  nop
    ctx->pc = 0x2a8e3cu;
    // NOP
label_2a8e40:
    // 0x2a8e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a8e44:
    // 0x2a8e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a8e48:
    // 0x2a8e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a8e4c:
    // 0x2a8e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8e50:
    // 0x2a8e50: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2a8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2a8e54:
    // 0x2a8e54: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2a8e58:
    if (ctx->pc == 0x2A8E58u) {
        ctx->pc = 0x2A8E58u;
            // 0x2a8e58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E5Cu;
        goto label_2a8e5c;
    }
    ctx->pc = 0x2A8E54u;
    {
        const bool branch_taken_0x2a8e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E54u;
            // 0x2a8e58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e54) {
            ctx->pc = 0x2A8EB4u;
            goto label_2a8eb4;
        }
    }
    ctx->pc = 0x2A8E5Cu;
label_2a8e5c:
    // 0x2a8e5c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2a8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2a8e60:
    // 0x2a8e60: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a8e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a8e64:
    // 0x2a8e64: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2a8e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2a8e68:
    // 0x2a8e68: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2a8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a8e6c:
    // 0x2a8e6c: 0x330c2  srl         $a2, $v1, 3
    ctx->pc = 0x2a8e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_2a8e70:
    // 0x2a8e70: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2a8e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2a8e74:
    // 0x2a8e74: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2a8e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2a8e78:
    // 0x2a8e78: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x2a8e78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_2a8e7c:
    // 0x2a8e7c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2a8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2a8e80:
    // 0x2a8e80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a8e84:
    // 0x2a8e84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a8e88:
    // 0x2a8e88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a8e8c:
    // 0x2a8e8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8e90:
    // 0x2a8e90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a8e94:
    // 0x2a8e94: 0x1010  mfhi        $v0
    ctx->pc = 0x2a8e94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2a8e98:
    // 0x2a8e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a8e9c:
    // 0x2a8e9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2a8ea0:
    // 0x2a8ea0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a8ea4:
    // 0x2a8ea4: 0xc0ab0d4  jal         func_2AC350
label_2a8ea8:
    if (ctx->pc == 0x2A8EA8u) {
        ctx->pc = 0x2A8EA8u;
            // 0x2a8ea8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A8EACu;
        goto label_2a8eac;
    }
    ctx->pc = 0x2A8EA4u;
    SET_GPR_U32(ctx, 31, 0x2A8EACu);
    ctx->pc = 0x2A8EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8EA4u;
            // 0x2a8ea8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC350u;
    if (runtime->hasFunction(0x2AC350u)) {
        auto targetFn = runtime->lookupFunction(0x2AC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8EACu; }
        if (ctx->pc != 0x2A8EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC350_0x2ac350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8EACu; }
        if (ctx->pc != 0x2A8EACu) { return; }
    }
    ctx->pc = 0x2A8EACu;
label_2a8eac:
    // 0x2a8eac: 0xc0ab098  jal         func_2AC260
label_2a8eb0:
    if (ctx->pc == 0x2A8EB0u) {
        ctx->pc = 0x2A8EB0u;
            // 0x2a8eb0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x2A8EB4u;
        goto label_2a8eb4;
    }
    ctx->pc = 0x2A8EACu;
    SET_GPR_U32(ctx, 31, 0x2A8EB4u);
    ctx->pc = 0x2A8EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8EACu;
            // 0x2a8eb0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC260u;
    if (runtime->hasFunction(0x2AC260u)) {
        auto targetFn = runtime->lookupFunction(0x2AC260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8EB4u; }
        if (ctx->pc != 0x2A8EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC260_0x2ac260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8EB4u; }
        if (ctx->pc != 0x2A8EB4u) { return; }
    }
    ctx->pc = 0x2A8EB4u;
label_2a8eb4:
    // 0x2a8eb4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2a8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a8eb8:
    // 0x2a8eb8: 0x506000b9  beql        $v1, $zero, . + 4 + (0xB9 << 2)
label_2a8ebc:
    if (ctx->pc == 0x2A8EBCu) {
        ctx->pc = 0x2A8EBCu;
            // 0x2a8ebc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2A8EC0u;
        goto label_2a8ec0;
    }
    ctx->pc = 0x2A8EB8u;
    {
        const bool branch_taken_0x2a8eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8eb8) {
            ctx->pc = 0x2A8EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8EB8u;
            // 0x2a8ebc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A91A0u;
            goto label_2a91a0;
        }
    }
    ctx->pc = 0x2A8EC0u;
label_2a8ec0:
    // 0x2a8ec0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2a8ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a8ec4:
    // 0x2a8ec4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a8ec8:
    // 0x2a8ec8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2a8ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2a8ecc:
    // 0x2a8ecc: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2a8eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a8ed0:
    // 0x2a8ed0: 0x540c2  srl         $t0, $a1, 3
    ctx->pc = 0x2a8ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_2a8ed4:
    // 0x2a8ed4: 0x8c64e198  lw          $a0, -0x1E68($v1)
    ctx->pc = 0x2a8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959512)));
label_2a8ed8:
    // 0x2a8ed8: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x2a8ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2a8edc:
    // 0x2a8edc: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x2a8edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_2a8ee0:
    // 0x2a8ee0: 0x107001b  divu        $zero, $t0, $a3
    ctx->pc = 0x2a8ee0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_2a8ee4:
    // 0x2a8ee4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2a8ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a8ee8:
    // 0x2a8ee8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a8eec:
    // 0x2a8eec: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2a8eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a8ef0:
    // 0x2a8ef0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a8ef4:
    // 0x2a8ef4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a8ef8:
    // 0x2a8ef8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2a8ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a8efc:
    // 0x2a8efc: 0x1810  mfhi        $v1
    ctx->pc = 0x2a8efcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a8f00:
    // 0x2a8f00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a8f04:
    // 0x2a8f04: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2a8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2a8f08:
    // 0x2a8f08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a8f0c:
    // 0x2a8f0c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x2a8f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a8f10:
    // 0x2a8f10: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2a8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2a8f14:
    // 0x2a8f14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a8f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a8f18:
    // 0x2a8f18: 0x54600078  bnel        $v1, $zero, . + 4 + (0x78 << 2)
label_2a8f1c:
    if (ctx->pc == 0x2A8F1Cu) {
        ctx->pc = 0x2A8F1Cu;
            // 0x2a8f1c: 0x92030060  lbu         $v1, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x2A8F20u;
        goto label_2a8f20;
    }
    ctx->pc = 0x2A8F18u;
    {
        const bool branch_taken_0x2a8f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f18) {
            ctx->pc = 0x2A8F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F18u;
            // 0x2a8f1c: 0x92030060  lbu         $v1, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A90FCu;
            goto label_2a90fc;
        }
    }
    ctx->pc = 0x2A8F20u;
label_2a8f20:
    // 0x2a8f20: 0x92050060  lbu         $a1, 0x60($s0)
    ctx->pc = 0x2a8f20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_2a8f24:
    // 0x2a8f24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a8f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8f28:
    // 0x2a8f28: 0x50a30063  beql        $a1, $v1, . + 4 + (0x63 << 2)
label_2a8f2c:
    if (ctx->pc == 0x2A8F2Cu) {
        ctx->pc = 0x2A8F2Cu;
            // 0x2a8f2c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2A8F30u;
        goto label_2a8f30;
    }
    ctx->pc = 0x2A8F28u;
    {
        const bool branch_taken_0x2a8f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8f28) {
            ctx->pc = 0x2A8F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F28u;
            // 0x2a8f2c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A90B8u;
            goto label_2a90b8;
        }
    }
    ctx->pc = 0x2A8F30u;
label_2a8f30:
    // 0x2a8f30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8f34:
    // 0x2a8f34: 0x50a30045  beql        $a1, $v1, . + 4 + (0x45 << 2)
label_2a8f38:
    if (ctx->pc == 0x2A8F38u) {
        ctx->pc = 0x2A8F38u;
            // 0x2a8f38: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2A8F3Cu;
        goto label_2a8f3c;
    }
    ctx->pc = 0x2A8F34u;
    {
        const bool branch_taken_0x2a8f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8f34) {
            ctx->pc = 0x2A8F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F34u;
            // 0x2a8f38: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A904Cu;
            goto label_2a904c;
        }
    }
    ctx->pc = 0x2A8F3Cu;
label_2a8f3c:
    // 0x2a8f3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8f40:
    // 0x2a8f40: 0x50a40037  beql        $a1, $a0, . + 4 + (0x37 << 2)
label_2a8f44:
    if (ctx->pc == 0x2A8F44u) {
        ctx->pc = 0x2A8F44u;
            // 0x2a8f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A8F48u;
        goto label_2a8f48;
    }
    ctx->pc = 0x2A8F40u;
    {
        const bool branch_taken_0x2a8f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a8f40) {
            ctx->pc = 0x2A8F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F40u;
            // 0x2a8f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9020u;
            goto label_2a9020;
        }
    }
    ctx->pc = 0x2A8F48u;
label_2a8f48:
    // 0x2a8f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8f4c:
    // 0x2a8f4c: 0x50a3001c  beql        $a1, $v1, . + 4 + (0x1C << 2)
label_2a8f50:
    if (ctx->pc == 0x2A8F50u) {
        ctx->pc = 0x2A8F50u;
            // 0x2a8f50: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2A8F54u;
        goto label_2a8f54;
    }
    ctx->pc = 0x2A8F4Cu;
    {
        const bool branch_taken_0x2a8f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8f4c) {
            ctx->pc = 0x2A8F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F4Cu;
            // 0x2a8f50: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8FC0u;
            goto label_2a8fc0;
        }
    }
    ctx->pc = 0x2A8F54u;
label_2a8f54:
    // 0x2a8f54: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_2a8f58:
    if (ctx->pc == 0x2A8F58u) {
        ctx->pc = 0x2A8F58u;
            // 0x2a8f58: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x2A8F5Cu;
        goto label_2a8f5c;
    }
    ctx->pc = 0x2A8F54u;
    {
        const bool branch_taken_0x2a8f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f54) {
            ctx->pc = 0x2A8F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F54u;
            // 0x2a8f58: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8F64u;
            goto label_2a8f64;
        }
    }
    ctx->pc = 0x2A8F5Cu;
label_2a8f5c:
    // 0x2a8f5c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_2a8f60:
    if (ctx->pc == 0x2A8F60u) {
        ctx->pc = 0x2A8F64u;
        goto label_2a8f64;
    }
    ctx->pc = 0x2A8F5Cu;
    {
        const bool branch_taken_0x2a8f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f5c) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A8F64u;
label_2a8f64:
    // 0x2a8f64: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a8f68:
    if (ctx->pc == 0x2A8F68u) {
        ctx->pc = 0x2A8F68u;
            // 0x2a8f68: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2A8F6Cu;
        goto label_2a8f6c;
    }
    ctx->pc = 0x2A8F64u;
    {
        const bool branch_taken_0x2a8f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f64) {
            ctx->pc = 0x2A8F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F64u;
            // 0x2a8f68: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8F74u;
            goto label_2a8f74;
        }
    }
    ctx->pc = 0x2A8F6Cu;
label_2a8f6c:
    // 0x2a8f6c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2a8f70:
    // 0x2a8f70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a8f74:
    // 0x2a8f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f78:
    // 0x2a8f78: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a8f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a8f7c:
    // 0x2a8f7c: 0x320f809  jalr        $t9
label_2a8f80:
    if (ctx->pc == 0x2A8F80u) {
        ctx->pc = 0x2A8F80u;
            // 0x2a8f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F84u;
        goto label_2a8f84;
    }
    ctx->pc = 0x2A8F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A8F84u);
        ctx->pc = 0x2A8F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F7Cu;
            // 0x2a8f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A8F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A8F84u; }
            if (ctx->pc != 0x2A8F84u) { return; }
        }
        }
    }
    ctx->pc = 0x2A8F84u;
label_2a8f84:
    // 0x2a8f84: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2a8f88:
    if (ctx->pc == 0x2A8F88u) {
        ctx->pc = 0x2A8F88u;
            // 0x2a8f88: 0x92030060  lbu         $v1, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x2A8F8Cu;
        goto label_2a8f8c;
    }
    ctx->pc = 0x2A8F84u;
    {
        const bool branch_taken_0x2a8f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f84) {
            ctx->pc = 0x2A8F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F84u;
            // 0x2a8f88: 0x92030060  lbu         $v1, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8FB4u;
            goto label_2a8fb4;
        }
    }
    ctx->pc = 0x2A8F8Cu;
label_2a8f8c:
    // 0x2a8f8c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a8f90:
    // 0x2a8f90: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a8f94:
    if (ctx->pc == 0x2A8F94u) {
        ctx->pc = 0x2A8F94u;
            // 0x2a8f94: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A8F98u;
        goto label_2a8f98;
    }
    ctx->pc = 0x2A8F90u;
    {
        const bool branch_taken_0x2a8f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f90) {
            ctx->pc = 0x2A8F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F90u;
            // 0x2a8f94: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8FA4u;
            goto label_2a8fa4;
        }
    }
    ctx->pc = 0x2A8F98u;
label_2a8f98:
    // 0x2a8f98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8f9c:
    // 0x2a8f9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a8fa0:
    // 0x2a8fa0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a8fa4:
    // 0x2a8fa4: 0xc0ab098  jal         func_2AC260
label_2a8fa8:
    if (ctx->pc == 0x2A8FA8u) {
        ctx->pc = 0x2A8FACu;
        goto label_2a8fac;
    }
    ctx->pc = 0x2A8FA4u;
    SET_GPR_U32(ctx, 31, 0x2A8FACu);
    ctx->pc = 0x2AC260u;
    if (runtime->hasFunction(0x2AC260u)) {
        auto targetFn = runtime->lookupFunction(0x2AC260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FACu; }
        if (ctx->pc != 0x2A8FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC260_0x2ac260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FACu; }
        if (ctx->pc != 0x2A8FACu) { return; }
    }
    ctx->pc = 0x2A8FACu;
label_2a8fac:
    // 0x2a8fac: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2a8fb0:
    if (ctx->pc == 0x2A8FB0u) {
        ctx->pc = 0x2A8FB4u;
        goto label_2a8fb4;
    }
    ctx->pc = 0x2A8FACu;
    {
        const bool branch_taken_0x2a8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8fac) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A8FB4u;
label_2a8fb4:
    // 0x2a8fb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a8fb8:
    // 0x2a8fb8: 0x10000078  b           . + 4 + (0x78 << 2)
label_2a8fbc:
    if (ctx->pc == 0x2A8FBCu) {
        ctx->pc = 0x2A8FBCu;
            // 0x2a8fbc: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A8FC0u;
        goto label_2a8fc0;
    }
    ctx->pc = 0x2A8FB8u;
    {
        const bool branch_taken_0x2a8fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FB8u;
            // 0x2a8fbc: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fb8) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A8FC0u;
label_2a8fc0:
    // 0x2a8fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fc4:
    // 0x2a8fc4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2a8fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2a8fc8:
    // 0x2a8fc8: 0x320f809  jalr        $t9
label_2a8fcc:
    if (ctx->pc == 0x2A8FCCu) {
        ctx->pc = 0x2A8FCCu;
            // 0x2a8fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FD0u;
        goto label_2a8fd0;
    }
    ctx->pc = 0x2A8FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A8FD0u);
        ctx->pc = 0x2A8FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FC8u;
            // 0x2a8fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A8FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FD0u; }
            if (ctx->pc != 0x2A8FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A8FD0u;
label_2a8fd0:
    // 0x2a8fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8fd4:
    // 0x2a8fd4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2a8fd8:
    if (ctx->pc == 0x2A8FD8u) {
        ctx->pc = 0x2A8FDCu;
        goto label_2a8fdc;
    }
    ctx->pc = 0x2A8FD4u;
    {
        const bool branch_taken_0x2a8fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a8fd4) {
            ctx->pc = 0x2A8FECu;
            goto label_2a8fec;
        }
    }
    ctx->pc = 0x2A8FDCu;
label_2a8fdc:
    // 0x2a8fdc: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x2a8fdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_2a8fe0:
    // 0x2a8fe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a8fe4:
    // 0x2a8fe4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a8fe8:
    if (ctx->pc == 0x2A8FE8u) {
        ctx->pc = 0x2A8FE8u;
            // 0x2a8fe8: 0xa2020060  sb          $v0, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A8FECu;
        goto label_2a8fec;
    }
    ctx->pc = 0x2A8FE4u;
    {
        const bool branch_taken_0x2a8fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FE4u;
            // 0x2a8fe8: 0xa2020060  sb          $v0, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fe4) {
            ctx->pc = 0x2A901Cu;
            goto label_2a901c;
        }
    }
    ctx->pc = 0x2A8FECu;
label_2a8fec:
    // 0x2a8fec: 0x441006b  bgez        $v0, . + 4 + (0x6B << 2)
label_2a8ff0:
    if (ctx->pc == 0x2A8FF0u) {
        ctx->pc = 0x2A8FF4u;
        goto label_2a8ff4;
    }
    ctx->pc = 0x2A8FECu;
    {
        const bool branch_taken_0x2a8fec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a8fec) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A8FF4u;
label_2a8ff4:
    // 0x2a8ff4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a8ff8:
    // 0x2a8ff8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a8ffc:
    if (ctx->pc == 0x2A8FFCu) {
        ctx->pc = 0x2A8FFCu;
            // 0x2a8ffc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A9000u;
        goto label_2a9000;
    }
    ctx->pc = 0x2A8FF8u;
    {
        const bool branch_taken_0x2a8ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8ff8) {
            ctx->pc = 0x2A8FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FF8u;
            // 0x2a8ffc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A900Cu;
            goto label_2a900c;
        }
    }
    ctx->pc = 0x2A9000u;
label_2a9000:
    // 0x2a9000: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9004:
    // 0x2a9004: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a9004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a9008:
    // 0x2a9008: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a9008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a900c:
    // 0x2a900c: 0xc0ab098  jal         func_2AC260
label_2a9010:
    if (ctx->pc == 0x2A9010u) {
        ctx->pc = 0x2A9014u;
        goto label_2a9014;
    }
    ctx->pc = 0x2A900Cu;
    SET_GPR_U32(ctx, 31, 0x2A9014u);
    ctx->pc = 0x2AC260u;
    if (runtime->hasFunction(0x2AC260u)) {
        auto targetFn = runtime->lookupFunction(0x2AC260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9014u; }
        if (ctx->pc != 0x2A9014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC260_0x2ac260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9014u; }
        if (ctx->pc != 0x2A9014u) { return; }
    }
    ctx->pc = 0x2A9014u;
label_2a9014:
    // 0x2a9014: 0x10000061  b           . + 4 + (0x61 << 2)
label_2a9018:
    if (ctx->pc == 0x2A9018u) {
        ctx->pc = 0x2A901Cu;
        goto label_2a901c;
    }
    ctx->pc = 0x2A9014u;
    {
        const bool branch_taken_0x2a9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9014) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A901Cu;
label_2a901c:
    // 0x2a901c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9020:
    // 0x2a9020: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x2a9020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
label_2a9024:
    // 0x2a9024: 0xae300088  sw          $s0, 0x88($s1)
    ctx->pc = 0x2a9024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 16));
label_2a9028:
    // 0x2a9028: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2a9028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2a902c:
    // 0x2a902c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a902cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9030:
    // 0x2a9030: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a9030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a9034:
    // 0x2a9034: 0x320f809  jalr        $t9
label_2a9038:
    if (ctx->pc == 0x2A9038u) {
        ctx->pc = 0x2A903Cu;
        goto label_2a903c;
    }
    ctx->pc = 0x2A9034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A903Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A903Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A903Cu; }
            if (ctx->pc != 0x2A903Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A903Cu;
label_2a903c:
    // 0x2a903c: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x2a903cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_2a9040:
    // 0x2a9040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a9044:
    // 0x2a9044: 0x10000055  b           . + 4 + (0x55 << 2)
label_2a9048:
    if (ctx->pc == 0x2A9048u) {
        ctx->pc = 0x2A9048u;
            // 0x2a9048: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A904Cu;
        goto label_2a904c;
    }
    ctx->pc = 0x2A9044u;
    {
        const bool branch_taken_0x2a9044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9044u;
            // 0x2a9048: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9044) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A904Cu;
label_2a904c:
    // 0x2a904c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2a904cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a9050:
    // 0x2a9050: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2a9050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2a9054:
    // 0x2a9054: 0x320f809  jalr        $t9
label_2a9058:
    if (ctx->pc == 0x2A9058u) {
        ctx->pc = 0x2A9058u;
            // 0x2a9058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A905Cu;
        goto label_2a905c;
    }
    ctx->pc = 0x2A9054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A905Cu);
        ctx->pc = 0x2A9058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9054u;
            // 0x2a9058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A905Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A905Cu; }
            if (ctx->pc != 0x2A905Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A905Cu;
label_2a905c:
    // 0x2a905c: 0xa602005e  sh          $v0, 0x5E($s0)
    ctx->pc = 0x2a905cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 2));
label_2a9060:
    // 0x2a9060: 0x8603005c  lh          $v1, 0x5C($s0)
    ctx->pc = 0x2a9060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_2a9064:
    // 0x2a9064: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_2a9068:
    if (ctx->pc == 0x2A9068u) {
        ctx->pc = 0x2A9068u;
            // 0x2a9068: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2A906Cu;
        goto label_2a906c;
    }
    ctx->pc = 0x2A9064u;
    {
        const bool branch_taken_0x2a9064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9064) {
            ctx->pc = 0x2A9068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9064u;
            // 0x2a9068: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9094u;
            goto label_2a9094;
        }
    }
    ctx->pc = 0x2A906Cu;
label_2a906c:
    // 0x2a906c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a906cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9070:
    // 0x2a9070: 0x8603005e  lh          $v1, 0x5E($s0)
    ctx->pc = 0x2a9070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
label_2a9074:
    // 0x2a9074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a9078:
    // 0x2a9078: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a907c:
    // 0x2a907c: 0x0  nop
    ctx->pc = 0x2a907cu;
    // NOP
label_2a9080:
    // 0x2a9080: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a9080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a9084:
    // 0x2a9084: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a9084u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2a9088:
    // 0x2a9088: 0x0  nop
    ctx->pc = 0x2a9088u;
    // NOP
label_2a908c:
    // 0x2a908c: 0x0  nop
    ctx->pc = 0x2a908cu;
    // NOP
label_2a9090:
    // 0x2a9090: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2a9090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_2a9094:
    // 0x2a9094: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x2a9094u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_2a9098:
    // 0x2a9098: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2a9098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a909c:
    // 0x2a909c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2a90a0:
    // 0x2a90a0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_2a90a4:
    if (ctx->pc == 0x2A90A4u) {
        ctx->pc = 0x2A90A8u;
        goto label_2a90a8;
    }
    ctx->pc = 0x2A90A0u;
    {
        const bool branch_taken_0x2a90a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a90a0) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A90A8u;
label_2a90a8:
    // 0x2a90a8: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x2a90a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_2a90ac:
    // 0x2a90ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a90b0:
    // 0x2a90b0: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x2a90b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
label_2a90b4:
    // 0x2a90b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a90b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a90b8:
    // 0x2a90b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a90bc:
    // 0x2a90bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a90bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a90c0:
    // 0x2a90c0: 0x320f809  jalr        $t9
label_2a90c4:
    if (ctx->pc == 0x2A90C4u) {
        ctx->pc = 0x2A90C4u;
            // 0x2a90c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A90C8u;
        goto label_2a90c8;
    }
    ctx->pc = 0x2A90C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A90C8u);
        ctx->pc = 0x2A90C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A90C0u;
            // 0x2a90c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A90C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A90C8u; }
            if (ctx->pc != 0x2A90C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A90C8u;
label_2a90c8:
    // 0x2a90c8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2a90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a90cc:
    // 0x2a90cc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2a90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2a90d0:
    // 0x2a90d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a90d4:
    // 0x2a90d4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a90d8:
    // 0x2a90d8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a90dc:
    if (ctx->pc == 0x2A90DCu) {
        ctx->pc = 0x2A90DCu;
            // 0x2a90dc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A90E0u;
        goto label_2a90e0;
    }
    ctx->pc = 0x2A90D8u;
    {
        const bool branch_taken_0x2a90d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a90d8) {
            ctx->pc = 0x2A90DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A90D8u;
            // 0x2a90dc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A90ECu;
            goto label_2a90ec;
        }
    }
    ctx->pc = 0x2A90E0u;
label_2a90e0:
    // 0x2a90e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a90e4:
    // 0x2a90e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a90e8:
    // 0x2a90e8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a90e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a90ec:
    // 0x2a90ec: 0xc0ab098  jal         func_2AC260
label_2a90f0:
    if (ctx->pc == 0x2A90F0u) {
        ctx->pc = 0x2A90F4u;
        goto label_2a90f4;
    }
    ctx->pc = 0x2A90ECu;
    SET_GPR_U32(ctx, 31, 0x2A90F4u);
    ctx->pc = 0x2AC260u;
    if (runtime->hasFunction(0x2AC260u)) {
        auto targetFn = runtime->lookupFunction(0x2AC260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90F4u; }
        if (ctx->pc != 0x2A90F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC260_0x2ac260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90F4u; }
        if (ctx->pc != 0x2A90F4u) { return; }
    }
    ctx->pc = 0x2A90F4u;
label_2a90f4:
    // 0x2a90f4: 0x10000029  b           . + 4 + (0x29 << 2)
label_2a90f8:
    if (ctx->pc == 0x2A90F8u) {
        ctx->pc = 0x2A90FCu;
        goto label_2a90fc;
    }
    ctx->pc = 0x2A90F4u;
    {
        const bool branch_taken_0x2a90f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a90f4) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A90FCu;
label_2a90fc:
    // 0x2a90fc: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x2a90fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2a9100:
    // 0x2a9100: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_2a9104:
    if (ctx->pc == 0x2A9104u) {
        ctx->pc = 0x2A9108u;
        goto label_2a9108;
    }
    ctx->pc = 0x2A9100u;
    {
        const bool branch_taken_0x2a9100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9100) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A9108u;
label_2a9108:
    // 0x2a9108: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2a9108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2a910c:
    // 0x2a910c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a910cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a9110:
    // 0x2a9110: 0x24841050  addiu       $a0, $a0, 0x1050
    ctx->pc = 0x2a9110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
label_2a9114:
    // 0x2a9114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a9114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a9118:
    // 0x2a9118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a911c:
    // 0x2a911c: 0x600008  jr          $v1
label_2a9120:
    if (ctx->pc == 0x2A9120u) {
        ctx->pc = 0x2A9124u;
        goto label_2a9124;
    }
    ctx->pc = 0x2A911Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9124u: goto label_2a9124;
            case 0x2A9138u: goto label_2a9138;
            case 0x2A9154u: goto label_2a9154;
            case 0x2A9168u: goto label_2a9168;
            case 0x2A917Cu: goto label_2a917c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A9124u;
label_2a9124:
    // 0x2a9124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a9124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9128:
    // 0x2a9128: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a912c:
    // 0x2a912c: 0xa224008d  sb          $a0, 0x8D($s1)
    ctx->pc = 0x2a912cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 4));
label_2a9130:
    // 0x2a9130: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a9134:
    if (ctx->pc == 0x2A9134u) {
        ctx->pc = 0x2A9134u;
            // 0x2a9134: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A9138u;
        goto label_2a9138;
    }
    ctx->pc = 0x2A9130u;
    {
        const bool branch_taken_0x2a9130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9130u;
            // 0x2a9134: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9130) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A9138u;
label_2a9138:
    // 0x2a9138: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x2a9138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_2a913c:
    // 0x2a913c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_2a9140:
    if (ctx->pc == 0x2A9140u) {
        ctx->pc = 0x2A9144u;
        goto label_2a9144;
    }
    ctx->pc = 0x2A913Cu;
    {
        const bool branch_taken_0x2a913c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a913c) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A9144u;
label_2a9144:
    // 0x2a9144: 0xa220008d  sb          $zero, 0x8D($s1)
    ctx->pc = 0x2a9144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 0));
label_2a9148:
    // 0x2a9148: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a9148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a914c:
    // 0x2a914c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9150:
    if (ctx->pc == 0x2A9150u) {
        ctx->pc = 0x2A9150u;
            // 0x2a9150: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A9154u;
        goto label_2a9154;
    }
    ctx->pc = 0x2A914Cu;
    {
        const bool branch_taken_0x2a914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A914Cu;
            // 0x2a9150: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a914c) {
            ctx->pc = 0x2A919Cu;
            goto label_2a919c;
        }
    }
    ctx->pc = 0x2A9154u;
label_2a9154:
    // 0x2a9154: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a9154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9158:
    // 0x2a9158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a915c:
    // 0x2a915c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2a915cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2a9160:
    // 0x2a9160: 0x320f809  jalr        $t9
label_2a9164:
    if (ctx->pc == 0x2A9164u) {
        ctx->pc = 0x2A9164u;
            // 0x2a9164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9168u;
        goto label_2a9168;
    }
    ctx->pc = 0x2A9160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9168u);
        ctx->pc = 0x2A9164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9160u;
            // 0x2a9164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9168u; }
            if (ctx->pc != 0x2A9168u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9168u;
label_2a9168:
    // 0x2a9168: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a9168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a916c:
    // 0x2a916c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9170:
    // 0x2a9170: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a9174:
    // 0x2a9174: 0x320f809  jalr        $t9
label_2a9178:
    if (ctx->pc == 0x2A9178u) {
        ctx->pc = 0x2A9178u;
            // 0x2a9178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A917Cu;
        goto label_2a917c;
    }
    ctx->pc = 0x2A9174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A917Cu);
        ctx->pc = 0x2A9178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9174u;
            // 0x2a9178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A917Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A917Cu; }
            if (ctx->pc != 0x2A917Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A917Cu;
label_2a917c:
    // 0x2a917c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a9180:
    // 0x2a9180: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a9184:
    if (ctx->pc == 0x2A9184u) {
        ctx->pc = 0x2A9184u;
            // 0x2a9184: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A9188u;
        goto label_2a9188;
    }
    ctx->pc = 0x2A9180u;
    {
        const bool branch_taken_0x2a9180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9180) {
            ctx->pc = 0x2A9184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9180u;
            // 0x2a9184: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9194u;
            goto label_2a9194;
        }
    }
    ctx->pc = 0x2A9188u;
label_2a9188:
    // 0x2a9188: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a918c:
    // 0x2a918c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a918cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a9190:
    // 0x2a9190: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a9190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a9194:
    // 0x2a9194: 0xc0ab098  jal         func_2AC260
label_2a9198:
    if (ctx->pc == 0x2A9198u) {
        ctx->pc = 0x2A919Cu;
        goto label_2a919c;
    }
    ctx->pc = 0x2A9194u;
    SET_GPR_U32(ctx, 31, 0x2A919Cu);
    ctx->pc = 0x2AC260u;
    if (runtime->hasFunction(0x2AC260u)) {
        auto targetFn = runtime->lookupFunction(0x2AC260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A919Cu; }
        if (ctx->pc != 0x2A919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC260_0x2ac260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A919Cu; }
        if (ctx->pc != 0x2A919Cu) { return; }
    }
    ctx->pc = 0x2A919Cu;
label_2a919c:
    // 0x2a919c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a91a0:
    // 0x2a91a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a91a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a91a4:
    // 0x2a91a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a91a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a91a8:
    // 0x2a91a8: 0x3e00008  jr          $ra
label_2a91ac:
    if (ctx->pc == 0x2A91ACu) {
        ctx->pc = 0x2A91ACu;
            // 0x2a91ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A91B0u;
        goto label_fallthrough_0x2a91a8;
    }
    ctx->pc = 0x2A91A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A91ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91A8u;
            // 0x2a91ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a91a8:
    ctx->pc = 0x2A91B0u;
}
