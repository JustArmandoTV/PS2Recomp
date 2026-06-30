#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00553900
// Address: 0x553900 - 0x553eb0
void sub_00553900_0x553900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00553900_0x553900");
#endif

    switch (ctx->pc) {
        case 0x553900u: goto label_553900;
        case 0x553904u: goto label_553904;
        case 0x553908u: goto label_553908;
        case 0x55390cu: goto label_55390c;
        case 0x553910u: goto label_553910;
        case 0x553914u: goto label_553914;
        case 0x553918u: goto label_553918;
        case 0x55391cu: goto label_55391c;
        case 0x553920u: goto label_553920;
        case 0x553924u: goto label_553924;
        case 0x553928u: goto label_553928;
        case 0x55392cu: goto label_55392c;
        case 0x553930u: goto label_553930;
        case 0x553934u: goto label_553934;
        case 0x553938u: goto label_553938;
        case 0x55393cu: goto label_55393c;
        case 0x553940u: goto label_553940;
        case 0x553944u: goto label_553944;
        case 0x553948u: goto label_553948;
        case 0x55394cu: goto label_55394c;
        case 0x553950u: goto label_553950;
        case 0x553954u: goto label_553954;
        case 0x553958u: goto label_553958;
        case 0x55395cu: goto label_55395c;
        case 0x553960u: goto label_553960;
        case 0x553964u: goto label_553964;
        case 0x553968u: goto label_553968;
        case 0x55396cu: goto label_55396c;
        case 0x553970u: goto label_553970;
        case 0x553974u: goto label_553974;
        case 0x553978u: goto label_553978;
        case 0x55397cu: goto label_55397c;
        case 0x553980u: goto label_553980;
        case 0x553984u: goto label_553984;
        case 0x553988u: goto label_553988;
        case 0x55398cu: goto label_55398c;
        case 0x553990u: goto label_553990;
        case 0x553994u: goto label_553994;
        case 0x553998u: goto label_553998;
        case 0x55399cu: goto label_55399c;
        case 0x5539a0u: goto label_5539a0;
        case 0x5539a4u: goto label_5539a4;
        case 0x5539a8u: goto label_5539a8;
        case 0x5539acu: goto label_5539ac;
        case 0x5539b0u: goto label_5539b0;
        case 0x5539b4u: goto label_5539b4;
        case 0x5539b8u: goto label_5539b8;
        case 0x5539bcu: goto label_5539bc;
        case 0x5539c0u: goto label_5539c0;
        case 0x5539c4u: goto label_5539c4;
        case 0x5539c8u: goto label_5539c8;
        case 0x5539ccu: goto label_5539cc;
        case 0x5539d0u: goto label_5539d0;
        case 0x5539d4u: goto label_5539d4;
        case 0x5539d8u: goto label_5539d8;
        case 0x5539dcu: goto label_5539dc;
        case 0x5539e0u: goto label_5539e0;
        case 0x5539e4u: goto label_5539e4;
        case 0x5539e8u: goto label_5539e8;
        case 0x5539ecu: goto label_5539ec;
        case 0x5539f0u: goto label_5539f0;
        case 0x5539f4u: goto label_5539f4;
        case 0x5539f8u: goto label_5539f8;
        case 0x5539fcu: goto label_5539fc;
        case 0x553a00u: goto label_553a00;
        case 0x553a04u: goto label_553a04;
        case 0x553a08u: goto label_553a08;
        case 0x553a0cu: goto label_553a0c;
        case 0x553a10u: goto label_553a10;
        case 0x553a14u: goto label_553a14;
        case 0x553a18u: goto label_553a18;
        case 0x553a1cu: goto label_553a1c;
        case 0x553a20u: goto label_553a20;
        case 0x553a24u: goto label_553a24;
        case 0x553a28u: goto label_553a28;
        case 0x553a2cu: goto label_553a2c;
        case 0x553a30u: goto label_553a30;
        case 0x553a34u: goto label_553a34;
        case 0x553a38u: goto label_553a38;
        case 0x553a3cu: goto label_553a3c;
        case 0x553a40u: goto label_553a40;
        case 0x553a44u: goto label_553a44;
        case 0x553a48u: goto label_553a48;
        case 0x553a4cu: goto label_553a4c;
        case 0x553a50u: goto label_553a50;
        case 0x553a54u: goto label_553a54;
        case 0x553a58u: goto label_553a58;
        case 0x553a5cu: goto label_553a5c;
        case 0x553a60u: goto label_553a60;
        case 0x553a64u: goto label_553a64;
        case 0x553a68u: goto label_553a68;
        case 0x553a6cu: goto label_553a6c;
        case 0x553a70u: goto label_553a70;
        case 0x553a74u: goto label_553a74;
        case 0x553a78u: goto label_553a78;
        case 0x553a7cu: goto label_553a7c;
        case 0x553a80u: goto label_553a80;
        case 0x553a84u: goto label_553a84;
        case 0x553a88u: goto label_553a88;
        case 0x553a8cu: goto label_553a8c;
        case 0x553a90u: goto label_553a90;
        case 0x553a94u: goto label_553a94;
        case 0x553a98u: goto label_553a98;
        case 0x553a9cu: goto label_553a9c;
        case 0x553aa0u: goto label_553aa0;
        case 0x553aa4u: goto label_553aa4;
        case 0x553aa8u: goto label_553aa8;
        case 0x553aacu: goto label_553aac;
        case 0x553ab0u: goto label_553ab0;
        case 0x553ab4u: goto label_553ab4;
        case 0x553ab8u: goto label_553ab8;
        case 0x553abcu: goto label_553abc;
        case 0x553ac0u: goto label_553ac0;
        case 0x553ac4u: goto label_553ac4;
        case 0x553ac8u: goto label_553ac8;
        case 0x553accu: goto label_553acc;
        case 0x553ad0u: goto label_553ad0;
        case 0x553ad4u: goto label_553ad4;
        case 0x553ad8u: goto label_553ad8;
        case 0x553adcu: goto label_553adc;
        case 0x553ae0u: goto label_553ae0;
        case 0x553ae4u: goto label_553ae4;
        case 0x553ae8u: goto label_553ae8;
        case 0x553aecu: goto label_553aec;
        case 0x553af0u: goto label_553af0;
        case 0x553af4u: goto label_553af4;
        case 0x553af8u: goto label_553af8;
        case 0x553afcu: goto label_553afc;
        case 0x553b00u: goto label_553b00;
        case 0x553b04u: goto label_553b04;
        case 0x553b08u: goto label_553b08;
        case 0x553b0cu: goto label_553b0c;
        case 0x553b10u: goto label_553b10;
        case 0x553b14u: goto label_553b14;
        case 0x553b18u: goto label_553b18;
        case 0x553b1cu: goto label_553b1c;
        case 0x553b20u: goto label_553b20;
        case 0x553b24u: goto label_553b24;
        case 0x553b28u: goto label_553b28;
        case 0x553b2cu: goto label_553b2c;
        case 0x553b30u: goto label_553b30;
        case 0x553b34u: goto label_553b34;
        case 0x553b38u: goto label_553b38;
        case 0x553b3cu: goto label_553b3c;
        case 0x553b40u: goto label_553b40;
        case 0x553b44u: goto label_553b44;
        case 0x553b48u: goto label_553b48;
        case 0x553b4cu: goto label_553b4c;
        case 0x553b50u: goto label_553b50;
        case 0x553b54u: goto label_553b54;
        case 0x553b58u: goto label_553b58;
        case 0x553b5cu: goto label_553b5c;
        case 0x553b60u: goto label_553b60;
        case 0x553b64u: goto label_553b64;
        case 0x553b68u: goto label_553b68;
        case 0x553b6cu: goto label_553b6c;
        case 0x553b70u: goto label_553b70;
        case 0x553b74u: goto label_553b74;
        case 0x553b78u: goto label_553b78;
        case 0x553b7cu: goto label_553b7c;
        case 0x553b80u: goto label_553b80;
        case 0x553b84u: goto label_553b84;
        case 0x553b88u: goto label_553b88;
        case 0x553b8cu: goto label_553b8c;
        case 0x553b90u: goto label_553b90;
        case 0x553b94u: goto label_553b94;
        case 0x553b98u: goto label_553b98;
        case 0x553b9cu: goto label_553b9c;
        case 0x553ba0u: goto label_553ba0;
        case 0x553ba4u: goto label_553ba4;
        case 0x553ba8u: goto label_553ba8;
        case 0x553bacu: goto label_553bac;
        case 0x553bb0u: goto label_553bb0;
        case 0x553bb4u: goto label_553bb4;
        case 0x553bb8u: goto label_553bb8;
        case 0x553bbcu: goto label_553bbc;
        case 0x553bc0u: goto label_553bc0;
        case 0x553bc4u: goto label_553bc4;
        case 0x553bc8u: goto label_553bc8;
        case 0x553bccu: goto label_553bcc;
        case 0x553bd0u: goto label_553bd0;
        case 0x553bd4u: goto label_553bd4;
        case 0x553bd8u: goto label_553bd8;
        case 0x553bdcu: goto label_553bdc;
        case 0x553be0u: goto label_553be0;
        case 0x553be4u: goto label_553be4;
        case 0x553be8u: goto label_553be8;
        case 0x553becu: goto label_553bec;
        case 0x553bf0u: goto label_553bf0;
        case 0x553bf4u: goto label_553bf4;
        case 0x553bf8u: goto label_553bf8;
        case 0x553bfcu: goto label_553bfc;
        case 0x553c00u: goto label_553c00;
        case 0x553c04u: goto label_553c04;
        case 0x553c08u: goto label_553c08;
        case 0x553c0cu: goto label_553c0c;
        case 0x553c10u: goto label_553c10;
        case 0x553c14u: goto label_553c14;
        case 0x553c18u: goto label_553c18;
        case 0x553c1cu: goto label_553c1c;
        case 0x553c20u: goto label_553c20;
        case 0x553c24u: goto label_553c24;
        case 0x553c28u: goto label_553c28;
        case 0x553c2cu: goto label_553c2c;
        case 0x553c30u: goto label_553c30;
        case 0x553c34u: goto label_553c34;
        case 0x553c38u: goto label_553c38;
        case 0x553c3cu: goto label_553c3c;
        case 0x553c40u: goto label_553c40;
        case 0x553c44u: goto label_553c44;
        case 0x553c48u: goto label_553c48;
        case 0x553c4cu: goto label_553c4c;
        case 0x553c50u: goto label_553c50;
        case 0x553c54u: goto label_553c54;
        case 0x553c58u: goto label_553c58;
        case 0x553c5cu: goto label_553c5c;
        case 0x553c60u: goto label_553c60;
        case 0x553c64u: goto label_553c64;
        case 0x553c68u: goto label_553c68;
        case 0x553c6cu: goto label_553c6c;
        case 0x553c70u: goto label_553c70;
        case 0x553c74u: goto label_553c74;
        case 0x553c78u: goto label_553c78;
        case 0x553c7cu: goto label_553c7c;
        case 0x553c80u: goto label_553c80;
        case 0x553c84u: goto label_553c84;
        case 0x553c88u: goto label_553c88;
        case 0x553c8cu: goto label_553c8c;
        case 0x553c90u: goto label_553c90;
        case 0x553c94u: goto label_553c94;
        case 0x553c98u: goto label_553c98;
        case 0x553c9cu: goto label_553c9c;
        case 0x553ca0u: goto label_553ca0;
        case 0x553ca4u: goto label_553ca4;
        case 0x553ca8u: goto label_553ca8;
        case 0x553cacu: goto label_553cac;
        case 0x553cb0u: goto label_553cb0;
        case 0x553cb4u: goto label_553cb4;
        case 0x553cb8u: goto label_553cb8;
        case 0x553cbcu: goto label_553cbc;
        case 0x553cc0u: goto label_553cc0;
        case 0x553cc4u: goto label_553cc4;
        case 0x553cc8u: goto label_553cc8;
        case 0x553cccu: goto label_553ccc;
        case 0x553cd0u: goto label_553cd0;
        case 0x553cd4u: goto label_553cd4;
        case 0x553cd8u: goto label_553cd8;
        case 0x553cdcu: goto label_553cdc;
        case 0x553ce0u: goto label_553ce0;
        case 0x553ce4u: goto label_553ce4;
        case 0x553ce8u: goto label_553ce8;
        case 0x553cecu: goto label_553cec;
        case 0x553cf0u: goto label_553cf0;
        case 0x553cf4u: goto label_553cf4;
        case 0x553cf8u: goto label_553cf8;
        case 0x553cfcu: goto label_553cfc;
        case 0x553d00u: goto label_553d00;
        case 0x553d04u: goto label_553d04;
        case 0x553d08u: goto label_553d08;
        case 0x553d0cu: goto label_553d0c;
        case 0x553d10u: goto label_553d10;
        case 0x553d14u: goto label_553d14;
        case 0x553d18u: goto label_553d18;
        case 0x553d1cu: goto label_553d1c;
        case 0x553d20u: goto label_553d20;
        case 0x553d24u: goto label_553d24;
        case 0x553d28u: goto label_553d28;
        case 0x553d2cu: goto label_553d2c;
        case 0x553d30u: goto label_553d30;
        case 0x553d34u: goto label_553d34;
        case 0x553d38u: goto label_553d38;
        case 0x553d3cu: goto label_553d3c;
        case 0x553d40u: goto label_553d40;
        case 0x553d44u: goto label_553d44;
        case 0x553d48u: goto label_553d48;
        case 0x553d4cu: goto label_553d4c;
        case 0x553d50u: goto label_553d50;
        case 0x553d54u: goto label_553d54;
        case 0x553d58u: goto label_553d58;
        case 0x553d5cu: goto label_553d5c;
        case 0x553d60u: goto label_553d60;
        case 0x553d64u: goto label_553d64;
        case 0x553d68u: goto label_553d68;
        case 0x553d6cu: goto label_553d6c;
        case 0x553d70u: goto label_553d70;
        case 0x553d74u: goto label_553d74;
        case 0x553d78u: goto label_553d78;
        case 0x553d7cu: goto label_553d7c;
        case 0x553d80u: goto label_553d80;
        case 0x553d84u: goto label_553d84;
        case 0x553d88u: goto label_553d88;
        case 0x553d8cu: goto label_553d8c;
        case 0x553d90u: goto label_553d90;
        case 0x553d94u: goto label_553d94;
        case 0x553d98u: goto label_553d98;
        case 0x553d9cu: goto label_553d9c;
        case 0x553da0u: goto label_553da0;
        case 0x553da4u: goto label_553da4;
        case 0x553da8u: goto label_553da8;
        case 0x553dacu: goto label_553dac;
        case 0x553db0u: goto label_553db0;
        case 0x553db4u: goto label_553db4;
        case 0x553db8u: goto label_553db8;
        case 0x553dbcu: goto label_553dbc;
        case 0x553dc0u: goto label_553dc0;
        case 0x553dc4u: goto label_553dc4;
        case 0x553dc8u: goto label_553dc8;
        case 0x553dccu: goto label_553dcc;
        case 0x553dd0u: goto label_553dd0;
        case 0x553dd4u: goto label_553dd4;
        case 0x553dd8u: goto label_553dd8;
        case 0x553ddcu: goto label_553ddc;
        case 0x553de0u: goto label_553de0;
        case 0x553de4u: goto label_553de4;
        case 0x553de8u: goto label_553de8;
        case 0x553decu: goto label_553dec;
        case 0x553df0u: goto label_553df0;
        case 0x553df4u: goto label_553df4;
        case 0x553df8u: goto label_553df8;
        case 0x553dfcu: goto label_553dfc;
        case 0x553e00u: goto label_553e00;
        case 0x553e04u: goto label_553e04;
        case 0x553e08u: goto label_553e08;
        case 0x553e0cu: goto label_553e0c;
        case 0x553e10u: goto label_553e10;
        case 0x553e14u: goto label_553e14;
        case 0x553e18u: goto label_553e18;
        case 0x553e1cu: goto label_553e1c;
        case 0x553e20u: goto label_553e20;
        case 0x553e24u: goto label_553e24;
        case 0x553e28u: goto label_553e28;
        case 0x553e2cu: goto label_553e2c;
        case 0x553e30u: goto label_553e30;
        case 0x553e34u: goto label_553e34;
        case 0x553e38u: goto label_553e38;
        case 0x553e3cu: goto label_553e3c;
        case 0x553e40u: goto label_553e40;
        case 0x553e44u: goto label_553e44;
        case 0x553e48u: goto label_553e48;
        case 0x553e4cu: goto label_553e4c;
        case 0x553e50u: goto label_553e50;
        case 0x553e54u: goto label_553e54;
        case 0x553e58u: goto label_553e58;
        case 0x553e5cu: goto label_553e5c;
        case 0x553e60u: goto label_553e60;
        case 0x553e64u: goto label_553e64;
        case 0x553e68u: goto label_553e68;
        case 0x553e6cu: goto label_553e6c;
        case 0x553e70u: goto label_553e70;
        case 0x553e74u: goto label_553e74;
        case 0x553e78u: goto label_553e78;
        case 0x553e7cu: goto label_553e7c;
        case 0x553e80u: goto label_553e80;
        case 0x553e84u: goto label_553e84;
        case 0x553e88u: goto label_553e88;
        case 0x553e8cu: goto label_553e8c;
        case 0x553e90u: goto label_553e90;
        case 0x553e94u: goto label_553e94;
        case 0x553e98u: goto label_553e98;
        case 0x553e9cu: goto label_553e9c;
        case 0x553ea0u: goto label_553ea0;
        case 0x553ea4u: goto label_553ea4;
        case 0x553ea8u: goto label_553ea8;
        case 0x553eacu: goto label_553eac;
        default: break;
    }

    ctx->pc = 0x553900u;

label_553900:
    // 0x553900: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x553900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_553904:
    // 0x553904: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x553904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_553908:
    // 0x553908: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x553908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_55390c:
    // 0x55390c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x55390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_553910:
    // 0x553910: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x553910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_553914:
    // 0x553914: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x553914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_553918:
    // 0x553918: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x553918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55391c:
    // 0x55391c: 0x641600ff  daddiu      $s6, $zero, 0xFF
    ctx->pc = 0x55391cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_553920:
    // 0x553920: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x553920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_553924:
    // 0x553924: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x553924u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
label_553928:
    // 0x553928: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x553928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55392c:
    // 0x55392c: 0x26b5d960  addiu       $s5, $s5, -0x26A0
    ctx->pc = 0x55392cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957408));
label_553930:
    // 0x553930: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x553930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_553934:
    // 0x553934: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x553934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_553938:
    // 0x553938: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x553938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55393c:
    // 0x55393c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x55393cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_553940:
    // 0x553940: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x553940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_553944:
    // 0x553944: 0x2652e080  addiu       $s2, $s2, -0x1F80
    ctx->pc = 0x553944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959232));
label_553948:
    // 0x553948: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x553948u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_55394c:
    // 0x55394c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55394cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_553950:
    // 0x553950: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x553950u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_553954:
    // 0x553954: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x553954u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_553958:
    // 0x553958: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x553958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55395c:
    // 0x55395c: 0x8c460ec8  lw          $a2, 0xEC8($v0)
    ctx->pc = 0x55395cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_553960:
    // 0x553960: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x553960u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_553964:
    // 0x553964: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x553964u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_553968:
    // 0x553968: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x553968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_55396c:
    // 0x55396c: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x55396cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_553970:
    // 0x553970: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x553970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_553974:
    // 0x553974: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x553974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_553978:
    // 0x553978: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x553978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55397c:
    // 0x55397c: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x55397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_553980:
    // 0x553980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x553980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_553984:
    // 0x553984: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x553984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_553988:
    // 0x553988: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x553988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_55398c:
    // 0x55398c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_553990:
    // 0x553990: 0x9471dc18  lhu         $s1, -0x23E8($v1)
    ctx->pc = 0x553990u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958104)));
label_553994:
    // 0x553994: 0x9450dc1a  lhu         $s0, -0x23E6($v0)
    ctx->pc = 0x553994u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958106)));
label_553998:
    // 0x553998: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55399c:
    // 0x55399c: 0x8445d964  lh          $a1, -0x269C($v0)
    ctx->pc = 0x55399cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957412)));
label_5539a0:
    // 0x5539a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x5539a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5539a4:
    // 0x5539a4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5539a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5539a8:
    // 0x5539a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5539a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5539ac:
    // 0x5539ac: 0x8443d966  lh          $v1, -0x269A($v0)
    ctx->pc = 0x5539acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957414)));
label_5539b0:
    // 0x5539b0: 0x90820082  lbu         $v0, 0x82($a0)
    ctx->pc = 0x5539b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
label_5539b4:
    // 0x5539b4: 0x4600bd40  add.s       $f21, $f23, $f0
    ctx->pc = 0x5539b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_5539b8:
    // 0x5539b8: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x5539b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
label_5539bc:
    // 0x5539bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5539bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5539c0:
    // 0x5539c0: 0x0  nop
    ctx->pc = 0x5539c0u;
    // NOP
label_5539c4:
    // 0x5539c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5539c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5539c8:
    // 0x5539c8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_5539cc:
    if (ctx->pc == 0x5539CCu) {
        ctx->pc = 0x5539CCu;
            // 0x5539cc: 0x4600b500  add.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x5539D0u;
        goto label_5539d0;
    }
    ctx->pc = 0x5539C8u;
    {
        const bool branch_taken_0x5539c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5539CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5539C8u;
            // 0x5539cc: 0x4600b500  add.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5539c8) {
            ctx->pc = 0x5539E0u;
            goto label_5539e0;
        }
    }
    ctx->pc = 0x5539D0u;
label_5539d0:
    // 0x5539d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x5539d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_5539d4:
    // 0x5539d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x5539d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5539d8:
    // 0x5539d8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5539d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5539dc:
    // 0x5539dc: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x5539dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5539e0:
    // 0x5539e0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x5539e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_5539e4:
    // 0x5539e4: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x5539e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_5539e8:
    // 0x5539e8: 0xc0506ac  jal         func_141AB0
label_5539ec:
    if (ctx->pc == 0x5539ECu) {
        ctx->pc = 0x5539ECu;
            // 0x5539ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5539F0u;
        goto label_5539f0;
    }
    ctx->pc = 0x5539E8u;
    SET_GPR_U32(ctx, 31, 0x5539F0u);
    ctx->pc = 0x5539ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5539E8u;
            // 0x5539ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5539F0u; }
        if (ctx->pc != 0x5539F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5539F0u; }
        if (ctx->pc != 0x5539F0u) { return; }
    }
    ctx->pc = 0x5539F0u;
label_5539f0:
    // 0x5539f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5539f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5539f4:
    // 0x5539f4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5539f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5539f8:
    // 0x5539f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5539f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5539fc:
    // 0x5539fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5539fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_553a00:
    // 0x553a00: 0x320f809  jalr        $t9
label_553a04:
    if (ctx->pc == 0x553A04u) {
        ctx->pc = 0x553A04u;
            // 0x553a04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x553A08u;
        goto label_553a08;
    }
    ctx->pc = 0x553A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553A08u);
        ctx->pc = 0x553A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553A00u;
            // 0x553a04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x553A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553A08u; }
            if (ctx->pc != 0x553A08u) { return; }
        }
        }
    }
    ctx->pc = 0x553A08u;
label_553a08:
    // 0x553a08: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x553a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_553a0c:
    // 0x553a0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x553a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_553a10:
    // 0x553a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x553a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_553a14:
    // 0x553a14: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x553a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_553a18:
    // 0x553a18: 0xc6580098  lwc1        $f24, 0x98($s2)
    ctx->pc = 0x553a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_553a1c:
    // 0x553a1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x553a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_553a20:
    // 0x553a20: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_553a24:
    if (ctx->pc == 0x553A24u) {
        ctx->pc = 0x553A24u;
            // 0x553a24: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x553A28u;
        goto label_553a28;
    }
    ctx->pc = 0x553A20u;
    {
        const bool branch_taken_0x553a20 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x553A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553A20u;
            // 0x553a24: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553a20) {
            ctx->pc = 0x553A34u;
            goto label_553a34;
        }
    }
    ctx->pc = 0x553A28u;
label_553a28:
    // 0x553a28: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x553a28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553a2c:
    // 0x553a2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_553a30:
    if (ctx->pc == 0x553A30u) {
        ctx->pc = 0x553A30u;
            // 0x553a30: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553A34u;
        goto label_553a34;
    }
    ctx->pc = 0x553A2Cu;
    {
        const bool branch_taken_0x553a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553A2Cu;
            // 0x553a30: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553a2c) {
            ctx->pc = 0x553A50u;
            goto label_553a50;
        }
    }
    ctx->pc = 0x553A34u;
label_553a34:
    // 0x553a34: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x553a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_553a38:
    // 0x553a38: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x553a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553a3c:
    // 0x553a3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553a40:
    // 0x553a40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553a44:
    // 0x553a44: 0x0  nop
    ctx->pc = 0x553a44u;
    // NOP
label_553a48:
    // 0x553a48: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553a4c:
    // 0x553a4c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553a4cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553a50:
    // 0x553a50: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_553a54:
    if (ctx->pc == 0x553A54u) {
        ctx->pc = 0x553A54u;
            // 0x553a54: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x553A58u;
        goto label_553a58;
    }
    ctx->pc = 0x553A50u;
    {
        const bool branch_taken_0x553a50 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553a50) {
            ctx->pc = 0x553A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553A50u;
            // 0x553a54: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553A64u;
            goto label_553a64;
        }
    }
    ctx->pc = 0x553A58u;
label_553a58:
    // 0x553a58: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x553a58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553a5c:
    // 0x553a5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_553a60:
    if (ctx->pc == 0x553A60u) {
        ctx->pc = 0x553A60u;
            // 0x553a60: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553A64u;
        goto label_553a64;
    }
    ctx->pc = 0x553A5Cu;
    {
        const bool branch_taken_0x553a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553A5Cu;
            // 0x553a60: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553a5c) {
            ctx->pc = 0x553A7Cu;
            goto label_553a7c;
        }
    }
    ctx->pc = 0x553A64u;
label_553a64:
    // 0x553a64: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x553a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_553a68:
    // 0x553a68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553a6c:
    // 0x553a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553a70:
    // 0x553a70: 0x0  nop
    ctx->pc = 0x553a70u;
    // NOP
label_553a74:
    // 0x553a74: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_553a78:
    // 0x553a78: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x553a78u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553a7c:
    // 0x553a7c: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x553a7cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_553a80:
    // 0x553a80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553a84:
    // 0x553a84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553a88:
    // 0x553a88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x553a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_553a8c:
    // 0x553a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x553a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553a90:
    // 0x553a90: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x553a90u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_553a94:
    // 0x553a94: 0x4618ab80  add.s       $f14, $f21, $f24
    ctx->pc = 0x553a94u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
label_553a98:
    // 0x553a98: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553a9c:
    // 0x553a9c: 0xc0bc284  jal         func_2F0A10
label_553aa0:
    if (ctx->pc == 0x553AA0u) {
        ctx->pc = 0x553AA0u;
            // 0x553aa0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x553AA4u;
        goto label_553aa4;
    }
    ctx->pc = 0x553A9Cu;
    SET_GPR_U32(ctx, 31, 0x553AA4u);
    ctx->pc = 0x553AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553A9Cu;
            // 0x553aa0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553AA4u; }
        if (ctx->pc != 0x553AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553AA4u; }
        if (ctx->pc != 0x553AA4u) { return; }
    }
    ctx->pc = 0x553AA4u;
label_553aa4:
    // 0x553aa4: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x553aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_553aa8:
    // 0x553aa8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x553aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_553aac:
    // 0x553aac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x553aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_553ab0:
    // 0x553ab0: 0x92a20036  lbu         $v0, 0x36($s5)
    ctx->pc = 0x553ab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
label_553ab4:
    // 0x553ab4: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x553ab4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
label_553ab8:
    // 0x553ab8: 0x264500f0  addiu       $a1, $s2, 0xF0
    ctx->pc = 0x553ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_553abc:
    // 0x553abc: 0xc64200f8  lwc1        $f2, 0xF8($s2)
    ctx->pc = 0x553abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_553ac0:
    // 0x553ac0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_553ac4:
    if (ctx->pc == 0x553AC4u) {
        ctx->pc = 0x553AC4u;
            // 0x553ac4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x553AC8u;
        goto label_553ac8;
    }
    ctx->pc = 0x553AC0u;
    {
        const bool branch_taken_0x553ac0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x553AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553AC0u;
            // 0x553ac4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553ac0) {
            ctx->pc = 0x553AD4u;
            goto label_553ad4;
        }
    }
    ctx->pc = 0x553AC8u;
label_553ac8:
    // 0x553ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x553ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553acc:
    // 0x553acc: 0x10000008  b           . + 4 + (0x8 << 2)
label_553ad0:
    if (ctx->pc == 0x553AD0u) {
        ctx->pc = 0x553AD0u;
            // 0x553ad0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553AD4u;
        goto label_553ad4;
    }
    ctx->pc = 0x553ACCu;
    {
        const bool branch_taken_0x553acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553ACCu;
            // 0x553ad0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553acc) {
            ctx->pc = 0x553AF0u;
            goto label_553af0;
        }
    }
    ctx->pc = 0x553AD4u;
label_553ad4:
    // 0x553ad4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x553ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_553ad8:
    // 0x553ad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x553ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_553adc:
    // 0x553adc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553ae0:
    // 0x553ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553ae4:
    // 0x553ae4: 0x0  nop
    ctx->pc = 0x553ae4u;
    // NOP
label_553ae8:
    // 0x553ae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553aec:
    // 0x553aec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x553aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_553af0:
    // 0x553af0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_553af4:
    if (ctx->pc == 0x553AF4u) {
        ctx->pc = 0x553AF4u;
            // 0x553af4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x553AF8u;
        goto label_553af8;
    }
    ctx->pc = 0x553AF0u;
    {
        const bool branch_taken_0x553af0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x553AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553AF0u;
            // 0x553af4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553af0) {
            ctx->pc = 0x553B04u;
            goto label_553b04;
        }
    }
    ctx->pc = 0x553AF8u;
label_553af8:
    // 0x553af8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x553af8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553afc:
    // 0x553afc: 0x10000008  b           . + 4 + (0x8 << 2)
label_553b00:
    if (ctx->pc == 0x553B00u) {
        ctx->pc = 0x553B00u;
            // 0x553b00: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553B04u;
        goto label_553b04;
    }
    ctx->pc = 0x553AFCu;
    {
        const bool branch_taken_0x553afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553AFCu;
            // 0x553b00: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553afc) {
            ctx->pc = 0x553B20u;
            goto label_553b20;
        }
    }
    ctx->pc = 0x553B04u;
label_553b04:
    // 0x553b04: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x553b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_553b08:
    // 0x553b08: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x553b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553b0c:
    // 0x553b0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553b10:
    // 0x553b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553b14:
    // 0x553b14: 0x0  nop
    ctx->pc = 0x553b14u;
    // NOP
label_553b18:
    // 0x553b18: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553b1c:
    // 0x553b1c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553b1cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553b20:
    // 0x553b20: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_553b24:
    if (ctx->pc == 0x553B24u) {
        ctx->pc = 0x553B24u;
            // 0x553b24: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x553B28u;
        goto label_553b28;
    }
    ctx->pc = 0x553B20u;
    {
        const bool branch_taken_0x553b20 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553b20) {
            ctx->pc = 0x553B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553B20u;
            // 0x553b24: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553B34u;
            goto label_553b34;
        }
    }
    ctx->pc = 0x553B28u;
label_553b28:
    // 0x553b28: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x553b28u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553b2c:
    // 0x553b2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_553b30:
    if (ctx->pc == 0x553B30u) {
        ctx->pc = 0x553B30u;
            // 0x553b30: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553B34u;
        goto label_553b34;
    }
    ctx->pc = 0x553B2Cu;
    {
        const bool branch_taken_0x553b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553B2Cu;
            // 0x553b30: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553b2c) {
            ctx->pc = 0x553B4Cu;
            goto label_553b4c;
        }
    }
    ctx->pc = 0x553B34u;
label_553b34:
    // 0x553b34: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x553b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_553b38:
    // 0x553b38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553b3c:
    // 0x553b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553b40:
    // 0x553b40: 0x0  nop
    ctx->pc = 0x553b40u;
    // NOP
label_553b44:
    // 0x553b44: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_553b48:
    // 0x553b48: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x553b48u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553b4c:
    // 0x553b4c: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x553b4cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_553b50:
    // 0x553b50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553b54:
    // 0x553b54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553b58:
    // 0x553b58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x553b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_553b5c:
    // 0x553b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x553b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553b60:
    // 0x553b60: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x553b60u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_553b64:
    // 0x553b64: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553b68:
    // 0x553b68: 0xc0bc284  jal         func_2F0A10
label_553b6c:
    if (ctx->pc == 0x553B6Cu) {
        ctx->pc = 0x553B6Cu;
            // 0x553b6c: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x553B70u;
        goto label_553b70;
    }
    ctx->pc = 0x553B68u;
    SET_GPR_U32(ctx, 31, 0x553B70u);
    ctx->pc = 0x553B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553B68u;
            // 0x553b6c: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553B70u; }
        if (ctx->pc != 0x553B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553B70u; }
        if (ctx->pc != 0x553B70u) { return; }
    }
    ctx->pc = 0x553B70u;
label_553b70:
    // 0x553b70: 0x92a20037  lbu         $v0, 0x37($s5)
    ctx->pc = 0x553b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
label_553b74:
    // 0x553b74: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_553b78:
    if (ctx->pc == 0x553B78u) {
        ctx->pc = 0x553B78u;
            // 0x553b78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x553B7Cu;
        goto label_553b7c;
    }
    ctx->pc = 0x553B74u;
    {
        const bool branch_taken_0x553b74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x553b74) {
            ctx->pc = 0x553B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553B74u;
            // 0x553b78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553B88u;
            goto label_553b88;
        }
    }
    ctx->pc = 0x553B7Cu;
label_553b7c:
    // 0x553b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x553b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553b80:
    // 0x553b80: 0x10000007  b           . + 4 + (0x7 << 2)
label_553b84:
    if (ctx->pc == 0x553B84u) {
        ctx->pc = 0x553B84u;
            // 0x553b84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553B88u;
        goto label_553b88;
    }
    ctx->pc = 0x553B80u;
    {
        const bool branch_taken_0x553b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553B80u;
            // 0x553b84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553b80) {
            ctx->pc = 0x553BA0u;
            goto label_553ba0;
        }
    }
    ctx->pc = 0x553B88u;
label_553b88:
    // 0x553b88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x553b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_553b8c:
    // 0x553b8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553b90:
    // 0x553b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553b94:
    // 0x553b94: 0x0  nop
    ctx->pc = 0x553b94u;
    // NOP
label_553b98:
    // 0x553b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553b9c:
    // 0x553b9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x553b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_553ba0:
    // 0x553ba0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x553ba0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_553ba4:
    // 0x553ba4: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x553ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_553ba8:
    // 0x553ba8: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x553ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_553bac:
    // 0x553bac: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_553bb0:
    if (ctx->pc == 0x553BB0u) {
        ctx->pc = 0x553BB0u;
            // 0x553bb0: 0x26450050  addiu       $a1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x553BB4u;
        goto label_553bb4;
    }
    ctx->pc = 0x553BACu;
    {
        const bool branch_taken_0x553bac = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x553BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553BACu;
            // 0x553bb0: 0x26450050  addiu       $a1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553bac) {
            ctx->pc = 0x553BC0u;
            goto label_553bc0;
        }
    }
    ctx->pc = 0x553BB4u;
label_553bb4:
    // 0x553bb4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x553bb4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553bb8:
    // 0x553bb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_553bbc:
    if (ctx->pc == 0x553BBCu) {
        ctx->pc = 0x553BBCu;
            // 0x553bbc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553BC0u;
        goto label_553bc0;
    }
    ctx->pc = 0x553BB8u;
    {
        const bool branch_taken_0x553bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553BB8u;
            // 0x553bbc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553bb8) {
            ctx->pc = 0x553BDCu;
            goto label_553bdc;
        }
    }
    ctx->pc = 0x553BC0u;
label_553bc0:
    // 0x553bc0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x553bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_553bc4:
    // 0x553bc4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x553bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553bc8:
    // 0x553bc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553bcc:
    // 0x553bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553bd0:
    // 0x553bd0: 0x0  nop
    ctx->pc = 0x553bd0u;
    // NOP
label_553bd4:
    // 0x553bd4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553bd8:
    // 0x553bd8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553bd8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553bdc:
    // 0x553bdc: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_553be0:
    if (ctx->pc == 0x553BE0u) {
        ctx->pc = 0x553BE0u;
            // 0x553be0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x553BE4u;
        goto label_553be4;
    }
    ctx->pc = 0x553BDCu;
    {
        const bool branch_taken_0x553bdc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553bdc) {
            ctx->pc = 0x553BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553BDCu;
            // 0x553be0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553BF0u;
            goto label_553bf0;
        }
    }
    ctx->pc = 0x553BE4u;
label_553be4:
    // 0x553be4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x553be4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553be8:
    // 0x553be8: 0x10000007  b           . + 4 + (0x7 << 2)
label_553bec:
    if (ctx->pc == 0x553BECu) {
        ctx->pc = 0x553BECu;
            // 0x553bec: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553BF0u;
        goto label_553bf0;
    }
    ctx->pc = 0x553BE8u;
    {
        const bool branch_taken_0x553be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553BE8u;
            // 0x553bec: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553be8) {
            ctx->pc = 0x553C08u;
            goto label_553c08;
        }
    }
    ctx->pc = 0x553BF0u;
label_553bf0:
    // 0x553bf0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x553bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_553bf4:
    // 0x553bf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553bf8:
    // 0x553bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553bfc:
    // 0x553bfc: 0x0  nop
    ctx->pc = 0x553bfcu;
    // NOP
label_553c00:
    // 0x553c00: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_553c04:
    // 0x553c04: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x553c04u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553c08:
    // 0x553c08: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x553c08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_553c0c:
    // 0x553c0c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553c10:
    // 0x553c10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x553c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_553c14:
    // 0x553c14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553c18:
    // 0x553c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x553c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553c1c:
    // 0x553c1c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x553c1cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_553c20:
    // 0x553c20: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x553c20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_553c24:
    // 0x553c24: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553c28:
    // 0x553c28: 0xc0bc284  jal         func_2F0A10
label_553c2c:
    if (ctx->pc == 0x553C2Cu) {
        ctx->pc = 0x553C2Cu;
            // 0x553c2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x553C30u;
        goto label_553c30;
    }
    ctx->pc = 0x553C28u;
    SET_GPR_U32(ctx, 31, 0x553C30u);
    ctx->pc = 0x553C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553C28u;
            // 0x553c2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553C30u; }
        if (ctx->pc != 0x553C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553C30u; }
        if (ctx->pc != 0x553C30u) { return; }
    }
    ctx->pc = 0x553C30u;
label_553c30:
    // 0x553c30: 0x86a20008  lh          $v0, 0x8($s5)
    ctx->pc = 0x553c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_553c34:
    // 0x553c34: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x553c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_553c38:
    // 0x553c38: 0x86a4000a  lh          $a0, 0xA($s5)
    ctx->pc = 0x553c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
label_553c3c:
    // 0x553c3c: 0xc6550128  lwc1        $f21, 0x128($s2)
    ctx->pc = 0x553c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_553c40:
    // 0x553c40: 0xc654012c  lwc1        $f20, 0x12C($s2)
    ctx->pc = 0x553c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_553c44:
    // 0x553c44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x553c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553c48:
    // 0x553c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x553c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553c4c:
    // 0x553c4c: 0x0  nop
    ctx->pc = 0x553c4cu;
    // NOP
label_553c50:
    // 0x553c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553c54:
    // 0x553c54: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x553c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_553c58:
    // 0x553c58: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x553c58u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553c5c:
    // 0x553c5c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x553c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_553c60:
    // 0x553c60: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x553c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
label_553c64:
    // 0x553c64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x553c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553c68:
    // 0x553c68: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x553c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_553c6c:
    // 0x553c6c: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x553c6cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_553c70:
    // 0x553c70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x553c70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553c74:
    // 0x553c74: 0x0  nop
    ctx->pc = 0x553c74u;
    // NOP
label_553c78:
    // 0x553c78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553c7c:
    // 0x553c7c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x553c7cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_553c80:
    // 0x553c80: 0x86a3000c  lh          $v1, 0xC($s5)
    ctx->pc = 0x553c80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_553c84:
    // 0x553c84: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x553c84u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_553c88:
    // 0x553c88: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
label_553c8c:
    if (ctx->pc == 0x553C8Cu) {
        ctx->pc = 0x553C8Cu;
            // 0x553c8c: 0x32820003  andi        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x553C90u;
        goto label_553c90;
    }
    ctx->pc = 0x553C88u;
    {
        const bool branch_taken_0x553c88 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x553C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553C88u;
            // 0x553c8c: 0x32820003  andi        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553c88) {
            ctx->pc = 0x553C9Cu;
            goto label_553c9c;
        }
    }
    ctx->pc = 0x553C90u;
label_553c90:
    // 0x553c90: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_553c94:
    if (ctx->pc == 0x553C94u) {
        ctx->pc = 0x553C94u;
            // 0x553c94: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->pc = 0x553C98u;
        goto label_553c98;
    }
    ctx->pc = 0x553C90u;
    {
        const bool branch_taken_0x553c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x553c90) {
            ctx->pc = 0x553C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553C90u;
            // 0x553c94: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x553CA0u;
            goto label_553ca0;
        }
    }
    ctx->pc = 0x553C98u;
label_553c98:
    // 0x553c98: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x553c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_553c9c:
    // 0x553c9c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x553c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_553ca0:
    // 0x553ca0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x553ca0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553ca4:
    // 0x553ca4: 0x86a3000e  lh          $v1, 0xE($s5)
    ctx->pc = 0x553ca4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_553ca8:
    // 0x553ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553cac:
    // 0x553cac: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x553cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_553cb0:
    // 0x553cb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x553cb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_553cb4:
    // 0x553cb4: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x553cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_553cb8:
    // 0x553cb8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_553cbc:
    if (ctx->pc == 0x553CBCu) {
        ctx->pc = 0x553CBCu;
            // 0x553cbc: 0x141083  sra         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
        ctx->pc = 0x553CC0u;
        goto label_553cc0;
    }
    ctx->pc = 0x553CB8u;
    {
        const bool branch_taken_0x553cb8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x553CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553CB8u;
            // 0x553cbc: 0x141083  sra         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553cb8) {
            ctx->pc = 0x553CC8u;
            goto label_553cc8;
        }
    }
    ctx->pc = 0x553CC0u;
label_553cc0:
    // 0x553cc0: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x553cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_553cc4:
    // 0x553cc4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x553cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_553cc8:
    // 0x553cc8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x553cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_553ccc:
    // 0x553ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553cd0:
    // 0x553cd0: 0x2682fff9  addiu       $v0, $s4, -0x7
    ctx->pc = 0x553cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967289));
label_553cd4:
    // 0x553cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553cd8:
    // 0x553cd8: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x553cd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_553cdc:
    // 0x553cdc: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x553cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_553ce0:
    // 0x553ce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x553ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_553ce4:
    // 0x553ce4: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x553ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_553ce8:
    // 0x553ce8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_553cec:
    if (ctx->pc == 0x553CECu) {
        ctx->pc = 0x553CF0u;
        goto label_553cf0;
    }
    ctx->pc = 0x553CE8u;
    {
        const bool branch_taken_0x553ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x553ce8) {
            ctx->pc = 0x553D50u;
            goto label_553d50;
        }
    }
    ctx->pc = 0x553CF0u;
label_553cf0:
    // 0x553cf0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x553cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_553cf4:
    // 0x553cf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x553cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_553cf8:
    // 0x553cf8: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x553cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
label_553cfc:
    // 0x553cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x553cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_553d00:
    // 0x553d00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x553d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_553d04:
    // 0x553d04: 0x400008  jr          $v0
label_553d08:
    if (ctx->pc == 0x553D08u) {
        ctx->pc = 0x553D0Cu;
        goto label_553d0c;
    }
    ctx->pc = 0x553D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x553D10u: goto label_553d10;
            case 0x553D28u: goto label_553d28;
            case 0x553D40u: goto label_553d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x553D0Cu;
label_553d0c:
    // 0x553d0c: 0x0  nop
    ctx->pc = 0x553d0cu;
    // NOP
label_553d10:
    // 0x553d10: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x553d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_553d14:
    // 0x553d14: 0xc0b90e0  jal         func_2E4380
label_553d18:
    if (ctx->pc == 0x553D18u) {
        ctx->pc = 0x553D18u;
            // 0x553d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x553D1Cu;
        goto label_553d1c;
    }
    ctx->pc = 0x553D14u;
    SET_GPR_U32(ctx, 31, 0x553D1Cu);
    ctx->pc = 0x553D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553D14u;
            // 0x553d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553D1Cu; }
        if (ctx->pc != 0x553D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553D1Cu; }
        if (ctx->pc != 0x553D1Cu) { return; }
    }
    ctx->pc = 0x553D1Cu;
label_553d1c:
    // 0x553d1c: 0x1000000c  b           . + 4 + (0xC << 2)
label_553d20:
    if (ctx->pc == 0x553D20u) {
        ctx->pc = 0x553D20u;
            // 0x553d20: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x553D24u;
        goto label_553d24;
    }
    ctx->pc = 0x553D1Cu;
    {
        const bool branch_taken_0x553d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553D1Cu;
            // 0x553d20: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553d1c) {
            ctx->pc = 0x553D50u;
            goto label_553d50;
        }
    }
    ctx->pc = 0x553D24u;
label_553d24:
    // 0x553d24: 0x0  nop
    ctx->pc = 0x553d24u;
    // NOP
label_553d28:
    // 0x553d28: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x553d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_553d2c:
    // 0x553d2c: 0xc0b90e0  jal         func_2E4380
label_553d30:
    if (ctx->pc == 0x553D30u) {
        ctx->pc = 0x553D30u;
            // 0x553d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x553D34u;
        goto label_553d34;
    }
    ctx->pc = 0x553D2Cu;
    SET_GPR_U32(ctx, 31, 0x553D34u);
    ctx->pc = 0x553D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553D2Cu;
            // 0x553d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553D34u; }
        if (ctx->pc != 0x553D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553D34u; }
        if (ctx->pc != 0x553D34u) { return; }
    }
    ctx->pc = 0x553D34u;
label_553d34:
    // 0x553d34: 0x10000006  b           . + 4 + (0x6 << 2)
label_553d38:
    if (ctx->pc == 0x553D38u) {
        ctx->pc = 0x553D38u;
            // 0x553d38: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x553D3Cu;
        goto label_553d3c;
    }
    ctx->pc = 0x553D34u;
    {
        const bool branch_taken_0x553d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553D34u;
            // 0x553d38: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553d34) {
            ctx->pc = 0x553D50u;
            goto label_553d50;
        }
    }
    ctx->pc = 0x553D3Cu;
label_553d3c:
    // 0x553d3c: 0x0  nop
    ctx->pc = 0x553d3cu;
    // NOP
label_553d40:
    // 0x553d40: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x553d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_553d44:
    // 0x553d44: 0xc0b90e0  jal         func_2E4380
label_553d48:
    if (ctx->pc == 0x553D48u) {
        ctx->pc = 0x553D48u;
            // 0x553d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x553D4Cu;
        goto label_553d4c;
    }
    ctx->pc = 0x553D44u;
    SET_GPR_U32(ctx, 31, 0x553D4Cu);
    ctx->pc = 0x553D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553D44u;
            // 0x553d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553D4Cu; }
        if (ctx->pc != 0x553D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553D4Cu; }
        if (ctx->pc != 0x553D4Cu) { return; }
    }
    ctx->pc = 0x553D4Cu;
label_553d4c:
    // 0x553d4c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x553d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_553d50:
    // 0x553d50: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_553d54:
    if (ctx->pc == 0x553D54u) {
        ctx->pc = 0x553D54u;
            // 0x553d54: 0x26450330  addiu       $a1, $s2, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
        ctx->pc = 0x553D58u;
        goto label_553d58;
    }
    ctx->pc = 0x553D50u;
    {
        const bool branch_taken_0x553d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x553d50) {
            ctx->pc = 0x553D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553D50u;
            // 0x553d54: 0x26450330  addiu       $a1, $s2, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553D64u;
            goto label_553d64;
        }
    }
    ctx->pc = 0x553D58u;
label_553d58:
    // 0x553d58: 0x26820012  addiu       $v0, $s4, 0x12
    ctx->pc = 0x553d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18));
label_553d5c:
    // 0x553d5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x553d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_553d60:
    // 0x553d60: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x553d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_553d64:
    // 0x553d64: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x553d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_553d68:
    // 0x553d68: 0x12830009  beq         $s4, $v1, . + 4 + (0x9 << 2)
label_553d6c:
    if (ctx->pc == 0x553D6Cu) {
        ctx->pc = 0x553D6Cu;
            // 0x553d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x553D70u;
        goto label_553d70;
    }
    ctx->pc = 0x553D68u;
    {
        const bool branch_taken_0x553d68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x553D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553D68u;
            // 0x553d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553d68) {
            ctx->pc = 0x553D90u;
            goto label_553d90;
        }
    }
    ctx->pc = 0x553D70u;
label_553d70:
    // 0x553d70: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x553d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_553d74:
    // 0x553d74: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_553d78:
    if (ctx->pc == 0x553D78u) {
        ctx->pc = 0x553D7Cu;
        goto label_553d7c;
    }
    ctx->pc = 0x553D74u;
    {
        const bool branch_taken_0x553d74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x553d74) {
            ctx->pc = 0x553D88u;
            goto label_553d88;
        }
    }
    ctx->pc = 0x553D7Cu;
label_553d7c:
    // 0x553d7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_553d80:
    if (ctx->pc == 0x553D80u) {
        ctx->pc = 0x553D84u;
        goto label_553d84;
    }
    ctx->pc = 0x553D7Cu;
    {
        const bool branch_taken_0x553d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x553d7c) {
            ctx->pc = 0x553D98u;
            goto label_553d98;
        }
    }
    ctx->pc = 0x553D84u;
label_553d84:
    // 0x553d84: 0x0  nop
    ctx->pc = 0x553d84u;
    // NOP
label_553d88:
    // 0x553d88: 0x10000003  b           . + 4 + (0x3 << 2)
label_553d8c:
    if (ctx->pc == 0x553D8Cu) {
        ctx->pc = 0x553D8Cu;
            // 0x553d8c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x553D90u;
        goto label_553d90;
    }
    ctx->pc = 0x553D88u;
    {
        const bool branch_taken_0x553d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553D88u;
            // 0x553d8c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553d88) {
            ctx->pc = 0x553D98u;
            goto label_553d98;
        }
    }
    ctx->pc = 0x553D90u;
label_553d90:
    // 0x553d90: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x553d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_553d94:
    // 0x553d94: 0x0  nop
    ctx->pc = 0x553d94u;
    // NOP
label_553d98:
    // 0x553d98: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x553d98u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553d9c:
    // 0x553d9c: 0x0  nop
    ctx->pc = 0x553d9cu;
    // NOP
label_553da0:
    // 0x553da0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x553da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_553da4:
    // 0x553da4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x553da4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553da8:
    // 0x553da8: 0x0  nop
    ctx->pc = 0x553da8u;
    // NOP
label_553dac:
    // 0x553dac: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x553dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_553db0:
    // 0x553db0: 0x46156380  add.s       $f14, $f12, $f21
    ctx->pc = 0x553db0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_553db4:
    // 0x553db4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_553db8:
    if (ctx->pc == 0x553DB8u) {
        ctx->pc = 0x553DB8u;
            // 0x553db8: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x553DBCu;
        goto label_553dbc;
    }
    ctx->pc = 0x553DB4u;
    {
        const bool branch_taken_0x553db4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x553DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553DB4u;
            // 0x553db8: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553db4) {
            ctx->pc = 0x553DC8u;
            goto label_553dc8;
        }
    }
    ctx->pc = 0x553DBCu;
label_553dbc:
    // 0x553dbc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x553dbcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553dc0:
    // 0x553dc0: 0x10000008  b           . + 4 + (0x8 << 2)
label_553dc4:
    if (ctx->pc == 0x553DC4u) {
        ctx->pc = 0x553DC4u;
            // 0x553dc4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553DC8u;
        goto label_553dc8;
    }
    ctx->pc = 0x553DC0u;
    {
        const bool branch_taken_0x553dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553DC0u;
            // 0x553dc4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553dc0) {
            ctx->pc = 0x553DE4u;
            goto label_553de4;
        }
    }
    ctx->pc = 0x553DC8u;
label_553dc8:
    // 0x553dc8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x553dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_553dcc:
    // 0x553dcc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x553dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553dd0:
    // 0x553dd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553dd4:
    // 0x553dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553dd8:
    // 0x553dd8: 0x0  nop
    ctx->pc = 0x553dd8u;
    // NOP
label_553ddc:
    // 0x553ddc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553de0:
    // 0x553de0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553de0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553de4:
    // 0x553de4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_553de8:
    if (ctx->pc == 0x553DE8u) {
        ctx->pc = 0x553DE8u;
            // 0x553de8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x553DECu;
        goto label_553dec;
    }
    ctx->pc = 0x553DE4u;
    {
        const bool branch_taken_0x553de4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553de4) {
            ctx->pc = 0x553DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553DE4u;
            // 0x553de8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553DF8u;
            goto label_553df8;
        }
    }
    ctx->pc = 0x553DECu;
label_553dec:
    // 0x553dec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x553decu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553df0:
    // 0x553df0: 0x10000007  b           . + 4 + (0x7 << 2)
label_553df4:
    if (ctx->pc == 0x553DF4u) {
        ctx->pc = 0x553DF4u;
            // 0x553df4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553DF8u;
        goto label_553df8;
    }
    ctx->pc = 0x553DF0u;
    {
        const bool branch_taken_0x553df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553DF0u;
            // 0x553df4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553df0) {
            ctx->pc = 0x553E10u;
            goto label_553e10;
        }
    }
    ctx->pc = 0x553DF8u;
label_553df8:
    // 0x553df8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x553df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_553dfc:
    // 0x553dfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553e00:
    // 0x553e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553e04:
    // 0x553e04: 0x0  nop
    ctx->pc = 0x553e04u;
    // NOP
label_553e08:
    // 0x553e08: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_553e0c:
    // 0x553e0c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x553e0cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553e10:
    // 0x553e10: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x553e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_553e14:
    // 0x553e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x553e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_553e18:
    // 0x553e18: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x553e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_553e1c:
    // 0x553e1c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x553e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_553e20:
    // 0x553e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x553e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_553e24:
    // 0x553e24: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_553e28:
    if (ctx->pc == 0x553E28u) {
        ctx->pc = 0x553E28u;
            // 0x553e28: 0x8fa600d0  lw          $a2, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x553E2Cu;
        goto label_553e2c;
    }
    ctx->pc = 0x553E24u;
    {
        const bool branch_taken_0x553e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x553e24) {
            ctx->pc = 0x553E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553E24u;
            // 0x553e28: 0x8fa600d0  lw          $a2, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553E30u;
            goto label_553e30;
        }
    }
    ctx->pc = 0x553E2Cu;
label_553e2c:
    // 0x553e2c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x553e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_553e30:
    // 0x553e30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553e34:
    // 0x553e34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553e38:
    // 0x553e38: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553e3c:
    // 0x553e3c: 0xc0bc284  jal         func_2F0A10
label_553e40:
    if (ctx->pc == 0x553E40u) {
        ctx->pc = 0x553E40u;
            // 0x553e40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x553E44u;
        goto label_553e44;
    }
    ctx->pc = 0x553E3Cu;
    SET_GPR_U32(ctx, 31, 0x553E44u);
    ctx->pc = 0x553E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553E3Cu;
            // 0x553e40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553E44u; }
        if (ctx->pc != 0x553E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553E44u; }
        if (ctx->pc != 0x553E44u) { return; }
    }
    ctx->pc = 0x553E44u;
label_553e44:
    // 0x553e44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x553e44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_553e48:
    // 0x553e48: 0x2a810010  slti        $at, $s4, 0x10
    ctx->pc = 0x553e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
label_553e4c:
    // 0x553e4c: 0x5420ff8d  bnel        $at, $zero, . + 4 + (-0x73 << 2)
label_553e50:
    if (ctx->pc == 0x553E50u) {
        ctx->pc = 0x553E50u;
            // 0x553e50: 0x86a3000c  lh          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->pc = 0x553E54u;
        goto label_553e54;
    }
    ctx->pc = 0x553E4Cu;
    {
        const bool branch_taken_0x553e4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x553e4c) {
            ctx->pc = 0x553E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553E4Cu;
            // 0x553e50: 0x86a3000c  lh          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_553c84;
        }
    }
    ctx->pc = 0x553E54u;
label_553e54:
    // 0x553e54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x553e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_553e58:
    // 0x553e58: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x553e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_553e5c:
    // 0x553e5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x553e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_553e60:
    // 0x553e60: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x553e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_553e64:
    // 0x553e64: 0x320f809  jalr        $t9
label_553e68:
    if (ctx->pc == 0x553E68u) {
        ctx->pc = 0x553E6Cu;
        goto label_553e6c;
    }
    ctx->pc = 0x553E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553E6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x553E6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553E6Cu; }
            if (ctx->pc != 0x553E6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x553E6Cu;
label_553e6c:
    // 0x553e6c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x553e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_553e70:
    // 0x553e70: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x553e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_553e74:
    // 0x553e74: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x553e74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_553e78:
    // 0x553e78: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x553e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_553e7c:
    // 0x553e7c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x553e7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_553e80:
    // 0x553e80: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x553e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_553e84:
    // 0x553e84: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x553e84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_553e88:
    // 0x553e88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x553e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_553e8c:
    // 0x553e8c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x553e8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_553e90:
    // 0x553e90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x553e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_553e94:
    // 0x553e94: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x553e94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_553e98:
    // 0x553e98: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x553e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_553e9c:
    // 0x553e9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x553e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_553ea0:
    // 0x553ea0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x553ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_553ea4:
    // 0x553ea4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x553ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_553ea8:
    // 0x553ea8: 0x3e00008  jr          $ra
label_553eac:
    if (ctx->pc == 0x553EACu) {
        ctx->pc = 0x553EACu;
            // 0x553eac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x553EB0u;
        goto label_fallthrough_0x553ea8;
    }
    ctx->pc = 0x553EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x553EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553EA8u;
            // 0x553eac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x553ea8:
    ctx->pc = 0x553EB0u;
}
