#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004038E0
// Address: 0x4038e0 - 0x403e50
void sub_004038E0_0x4038e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004038E0_0x4038e0");
#endif

    switch (ctx->pc) {
        case 0x4038e0u: goto label_4038e0;
        case 0x4038e4u: goto label_4038e4;
        case 0x4038e8u: goto label_4038e8;
        case 0x4038ecu: goto label_4038ec;
        case 0x4038f0u: goto label_4038f0;
        case 0x4038f4u: goto label_4038f4;
        case 0x4038f8u: goto label_4038f8;
        case 0x4038fcu: goto label_4038fc;
        case 0x403900u: goto label_403900;
        case 0x403904u: goto label_403904;
        case 0x403908u: goto label_403908;
        case 0x40390cu: goto label_40390c;
        case 0x403910u: goto label_403910;
        case 0x403914u: goto label_403914;
        case 0x403918u: goto label_403918;
        case 0x40391cu: goto label_40391c;
        case 0x403920u: goto label_403920;
        case 0x403924u: goto label_403924;
        case 0x403928u: goto label_403928;
        case 0x40392cu: goto label_40392c;
        case 0x403930u: goto label_403930;
        case 0x403934u: goto label_403934;
        case 0x403938u: goto label_403938;
        case 0x40393cu: goto label_40393c;
        case 0x403940u: goto label_403940;
        case 0x403944u: goto label_403944;
        case 0x403948u: goto label_403948;
        case 0x40394cu: goto label_40394c;
        case 0x403950u: goto label_403950;
        case 0x403954u: goto label_403954;
        case 0x403958u: goto label_403958;
        case 0x40395cu: goto label_40395c;
        case 0x403960u: goto label_403960;
        case 0x403964u: goto label_403964;
        case 0x403968u: goto label_403968;
        case 0x40396cu: goto label_40396c;
        case 0x403970u: goto label_403970;
        case 0x403974u: goto label_403974;
        case 0x403978u: goto label_403978;
        case 0x40397cu: goto label_40397c;
        case 0x403980u: goto label_403980;
        case 0x403984u: goto label_403984;
        case 0x403988u: goto label_403988;
        case 0x40398cu: goto label_40398c;
        case 0x403990u: goto label_403990;
        case 0x403994u: goto label_403994;
        case 0x403998u: goto label_403998;
        case 0x40399cu: goto label_40399c;
        case 0x4039a0u: goto label_4039a0;
        case 0x4039a4u: goto label_4039a4;
        case 0x4039a8u: goto label_4039a8;
        case 0x4039acu: goto label_4039ac;
        case 0x4039b0u: goto label_4039b0;
        case 0x4039b4u: goto label_4039b4;
        case 0x4039b8u: goto label_4039b8;
        case 0x4039bcu: goto label_4039bc;
        case 0x4039c0u: goto label_4039c0;
        case 0x4039c4u: goto label_4039c4;
        case 0x4039c8u: goto label_4039c8;
        case 0x4039ccu: goto label_4039cc;
        case 0x4039d0u: goto label_4039d0;
        case 0x4039d4u: goto label_4039d4;
        case 0x4039d8u: goto label_4039d8;
        case 0x4039dcu: goto label_4039dc;
        case 0x4039e0u: goto label_4039e0;
        case 0x4039e4u: goto label_4039e4;
        case 0x4039e8u: goto label_4039e8;
        case 0x4039ecu: goto label_4039ec;
        case 0x4039f0u: goto label_4039f0;
        case 0x4039f4u: goto label_4039f4;
        case 0x4039f8u: goto label_4039f8;
        case 0x4039fcu: goto label_4039fc;
        case 0x403a00u: goto label_403a00;
        case 0x403a04u: goto label_403a04;
        case 0x403a08u: goto label_403a08;
        case 0x403a0cu: goto label_403a0c;
        case 0x403a10u: goto label_403a10;
        case 0x403a14u: goto label_403a14;
        case 0x403a18u: goto label_403a18;
        case 0x403a1cu: goto label_403a1c;
        case 0x403a20u: goto label_403a20;
        case 0x403a24u: goto label_403a24;
        case 0x403a28u: goto label_403a28;
        case 0x403a2cu: goto label_403a2c;
        case 0x403a30u: goto label_403a30;
        case 0x403a34u: goto label_403a34;
        case 0x403a38u: goto label_403a38;
        case 0x403a3cu: goto label_403a3c;
        case 0x403a40u: goto label_403a40;
        case 0x403a44u: goto label_403a44;
        case 0x403a48u: goto label_403a48;
        case 0x403a4cu: goto label_403a4c;
        case 0x403a50u: goto label_403a50;
        case 0x403a54u: goto label_403a54;
        case 0x403a58u: goto label_403a58;
        case 0x403a5cu: goto label_403a5c;
        case 0x403a60u: goto label_403a60;
        case 0x403a64u: goto label_403a64;
        case 0x403a68u: goto label_403a68;
        case 0x403a6cu: goto label_403a6c;
        case 0x403a70u: goto label_403a70;
        case 0x403a74u: goto label_403a74;
        case 0x403a78u: goto label_403a78;
        case 0x403a7cu: goto label_403a7c;
        case 0x403a80u: goto label_403a80;
        case 0x403a84u: goto label_403a84;
        case 0x403a88u: goto label_403a88;
        case 0x403a8cu: goto label_403a8c;
        case 0x403a90u: goto label_403a90;
        case 0x403a94u: goto label_403a94;
        case 0x403a98u: goto label_403a98;
        case 0x403a9cu: goto label_403a9c;
        case 0x403aa0u: goto label_403aa0;
        case 0x403aa4u: goto label_403aa4;
        case 0x403aa8u: goto label_403aa8;
        case 0x403aacu: goto label_403aac;
        case 0x403ab0u: goto label_403ab0;
        case 0x403ab4u: goto label_403ab4;
        case 0x403ab8u: goto label_403ab8;
        case 0x403abcu: goto label_403abc;
        case 0x403ac0u: goto label_403ac0;
        case 0x403ac4u: goto label_403ac4;
        case 0x403ac8u: goto label_403ac8;
        case 0x403accu: goto label_403acc;
        case 0x403ad0u: goto label_403ad0;
        case 0x403ad4u: goto label_403ad4;
        case 0x403ad8u: goto label_403ad8;
        case 0x403adcu: goto label_403adc;
        case 0x403ae0u: goto label_403ae0;
        case 0x403ae4u: goto label_403ae4;
        case 0x403ae8u: goto label_403ae8;
        case 0x403aecu: goto label_403aec;
        case 0x403af0u: goto label_403af0;
        case 0x403af4u: goto label_403af4;
        case 0x403af8u: goto label_403af8;
        case 0x403afcu: goto label_403afc;
        case 0x403b00u: goto label_403b00;
        case 0x403b04u: goto label_403b04;
        case 0x403b08u: goto label_403b08;
        case 0x403b0cu: goto label_403b0c;
        case 0x403b10u: goto label_403b10;
        case 0x403b14u: goto label_403b14;
        case 0x403b18u: goto label_403b18;
        case 0x403b1cu: goto label_403b1c;
        case 0x403b20u: goto label_403b20;
        case 0x403b24u: goto label_403b24;
        case 0x403b28u: goto label_403b28;
        case 0x403b2cu: goto label_403b2c;
        case 0x403b30u: goto label_403b30;
        case 0x403b34u: goto label_403b34;
        case 0x403b38u: goto label_403b38;
        case 0x403b3cu: goto label_403b3c;
        case 0x403b40u: goto label_403b40;
        case 0x403b44u: goto label_403b44;
        case 0x403b48u: goto label_403b48;
        case 0x403b4cu: goto label_403b4c;
        case 0x403b50u: goto label_403b50;
        case 0x403b54u: goto label_403b54;
        case 0x403b58u: goto label_403b58;
        case 0x403b5cu: goto label_403b5c;
        case 0x403b60u: goto label_403b60;
        case 0x403b64u: goto label_403b64;
        case 0x403b68u: goto label_403b68;
        case 0x403b6cu: goto label_403b6c;
        case 0x403b70u: goto label_403b70;
        case 0x403b74u: goto label_403b74;
        case 0x403b78u: goto label_403b78;
        case 0x403b7cu: goto label_403b7c;
        case 0x403b80u: goto label_403b80;
        case 0x403b84u: goto label_403b84;
        case 0x403b88u: goto label_403b88;
        case 0x403b8cu: goto label_403b8c;
        case 0x403b90u: goto label_403b90;
        case 0x403b94u: goto label_403b94;
        case 0x403b98u: goto label_403b98;
        case 0x403b9cu: goto label_403b9c;
        case 0x403ba0u: goto label_403ba0;
        case 0x403ba4u: goto label_403ba4;
        case 0x403ba8u: goto label_403ba8;
        case 0x403bacu: goto label_403bac;
        case 0x403bb0u: goto label_403bb0;
        case 0x403bb4u: goto label_403bb4;
        case 0x403bb8u: goto label_403bb8;
        case 0x403bbcu: goto label_403bbc;
        case 0x403bc0u: goto label_403bc0;
        case 0x403bc4u: goto label_403bc4;
        case 0x403bc8u: goto label_403bc8;
        case 0x403bccu: goto label_403bcc;
        case 0x403bd0u: goto label_403bd0;
        case 0x403bd4u: goto label_403bd4;
        case 0x403bd8u: goto label_403bd8;
        case 0x403bdcu: goto label_403bdc;
        case 0x403be0u: goto label_403be0;
        case 0x403be4u: goto label_403be4;
        case 0x403be8u: goto label_403be8;
        case 0x403becu: goto label_403bec;
        case 0x403bf0u: goto label_403bf0;
        case 0x403bf4u: goto label_403bf4;
        case 0x403bf8u: goto label_403bf8;
        case 0x403bfcu: goto label_403bfc;
        case 0x403c00u: goto label_403c00;
        case 0x403c04u: goto label_403c04;
        case 0x403c08u: goto label_403c08;
        case 0x403c0cu: goto label_403c0c;
        case 0x403c10u: goto label_403c10;
        case 0x403c14u: goto label_403c14;
        case 0x403c18u: goto label_403c18;
        case 0x403c1cu: goto label_403c1c;
        case 0x403c20u: goto label_403c20;
        case 0x403c24u: goto label_403c24;
        case 0x403c28u: goto label_403c28;
        case 0x403c2cu: goto label_403c2c;
        case 0x403c30u: goto label_403c30;
        case 0x403c34u: goto label_403c34;
        case 0x403c38u: goto label_403c38;
        case 0x403c3cu: goto label_403c3c;
        case 0x403c40u: goto label_403c40;
        case 0x403c44u: goto label_403c44;
        case 0x403c48u: goto label_403c48;
        case 0x403c4cu: goto label_403c4c;
        case 0x403c50u: goto label_403c50;
        case 0x403c54u: goto label_403c54;
        case 0x403c58u: goto label_403c58;
        case 0x403c5cu: goto label_403c5c;
        case 0x403c60u: goto label_403c60;
        case 0x403c64u: goto label_403c64;
        case 0x403c68u: goto label_403c68;
        case 0x403c6cu: goto label_403c6c;
        case 0x403c70u: goto label_403c70;
        case 0x403c74u: goto label_403c74;
        case 0x403c78u: goto label_403c78;
        case 0x403c7cu: goto label_403c7c;
        case 0x403c80u: goto label_403c80;
        case 0x403c84u: goto label_403c84;
        case 0x403c88u: goto label_403c88;
        case 0x403c8cu: goto label_403c8c;
        case 0x403c90u: goto label_403c90;
        case 0x403c94u: goto label_403c94;
        case 0x403c98u: goto label_403c98;
        case 0x403c9cu: goto label_403c9c;
        case 0x403ca0u: goto label_403ca0;
        case 0x403ca4u: goto label_403ca4;
        case 0x403ca8u: goto label_403ca8;
        case 0x403cacu: goto label_403cac;
        case 0x403cb0u: goto label_403cb0;
        case 0x403cb4u: goto label_403cb4;
        case 0x403cb8u: goto label_403cb8;
        case 0x403cbcu: goto label_403cbc;
        case 0x403cc0u: goto label_403cc0;
        case 0x403cc4u: goto label_403cc4;
        case 0x403cc8u: goto label_403cc8;
        case 0x403cccu: goto label_403ccc;
        case 0x403cd0u: goto label_403cd0;
        case 0x403cd4u: goto label_403cd4;
        case 0x403cd8u: goto label_403cd8;
        case 0x403cdcu: goto label_403cdc;
        case 0x403ce0u: goto label_403ce0;
        case 0x403ce4u: goto label_403ce4;
        case 0x403ce8u: goto label_403ce8;
        case 0x403cecu: goto label_403cec;
        case 0x403cf0u: goto label_403cf0;
        case 0x403cf4u: goto label_403cf4;
        case 0x403cf8u: goto label_403cf8;
        case 0x403cfcu: goto label_403cfc;
        case 0x403d00u: goto label_403d00;
        case 0x403d04u: goto label_403d04;
        case 0x403d08u: goto label_403d08;
        case 0x403d0cu: goto label_403d0c;
        case 0x403d10u: goto label_403d10;
        case 0x403d14u: goto label_403d14;
        case 0x403d18u: goto label_403d18;
        case 0x403d1cu: goto label_403d1c;
        case 0x403d20u: goto label_403d20;
        case 0x403d24u: goto label_403d24;
        case 0x403d28u: goto label_403d28;
        case 0x403d2cu: goto label_403d2c;
        case 0x403d30u: goto label_403d30;
        case 0x403d34u: goto label_403d34;
        case 0x403d38u: goto label_403d38;
        case 0x403d3cu: goto label_403d3c;
        case 0x403d40u: goto label_403d40;
        case 0x403d44u: goto label_403d44;
        case 0x403d48u: goto label_403d48;
        case 0x403d4cu: goto label_403d4c;
        case 0x403d50u: goto label_403d50;
        case 0x403d54u: goto label_403d54;
        case 0x403d58u: goto label_403d58;
        case 0x403d5cu: goto label_403d5c;
        case 0x403d60u: goto label_403d60;
        case 0x403d64u: goto label_403d64;
        case 0x403d68u: goto label_403d68;
        case 0x403d6cu: goto label_403d6c;
        case 0x403d70u: goto label_403d70;
        case 0x403d74u: goto label_403d74;
        case 0x403d78u: goto label_403d78;
        case 0x403d7cu: goto label_403d7c;
        case 0x403d80u: goto label_403d80;
        case 0x403d84u: goto label_403d84;
        case 0x403d88u: goto label_403d88;
        case 0x403d8cu: goto label_403d8c;
        case 0x403d90u: goto label_403d90;
        case 0x403d94u: goto label_403d94;
        case 0x403d98u: goto label_403d98;
        case 0x403d9cu: goto label_403d9c;
        case 0x403da0u: goto label_403da0;
        case 0x403da4u: goto label_403da4;
        case 0x403da8u: goto label_403da8;
        case 0x403dacu: goto label_403dac;
        case 0x403db0u: goto label_403db0;
        case 0x403db4u: goto label_403db4;
        case 0x403db8u: goto label_403db8;
        case 0x403dbcu: goto label_403dbc;
        case 0x403dc0u: goto label_403dc0;
        case 0x403dc4u: goto label_403dc4;
        case 0x403dc8u: goto label_403dc8;
        case 0x403dccu: goto label_403dcc;
        case 0x403dd0u: goto label_403dd0;
        case 0x403dd4u: goto label_403dd4;
        case 0x403dd8u: goto label_403dd8;
        case 0x403ddcu: goto label_403ddc;
        case 0x403de0u: goto label_403de0;
        case 0x403de4u: goto label_403de4;
        case 0x403de8u: goto label_403de8;
        case 0x403decu: goto label_403dec;
        case 0x403df0u: goto label_403df0;
        case 0x403df4u: goto label_403df4;
        case 0x403df8u: goto label_403df8;
        case 0x403dfcu: goto label_403dfc;
        case 0x403e00u: goto label_403e00;
        case 0x403e04u: goto label_403e04;
        case 0x403e08u: goto label_403e08;
        case 0x403e0cu: goto label_403e0c;
        case 0x403e10u: goto label_403e10;
        case 0x403e14u: goto label_403e14;
        case 0x403e18u: goto label_403e18;
        case 0x403e1cu: goto label_403e1c;
        case 0x403e20u: goto label_403e20;
        case 0x403e24u: goto label_403e24;
        case 0x403e28u: goto label_403e28;
        case 0x403e2cu: goto label_403e2c;
        case 0x403e30u: goto label_403e30;
        case 0x403e34u: goto label_403e34;
        case 0x403e38u: goto label_403e38;
        case 0x403e3cu: goto label_403e3c;
        case 0x403e40u: goto label_403e40;
        case 0x403e44u: goto label_403e44;
        case 0x403e48u: goto label_403e48;
        case 0x403e4cu: goto label_403e4c;
        default: break;
    }

    ctx->pc = 0x4038e0u;

label_4038e0:
    // 0x4038e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4038e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_4038e4:
    // 0x4038e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4038e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4038e8:
    // 0x4038e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4038e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4038ec:
    // 0x4038ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4038ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4038f0:
    // 0x4038f0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4038f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4038f4:
    // 0x4038f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4038f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4038f8:
    // 0x4038f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4038f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4038fc:
    // 0x4038fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4038fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_403900:
    // 0x403900: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x403900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_403904:
    // 0x403904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x403904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_403908:
    // 0x403908: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x403908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40390c:
    // 0x40390c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403910:
    // 0x403910: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x403910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_403914:
    // 0x403914: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x403914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_403918:
    // 0x403918: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_40391c:
    if (ctx->pc == 0x40391Cu) {
        ctx->pc = 0x40391Cu;
            // 0x40391c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x403920u;
        goto label_403920;
    }
    ctx->pc = 0x403918u;
    {
        const bool branch_taken_0x403918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403918u;
            // 0x40391c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x403918) {
            ctx->pc = 0x403B68u;
            goto label_403b68;
        }
    }
    ctx->pc = 0x403920u;
label_403920:
    // 0x403920: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x403920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_403924:
    // 0x403924: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x403924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_403928:
    // 0x403928: 0x50620090  beql        $v1, $v0, . + 4 + (0x90 << 2)
label_40392c:
    if (ctx->pc == 0x40392Cu) {
        ctx->pc = 0x40392Cu;
            // 0x40392c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403930u;
        goto label_403930;
    }
    ctx->pc = 0x403928u;
    {
        const bool branch_taken_0x403928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x403928) {
            ctx->pc = 0x40392Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403928u;
            // 0x40392c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403B6Cu;
            goto label_403b6c;
        }
    }
    ctx->pc = 0x403930u;
label_403930:
    // 0x403930: 0x8e620258  lw          $v0, 0x258($s3)
    ctx->pc = 0x403930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
label_403934:
    // 0x403934: 0x504a0003  beql        $v0, $t2, . + 4 + (0x3 << 2)
label_403938:
    if (ctx->pc == 0x403938u) {
        ctx->pc = 0x403938u;
            // 0x403938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40393Cu;
        goto label_40393c;
    }
    ctx->pc = 0x403934u;
    {
        const bool branch_taken_0x403934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x403934) {
            ctx->pc = 0x403938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403934u;
            // 0x403938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403944u;
            goto label_403944;
        }
    }
    ctx->pc = 0x40393Cu;
label_40393c:
    // 0x40393c: 0x10000092  b           . + 4 + (0x92 << 2)
label_403940:
    if (ctx->pc == 0x403940u) {
        ctx->pc = 0x403940u;
            // 0x403940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403944u;
        goto label_403944;
    }
    ctx->pc = 0x40393Cu;
    {
        const bool branch_taken_0x40393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40393Cu;
            // 0x403940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40393c) {
            ctx->pc = 0x403B88u;
            goto label_403b88;
        }
    }
    ctx->pc = 0x403944u;
label_403944:
    // 0x403944: 0xc04f278  jal         func_13C9E0
label_403948:
    if (ctx->pc == 0x403948u) {
        ctx->pc = 0x403948u;
            // 0x403948: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x40394Cu;
        goto label_40394c;
    }
    ctx->pc = 0x403944u;
    SET_GPR_U32(ctx, 31, 0x40394Cu);
    ctx->pc = 0x403948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403944u;
            // 0x403948: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40394Cu; }
        if (ctx->pc != 0x40394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40394Cu; }
        if (ctx->pc != 0x40394Cu) { return; }
    }
    ctx->pc = 0x40394Cu;
label_40394c:
    // 0x40394c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_403950:
    // 0x403950: 0xc04ce80  jal         func_133A00
label_403954:
    if (ctx->pc == 0x403954u) {
        ctx->pc = 0x403954u;
            // 0x403954: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x403958u;
        goto label_403958;
    }
    ctx->pc = 0x403950u;
    SET_GPR_U32(ctx, 31, 0x403958u);
    ctx->pc = 0x403954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403950u;
            // 0x403954: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403958u; }
        if (ctx->pc != 0x403958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403958u; }
        if (ctx->pc != 0x403958u) { return; }
    }
    ctx->pc = 0x403958u;
label_403958:
    // 0x403958: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x403958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_40395c:
    // 0x40395c: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x40395cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_403960:
    // 0x403960: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x403960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_403964:
    // 0x403964: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x403964u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_403968:
    // 0x403968: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40396c:
    // 0x40396c: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x40396cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_403970:
    // 0x403970: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x403970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_403974:
    // 0x403974: 0xc07698c  jal         func_1DA630
label_403978:
    if (ctx->pc == 0x403978u) {
        ctx->pc = 0x403978u;
            // 0x403978: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40397Cu;
        goto label_40397c;
    }
    ctx->pc = 0x403974u;
    SET_GPR_U32(ctx, 31, 0x40397Cu);
    ctx->pc = 0x403978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403974u;
            // 0x403978: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40397Cu; }
        if (ctx->pc != 0x40397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40397Cu; }
        if (ctx->pc != 0x40397Cu) { return; }
    }
    ctx->pc = 0x40397Cu;
label_40397c:
    // 0x40397c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_403980:
    // 0x403980: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_403984:
    if (ctx->pc == 0x403984u) {
        ctx->pc = 0x403988u;
        goto label_403988;
    }
    ctx->pc = 0x403980u;
    {
        const bool branch_taken_0x403980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x403980) {
            ctx->pc = 0x403990u;
            goto label_403990;
        }
    }
    ctx->pc = 0x403988u;
label_403988:
    // 0x403988: 0x10000033  b           . + 4 + (0x33 << 2)
label_40398c:
    if (ctx->pc == 0x40398Cu) {
        ctx->pc = 0x40398Cu;
            // 0x40398c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x403990u;
        goto label_403990;
    }
    ctx->pc = 0x403988u;
    {
        const bool branch_taken_0x403988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40398Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403988u;
            // 0x40398c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403988) {
            ctx->pc = 0x403A58u;
            goto label_403a58;
        }
    }
    ctx->pc = 0x403990u;
label_403990:
    // 0x403990: 0xc0576f4  jal         func_15DBD0
label_403994:
    if (ctx->pc == 0x403994u) {
        ctx->pc = 0x403998u;
        goto label_403998;
    }
    ctx->pc = 0x403990u;
    SET_GPR_U32(ctx, 31, 0x403998u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403998u; }
        if (ctx->pc != 0x403998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403998u; }
        if (ctx->pc != 0x403998u) { return; }
    }
    ctx->pc = 0x403998u;
label_403998:
    // 0x403998: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x403998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40399c:
    // 0x40399c: 0xc076984  jal         func_1DA610
label_4039a0:
    if (ctx->pc == 0x4039A0u) {
        ctx->pc = 0x4039A0u;
            // 0x4039a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4039A4u;
        goto label_4039a4;
    }
    ctx->pc = 0x40399Cu;
    SET_GPR_U32(ctx, 31, 0x4039A4u);
    ctx->pc = 0x4039A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40399Cu;
            // 0x4039a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4039A4u; }
        if (ctx->pc != 0x4039A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4039A4u; }
        if (ctx->pc != 0x4039A4u) { return; }
    }
    ctx->pc = 0x4039A4u;
label_4039a4:
    // 0x4039a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4039a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4039a8:
    // 0x4039a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4039a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4039ac:
    // 0x4039ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4039acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4039b0:
    // 0x4039b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4039b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4039b4:
    // 0x4039b4: 0xc442fbe0  lwc1        $f2, -0x420($v0)
    ctx->pc = 0x4039b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4039b8:
    // 0x4039b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4039b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4039bc:
    // 0x4039bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4039bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4039c0:
    // 0x4039c0: 0xc441fbe8  lwc1        $f1, -0x418($v0)
    ctx->pc = 0x4039c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4039c4:
    // 0x4039c4: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x4039c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_4039c8:
    // 0x4039c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4039c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4039cc:
    // 0x4039cc: 0xc440fbec  lwc1        $f0, -0x414($v0)
    ctx->pc = 0x4039ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4039d0:
    // 0x4039d0: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x4039d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4039d4:
    // 0x4039d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4039d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4039d8:
    // 0x4039d8: 0x8c42fbe4  lw          $v0, -0x41C($v0)
    ctx->pc = 0x4039d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966244)));
label_4039dc:
    // 0x4039dc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x4039dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_4039e0:
    // 0x4039e0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x4039e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_4039e4:
    // 0x4039e4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x4039e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4039e8:
    // 0x4039e8: 0xc04cca0  jal         func_133280
label_4039ec:
    if (ctx->pc == 0x4039ECu) {
        ctx->pc = 0x4039ECu;
            // 0x4039ec: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x4039F0u;
        goto label_4039f0;
    }
    ctx->pc = 0x4039E8u;
    SET_GPR_U32(ctx, 31, 0x4039F0u);
    ctx->pc = 0x4039ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4039E8u;
            // 0x4039ec: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4039F0u; }
        if (ctx->pc != 0x4039F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4039F0u; }
        if (ctx->pc != 0x4039F0u) { return; }
    }
    ctx->pc = 0x4039F0u;
label_4039f0:
    // 0x4039f0: 0xc076980  jal         func_1DA600
label_4039f4:
    if (ctx->pc == 0x4039F4u) {
        ctx->pc = 0x4039F4u;
            // 0x4039f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4039F8u;
        goto label_4039f8;
    }
    ctx->pc = 0x4039F0u;
    SET_GPR_U32(ctx, 31, 0x4039F8u);
    ctx->pc = 0x4039F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4039F0u;
            // 0x4039f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4039F8u; }
        if (ctx->pc != 0x4039F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4039F8u; }
        if (ctx->pc != 0x4039F8u) { return; }
    }
    ctx->pc = 0x4039F8u;
label_4039f8:
    // 0x4039f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4039f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4039fc:
    // 0x4039fc: 0xc04cc34  jal         func_1330D0
label_403a00:
    if (ctx->pc == 0x403A00u) {
        ctx->pc = 0x403A00u;
            // 0x403a00: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x403A04u;
        goto label_403a04;
    }
    ctx->pc = 0x4039FCu;
    SET_GPR_U32(ctx, 31, 0x403A04u);
    ctx->pc = 0x403A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4039FCu;
            // 0x403a00: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A04u; }
        if (ctx->pc != 0x403A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A04u; }
        if (ctx->pc != 0x403A04u) { return; }
    }
    ctx->pc = 0x403A04u;
label_403a04:
    // 0x403a04: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x403a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_403a08:
    // 0x403a08: 0xc441b988  lwc1        $f1, -0x4678($v0)
    ctx->pc = 0x403a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403a0c:
    // 0x403a0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x403a0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_403a10:
    // 0x403a10: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_403a14:
    if (ctx->pc == 0x403A14u) {
        ctx->pc = 0x403A14u;
            // 0x403a14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403A18u;
        goto label_403a18;
    }
    ctx->pc = 0x403A10u;
    {
        const bool branch_taken_0x403a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x403a10) {
            ctx->pc = 0x403A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403A10u;
            // 0x403a14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403A20u;
            goto label_403a20;
        }
    }
    ctx->pc = 0x403A18u;
label_403a18:
    // 0x403a18: 0x1000000f  b           . + 4 + (0xF << 2)
label_403a1c:
    if (ctx->pc == 0x403A1Cu) {
        ctx->pc = 0x403A1Cu;
            // 0x403a1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x403A20u;
        goto label_403a20;
    }
    ctx->pc = 0x403A18u;
    {
        const bool branch_taken_0x403a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403A18u;
            // 0x403a1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403a18) {
            ctx->pc = 0x403A58u;
            goto label_403a58;
        }
    }
    ctx->pc = 0x403A20u;
label_403a20:
    // 0x403a20: 0xc07697c  jal         func_1DA5F0
label_403a24:
    if (ctx->pc == 0x403A24u) {
        ctx->pc = 0x403A28u;
        goto label_403a28;
    }
    ctx->pc = 0x403A20u;
    SET_GPR_U32(ctx, 31, 0x403A28u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A28u; }
        if (ctx->pc != 0x403A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A28u; }
        if (ctx->pc != 0x403A28u) { return; }
    }
    ctx->pc = 0x403A28u;
label_403a28:
    // 0x403a28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x403a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403a2c:
    // 0x403a2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x403a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_403a30:
    // 0x403a30: 0xc04cd60  jal         func_133580
label_403a34:
    if (ctx->pc == 0x403A34u) {
        ctx->pc = 0x403A34u;
            // 0x403a34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403A38u;
        goto label_403a38;
    }
    ctx->pc = 0x403A30u;
    SET_GPR_U32(ctx, 31, 0x403A38u);
    ctx->pc = 0x403A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403A30u;
            // 0x403a34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A38u; }
        if (ctx->pc != 0x403A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A38u; }
        if (ctx->pc != 0x403A38u) { return; }
    }
    ctx->pc = 0x403A38u;
label_403a38:
    // 0x403a38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x403a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403a3c:
    // 0x403a3c: 0xc04c650  jal         func_131940
label_403a40:
    if (ctx->pc == 0x403A40u) {
        ctx->pc = 0x403A40u;
            // 0x403a40: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x403A44u;
        goto label_403a44;
    }
    ctx->pc = 0x403A3Cu;
    SET_GPR_U32(ctx, 31, 0x403A44u);
    ctx->pc = 0x403A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403A3Cu;
            // 0x403a40: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A44u; }
        if (ctx->pc != 0x403A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403A44u; }
        if (ctx->pc != 0x403A44u) { return; }
    }
    ctx->pc = 0x403A44u;
label_403a44:
    // 0x403a44: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x403a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_403a48:
    // 0x403a48: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x403a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_403a4c:
    // 0x403a4c: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x403a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_403a50:
    // 0x403a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x403a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_403a54:
    // 0x403a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x403a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_403a58:
    // 0x403a58: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x403a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_403a5c:
    // 0x403a5c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_403a60:
    if (ctx->pc == 0x403A60u) {
        ctx->pc = 0x403A60u;
            // 0x403a60: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x403A64u;
        goto label_403a64;
    }
    ctx->pc = 0x403A5Cu;
    {
        const bool branch_taken_0x403a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x403A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403A5Cu;
            // 0x403a60: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403a5c) {
            ctx->pc = 0x403A6Cu;
            goto label_403a6c;
        }
    }
    ctx->pc = 0x403A64u;
label_403a64:
    // 0x403a64: 0x10000048  b           . + 4 + (0x48 << 2)
label_403a68:
    if (ctx->pc == 0x403A68u) {
        ctx->pc = 0x403A68u;
            // 0x403a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403A6Cu;
        goto label_403a6c;
    }
    ctx->pc = 0x403A64u;
    {
        const bool branch_taken_0x403a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403A64u;
            // 0x403a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403a64) {
            ctx->pc = 0x403B88u;
            goto label_403b88;
        }
    }
    ctx->pc = 0x403A6Cu;
label_403a6c:
    // 0x403a6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_403a70:
    // 0x403a70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x403a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_403a74:
    // 0x403a74: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x403a74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_403a78:
    // 0x403a78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x403a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_403a7c:
    // 0x403a7c: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x403a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_403a80:
    // 0x403a80: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x403a80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_403a84:
    // 0x403a84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x403a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_403a88:
    // 0x403a88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x403a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_403a8c:
    // 0x403a8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_403a90:
    // 0x403a90: 0x8c48e3d8  lw          $t0, -0x1C28($v0)
    ctx->pc = 0x403a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_403a94:
    // 0x403a94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_403a98:
    // 0x403a98: 0x8c47e360  lw          $a3, -0x1CA0($v0)
    ctx->pc = 0x403a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_403a9c:
    // 0x403a9c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x403a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_403aa0:
    // 0x403aa0: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x403aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_403aa4:
    // 0x403aa4: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x403aa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_403aa8:
    // 0x403aa8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x403aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_403aac:
    // 0x403aac: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x403aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_403ab0:
    // 0x403ab0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x403ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_403ab4:
    // 0x403ab4: 0xad340000  sw          $s4, 0x0($t1)
    ctx->pc = 0x403ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
label_403ab8:
    // 0x403ab8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x403ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_403abc:
    // 0x403abc: 0x8d0de3d8  lw          $t5, -0x1C28($t0)
    ctx->pc = 0x403abcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_403ac0:
    // 0x403ac0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x403ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_403ac4:
    // 0x403ac4: 0x8c8be3b8  lw          $t3, -0x1C48($a0)
    ctx->pc = 0x403ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_403ac8:
    // 0x403ac8: 0x8cece378  lw          $t4, -0x1C88($a3)
    ctx->pc = 0x403ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294959992)));
label_403acc:
    // 0x403acc: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x403accu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_403ad0:
    // 0x403ad0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x403ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_403ad4:
    // 0x403ad4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x403ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_403ad8:
    // 0x403ad8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x403ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_403adc:
    // 0x403adc: 0x18d8821  addu        $s1, $t4, $t5
    ctx->pc = 0x403adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_403ae0:
    // 0x403ae0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x403ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_403ae4:
    // 0x403ae4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x403ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_403ae8:
    // 0x403ae8: 0x8c6b0028  lw          $t3, 0x28($v1)
    ctx->pc = 0x403ae8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_403aec:
    // 0x403aec: 0x8d02e3c0  lw          $v0, -0x1C40($t0)
    ctx->pc = 0x403aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960064)));
label_403af0:
    // 0x403af0: 0x8d43e3d8  lw          $v1, -0x1C28($t2)
    ctx->pc = 0x403af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_403af4:
    // 0x403af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x403af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_403af8:
    // 0x403af8: 0xace2e3c0  sw          $v0, -0x1C40($a3)
    ctx->pc = 0x403af8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960064), GPR_U32(ctx, 2));
label_403afc:
    // 0x403afc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x403afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_403b00:
    // 0x403b00: 0xc04cd60  jal         func_133580
label_403b04:
    if (ctx->pc == 0x403B04u) {
        ctx->pc = 0x403B04u;
            // 0x403b04: 0xad23e3d8  sw          $v1, -0x1C28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960088), GPR_U32(ctx, 3));
        ctx->pc = 0x403B08u;
        goto label_403b08;
    }
    ctx->pc = 0x403B00u;
    SET_GPR_U32(ctx, 31, 0x403B08u);
    ctx->pc = 0x403B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403B00u;
            // 0x403b04: 0xad23e3d8  sw          $v1, -0x1C28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B08u; }
        if (ctx->pc != 0x403B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B08u; }
        if (ctx->pc != 0x403B08u) { return; }
    }
    ctx->pc = 0x403B08u;
label_403b08:
    // 0x403b08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x403b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_403b0c:
    // 0x403b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x403b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_403b10:
    // 0x403b10: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x403b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_403b14:
    // 0x403b14: 0xc04e4a4  jal         func_139290
label_403b18:
    if (ctx->pc == 0x403B18u) {
        ctx->pc = 0x403B18u;
            // 0x403b18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x403B1Cu;
        goto label_403b1c;
    }
    ctx->pc = 0x403B14u;
    SET_GPR_U32(ctx, 31, 0x403B1Cu);
    ctx->pc = 0x403B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403B14u;
            // 0x403b18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B1Cu; }
        if (ctx->pc != 0x403B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B1Cu; }
        if (ctx->pc != 0x403B1Cu) { return; }
    }
    ctx->pc = 0x403B1Cu;
label_403b1c:
    // 0x403b1c: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x403b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_403b20:
    // 0x403b20: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x403b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_403b24:
    // 0x403b24: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_403b28:
    if (ctx->pc == 0x403B28u) {
        ctx->pc = 0x403B28u;
            // 0x403b28: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x403B2Cu;
        goto label_403b2c;
    }
    ctx->pc = 0x403B24u;
    {
        const bool branch_taken_0x403b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403b24) {
            ctx->pc = 0x403B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403B24u;
            // 0x403b28: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403B30u;
            goto label_403b30;
        }
    }
    ctx->pc = 0x403B2Cu;
label_403b2c:
    // 0x403b2c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x403b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_403b30:
    // 0x403b30: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x403b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_403b34:
    // 0x403b34: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x403b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_403b38:
    // 0x403b38: 0x320f809  jalr        $t9
label_403b3c:
    if (ctx->pc == 0x403B3Cu) {
        ctx->pc = 0x403B3Cu;
            // 0x403b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403B40u;
        goto label_403b40;
    }
    ctx->pc = 0x403B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x403B40u);
        ctx->pc = 0x403B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403B38u;
            // 0x403b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x403B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x403B40u; }
            if (ctx->pc != 0x403B40u) { return; }
        }
        }
    }
    ctx->pc = 0x403B40u;
label_403b40:
    // 0x403b40: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x403b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_403b44:
    // 0x403b44: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x403b44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_403b48:
    // 0x403b48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x403b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_403b4c:
    // 0x403b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x403b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_403b50:
    // 0x403b50: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x403b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403b54:
    // 0x403b54: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x403b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_403b58:
    // 0x403b58: 0xc04cfcc  jal         func_133F30
label_403b5c:
    if (ctx->pc == 0x403B5Cu) {
        ctx->pc = 0x403B5Cu;
            // 0x403b5c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x403B60u;
        goto label_403b60;
    }
    ctx->pc = 0x403B58u;
    SET_GPR_U32(ctx, 31, 0x403B60u);
    ctx->pc = 0x403B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403B58u;
            // 0x403b5c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B60u; }
        if (ctx->pc != 0x403B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B60u; }
        if (ctx->pc != 0x403B60u) { return; }
    }
    ctx->pc = 0x403B60u;
label_403b60:
    // 0x403b60: 0x10000002  b           . + 4 + (0x2 << 2)
label_403b64:
    if (ctx->pc == 0x403B64u) {
        ctx->pc = 0x403B68u;
        goto label_403b68;
    }
    ctx->pc = 0x403B60u;
    {
        const bool branch_taken_0x403b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x403b60) {
            ctx->pc = 0x403B6Cu;
            goto label_403b6c;
        }
    }
    ctx->pc = 0x403B68u;
label_403b68:
    // 0x403b68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x403b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_403b6c:
    // 0x403b6c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x403b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_403b70:
    // 0x403b70: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x403b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_403b74:
    // 0x403b74: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x403b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_403b78:
    // 0x403b78: 0xc44cb980  lwc1        $f12, -0x4680($v0)
    ctx->pc = 0x403b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_403b7c:
    // 0x403b7c: 0xc0e325c  jal         func_38C970
label_403b80:
    if (ctx->pc == 0x403B80u) {
        ctx->pc = 0x403B80u;
            // 0x403b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403B84u;
        goto label_403b84;
    }
    ctx->pc = 0x403B7Cu;
    SET_GPR_U32(ctx, 31, 0x403B84u);
    ctx->pc = 0x403B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403B7Cu;
            // 0x403b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B84u; }
        if (ctx->pc != 0x403B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403B84u; }
        if (ctx->pc != 0x403B84u) { return; }
    }
    ctx->pc = 0x403B84u;
label_403b84:
    // 0x403b84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x403b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_403b88:
    // 0x403b88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x403b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_403b8c:
    // 0x403b8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x403b8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_403b90:
    // 0x403b90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x403b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_403b94:
    // 0x403b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x403b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_403b98:
    // 0x403b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x403b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_403b9c:
    // 0x403b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x403b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_403ba0:
    // 0x403ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x403ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_403ba4:
    // 0x403ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x403ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_403ba8:
    // 0x403ba8: 0x3e00008  jr          $ra
label_403bac:
    if (ctx->pc == 0x403BACu) {
        ctx->pc = 0x403BACu;
            // 0x403bac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x403BB0u;
        goto label_403bb0;
    }
    ctx->pc = 0x403BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403BA8u;
            // 0x403bac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x403BB0u;
label_403bb0:
    // 0x403bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x403bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_403bb4:
    // 0x403bb4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x403bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_403bb8:
    // 0x403bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x403bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_403bbc:
    // 0x403bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x403bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403bc0:
    // 0x403bc0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x403bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_403bc4:
    // 0x403bc4: 0x10a30058  beq         $a1, $v1, . + 4 + (0x58 << 2)
label_403bc8:
    if (ctx->pc == 0x403BC8u) {
        ctx->pc = 0x403BC8u;
            // 0x403bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403BCCu;
        goto label_403bcc;
    }
    ctx->pc = 0x403BC4u;
    {
        const bool branch_taken_0x403bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x403BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403BC4u;
            // 0x403bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403bc4) {
            ctx->pc = 0x403D28u;
            goto label_403d28;
        }
    }
    ctx->pc = 0x403BCCu;
label_403bcc:
    // 0x403bcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x403bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_403bd0:
    // 0x403bd0: 0x50a30045  beql        $a1, $v1, . + 4 + (0x45 << 2)
label_403bd4:
    if (ctx->pc == 0x403BD4u) {
        ctx->pc = 0x403BD4u;
            // 0x403bd4: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->pc = 0x403BD8u;
        goto label_403bd8;
    }
    ctx->pc = 0x403BD0u;
    {
        const bool branch_taken_0x403bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x403bd0) {
            ctx->pc = 0x403BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403BD0u;
            // 0x403bd4: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403CE8u;
            goto label_403ce8;
        }
    }
    ctx->pc = 0x403BD8u;
label_403bd8:
    // 0x403bd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x403bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_403bdc:
    // 0x403bdc: 0x10a3003e  beq         $a1, $v1, . + 4 + (0x3E << 2)
label_403be0:
    if (ctx->pc == 0x403BE0u) {
        ctx->pc = 0x403BE4u;
        goto label_403be4;
    }
    ctx->pc = 0x403BDCu;
    {
        const bool branch_taken_0x403bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x403bdc) {
            ctx->pc = 0x403CD8u;
            goto label_403cd8;
        }
    }
    ctx->pc = 0x403BE4u;
label_403be4:
    // 0x403be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x403be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403be8:
    // 0x403be8: 0x50a30032  beql        $a1, $v1, . + 4 + (0x32 << 2)
label_403bec:
    if (ctx->pc == 0x403BECu) {
        ctx->pc = 0x403BECu;
            // 0x403bec: 0xc601020c  lwc1        $f1, 0x20C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x403BF0u;
        goto label_403bf0;
    }
    ctx->pc = 0x403BE8u;
    {
        const bool branch_taken_0x403be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x403be8) {
            ctx->pc = 0x403BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403BE8u;
            // 0x403bec: 0xc601020c  lwc1        $f1, 0x20C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x403CB4u;
            goto label_403cb4;
        }
    }
    ctx->pc = 0x403BF0u;
label_403bf0:
    // 0x403bf0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_403bf4:
    if (ctx->pc == 0x403BF4u) {
        ctx->pc = 0x403BF8u;
        goto label_403bf8;
    }
    ctx->pc = 0x403BF0u;
    {
        const bool branch_taken_0x403bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x403bf0) {
            ctx->pc = 0x403C00u;
            goto label_403c00;
        }
    }
    ctx->pc = 0x403BF8u;
label_403bf8:
    // 0x403bf8: 0x10000057  b           . + 4 + (0x57 << 2)
label_403bfc:
    if (ctx->pc == 0x403BFCu) {
        ctx->pc = 0x403BFCu;
            // 0x403bfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x403C00u;
        goto label_403c00;
    }
    ctx->pc = 0x403BF8u;
    {
        const bool branch_taken_0x403bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403BF8u;
            // 0x403bfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403bf8) {
            ctx->pc = 0x403D58u;
            goto label_403d58;
        }
    }
    ctx->pc = 0x403C00u;
label_403c00:
    // 0x403c00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403c04:
    // 0x403c04: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x403c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_403c08:
    // 0x403c08: 0x8c427290  lw          $v0, 0x7290($v0)
    ctx->pc = 0x403c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_403c0c:
    // 0x403c0c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x403c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_403c10:
    // 0x403c10: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x403c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_403c14:
    // 0x403c14: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x403c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
label_403c18:
    // 0x403c18: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x403c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_403c1c:
    // 0x403c1c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x403c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_403c20:
    // 0x403c20: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x403c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_403c24:
    // 0x403c24: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x403c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_403c28:
    // 0x403c28: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x403c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_403c2c:
    // 0x403c2c: 0x8c43fbb0  lw          $v1, -0x450($v0)
    ctx->pc = 0x403c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966192)));
label_403c30:
    // 0x403c30: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x403c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_403c34:
    // 0x403c34: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x403c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_403c38:
    // 0x403c38: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x403c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_403c3c:
    // 0x403c3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x403c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_403c40:
    // 0x403c40: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x403c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_403c44:
    // 0x403c44: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x403c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_403c48:
    // 0x403c48: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x403c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_403c4c:
    // 0x403c4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x403c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_403c50:
    // 0x403c50: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x403c50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_403c54:
    // 0x403c54: 0x1d00fff3  bgtz        $t0, . + 4 + (-0xD << 2)
label_403c58:
    if (ctx->pc == 0x403C58u) {
        ctx->pc = 0x403C58u;
            // 0x403c58: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x403C5Cu;
        goto label_403c5c;
    }
    ctx->pc = 0x403C54u;
    {
        const bool branch_taken_0x403c54 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x403C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403C54u;
            // 0x403c58: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c54) {
            ctx->pc = 0x403C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_403c24;
        }
    }
    ctx->pc = 0x403C5Cu;
label_403c5c:
    // 0x403c5c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x403c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_403c60:
    // 0x403c60: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x403c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_403c64:
    // 0x403c64: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x403c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403c68:
    // 0x403c68: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x403c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_403c6c:
    // 0x403c6c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x403c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403c70:
    // 0x403c70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x403c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_403c74:
    // 0x403c74: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x403c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_403c78:
    // 0x403c78: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x403c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_403c7c:
    // 0x403c7c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x403c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_403c80:
    // 0x403c80: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x403c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_403c84:
    // 0x403c84: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x403c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_403c88:
    // 0x403c88: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x403c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_403c8c:
    // 0x403c8c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x403c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403c90:
    // 0x403c90: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x403c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403c94:
    // 0x403c94: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x403c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_403c98:
    // 0x403c98: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x403c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_403c9c:
    // 0x403c9c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x403c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_403ca0:
    // 0x403ca0: 0xc0892b0  jal         func_224AC0
label_403ca4:
    if (ctx->pc == 0x403CA4u) {
        ctx->pc = 0x403CA4u;
            // 0x403ca4: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x403CA8u;
        goto label_403ca8;
    }
    ctx->pc = 0x403CA0u;
    SET_GPR_U32(ctx, 31, 0x403CA8u);
    ctx->pc = 0x403CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403CA0u;
            // 0x403ca4: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403CA8u; }
        if (ctx->pc != 0x403CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403CA8u; }
        if (ctx->pc != 0x403CA8u) { return; }
    }
    ctx->pc = 0x403CA8u;
label_403ca8:
    // 0x403ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x403ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403cac:
    // 0x403cac: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x403cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_403cb0:
    // 0x403cb0: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x403cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403cb4:
    // 0x403cb4: 0xc6000208  lwc1        $f0, 0x208($s0)
    ctx->pc = 0x403cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403cb8:
    // 0x403cb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x403cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_403cbc:
    // 0x403cbc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_403cc0:
    if (ctx->pc == 0x403CC0u) {
        ctx->pc = 0x403CC4u;
        goto label_403cc4;
    }
    ctx->pc = 0x403CBCu;
    {
        const bool branch_taken_0x403cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x403cbc) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403CC4u;
label_403cc4:
    // 0x403cc4: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x403cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_403cc8:
    // 0x403cc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x403cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_403ccc:
    // 0x403ccc: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x403cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_403cd0:
    // 0x403cd0: 0x10000020  b           . + 4 + (0x20 << 2)
label_403cd4:
    if (ctx->pc == 0x403CD4u) {
        ctx->pc = 0x403CD4u;
            // 0x403cd4: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x403CD8u;
        goto label_403cd8;
    }
    ctx->pc = 0x403CD0u;
    {
        const bool branch_taken_0x403cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403CD0u;
            // 0x403cd4: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403cd0) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403CD8u;
label_403cd8:
    // 0x403cd8: 0xc101064  jal         func_404190
label_403cdc:
    if (ctx->pc == 0x403CDCu) {
        ctx->pc = 0x403CE0u;
        goto label_403ce0;
    }
    ctx->pc = 0x403CD8u;
    SET_GPR_U32(ctx, 31, 0x403CE0u);
    ctx->pc = 0x404190u;
    if (runtime->hasFunction(0x404190u)) {
        auto targetFn = runtime->lookupFunction(0x404190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403CE0u; }
        if (ctx->pc != 0x403CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00404190_0x404190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403CE0u; }
        if (ctx->pc != 0x403CE0u) { return; }
    }
    ctx->pc = 0x403CE0u;
label_403ce0:
    // 0x403ce0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_403ce4:
    if (ctx->pc == 0x403CE4u) {
        ctx->pc = 0x403CE8u;
        goto label_403ce8;
    }
    ctx->pc = 0x403CE0u;
    {
        const bool branch_taken_0x403ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x403ce0) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403CE8u;
label_403ce8:
    // 0x403ce8: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_403cec:
    if (ctx->pc == 0x403CECu) {
        ctx->pc = 0x403CF0u;
        goto label_403cf0;
    }
    ctx->pc = 0x403CE8u;
    {
        const bool branch_taken_0x403ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x403ce8) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403CF0u;
label_403cf0:
    // 0x403cf0: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x403cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_403cf4:
    // 0x403cf4: 0x58a0000a  blezl       $a1, . + 4 + (0xA << 2)
label_403cf8:
    if (ctx->pc == 0x403CF8u) {
        ctx->pc = 0x403CF8u;
            // 0x403cf8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x403CFCu;
        goto label_403cfc;
    }
    ctx->pc = 0x403CF4u;
    {
        const bool branch_taken_0x403cf4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x403cf4) {
            ctx->pc = 0x403CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403CF4u;
            // 0x403cf8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403D20u;
            goto label_403d20;
        }
    }
    ctx->pc = 0x403CFCu;
label_403cfc:
    // 0x403cfc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x403cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_403d00:
    // 0x403d00: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x403d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_403d04:
    // 0x403d04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x403d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_403d08:
    // 0x403d08: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x403d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_403d0c:
    // 0x403d0c: 0x320f809  jalr        $t9
label_403d10:
    if (ctx->pc == 0x403D10u) {
        ctx->pc = 0x403D14u;
        goto label_403d14;
    }
    ctx->pc = 0x403D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x403D14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x403D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x403D14u; }
            if (ctx->pc != 0x403D14u) { return; }
        }
        }
    }
    ctx->pc = 0x403D14u;
label_403d14:
    // 0x403d14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x403d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_403d18:
    // 0x403d18: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x403d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_403d1c:
    // 0x403d1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x403d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_403d20:
    // 0x403d20: 0x1000000c  b           . + 4 + (0xC << 2)
label_403d24:
    if (ctx->pc == 0x403D24u) {
        ctx->pc = 0x403D24u;
            // 0x403d24: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x403D28u;
        goto label_403d28;
    }
    ctx->pc = 0x403D20u;
    {
        const bool branch_taken_0x403d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403D20u;
            // 0x403d24: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d20) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403D28u;
label_403d28:
    // 0x403d28: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x403d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_403d2c:
    // 0x403d2c: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_403d30:
    if (ctx->pc == 0x403D30u) {
        ctx->pc = 0x403D34u;
        goto label_403d34;
    }
    ctx->pc = 0x403D2Cu;
    {
        const bool branch_taken_0x403d2c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x403d2c) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403D34u;
label_403d34:
    // 0x403d34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x403d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_403d38:
    // 0x403d38: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x403d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_403d3c:
    // 0x403d3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x403d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_403d40:
    // 0x403d40: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x403d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_403d44:
    // 0x403d44: 0x320f809  jalr        $t9
label_403d48:
    if (ctx->pc == 0x403D48u) {
        ctx->pc = 0x403D4Cu;
        goto label_403d4c;
    }
    ctx->pc = 0x403D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x403D4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x403D4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x403D4Cu; }
            if (ctx->pc != 0x403D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x403D4Cu;
label_403d4c:
    // 0x403d4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x403d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_403d50:
    // 0x403d50: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x403d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_403d54:
    // 0x403d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x403d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_403d58:
    // 0x403d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x403d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_403d5c:
    // 0x403d5c: 0x3e00008  jr          $ra
label_403d60:
    if (ctx->pc == 0x403D60u) {
        ctx->pc = 0x403D60u;
            // 0x403d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x403D64u;
        goto label_403d64;
    }
    ctx->pc = 0x403D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403D5Cu;
            // 0x403d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x403D64u;
label_403d64:
    // 0x403d64: 0x0  nop
    ctx->pc = 0x403d64u;
    // NOP
label_403d68:
    // 0x403d68: 0x0  nop
    ctx->pc = 0x403d68u;
    // NOP
label_403d6c:
    // 0x403d6c: 0x0  nop
    ctx->pc = 0x403d6cu;
    // NOP
label_403d70:
    // 0x403d70: 0x80e3580  j           func_38D600
label_403d74:
    if (ctx->pc == 0x403D74u) {
        ctx->pc = 0x403D78u;
        goto label_403d78;
    }
    ctx->pc = 0x403D70u;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D600_0x38d600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x403D78u;
label_403d78:
    // 0x403d78: 0x0  nop
    ctx->pc = 0x403d78u;
    // NOP
label_403d7c:
    // 0x403d7c: 0x0  nop
    ctx->pc = 0x403d7cu;
    // NOP
label_403d80:
    // 0x403d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x403d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_403d84:
    // 0x403d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x403d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403d88:
    // 0x403d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x403d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_403d8c:
    // 0x403d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x403d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403d90:
    // 0x403d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x403d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_403d94:
    // 0x403d94: 0xc0baaa0  jal         func_2EAA80
label_403d98:
    if (ctx->pc == 0x403D98u) {
        ctx->pc = 0x403D98u;
            // 0x403d98: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x403D9Cu;
        goto label_403d9c;
    }
    ctx->pc = 0x403D94u;
    SET_GPR_U32(ctx, 31, 0x403D9Cu);
    ctx->pc = 0x403D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403D94u;
            // 0x403d98: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403D9Cu; }
        if (ctx->pc != 0x403D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403D9Cu; }
        if (ctx->pc != 0x403D9Cu) { return; }
    }
    ctx->pc = 0x403D9Cu;
label_403d9c:
    // 0x403d9c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x403d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_403da0:
    // 0x403da0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x403da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_403da4:
    // 0x403da4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x403da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_403da8:
    // 0x403da8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x403da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_403dac:
    // 0x403dac: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x403dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_403db0:
    // 0x403db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x403db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_403db4:
    // 0x403db4: 0xc04cc90  jal         func_133240
label_403db8:
    if (ctx->pc == 0x403DB8u) {
        ctx->pc = 0x403DB8u;
            // 0x403db8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x403DBCu;
        goto label_403dbc;
    }
    ctx->pc = 0x403DB4u;
    SET_GPR_U32(ctx, 31, 0x403DBCu);
    ctx->pc = 0x403DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403DB4u;
            // 0x403db8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403DBCu; }
        if (ctx->pc != 0x403DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403DBCu; }
        if (ctx->pc != 0x403DBCu) { return; }
    }
    ctx->pc = 0x403DBCu;
label_403dbc:
    // 0x403dbc: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x403dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_403dc0:
    // 0x403dc0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x403dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_403dc4:
    // 0x403dc4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x403dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403dc8:
    // 0x403dc8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x403dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_403dcc:
    // 0x403dcc: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x403dccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_403dd0:
    // 0x403dd0: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x403dd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_403dd4:
    // 0x403dd4: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x403dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_403dd8:
    // 0x403dd8: 0x46010044  c1          0x10044
    ctx->pc = 0x403dd8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_403ddc:
    // 0x403ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x403ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_403de0:
    // 0x403de0: 0x0  nop
    ctx->pc = 0x403de0u;
    // NOP
label_403de4:
    // 0x403de4: 0x0  nop
    ctx->pc = 0x403de4u;
    // NOP
label_403de8:
    // 0x403de8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x403de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_403dec:
    // 0x403dec: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_403df0:
    if (ctx->pc == 0x403DF0u) {
        ctx->pc = 0x403DF0u;
            // 0x403df0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->pc = 0x403DF4u;
        goto label_403df4;
    }
    ctx->pc = 0x403DECu;
    {
        const bool branch_taken_0x403dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x403dec) {
            ctx->pc = 0x403DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403DECu;
            // 0x403df0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403E2Cu;
            goto label_403e2c;
        }
    }
    ctx->pc = 0x403DF4u;
label_403df4:
    // 0x403df4: 0x9202025c  lbu         $v0, 0x25C($s0)
    ctx->pc = 0x403df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 604)));
label_403df8:
    // 0x403df8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_403dfc:
    if (ctx->pc == 0x403DFCu) {
        ctx->pc = 0x403E00u;
        goto label_403e00;
    }
    ctx->pc = 0x403DF8u;
    {
        const bool branch_taken_0x403df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403df8) {
            ctx->pc = 0x403E28u;
            goto label_403e28;
        }
    }
    ctx->pc = 0x403E00u;
label_403e00:
    // 0x403e00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403e04:
    // 0x403e04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x403e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_403e08:
    // 0x403e08: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x403e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_403e0c:
    // 0x403e0c: 0x2463b998  addiu       $v1, $v1, -0x4668
    ctx->pc = 0x403e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949272));
label_403e10:
    // 0x403e10: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x403e10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_403e14:
    // 0x403e14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x403e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_403e18:
    // 0x403e18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x403e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_403e1c:
    // 0x403e1c: 0xc073234  jal         func_1CC8D0
label_403e20:
    if (ctx->pc == 0x403E20u) {
        ctx->pc = 0x403E20u;
            // 0x403e20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x403E24u;
        goto label_403e24;
    }
    ctx->pc = 0x403E1Cu;
    SET_GPR_U32(ctx, 31, 0x403E24u);
    ctx->pc = 0x403E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403E1Cu;
            // 0x403e20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403E24u; }
        if (ctx->pc != 0x403E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403E24u; }
        if (ctx->pc != 0x403E24u) { return; }
    }
    ctx->pc = 0x403E24u;
label_403e24:
    // 0x403e24: 0xa200025c  sb          $zero, 0x25C($s0)
    ctx->pc = 0x403e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 604), (uint8_t)GPR_U32(ctx, 0));
label_403e28:
    // 0x403e28: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x403e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_403e2c:
    // 0x403e2c: 0xc122c5c  jal         func_48B170
label_403e30:
    if (ctx->pc == 0x403E30u) {
        ctx->pc = 0x403E30u;
            // 0x403e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403E34u;
        goto label_403e34;
    }
    ctx->pc = 0x403E2Cu;
    SET_GPR_U32(ctx, 31, 0x403E34u);
    ctx->pc = 0x403E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403E2Cu;
            // 0x403e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403E34u; }
        if (ctx->pc != 0x403E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403E34u; }
        if (ctx->pc != 0x403E34u) { return; }
    }
    ctx->pc = 0x403E34u;
label_403e34:
    // 0x403e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x403e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_403e38:
    // 0x403e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x403e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_403e3c:
    // 0x403e3c: 0x3e00008  jr          $ra
label_403e40:
    if (ctx->pc == 0x403E40u) {
        ctx->pc = 0x403E40u;
            // 0x403e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x403E44u;
        goto label_403e44;
    }
    ctx->pc = 0x403E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403E3Cu;
            // 0x403e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x403E44u;
label_403e44:
    // 0x403e44: 0x0  nop
    ctx->pc = 0x403e44u;
    // NOP
label_403e48:
    // 0x403e48: 0x0  nop
    ctx->pc = 0x403e48u;
    // NOP
label_403e4c:
    // 0x403e4c: 0x0  nop
    ctx->pc = 0x403e4cu;
    // NOP
}
