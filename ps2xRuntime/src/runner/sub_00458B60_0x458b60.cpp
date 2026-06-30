#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00458B60
// Address: 0x458b60 - 0x459080
void sub_00458B60_0x458b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458B60_0x458b60");
#endif

    switch (ctx->pc) {
        case 0x458b60u: goto label_458b60;
        case 0x458b64u: goto label_458b64;
        case 0x458b68u: goto label_458b68;
        case 0x458b6cu: goto label_458b6c;
        case 0x458b70u: goto label_458b70;
        case 0x458b74u: goto label_458b74;
        case 0x458b78u: goto label_458b78;
        case 0x458b7cu: goto label_458b7c;
        case 0x458b80u: goto label_458b80;
        case 0x458b84u: goto label_458b84;
        case 0x458b88u: goto label_458b88;
        case 0x458b8cu: goto label_458b8c;
        case 0x458b90u: goto label_458b90;
        case 0x458b94u: goto label_458b94;
        case 0x458b98u: goto label_458b98;
        case 0x458b9cu: goto label_458b9c;
        case 0x458ba0u: goto label_458ba0;
        case 0x458ba4u: goto label_458ba4;
        case 0x458ba8u: goto label_458ba8;
        case 0x458bacu: goto label_458bac;
        case 0x458bb0u: goto label_458bb0;
        case 0x458bb4u: goto label_458bb4;
        case 0x458bb8u: goto label_458bb8;
        case 0x458bbcu: goto label_458bbc;
        case 0x458bc0u: goto label_458bc0;
        case 0x458bc4u: goto label_458bc4;
        case 0x458bc8u: goto label_458bc8;
        case 0x458bccu: goto label_458bcc;
        case 0x458bd0u: goto label_458bd0;
        case 0x458bd4u: goto label_458bd4;
        case 0x458bd8u: goto label_458bd8;
        case 0x458bdcu: goto label_458bdc;
        case 0x458be0u: goto label_458be0;
        case 0x458be4u: goto label_458be4;
        case 0x458be8u: goto label_458be8;
        case 0x458becu: goto label_458bec;
        case 0x458bf0u: goto label_458bf0;
        case 0x458bf4u: goto label_458bf4;
        case 0x458bf8u: goto label_458bf8;
        case 0x458bfcu: goto label_458bfc;
        case 0x458c00u: goto label_458c00;
        case 0x458c04u: goto label_458c04;
        case 0x458c08u: goto label_458c08;
        case 0x458c0cu: goto label_458c0c;
        case 0x458c10u: goto label_458c10;
        case 0x458c14u: goto label_458c14;
        case 0x458c18u: goto label_458c18;
        case 0x458c1cu: goto label_458c1c;
        case 0x458c20u: goto label_458c20;
        case 0x458c24u: goto label_458c24;
        case 0x458c28u: goto label_458c28;
        case 0x458c2cu: goto label_458c2c;
        case 0x458c30u: goto label_458c30;
        case 0x458c34u: goto label_458c34;
        case 0x458c38u: goto label_458c38;
        case 0x458c3cu: goto label_458c3c;
        case 0x458c40u: goto label_458c40;
        case 0x458c44u: goto label_458c44;
        case 0x458c48u: goto label_458c48;
        case 0x458c4cu: goto label_458c4c;
        case 0x458c50u: goto label_458c50;
        case 0x458c54u: goto label_458c54;
        case 0x458c58u: goto label_458c58;
        case 0x458c5cu: goto label_458c5c;
        case 0x458c60u: goto label_458c60;
        case 0x458c64u: goto label_458c64;
        case 0x458c68u: goto label_458c68;
        case 0x458c6cu: goto label_458c6c;
        case 0x458c70u: goto label_458c70;
        case 0x458c74u: goto label_458c74;
        case 0x458c78u: goto label_458c78;
        case 0x458c7cu: goto label_458c7c;
        case 0x458c80u: goto label_458c80;
        case 0x458c84u: goto label_458c84;
        case 0x458c88u: goto label_458c88;
        case 0x458c8cu: goto label_458c8c;
        case 0x458c90u: goto label_458c90;
        case 0x458c94u: goto label_458c94;
        case 0x458c98u: goto label_458c98;
        case 0x458c9cu: goto label_458c9c;
        case 0x458ca0u: goto label_458ca0;
        case 0x458ca4u: goto label_458ca4;
        case 0x458ca8u: goto label_458ca8;
        case 0x458cacu: goto label_458cac;
        case 0x458cb0u: goto label_458cb0;
        case 0x458cb4u: goto label_458cb4;
        case 0x458cb8u: goto label_458cb8;
        case 0x458cbcu: goto label_458cbc;
        case 0x458cc0u: goto label_458cc0;
        case 0x458cc4u: goto label_458cc4;
        case 0x458cc8u: goto label_458cc8;
        case 0x458cccu: goto label_458ccc;
        case 0x458cd0u: goto label_458cd0;
        case 0x458cd4u: goto label_458cd4;
        case 0x458cd8u: goto label_458cd8;
        case 0x458cdcu: goto label_458cdc;
        case 0x458ce0u: goto label_458ce0;
        case 0x458ce4u: goto label_458ce4;
        case 0x458ce8u: goto label_458ce8;
        case 0x458cecu: goto label_458cec;
        case 0x458cf0u: goto label_458cf0;
        case 0x458cf4u: goto label_458cf4;
        case 0x458cf8u: goto label_458cf8;
        case 0x458cfcu: goto label_458cfc;
        case 0x458d00u: goto label_458d00;
        case 0x458d04u: goto label_458d04;
        case 0x458d08u: goto label_458d08;
        case 0x458d0cu: goto label_458d0c;
        case 0x458d10u: goto label_458d10;
        case 0x458d14u: goto label_458d14;
        case 0x458d18u: goto label_458d18;
        case 0x458d1cu: goto label_458d1c;
        case 0x458d20u: goto label_458d20;
        case 0x458d24u: goto label_458d24;
        case 0x458d28u: goto label_458d28;
        case 0x458d2cu: goto label_458d2c;
        case 0x458d30u: goto label_458d30;
        case 0x458d34u: goto label_458d34;
        case 0x458d38u: goto label_458d38;
        case 0x458d3cu: goto label_458d3c;
        case 0x458d40u: goto label_458d40;
        case 0x458d44u: goto label_458d44;
        case 0x458d48u: goto label_458d48;
        case 0x458d4cu: goto label_458d4c;
        case 0x458d50u: goto label_458d50;
        case 0x458d54u: goto label_458d54;
        case 0x458d58u: goto label_458d58;
        case 0x458d5cu: goto label_458d5c;
        case 0x458d60u: goto label_458d60;
        case 0x458d64u: goto label_458d64;
        case 0x458d68u: goto label_458d68;
        case 0x458d6cu: goto label_458d6c;
        case 0x458d70u: goto label_458d70;
        case 0x458d74u: goto label_458d74;
        case 0x458d78u: goto label_458d78;
        case 0x458d7cu: goto label_458d7c;
        case 0x458d80u: goto label_458d80;
        case 0x458d84u: goto label_458d84;
        case 0x458d88u: goto label_458d88;
        case 0x458d8cu: goto label_458d8c;
        case 0x458d90u: goto label_458d90;
        case 0x458d94u: goto label_458d94;
        case 0x458d98u: goto label_458d98;
        case 0x458d9cu: goto label_458d9c;
        case 0x458da0u: goto label_458da0;
        case 0x458da4u: goto label_458da4;
        case 0x458da8u: goto label_458da8;
        case 0x458dacu: goto label_458dac;
        case 0x458db0u: goto label_458db0;
        case 0x458db4u: goto label_458db4;
        case 0x458db8u: goto label_458db8;
        case 0x458dbcu: goto label_458dbc;
        case 0x458dc0u: goto label_458dc0;
        case 0x458dc4u: goto label_458dc4;
        case 0x458dc8u: goto label_458dc8;
        case 0x458dccu: goto label_458dcc;
        case 0x458dd0u: goto label_458dd0;
        case 0x458dd4u: goto label_458dd4;
        case 0x458dd8u: goto label_458dd8;
        case 0x458ddcu: goto label_458ddc;
        case 0x458de0u: goto label_458de0;
        case 0x458de4u: goto label_458de4;
        case 0x458de8u: goto label_458de8;
        case 0x458decu: goto label_458dec;
        case 0x458df0u: goto label_458df0;
        case 0x458df4u: goto label_458df4;
        case 0x458df8u: goto label_458df8;
        case 0x458dfcu: goto label_458dfc;
        case 0x458e00u: goto label_458e00;
        case 0x458e04u: goto label_458e04;
        case 0x458e08u: goto label_458e08;
        case 0x458e0cu: goto label_458e0c;
        case 0x458e10u: goto label_458e10;
        case 0x458e14u: goto label_458e14;
        case 0x458e18u: goto label_458e18;
        case 0x458e1cu: goto label_458e1c;
        case 0x458e20u: goto label_458e20;
        case 0x458e24u: goto label_458e24;
        case 0x458e28u: goto label_458e28;
        case 0x458e2cu: goto label_458e2c;
        case 0x458e30u: goto label_458e30;
        case 0x458e34u: goto label_458e34;
        case 0x458e38u: goto label_458e38;
        case 0x458e3cu: goto label_458e3c;
        case 0x458e40u: goto label_458e40;
        case 0x458e44u: goto label_458e44;
        case 0x458e48u: goto label_458e48;
        case 0x458e4cu: goto label_458e4c;
        case 0x458e50u: goto label_458e50;
        case 0x458e54u: goto label_458e54;
        case 0x458e58u: goto label_458e58;
        case 0x458e5cu: goto label_458e5c;
        case 0x458e60u: goto label_458e60;
        case 0x458e64u: goto label_458e64;
        case 0x458e68u: goto label_458e68;
        case 0x458e6cu: goto label_458e6c;
        case 0x458e70u: goto label_458e70;
        case 0x458e74u: goto label_458e74;
        case 0x458e78u: goto label_458e78;
        case 0x458e7cu: goto label_458e7c;
        case 0x458e80u: goto label_458e80;
        case 0x458e84u: goto label_458e84;
        case 0x458e88u: goto label_458e88;
        case 0x458e8cu: goto label_458e8c;
        case 0x458e90u: goto label_458e90;
        case 0x458e94u: goto label_458e94;
        case 0x458e98u: goto label_458e98;
        case 0x458e9cu: goto label_458e9c;
        case 0x458ea0u: goto label_458ea0;
        case 0x458ea4u: goto label_458ea4;
        case 0x458ea8u: goto label_458ea8;
        case 0x458eacu: goto label_458eac;
        case 0x458eb0u: goto label_458eb0;
        case 0x458eb4u: goto label_458eb4;
        case 0x458eb8u: goto label_458eb8;
        case 0x458ebcu: goto label_458ebc;
        case 0x458ec0u: goto label_458ec0;
        case 0x458ec4u: goto label_458ec4;
        case 0x458ec8u: goto label_458ec8;
        case 0x458eccu: goto label_458ecc;
        case 0x458ed0u: goto label_458ed0;
        case 0x458ed4u: goto label_458ed4;
        case 0x458ed8u: goto label_458ed8;
        case 0x458edcu: goto label_458edc;
        case 0x458ee0u: goto label_458ee0;
        case 0x458ee4u: goto label_458ee4;
        case 0x458ee8u: goto label_458ee8;
        case 0x458eecu: goto label_458eec;
        case 0x458ef0u: goto label_458ef0;
        case 0x458ef4u: goto label_458ef4;
        case 0x458ef8u: goto label_458ef8;
        case 0x458efcu: goto label_458efc;
        case 0x458f00u: goto label_458f00;
        case 0x458f04u: goto label_458f04;
        case 0x458f08u: goto label_458f08;
        case 0x458f0cu: goto label_458f0c;
        case 0x458f10u: goto label_458f10;
        case 0x458f14u: goto label_458f14;
        case 0x458f18u: goto label_458f18;
        case 0x458f1cu: goto label_458f1c;
        case 0x458f20u: goto label_458f20;
        case 0x458f24u: goto label_458f24;
        case 0x458f28u: goto label_458f28;
        case 0x458f2cu: goto label_458f2c;
        case 0x458f30u: goto label_458f30;
        case 0x458f34u: goto label_458f34;
        case 0x458f38u: goto label_458f38;
        case 0x458f3cu: goto label_458f3c;
        case 0x458f40u: goto label_458f40;
        case 0x458f44u: goto label_458f44;
        case 0x458f48u: goto label_458f48;
        case 0x458f4cu: goto label_458f4c;
        case 0x458f50u: goto label_458f50;
        case 0x458f54u: goto label_458f54;
        case 0x458f58u: goto label_458f58;
        case 0x458f5cu: goto label_458f5c;
        case 0x458f60u: goto label_458f60;
        case 0x458f64u: goto label_458f64;
        case 0x458f68u: goto label_458f68;
        case 0x458f6cu: goto label_458f6c;
        case 0x458f70u: goto label_458f70;
        case 0x458f74u: goto label_458f74;
        case 0x458f78u: goto label_458f78;
        case 0x458f7cu: goto label_458f7c;
        case 0x458f80u: goto label_458f80;
        case 0x458f84u: goto label_458f84;
        case 0x458f88u: goto label_458f88;
        case 0x458f8cu: goto label_458f8c;
        case 0x458f90u: goto label_458f90;
        case 0x458f94u: goto label_458f94;
        case 0x458f98u: goto label_458f98;
        case 0x458f9cu: goto label_458f9c;
        case 0x458fa0u: goto label_458fa0;
        case 0x458fa4u: goto label_458fa4;
        case 0x458fa8u: goto label_458fa8;
        case 0x458facu: goto label_458fac;
        case 0x458fb0u: goto label_458fb0;
        case 0x458fb4u: goto label_458fb4;
        case 0x458fb8u: goto label_458fb8;
        case 0x458fbcu: goto label_458fbc;
        case 0x458fc0u: goto label_458fc0;
        case 0x458fc4u: goto label_458fc4;
        case 0x458fc8u: goto label_458fc8;
        case 0x458fccu: goto label_458fcc;
        case 0x458fd0u: goto label_458fd0;
        case 0x458fd4u: goto label_458fd4;
        case 0x458fd8u: goto label_458fd8;
        case 0x458fdcu: goto label_458fdc;
        case 0x458fe0u: goto label_458fe0;
        case 0x458fe4u: goto label_458fe4;
        case 0x458fe8u: goto label_458fe8;
        case 0x458fecu: goto label_458fec;
        case 0x458ff0u: goto label_458ff0;
        case 0x458ff4u: goto label_458ff4;
        case 0x458ff8u: goto label_458ff8;
        case 0x458ffcu: goto label_458ffc;
        case 0x459000u: goto label_459000;
        case 0x459004u: goto label_459004;
        case 0x459008u: goto label_459008;
        case 0x45900cu: goto label_45900c;
        case 0x459010u: goto label_459010;
        case 0x459014u: goto label_459014;
        case 0x459018u: goto label_459018;
        case 0x45901cu: goto label_45901c;
        case 0x459020u: goto label_459020;
        case 0x459024u: goto label_459024;
        case 0x459028u: goto label_459028;
        case 0x45902cu: goto label_45902c;
        case 0x459030u: goto label_459030;
        case 0x459034u: goto label_459034;
        case 0x459038u: goto label_459038;
        case 0x45903cu: goto label_45903c;
        case 0x459040u: goto label_459040;
        case 0x459044u: goto label_459044;
        case 0x459048u: goto label_459048;
        case 0x45904cu: goto label_45904c;
        case 0x459050u: goto label_459050;
        case 0x459054u: goto label_459054;
        case 0x459058u: goto label_459058;
        case 0x45905cu: goto label_45905c;
        case 0x459060u: goto label_459060;
        case 0x459064u: goto label_459064;
        case 0x459068u: goto label_459068;
        case 0x45906cu: goto label_45906c;
        case 0x459070u: goto label_459070;
        case 0x459074u: goto label_459074;
        case 0x459078u: goto label_459078;
        case 0x45907cu: goto label_45907c;
        default: break;
    }

    ctx->pc = 0x458b60u;

label_458b60:
    // 0x458b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x458b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_458b64:
    // 0x458b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x458b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_458b68:
    // 0x458b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x458b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_458b6c:
    // 0x458b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_458b70:
    // 0x458b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x458b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_458b74:
    // 0x458b74: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_458b78:
    if (ctx->pc == 0x458B78u) {
        ctx->pc = 0x458B78u;
            // 0x458b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458B7Cu;
        goto label_458b7c;
    }
    ctx->pc = 0x458B74u;
    {
        const bool branch_taken_0x458b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x458B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458B74u;
            // 0x458b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458b74) {
            ctx->pc = 0x458CA8u;
            goto label_458ca8;
        }
    }
    ctx->pc = 0x458B7Cu;
label_458b7c:
    // 0x458b7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x458b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_458b80:
    // 0x458b80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x458b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_458b84:
    // 0x458b84: 0x2463e340  addiu       $v1, $v1, -0x1CC0
    ctx->pc = 0x458b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959936));
label_458b88:
    // 0x458b88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x458b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_458b8c:
    // 0x458b8c: 0x2442e378  addiu       $v0, $v0, -0x1C88
    ctx->pc = 0x458b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959992));
label_458b90:
    // 0x458b90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x458b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_458b94:
    // 0x458b94: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x458b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_458b98:
    // 0x458b98: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x458b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_458b9c:
    // 0x458b9c: 0xc0407c0  jal         func_101F00
label_458ba0:
    if (ctx->pc == 0x458BA0u) {
        ctx->pc = 0x458BA0u;
            // 0x458ba0: 0x24a58cc0  addiu       $a1, $a1, -0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->pc = 0x458BA4u;
        goto label_458ba4;
    }
    ctx->pc = 0x458B9Cu;
    SET_GPR_U32(ctx, 31, 0x458BA4u);
    ctx->pc = 0x458BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458B9Cu;
            // 0x458ba0: 0x24a58cc0  addiu       $a1, $a1, -0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458BA4u; }
        if (ctx->pc != 0x458BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458BA4u; }
        if (ctx->pc != 0x458BA4u) { return; }
    }
    ctx->pc = 0x458BA4u;
label_458ba4:
    // 0x458ba4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x458ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_458ba8:
    // 0x458ba8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_458bac:
    if (ctx->pc == 0x458BACu) {
        ctx->pc = 0x458BACu;
            // 0x458bac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x458BB0u;
        goto label_458bb0;
    }
    ctx->pc = 0x458BA8u;
    {
        const bool branch_taken_0x458ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ba8) {
            ctx->pc = 0x458BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458BA8u;
            // 0x458bac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458BBCu;
            goto label_458bbc;
        }
    }
    ctx->pc = 0x458BB0u;
label_458bb0:
    // 0x458bb0: 0xc07507c  jal         func_1D41F0
label_458bb4:
    if (ctx->pc == 0x458BB4u) {
        ctx->pc = 0x458BB4u;
            // 0x458bb4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x458BB8u;
        goto label_458bb8;
    }
    ctx->pc = 0x458BB0u;
    SET_GPR_U32(ctx, 31, 0x458BB8u);
    ctx->pc = 0x458BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458BB0u;
            // 0x458bb4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458BB8u; }
        if (ctx->pc != 0x458BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458BB8u; }
        if (ctx->pc != 0x458BB8u) { return; }
    }
    ctx->pc = 0x458BB8u;
label_458bb8:
    // 0x458bb8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x458bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_458bbc:
    // 0x458bbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_458bc0:
    if (ctx->pc == 0x458BC0u) {
        ctx->pc = 0x458BC0u;
            // 0x458bc0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x458BC4u;
        goto label_458bc4;
    }
    ctx->pc = 0x458BBCu;
    {
        const bool branch_taken_0x458bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bbc) {
            ctx->pc = 0x458BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458BBCu;
            // 0x458bc0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458BECu;
            goto label_458bec;
        }
    }
    ctx->pc = 0x458BC4u;
label_458bc4:
    // 0x458bc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_458bc8:
    if (ctx->pc == 0x458BC8u) {
        ctx->pc = 0x458BCCu;
        goto label_458bcc;
    }
    ctx->pc = 0x458BC4u;
    {
        const bool branch_taken_0x458bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bc4) {
            ctx->pc = 0x458BE8u;
            goto label_458be8;
        }
    }
    ctx->pc = 0x458BCCu;
label_458bcc:
    // 0x458bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_458bd0:
    if (ctx->pc == 0x458BD0u) {
        ctx->pc = 0x458BD4u;
        goto label_458bd4;
    }
    ctx->pc = 0x458BCCu;
    {
        const bool branch_taken_0x458bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bcc) {
            ctx->pc = 0x458BE8u;
            goto label_458be8;
        }
    }
    ctx->pc = 0x458BD4u;
label_458bd4:
    // 0x458bd4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x458bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_458bd8:
    // 0x458bd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_458bdc:
    if (ctx->pc == 0x458BDCu) {
        ctx->pc = 0x458BE0u;
        goto label_458be0;
    }
    ctx->pc = 0x458BD8u;
    {
        const bool branch_taken_0x458bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bd8) {
            ctx->pc = 0x458BE8u;
            goto label_458be8;
        }
    }
    ctx->pc = 0x458BE0u;
label_458be0:
    // 0x458be0: 0xc0400a8  jal         func_1002A0
label_458be4:
    if (ctx->pc == 0x458BE4u) {
        ctx->pc = 0x458BE8u;
        goto label_458be8;
    }
    ctx->pc = 0x458BE0u;
    SET_GPR_U32(ctx, 31, 0x458BE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458BE8u; }
        if (ctx->pc != 0x458BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458BE8u; }
        if (ctx->pc != 0x458BE8u) { return; }
    }
    ctx->pc = 0x458BE8u;
label_458be8:
    // 0x458be8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x458be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_458bec:
    // 0x458bec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_458bf0:
    if (ctx->pc == 0x458BF0u) {
        ctx->pc = 0x458BF0u;
            // 0x458bf0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x458BF4u;
        goto label_458bf4;
    }
    ctx->pc = 0x458BECu;
    {
        const bool branch_taken_0x458bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bec) {
            ctx->pc = 0x458BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458BECu;
            // 0x458bf0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458C1Cu;
            goto label_458c1c;
        }
    }
    ctx->pc = 0x458BF4u;
label_458bf4:
    // 0x458bf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_458bf8:
    if (ctx->pc == 0x458BF8u) {
        ctx->pc = 0x458BFCu;
        goto label_458bfc;
    }
    ctx->pc = 0x458BF4u;
    {
        const bool branch_taken_0x458bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bf4) {
            ctx->pc = 0x458C18u;
            goto label_458c18;
        }
    }
    ctx->pc = 0x458BFCu;
label_458bfc:
    // 0x458bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_458c00:
    if (ctx->pc == 0x458C00u) {
        ctx->pc = 0x458C04u;
        goto label_458c04;
    }
    ctx->pc = 0x458BFCu;
    {
        const bool branch_taken_0x458bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458bfc) {
            ctx->pc = 0x458C18u;
            goto label_458c18;
        }
    }
    ctx->pc = 0x458C04u;
label_458c04:
    // 0x458c04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x458c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_458c08:
    // 0x458c08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_458c0c:
    if (ctx->pc == 0x458C0Cu) {
        ctx->pc = 0x458C10u;
        goto label_458c10;
    }
    ctx->pc = 0x458C08u;
    {
        const bool branch_taken_0x458c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458c08) {
            ctx->pc = 0x458C18u;
            goto label_458c18;
        }
    }
    ctx->pc = 0x458C10u;
label_458c10:
    // 0x458c10: 0xc0400a8  jal         func_1002A0
label_458c14:
    if (ctx->pc == 0x458C14u) {
        ctx->pc = 0x458C18u;
        goto label_458c18;
    }
    ctx->pc = 0x458C10u;
    SET_GPR_U32(ctx, 31, 0x458C18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458C18u; }
        if (ctx->pc != 0x458C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458C18u; }
        if (ctx->pc != 0x458C18u) { return; }
    }
    ctx->pc = 0x458C18u;
label_458c18:
    // 0x458c18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x458c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_458c1c:
    // 0x458c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_458c20:
    if (ctx->pc == 0x458C20u) {
        ctx->pc = 0x458C24u;
        goto label_458c24;
    }
    ctx->pc = 0x458C1Cu;
    {
        const bool branch_taken_0x458c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458c1c) {
            ctx->pc = 0x458C38u;
            goto label_458c38;
        }
    }
    ctx->pc = 0x458C24u;
label_458c24:
    // 0x458c24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x458c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_458c28:
    // 0x458c28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x458c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_458c2c:
    // 0x458c2c: 0x2463e330  addiu       $v1, $v1, -0x1CD0
    ctx->pc = 0x458c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959920));
label_458c30:
    // 0x458c30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x458c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_458c34:
    // 0x458c34: 0xac4075c0  sw          $zero, 0x75C0($v0)
    ctx->pc = 0x458c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30144), GPR_U32(ctx, 0));
label_458c38:
    // 0x458c38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_458c3c:
    if (ctx->pc == 0x458C3Cu) {
        ctx->pc = 0x458C3Cu;
            // 0x458c3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x458C40u;
        goto label_458c40;
    }
    ctx->pc = 0x458C38u;
    {
        const bool branch_taken_0x458c38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x458c38) {
            ctx->pc = 0x458C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458C38u;
            // 0x458c3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458C94u;
            goto label_458c94;
        }
    }
    ctx->pc = 0x458C40u;
label_458c40:
    // 0x458c40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x458c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_458c44:
    // 0x458c44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x458c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_458c48:
    // 0x458c48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x458c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_458c4c:
    // 0x458c4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x458c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_458c50:
    // 0x458c50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_458c54:
    if (ctx->pc == 0x458C54u) {
        ctx->pc = 0x458C54u;
            // 0x458c54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x458C58u;
        goto label_458c58;
    }
    ctx->pc = 0x458C50u;
    {
        const bool branch_taken_0x458c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458c50) {
            ctx->pc = 0x458C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458C50u;
            // 0x458c54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458C6Cu;
            goto label_458c6c;
        }
    }
    ctx->pc = 0x458C58u;
label_458c58:
    // 0x458c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458c5c:
    // 0x458c5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458c60:
    // 0x458c60: 0x320f809  jalr        $t9
label_458c64:
    if (ctx->pc == 0x458C64u) {
        ctx->pc = 0x458C64u;
            // 0x458c64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458C68u;
        goto label_458c68;
    }
    ctx->pc = 0x458C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458C68u);
        ctx->pc = 0x458C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458C60u;
            // 0x458c64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458C68u; }
            if (ctx->pc != 0x458C68u) { return; }
        }
        }
    }
    ctx->pc = 0x458C68u;
label_458c68:
    // 0x458c68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x458c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_458c6c:
    // 0x458c6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_458c70:
    if (ctx->pc == 0x458C70u) {
        ctx->pc = 0x458C70u;
            // 0x458c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458C74u;
        goto label_458c74;
    }
    ctx->pc = 0x458C6Cu;
    {
        const bool branch_taken_0x458c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458c6c) {
            ctx->pc = 0x458C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458C6Cu;
            // 0x458c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458C88u;
            goto label_458c88;
        }
    }
    ctx->pc = 0x458C74u;
label_458c74:
    // 0x458c74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458c78:
    // 0x458c78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458c7c:
    // 0x458c7c: 0x320f809  jalr        $t9
label_458c80:
    if (ctx->pc == 0x458C80u) {
        ctx->pc = 0x458C80u;
            // 0x458c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458C84u;
        goto label_458c84;
    }
    ctx->pc = 0x458C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458C84u);
        ctx->pc = 0x458C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458C7Cu;
            // 0x458c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458C84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458C84u; }
            if (ctx->pc != 0x458C84u) { return; }
        }
        }
    }
    ctx->pc = 0x458C84u;
label_458c84:
    // 0x458c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x458c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_458c88:
    // 0x458c88: 0xc075bf8  jal         func_1D6FE0
label_458c8c:
    if (ctx->pc == 0x458C8Cu) {
        ctx->pc = 0x458C8Cu;
            // 0x458c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458C90u;
        goto label_458c90;
    }
    ctx->pc = 0x458C88u;
    SET_GPR_U32(ctx, 31, 0x458C90u);
    ctx->pc = 0x458C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458C88u;
            // 0x458c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458C90u; }
        if (ctx->pc != 0x458C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458C90u; }
        if (ctx->pc != 0x458C90u) { return; }
    }
    ctx->pc = 0x458C90u;
label_458c90:
    // 0x458c90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x458c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_458c94:
    // 0x458c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458c98:
    // 0x458c98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_458c9c:
    if (ctx->pc == 0x458C9Cu) {
        ctx->pc = 0x458C9Cu;
            // 0x458c9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458CA0u;
        goto label_458ca0;
    }
    ctx->pc = 0x458C98u;
    {
        const bool branch_taken_0x458c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x458c98) {
            ctx->pc = 0x458C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458C98u;
            // 0x458c9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458CACu;
            goto label_458cac;
        }
    }
    ctx->pc = 0x458CA0u;
label_458ca0:
    // 0x458ca0: 0xc0400a8  jal         func_1002A0
label_458ca4:
    if (ctx->pc == 0x458CA4u) {
        ctx->pc = 0x458CA4u;
            // 0x458ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458CA8u;
        goto label_458ca8;
    }
    ctx->pc = 0x458CA0u;
    SET_GPR_U32(ctx, 31, 0x458CA8u);
    ctx->pc = 0x458CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458CA0u;
            // 0x458ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458CA8u; }
        if (ctx->pc != 0x458CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458CA8u; }
        if (ctx->pc != 0x458CA8u) { return; }
    }
    ctx->pc = 0x458CA8u;
label_458ca8:
    // 0x458ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x458ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_458cac:
    // 0x458cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x458cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_458cb0:
    // 0x458cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_458cb4:
    // 0x458cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_458cb8:
    // 0x458cb8: 0x3e00008  jr          $ra
label_458cbc:
    if (ctx->pc == 0x458CBCu) {
        ctx->pc = 0x458CBCu;
            // 0x458cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x458CC0u;
        goto label_458cc0;
    }
    ctx->pc = 0x458CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x458CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458CB8u;
            // 0x458cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x458CC0u;
label_458cc0:
    // 0x458cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x458cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_458cc4:
    // 0x458cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x458cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_458cc8:
    // 0x458cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x458cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_458ccc:
    // 0x458ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_458cd0:
    // 0x458cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x458cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_458cd4:
    // 0x458cd4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_458cd8:
    if (ctx->pc == 0x458CD8u) {
        ctx->pc = 0x458CD8u;
            // 0x458cd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458CDCu;
        goto label_458cdc;
    }
    ctx->pc = 0x458CD4u;
    {
        const bool branch_taken_0x458cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x458CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458CD4u;
            // 0x458cd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458cd4) {
            ctx->pc = 0x458D9Cu;
            goto label_458d9c;
        }
    }
    ctx->pc = 0x458CDCu;
label_458cdc:
    // 0x458cdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x458cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_458ce0:
    // 0x458ce0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x458ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_458ce4:
    // 0x458ce4: 0x2463e290  addiu       $v1, $v1, -0x1D70
    ctx->pc = 0x458ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959760));
label_458ce8:
    // 0x458ce8: 0x2442e2d0  addiu       $v0, $v0, -0x1D30
    ctx->pc = 0x458ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959824));
label_458cec:
    // 0x458cec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x458cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_458cf0:
    // 0x458cf0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x458cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_458cf4:
    // 0x458cf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458cf8:
    // 0x458cf8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x458cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_458cfc:
    // 0x458cfc: 0x320f809  jalr        $t9
label_458d00:
    if (ctx->pc == 0x458D00u) {
        ctx->pc = 0x458D04u;
        goto label_458d04;
    }
    ctx->pc = 0x458CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458D04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x458D04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458D04u; }
            if (ctx->pc != 0x458D04u) { return; }
        }
        }
    }
    ctx->pc = 0x458D04u;
label_458d04:
    // 0x458d04: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_458d08:
    if (ctx->pc == 0x458D08u) {
        ctx->pc = 0x458D08u;
            // 0x458d08: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x458D0Cu;
        goto label_458d0c;
    }
    ctx->pc = 0x458D04u;
    {
        const bool branch_taken_0x458d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x458d04) {
            ctx->pc = 0x458D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458D04u;
            // 0x458d08: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458D88u;
            goto label_458d88;
        }
    }
    ctx->pc = 0x458D0Cu;
label_458d0c:
    // 0x458d0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x458d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_458d10:
    // 0x458d10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x458d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_458d14:
    // 0x458d14: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x458d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_458d18:
    // 0x458d18: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x458d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_458d1c:
    // 0x458d1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x458d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_458d20:
    // 0x458d20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x458d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_458d24:
    // 0x458d24: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x458d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_458d28:
    // 0x458d28: 0xc0aecc4  jal         func_2BB310
label_458d2c:
    if (ctx->pc == 0x458D2Cu) {
        ctx->pc = 0x458D2Cu;
            // 0x458d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458D30u;
        goto label_458d30;
    }
    ctx->pc = 0x458D28u;
    SET_GPR_U32(ctx, 31, 0x458D30u);
    ctx->pc = 0x458D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458D28u;
            // 0x458d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D30u; }
        if (ctx->pc != 0x458D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D30u; }
        if (ctx->pc != 0x458D30u) { return; }
    }
    ctx->pc = 0x458D30u;
label_458d30:
    // 0x458d30: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x458d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_458d34:
    // 0x458d34: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x458d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_458d38:
    // 0x458d38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_458d3c:
    if (ctx->pc == 0x458D3Cu) {
        ctx->pc = 0x458D3Cu;
            // 0x458d3c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x458D40u;
        goto label_458d40;
    }
    ctx->pc = 0x458D38u;
    {
        const bool branch_taken_0x458d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458d38) {
            ctx->pc = 0x458D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458D38u;
            // 0x458d3c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458D54u;
            goto label_458d54;
        }
    }
    ctx->pc = 0x458D40u;
label_458d40:
    // 0x458d40: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x458d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_458d44:
    // 0x458d44: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458d48:
    // 0x458d48: 0x320f809  jalr        $t9
label_458d4c:
    if (ctx->pc == 0x458D4Cu) {
        ctx->pc = 0x458D4Cu;
            // 0x458d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458D50u;
        goto label_458d50;
    }
    ctx->pc = 0x458D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458D50u);
        ctx->pc = 0x458D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458D48u;
            // 0x458d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458D50u; }
            if (ctx->pc != 0x458D50u) { return; }
        }
        }
    }
    ctx->pc = 0x458D50u;
label_458d50:
    // 0x458d50: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x458d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_458d54:
    // 0x458d54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x458d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_458d58:
    // 0x458d58: 0xc0aec9c  jal         func_2BB270
label_458d5c:
    if (ctx->pc == 0x458D5Cu) {
        ctx->pc = 0x458D5Cu;
            // 0x458d5c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x458D60u;
        goto label_458d60;
    }
    ctx->pc = 0x458D58u;
    SET_GPR_U32(ctx, 31, 0x458D60u);
    ctx->pc = 0x458D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458D58u;
            // 0x458d5c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D60u; }
        if (ctx->pc != 0x458D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D60u; }
        if (ctx->pc != 0x458D60u) { return; }
    }
    ctx->pc = 0x458D60u;
label_458d60:
    // 0x458d60: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x458d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_458d64:
    // 0x458d64: 0xc0aec88  jal         func_2BB220
label_458d68:
    if (ctx->pc == 0x458D68u) {
        ctx->pc = 0x458D68u;
            // 0x458d68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x458D6Cu;
        goto label_458d6c;
    }
    ctx->pc = 0x458D64u;
    SET_GPR_U32(ctx, 31, 0x458D6Cu);
    ctx->pc = 0x458D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458D64u;
            // 0x458d68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D6Cu; }
        if (ctx->pc != 0x458D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D6Cu; }
        if (ctx->pc != 0x458D6Cu) { return; }
    }
    ctx->pc = 0x458D6Cu;
label_458d6c:
    // 0x458d6c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x458d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_458d70:
    // 0x458d70: 0xc0aec0c  jal         func_2BB030
label_458d74:
    if (ctx->pc == 0x458D74u) {
        ctx->pc = 0x458D74u;
            // 0x458d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458D78u;
        goto label_458d78;
    }
    ctx->pc = 0x458D70u;
    SET_GPR_U32(ctx, 31, 0x458D78u);
    ctx->pc = 0x458D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458D70u;
            // 0x458d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D78u; }
        if (ctx->pc != 0x458D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D78u; }
        if (ctx->pc != 0x458D78u) { return; }
    }
    ctx->pc = 0x458D78u;
label_458d78:
    // 0x458d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x458d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_458d7c:
    // 0x458d7c: 0xc0aeaa8  jal         func_2BAAA0
label_458d80:
    if (ctx->pc == 0x458D80u) {
        ctx->pc = 0x458D80u;
            // 0x458d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458D84u;
        goto label_458d84;
    }
    ctx->pc = 0x458D7Cu;
    SET_GPR_U32(ctx, 31, 0x458D84u);
    ctx->pc = 0x458D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458D7Cu;
            // 0x458d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D84u; }
        if (ctx->pc != 0x458D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D84u; }
        if (ctx->pc != 0x458D84u) { return; }
    }
    ctx->pc = 0x458D84u;
label_458d84:
    // 0x458d84: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x458d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_458d88:
    // 0x458d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458d8c:
    // 0x458d8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_458d90:
    if (ctx->pc == 0x458D90u) {
        ctx->pc = 0x458D90u;
            // 0x458d90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458D94u;
        goto label_458d94;
    }
    ctx->pc = 0x458D8Cu;
    {
        const bool branch_taken_0x458d8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x458d8c) {
            ctx->pc = 0x458D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458D8Cu;
            // 0x458d90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458DA0u;
            goto label_458da0;
        }
    }
    ctx->pc = 0x458D94u;
label_458d94:
    // 0x458d94: 0xc0400a8  jal         func_1002A0
label_458d98:
    if (ctx->pc == 0x458D98u) {
        ctx->pc = 0x458D98u;
            // 0x458d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458D9Cu;
        goto label_458d9c;
    }
    ctx->pc = 0x458D94u;
    SET_GPR_U32(ctx, 31, 0x458D9Cu);
    ctx->pc = 0x458D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458D94u;
            // 0x458d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D9Cu; }
        if (ctx->pc != 0x458D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458D9Cu; }
        if (ctx->pc != 0x458D9Cu) { return; }
    }
    ctx->pc = 0x458D9Cu;
label_458d9c:
    // 0x458d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x458d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_458da0:
    // 0x458da0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x458da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_458da4:
    // 0x458da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_458da8:
    // 0x458da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_458dac:
    // 0x458dac: 0x3e00008  jr          $ra
label_458db0:
    if (ctx->pc == 0x458DB0u) {
        ctx->pc = 0x458DB0u;
            // 0x458db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x458DB4u;
        goto label_458db4;
    }
    ctx->pc = 0x458DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x458DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458DACu;
            // 0x458db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x458DB4u;
label_458db4:
    // 0x458db4: 0x0  nop
    ctx->pc = 0x458db4u;
    // NOP
label_458db8:
    // 0x458db8: 0x0  nop
    ctx->pc = 0x458db8u;
    // NOP
label_458dbc:
    // 0x458dbc: 0x0  nop
    ctx->pc = 0x458dbcu;
    // NOP
label_458dc0:
    // 0x458dc0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x458dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_458dc4:
    // 0x458dc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x458dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_458dc8:
    // 0x458dc8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x458dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_458dcc:
    // 0x458dcc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x458dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_458dd0:
    // 0x458dd0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x458dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_458dd4:
    // 0x458dd4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x458dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_458dd8:
    // 0x458dd8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x458dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_458ddc:
    // 0x458ddc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x458ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_458de0:
    // 0x458de0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x458de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_458de4:
    // 0x458de4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x458de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_458de8:
    // 0x458de8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x458de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_458dec:
    // 0x458dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x458decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_458df0:
    // 0x458df0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x458df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_458df4:
    // 0x458df4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x458df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_458df8:
    // 0x458df8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x458df8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_458dfc:
    // 0x458dfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x458dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_458e00:
    // 0x458e00: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_458e04:
    if (ctx->pc == 0x458E04u) {
        ctx->pc = 0x458E04u;
            // 0x458e04: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458E08u;
        goto label_458e08;
    }
    ctx->pc = 0x458E00u;
    {
        const bool branch_taken_0x458e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x458E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458E00u;
            // 0x458e04: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458e00) {
            ctx->pc = 0x458E44u;
            goto label_458e44;
        }
    }
    ctx->pc = 0x458E08u;
label_458e08:
    // 0x458e08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x458e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_458e0c:
    // 0x458e0c: 0x10a3008c  beq         $a1, $v1, . + 4 + (0x8C << 2)
label_458e10:
    if (ctx->pc == 0x458E10u) {
        ctx->pc = 0x458E14u;
        goto label_458e14;
    }
    ctx->pc = 0x458E0Cu;
    {
        const bool branch_taken_0x458e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x458e0c) {
            ctx->pc = 0x459040u;
            goto label_459040;
        }
    }
    ctx->pc = 0x458E14u;
label_458e14:
    // 0x458e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x458e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_458e18:
    // 0x458e18: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_458e1c:
    if (ctx->pc == 0x458E1Cu) {
        ctx->pc = 0x458E1Cu;
            // 0x458e1c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x458E20u;
        goto label_458e20;
    }
    ctx->pc = 0x458E18u;
    {
        const bool branch_taken_0x458e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x458e18) {
            ctx->pc = 0x458E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458E18u;
            // 0x458e1c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458E28u;
            goto label_458e28;
        }
    }
    ctx->pc = 0x458E20u;
label_458e20:
    // 0x458e20: 0x10000087  b           . + 4 + (0x87 << 2)
label_458e24:
    if (ctx->pc == 0x458E24u) {
        ctx->pc = 0x458E28u;
        goto label_458e28;
    }
    ctx->pc = 0x458E20u;
    {
        const bool branch_taken_0x458e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458e20) {
            ctx->pc = 0x459040u;
            goto label_459040;
        }
    }
    ctx->pc = 0x458E28u;
label_458e28:
    // 0x458e28: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x458e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_458e2c:
    // 0x458e2c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x458e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_458e30:
    // 0x458e30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x458e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_458e34:
    // 0x458e34: 0x320f809  jalr        $t9
label_458e38:
    if (ctx->pc == 0x458E38u) {
        ctx->pc = 0x458E38u;
            // 0x458e38: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x458E3Cu;
        goto label_458e3c;
    }
    ctx->pc = 0x458E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458E3Cu);
        ctx->pc = 0x458E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458E34u;
            // 0x458e38: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458E3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458E3Cu; }
            if (ctx->pc != 0x458E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x458E3Cu;
label_458e3c:
    // 0x458e3c: 0x10000080  b           . + 4 + (0x80 << 2)
label_458e40:
    if (ctx->pc == 0x458E40u) {
        ctx->pc = 0x458E44u;
        goto label_458e44;
    }
    ctx->pc = 0x458E3Cu;
    {
        const bool branch_taken_0x458e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458e3c) {
            ctx->pc = 0x459040u;
            goto label_459040;
        }
    }
    ctx->pc = 0x458E44u;
label_458e44:
    // 0x458e44: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x458e44u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_458e48:
    // 0x458e48: 0x12e0007d  beqz        $s7, . + 4 + (0x7D << 2)
label_458e4c:
    if (ctx->pc == 0x458E4Cu) {
        ctx->pc = 0x458E50u;
        goto label_458e50;
    }
    ctx->pc = 0x458E48u;
    {
        const bool branch_taken_0x458e48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x458e48) {
            ctx->pc = 0x459040u;
            goto label_459040;
        }
    }
    ctx->pc = 0x458E50u;
label_458e50:
    // 0x458e50: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x458e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_458e54:
    // 0x458e54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x458e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_458e58:
    // 0x458e58: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x458e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_458e5c:
    // 0x458e5c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x458e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_458e60:
    // 0x458e60: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x458e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_458e64:
    // 0x458e64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x458e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_458e68:
    // 0x458e68: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x458e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_458e6c:
    // 0x458e6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x458e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_458e70:
    // 0x458e70: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x458e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_458e74:
    // 0x458e74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x458e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_458e78:
    // 0x458e78: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x458e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458e7c:
    // 0x458e7c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x458e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_458e80:
    // 0x458e80: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x458e80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_458e84:
    // 0x458e84: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x458e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_458e88:
    // 0x458e88: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x458e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_458e8c:
    // 0x458e8c: 0xc04e738  jal         func_139CE0
label_458e90:
    if (ctx->pc == 0x458E90u) {
        ctx->pc = 0x458E90u;
            // 0x458e90: 0x26d50084  addiu       $s5, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x458E94u;
        goto label_458e94;
    }
    ctx->pc = 0x458E8Cu;
    SET_GPR_U32(ctx, 31, 0x458E94u);
    ctx->pc = 0x458E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458E8Cu;
            // 0x458e90: 0x26d50084  addiu       $s5, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458E94u; }
        if (ctx->pc != 0x458E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458E94u; }
        if (ctx->pc != 0x458E94u) { return; }
    }
    ctx->pc = 0x458E94u;
label_458e94:
    // 0x458e94: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x458e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_458e98:
    // 0x458e98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x458e98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_458e9c:
    // 0x458e9c: 0xc454e0f0  lwc1        $f20, -0x1F10($v0)
    ctx->pc = 0x458e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_458ea0:
    // 0x458ea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x458ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_458ea4:
    // 0x458ea4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x458ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_458ea8:
    // 0x458ea8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x458ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_458eac:
    // 0x458eac: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x458eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_458eb0:
    // 0x458eb0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x458eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_458eb4:
    // 0x458eb4: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x458eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_458eb8:
    // 0x458eb8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x458eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_458ebc:
    // 0x458ebc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x458ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_458ec0:
    // 0x458ec0: 0xc0d639c  jal         func_358E70
label_458ec4:
    if (ctx->pc == 0x458EC4u) {
        ctx->pc = 0x458EC4u;
            // 0x458ec4: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x458EC8u;
        goto label_458ec8;
    }
    ctx->pc = 0x458EC0u;
    SET_GPR_U32(ctx, 31, 0x458EC8u);
    ctx->pc = 0x458EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458EC0u;
            // 0x458ec4: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EC8u; }
        if (ctx->pc != 0x458EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EC8u; }
        if (ctx->pc != 0x458EC8u) { return; }
    }
    ctx->pc = 0x458EC8u;
label_458ec8:
    // 0x458ec8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_458ecc:
    if (ctx->pc == 0x458ECCu) {
        ctx->pc = 0x458ED0u;
        goto label_458ed0;
    }
    ctx->pc = 0x458EC8u;
    {
        const bool branch_taken_0x458ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ec8) {
            ctx->pc = 0x459030u;
            goto label_459030;
        }
    }
    ctx->pc = 0x458ED0u;
label_458ed0:
    // 0x458ed0: 0xc0d1c14  jal         func_347050
label_458ed4:
    if (ctx->pc == 0x458ED4u) {
        ctx->pc = 0x458ED4u;
            // 0x458ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458ED8u;
        goto label_458ed8;
    }
    ctx->pc = 0x458ED0u;
    SET_GPR_U32(ctx, 31, 0x458ED8u);
    ctx->pc = 0x458ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458ED0u;
            // 0x458ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458ED8u; }
        if (ctx->pc != 0x458ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458ED8u; }
        if (ctx->pc != 0x458ED8u) { return; }
    }
    ctx->pc = 0x458ED8u;
label_458ed8:
    // 0x458ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x458ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_458edc:
    // 0x458edc: 0xc04f278  jal         func_13C9E0
label_458ee0:
    if (ctx->pc == 0x458EE0u) {
        ctx->pc = 0x458EE0u;
            // 0x458ee0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x458EE4u;
        goto label_458ee4;
    }
    ctx->pc = 0x458EDCu;
    SET_GPR_U32(ctx, 31, 0x458EE4u);
    ctx->pc = 0x458EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458EDCu;
            // 0x458ee0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EE4u; }
        if (ctx->pc != 0x458EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EE4u; }
        if (ctx->pc != 0x458EE4u) { return; }
    }
    ctx->pc = 0x458EE4u;
label_458ee4:
    // 0x458ee4: 0xc0d1c10  jal         func_347040
label_458ee8:
    if (ctx->pc == 0x458EE8u) {
        ctx->pc = 0x458EE8u;
            // 0x458ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458EECu;
        goto label_458eec;
    }
    ctx->pc = 0x458EE4u;
    SET_GPR_U32(ctx, 31, 0x458EECu);
    ctx->pc = 0x458EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458EE4u;
            // 0x458ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EECu; }
        if (ctx->pc != 0x458EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EECu; }
        if (ctx->pc != 0x458EECu) { return; }
    }
    ctx->pc = 0x458EECu;
label_458eec:
    // 0x458eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x458eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_458ef0:
    // 0x458ef0: 0xc04ce80  jal         func_133A00
label_458ef4:
    if (ctx->pc == 0x458EF4u) {
        ctx->pc = 0x458EF4u;
            // 0x458ef4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x458EF8u;
        goto label_458ef8;
    }
    ctx->pc = 0x458EF0u;
    SET_GPR_U32(ctx, 31, 0x458EF8u);
    ctx->pc = 0x458EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458EF0u;
            // 0x458ef4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EF8u; }
        if (ctx->pc != 0x458EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458EF8u; }
        if (ctx->pc != 0x458EF8u) { return; }
    }
    ctx->pc = 0x458EF8u;
label_458ef8:
    // 0x458ef8: 0xc0d4108  jal         func_350420
label_458efc:
    if (ctx->pc == 0x458EFCu) {
        ctx->pc = 0x458F00u;
        goto label_458f00;
    }
    ctx->pc = 0x458EF8u;
    SET_GPR_U32(ctx, 31, 0x458F00u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F00u; }
        if (ctx->pc != 0x458F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F00u; }
        if (ctx->pc != 0x458F00u) { return; }
    }
    ctx->pc = 0x458F00u;
label_458f00:
    // 0x458f00: 0xc0b36b4  jal         func_2CDAD0
label_458f04:
    if (ctx->pc == 0x458F04u) {
        ctx->pc = 0x458F04u;
            // 0x458f04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458F08u;
        goto label_458f08;
    }
    ctx->pc = 0x458F00u;
    SET_GPR_U32(ctx, 31, 0x458F08u);
    ctx->pc = 0x458F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458F00u;
            // 0x458f04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F08u; }
        if (ctx->pc != 0x458F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F08u; }
        if (ctx->pc != 0x458F08u) { return; }
    }
    ctx->pc = 0x458F08u;
label_458f08:
    // 0x458f08: 0xc0b9c64  jal         func_2E7190
label_458f0c:
    if (ctx->pc == 0x458F0Cu) {
        ctx->pc = 0x458F0Cu;
            // 0x458f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458F10u;
        goto label_458f10;
    }
    ctx->pc = 0x458F08u;
    SET_GPR_U32(ctx, 31, 0x458F10u);
    ctx->pc = 0x458F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458F08u;
            // 0x458f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F10u; }
        if (ctx->pc != 0x458F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F10u; }
        if (ctx->pc != 0x458F10u) { return; }
    }
    ctx->pc = 0x458F10u;
label_458f10:
    // 0x458f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x458f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_458f14:
    // 0x458f14: 0xc0d4104  jal         func_350410
label_458f18:
    if (ctx->pc == 0x458F18u) {
        ctx->pc = 0x458F18u;
            // 0x458f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458F1Cu;
        goto label_458f1c;
    }
    ctx->pc = 0x458F14u;
    SET_GPR_U32(ctx, 31, 0x458F1Cu);
    ctx->pc = 0x458F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458F14u;
            // 0x458f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F1Cu; }
        if (ctx->pc != 0x458F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F1Cu; }
        if (ctx->pc != 0x458F1Cu) { return; }
    }
    ctx->pc = 0x458F1Cu;
label_458f1c:
    // 0x458f1c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x458f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458f20:
    // 0x458f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x458f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_458f24:
    // 0x458f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x458f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_458f28:
    // 0x458f28: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x458f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_458f2c:
    // 0x458f2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x458f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_458f30:
    // 0x458f30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x458f30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_458f34:
    // 0x458f34: 0xc0d40ac  jal         func_3502B0
label_458f38:
    if (ctx->pc == 0x458F38u) {
        ctx->pc = 0x458F38u;
            // 0x458f38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x458F3Cu;
        goto label_458f3c;
    }
    ctx->pc = 0x458F34u;
    SET_GPR_U32(ctx, 31, 0x458F3Cu);
    ctx->pc = 0x458F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458F34u;
            // 0x458f38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F3Cu; }
        if (ctx->pc != 0x458F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458F3Cu; }
        if (ctx->pc != 0x458F3Cu) { return; }
    }
    ctx->pc = 0x458F3Cu;
label_458f3c:
    // 0x458f3c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x458f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_458f40:
    // 0x458f40: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
label_458f44:
    if (ctx->pc == 0x458F44u) {
        ctx->pc = 0x458F44u;
            // 0x458f44: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x458F48u;
        goto label_458f48;
    }
    ctx->pc = 0x458F40u;
    {
        const bool branch_taken_0x458f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x458F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458F40u;
            // 0x458f44: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458f40) {
            ctx->pc = 0x459030u;
            goto label_459030;
        }
    }
    ctx->pc = 0x458F48u;
label_458f48:
    // 0x458f48: 0xc66000dc  lwc1        $f0, 0xDC($s3)
    ctx->pc = 0x458f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458f4c:
    // 0x458f4c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x458f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458f50:
    // 0x458f50: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x458f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_458f54:
    // 0x458f54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x458f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_458f58:
    // 0x458f58: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x458f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_458f5c:
    // 0x458f5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x458f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_458f60:
    // 0x458f60: 0x0  nop
    ctx->pc = 0x458f60u;
    // NOP
label_458f64:
    // 0x458f64: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x458f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_458f68:
    // 0x458f68: 0xc6600154  lwc1        $f0, 0x154($s3)
    ctx->pc = 0x458f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458f6c:
    // 0x458f6c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x458f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458f70:
    // 0x458f70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x458f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_458f74:
    // 0x458f74: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x458f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_458f78:
    // 0x458f78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x458f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_458f7c:
    // 0x458f7c: 0x0  nop
    ctx->pc = 0x458f7cu;
    // NOP
label_458f80:
    // 0x458f80: 0xac43052c  sw          $v1, 0x52C($v0)
    ctx->pc = 0x458f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1324), GPR_U32(ctx, 3));
label_458f84:
    // 0x458f84: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x458f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458f88:
    // 0x458f88: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x458f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458f8c:
    // 0x458f8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x458f8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_458f90:
    // 0x458f90: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x458f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_458f94:
    // 0x458f94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x458f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_458f98:
    // 0x458f98: 0x0  nop
    ctx->pc = 0x458f98u;
    // NOP
label_458f9c:
    // 0x458f9c: 0xac43064c  sw          $v1, 0x64C($v0)
    ctx->pc = 0x458f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1612), GPR_U32(ctx, 3));
label_458fa0:
    // 0x458fa0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x458fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458fa4:
    // 0x458fa4: 0xc116420  jal         func_459080
label_458fa8:
    if (ctx->pc == 0x458FA8u) {
        ctx->pc = 0x458FA8u;
            // 0x458fa8: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x458FACu;
        goto label_458fac;
    }
    ctx->pc = 0x458FA4u;
    SET_GPR_U32(ctx, 31, 0x458FACu);
    ctx->pc = 0x458FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458FA4u;
            // 0x458fa8: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459080u;
    if (runtime->hasFunction(0x459080u)) {
        auto targetFn = runtime->lookupFunction(0x459080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FACu; }
        if (ctx->pc != 0x458FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459080_0x459080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FACu; }
        if (ctx->pc != 0x458FACu) { return; }
    }
    ctx->pc = 0x458FACu;
label_458fac:
    // 0x458fac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x458facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_458fb0:
    // 0x458fb0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x458fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_458fb4:
    // 0x458fb4: 0xc04cd60  jal         func_133580
label_458fb8:
    if (ctx->pc == 0x458FB8u) {
        ctx->pc = 0x458FB8u;
            // 0x458fb8: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x458FBCu;
        goto label_458fbc;
    }
    ctx->pc = 0x458FB4u;
    SET_GPR_U32(ctx, 31, 0x458FBCu);
    ctx->pc = 0x458FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458FB4u;
            // 0x458fb8: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FBCu; }
        if (ctx->pc != 0x458FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FBCu; }
        if (ctx->pc != 0x458FBCu) { return; }
    }
    ctx->pc = 0x458FBCu;
label_458fbc:
    // 0x458fbc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x458fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458fc0:
    // 0x458fc0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x458fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_458fc4:
    // 0x458fc4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x458fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_458fc8:
    // 0x458fc8: 0xc04e4a4  jal         func_139290
label_458fcc:
    if (ctx->pc == 0x458FCCu) {
        ctx->pc = 0x458FCCu;
            // 0x458fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458FD0u;
        goto label_458fd0;
    }
    ctx->pc = 0x458FC8u;
    SET_GPR_U32(ctx, 31, 0x458FD0u);
    ctx->pc = 0x458FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458FC8u;
            // 0x458fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FD0u; }
        if (ctx->pc != 0x458FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FD0u; }
        if (ctx->pc != 0x458FD0u) { return; }
    }
    ctx->pc = 0x458FD0u;
label_458fd0:
    // 0x458fd0: 0xc66c016c  lwc1        $f12, 0x16C($s3)
    ctx->pc = 0x458fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_458fd4:
    // 0x458fd4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x458fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_458fd8:
    // 0x458fd8: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x458fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_458fdc:
    // 0x458fdc: 0xc054bbc  jal         func_152EF0
label_458fe0:
    if (ctx->pc == 0x458FE0u) {
        ctx->pc = 0x458FE0u;
            // 0x458fe0: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->pc = 0x458FE4u;
        goto label_458fe4;
    }
    ctx->pc = 0x458FDCu;
    SET_GPR_U32(ctx, 31, 0x458FE4u);
    ctx->pc = 0x458FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458FDCu;
            // 0x458fe0: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FE4u; }
        if (ctx->pc != 0x458FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458FE4u; }
        if (ctx->pc != 0x458FE4u) { return; }
    }
    ctx->pc = 0x458FE4u;
label_458fe4:
    // 0x458fe4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x458fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_458fe8:
    // 0x458fe8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x458fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_458fec:
    // 0x458fec: 0x320f809  jalr        $t9
label_458ff0:
    if (ctx->pc == 0x458FF0u) {
        ctx->pc = 0x458FF0u;
            // 0x458ff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458FF4u;
        goto label_458ff4;
    }
    ctx->pc = 0x458FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458FF4u);
        ctx->pc = 0x458FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458FECu;
            // 0x458ff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458FF4u; }
            if (ctx->pc != 0x458FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x458FF4u;
label_458ff4:
    // 0x458ff4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x458ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_458ff8:
    // 0x458ff8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x458ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_458ffc:
    // 0x458ffc: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x458ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_459000:
    // 0x459000: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x459000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459004:
    // 0x459004: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x459004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_459008:
    // 0x459008: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x459008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_45900c:
    // 0x45900c: 0xc04cfcc  jal         func_133F30
label_459010:
    if (ctx->pc == 0x459010u) {
        ctx->pc = 0x459010u;
            // 0x459010: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x459014u;
        goto label_459014;
    }
    ctx->pc = 0x45900Cu;
    SET_GPR_U32(ctx, 31, 0x459014u);
    ctx->pc = 0x459010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45900Cu;
            // 0x459010: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459014u; }
        if (ctx->pc != 0x459014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459014u; }
        if (ctx->pc != 0x459014u) { return; }
    }
    ctx->pc = 0x459014u;
label_459014:
    // 0x459014: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x459014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_459018:
    // 0x459018: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x459018u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_45901c:
    // 0x45901c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x45901cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_459020:
    // 0x459020: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x459020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_459024:
    // 0x459024: 0xc054c2c  jal         func_1530B0
label_459028:
    if (ctx->pc == 0x459028u) {
        ctx->pc = 0x459028u;
            // 0x459028: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45902Cu;
        goto label_45902c;
    }
    ctx->pc = 0x459024u;
    SET_GPR_U32(ctx, 31, 0x45902Cu);
    ctx->pc = 0x459028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459024u;
            // 0x459028: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45902Cu; }
        if (ctx->pc != 0x45902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45902Cu; }
        if (ctx->pc != 0x45902Cu) { return; }
    }
    ctx->pc = 0x45902Cu;
label_45902c:
    // 0x45902c: 0x0  nop
    ctx->pc = 0x45902cu;
    // NOP
label_459030:
    // 0x459030: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x459030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_459034:
    // 0x459034: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x459034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_459038:
    // 0x459038: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
label_45903c:
    if (ctx->pc == 0x45903Cu) {
        ctx->pc = 0x45903Cu;
            // 0x45903c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x459040u;
        goto label_459040;
    }
    ctx->pc = 0x459038u;
    {
        const bool branch_taken_0x459038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x45903Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459038u;
            // 0x45903c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459038) {
            ctx->pc = 0x458EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_458ea4;
        }
    }
    ctx->pc = 0x459040u;
label_459040:
    // 0x459040: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x459040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_459044:
    // 0x459044: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x459044u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_459048:
    // 0x459048: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x459048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45904c:
    // 0x45904c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45904cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_459050:
    // 0x459050: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x459050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_459054:
    // 0x459054: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x459054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_459058:
    // 0x459058: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x459058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45905c:
    // 0x45905c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x45905cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_459060:
    // 0x459060: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x459060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_459064:
    // 0x459064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x459064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_459068:
    // 0x459068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x459068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45906c:
    // 0x45906c: 0x3e00008  jr          $ra
label_459070:
    if (ctx->pc == 0x459070u) {
        ctx->pc = 0x459070u;
            // 0x459070: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x459074u;
        goto label_459074;
    }
    ctx->pc = 0x45906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45906Cu;
            // 0x459070: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459074u;
label_459074:
    // 0x459074: 0x0  nop
    ctx->pc = 0x459074u;
    // NOP
label_459078:
    // 0x459078: 0x0  nop
    ctx->pc = 0x459078u;
    // NOP
label_45907c:
    // 0x45907c: 0x0  nop
    ctx->pc = 0x45907cu;
    // NOP
}
