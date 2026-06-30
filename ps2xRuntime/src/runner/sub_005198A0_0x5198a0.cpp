#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005198A0
// Address: 0x5198a0 - 0x519e10
void sub_005198A0_0x5198a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005198A0_0x5198a0");
#endif

    switch (ctx->pc) {
        case 0x5198a0u: goto label_5198a0;
        case 0x5198a4u: goto label_5198a4;
        case 0x5198a8u: goto label_5198a8;
        case 0x5198acu: goto label_5198ac;
        case 0x5198b0u: goto label_5198b0;
        case 0x5198b4u: goto label_5198b4;
        case 0x5198b8u: goto label_5198b8;
        case 0x5198bcu: goto label_5198bc;
        case 0x5198c0u: goto label_5198c0;
        case 0x5198c4u: goto label_5198c4;
        case 0x5198c8u: goto label_5198c8;
        case 0x5198ccu: goto label_5198cc;
        case 0x5198d0u: goto label_5198d0;
        case 0x5198d4u: goto label_5198d4;
        case 0x5198d8u: goto label_5198d8;
        case 0x5198dcu: goto label_5198dc;
        case 0x5198e0u: goto label_5198e0;
        case 0x5198e4u: goto label_5198e4;
        case 0x5198e8u: goto label_5198e8;
        case 0x5198ecu: goto label_5198ec;
        case 0x5198f0u: goto label_5198f0;
        case 0x5198f4u: goto label_5198f4;
        case 0x5198f8u: goto label_5198f8;
        case 0x5198fcu: goto label_5198fc;
        case 0x519900u: goto label_519900;
        case 0x519904u: goto label_519904;
        case 0x519908u: goto label_519908;
        case 0x51990cu: goto label_51990c;
        case 0x519910u: goto label_519910;
        case 0x519914u: goto label_519914;
        case 0x519918u: goto label_519918;
        case 0x51991cu: goto label_51991c;
        case 0x519920u: goto label_519920;
        case 0x519924u: goto label_519924;
        case 0x519928u: goto label_519928;
        case 0x51992cu: goto label_51992c;
        case 0x519930u: goto label_519930;
        case 0x519934u: goto label_519934;
        case 0x519938u: goto label_519938;
        case 0x51993cu: goto label_51993c;
        case 0x519940u: goto label_519940;
        case 0x519944u: goto label_519944;
        case 0x519948u: goto label_519948;
        case 0x51994cu: goto label_51994c;
        case 0x519950u: goto label_519950;
        case 0x519954u: goto label_519954;
        case 0x519958u: goto label_519958;
        case 0x51995cu: goto label_51995c;
        case 0x519960u: goto label_519960;
        case 0x519964u: goto label_519964;
        case 0x519968u: goto label_519968;
        case 0x51996cu: goto label_51996c;
        case 0x519970u: goto label_519970;
        case 0x519974u: goto label_519974;
        case 0x519978u: goto label_519978;
        case 0x51997cu: goto label_51997c;
        case 0x519980u: goto label_519980;
        case 0x519984u: goto label_519984;
        case 0x519988u: goto label_519988;
        case 0x51998cu: goto label_51998c;
        case 0x519990u: goto label_519990;
        case 0x519994u: goto label_519994;
        case 0x519998u: goto label_519998;
        case 0x51999cu: goto label_51999c;
        case 0x5199a0u: goto label_5199a0;
        case 0x5199a4u: goto label_5199a4;
        case 0x5199a8u: goto label_5199a8;
        case 0x5199acu: goto label_5199ac;
        case 0x5199b0u: goto label_5199b0;
        case 0x5199b4u: goto label_5199b4;
        case 0x5199b8u: goto label_5199b8;
        case 0x5199bcu: goto label_5199bc;
        case 0x5199c0u: goto label_5199c0;
        case 0x5199c4u: goto label_5199c4;
        case 0x5199c8u: goto label_5199c8;
        case 0x5199ccu: goto label_5199cc;
        case 0x5199d0u: goto label_5199d0;
        case 0x5199d4u: goto label_5199d4;
        case 0x5199d8u: goto label_5199d8;
        case 0x5199dcu: goto label_5199dc;
        case 0x5199e0u: goto label_5199e0;
        case 0x5199e4u: goto label_5199e4;
        case 0x5199e8u: goto label_5199e8;
        case 0x5199ecu: goto label_5199ec;
        case 0x5199f0u: goto label_5199f0;
        case 0x5199f4u: goto label_5199f4;
        case 0x5199f8u: goto label_5199f8;
        case 0x5199fcu: goto label_5199fc;
        case 0x519a00u: goto label_519a00;
        case 0x519a04u: goto label_519a04;
        case 0x519a08u: goto label_519a08;
        case 0x519a0cu: goto label_519a0c;
        case 0x519a10u: goto label_519a10;
        case 0x519a14u: goto label_519a14;
        case 0x519a18u: goto label_519a18;
        case 0x519a1cu: goto label_519a1c;
        case 0x519a20u: goto label_519a20;
        case 0x519a24u: goto label_519a24;
        case 0x519a28u: goto label_519a28;
        case 0x519a2cu: goto label_519a2c;
        case 0x519a30u: goto label_519a30;
        case 0x519a34u: goto label_519a34;
        case 0x519a38u: goto label_519a38;
        case 0x519a3cu: goto label_519a3c;
        case 0x519a40u: goto label_519a40;
        case 0x519a44u: goto label_519a44;
        case 0x519a48u: goto label_519a48;
        case 0x519a4cu: goto label_519a4c;
        case 0x519a50u: goto label_519a50;
        case 0x519a54u: goto label_519a54;
        case 0x519a58u: goto label_519a58;
        case 0x519a5cu: goto label_519a5c;
        case 0x519a60u: goto label_519a60;
        case 0x519a64u: goto label_519a64;
        case 0x519a68u: goto label_519a68;
        case 0x519a6cu: goto label_519a6c;
        case 0x519a70u: goto label_519a70;
        case 0x519a74u: goto label_519a74;
        case 0x519a78u: goto label_519a78;
        case 0x519a7cu: goto label_519a7c;
        case 0x519a80u: goto label_519a80;
        case 0x519a84u: goto label_519a84;
        case 0x519a88u: goto label_519a88;
        case 0x519a8cu: goto label_519a8c;
        case 0x519a90u: goto label_519a90;
        case 0x519a94u: goto label_519a94;
        case 0x519a98u: goto label_519a98;
        case 0x519a9cu: goto label_519a9c;
        case 0x519aa0u: goto label_519aa0;
        case 0x519aa4u: goto label_519aa4;
        case 0x519aa8u: goto label_519aa8;
        case 0x519aacu: goto label_519aac;
        case 0x519ab0u: goto label_519ab0;
        case 0x519ab4u: goto label_519ab4;
        case 0x519ab8u: goto label_519ab8;
        case 0x519abcu: goto label_519abc;
        case 0x519ac0u: goto label_519ac0;
        case 0x519ac4u: goto label_519ac4;
        case 0x519ac8u: goto label_519ac8;
        case 0x519accu: goto label_519acc;
        case 0x519ad0u: goto label_519ad0;
        case 0x519ad4u: goto label_519ad4;
        case 0x519ad8u: goto label_519ad8;
        case 0x519adcu: goto label_519adc;
        case 0x519ae0u: goto label_519ae0;
        case 0x519ae4u: goto label_519ae4;
        case 0x519ae8u: goto label_519ae8;
        case 0x519aecu: goto label_519aec;
        case 0x519af0u: goto label_519af0;
        case 0x519af4u: goto label_519af4;
        case 0x519af8u: goto label_519af8;
        case 0x519afcu: goto label_519afc;
        case 0x519b00u: goto label_519b00;
        case 0x519b04u: goto label_519b04;
        case 0x519b08u: goto label_519b08;
        case 0x519b0cu: goto label_519b0c;
        case 0x519b10u: goto label_519b10;
        case 0x519b14u: goto label_519b14;
        case 0x519b18u: goto label_519b18;
        case 0x519b1cu: goto label_519b1c;
        case 0x519b20u: goto label_519b20;
        case 0x519b24u: goto label_519b24;
        case 0x519b28u: goto label_519b28;
        case 0x519b2cu: goto label_519b2c;
        case 0x519b30u: goto label_519b30;
        case 0x519b34u: goto label_519b34;
        case 0x519b38u: goto label_519b38;
        case 0x519b3cu: goto label_519b3c;
        case 0x519b40u: goto label_519b40;
        case 0x519b44u: goto label_519b44;
        case 0x519b48u: goto label_519b48;
        case 0x519b4cu: goto label_519b4c;
        case 0x519b50u: goto label_519b50;
        case 0x519b54u: goto label_519b54;
        case 0x519b58u: goto label_519b58;
        case 0x519b5cu: goto label_519b5c;
        case 0x519b60u: goto label_519b60;
        case 0x519b64u: goto label_519b64;
        case 0x519b68u: goto label_519b68;
        case 0x519b6cu: goto label_519b6c;
        case 0x519b70u: goto label_519b70;
        case 0x519b74u: goto label_519b74;
        case 0x519b78u: goto label_519b78;
        case 0x519b7cu: goto label_519b7c;
        case 0x519b80u: goto label_519b80;
        case 0x519b84u: goto label_519b84;
        case 0x519b88u: goto label_519b88;
        case 0x519b8cu: goto label_519b8c;
        case 0x519b90u: goto label_519b90;
        case 0x519b94u: goto label_519b94;
        case 0x519b98u: goto label_519b98;
        case 0x519b9cu: goto label_519b9c;
        case 0x519ba0u: goto label_519ba0;
        case 0x519ba4u: goto label_519ba4;
        case 0x519ba8u: goto label_519ba8;
        case 0x519bacu: goto label_519bac;
        case 0x519bb0u: goto label_519bb0;
        case 0x519bb4u: goto label_519bb4;
        case 0x519bb8u: goto label_519bb8;
        case 0x519bbcu: goto label_519bbc;
        case 0x519bc0u: goto label_519bc0;
        case 0x519bc4u: goto label_519bc4;
        case 0x519bc8u: goto label_519bc8;
        case 0x519bccu: goto label_519bcc;
        case 0x519bd0u: goto label_519bd0;
        case 0x519bd4u: goto label_519bd4;
        case 0x519bd8u: goto label_519bd8;
        case 0x519bdcu: goto label_519bdc;
        case 0x519be0u: goto label_519be0;
        case 0x519be4u: goto label_519be4;
        case 0x519be8u: goto label_519be8;
        case 0x519becu: goto label_519bec;
        case 0x519bf0u: goto label_519bf0;
        case 0x519bf4u: goto label_519bf4;
        case 0x519bf8u: goto label_519bf8;
        case 0x519bfcu: goto label_519bfc;
        case 0x519c00u: goto label_519c00;
        case 0x519c04u: goto label_519c04;
        case 0x519c08u: goto label_519c08;
        case 0x519c0cu: goto label_519c0c;
        case 0x519c10u: goto label_519c10;
        case 0x519c14u: goto label_519c14;
        case 0x519c18u: goto label_519c18;
        case 0x519c1cu: goto label_519c1c;
        case 0x519c20u: goto label_519c20;
        case 0x519c24u: goto label_519c24;
        case 0x519c28u: goto label_519c28;
        case 0x519c2cu: goto label_519c2c;
        case 0x519c30u: goto label_519c30;
        case 0x519c34u: goto label_519c34;
        case 0x519c38u: goto label_519c38;
        case 0x519c3cu: goto label_519c3c;
        case 0x519c40u: goto label_519c40;
        case 0x519c44u: goto label_519c44;
        case 0x519c48u: goto label_519c48;
        case 0x519c4cu: goto label_519c4c;
        case 0x519c50u: goto label_519c50;
        case 0x519c54u: goto label_519c54;
        case 0x519c58u: goto label_519c58;
        case 0x519c5cu: goto label_519c5c;
        case 0x519c60u: goto label_519c60;
        case 0x519c64u: goto label_519c64;
        case 0x519c68u: goto label_519c68;
        case 0x519c6cu: goto label_519c6c;
        case 0x519c70u: goto label_519c70;
        case 0x519c74u: goto label_519c74;
        case 0x519c78u: goto label_519c78;
        case 0x519c7cu: goto label_519c7c;
        case 0x519c80u: goto label_519c80;
        case 0x519c84u: goto label_519c84;
        case 0x519c88u: goto label_519c88;
        case 0x519c8cu: goto label_519c8c;
        case 0x519c90u: goto label_519c90;
        case 0x519c94u: goto label_519c94;
        case 0x519c98u: goto label_519c98;
        case 0x519c9cu: goto label_519c9c;
        case 0x519ca0u: goto label_519ca0;
        case 0x519ca4u: goto label_519ca4;
        case 0x519ca8u: goto label_519ca8;
        case 0x519cacu: goto label_519cac;
        case 0x519cb0u: goto label_519cb0;
        case 0x519cb4u: goto label_519cb4;
        case 0x519cb8u: goto label_519cb8;
        case 0x519cbcu: goto label_519cbc;
        case 0x519cc0u: goto label_519cc0;
        case 0x519cc4u: goto label_519cc4;
        case 0x519cc8u: goto label_519cc8;
        case 0x519cccu: goto label_519ccc;
        case 0x519cd0u: goto label_519cd0;
        case 0x519cd4u: goto label_519cd4;
        case 0x519cd8u: goto label_519cd8;
        case 0x519cdcu: goto label_519cdc;
        case 0x519ce0u: goto label_519ce0;
        case 0x519ce4u: goto label_519ce4;
        case 0x519ce8u: goto label_519ce8;
        case 0x519cecu: goto label_519cec;
        case 0x519cf0u: goto label_519cf0;
        case 0x519cf4u: goto label_519cf4;
        case 0x519cf8u: goto label_519cf8;
        case 0x519cfcu: goto label_519cfc;
        case 0x519d00u: goto label_519d00;
        case 0x519d04u: goto label_519d04;
        case 0x519d08u: goto label_519d08;
        case 0x519d0cu: goto label_519d0c;
        case 0x519d10u: goto label_519d10;
        case 0x519d14u: goto label_519d14;
        case 0x519d18u: goto label_519d18;
        case 0x519d1cu: goto label_519d1c;
        case 0x519d20u: goto label_519d20;
        case 0x519d24u: goto label_519d24;
        case 0x519d28u: goto label_519d28;
        case 0x519d2cu: goto label_519d2c;
        case 0x519d30u: goto label_519d30;
        case 0x519d34u: goto label_519d34;
        case 0x519d38u: goto label_519d38;
        case 0x519d3cu: goto label_519d3c;
        case 0x519d40u: goto label_519d40;
        case 0x519d44u: goto label_519d44;
        case 0x519d48u: goto label_519d48;
        case 0x519d4cu: goto label_519d4c;
        case 0x519d50u: goto label_519d50;
        case 0x519d54u: goto label_519d54;
        case 0x519d58u: goto label_519d58;
        case 0x519d5cu: goto label_519d5c;
        case 0x519d60u: goto label_519d60;
        case 0x519d64u: goto label_519d64;
        case 0x519d68u: goto label_519d68;
        case 0x519d6cu: goto label_519d6c;
        case 0x519d70u: goto label_519d70;
        case 0x519d74u: goto label_519d74;
        case 0x519d78u: goto label_519d78;
        case 0x519d7cu: goto label_519d7c;
        case 0x519d80u: goto label_519d80;
        case 0x519d84u: goto label_519d84;
        case 0x519d88u: goto label_519d88;
        case 0x519d8cu: goto label_519d8c;
        case 0x519d90u: goto label_519d90;
        case 0x519d94u: goto label_519d94;
        case 0x519d98u: goto label_519d98;
        case 0x519d9cu: goto label_519d9c;
        case 0x519da0u: goto label_519da0;
        case 0x519da4u: goto label_519da4;
        case 0x519da8u: goto label_519da8;
        case 0x519dacu: goto label_519dac;
        case 0x519db0u: goto label_519db0;
        case 0x519db4u: goto label_519db4;
        case 0x519db8u: goto label_519db8;
        case 0x519dbcu: goto label_519dbc;
        case 0x519dc0u: goto label_519dc0;
        case 0x519dc4u: goto label_519dc4;
        case 0x519dc8u: goto label_519dc8;
        case 0x519dccu: goto label_519dcc;
        case 0x519dd0u: goto label_519dd0;
        case 0x519dd4u: goto label_519dd4;
        case 0x519dd8u: goto label_519dd8;
        case 0x519ddcu: goto label_519ddc;
        case 0x519de0u: goto label_519de0;
        case 0x519de4u: goto label_519de4;
        case 0x519de8u: goto label_519de8;
        case 0x519decu: goto label_519dec;
        case 0x519df0u: goto label_519df0;
        case 0x519df4u: goto label_519df4;
        case 0x519df8u: goto label_519df8;
        case 0x519dfcu: goto label_519dfc;
        case 0x519e00u: goto label_519e00;
        case 0x519e04u: goto label_519e04;
        case 0x519e08u: goto label_519e08;
        case 0x519e0cu: goto label_519e0c;
        default: break;
    }

    ctx->pc = 0x5198a0u;

label_5198a0:
    // 0x5198a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x5198a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_5198a4:
    // 0x5198a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5198a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5198a8:
    // 0x5198a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5198a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5198ac:
    // 0x5198ac: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x5198acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
label_5198b0:
    // 0x5198b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5198b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5198b4:
    // 0x5198b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5198b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5198b8:
    // 0x5198b8: 0xc1467bc  jal         func_519EF0
label_5198bc:
    if (ctx->pc == 0x5198BCu) {
        ctx->pc = 0x5198BCu;
            // 0x5198bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x5198C0u;
        goto label_5198c0;
    }
    ctx->pc = 0x5198B8u;
    SET_GPR_U32(ctx, 31, 0x5198C0u);
    ctx->pc = 0x5198BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5198B8u;
            // 0x5198bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519EF0u;
    if (runtime->hasFunction(0x519EF0u)) {
        auto targetFn = runtime->lookupFunction(0x519EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5198C0u; }
        if (ctx->pc != 0x5198C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519EF0_0x519ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5198C0u; }
        if (ctx->pc != 0x5198C0u) { return; }
    }
    ctx->pc = 0x5198C0u;
label_5198c0:
    // 0x5198c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5198c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5198c4:
    // 0x5198c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5198c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5198c8:
    // 0x5198c8: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x5198c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
label_5198cc:
    // 0x5198cc: 0x24425828  addiu       $v0, $v0, 0x5828
    ctx->pc = 0x5198ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22568));
label_5198d0:
    // 0x5198d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5198d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5198d4:
    // 0x5198d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5198d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5198d8:
    // 0x5198d8: 0xc1467b8  jal         func_519EE0
label_5198dc:
    if (ctx->pc == 0x5198DCu) {
        ctx->pc = 0x5198DCu;
            // 0x5198dc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5198E0u;
        goto label_5198e0;
    }
    ctx->pc = 0x5198D8u;
    SET_GPR_U32(ctx, 31, 0x5198E0u);
    ctx->pc = 0x5198DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5198D8u;
            // 0x5198dc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519EE0u;
    if (runtime->hasFunction(0x519EE0u)) {
        auto targetFn = runtime->lookupFunction(0x519EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5198E0u; }
        if (ctx->pc != 0x5198E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519EE0_0x519ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5198E0u; }
        if (ctx->pc != 0x5198E0u) { return; }
    }
    ctx->pc = 0x5198E0u;
label_5198e0:
    // 0x5198e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x5198e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_5198e4:
    // 0x5198e4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x5198e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_5198e8:
    // 0x5198e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5198ec:
    // 0x5198ec: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x5198ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_5198f0:
    // 0x5198f0: 0x24425740  addiu       $v0, $v0, 0x5740
    ctx->pc = 0x5198f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22336));
label_5198f4:
    // 0x5198f4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x5198f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_5198f8:
    // 0x5198f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5198f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5198fc:
    // 0x5198fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5198fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519900:
    // 0x519900: 0x24425778  addiu       $v0, $v0, 0x5778
    ctx->pc = 0x519900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22392));
label_519904:
    // 0x519904: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x519904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_519908:
    // 0x519908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x519908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_51990c:
    // 0x51990c: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x51990cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_519910:
    // 0x519910: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x519910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_519914:
    // 0x519914: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x519914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_519918:
    // 0x519918: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x519918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_51991c:
    // 0x51991c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x51991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_519920:
    // 0x519920: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519924:
    // 0x519924: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x519924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_519928:
    // 0x519928: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x519928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_51992c:
    // 0x51992c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x51992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_519930:
    // 0x519930: 0xc0a7a88  jal         func_29EA20
label_519934:
    if (ctx->pc == 0x519934u) {
        ctx->pc = 0x519934u;
            // 0x519934: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x519938u;
        goto label_519938;
    }
    ctx->pc = 0x519930u;
    SET_GPR_U32(ctx, 31, 0x519938u);
    ctx->pc = 0x519934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519930u;
            // 0x519934: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519938u; }
        if (ctx->pc != 0x519938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519938u; }
        if (ctx->pc != 0x519938u) { return; }
    }
    ctx->pc = 0x519938u;
label_519938:
    // 0x519938: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x519938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_51993c:
    // 0x51993c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51993cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519940:
    // 0x519940: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_519944:
    if (ctx->pc == 0x519944u) {
        ctx->pc = 0x519944u;
            // 0x519944: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x519948u;
        goto label_519948;
    }
    ctx->pc = 0x519940u;
    {
        const bool branch_taken_0x519940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x519944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519940u;
            // 0x519944: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519940) {
            ctx->pc = 0x51995Cu;
            goto label_51995c;
        }
    }
    ctx->pc = 0x519948u;
label_519948:
    // 0x519948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x519948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51994c:
    // 0x51994c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51994cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_519950:
    // 0x519950: 0xc0804bc  jal         func_2012F0
label_519954:
    if (ctx->pc == 0x519954u) {
        ctx->pc = 0x519954u;
            // 0x519954: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x519958u;
        goto label_519958;
    }
    ctx->pc = 0x519950u;
    SET_GPR_U32(ctx, 31, 0x519958u);
    ctx->pc = 0x519954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519950u;
            // 0x519954: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519958u; }
        if (ctx->pc != 0x519958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519958u; }
        if (ctx->pc != 0x519958u) { return; }
    }
    ctx->pc = 0x519958u;
label_519958:
    // 0x519958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x519958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51995c:
    // 0x51995c: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x51995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_519960:
    // 0x519960: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x519960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_519964:
    // 0x519964: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x519964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_519968:
    // 0x519968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x519968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51996c:
    // 0x51996c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x51996cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519970:
    // 0x519970: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x519970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519974:
    // 0x519974: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x519974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_519978:
    // 0x519978: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x519978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_51997c:
    // 0x51997c: 0xc04ca18  jal         func_132860
label_519980:
    if (ctx->pc == 0x519980u) {
        ctx->pc = 0x519980u;
            // 0x519980: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x519984u;
        goto label_519984;
    }
    ctx->pc = 0x51997Cu;
    SET_GPR_U32(ctx, 31, 0x519984u);
    ctx->pc = 0x519980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51997Cu;
            // 0x519980: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519984u; }
        if (ctx->pc != 0x519984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519984u; }
        if (ctx->pc != 0x519984u) { return; }
    }
    ctx->pc = 0x519984u;
label_519984:
    // 0x519984: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x519984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519988:
    // 0x519988: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x519988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_51998c:
    // 0x51998c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x51998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_519990:
    // 0x519990: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x519990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_519994:
    // 0x519994: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x519994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_519998:
    // 0x519998: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x519998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_51999c:
    // 0x51999c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x51999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5199a0:
    // 0x5199a0: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x5199a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_5199a4:
    // 0x5199a4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x5199a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_5199a8:
    // 0x5199a8: 0xc0a3830  jal         func_28E0C0
label_5199ac:
    if (ctx->pc == 0x5199ACu) {
        ctx->pc = 0x5199ACu;
            // 0x5199ac: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x5199B0u;
        goto label_5199b0;
    }
    ctx->pc = 0x5199A8u;
    SET_GPR_U32(ctx, 31, 0x5199B0u);
    ctx->pc = 0x5199ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5199A8u;
            // 0x5199ac: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5199B0u; }
        if (ctx->pc != 0x5199B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5199B0u; }
        if (ctx->pc != 0x5199B0u) { return; }
    }
    ctx->pc = 0x5199B0u;
label_5199b0:
    // 0x5199b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5199b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5199b4:
    // 0x5199b4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x5199b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_5199b8:
    // 0x5199b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5199b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5199bc:
    // 0x5199bc: 0xc0a7a88  jal         func_29EA20
label_5199c0:
    if (ctx->pc == 0x5199C0u) {
        ctx->pc = 0x5199C0u;
            // 0x5199c0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x5199C4u;
        goto label_5199c4;
    }
    ctx->pc = 0x5199BCu;
    SET_GPR_U32(ctx, 31, 0x5199C4u);
    ctx->pc = 0x5199C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5199BCu;
            // 0x5199c0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5199C4u; }
        if (ctx->pc != 0x5199C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5199C4u; }
        if (ctx->pc != 0x5199C4u) { return; }
    }
    ctx->pc = 0x5199C4u;
label_5199c4:
    // 0x5199c4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x5199c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_5199c8:
    // 0x5199c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5199c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5199cc:
    // 0x5199cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_5199d0:
    if (ctx->pc == 0x5199D0u) {
        ctx->pc = 0x5199D0u;
            // 0x5199d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5199D4u;
        goto label_5199d4;
    }
    ctx->pc = 0x5199CCu;
    {
        const bool branch_taken_0x5199cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5199D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5199CCu;
            // 0x5199d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5199cc) {
            ctx->pc = 0x5199E4u;
            goto label_5199e4;
        }
    }
    ctx->pc = 0x5199D4u;
label_5199d4:
    // 0x5199d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5199d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5199d8:
    // 0x5199d8: 0xc082940  jal         func_20A500
label_5199dc:
    if (ctx->pc == 0x5199DCu) {
        ctx->pc = 0x5199DCu;
            // 0x5199dc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x5199E0u;
        goto label_5199e0;
    }
    ctx->pc = 0x5199D8u;
    SET_GPR_U32(ctx, 31, 0x5199E0u);
    ctx->pc = 0x5199DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5199D8u;
            // 0x5199dc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5199E0u; }
        if (ctx->pc != 0x5199E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5199E0u; }
        if (ctx->pc != 0x5199E0u) { return; }
    }
    ctx->pc = 0x5199E0u;
label_5199e0:
    // 0x5199e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5199e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5199e4:
    // 0x5199e4: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x5199e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_5199e8:
    // 0x5199e8: 0x3c02c0d0  lui         $v0, 0xC0D0
    ctx->pc = 0x5199e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49360 << 16));
label_5199ec:
    // 0x5199ec: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x5199ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_5199f0:
    // 0x5199f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x5199f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_5199f4:
    // 0x5199f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5199f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5199f8:
    // 0x5199f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5199f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5199fc:
    // 0x5199fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5199fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519a00:
    // 0x519a00: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x519a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_519a04:
    // 0x519a04: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x519a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_519a08:
    // 0x519a08: 0xc04ca18  jal         func_132860
label_519a0c:
    if (ctx->pc == 0x519A0Cu) {
        ctx->pc = 0x519A0Cu;
            // 0x519a0c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x519A10u;
        goto label_519a10;
    }
    ctx->pc = 0x519A08u;
    SET_GPR_U32(ctx, 31, 0x519A10u);
    ctx->pc = 0x519A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519A08u;
            // 0x519a0c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A10u; }
        if (ctx->pc != 0x519A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A10u; }
        if (ctx->pc != 0x519A10u) { return; }
    }
    ctx->pc = 0x519A10u;
label_519a10:
    // 0x519a10: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x519a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519a14:
    // 0x519a14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x519a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_519a18:
    // 0x519a18: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x519a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_519a1c:
    // 0x519a1c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x519a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_519a20:
    // 0x519a20: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x519a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_519a24:
    // 0x519a24: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x519a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_519a28:
    // 0x519a28: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x519a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519a2c:
    // 0x519a2c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x519a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_519a30:
    // 0x519a30: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x519a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_519a34:
    // 0x519a34: 0xc0a3830  jal         func_28E0C0
label_519a38:
    if (ctx->pc == 0x519A38u) {
        ctx->pc = 0x519A38u;
            // 0x519a38: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x519A3Cu;
        goto label_519a3c;
    }
    ctx->pc = 0x519A34u;
    SET_GPR_U32(ctx, 31, 0x519A3Cu);
    ctx->pc = 0x519A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519A34u;
            // 0x519a38: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A3Cu; }
        if (ctx->pc != 0x519A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A3Cu; }
        if (ctx->pc != 0x519A3Cu) { return; }
    }
    ctx->pc = 0x519A3Cu;
label_519a3c:
    // 0x519a3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519a40:
    // 0x519a40: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x519a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519a44:
    // 0x519a44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x519a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_519a48:
    // 0x519a48: 0xc0a7a88  jal         func_29EA20
label_519a4c:
    if (ctx->pc == 0x519A4Cu) {
        ctx->pc = 0x519A4Cu;
            // 0x519a4c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x519A50u;
        goto label_519a50;
    }
    ctx->pc = 0x519A48u;
    SET_GPR_U32(ctx, 31, 0x519A50u);
    ctx->pc = 0x519A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519A48u;
            // 0x519a4c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A50u; }
        if (ctx->pc != 0x519A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A50u; }
        if (ctx->pc != 0x519A50u) { return; }
    }
    ctx->pc = 0x519A50u;
label_519a50:
    // 0x519a50: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x519a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519a54:
    // 0x519a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519a58:
    // 0x519a58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_519a5c:
    if (ctx->pc == 0x519A5Cu) {
        ctx->pc = 0x519A5Cu;
            // 0x519a5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x519A60u;
        goto label_519a60;
    }
    ctx->pc = 0x519A58u;
    {
        const bool branch_taken_0x519a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x519A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519A58u;
            // 0x519a5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519a58) {
            ctx->pc = 0x519A70u;
            goto label_519a70;
        }
    }
    ctx->pc = 0x519A60u;
label_519a60:
    // 0x519a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x519a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519a64:
    // 0x519a64: 0xc082940  jal         func_20A500
label_519a68:
    if (ctx->pc == 0x519A68u) {
        ctx->pc = 0x519A68u;
            // 0x519a68: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x519A6Cu;
        goto label_519a6c;
    }
    ctx->pc = 0x519A64u;
    SET_GPR_U32(ctx, 31, 0x519A6Cu);
    ctx->pc = 0x519A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519A64u;
            // 0x519a68: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A6Cu; }
        if (ctx->pc != 0x519A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A6Cu; }
        if (ctx->pc != 0x519A6Cu) { return; }
    }
    ctx->pc = 0x519A6Cu;
label_519a6c:
    // 0x519a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519a70:
    // 0x519a70: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x519a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
label_519a74:
    // 0x519a74: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x519a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_519a78:
    // 0x519a78: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x519a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_519a7c:
    // 0x519a7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x519a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_519a80:
    // 0x519a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x519a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519a84:
    // 0x519a84: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x519a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_519a88:
    // 0x519a88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x519a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519a8c:
    // 0x519a8c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x519a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_519a90:
    // 0x519a90: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x519a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_519a94:
    // 0x519a94: 0xc04ca18  jal         func_132860
label_519a98:
    if (ctx->pc == 0x519A98u) {
        ctx->pc = 0x519A98u;
            // 0x519a98: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x519A9Cu;
        goto label_519a9c;
    }
    ctx->pc = 0x519A94u;
    SET_GPR_U32(ctx, 31, 0x519A9Cu);
    ctx->pc = 0x519A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519A94u;
            // 0x519a98: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A9Cu; }
        if (ctx->pc != 0x519A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519A9Cu; }
        if (ctx->pc != 0x519A9Cu) { return; }
    }
    ctx->pc = 0x519A9Cu;
label_519a9c:
    // 0x519a9c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x519a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519aa0:
    // 0x519aa0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x519aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_519aa4:
    // 0x519aa4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x519aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_519aa8:
    // 0x519aa8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x519aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_519aac:
    // 0x519aac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x519aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_519ab0:
    // 0x519ab0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x519ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_519ab4:
    // 0x519ab4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x519ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519ab8:
    // 0x519ab8: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x519ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_519abc:
    // 0x519abc: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x519abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_519ac0:
    // 0x519ac0: 0xc0a3830  jal         func_28E0C0
label_519ac4:
    if (ctx->pc == 0x519AC4u) {
        ctx->pc = 0x519AC4u;
            // 0x519ac4: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x519AC8u;
        goto label_519ac8;
    }
    ctx->pc = 0x519AC0u;
    SET_GPR_U32(ctx, 31, 0x519AC8u);
    ctx->pc = 0x519AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519AC0u;
            // 0x519ac4: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519AC8u; }
        if (ctx->pc != 0x519AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519AC8u; }
        if (ctx->pc != 0x519AC8u) { return; }
    }
    ctx->pc = 0x519AC8u;
label_519ac8:
    // 0x519ac8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519acc:
    // 0x519acc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x519accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519ad0:
    // 0x519ad0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x519ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_519ad4:
    // 0x519ad4: 0xc0a7a88  jal         func_29EA20
label_519ad8:
    if (ctx->pc == 0x519AD8u) {
        ctx->pc = 0x519AD8u;
            // 0x519ad8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x519ADCu;
        goto label_519adc;
    }
    ctx->pc = 0x519AD4u;
    SET_GPR_U32(ctx, 31, 0x519ADCu);
    ctx->pc = 0x519AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519AD4u;
            // 0x519ad8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519ADCu; }
        if (ctx->pc != 0x519ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519ADCu; }
        if (ctx->pc != 0x519ADCu) { return; }
    }
    ctx->pc = 0x519ADCu;
label_519adc:
    // 0x519adc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x519adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519ae0:
    // 0x519ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519ae4:
    // 0x519ae4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_519ae8:
    if (ctx->pc == 0x519AE8u) {
        ctx->pc = 0x519AE8u;
            // 0x519ae8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x519AECu;
        goto label_519aec;
    }
    ctx->pc = 0x519AE4u;
    {
        const bool branch_taken_0x519ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x519AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519AE4u;
            // 0x519ae8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519ae4) {
            ctx->pc = 0x519AFCu;
            goto label_519afc;
        }
    }
    ctx->pc = 0x519AECu;
label_519aec:
    // 0x519aec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x519aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519af0:
    // 0x519af0: 0xc082940  jal         func_20A500
label_519af4:
    if (ctx->pc == 0x519AF4u) {
        ctx->pc = 0x519AF4u;
            // 0x519af4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x519AF8u;
        goto label_519af8;
    }
    ctx->pc = 0x519AF0u;
    SET_GPR_U32(ctx, 31, 0x519AF8u);
    ctx->pc = 0x519AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519AF0u;
            // 0x519af4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519AF8u; }
        if (ctx->pc != 0x519AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519AF8u; }
        if (ctx->pc != 0x519AF8u) { return; }
    }
    ctx->pc = 0x519AF8u;
label_519af8:
    // 0x519af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519afc:
    // 0x519afc: 0xae240098  sw          $a0, 0x98($s1)
    ctx->pc = 0x519afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 4));
label_519b00:
    // 0x519b00: 0x3c02c0d0  lui         $v0, 0xC0D0
    ctx->pc = 0x519b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49360 << 16));
label_519b04:
    // 0x519b04: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x519b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_519b08:
    // 0x519b08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x519b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_519b0c:
    // 0x519b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x519b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519b10:
    // 0x519b10: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x519b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_519b14:
    // 0x519b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x519b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519b18:
    // 0x519b18: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x519b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_519b1c:
    // 0x519b1c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x519b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_519b20:
    // 0x519b20: 0xc04ca18  jal         func_132860
label_519b24:
    if (ctx->pc == 0x519B24u) {
        ctx->pc = 0x519B24u;
            // 0x519b24: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x519B28u;
        goto label_519b28;
    }
    ctx->pc = 0x519B20u;
    SET_GPR_U32(ctx, 31, 0x519B28u);
    ctx->pc = 0x519B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519B20u;
            // 0x519b24: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B28u; }
        if (ctx->pc != 0x519B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B28u; }
        if (ctx->pc != 0x519B28u) { return; }
    }
    ctx->pc = 0x519B28u;
label_519b28:
    // 0x519b28: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x519b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519b2c:
    // 0x519b2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x519b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_519b30:
    // 0x519b30: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x519b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_519b34:
    // 0x519b34: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x519b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_519b38:
    // 0x519b38: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x519b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_519b3c:
    // 0x519b3c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x519b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_519b40:
    // 0x519b40: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x519b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_519b44:
    // 0x519b44: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x519b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_519b48:
    // 0x519b48: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x519b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_519b4c:
    // 0x519b4c: 0xc0a3830  jal         func_28E0C0
label_519b50:
    if (ctx->pc == 0x519B50u) {
        ctx->pc = 0x519B50u;
            // 0x519b50: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x519B54u;
        goto label_519b54;
    }
    ctx->pc = 0x519B4Cu;
    SET_GPR_U32(ctx, 31, 0x519B54u);
    ctx->pc = 0x519B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519B4Cu;
            // 0x519b50: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B54u; }
        if (ctx->pc != 0x519B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B54u; }
        if (ctx->pc != 0x519B54u) { return; }
    }
    ctx->pc = 0x519B54u;
label_519b54:
    // 0x519b54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519b58:
    // 0x519b58: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x519b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519b5c:
    // 0x519b5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x519b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_519b60:
    // 0x519b60: 0xc0a7a88  jal         func_29EA20
label_519b64:
    if (ctx->pc == 0x519B64u) {
        ctx->pc = 0x519B64u;
            // 0x519b64: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x519B68u;
        goto label_519b68;
    }
    ctx->pc = 0x519B60u;
    SET_GPR_U32(ctx, 31, 0x519B68u);
    ctx->pc = 0x519B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519B60u;
            // 0x519b64: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B68u; }
        if (ctx->pc != 0x519B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B68u; }
        if (ctx->pc != 0x519B68u) { return; }
    }
    ctx->pc = 0x519B68u;
label_519b68:
    // 0x519b68: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x519b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519b6c:
    // 0x519b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519b70:
    // 0x519b70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_519b74:
    if (ctx->pc == 0x519B74u) {
        ctx->pc = 0x519B74u;
            // 0x519b74: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x519B78u;
        goto label_519b78;
    }
    ctx->pc = 0x519B70u;
    {
        const bool branch_taken_0x519b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x519B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519B70u;
            // 0x519b74: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519b70) {
            ctx->pc = 0x519B88u;
            goto label_519b88;
        }
    }
    ctx->pc = 0x519B78u;
label_519b78:
    // 0x519b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x519b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519b7c:
    // 0x519b7c: 0xc082940  jal         func_20A500
label_519b80:
    if (ctx->pc == 0x519B80u) {
        ctx->pc = 0x519B80u;
            // 0x519b80: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x519B84u;
        goto label_519b84;
    }
    ctx->pc = 0x519B7Cu;
    SET_GPR_U32(ctx, 31, 0x519B84u);
    ctx->pc = 0x519B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519B7Cu;
            // 0x519b80: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B84u; }
        if (ctx->pc != 0x519B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519B84u; }
        if (ctx->pc != 0x519B84u) { return; }
    }
    ctx->pc = 0x519B84u;
label_519b84:
    // 0x519b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519b88:
    // 0x519b88: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x519b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
label_519b8c:
    // 0x519b8c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x519b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_519b90:
    // 0x519b90: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519b94:
    // 0x519b94: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x519b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_519b98:
    // 0x519b98: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x519b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_519b9c:
    // 0x519b9c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_519ba0:
    if (ctx->pc == 0x519BA0u) {
        ctx->pc = 0x519BA0u;
            // 0x519ba0: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x519BA4u;
        goto label_519ba4;
    }
    ctx->pc = 0x519B9Cu;
    {
        const bool branch_taken_0x519b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x519b9c) {
            ctx->pc = 0x519BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519B9Cu;
            // 0x519ba0: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519BB4u;
            goto label_519bb4;
        }
    }
    ctx->pc = 0x519BA4u;
label_519ba4:
    // 0x519ba4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x519ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_519ba8:
    // 0x519ba8: 0xc0a728c  jal         func_29CA30
label_519bac:
    if (ctx->pc == 0x519BACu) {
        ctx->pc = 0x519BACu;
            // 0x519bac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x519BB0u;
        goto label_519bb0;
    }
    ctx->pc = 0x519BA8u;
    SET_GPR_U32(ctx, 31, 0x519BB0u);
    ctx->pc = 0x519BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519BA8u;
            // 0x519bac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519BB0u; }
        if (ctx->pc != 0x519BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519BB0u; }
        if (ctx->pc != 0x519BB0u) { return; }
    }
    ctx->pc = 0x519BB0u;
label_519bb0:
    // 0x519bb0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519bb4:
    // 0x519bb4: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x519bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_519bb8:
    // 0x519bb8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x519bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_519bbc:
    // 0x519bbc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x519bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_519bc0:
    // 0x519bc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x519bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_519bc4:
    // 0x519bc4: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x519bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_519bc8:
    // 0x519bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x519bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_519bcc:
    // 0x519bcc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x519bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_519bd0:
    // 0x519bd0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x519bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_519bd4:
    // 0x519bd4: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519bd8:
    // 0x519bd8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x519bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_519bdc:
    // 0x519bdc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x519bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_519be0:
    // 0x519be0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_519be4:
    if (ctx->pc == 0x519BE4u) {
        ctx->pc = 0x519BE4u;
            // 0x519be4: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x519BE8u;
        goto label_519be8;
    }
    ctx->pc = 0x519BE0u;
    {
        const bool branch_taken_0x519be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x519be0) {
            ctx->pc = 0x519BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519BE0u;
            // 0x519be4: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519BF8u;
            goto label_519bf8;
        }
    }
    ctx->pc = 0x519BE8u;
label_519be8:
    // 0x519be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x519be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_519bec:
    // 0x519bec: 0xc0a728c  jal         func_29CA30
label_519bf0:
    if (ctx->pc == 0x519BF0u) {
        ctx->pc = 0x519BF0u;
            // 0x519bf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x519BF4u;
        goto label_519bf4;
    }
    ctx->pc = 0x519BECu;
    SET_GPR_U32(ctx, 31, 0x519BF4u);
    ctx->pc = 0x519BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519BECu;
            // 0x519bf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519BF4u; }
        if (ctx->pc != 0x519BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519BF4u; }
        if (ctx->pc != 0x519BF4u) { return; }
    }
    ctx->pc = 0x519BF4u;
label_519bf4:
    // 0x519bf4: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519bf8:
    // 0x519bf8: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x519bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_519bfc:
    // 0x519bfc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x519bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_519c00:
    // 0x519c00: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x519c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_519c04:
    // 0x519c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x519c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_519c08:
    // 0x519c08: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x519c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_519c0c:
    // 0x519c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x519c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_519c10:
    // 0x519c10: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x519c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_519c14:
    // 0x519c14: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x519c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_519c18:
    // 0x519c18: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519c1c:
    // 0x519c1c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x519c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_519c20:
    // 0x519c20: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x519c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_519c24:
    // 0x519c24: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_519c28:
    if (ctx->pc == 0x519C28u) {
        ctx->pc = 0x519C28u;
            // 0x519c28: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x519C2Cu;
        goto label_519c2c;
    }
    ctx->pc = 0x519C24u;
    {
        const bool branch_taken_0x519c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x519c24) {
            ctx->pc = 0x519C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519C24u;
            // 0x519c28: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519C3Cu;
            goto label_519c3c;
        }
    }
    ctx->pc = 0x519C2Cu;
label_519c2c:
    // 0x519c2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x519c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_519c30:
    // 0x519c30: 0xc0a728c  jal         func_29CA30
label_519c34:
    if (ctx->pc == 0x519C34u) {
        ctx->pc = 0x519C34u;
            // 0x519c34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x519C38u;
        goto label_519c38;
    }
    ctx->pc = 0x519C30u;
    SET_GPR_U32(ctx, 31, 0x519C38u);
    ctx->pc = 0x519C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519C30u;
            // 0x519c34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519C38u; }
        if (ctx->pc != 0x519C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519C38u; }
        if (ctx->pc != 0x519C38u) { return; }
    }
    ctx->pc = 0x519C38u;
label_519c38:
    // 0x519c38: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519c3c:
    // 0x519c3c: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x519c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_519c40:
    // 0x519c40: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x519c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_519c44:
    // 0x519c44: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x519c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_519c48:
    // 0x519c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x519c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_519c4c:
    // 0x519c4c: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x519c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_519c50:
    // 0x519c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x519c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_519c54:
    // 0x519c54: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x519c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_519c58:
    // 0x519c58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x519c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_519c5c:
    // 0x519c5c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519c60:
    // 0x519c60: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x519c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_519c64:
    // 0x519c64: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x519c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_519c68:
    // 0x519c68: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_519c6c:
    if (ctx->pc == 0x519C6Cu) {
        ctx->pc = 0x519C6Cu;
            // 0x519c6c: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x519C70u;
        goto label_519c70;
    }
    ctx->pc = 0x519C68u;
    {
        const bool branch_taken_0x519c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x519c68) {
            ctx->pc = 0x519C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519C68u;
            // 0x519c6c: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519C80u;
            goto label_519c80;
        }
    }
    ctx->pc = 0x519C70u;
label_519c70:
    // 0x519c70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x519c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_519c74:
    // 0x519c74: 0xc0a728c  jal         func_29CA30
label_519c78:
    if (ctx->pc == 0x519C78u) {
        ctx->pc = 0x519C78u;
            // 0x519c78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x519C7Cu;
        goto label_519c7c;
    }
    ctx->pc = 0x519C74u;
    SET_GPR_U32(ctx, 31, 0x519C7Cu);
    ctx->pc = 0x519C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519C74u;
            // 0x519c78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519C7Cu; }
        if (ctx->pc != 0x519C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519C7Cu; }
        if (ctx->pc != 0x519C7Cu) { return; }
    }
    ctx->pc = 0x519C7Cu;
label_519c7c:
    // 0x519c7c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x519c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519c80:
    // 0x519c80: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x519c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_519c84:
    // 0x519c84: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x519c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_519c88:
    // 0x519c88: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x519c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_519c8c:
    // 0x519c8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x519c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_519c90:
    // 0x519c90: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x519c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_519c94:
    // 0x519c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x519c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_519c98:
    // 0x519c98: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x519c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_519c9c:
    // 0x519c9c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x519c9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_519ca0:
    // 0x519ca0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_519ca4:
    if (ctx->pc == 0x519CA4u) {
        ctx->pc = 0x519CA8u;
        goto label_519ca8;
    }
    ctx->pc = 0x519CA0u;
    {
        const bool branch_taken_0x519ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x519ca0) {
            ctx->pc = 0x519CE0u;
            goto label_519ce0;
        }
    }
    ctx->pc = 0x519CA8u;
label_519ca8:
    // 0x519ca8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x519ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_519cac:
    // 0x519cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x519cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_519cb0:
    // 0x519cb0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x519cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_519cb4:
    // 0x519cb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x519cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_519cb8:
    // 0x519cb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x519cb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_519cbc:
    // 0x519cbc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_519cc0:
    if (ctx->pc == 0x519CC0u) {
        ctx->pc = 0x519CC4u;
        goto label_519cc4;
    }
    ctx->pc = 0x519CBCu;
    {
        const bool branch_taken_0x519cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x519cbc) {
            ctx->pc = 0x519CE0u;
            goto label_519ce0;
        }
    }
    ctx->pc = 0x519CC4u;
label_519cc4:
    // 0x519cc4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_519cc8:
    if (ctx->pc == 0x519CC8u) {
        ctx->pc = 0x519CCCu;
        goto label_519ccc;
    }
    ctx->pc = 0x519CC4u;
    {
        const bool branch_taken_0x519cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x519cc4) {
            ctx->pc = 0x519CE0u;
            goto label_519ce0;
        }
    }
    ctx->pc = 0x519CCCu;
label_519ccc:
    // 0x519ccc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x519cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_519cd0:
    // 0x519cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x519cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519cd4:
    // 0x519cd4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x519cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_519cd8:
    // 0x519cd8: 0x320f809  jalr        $t9
label_519cdc:
    if (ctx->pc == 0x519CDCu) {
        ctx->pc = 0x519CDCu;
            // 0x519cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x519CE0u;
        goto label_519ce0;
    }
    ctx->pc = 0x519CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519CE0u);
        ctx->pc = 0x519CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519CD8u;
            // 0x519cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x519CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519CE0u; }
            if (ctx->pc != 0x519CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x519CE0u;
label_519ce0:
    // 0x519ce0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519ce4:
    // 0x519ce4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x519ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519ce8:
    // 0x519ce8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x519ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_519cec:
    // 0x519cec: 0xc0a7a88  jal         func_29EA20
label_519cf0:
    if (ctx->pc == 0x519CF0u) {
        ctx->pc = 0x519CF0u;
            // 0x519cf0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x519CF4u;
        goto label_519cf4;
    }
    ctx->pc = 0x519CECu;
    SET_GPR_U32(ctx, 31, 0x519CF4u);
    ctx->pc = 0x519CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519CECu;
            // 0x519cf0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519CF4u; }
        if (ctx->pc != 0x519CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519CF4u; }
        if (ctx->pc != 0x519CF4u) { return; }
    }
    ctx->pc = 0x519CF4u;
label_519cf4:
    // 0x519cf4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x519cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_519cf8:
    // 0x519cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519cfc:
    // 0x519cfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_519d00:
    if (ctx->pc == 0x519D00u) {
        ctx->pc = 0x519D00u;
            // 0x519d00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x519D04u;
        goto label_519d04;
    }
    ctx->pc = 0x519CFCu;
    {
        const bool branch_taken_0x519cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x519D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519CFCu;
            // 0x519d00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519cfc) {
            ctx->pc = 0x519D14u;
            goto label_519d14;
        }
    }
    ctx->pc = 0x519D04u;
label_519d04:
    // 0x519d04: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x519d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_519d08:
    // 0x519d08: 0xc081c54  jal         func_207150
label_519d0c:
    if (ctx->pc == 0x519D0Cu) {
        ctx->pc = 0x519D0Cu;
            // 0x519d0c: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x519D10u;
        goto label_519d10;
    }
    ctx->pc = 0x519D08u;
    SET_GPR_U32(ctx, 31, 0x519D10u);
    ctx->pc = 0x519D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519D08u;
            // 0x519d0c: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519D10u; }
        if (ctx->pc != 0x519D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519D10u; }
        if (ctx->pc != 0x519D10u) { return; }
    }
    ctx->pc = 0x519D10u;
label_519d10:
    // 0x519d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519d14:
    // 0x519d14: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x519d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_519d18:
    // 0x519d18: 0xc0b61c4  jal         func_2D8710
label_519d1c:
    if (ctx->pc == 0x519D1Cu) {
        ctx->pc = 0x519D1Cu;
            // 0x519d1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x519D20u;
        goto label_519d20;
    }
    ctx->pc = 0x519D18u;
    SET_GPR_U32(ctx, 31, 0x519D20u);
    ctx->pc = 0x519D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519D18u;
            // 0x519d1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519D20u; }
        if (ctx->pc != 0x519D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519D20u; }
        if (ctx->pc != 0x519D20u) { return; }
    }
    ctx->pc = 0x519D20u;
label_519d20:
    // 0x519d20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x519d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_519d24:
    // 0x519d24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x519d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_519d28:
    // 0x519d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x519d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_519d2c:
    // 0x519d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_519d30:
    // 0x519d30: 0x3e00008  jr          $ra
label_519d34:
    if (ctx->pc == 0x519D34u) {
        ctx->pc = 0x519D34u;
            // 0x519d34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x519D38u;
        goto label_519d38;
    }
    ctx->pc = 0x519D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519D30u;
            // 0x519d34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519D38u;
label_519d38:
    // 0x519d38: 0x0  nop
    ctx->pc = 0x519d38u;
    // NOP
label_519d3c:
    // 0x519d3c: 0x0  nop
    ctx->pc = 0x519d3cu;
    // NOP
label_519d40:
    // 0x519d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x519d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_519d44:
    // 0x519d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x519d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_519d48:
    // 0x519d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_519d4c:
    // 0x519d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x519d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519d50:
    // 0x519d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x519d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_519d54:
    // 0x519d54: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_519d58:
    if (ctx->pc == 0x519D58u) {
        ctx->pc = 0x519D58u;
            // 0x519d58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519D5Cu;
        goto label_519d5c;
    }
    ctx->pc = 0x519D54u;
    {
        const bool branch_taken_0x519d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x519D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519D54u;
            // 0x519d58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519d54) {
            ctx->pc = 0x519DF4u;
            goto label_519df4;
        }
    }
    ctx->pc = 0x519D5Cu;
label_519d5c:
    // 0x519d5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x519d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519d60:
    // 0x519d60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519d64:
    // 0x519d64: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x519d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
label_519d68:
    // 0x519d68: 0x24425828  addiu       $v0, $v0, 0x5828
    ctx->pc = 0x519d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22568));
label_519d6c:
    // 0x519d6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x519d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_519d70:
    // 0x519d70: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_519d74:
    if (ctx->pc == 0x519D74u) {
        ctx->pc = 0x519D74u;
            // 0x519d74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x519D78u;
        goto label_519d78;
    }
    ctx->pc = 0x519D70u;
    {
        const bool branch_taken_0x519d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x519D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519D70u;
            // 0x519d74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519d70) {
            ctx->pc = 0x519DDCu;
            goto label_519ddc;
        }
    }
    ctx->pc = 0x519D78u;
label_519d78:
    // 0x519d78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x519d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519d7c:
    // 0x519d7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519d80:
    // 0x519d80: 0x246357a0  addiu       $v1, $v1, 0x57A0
    ctx->pc = 0x519d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
label_519d84:
    // 0x519d84: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x519d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_519d88:
    // 0x519d88: 0x244257d8  addiu       $v0, $v0, 0x57D8
    ctx->pc = 0x519d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22488));
label_519d8c:
    // 0x519d8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x519d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_519d90:
    // 0x519d90: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x519d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_519d94:
    // 0x519d94: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x519d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_519d98:
    // 0x519d98: 0xc0407c0  jal         func_101F00
label_519d9c:
    if (ctx->pc == 0x519D9Cu) {
        ctx->pc = 0x519D9Cu;
            // 0x519d9c: 0x24a59460  addiu       $a1, $a1, -0x6BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
        ctx->pc = 0x519DA0u;
        goto label_519da0;
    }
    ctx->pc = 0x519D98u;
    SET_GPR_U32(ctx, 31, 0x519DA0u);
    ctx->pc = 0x519D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519D98u;
            // 0x519d9c: 0x24a59460  addiu       $a1, $a1, -0x6BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DA0u; }
        if (ctx->pc != 0x519DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DA0u; }
        if (ctx->pc != 0x519DA0u) { return; }
    }
    ctx->pc = 0x519DA0u;
label_519da0:
    // 0x519da0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x519da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_519da4:
    // 0x519da4: 0xc0a8cf8  jal         func_2A33E0
label_519da8:
    if (ctx->pc == 0x519DA8u) {
        ctx->pc = 0x519DA8u;
            // 0x519da8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x519DACu;
        goto label_519dac;
    }
    ctx->pc = 0x519DA4u;
    SET_GPR_U32(ctx, 31, 0x519DACu);
    ctx->pc = 0x519DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519DA4u;
            // 0x519da8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DACu; }
        if (ctx->pc != 0x519DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DACu; }
        if (ctx->pc != 0x519DACu) { return; }
    }
    ctx->pc = 0x519DACu;
label_519dac:
    // 0x519dac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x519dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_519db0:
    // 0x519db0: 0xc14679c  jal         func_519E70
label_519db4:
    if (ctx->pc == 0x519DB4u) {
        ctx->pc = 0x519DB4u;
            // 0x519db4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x519DB8u;
        goto label_519db8;
    }
    ctx->pc = 0x519DB0u;
    SET_GPR_U32(ctx, 31, 0x519DB8u);
    ctx->pc = 0x519DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519DB0u;
            // 0x519db4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519E70u;
    if (runtime->hasFunction(0x519E70u)) {
        auto targetFn = runtime->lookupFunction(0x519E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DB8u; }
        if (ctx->pc != 0x519DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519E70_0x519e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DB8u; }
        if (ctx->pc != 0x519DB8u) { return; }
    }
    ctx->pc = 0x519DB8u;
label_519db8:
    // 0x519db8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x519db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_519dbc:
    // 0x519dbc: 0xc14679c  jal         func_519E70
label_519dc0:
    if (ctx->pc == 0x519DC0u) {
        ctx->pc = 0x519DC0u;
            // 0x519dc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x519DC4u;
        goto label_519dc4;
    }
    ctx->pc = 0x519DBCu;
    SET_GPR_U32(ctx, 31, 0x519DC4u);
    ctx->pc = 0x519DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519DBCu;
            // 0x519dc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519E70u;
    if (runtime->hasFunction(0x519E70u)) {
        auto targetFn = runtime->lookupFunction(0x519E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DC4u; }
        if (ctx->pc != 0x519DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519E70_0x519e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DC4u; }
        if (ctx->pc != 0x519DC4u) { return; }
    }
    ctx->pc = 0x519DC4u;
label_519dc4:
    // 0x519dc4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x519dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_519dc8:
    // 0x519dc8: 0xc146784  jal         func_519E10
label_519dcc:
    if (ctx->pc == 0x519DCCu) {
        ctx->pc = 0x519DCCu;
            // 0x519dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519DD0u;
        goto label_519dd0;
    }
    ctx->pc = 0x519DC8u;
    SET_GPR_U32(ctx, 31, 0x519DD0u);
    ctx->pc = 0x519DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519DC8u;
            // 0x519dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519E10u;
    if (runtime->hasFunction(0x519E10u)) {
        auto targetFn = runtime->lookupFunction(0x519E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DD0u; }
        if (ctx->pc != 0x519DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519E10_0x519e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DD0u; }
        if (ctx->pc != 0x519DD0u) { return; }
    }
    ctx->pc = 0x519DD0u;
label_519dd0:
    // 0x519dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x519dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519dd4:
    // 0x519dd4: 0xc0ae1c0  jal         func_2B8700
label_519dd8:
    if (ctx->pc == 0x519DD8u) {
        ctx->pc = 0x519DD8u;
            // 0x519dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519DDCu;
        goto label_519ddc;
    }
    ctx->pc = 0x519DD4u;
    SET_GPR_U32(ctx, 31, 0x519DDCu);
    ctx->pc = 0x519DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519DD4u;
            // 0x519dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DDCu; }
        if (ctx->pc != 0x519DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DDCu; }
        if (ctx->pc != 0x519DDCu) { return; }
    }
    ctx->pc = 0x519DDCu;
label_519ddc:
    // 0x519ddc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x519ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_519de0:
    // 0x519de0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x519de0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_519de4:
    // 0x519de4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_519de8:
    if (ctx->pc == 0x519DE8u) {
        ctx->pc = 0x519DE8u;
            // 0x519de8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519DECu;
        goto label_519dec;
    }
    ctx->pc = 0x519DE4u;
    {
        const bool branch_taken_0x519de4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x519de4) {
            ctx->pc = 0x519DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519DE4u;
            // 0x519de8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519DF8u;
            goto label_519df8;
        }
    }
    ctx->pc = 0x519DECu;
label_519dec:
    // 0x519dec: 0xc0400a8  jal         func_1002A0
label_519df0:
    if (ctx->pc == 0x519DF0u) {
        ctx->pc = 0x519DF0u;
            // 0x519df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519DF4u;
        goto label_519df4;
    }
    ctx->pc = 0x519DECu;
    SET_GPR_U32(ctx, 31, 0x519DF4u);
    ctx->pc = 0x519DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519DECu;
            // 0x519df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DF4u; }
        if (ctx->pc != 0x519DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519DF4u; }
        if (ctx->pc != 0x519DF4u) { return; }
    }
    ctx->pc = 0x519DF4u;
label_519df4:
    // 0x519df4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x519df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519df8:
    // 0x519df8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x519df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_519dfc:
    // 0x519dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x519dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_519e00:
    // 0x519e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_519e04:
    // 0x519e04: 0x3e00008  jr          $ra
label_519e08:
    if (ctx->pc == 0x519E08u) {
        ctx->pc = 0x519E08u;
            // 0x519e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x519E0Cu;
        goto label_519e0c;
    }
    ctx->pc = 0x519E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519E04u;
            // 0x519e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519E0Cu;
label_519e0c:
    // 0x519e0c: 0x0  nop
    ctx->pc = 0x519e0cu;
    // NOP
}
