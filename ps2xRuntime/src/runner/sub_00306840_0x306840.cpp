#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306840
// Address: 0x306840 - 0x306ea0
void sub_00306840_0x306840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306840_0x306840");
#endif

    switch (ctx->pc) {
        case 0x306840u: goto label_306840;
        case 0x306844u: goto label_306844;
        case 0x306848u: goto label_306848;
        case 0x30684cu: goto label_30684c;
        case 0x306850u: goto label_306850;
        case 0x306854u: goto label_306854;
        case 0x306858u: goto label_306858;
        case 0x30685cu: goto label_30685c;
        case 0x306860u: goto label_306860;
        case 0x306864u: goto label_306864;
        case 0x306868u: goto label_306868;
        case 0x30686cu: goto label_30686c;
        case 0x306870u: goto label_306870;
        case 0x306874u: goto label_306874;
        case 0x306878u: goto label_306878;
        case 0x30687cu: goto label_30687c;
        case 0x306880u: goto label_306880;
        case 0x306884u: goto label_306884;
        case 0x306888u: goto label_306888;
        case 0x30688cu: goto label_30688c;
        case 0x306890u: goto label_306890;
        case 0x306894u: goto label_306894;
        case 0x306898u: goto label_306898;
        case 0x30689cu: goto label_30689c;
        case 0x3068a0u: goto label_3068a0;
        case 0x3068a4u: goto label_3068a4;
        case 0x3068a8u: goto label_3068a8;
        case 0x3068acu: goto label_3068ac;
        case 0x3068b0u: goto label_3068b0;
        case 0x3068b4u: goto label_3068b4;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068bcu: goto label_3068bc;
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        case 0x3068e4u: goto label_3068e4;
        case 0x3068e8u: goto label_3068e8;
        case 0x3068ecu: goto label_3068ec;
        case 0x3068f0u: goto label_3068f0;
        case 0x3068f4u: goto label_3068f4;
        case 0x3068f8u: goto label_3068f8;
        case 0x3068fcu: goto label_3068fc;
        case 0x306900u: goto label_306900;
        case 0x306904u: goto label_306904;
        case 0x306908u: goto label_306908;
        case 0x30690cu: goto label_30690c;
        case 0x306910u: goto label_306910;
        case 0x306914u: goto label_306914;
        case 0x306918u: goto label_306918;
        case 0x30691cu: goto label_30691c;
        case 0x306920u: goto label_306920;
        case 0x306924u: goto label_306924;
        case 0x306928u: goto label_306928;
        case 0x30692cu: goto label_30692c;
        case 0x306930u: goto label_306930;
        case 0x306934u: goto label_306934;
        case 0x306938u: goto label_306938;
        case 0x30693cu: goto label_30693c;
        case 0x306940u: goto label_306940;
        case 0x306944u: goto label_306944;
        case 0x306948u: goto label_306948;
        case 0x30694cu: goto label_30694c;
        case 0x306950u: goto label_306950;
        case 0x306954u: goto label_306954;
        case 0x306958u: goto label_306958;
        case 0x30695cu: goto label_30695c;
        case 0x306960u: goto label_306960;
        case 0x306964u: goto label_306964;
        case 0x306968u: goto label_306968;
        case 0x30696cu: goto label_30696c;
        case 0x306970u: goto label_306970;
        case 0x306974u: goto label_306974;
        case 0x306978u: goto label_306978;
        case 0x30697cu: goto label_30697c;
        case 0x306980u: goto label_306980;
        case 0x306984u: goto label_306984;
        case 0x306988u: goto label_306988;
        case 0x30698cu: goto label_30698c;
        case 0x306990u: goto label_306990;
        case 0x306994u: goto label_306994;
        case 0x306998u: goto label_306998;
        case 0x30699cu: goto label_30699c;
        case 0x3069a0u: goto label_3069a0;
        case 0x3069a4u: goto label_3069a4;
        case 0x3069a8u: goto label_3069a8;
        case 0x3069acu: goto label_3069ac;
        case 0x3069b0u: goto label_3069b0;
        case 0x3069b4u: goto label_3069b4;
        case 0x3069b8u: goto label_3069b8;
        case 0x3069bcu: goto label_3069bc;
        case 0x3069c0u: goto label_3069c0;
        case 0x3069c4u: goto label_3069c4;
        case 0x3069c8u: goto label_3069c8;
        case 0x3069ccu: goto label_3069cc;
        case 0x3069d0u: goto label_3069d0;
        case 0x3069d4u: goto label_3069d4;
        case 0x3069d8u: goto label_3069d8;
        case 0x3069dcu: goto label_3069dc;
        case 0x3069e0u: goto label_3069e0;
        case 0x3069e4u: goto label_3069e4;
        case 0x3069e8u: goto label_3069e8;
        case 0x3069ecu: goto label_3069ec;
        case 0x3069f0u: goto label_3069f0;
        case 0x3069f4u: goto label_3069f4;
        case 0x3069f8u: goto label_3069f8;
        case 0x3069fcu: goto label_3069fc;
        case 0x306a00u: goto label_306a00;
        case 0x306a04u: goto label_306a04;
        case 0x306a08u: goto label_306a08;
        case 0x306a0cu: goto label_306a0c;
        case 0x306a10u: goto label_306a10;
        case 0x306a14u: goto label_306a14;
        case 0x306a18u: goto label_306a18;
        case 0x306a1cu: goto label_306a1c;
        case 0x306a20u: goto label_306a20;
        case 0x306a24u: goto label_306a24;
        case 0x306a28u: goto label_306a28;
        case 0x306a2cu: goto label_306a2c;
        case 0x306a30u: goto label_306a30;
        case 0x306a34u: goto label_306a34;
        case 0x306a38u: goto label_306a38;
        case 0x306a3cu: goto label_306a3c;
        case 0x306a40u: goto label_306a40;
        case 0x306a44u: goto label_306a44;
        case 0x306a48u: goto label_306a48;
        case 0x306a4cu: goto label_306a4c;
        case 0x306a50u: goto label_306a50;
        case 0x306a54u: goto label_306a54;
        case 0x306a58u: goto label_306a58;
        case 0x306a5cu: goto label_306a5c;
        case 0x306a60u: goto label_306a60;
        case 0x306a64u: goto label_306a64;
        case 0x306a68u: goto label_306a68;
        case 0x306a6cu: goto label_306a6c;
        case 0x306a70u: goto label_306a70;
        case 0x306a74u: goto label_306a74;
        case 0x306a78u: goto label_306a78;
        case 0x306a7cu: goto label_306a7c;
        case 0x306a80u: goto label_306a80;
        case 0x306a84u: goto label_306a84;
        case 0x306a88u: goto label_306a88;
        case 0x306a8cu: goto label_306a8c;
        case 0x306a90u: goto label_306a90;
        case 0x306a94u: goto label_306a94;
        case 0x306a98u: goto label_306a98;
        case 0x306a9cu: goto label_306a9c;
        case 0x306aa0u: goto label_306aa0;
        case 0x306aa4u: goto label_306aa4;
        case 0x306aa8u: goto label_306aa8;
        case 0x306aacu: goto label_306aac;
        case 0x306ab0u: goto label_306ab0;
        case 0x306ab4u: goto label_306ab4;
        case 0x306ab8u: goto label_306ab8;
        case 0x306abcu: goto label_306abc;
        case 0x306ac0u: goto label_306ac0;
        case 0x306ac4u: goto label_306ac4;
        case 0x306ac8u: goto label_306ac8;
        case 0x306accu: goto label_306acc;
        case 0x306ad0u: goto label_306ad0;
        case 0x306ad4u: goto label_306ad4;
        case 0x306ad8u: goto label_306ad8;
        case 0x306adcu: goto label_306adc;
        case 0x306ae0u: goto label_306ae0;
        case 0x306ae4u: goto label_306ae4;
        case 0x306ae8u: goto label_306ae8;
        case 0x306aecu: goto label_306aec;
        case 0x306af0u: goto label_306af0;
        case 0x306af4u: goto label_306af4;
        case 0x306af8u: goto label_306af8;
        case 0x306afcu: goto label_306afc;
        case 0x306b00u: goto label_306b00;
        case 0x306b04u: goto label_306b04;
        case 0x306b08u: goto label_306b08;
        case 0x306b0cu: goto label_306b0c;
        case 0x306b10u: goto label_306b10;
        case 0x306b14u: goto label_306b14;
        case 0x306b18u: goto label_306b18;
        case 0x306b1cu: goto label_306b1c;
        case 0x306b20u: goto label_306b20;
        case 0x306b24u: goto label_306b24;
        case 0x306b28u: goto label_306b28;
        case 0x306b2cu: goto label_306b2c;
        case 0x306b30u: goto label_306b30;
        case 0x306b34u: goto label_306b34;
        case 0x306b38u: goto label_306b38;
        case 0x306b3cu: goto label_306b3c;
        case 0x306b40u: goto label_306b40;
        case 0x306b44u: goto label_306b44;
        case 0x306b48u: goto label_306b48;
        case 0x306b4cu: goto label_306b4c;
        case 0x306b50u: goto label_306b50;
        case 0x306b54u: goto label_306b54;
        case 0x306b58u: goto label_306b58;
        case 0x306b5cu: goto label_306b5c;
        case 0x306b60u: goto label_306b60;
        case 0x306b64u: goto label_306b64;
        case 0x306b68u: goto label_306b68;
        case 0x306b6cu: goto label_306b6c;
        case 0x306b70u: goto label_306b70;
        case 0x306b74u: goto label_306b74;
        case 0x306b78u: goto label_306b78;
        case 0x306b7cu: goto label_306b7c;
        case 0x306b80u: goto label_306b80;
        case 0x306b84u: goto label_306b84;
        case 0x306b88u: goto label_306b88;
        case 0x306b8cu: goto label_306b8c;
        case 0x306b90u: goto label_306b90;
        case 0x306b94u: goto label_306b94;
        case 0x306b98u: goto label_306b98;
        case 0x306b9cu: goto label_306b9c;
        case 0x306ba0u: goto label_306ba0;
        case 0x306ba4u: goto label_306ba4;
        case 0x306ba8u: goto label_306ba8;
        case 0x306bacu: goto label_306bac;
        case 0x306bb0u: goto label_306bb0;
        case 0x306bb4u: goto label_306bb4;
        case 0x306bb8u: goto label_306bb8;
        case 0x306bbcu: goto label_306bbc;
        case 0x306bc0u: goto label_306bc0;
        case 0x306bc4u: goto label_306bc4;
        case 0x306bc8u: goto label_306bc8;
        case 0x306bccu: goto label_306bcc;
        case 0x306bd0u: goto label_306bd0;
        case 0x306bd4u: goto label_306bd4;
        case 0x306bd8u: goto label_306bd8;
        case 0x306bdcu: goto label_306bdc;
        case 0x306be0u: goto label_306be0;
        case 0x306be4u: goto label_306be4;
        case 0x306be8u: goto label_306be8;
        case 0x306becu: goto label_306bec;
        case 0x306bf0u: goto label_306bf0;
        case 0x306bf4u: goto label_306bf4;
        case 0x306bf8u: goto label_306bf8;
        case 0x306bfcu: goto label_306bfc;
        case 0x306c00u: goto label_306c00;
        case 0x306c04u: goto label_306c04;
        case 0x306c08u: goto label_306c08;
        case 0x306c0cu: goto label_306c0c;
        case 0x306c10u: goto label_306c10;
        case 0x306c14u: goto label_306c14;
        case 0x306c18u: goto label_306c18;
        case 0x306c1cu: goto label_306c1c;
        case 0x306c20u: goto label_306c20;
        case 0x306c24u: goto label_306c24;
        case 0x306c28u: goto label_306c28;
        case 0x306c2cu: goto label_306c2c;
        case 0x306c30u: goto label_306c30;
        case 0x306c34u: goto label_306c34;
        case 0x306c38u: goto label_306c38;
        case 0x306c3cu: goto label_306c3c;
        case 0x306c40u: goto label_306c40;
        case 0x306c44u: goto label_306c44;
        case 0x306c48u: goto label_306c48;
        case 0x306c4cu: goto label_306c4c;
        case 0x306c50u: goto label_306c50;
        case 0x306c54u: goto label_306c54;
        case 0x306c58u: goto label_306c58;
        case 0x306c5cu: goto label_306c5c;
        case 0x306c60u: goto label_306c60;
        case 0x306c64u: goto label_306c64;
        case 0x306c68u: goto label_306c68;
        case 0x306c6cu: goto label_306c6c;
        case 0x306c70u: goto label_306c70;
        case 0x306c74u: goto label_306c74;
        case 0x306c78u: goto label_306c78;
        case 0x306c7cu: goto label_306c7c;
        case 0x306c80u: goto label_306c80;
        case 0x306c84u: goto label_306c84;
        case 0x306c88u: goto label_306c88;
        case 0x306c8cu: goto label_306c8c;
        case 0x306c90u: goto label_306c90;
        case 0x306c94u: goto label_306c94;
        case 0x306c98u: goto label_306c98;
        case 0x306c9cu: goto label_306c9c;
        case 0x306ca0u: goto label_306ca0;
        case 0x306ca4u: goto label_306ca4;
        case 0x306ca8u: goto label_306ca8;
        case 0x306cacu: goto label_306cac;
        case 0x306cb0u: goto label_306cb0;
        case 0x306cb4u: goto label_306cb4;
        case 0x306cb8u: goto label_306cb8;
        case 0x306cbcu: goto label_306cbc;
        case 0x306cc0u: goto label_306cc0;
        case 0x306cc4u: goto label_306cc4;
        case 0x306cc8u: goto label_306cc8;
        case 0x306cccu: goto label_306ccc;
        case 0x306cd0u: goto label_306cd0;
        case 0x306cd4u: goto label_306cd4;
        case 0x306cd8u: goto label_306cd8;
        case 0x306cdcu: goto label_306cdc;
        case 0x306ce0u: goto label_306ce0;
        case 0x306ce4u: goto label_306ce4;
        case 0x306ce8u: goto label_306ce8;
        case 0x306cecu: goto label_306cec;
        case 0x306cf0u: goto label_306cf0;
        case 0x306cf4u: goto label_306cf4;
        case 0x306cf8u: goto label_306cf8;
        case 0x306cfcu: goto label_306cfc;
        case 0x306d00u: goto label_306d00;
        case 0x306d04u: goto label_306d04;
        case 0x306d08u: goto label_306d08;
        case 0x306d0cu: goto label_306d0c;
        case 0x306d10u: goto label_306d10;
        case 0x306d14u: goto label_306d14;
        case 0x306d18u: goto label_306d18;
        case 0x306d1cu: goto label_306d1c;
        case 0x306d20u: goto label_306d20;
        case 0x306d24u: goto label_306d24;
        case 0x306d28u: goto label_306d28;
        case 0x306d2cu: goto label_306d2c;
        case 0x306d30u: goto label_306d30;
        case 0x306d34u: goto label_306d34;
        case 0x306d38u: goto label_306d38;
        case 0x306d3cu: goto label_306d3c;
        case 0x306d40u: goto label_306d40;
        case 0x306d44u: goto label_306d44;
        case 0x306d48u: goto label_306d48;
        case 0x306d4cu: goto label_306d4c;
        case 0x306d50u: goto label_306d50;
        case 0x306d54u: goto label_306d54;
        case 0x306d58u: goto label_306d58;
        case 0x306d5cu: goto label_306d5c;
        case 0x306d60u: goto label_306d60;
        case 0x306d64u: goto label_306d64;
        case 0x306d68u: goto label_306d68;
        case 0x306d6cu: goto label_306d6c;
        case 0x306d70u: goto label_306d70;
        case 0x306d74u: goto label_306d74;
        case 0x306d78u: goto label_306d78;
        case 0x306d7cu: goto label_306d7c;
        case 0x306d80u: goto label_306d80;
        case 0x306d84u: goto label_306d84;
        case 0x306d88u: goto label_306d88;
        case 0x306d8cu: goto label_306d8c;
        case 0x306d90u: goto label_306d90;
        case 0x306d94u: goto label_306d94;
        case 0x306d98u: goto label_306d98;
        case 0x306d9cu: goto label_306d9c;
        case 0x306da0u: goto label_306da0;
        case 0x306da4u: goto label_306da4;
        case 0x306da8u: goto label_306da8;
        case 0x306dacu: goto label_306dac;
        case 0x306db0u: goto label_306db0;
        case 0x306db4u: goto label_306db4;
        case 0x306db8u: goto label_306db8;
        case 0x306dbcu: goto label_306dbc;
        case 0x306dc0u: goto label_306dc0;
        case 0x306dc4u: goto label_306dc4;
        case 0x306dc8u: goto label_306dc8;
        case 0x306dccu: goto label_306dcc;
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd4u: goto label_306dd4;
        case 0x306dd8u: goto label_306dd8;
        case 0x306ddcu: goto label_306ddc;
        case 0x306de0u: goto label_306de0;
        case 0x306de4u: goto label_306de4;
        case 0x306de8u: goto label_306de8;
        case 0x306decu: goto label_306dec;
        case 0x306df0u: goto label_306df0;
        case 0x306df4u: goto label_306df4;
        case 0x306df8u: goto label_306df8;
        case 0x306dfcu: goto label_306dfc;
        case 0x306e00u: goto label_306e00;
        case 0x306e04u: goto label_306e04;
        case 0x306e08u: goto label_306e08;
        case 0x306e0cu: goto label_306e0c;
        case 0x306e10u: goto label_306e10;
        case 0x306e14u: goto label_306e14;
        case 0x306e18u: goto label_306e18;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e20u: goto label_306e20;
        case 0x306e24u: goto label_306e24;
        case 0x306e28u: goto label_306e28;
        case 0x306e2cu: goto label_306e2c;
        case 0x306e30u: goto label_306e30;
        case 0x306e34u: goto label_306e34;
        case 0x306e38u: goto label_306e38;
        case 0x306e3cu: goto label_306e3c;
        case 0x306e40u: goto label_306e40;
        case 0x306e44u: goto label_306e44;
        case 0x306e48u: goto label_306e48;
        case 0x306e4cu: goto label_306e4c;
        case 0x306e50u: goto label_306e50;
        case 0x306e54u: goto label_306e54;
        case 0x306e58u: goto label_306e58;
        case 0x306e5cu: goto label_306e5c;
        case 0x306e60u: goto label_306e60;
        case 0x306e64u: goto label_306e64;
        case 0x306e68u: goto label_306e68;
        case 0x306e6cu: goto label_306e6c;
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        default: break;
    }

    ctx->pc = 0x306840u;

label_306840:
    // 0x306840: 0x3e00008  jr          $ra
label_306844:
    if (ctx->pc == 0x306844u) {
        ctx->pc = 0x306844u;
            // 0x306844: 0xc4800de0  lwc1        $f0, 0xDE0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x306848u;
        goto label_306848;
    }
    ctx->pc = 0x306840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306840u;
            // 0x306844: 0xc4800de0  lwc1        $f0, 0xDE0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306848u;
label_306848:
    // 0x306848: 0x0  nop
    ctx->pc = 0x306848u;
    // NOP
label_30684c:
    // 0x30684c: 0x0  nop
    ctx->pc = 0x30684cu;
    // NOP
label_306850:
    // 0x306850: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x306850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_306854:
    // 0x306854: 0x3c03bab6  lui         $v1, 0xBAB6
    ctx->pc = 0x306854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47798 << 16));
label_306858:
    // 0x306858: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x306858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_30685c:
    // 0x30685c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30685cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306860:
    // 0x306860: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x306860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_306864:
    // 0x306864: 0x3c054094  lui         $a1, 0x4094
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16532 << 16));
label_306868:
    // 0x306868: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x306868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_30686c:
    // 0x30686c: 0x34630b61  ori         $v1, $v1, 0xB61
    ctx->pc = 0x30686cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2913);
label_306870:
    // 0x306870: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x306870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_306874:
    // 0x306874: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x306874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_306878:
    // 0x306878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x306878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_30687c:
    // 0x30687c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30687cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306880:
    // 0x306880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x306880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_306884:
    // 0x306884: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_306888:
    // 0x306888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30688c:
    // 0x30688c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_306890:
    // 0x306890: 0x8c910550  lw          $s1, 0x550($a0)
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_306894:
    // 0x306894: 0xac860e10  sw          $a2, 0xE10($a0)
    ctx->pc = 0x306894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3600), GPR_U32(ctx, 6));
label_306898:
    // 0x306898: 0xac850de0  sw          $a1, 0xDE0($a0)
    ctx->pc = 0x306898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3552), GPR_U32(ctx, 5));
label_30689c:
    // 0x30689c: 0xac830de8  sw          $v1, 0xDE8($a0)
    ctx->pc = 0x30689cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3560), GPR_U32(ctx, 3));
label_3068a0:
    // 0x3068a0: 0x8c830d60  lw          $v1, 0xD60($a0)
    ctx->pc = 0x3068a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_3068a4:
    // 0x3068a4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3068a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_3068a8:
    // 0x3068a8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x3068a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_3068ac:
    // 0x3068ac: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3068acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3068b0:
    // 0x3068b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3068b4:
    if (ctx->pc == 0x3068B4u) {
        ctx->pc = 0x3068B4u;
            // 0x3068b4: 0x26b00c50  addiu       $s0, $s5, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
        ctx->pc = 0x3068B8u;
        goto label_3068b8;
    }
    ctx->pc = 0x3068B0u;
    {
        const bool branch_taken_0x3068b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3068B0u;
            // 0x3068b4: 0x26b00c50  addiu       $s0, $s5, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068b0) {
            ctx->pc = 0x3068C0u;
            goto label_3068c0;
        }
    }
    ctx->pc = 0x3068B8u;
label_3068b8:
    // 0x3068b8: 0xc077fb0  jal         func_1DFEC0
label_3068bc:
    if (ctx->pc == 0x3068BCu) {
        ctx->pc = 0x3068BCu;
            // 0x3068bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3068C0u;
        goto label_3068c0;
    }
    ctx->pc = 0x3068B8u;
    SET_GPR_U32(ctx, 31, 0x3068C0u);
    ctx->pc = 0x3068BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3068B8u;
            // 0x3068bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3068C0u; }
        if (ctx->pc != 0x3068C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3068C0u; }
        if (ctx->pc != 0x3068C0u) { return; }
    }
    ctx->pc = 0x3068C0u;
label_3068c0:
    // 0x3068c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3068c4:
    // 0x3068c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3068c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3068c8:
    // 0x3068c8: 0xaea20db8  sw          $v0, 0xDB8($s5)
    ctx->pc = 0x3068c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3512), GPR_U32(ctx, 2));
label_3068cc:
    // 0x3068cc: 0xaea30698  sw          $v1, 0x698($s5)
    ctx->pc = 0x3068ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1688), GPR_U32(ctx, 3));
label_3068d0:
    // 0x3068d0: 0x8ea20d74  lw          $v0, 0xD74($s5)
    ctx->pc = 0x3068d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
label_3068d4:
    // 0x3068d4: 0xac4002b0  sw          $zero, 0x2B0($v0)
    ctx->pc = 0x3068d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
label_3068d8:
    // 0x3068d8: 0xaea00a80  sw          $zero, 0xA80($s5)
    ctx->pc = 0x3068d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2688), GPR_U32(ctx, 0));
label_3068dc:
    // 0x3068dc: 0x8602001a  lh          $v0, 0x1A($s0)
    ctx->pc = 0x3068dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_3068e0:
    // 0x3068e0: 0x50430053  beql        $v0, $v1, . + 4 + (0x53 << 2)
label_3068e4:
    if (ctx->pc == 0x3068E4u) {
        ctx->pc = 0x3068E4u;
            // 0x3068e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3068E8u;
        goto label_3068e8;
    }
    ctx->pc = 0x3068E0u;
    {
        const bool branch_taken_0x3068e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3068e0) {
            ctx->pc = 0x3068E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3068E0u;
            // 0x3068e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306A30u;
            goto label_306a30;
        }
    }
    ctx->pc = 0x3068E8u;
label_3068e8:
    // 0x3068e8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3068ec:
    if (ctx->pc == 0x3068ECu) {
        ctx->pc = 0x3068ECu;
            // 0x3068ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3068F0u;
        goto label_3068f0;
    }
    ctx->pc = 0x3068E8u;
    {
        const bool branch_taken_0x3068e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3068e8) {
            ctx->pc = 0x3068ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3068E8u;
            // 0x3068ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3068F8u;
            goto label_3068f8;
        }
    }
    ctx->pc = 0x3068F0u;
label_3068f0:
    // 0x3068f0: 0x1000009f  b           . + 4 + (0x9F << 2)
label_3068f4:
    if (ctx->pc == 0x3068F4u) {
        ctx->pc = 0x3068F4u;
            // 0x3068f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3068F8u;
        goto label_3068f8;
    }
    ctx->pc = 0x3068F0u;
    {
        const bool branch_taken_0x3068f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3068F0u;
            // 0x3068f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068f0) {
            ctx->pc = 0x306B70u;
            goto label_306b70;
        }
    }
    ctx->pc = 0x3068F8u;
label_3068f8:
    // 0x3068f8: 0xc0770c0  jal         func_1DC300
label_3068fc:
    if (ctx->pc == 0x3068FCu) {
        ctx->pc = 0x306900u;
        goto label_306900;
    }
    ctx->pc = 0x3068F8u;
    SET_GPR_U32(ctx, 31, 0x306900u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306900u; }
        if (ctx->pc != 0x306900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306900u; }
        if (ctx->pc != 0x306900u) { return; }
    }
    ctx->pc = 0x306900u;
label_306900:
    // 0x306900: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x306900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306904:
    // 0x306904: 0xc0c1c00  jal         func_307000
label_306908:
    if (ctx->pc == 0x306908u) {
        ctx->pc = 0x306908u;
            // 0x306908: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30690Cu;
        goto label_30690c;
    }
    ctx->pc = 0x306904u;
    SET_GPR_U32(ctx, 31, 0x30690Cu);
    ctx->pc = 0x306908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306904u;
            // 0x306908: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307000u;
    if (runtime->hasFunction(0x307000u)) {
        auto targetFn = runtime->lookupFunction(0x307000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30690Cu; }
        if (ctx->pc != 0x30690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307000_0x307000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30690Cu; }
        if (ctx->pc != 0x30690Cu) { return; }
    }
    ctx->pc = 0x30690Cu;
label_30690c:
    // 0x30690c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x30690cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306910:
    // 0x306910: 0xc0b6cec  jal         func_2DB3B0
label_306914:
    if (ctx->pc == 0x306914u) {
        ctx->pc = 0x306914u;
            // 0x306914: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306918u;
        goto label_306918;
    }
    ctx->pc = 0x306910u;
    SET_GPR_U32(ctx, 31, 0x306918u);
    ctx->pc = 0x306914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306910u;
            // 0x306914: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306918u; }
        if (ctx->pc != 0x306918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306918u; }
        if (ctx->pc != 0x306918u) { return; }
    }
    ctx->pc = 0x306918u;
label_306918:
    // 0x306918: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x306918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30691c:
    // 0x30691c: 0xc0c05dc  jal         func_301770
label_306920:
    if (ctx->pc == 0x306920u) {
        ctx->pc = 0x306920u;
            // 0x306920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306924u;
        goto label_306924;
    }
    ctx->pc = 0x30691Cu;
    SET_GPR_U32(ctx, 31, 0x306924u);
    ctx->pc = 0x306920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30691Cu;
            // 0x306920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306924u; }
        if (ctx->pc != 0x306924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306924u; }
        if (ctx->pc != 0x306924u) { return; }
    }
    ctx->pc = 0x306924u;
label_306924:
    // 0x306924: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306928:
    // 0x306928: 0xc0c1bfc  jal         func_306FF0
label_30692c:
    if (ctx->pc == 0x30692Cu) {
        ctx->pc = 0x30692Cu;
            // 0x30692c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306930u;
        goto label_306930;
    }
    ctx->pc = 0x306928u;
    SET_GPR_U32(ctx, 31, 0x306930u);
    ctx->pc = 0x30692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306928u;
            // 0x30692c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306930u; }
        if (ctx->pc != 0x306930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306930u; }
        if (ctx->pc != 0x306930u) { return; }
    }
    ctx->pc = 0x306930u;
label_306930:
    // 0x306930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x306930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306934:
    // 0x306934: 0xc0c05e0  jal         func_301780
label_306938:
    if (ctx->pc == 0x306938u) {
        ctx->pc = 0x306938u;
            // 0x306938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30693Cu;
        goto label_30693c;
    }
    ctx->pc = 0x306934u;
    SET_GPR_U32(ctx, 31, 0x30693Cu);
    ctx->pc = 0x306938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306934u;
            // 0x306938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30693Cu; }
        if (ctx->pc != 0x30693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30693Cu; }
        if (ctx->pc != 0x30693Cu) { return; }
    }
    ctx->pc = 0x30693Cu;
label_30693c:
    // 0x30693c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30693cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306940:
    // 0x306940: 0xc0c1bf4  jal         func_306FD0
label_306944:
    if (ctx->pc == 0x306944u) {
        ctx->pc = 0x306944u;
            // 0x306944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306948u;
        goto label_306948;
    }
    ctx->pc = 0x306940u;
    SET_GPR_U32(ctx, 31, 0x306948u);
    ctx->pc = 0x306944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306940u;
            // 0x306944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FD0u;
    if (runtime->hasFunction(0x306FD0u)) {
        auto targetFn = runtime->lookupFunction(0x306FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306948u; }
        if (ctx->pc != 0x306948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FD0_0x306fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306948u; }
        if (ctx->pc != 0x306948u) { return; }
    }
    ctx->pc = 0x306948u;
label_306948:
    // 0x306948: 0xc0b9210  jal         func_2E4840
label_30694c:
    if (ctx->pc == 0x30694Cu) {
        ctx->pc = 0x30694Cu;
            // 0x30694c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306950u;
        goto label_306950;
    }
    ctx->pc = 0x306948u;
    SET_GPR_U32(ctx, 31, 0x306950u);
    ctx->pc = 0x30694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306948u;
            // 0x30694c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306950u; }
        if (ctx->pc != 0x306950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306950u; }
        if (ctx->pc != 0x306950u) { return; }
    }
    ctx->pc = 0x306950u;
label_306950:
    // 0x306950: 0xc077280  jal         func_1DCA00
label_306954:
    if (ctx->pc == 0x306954u) {
        ctx->pc = 0x306954u;
            // 0x306954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306958u;
        goto label_306958;
    }
    ctx->pc = 0x306950u;
    SET_GPR_U32(ctx, 31, 0x306958u);
    ctx->pc = 0x306954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306950u;
            // 0x306954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306958u; }
        if (ctx->pc != 0x306958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306958u; }
        if (ctx->pc != 0x306958u) { return; }
    }
    ctx->pc = 0x306958u;
label_306958:
    // 0x306958: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x306958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30695c:
    // 0x30695c: 0xc0c1bfc  jal         func_306FF0
label_306960:
    if (ctx->pc == 0x306960u) {
        ctx->pc = 0x306960u;
            // 0x306960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306964u;
        goto label_306964;
    }
    ctx->pc = 0x30695Cu;
    SET_GPR_U32(ctx, 31, 0x306964u);
    ctx->pc = 0x306960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30695Cu;
            // 0x306960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306964u; }
        if (ctx->pc != 0x306964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306964u; }
        if (ctx->pc != 0x306964u) { return; }
    }
    ctx->pc = 0x306964u;
label_306964:
    // 0x306964: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x306964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_306968:
    // 0x306968: 0xc0c1bf0  jal         func_306FC0
label_30696c:
    if (ctx->pc == 0x30696Cu) {
        ctx->pc = 0x30696Cu;
            // 0x30696c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306970u;
        goto label_306970;
    }
    ctx->pc = 0x306968u;
    SET_GPR_U32(ctx, 31, 0x306970u);
    ctx->pc = 0x30696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306968u;
            // 0x30696c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FC0u;
    if (runtime->hasFunction(0x306FC0u)) {
        auto targetFn = runtime->lookupFunction(0x306FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306970u; }
        if (ctx->pc != 0x306970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FC0_0x306fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306970u; }
        if (ctx->pc != 0x306970u) { return; }
    }
    ctx->pc = 0x306970u;
label_306970:
    // 0x306970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306974:
    // 0x306974: 0xc0c1bf4  jal         func_306FD0
label_306978:
    if (ctx->pc == 0x306978u) {
        ctx->pc = 0x306978u;
            // 0x306978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30697Cu;
        goto label_30697c;
    }
    ctx->pc = 0x306974u;
    SET_GPR_U32(ctx, 31, 0x30697Cu);
    ctx->pc = 0x306978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306974u;
            // 0x306978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FD0u;
    if (runtime->hasFunction(0x306FD0u)) {
        auto targetFn = runtime->lookupFunction(0x306FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30697Cu; }
        if (ctx->pc != 0x30697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FD0_0x306fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30697Cu; }
        if (ctx->pc != 0x30697Cu) { return; }
    }
    ctx->pc = 0x30697Cu;
label_30697c:
    // 0x30697c: 0xc0b6d5c  jal         func_2DB570
label_306980:
    if (ctx->pc == 0x306980u) {
        ctx->pc = 0x306980u;
            // 0x306980: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306984u;
        goto label_306984;
    }
    ctx->pc = 0x30697Cu;
    SET_GPR_U32(ctx, 31, 0x306984u);
    ctx->pc = 0x306980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30697Cu;
            // 0x306980: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306984u; }
        if (ctx->pc != 0x306984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306984u; }
        if (ctx->pc != 0x306984u) { return; }
    }
    ctx->pc = 0x306984u;
label_306984:
    // 0x306984: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x306984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306988:
    // 0x306988: 0xc0b6d40  jal         func_2DB500
label_30698c:
    if (ctx->pc == 0x30698Cu) {
        ctx->pc = 0x30698Cu;
            // 0x30698c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306990u;
        goto label_306990;
    }
    ctx->pc = 0x306988u;
    SET_GPR_U32(ctx, 31, 0x306990u);
    ctx->pc = 0x30698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306988u;
            // 0x30698c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306990u; }
        if (ctx->pc != 0x306990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306990u; }
        if (ctx->pc != 0x306990u) { return; }
    }
    ctx->pc = 0x306990u;
label_306990:
    // 0x306990: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x306990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_306994:
    // 0x306994: 0xc04cc04  jal         func_133010
label_306998:
    if (ctx->pc == 0x306998u) {
        ctx->pc = 0x306998u;
            // 0x306998: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30699Cu;
        goto label_30699c;
    }
    ctx->pc = 0x306994u;
    SET_GPR_U32(ctx, 31, 0x30699Cu);
    ctx->pc = 0x306998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306994u;
            // 0x306998: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30699Cu; }
        if (ctx->pc != 0x30699Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30699Cu; }
        if (ctx->pc != 0x30699Cu) { return; }
    }
    ctx->pc = 0x30699Cu;
label_30699c:
    // 0x30699c: 0xc077280  jal         func_1DCA00
label_3069a0:
    if (ctx->pc == 0x3069A0u) {
        ctx->pc = 0x3069A0u;
            // 0x3069a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069A4u;
        goto label_3069a4;
    }
    ctx->pc = 0x30699Cu;
    SET_GPR_U32(ctx, 31, 0x3069A4u);
    ctx->pc = 0x3069A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30699Cu;
            // 0x3069a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069A4u; }
        if (ctx->pc != 0x3069A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069A4u; }
        if (ctx->pc != 0x3069A4u) { return; }
    }
    ctx->pc = 0x3069A4u;
label_3069a4:
    // 0x3069a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3069a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3069a8:
    // 0x3069a8: 0xc0b6d40  jal         func_2DB500
label_3069ac:
    if (ctx->pc == 0x3069ACu) {
        ctx->pc = 0x3069ACu;
            // 0x3069ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069B0u;
        goto label_3069b0;
    }
    ctx->pc = 0x3069A8u;
    SET_GPR_U32(ctx, 31, 0x3069B0u);
    ctx->pc = 0x3069ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069A8u;
            // 0x3069ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069B0u; }
        if (ctx->pc != 0x3069B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069B0u; }
        if (ctx->pc != 0x3069B0u) { return; }
    }
    ctx->pc = 0x3069B0u;
label_3069b0:
    // 0x3069b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3069b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3069b4:
    // 0x3069b4: 0xc075318  jal         func_1D4C60
label_3069b8:
    if (ctx->pc == 0x3069B8u) {
        ctx->pc = 0x3069B8u;
            // 0x3069b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069BCu;
        goto label_3069bc;
    }
    ctx->pc = 0x3069B4u;
    SET_GPR_U32(ctx, 31, 0x3069BCu);
    ctx->pc = 0x3069B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069B4u;
            // 0x3069b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069BCu; }
        if (ctx->pc != 0x3069BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069BCu; }
        if (ctx->pc != 0x3069BCu) { return; }
    }
    ctx->pc = 0x3069BCu;
label_3069bc:
    // 0x3069bc: 0xc077280  jal         func_1DCA00
label_3069c0:
    if (ctx->pc == 0x3069C0u) {
        ctx->pc = 0x3069C0u;
            // 0x3069c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069C4u;
        goto label_3069c4;
    }
    ctx->pc = 0x3069BCu;
    SET_GPR_U32(ctx, 31, 0x3069C4u);
    ctx->pc = 0x3069C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069BCu;
            // 0x3069c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069C4u; }
        if (ctx->pc != 0x3069C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069C4u; }
        if (ctx->pc != 0x3069C4u) { return; }
    }
    ctx->pc = 0x3069C4u;
label_3069c4:
    // 0x3069c4: 0xc07727c  jal         func_1DC9F0
label_3069c8:
    if (ctx->pc == 0x3069C8u) {
        ctx->pc = 0x3069C8u;
            // 0x3069c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069CCu;
        goto label_3069cc;
    }
    ctx->pc = 0x3069C4u;
    SET_GPR_U32(ctx, 31, 0x3069CCu);
    ctx->pc = 0x3069C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069C4u;
            // 0x3069c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069CCu; }
        if (ctx->pc != 0x3069CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069CCu; }
        if (ctx->pc != 0x3069CCu) { return; }
    }
    ctx->pc = 0x3069CCu;
label_3069cc:
    // 0x3069cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3069ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3069d0:
    // 0x3069d0: 0xc0c05e0  jal         func_301780
label_3069d4:
    if (ctx->pc == 0x3069D4u) {
        ctx->pc = 0x3069D4u;
            // 0x3069d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069D8u;
        goto label_3069d8;
    }
    ctx->pc = 0x3069D0u;
    SET_GPR_U32(ctx, 31, 0x3069D8u);
    ctx->pc = 0x3069D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069D0u;
            // 0x3069d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069D8u; }
        if (ctx->pc != 0x3069D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069D8u; }
        if (ctx->pc != 0x3069D8u) { return; }
    }
    ctx->pc = 0x3069D8u;
label_3069d8:
    // 0x3069d8: 0xc0b9210  jal         func_2E4840
label_3069dc:
    if (ctx->pc == 0x3069DCu) {
        ctx->pc = 0x3069DCu;
            // 0x3069dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069E0u;
        goto label_3069e0;
    }
    ctx->pc = 0x3069D8u;
    SET_GPR_U32(ctx, 31, 0x3069E0u);
    ctx->pc = 0x3069DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069D8u;
            // 0x3069dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069E0u; }
        if (ctx->pc != 0x3069E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069E0u; }
        if (ctx->pc != 0x3069E0u) { return; }
    }
    ctx->pc = 0x3069E0u;
label_3069e0:
    // 0x3069e0: 0xc0b6d40  jal         func_2DB500
label_3069e4:
    if (ctx->pc == 0x3069E4u) {
        ctx->pc = 0x3069E4u;
            // 0x3069e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069E8u;
        goto label_3069e8;
    }
    ctx->pc = 0x3069E0u;
    SET_GPR_U32(ctx, 31, 0x3069E8u);
    ctx->pc = 0x3069E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069E0u;
            // 0x3069e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069E8u; }
        if (ctx->pc != 0x3069E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069E8u; }
        if (ctx->pc != 0x3069E8u) { return; }
    }
    ctx->pc = 0x3069E8u;
label_3069e8:
    // 0x3069e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3069e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3069ec:
    // 0x3069ec: 0xc0c1bec  jal         func_306FB0
label_3069f0:
    if (ctx->pc == 0x3069F0u) {
        ctx->pc = 0x3069F0u;
            // 0x3069f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3069F4u;
        goto label_3069f4;
    }
    ctx->pc = 0x3069ECu;
    SET_GPR_U32(ctx, 31, 0x3069F4u);
    ctx->pc = 0x3069F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069ECu;
            // 0x3069f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FB0u;
    if (runtime->hasFunction(0x306FB0u)) {
        auto targetFn = runtime->lookupFunction(0x306FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069F4u; }
        if (ctx->pc != 0x3069F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FB0_0x306fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069F4u; }
        if (ctx->pc != 0x3069F4u) { return; }
    }
    ctx->pc = 0x3069F4u;
label_3069f4:
    // 0x3069f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3069f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3069f8:
    // 0x3069f8: 0xc0c1bb0  jal         func_306EC0
label_3069fc:
    if (ctx->pc == 0x3069FCu) {
        ctx->pc = 0x3069FCu;
            // 0x3069fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A00u;
        goto label_306a00;
    }
    ctx->pc = 0x3069F8u;
    SET_GPR_U32(ctx, 31, 0x306A00u);
    ctx->pc = 0x3069FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069F8u;
            // 0x3069fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306EC0u;
    if (runtime->hasFunction(0x306EC0u)) {
        auto targetFn = runtime->lookupFunction(0x306EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A00u; }
        if (ctx->pc != 0x306A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306EC0_0x306ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A00u; }
        if (ctx->pc != 0x306A00u) { return; }
    }
    ctx->pc = 0x306A00u;
label_306a00:
    // 0x306a00: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x306a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_306a04:
    // 0x306a04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x306a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_306a08:
    // 0x306a08: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x306a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_306a0c:
    // 0x306a0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306a10:
    // 0x306a10: 0x0  nop
    ctx->pc = 0x306a10u;
    // NOP
label_306a14:
    // 0x306a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306a18:
    // 0x306a18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x306a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_306a1c:
    // 0x306a1c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x306a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_306a20:
    // 0x306a20: 0xc0c1bac  jal         func_306EB0
label_306a24:
    if (ctx->pc == 0x306A24u) {
        ctx->pc = 0x306A24u;
            // 0x306a24: 0x2445c001  addiu       $a1, $v0, -0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950913));
        ctx->pc = 0x306A28u;
        goto label_306a28;
    }
    ctx->pc = 0x306A20u;
    SET_GPR_U32(ctx, 31, 0x306A28u);
    ctx->pc = 0x306A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A20u;
            // 0x306a24: 0x2445c001  addiu       $a1, $v0, -0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950913));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306EB0u;
    if (runtime->hasFunction(0x306EB0u)) {
        auto targetFn = runtime->lookupFunction(0x306EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A28u; }
        if (ctx->pc != 0x306A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306EB0_0x306eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A28u; }
        if (ctx->pc != 0x306A28u) { return; }
    }
    ctx->pc = 0x306A28u;
label_306a28:
    // 0x306a28: 0x10000050  b           . + 4 + (0x50 << 2)
label_306a2c:
    if (ctx->pc == 0x306A2Cu) {
        ctx->pc = 0x306A30u;
        goto label_306a30;
    }
    ctx->pc = 0x306A28u;
    {
        const bool branch_taken_0x306a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a28) {
            ctx->pc = 0x306B6Cu;
            goto label_306b6c;
        }
    }
    ctx->pc = 0x306A30u;
label_306a30:
    // 0x306a30: 0xc0770c0  jal         func_1DC300
label_306a34:
    if (ctx->pc == 0x306A34u) {
        ctx->pc = 0x306A38u;
        goto label_306a38;
    }
    ctx->pc = 0x306A30u;
    SET_GPR_U32(ctx, 31, 0x306A38u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A38u; }
        if (ctx->pc != 0x306A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A38u; }
        if (ctx->pc != 0x306A38u) { return; }
    }
    ctx->pc = 0x306A38u;
label_306a38:
    // 0x306a38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x306a38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306a3c:
    // 0x306a3c: 0xc0c1c00  jal         func_307000
label_306a40:
    if (ctx->pc == 0x306A40u) {
        ctx->pc = 0x306A40u;
            // 0x306a40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A44u;
        goto label_306a44;
    }
    ctx->pc = 0x306A3Cu;
    SET_GPR_U32(ctx, 31, 0x306A44u);
    ctx->pc = 0x306A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A3Cu;
            // 0x306a40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307000u;
    if (runtime->hasFunction(0x307000u)) {
        auto targetFn = runtime->lookupFunction(0x307000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A44u; }
        if (ctx->pc != 0x306A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307000_0x307000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A44u; }
        if (ctx->pc != 0x306A44u) { return; }
    }
    ctx->pc = 0x306A44u;
label_306a44:
    // 0x306a44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x306a44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306a48:
    // 0x306a48: 0xc0b6cec  jal         func_2DB3B0
label_306a4c:
    if (ctx->pc == 0x306A4Cu) {
        ctx->pc = 0x306A4Cu;
            // 0x306a4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A50u;
        goto label_306a50;
    }
    ctx->pc = 0x306A48u;
    SET_GPR_U32(ctx, 31, 0x306A50u);
    ctx->pc = 0x306A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A48u;
            // 0x306a4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A50u; }
        if (ctx->pc != 0x306A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A50u; }
        if (ctx->pc != 0x306A50u) { return; }
    }
    ctx->pc = 0x306A50u;
label_306a50:
    // 0x306a50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x306a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306a54:
    // 0x306a54: 0xc0c05dc  jal         func_301770
label_306a58:
    if (ctx->pc == 0x306A58u) {
        ctx->pc = 0x306A58u;
            // 0x306a58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A5Cu;
        goto label_306a5c;
    }
    ctx->pc = 0x306A54u;
    SET_GPR_U32(ctx, 31, 0x306A5Cu);
    ctx->pc = 0x306A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A54u;
            // 0x306a58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A5Cu; }
        if (ctx->pc != 0x306A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A5Cu; }
        if (ctx->pc != 0x306A5Cu) { return; }
    }
    ctx->pc = 0x306A5Cu;
label_306a5c:
    // 0x306a5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306a60:
    // 0x306a60: 0xc0b6d40  jal         func_2DB500
label_306a64:
    if (ctx->pc == 0x306A64u) {
        ctx->pc = 0x306A64u;
            // 0x306a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A68u;
        goto label_306a68;
    }
    ctx->pc = 0x306A60u;
    SET_GPR_U32(ctx, 31, 0x306A68u);
    ctx->pc = 0x306A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A60u;
            // 0x306a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A68u; }
        if (ctx->pc != 0x306A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A68u; }
        if (ctx->pc != 0x306A68u) { return; }
    }
    ctx->pc = 0x306A68u;
label_306a68:
    // 0x306a68: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x306a68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306a6c:
    // 0x306a6c: 0xc0c1ba8  jal         func_306EA0
label_306a70:
    if (ctx->pc == 0x306A70u) {
        ctx->pc = 0x306A70u;
            // 0x306a70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A74u;
        goto label_306a74;
    }
    ctx->pc = 0x306A6Cu;
    SET_GPR_U32(ctx, 31, 0x306A74u);
    ctx->pc = 0x306A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A6Cu;
            // 0x306a70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306EA0u;
    if (runtime->hasFunction(0x306EA0u)) {
        auto targetFn = runtime->lookupFunction(0x306EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A74u; }
        if (ctx->pc != 0x306A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306EA0_0x306ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A74u; }
        if (ctx->pc != 0x306A74u) { return; }
    }
    ctx->pc = 0x306A74u;
label_306a74:
    // 0x306a74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x306a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_306a78:
    // 0x306a78: 0xc0c1bb0  jal         func_306EC0
label_306a7c:
    if (ctx->pc == 0x306A7Cu) {
        ctx->pc = 0x306A7Cu;
            // 0x306a7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306A80u;
        goto label_306a80;
    }
    ctx->pc = 0x306A78u;
    SET_GPR_U32(ctx, 31, 0x306A80u);
    ctx->pc = 0x306A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A78u;
            // 0x306a7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306EC0u;
    if (runtime->hasFunction(0x306EC0u)) {
        auto targetFn = runtime->lookupFunction(0x306EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A80u; }
        if (ctx->pc != 0x306A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306EC0_0x306ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A80u; }
        if (ctx->pc != 0x306A80u) { return; }
    }
    ctx->pc = 0x306A80u;
label_306a80:
    // 0x306a80: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_306a84:
    // 0x306a84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x306a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_306a88:
    // 0x306a88: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x306a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_306a8c:
    // 0x306a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306a90:
    // 0x306a90: 0x0  nop
    ctx->pc = 0x306a90u;
    // NOP
label_306a94:
    // 0x306a94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306a98:
    // 0x306a98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x306a98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_306a9c:
    // 0x306a9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x306a9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_306aa0:
    // 0x306aa0: 0xc0c1bac  jal         func_306EB0
label_306aa4:
    if (ctx->pc == 0x306AA4u) {
        ctx->pc = 0x306AA4u;
            // 0x306aa4: 0x2445c001  addiu       $a1, $v0, -0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950913));
        ctx->pc = 0x306AA8u;
        goto label_306aa8;
    }
    ctx->pc = 0x306AA0u;
    SET_GPR_U32(ctx, 31, 0x306AA8u);
    ctx->pc = 0x306AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AA0u;
            // 0x306aa4: 0x2445c001  addiu       $a1, $v0, -0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950913));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306EB0u;
    if (runtime->hasFunction(0x306EB0u)) {
        auto targetFn = runtime->lookupFunction(0x306EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AA8u; }
        if (ctx->pc != 0x306AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306EB0_0x306eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AA8u; }
        if (ctx->pc != 0x306AA8u) { return; }
    }
    ctx->pc = 0x306AA8u;
label_306aa8:
    // 0x306aa8: 0xc0c1bfc  jal         func_306FF0
label_306aac:
    if (ctx->pc == 0x306AACu) {
        ctx->pc = 0x306AACu;
            // 0x306aac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AB0u;
        goto label_306ab0;
    }
    ctx->pc = 0x306AA8u;
    SET_GPR_U32(ctx, 31, 0x306AB0u);
    ctx->pc = 0x306AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AA8u;
            // 0x306aac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AB0u; }
        if (ctx->pc != 0x306AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AB0u; }
        if (ctx->pc != 0x306AB0u) { return; }
    }
    ctx->pc = 0x306AB0u;
label_306ab0:
    // 0x306ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x306ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306ab4:
    // 0x306ab4: 0xc0c05e0  jal         func_301780
label_306ab8:
    if (ctx->pc == 0x306AB8u) {
        ctx->pc = 0x306AB8u;
            // 0x306ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306ABCu;
        goto label_306abc;
    }
    ctx->pc = 0x306AB4u;
    SET_GPR_U32(ctx, 31, 0x306ABCu);
    ctx->pc = 0x306AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AB4u;
            // 0x306ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306ABCu; }
        if (ctx->pc != 0x306ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306ABCu; }
        if (ctx->pc != 0x306ABCu) { return; }
    }
    ctx->pc = 0x306ABCu;
label_306abc:
    // 0x306abc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306ac0:
    // 0x306ac0: 0xc0c1bf4  jal         func_306FD0
label_306ac4:
    if (ctx->pc == 0x306AC4u) {
        ctx->pc = 0x306AC4u;
            // 0x306ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AC8u;
        goto label_306ac8;
    }
    ctx->pc = 0x306AC0u;
    SET_GPR_U32(ctx, 31, 0x306AC8u);
    ctx->pc = 0x306AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AC0u;
            // 0x306ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FD0u;
    if (runtime->hasFunction(0x306FD0u)) {
        auto targetFn = runtime->lookupFunction(0x306FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AC8u; }
        if (ctx->pc != 0x306AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FD0_0x306fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AC8u; }
        if (ctx->pc != 0x306AC8u) { return; }
    }
    ctx->pc = 0x306AC8u;
label_306ac8:
    // 0x306ac8: 0xc0b9210  jal         func_2E4840
label_306acc:
    if (ctx->pc == 0x306ACCu) {
        ctx->pc = 0x306ACCu;
            // 0x306acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AD0u;
        goto label_306ad0;
    }
    ctx->pc = 0x306AC8u;
    SET_GPR_U32(ctx, 31, 0x306AD0u);
    ctx->pc = 0x306ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AC8u;
            // 0x306acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AD0u; }
        if (ctx->pc != 0x306AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AD0u; }
        if (ctx->pc != 0x306AD0u) { return; }
    }
    ctx->pc = 0x306AD0u;
label_306ad0:
    // 0x306ad0: 0xc077280  jal         func_1DCA00
label_306ad4:
    if (ctx->pc == 0x306AD4u) {
        ctx->pc = 0x306AD4u;
            // 0x306ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AD8u;
        goto label_306ad8;
    }
    ctx->pc = 0x306AD0u;
    SET_GPR_U32(ctx, 31, 0x306AD8u);
    ctx->pc = 0x306AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AD0u;
            // 0x306ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AD8u; }
        if (ctx->pc != 0x306AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AD8u; }
        if (ctx->pc != 0x306AD8u) { return; }
    }
    ctx->pc = 0x306AD8u;
label_306ad8:
    // 0x306ad8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306adc:
    // 0x306adc: 0xc0c1bfc  jal         func_306FF0
label_306ae0:
    if (ctx->pc == 0x306AE0u) {
        ctx->pc = 0x306AE0u;
            // 0x306ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AE4u;
        goto label_306ae4;
    }
    ctx->pc = 0x306ADCu;
    SET_GPR_U32(ctx, 31, 0x306AE4u);
    ctx->pc = 0x306AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306ADCu;
            // 0x306ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AE4u; }
        if (ctx->pc != 0x306AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AE4u; }
        if (ctx->pc != 0x306AE4u) { return; }
    }
    ctx->pc = 0x306AE4u;
label_306ae4:
    // 0x306ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306ae8:
    // 0x306ae8: 0xc0c1bf0  jal         func_306FC0
label_306aec:
    if (ctx->pc == 0x306AECu) {
        ctx->pc = 0x306AECu;
            // 0x306aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AF0u;
        goto label_306af0;
    }
    ctx->pc = 0x306AE8u;
    SET_GPR_U32(ctx, 31, 0x306AF0u);
    ctx->pc = 0x306AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AE8u;
            // 0x306aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FC0u;
    if (runtime->hasFunction(0x306FC0u)) {
        auto targetFn = runtime->lookupFunction(0x306FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AF0u; }
        if (ctx->pc != 0x306AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FC0_0x306fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AF0u; }
        if (ctx->pc != 0x306AF0u) { return; }
    }
    ctx->pc = 0x306AF0u;
label_306af0:
    // 0x306af0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306af4:
    // 0x306af4: 0xc0c1bf4  jal         func_306FD0
label_306af8:
    if (ctx->pc == 0x306AF8u) {
        ctx->pc = 0x306AF8u;
            // 0x306af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306AFCu;
        goto label_306afc;
    }
    ctx->pc = 0x306AF4u;
    SET_GPR_U32(ctx, 31, 0x306AFCu);
    ctx->pc = 0x306AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AF4u;
            // 0x306af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FD0u;
    if (runtime->hasFunction(0x306FD0u)) {
        auto targetFn = runtime->lookupFunction(0x306FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AFCu; }
        if (ctx->pc != 0x306AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FD0_0x306fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AFCu; }
        if (ctx->pc != 0x306AFCu) { return; }
    }
    ctx->pc = 0x306AFCu;
label_306afc:
    // 0x306afc: 0xc0b6d5c  jal         func_2DB570
label_306b00:
    if (ctx->pc == 0x306B00u) {
        ctx->pc = 0x306B00u;
            // 0x306b00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B04u;
        goto label_306b04;
    }
    ctx->pc = 0x306AFCu;
    SET_GPR_U32(ctx, 31, 0x306B04u);
    ctx->pc = 0x306B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AFCu;
            // 0x306b00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B04u; }
        if (ctx->pc != 0x306B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B04u; }
        if (ctx->pc != 0x306B04u) { return; }
    }
    ctx->pc = 0x306B04u;
label_306b04:
    // 0x306b04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306b08:
    // 0x306b08: 0xc0b6d40  jal         func_2DB500
label_306b0c:
    if (ctx->pc == 0x306B0Cu) {
        ctx->pc = 0x306B0Cu;
            // 0x306b0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B10u;
        goto label_306b10;
    }
    ctx->pc = 0x306B08u;
    SET_GPR_U32(ctx, 31, 0x306B10u);
    ctx->pc = 0x306B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B08u;
            // 0x306b0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B10u; }
        if (ctx->pc != 0x306B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B10u; }
        if (ctx->pc != 0x306B10u) { return; }
    }
    ctx->pc = 0x306B10u;
label_306b10:
    // 0x306b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306b14:
    // 0x306b14: 0xc04cc04  jal         func_133010
label_306b18:
    if (ctx->pc == 0x306B18u) {
        ctx->pc = 0x306B18u;
            // 0x306b18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B1Cu;
        goto label_306b1c;
    }
    ctx->pc = 0x306B14u;
    SET_GPR_U32(ctx, 31, 0x306B1Cu);
    ctx->pc = 0x306B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B14u;
            // 0x306b18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B1Cu; }
        if (ctx->pc != 0x306B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B1Cu; }
        if (ctx->pc != 0x306B1Cu) { return; }
    }
    ctx->pc = 0x306B1Cu;
label_306b1c:
    // 0x306b1c: 0xc077280  jal         func_1DCA00
label_306b20:
    if (ctx->pc == 0x306B20u) {
        ctx->pc = 0x306B20u;
            // 0x306b20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B24u;
        goto label_306b24;
    }
    ctx->pc = 0x306B1Cu;
    SET_GPR_U32(ctx, 31, 0x306B24u);
    ctx->pc = 0x306B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B1Cu;
            // 0x306b20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B24u; }
        if (ctx->pc != 0x306B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B24u; }
        if (ctx->pc != 0x306B24u) { return; }
    }
    ctx->pc = 0x306B24u;
label_306b24:
    // 0x306b24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x306b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_306b28:
    // 0x306b28: 0xc0b6d40  jal         func_2DB500
label_306b2c:
    if (ctx->pc == 0x306B2Cu) {
        ctx->pc = 0x306B2Cu;
            // 0x306b2c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B30u;
        goto label_306b30;
    }
    ctx->pc = 0x306B28u;
    SET_GPR_U32(ctx, 31, 0x306B30u);
    ctx->pc = 0x306B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B28u;
            // 0x306b2c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B30u; }
        if (ctx->pc != 0x306B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B30u; }
        if (ctx->pc != 0x306B30u) { return; }
    }
    ctx->pc = 0x306B30u;
label_306b30:
    // 0x306b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306b34:
    // 0x306b34: 0xc075318  jal         func_1D4C60
label_306b38:
    if (ctx->pc == 0x306B38u) {
        ctx->pc = 0x306B38u;
            // 0x306b38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B3Cu;
        goto label_306b3c;
    }
    ctx->pc = 0x306B34u;
    SET_GPR_U32(ctx, 31, 0x306B3Cu);
    ctx->pc = 0x306B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B34u;
            // 0x306b38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B3Cu; }
        if (ctx->pc != 0x306B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B3Cu; }
        if (ctx->pc != 0x306B3Cu) { return; }
    }
    ctx->pc = 0x306B3Cu;
label_306b3c:
    // 0x306b3c: 0xc077280  jal         func_1DCA00
label_306b40:
    if (ctx->pc == 0x306B40u) {
        ctx->pc = 0x306B40u;
            // 0x306b40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B44u;
        goto label_306b44;
    }
    ctx->pc = 0x306B3Cu;
    SET_GPR_U32(ctx, 31, 0x306B44u);
    ctx->pc = 0x306B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B3Cu;
            // 0x306b40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B44u; }
        if (ctx->pc != 0x306B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B44u; }
        if (ctx->pc != 0x306B44u) { return; }
    }
    ctx->pc = 0x306B44u;
label_306b44:
    // 0x306b44: 0xc07727c  jal         func_1DC9F0
label_306b48:
    if (ctx->pc == 0x306B48u) {
        ctx->pc = 0x306B48u;
            // 0x306b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B4Cu;
        goto label_306b4c;
    }
    ctx->pc = 0x306B44u;
    SET_GPR_U32(ctx, 31, 0x306B4Cu);
    ctx->pc = 0x306B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B44u;
            // 0x306b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B4Cu; }
        if (ctx->pc != 0x306B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B4Cu; }
        if (ctx->pc != 0x306B4Cu) { return; }
    }
    ctx->pc = 0x306B4Cu;
label_306b4c:
    // 0x306b4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306b50:
    // 0x306b50: 0xc0c05e0  jal         func_301780
label_306b54:
    if (ctx->pc == 0x306B54u) {
        ctx->pc = 0x306B54u;
            // 0x306b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B58u;
        goto label_306b58;
    }
    ctx->pc = 0x306B50u;
    SET_GPR_U32(ctx, 31, 0x306B58u);
    ctx->pc = 0x306B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B50u;
            // 0x306b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B58u; }
        if (ctx->pc != 0x306B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B58u; }
        if (ctx->pc != 0x306B58u) { return; }
    }
    ctx->pc = 0x306B58u;
label_306b58:
    // 0x306b58: 0xc0c05d0  jal         func_301740
label_306b5c:
    if (ctx->pc == 0x306B5Cu) {
        ctx->pc = 0x306B5Cu;
            // 0x306b5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B60u;
        goto label_306b60;
    }
    ctx->pc = 0x306B58u;
    SET_GPR_U32(ctx, 31, 0x306B60u);
    ctx->pc = 0x306B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B58u;
            // 0x306b5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301740u;
    if (runtime->hasFunction(0x301740u)) {
        auto targetFn = runtime->lookupFunction(0x301740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B60u; }
        if (ctx->pc != 0x306B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301740_0x301740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B60u; }
        if (ctx->pc != 0x306B60u) { return; }
    }
    ctx->pc = 0x306B60u;
label_306b60:
    // 0x306b60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306b64:
    // 0x306b64: 0xc07626c  jal         func_1D89B0
label_306b68:
    if (ctx->pc == 0x306B68u) {
        ctx->pc = 0x306B68u;
            // 0x306b68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x306B6Cu;
        goto label_306b6c;
    }
    ctx->pc = 0x306B64u;
    SET_GPR_U32(ctx, 31, 0x306B6Cu);
    ctx->pc = 0x306B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B64u;
            // 0x306b68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B6Cu; }
        if (ctx->pc != 0x306B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B6Cu; }
        if (ctx->pc != 0x306B6Cu) { return; }
    }
    ctx->pc = 0x306B6Cu;
label_306b6c:
    // 0x306b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306b70:
    // 0x306b70: 0xc04c720  jal         func_131C80
label_306b74:
    if (ctx->pc == 0x306B74u) {
        ctx->pc = 0x306B74u;
            // 0x306b74: 0x26a50830  addiu       $a1, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->pc = 0x306B78u;
        goto label_306b78;
    }
    ctx->pc = 0x306B70u;
    SET_GPR_U32(ctx, 31, 0x306B78u);
    ctx->pc = 0x306B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B70u;
            // 0x306b74: 0x26a50830  addiu       $a1, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B78u; }
        if (ctx->pc != 0x306B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B78u; }
        if (ctx->pc != 0x306B78u) { return; }
    }
    ctx->pc = 0x306B78u;
label_306b78:
    // 0x306b78: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x306b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_306b7c:
    // 0x306b7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x306b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306b80:
    // 0x306b80: 0xaea00dc0  sw          $zero, 0xDC0($s5)
    ctx->pc = 0x306b80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3520), GPR_U32(ctx, 0));
label_306b84:
    // 0x306b84: 0x8ea20e38  lw          $v0, 0xE38($s5)
    ctx->pc = 0x306b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
label_306b88:
    // 0x306b88: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_306b8c:
    if (ctx->pc == 0x306B8Cu) {
        ctx->pc = 0x306B8Cu;
            // 0x306b8c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x306B90u;
        goto label_306b90;
    }
    ctx->pc = 0x306B88u;
    {
        const bool branch_taken_0x306b88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306B88u;
            // 0x306b8c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b88) {
            ctx->pc = 0x306BA0u;
            goto label_306ba0;
        }
    }
    ctx->pc = 0x306B90u;
label_306b90:
    // 0x306b90: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x306b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_306b94:
    // 0x306b94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_306b98:
    if (ctx->pc == 0x306B98u) {
        ctx->pc = 0x306B9Cu;
        goto label_306b9c;
    }
    ctx->pc = 0x306B94u;
    {
        const bool branch_taken_0x306b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b94) {
            ctx->pc = 0x306BA0u;
            goto label_306ba0;
        }
    }
    ctx->pc = 0x306B9Cu;
label_306b9c:
    // 0x306b9c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x306b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306ba0:
    // 0x306ba0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_306ba4:
    if (ctx->pc == 0x306BA4u) {
        ctx->pc = 0x306BA8u;
        goto label_306ba8;
    }
    ctx->pc = 0x306BA0u;
    {
        const bool branch_taken_0x306ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306ba0) {
            ctx->pc = 0x306BBCu;
            goto label_306bbc;
        }
    }
    ctx->pc = 0x306BA8u;
label_306ba8:
    // 0x306ba8: 0xc075eb4  jal         func_1D7AD0
label_306bac:
    if (ctx->pc == 0x306BACu) {
        ctx->pc = 0x306BACu;
            // 0x306bac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306BB0u;
        goto label_306bb0;
    }
    ctx->pc = 0x306BA8u;
    SET_GPR_U32(ctx, 31, 0x306BB0u);
    ctx->pc = 0x306BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306BA8u;
            // 0x306bac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BB0u; }
        if (ctx->pc != 0x306BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BB0u; }
        if (ctx->pc != 0x306BB0u) { return; }
    }
    ctx->pc = 0x306BB0u;
label_306bb0:
    // 0x306bb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_306bb4:
    if (ctx->pc == 0x306BB4u) {
        ctx->pc = 0x306BB8u;
        goto label_306bb8;
    }
    ctx->pc = 0x306BB0u;
    {
        const bool branch_taken_0x306bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306bb0) {
            ctx->pc = 0x306BBCu;
            goto label_306bbc;
        }
    }
    ctx->pc = 0x306BB8u;
label_306bb8:
    // 0x306bb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x306bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306bbc:
    // 0x306bbc: 0x52000049  beql        $s0, $zero, . + 4 + (0x49 << 2)
label_306bc0:
    if (ctx->pc == 0x306BC0u) {
        ctx->pc = 0x306BC0u;
            // 0x306bc0: 0x8225010c  lb          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->pc = 0x306BC4u;
        goto label_306bc4;
    }
    ctx->pc = 0x306BBCu;
    {
        const bool branch_taken_0x306bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306bbc) {
            ctx->pc = 0x306BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306BBCu;
            // 0x306bc0: 0x8225010c  lb          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306CE4u;
            goto label_306ce4;
        }
    }
    ctx->pc = 0x306BC4u;
label_306bc4:
    // 0x306bc4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x306bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_306bc8:
    // 0x306bc8: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x306bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_306bcc:
    // 0x306bcc: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x306bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_306bd0:
    // 0x306bd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306bd4:
    // 0x306bd4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x306bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_306bd8:
    // 0x306bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306bdc:
    // 0x306bdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x306bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306be0:
    // 0x306be0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x306be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306be4:
    // 0x306be4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x306be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_306be8:
    // 0x306be8: 0x320f809  jalr        $t9
label_306bec:
    if (ctx->pc == 0x306BECu) {
        ctx->pc = 0x306BF0u;
        goto label_306bf0;
    }
    ctx->pc = 0x306BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306BF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x306BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306BF0u; }
            if (ctx->pc != 0x306BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x306BF0u;
label_306bf0:
    // 0x306bf0: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x306bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_306bf4:
    // 0x306bf4: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_306bf8:
    // 0x306bf8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x306bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_306bfc:
    // 0x306bfc: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x306bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_306c00:
    // 0x306c00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306c04:
    // 0x306c04: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x306c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_306c08:
    // 0x306c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306c0c:
    // 0x306c0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x306c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306c10:
    // 0x306c10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x306c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306c14:
    // 0x306c14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x306c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_306c18:
    // 0x306c18: 0x320f809  jalr        $t9
label_306c1c:
    if (ctx->pc == 0x306C1Cu) {
        ctx->pc = 0x306C20u;
        goto label_306c20;
    }
    ctx->pc = 0x306C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306C20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x306C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306C20u; }
            if (ctx->pc != 0x306C20u) { return; }
        }
        }
    }
    ctx->pc = 0x306C20u;
label_306c20:
    // 0x306c20: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_306c24:
    if (ctx->pc == 0x306C24u) {
        ctx->pc = 0x306C24u;
            // 0x306c24: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x306C28u;
        goto label_306c28;
    }
    ctx->pc = 0x306C20u;
    {
        const bool branch_taken_0x306c20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C20u;
            // 0x306c24: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c20) {
            ctx->pc = 0x306C80u;
            goto label_306c80;
        }
    }
    ctx->pc = 0x306C28u;
label_306c28:
    // 0x306c28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306c2c:
    // 0x306c2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x306c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_306c30:
    // 0x306c30: 0x320f809  jalr        $t9
label_306c34:
    if (ctx->pc == 0x306C34u) {
        ctx->pc = 0x306C34u;
            // 0x306c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306C38u;
        goto label_306c38;
    }
    ctx->pc = 0x306C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306C38u);
        ctx->pc = 0x306C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C30u;
            // 0x306c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306C38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306C38u; }
            if (ctx->pc != 0x306C38u) { return; }
        }
        }
    }
    ctx->pc = 0x306C38u;
label_306c38:
    // 0x306c38: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x306c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_306c3c:
    // 0x306c3c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_306c40:
    if (ctx->pc == 0x306C40u) {
        ctx->pc = 0x306C44u;
        goto label_306c44;
    }
    ctx->pc = 0x306C3Cu;
    {
        const bool branch_taken_0x306c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306c3c) {
            ctx->pc = 0x306C80u;
            goto label_306c80;
        }
    }
    ctx->pc = 0x306C44u;
label_306c44:
    // 0x306c44: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306c48:
    // 0x306c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306c4c:
    // 0x306c4c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x306c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_306c50:
    // 0x306c50: 0x320f809  jalr        $t9
label_306c54:
    if (ctx->pc == 0x306C54u) {
        ctx->pc = 0x306C54u;
            // 0x306c54: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x306C58u;
        goto label_306c58;
    }
    ctx->pc = 0x306C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306C58u);
        ctx->pc = 0x306C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C50u;
            // 0x306c54: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306C58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306C58u; }
            if (ctx->pc != 0x306C58u) { return; }
        }
        }
    }
    ctx->pc = 0x306C58u;
label_306c58:
    // 0x306c58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x306c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_306c5c:
    // 0x306c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306c60:
    // 0x306c60: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x306c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_306c64:
    // 0x306c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306c68:
    // 0x306c68: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x306c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_306c6c:
    // 0x306c6c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x306c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_306c70:
    // 0x306c70: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306c74:
    // 0x306c74: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x306c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_306c78:
    // 0x306c78: 0x320f809  jalr        $t9
label_306c7c:
    if (ctx->pc == 0x306C7Cu) {
        ctx->pc = 0x306C7Cu;
            // 0x306c7c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x306C80u;
        goto label_306c80;
    }
    ctx->pc = 0x306C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306C80u);
        ctx->pc = 0x306C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C78u;
            // 0x306c7c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306C80u; }
            if (ctx->pc != 0x306C80u) { return; }
        }
        }
    }
    ctx->pc = 0x306C80u;
label_306c80:
    // 0x306c80: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_306c84:
    if (ctx->pc == 0x306C84u) {
        ctx->pc = 0x306C88u;
        goto label_306c88;
    }
    ctx->pc = 0x306C80u;
    {
        const bool branch_taken_0x306c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c80) {
            ctx->pc = 0x306CE0u;
            goto label_306ce0;
        }
    }
    ctx->pc = 0x306C88u;
label_306c88:
    // 0x306c88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x306c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306c8c:
    // 0x306c8c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x306c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_306c90:
    // 0x306c90: 0x320f809  jalr        $t9
label_306c94:
    if (ctx->pc == 0x306C94u) {
        ctx->pc = 0x306C94u;
            // 0x306c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306C98u;
        goto label_306c98;
    }
    ctx->pc = 0x306C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306C98u);
        ctx->pc = 0x306C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C90u;
            // 0x306c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306C98u; }
            if (ctx->pc != 0x306C98u) { return; }
        }
        }
    }
    ctx->pc = 0x306C98u;
label_306c98:
    // 0x306c98: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x306c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_306c9c:
    // 0x306c9c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_306ca0:
    if (ctx->pc == 0x306CA0u) {
        ctx->pc = 0x306CA4u;
        goto label_306ca4;
    }
    ctx->pc = 0x306C9Cu;
    {
        const bool branch_taken_0x306c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306c9c) {
            ctx->pc = 0x306CE0u;
            goto label_306ce0;
        }
    }
    ctx->pc = 0x306CA4u;
label_306ca4:
    // 0x306ca4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x306ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306ca8:
    // 0x306ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306cac:
    // 0x306cac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x306cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_306cb0:
    // 0x306cb0: 0x320f809  jalr        $t9
label_306cb4:
    if (ctx->pc == 0x306CB4u) {
        ctx->pc = 0x306CB4u;
            // 0x306cb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x306CB8u;
        goto label_306cb8;
    }
    ctx->pc = 0x306CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306CB8u);
        ctx->pc = 0x306CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306CB0u;
            // 0x306cb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306CB8u; }
            if (ctx->pc != 0x306CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x306CB8u;
label_306cb8:
    // 0x306cb8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x306cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_306cbc:
    // 0x306cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306cc0:
    // 0x306cc0: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x306cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_306cc4:
    // 0x306cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306cc8:
    // 0x306cc8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x306cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_306ccc:
    // 0x306ccc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x306cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_306cd0:
    // 0x306cd0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x306cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306cd4:
    // 0x306cd4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x306cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_306cd8:
    // 0x306cd8: 0x320f809  jalr        $t9
label_306cdc:
    if (ctx->pc == 0x306CDCu) {
        ctx->pc = 0x306CDCu;
            // 0x306cdc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x306CE0u;
        goto label_306ce0;
    }
    ctx->pc = 0x306CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306CE0u);
        ctx->pc = 0x306CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306CD8u;
            // 0x306cdc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306CE0u; }
            if (ctx->pc != 0x306CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x306CE0u;
label_306ce0:
    // 0x306ce0: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x306ce0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_306ce4:
    // 0x306ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306ce8:
    // 0x306ce8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x306ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_306cec:
    // 0x306cec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x306cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_306cf0:
    // 0x306cf0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306cf4:
    // 0x306cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306cf8:
    // 0x306cf8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x306cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_306cfc:
    // 0x306cfc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x306cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_306d00:
    // 0x306d00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x306d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_306d04:
    // 0x306d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306d08:
    // 0x306d08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x306d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_306d0c:
    // 0x306d0c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x306d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_306d10:
    // 0x306d10: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x306d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_306d14:
    // 0x306d14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306d18:
    // 0x306d18: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x306d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_306d1c:
    // 0x306d1c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x306d1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_306d20:
    // 0x306d20: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x306d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_306d24:
    // 0x306d24: 0x320f809  jalr        $t9
label_306d28:
    if (ctx->pc == 0x306D28u) {
        ctx->pc = 0x306D28u;
            // 0x306d28: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x306D2Cu;
        goto label_306d2c;
    }
    ctx->pc = 0x306D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306D2Cu);
        ctx->pc = 0x306D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306D24u;
            // 0x306d28: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306D2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306D2Cu; }
            if (ctx->pc != 0x306D2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x306D2Cu;
label_306d2c:
    // 0x306d2c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x306d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_306d30:
    // 0x306d30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x306d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306d34:
    // 0x306d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306d38:
    // 0x306d38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x306d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_306d3c:
    // 0x306d3c: 0x320f809  jalr        $t9
label_306d40:
    if (ctx->pc == 0x306D40u) {
        ctx->pc = 0x306D40u;
            // 0x306d40: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306D44u;
        goto label_306d44;
    }
    ctx->pc = 0x306D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306D44u);
        ctx->pc = 0x306D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306D3Cu;
            // 0x306d40: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306D44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306D44u; }
            if (ctx->pc != 0x306D44u) { return; }
        }
        }
    }
    ctx->pc = 0x306D44u;
label_306d44:
    // 0x306d44: 0xaea00dc4  sw          $zero, 0xDC4($s5)
    ctx->pc = 0x306d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3524), GPR_U32(ctx, 0));
label_306d48:
    // 0x306d48: 0xaea00dc0  sw          $zero, 0xDC0($s5)
    ctx->pc = 0x306d48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3520), GPR_U32(ctx, 0));
label_306d4c:
    // 0x306d4c: 0xaea00dc8  sw          $zero, 0xDC8($s5)
    ctx->pc = 0x306d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3528), GPR_U32(ctx, 0));
label_306d50:
    // 0x306d50: 0xaea00e30  sw          $zero, 0xE30($s5)
    ctx->pc = 0x306d50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3632), GPR_U32(ctx, 0));
label_306d54:
    // 0x306d54: 0x8ea20e0c  lw          $v0, 0xE0C($s5)
    ctx->pc = 0x306d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
label_306d58:
    // 0x306d58: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_306d5c:
    if (ctx->pc == 0x306D5Cu) {
        ctx->pc = 0x306D5Cu;
            // 0x306d5c: 0xaea00e0c  sw          $zero, 0xE0C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3596), GPR_U32(ctx, 0));
        ctx->pc = 0x306D60u;
        goto label_306d60;
    }
    ctx->pc = 0x306D58u;
    {
        const bool branch_taken_0x306d58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x306d58) {
            ctx->pc = 0x306D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306D58u;
            // 0x306d5c: 0xaea00e0c  sw          $zero, 0xE0C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306D68u;
            goto label_306d68;
        }
    }
    ctx->pc = 0x306D60u;
label_306d60:
    // 0x306d60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x306d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_306d64:
    // 0x306d64: 0xaea20e0c  sw          $v0, 0xE0C($s5)
    ctx->pc = 0x306d64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3596), GPR_U32(ctx, 2));
label_306d68:
    // 0x306d68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306d6c:
    // 0x306d6c: 0xc07649c  jal         func_1D9270
label_306d70:
    if (ctx->pc == 0x306D70u) {
        ctx->pc = 0x306D70u;
            // 0x306d70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x306D74u;
        goto label_306d74;
    }
    ctx->pc = 0x306D6Cu;
    SET_GPR_U32(ctx, 31, 0x306D74u);
    ctx->pc = 0x306D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306D6Cu;
            // 0x306d70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D74u; }
        if (ctx->pc != 0x306D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D74u; }
        if (ctx->pc != 0x306D74u) { return; }
    }
    ctx->pc = 0x306D74u;
label_306d74:
    // 0x306d74: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x306d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_306d78:
    // 0x306d78: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x306d78u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_306d7c:
    // 0x306d7c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_306d80:
    if (ctx->pc == 0x306D80u) {
        ctx->pc = 0x306D80u;
            // 0x306d80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306D84u;
        goto label_306d84;
    }
    ctx->pc = 0x306D7Cu;
    {
        const bool branch_taken_0x306d7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306D7Cu;
            // 0x306d80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d7c) {
            ctx->pc = 0x306D94u;
            goto label_306d94;
        }
    }
    ctx->pc = 0x306D84u;
label_306d84:
    // 0x306d84: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x306d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_306d88:
    // 0x306d88: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_306d8c:
    if (ctx->pc == 0x306D8Cu) {
        ctx->pc = 0x306D90u;
        goto label_306d90;
    }
    ctx->pc = 0x306D88u;
    {
        const bool branch_taken_0x306d88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d88) {
            ctx->pc = 0x306D94u;
            goto label_306d94;
        }
    }
    ctx->pc = 0x306D90u;
label_306d90:
    // 0x306d90: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x306d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306d94:
    // 0x306d94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_306d98:
    if (ctx->pc == 0x306D98u) {
        ctx->pc = 0x306D9Cu;
        goto label_306d9c;
    }
    ctx->pc = 0x306D94u;
    {
        const bool branch_taken_0x306d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306d94) {
            ctx->pc = 0x306DB0u;
            goto label_306db0;
        }
    }
    ctx->pc = 0x306D9Cu;
label_306d9c:
    // 0x306d9c: 0xc075eb4  jal         func_1D7AD0
label_306da0:
    if (ctx->pc == 0x306DA0u) {
        ctx->pc = 0x306DA0u;
            // 0x306da0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306DA4u;
        goto label_306da4;
    }
    ctx->pc = 0x306D9Cu;
    SET_GPR_U32(ctx, 31, 0x306DA4u);
    ctx->pc = 0x306DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306D9Cu;
            // 0x306da0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DA4u; }
        if (ctx->pc != 0x306DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DA4u; }
        if (ctx->pc != 0x306DA4u) { return; }
    }
    ctx->pc = 0x306DA4u;
label_306da4:
    // 0x306da4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_306da8:
    if (ctx->pc == 0x306DA8u) {
        ctx->pc = 0x306DACu;
        goto label_306dac;
    }
    ctx->pc = 0x306DA4u;
    {
        const bool branch_taken_0x306da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306da4) {
            ctx->pc = 0x306DB0u;
            goto label_306db0;
        }
    }
    ctx->pc = 0x306DACu;
label_306dac:
    // 0x306dac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x306dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306db0:
    // 0x306db0: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_306db4:
    if (ctx->pc == 0x306DB4u) {
        ctx->pc = 0x306DB4u;
            // 0x306db4: 0x92a4005c  lbu         $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->pc = 0x306DB8u;
        goto label_306db8;
    }
    ctx->pc = 0x306DB0u;
    {
        const bool branch_taken_0x306db0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x306db0) {
            ctx->pc = 0x306DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306DB0u;
            // 0x306db4: 0x92a4005c  lbu         $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306DCCu;
            goto label_306dcc;
        }
    }
    ctx->pc = 0x306DB8u;
label_306db8:
    // 0x306db8: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x306db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_306dbc:
    // 0x306dbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x306dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_306dc0:
    // 0x306dc0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_306dc4:
    if (ctx->pc == 0x306DC4u) {
        ctx->pc = 0x306DC4u;
            // 0x306dc4: 0x8ea20e34  lw          $v0, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->pc = 0x306DC8u;
        goto label_306dc8;
    }
    ctx->pc = 0x306DC0u;
    {
        const bool branch_taken_0x306dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306dc0) {
            ctx->pc = 0x306DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306DC0u;
            // 0x306dc4: 0x8ea20e34  lw          $v0, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306DD8u;
            goto label_306dd8;
        }
    }
    ctx->pc = 0x306DC8u;
label_306dc8:
    // 0x306dc8: 0x92a4005c  lbu         $a0, 0x5C($s5)
    ctx->pc = 0x306dc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_306dcc:
    // 0x306dcc: 0xc072a56  jal         func_1CA958
label_306dd0:
    if (ctx->pc == 0x306DD0u) {
        ctx->pc = 0x306DD4u;
        goto label_306dd4;
    }
    ctx->pc = 0x306DCCu;
    SET_GPR_U32(ctx, 31, 0x306DD4u);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DD4u; }
        if (ctx->pc != 0x306DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DD4u; }
        if (ctx->pc != 0x306DD4u) { return; }
    }
    ctx->pc = 0x306DD4u;
label_306dd4:
    // 0x306dd4: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x306dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_306dd8:
    // 0x306dd8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x306dd8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_306ddc:
    // 0x306ddc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_306de0:
    if (ctx->pc == 0x306DE0u) {
        ctx->pc = 0x306DE0u;
            // 0x306de0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306DE4u;
        goto label_306de4;
    }
    ctx->pc = 0x306DDCu;
    {
        const bool branch_taken_0x306ddc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306DDCu;
            // 0x306de0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ddc) {
            ctx->pc = 0x306DF4u;
            goto label_306df4;
        }
    }
    ctx->pc = 0x306DE4u;
label_306de4:
    // 0x306de4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x306de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_306de8:
    // 0x306de8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_306dec:
    if (ctx->pc == 0x306DECu) {
        ctx->pc = 0x306DF0u;
        goto label_306df0;
    }
    ctx->pc = 0x306DE8u;
    {
        const bool branch_taken_0x306de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x306de8) {
            ctx->pc = 0x306DF4u;
            goto label_306df4;
        }
    }
    ctx->pc = 0x306DF0u;
label_306df0:
    // 0x306df0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x306df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306df4:
    // 0x306df4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_306df8:
    if (ctx->pc == 0x306DF8u) {
        ctx->pc = 0x306DFCu;
        goto label_306dfc;
    }
    ctx->pc = 0x306DF4u;
    {
        const bool branch_taken_0x306df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306df4) {
            ctx->pc = 0x306E10u;
            goto label_306e10;
        }
    }
    ctx->pc = 0x306DFCu;
label_306dfc:
    // 0x306dfc: 0xc075eb4  jal         func_1D7AD0
label_306e00:
    if (ctx->pc == 0x306E00u) {
        ctx->pc = 0x306E00u;
            // 0x306e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306E04u;
        goto label_306e04;
    }
    ctx->pc = 0x306DFCu;
    SET_GPR_U32(ctx, 31, 0x306E04u);
    ctx->pc = 0x306E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306DFCu;
            // 0x306e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E04u; }
        if (ctx->pc != 0x306E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E04u; }
        if (ctx->pc != 0x306E04u) { return; }
    }
    ctx->pc = 0x306E04u;
label_306e04:
    // 0x306e04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_306e08:
    if (ctx->pc == 0x306E08u) {
        ctx->pc = 0x306E0Cu;
        goto label_306e0c;
    }
    ctx->pc = 0x306E04u;
    {
        const bool branch_taken_0x306e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306e04) {
            ctx->pc = 0x306E10u;
            goto label_306e10;
        }
    }
    ctx->pc = 0x306E0Cu;
label_306e0c:
    // 0x306e0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x306e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306e10:
    // 0x306e10: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_306e14:
    if (ctx->pc == 0x306E14u) {
        ctx->pc = 0x306E14u;
            // 0x306e14: 0x82a611aa  lb          $a2, 0x11AA($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
        ctx->pc = 0x306E18u;
        goto label_306e18;
    }
    ctx->pc = 0x306E10u;
    {
        const bool branch_taken_0x306e10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x306e10) {
            ctx->pc = 0x306E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306E10u;
            // 0x306e14: 0x82a611aa  lb          $a2, 0x11AA($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306E2Cu;
            goto label_306e2c;
        }
    }
    ctx->pc = 0x306E18u;
label_306e18:
    // 0x306e18: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x306e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_306e1c:
    // 0x306e1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x306e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_306e20:
    // 0x306e20: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_306e24:
    if (ctx->pc == 0x306E24u) {
        ctx->pc = 0x306E24u;
            // 0x306e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306E28u;
        goto label_306e28;
    }
    ctx->pc = 0x306E20u;
    {
        const bool branch_taken_0x306e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306e20) {
            ctx->pc = 0x306E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306E20u;
            // 0x306e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306E5Cu;
            goto label_306e5c;
        }
    }
    ctx->pc = 0x306E28u;
label_306e28:
    // 0x306e28: 0x82a611aa  lb          $a2, 0x11AA($s5)
    ctx->pc = 0x306e28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
label_306e2c:
    // 0x306e2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306e30:
    // 0x306e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306e34:
    // 0x306e34: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x306e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_306e38:
    // 0x306e38: 0xc0762b4  jal         func_1D8AD0
label_306e3c:
    if (ctx->pc == 0x306E3Cu) {
        ctx->pc = 0x306E3Cu;
            // 0x306e3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x306E40u;
        goto label_306e40;
    }
    ctx->pc = 0x306E38u;
    SET_GPR_U32(ctx, 31, 0x306E40u);
    ctx->pc = 0x306E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306E38u;
            // 0x306e3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E40u; }
        if (ctx->pc != 0x306E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E40u; }
        if (ctx->pc != 0x306E40u) { return; }
    }
    ctx->pc = 0x306E40u;
label_306e40:
    // 0x306e40: 0x82a611aa  lb          $a2, 0x11AA($s5)
    ctx->pc = 0x306e40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
label_306e44:
    // 0x306e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306e48:
    // 0x306e48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306e4c:
    // 0x306e4c: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x306e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_306e50:
    // 0x306e50: 0xc0762b4  jal         func_1D8AD0
label_306e54:
    if (ctx->pc == 0x306E54u) {
        ctx->pc = 0x306E54u;
            // 0x306e54: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306E58u;
        goto label_306e58;
    }
    ctx->pc = 0x306E50u;
    SET_GPR_U32(ctx, 31, 0x306E58u);
    ctx->pc = 0x306E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306E50u;
            // 0x306e54: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E58u; }
        if (ctx->pc != 0x306E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E58u; }
        if (ctx->pc != 0x306E58u) { return; }
    }
    ctx->pc = 0x306E58u;
label_306e58:
    // 0x306e58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306e5c:
    // 0x306e5c: 0xc0c0f84  jal         func_303E10
label_306e60:
    if (ctx->pc == 0x306E60u) {
        ctx->pc = 0x306E64u;
        goto label_306e64;
    }
    ctx->pc = 0x306E5Cu;
    SET_GPR_U32(ctx, 31, 0x306E64u);
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E64u; }
        if (ctx->pc != 0x306E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E64u; }
        if (ctx->pc != 0x306E64u) { return; }
    }
    ctx->pc = 0x306E64u;
label_306e64:
    // 0x306e64: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x306e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306e68:
    // 0x306e68: 0xe6a00e1c  swc1        $f0, 0xE1C($s5)
    ctx->pc = 0x306e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3612), bits); }
label_306e6c:
    // 0x306e6c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x306e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_306e70:
    // 0x306e70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x306e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_306e74:
    // 0x306e74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x306e74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_306e78:
    // 0x306e78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x306e78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_306e7c:
    // 0x306e7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x306e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_306e80:
    // 0x306e80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x306e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_306e84:
    // 0x306e84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306e88:
    // 0x306e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306e8c:
    // 0x306e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306e90:
    // 0x306e90: 0x3e00008  jr          $ra
label_306e94:
    if (ctx->pc == 0x306E94u) {
        ctx->pc = 0x306E94u;
            // 0x306e94: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x306E98u;
        goto label_306e98;
    }
    ctx->pc = 0x306E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306E90u;
            // 0x306e94: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306E98u;
label_306e98:
    // 0x306e98: 0x0  nop
    ctx->pc = 0x306e98u;
    // NOP
label_306e9c:
    // 0x306e9c: 0x0  nop
    ctx->pc = 0x306e9cu;
    // NOP
}
