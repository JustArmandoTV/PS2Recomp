#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00454BB0
// Address: 0x454bb0 - 0x4550a0
void sub_00454BB0_0x454bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454BB0_0x454bb0");
#endif

    switch (ctx->pc) {
        case 0x454bb0u: goto label_454bb0;
        case 0x454bb4u: goto label_454bb4;
        case 0x454bb8u: goto label_454bb8;
        case 0x454bbcu: goto label_454bbc;
        case 0x454bc0u: goto label_454bc0;
        case 0x454bc4u: goto label_454bc4;
        case 0x454bc8u: goto label_454bc8;
        case 0x454bccu: goto label_454bcc;
        case 0x454bd0u: goto label_454bd0;
        case 0x454bd4u: goto label_454bd4;
        case 0x454bd8u: goto label_454bd8;
        case 0x454bdcu: goto label_454bdc;
        case 0x454be0u: goto label_454be0;
        case 0x454be4u: goto label_454be4;
        case 0x454be8u: goto label_454be8;
        case 0x454becu: goto label_454bec;
        case 0x454bf0u: goto label_454bf0;
        case 0x454bf4u: goto label_454bf4;
        case 0x454bf8u: goto label_454bf8;
        case 0x454bfcu: goto label_454bfc;
        case 0x454c00u: goto label_454c00;
        case 0x454c04u: goto label_454c04;
        case 0x454c08u: goto label_454c08;
        case 0x454c0cu: goto label_454c0c;
        case 0x454c10u: goto label_454c10;
        case 0x454c14u: goto label_454c14;
        case 0x454c18u: goto label_454c18;
        case 0x454c1cu: goto label_454c1c;
        case 0x454c20u: goto label_454c20;
        case 0x454c24u: goto label_454c24;
        case 0x454c28u: goto label_454c28;
        case 0x454c2cu: goto label_454c2c;
        case 0x454c30u: goto label_454c30;
        case 0x454c34u: goto label_454c34;
        case 0x454c38u: goto label_454c38;
        case 0x454c3cu: goto label_454c3c;
        case 0x454c40u: goto label_454c40;
        case 0x454c44u: goto label_454c44;
        case 0x454c48u: goto label_454c48;
        case 0x454c4cu: goto label_454c4c;
        case 0x454c50u: goto label_454c50;
        case 0x454c54u: goto label_454c54;
        case 0x454c58u: goto label_454c58;
        case 0x454c5cu: goto label_454c5c;
        case 0x454c60u: goto label_454c60;
        case 0x454c64u: goto label_454c64;
        case 0x454c68u: goto label_454c68;
        case 0x454c6cu: goto label_454c6c;
        case 0x454c70u: goto label_454c70;
        case 0x454c74u: goto label_454c74;
        case 0x454c78u: goto label_454c78;
        case 0x454c7cu: goto label_454c7c;
        case 0x454c80u: goto label_454c80;
        case 0x454c84u: goto label_454c84;
        case 0x454c88u: goto label_454c88;
        case 0x454c8cu: goto label_454c8c;
        case 0x454c90u: goto label_454c90;
        case 0x454c94u: goto label_454c94;
        case 0x454c98u: goto label_454c98;
        case 0x454c9cu: goto label_454c9c;
        case 0x454ca0u: goto label_454ca0;
        case 0x454ca4u: goto label_454ca4;
        case 0x454ca8u: goto label_454ca8;
        case 0x454cacu: goto label_454cac;
        case 0x454cb0u: goto label_454cb0;
        case 0x454cb4u: goto label_454cb4;
        case 0x454cb8u: goto label_454cb8;
        case 0x454cbcu: goto label_454cbc;
        case 0x454cc0u: goto label_454cc0;
        case 0x454cc4u: goto label_454cc4;
        case 0x454cc8u: goto label_454cc8;
        case 0x454cccu: goto label_454ccc;
        case 0x454cd0u: goto label_454cd0;
        case 0x454cd4u: goto label_454cd4;
        case 0x454cd8u: goto label_454cd8;
        case 0x454cdcu: goto label_454cdc;
        case 0x454ce0u: goto label_454ce0;
        case 0x454ce4u: goto label_454ce4;
        case 0x454ce8u: goto label_454ce8;
        case 0x454cecu: goto label_454cec;
        case 0x454cf0u: goto label_454cf0;
        case 0x454cf4u: goto label_454cf4;
        case 0x454cf8u: goto label_454cf8;
        case 0x454cfcu: goto label_454cfc;
        case 0x454d00u: goto label_454d00;
        case 0x454d04u: goto label_454d04;
        case 0x454d08u: goto label_454d08;
        case 0x454d0cu: goto label_454d0c;
        case 0x454d10u: goto label_454d10;
        case 0x454d14u: goto label_454d14;
        case 0x454d18u: goto label_454d18;
        case 0x454d1cu: goto label_454d1c;
        case 0x454d20u: goto label_454d20;
        case 0x454d24u: goto label_454d24;
        case 0x454d28u: goto label_454d28;
        case 0x454d2cu: goto label_454d2c;
        case 0x454d30u: goto label_454d30;
        case 0x454d34u: goto label_454d34;
        case 0x454d38u: goto label_454d38;
        case 0x454d3cu: goto label_454d3c;
        case 0x454d40u: goto label_454d40;
        case 0x454d44u: goto label_454d44;
        case 0x454d48u: goto label_454d48;
        case 0x454d4cu: goto label_454d4c;
        case 0x454d50u: goto label_454d50;
        case 0x454d54u: goto label_454d54;
        case 0x454d58u: goto label_454d58;
        case 0x454d5cu: goto label_454d5c;
        case 0x454d60u: goto label_454d60;
        case 0x454d64u: goto label_454d64;
        case 0x454d68u: goto label_454d68;
        case 0x454d6cu: goto label_454d6c;
        case 0x454d70u: goto label_454d70;
        case 0x454d74u: goto label_454d74;
        case 0x454d78u: goto label_454d78;
        case 0x454d7cu: goto label_454d7c;
        case 0x454d80u: goto label_454d80;
        case 0x454d84u: goto label_454d84;
        case 0x454d88u: goto label_454d88;
        case 0x454d8cu: goto label_454d8c;
        case 0x454d90u: goto label_454d90;
        case 0x454d94u: goto label_454d94;
        case 0x454d98u: goto label_454d98;
        case 0x454d9cu: goto label_454d9c;
        case 0x454da0u: goto label_454da0;
        case 0x454da4u: goto label_454da4;
        case 0x454da8u: goto label_454da8;
        case 0x454dacu: goto label_454dac;
        case 0x454db0u: goto label_454db0;
        case 0x454db4u: goto label_454db4;
        case 0x454db8u: goto label_454db8;
        case 0x454dbcu: goto label_454dbc;
        case 0x454dc0u: goto label_454dc0;
        case 0x454dc4u: goto label_454dc4;
        case 0x454dc8u: goto label_454dc8;
        case 0x454dccu: goto label_454dcc;
        case 0x454dd0u: goto label_454dd0;
        case 0x454dd4u: goto label_454dd4;
        case 0x454dd8u: goto label_454dd8;
        case 0x454ddcu: goto label_454ddc;
        case 0x454de0u: goto label_454de0;
        case 0x454de4u: goto label_454de4;
        case 0x454de8u: goto label_454de8;
        case 0x454decu: goto label_454dec;
        case 0x454df0u: goto label_454df0;
        case 0x454df4u: goto label_454df4;
        case 0x454df8u: goto label_454df8;
        case 0x454dfcu: goto label_454dfc;
        case 0x454e00u: goto label_454e00;
        case 0x454e04u: goto label_454e04;
        case 0x454e08u: goto label_454e08;
        case 0x454e0cu: goto label_454e0c;
        case 0x454e10u: goto label_454e10;
        case 0x454e14u: goto label_454e14;
        case 0x454e18u: goto label_454e18;
        case 0x454e1cu: goto label_454e1c;
        case 0x454e20u: goto label_454e20;
        case 0x454e24u: goto label_454e24;
        case 0x454e28u: goto label_454e28;
        case 0x454e2cu: goto label_454e2c;
        case 0x454e30u: goto label_454e30;
        case 0x454e34u: goto label_454e34;
        case 0x454e38u: goto label_454e38;
        case 0x454e3cu: goto label_454e3c;
        case 0x454e40u: goto label_454e40;
        case 0x454e44u: goto label_454e44;
        case 0x454e48u: goto label_454e48;
        case 0x454e4cu: goto label_454e4c;
        case 0x454e50u: goto label_454e50;
        case 0x454e54u: goto label_454e54;
        case 0x454e58u: goto label_454e58;
        case 0x454e5cu: goto label_454e5c;
        case 0x454e60u: goto label_454e60;
        case 0x454e64u: goto label_454e64;
        case 0x454e68u: goto label_454e68;
        case 0x454e6cu: goto label_454e6c;
        case 0x454e70u: goto label_454e70;
        case 0x454e74u: goto label_454e74;
        case 0x454e78u: goto label_454e78;
        case 0x454e7cu: goto label_454e7c;
        case 0x454e80u: goto label_454e80;
        case 0x454e84u: goto label_454e84;
        case 0x454e88u: goto label_454e88;
        case 0x454e8cu: goto label_454e8c;
        case 0x454e90u: goto label_454e90;
        case 0x454e94u: goto label_454e94;
        case 0x454e98u: goto label_454e98;
        case 0x454e9cu: goto label_454e9c;
        case 0x454ea0u: goto label_454ea0;
        case 0x454ea4u: goto label_454ea4;
        case 0x454ea8u: goto label_454ea8;
        case 0x454eacu: goto label_454eac;
        case 0x454eb0u: goto label_454eb0;
        case 0x454eb4u: goto label_454eb4;
        case 0x454eb8u: goto label_454eb8;
        case 0x454ebcu: goto label_454ebc;
        case 0x454ec0u: goto label_454ec0;
        case 0x454ec4u: goto label_454ec4;
        case 0x454ec8u: goto label_454ec8;
        case 0x454eccu: goto label_454ecc;
        case 0x454ed0u: goto label_454ed0;
        case 0x454ed4u: goto label_454ed4;
        case 0x454ed8u: goto label_454ed8;
        case 0x454edcu: goto label_454edc;
        case 0x454ee0u: goto label_454ee0;
        case 0x454ee4u: goto label_454ee4;
        case 0x454ee8u: goto label_454ee8;
        case 0x454eecu: goto label_454eec;
        case 0x454ef0u: goto label_454ef0;
        case 0x454ef4u: goto label_454ef4;
        case 0x454ef8u: goto label_454ef8;
        case 0x454efcu: goto label_454efc;
        case 0x454f00u: goto label_454f00;
        case 0x454f04u: goto label_454f04;
        case 0x454f08u: goto label_454f08;
        case 0x454f0cu: goto label_454f0c;
        case 0x454f10u: goto label_454f10;
        case 0x454f14u: goto label_454f14;
        case 0x454f18u: goto label_454f18;
        case 0x454f1cu: goto label_454f1c;
        case 0x454f20u: goto label_454f20;
        case 0x454f24u: goto label_454f24;
        case 0x454f28u: goto label_454f28;
        case 0x454f2cu: goto label_454f2c;
        case 0x454f30u: goto label_454f30;
        case 0x454f34u: goto label_454f34;
        case 0x454f38u: goto label_454f38;
        case 0x454f3cu: goto label_454f3c;
        case 0x454f40u: goto label_454f40;
        case 0x454f44u: goto label_454f44;
        case 0x454f48u: goto label_454f48;
        case 0x454f4cu: goto label_454f4c;
        case 0x454f50u: goto label_454f50;
        case 0x454f54u: goto label_454f54;
        case 0x454f58u: goto label_454f58;
        case 0x454f5cu: goto label_454f5c;
        case 0x454f60u: goto label_454f60;
        case 0x454f64u: goto label_454f64;
        case 0x454f68u: goto label_454f68;
        case 0x454f6cu: goto label_454f6c;
        case 0x454f70u: goto label_454f70;
        case 0x454f74u: goto label_454f74;
        case 0x454f78u: goto label_454f78;
        case 0x454f7cu: goto label_454f7c;
        case 0x454f80u: goto label_454f80;
        case 0x454f84u: goto label_454f84;
        case 0x454f88u: goto label_454f88;
        case 0x454f8cu: goto label_454f8c;
        case 0x454f90u: goto label_454f90;
        case 0x454f94u: goto label_454f94;
        case 0x454f98u: goto label_454f98;
        case 0x454f9cu: goto label_454f9c;
        case 0x454fa0u: goto label_454fa0;
        case 0x454fa4u: goto label_454fa4;
        case 0x454fa8u: goto label_454fa8;
        case 0x454facu: goto label_454fac;
        case 0x454fb0u: goto label_454fb0;
        case 0x454fb4u: goto label_454fb4;
        case 0x454fb8u: goto label_454fb8;
        case 0x454fbcu: goto label_454fbc;
        case 0x454fc0u: goto label_454fc0;
        case 0x454fc4u: goto label_454fc4;
        case 0x454fc8u: goto label_454fc8;
        case 0x454fccu: goto label_454fcc;
        case 0x454fd0u: goto label_454fd0;
        case 0x454fd4u: goto label_454fd4;
        case 0x454fd8u: goto label_454fd8;
        case 0x454fdcu: goto label_454fdc;
        case 0x454fe0u: goto label_454fe0;
        case 0x454fe4u: goto label_454fe4;
        case 0x454fe8u: goto label_454fe8;
        case 0x454fecu: goto label_454fec;
        case 0x454ff0u: goto label_454ff0;
        case 0x454ff4u: goto label_454ff4;
        case 0x454ff8u: goto label_454ff8;
        case 0x454ffcu: goto label_454ffc;
        case 0x455000u: goto label_455000;
        case 0x455004u: goto label_455004;
        case 0x455008u: goto label_455008;
        case 0x45500cu: goto label_45500c;
        case 0x455010u: goto label_455010;
        case 0x455014u: goto label_455014;
        case 0x455018u: goto label_455018;
        case 0x45501cu: goto label_45501c;
        case 0x455020u: goto label_455020;
        case 0x455024u: goto label_455024;
        case 0x455028u: goto label_455028;
        case 0x45502cu: goto label_45502c;
        case 0x455030u: goto label_455030;
        case 0x455034u: goto label_455034;
        case 0x455038u: goto label_455038;
        case 0x45503cu: goto label_45503c;
        case 0x455040u: goto label_455040;
        case 0x455044u: goto label_455044;
        case 0x455048u: goto label_455048;
        case 0x45504cu: goto label_45504c;
        case 0x455050u: goto label_455050;
        case 0x455054u: goto label_455054;
        case 0x455058u: goto label_455058;
        case 0x45505cu: goto label_45505c;
        case 0x455060u: goto label_455060;
        case 0x455064u: goto label_455064;
        case 0x455068u: goto label_455068;
        case 0x45506cu: goto label_45506c;
        case 0x455070u: goto label_455070;
        case 0x455074u: goto label_455074;
        case 0x455078u: goto label_455078;
        case 0x45507cu: goto label_45507c;
        case 0x455080u: goto label_455080;
        case 0x455084u: goto label_455084;
        case 0x455088u: goto label_455088;
        case 0x45508cu: goto label_45508c;
        case 0x455090u: goto label_455090;
        case 0x455094u: goto label_455094;
        case 0x455098u: goto label_455098;
        case 0x45509cu: goto label_45509c;
        default: break;
    }

    ctx->pc = 0x454bb0u;

label_454bb0:
    // 0x454bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x454bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_454bb4:
    // 0x454bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x454bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_454bb8:
    // 0x454bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x454bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_454bbc:
    // 0x454bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454bc0:
    // 0x454bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x454bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454bc4:
    // 0x454bc4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_454bc8:
    if (ctx->pc == 0x454BC8u) {
        ctx->pc = 0x454BC8u;
            // 0x454bc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454BCCu;
        goto label_454bcc;
    }
    ctx->pc = 0x454BC4u;
    {
        const bool branch_taken_0x454bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x454BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454BC4u;
            // 0x454bc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454bc4) {
            ctx->pc = 0x454CF8u;
            goto label_454cf8;
        }
    }
    ctx->pc = 0x454BCCu;
label_454bcc:
    // 0x454bcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x454bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_454bd0:
    // 0x454bd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x454bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_454bd4:
    // 0x454bd4: 0x2463e170  addiu       $v1, $v1, -0x1E90
    ctx->pc = 0x454bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959472));
label_454bd8:
    // 0x454bd8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x454bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_454bdc:
    // 0x454bdc: 0x2442e1a8  addiu       $v0, $v0, -0x1E58
    ctx->pc = 0x454bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959528));
label_454be0:
    // 0x454be0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x454be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_454be4:
    // 0x454be4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x454be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_454be8:
    // 0x454be8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x454be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_454bec:
    // 0x454bec: 0xc0407c0  jal         func_101F00
label_454bf0:
    if (ctx->pc == 0x454BF0u) {
        ctx->pc = 0x454BF0u;
            // 0x454bf0: 0x24a54d10  addiu       $a1, $a1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
        ctx->pc = 0x454BF4u;
        goto label_454bf4;
    }
    ctx->pc = 0x454BECu;
    SET_GPR_U32(ctx, 31, 0x454BF4u);
    ctx->pc = 0x454BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454BECu;
            // 0x454bf0: 0x24a54d10  addiu       $a1, $a1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454BF4u; }
        if (ctx->pc != 0x454BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454BF4u; }
        if (ctx->pc != 0x454BF4u) { return; }
    }
    ctx->pc = 0x454BF4u;
label_454bf4:
    // 0x454bf4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x454bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_454bf8:
    // 0x454bf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_454bfc:
    if (ctx->pc == 0x454BFCu) {
        ctx->pc = 0x454BFCu;
            // 0x454bfc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x454C00u;
        goto label_454c00;
    }
    ctx->pc = 0x454BF8u;
    {
        const bool branch_taken_0x454bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454bf8) {
            ctx->pc = 0x454BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454BF8u;
            // 0x454bfc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454C0Cu;
            goto label_454c0c;
        }
    }
    ctx->pc = 0x454C00u;
label_454c00:
    // 0x454c00: 0xc07507c  jal         func_1D41F0
label_454c04:
    if (ctx->pc == 0x454C04u) {
        ctx->pc = 0x454C04u;
            // 0x454c04: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x454C08u;
        goto label_454c08;
    }
    ctx->pc = 0x454C00u;
    SET_GPR_U32(ctx, 31, 0x454C08u);
    ctx->pc = 0x454C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454C00u;
            // 0x454c04: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454C08u; }
        if (ctx->pc != 0x454C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454C08u; }
        if (ctx->pc != 0x454C08u) { return; }
    }
    ctx->pc = 0x454C08u;
label_454c08:
    // 0x454c08: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x454c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_454c0c:
    // 0x454c0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_454c10:
    if (ctx->pc == 0x454C10u) {
        ctx->pc = 0x454C10u;
            // 0x454c10: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x454C14u;
        goto label_454c14;
    }
    ctx->pc = 0x454C0Cu;
    {
        const bool branch_taken_0x454c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c0c) {
            ctx->pc = 0x454C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454C0Cu;
            // 0x454c10: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454C3Cu;
            goto label_454c3c;
        }
    }
    ctx->pc = 0x454C14u;
label_454c14:
    // 0x454c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_454c18:
    if (ctx->pc == 0x454C18u) {
        ctx->pc = 0x454C1Cu;
        goto label_454c1c;
    }
    ctx->pc = 0x454C14u;
    {
        const bool branch_taken_0x454c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c14) {
            ctx->pc = 0x454C38u;
            goto label_454c38;
        }
    }
    ctx->pc = 0x454C1Cu;
label_454c1c:
    // 0x454c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_454c20:
    if (ctx->pc == 0x454C20u) {
        ctx->pc = 0x454C24u;
        goto label_454c24;
    }
    ctx->pc = 0x454C1Cu;
    {
        const bool branch_taken_0x454c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c1c) {
            ctx->pc = 0x454C38u;
            goto label_454c38;
        }
    }
    ctx->pc = 0x454C24u;
label_454c24:
    // 0x454c24: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x454c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_454c28:
    // 0x454c28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_454c2c:
    if (ctx->pc == 0x454C2Cu) {
        ctx->pc = 0x454C30u;
        goto label_454c30;
    }
    ctx->pc = 0x454C28u;
    {
        const bool branch_taken_0x454c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c28) {
            ctx->pc = 0x454C38u;
            goto label_454c38;
        }
    }
    ctx->pc = 0x454C30u;
label_454c30:
    // 0x454c30: 0xc0400a8  jal         func_1002A0
label_454c34:
    if (ctx->pc == 0x454C34u) {
        ctx->pc = 0x454C38u;
        goto label_454c38;
    }
    ctx->pc = 0x454C30u;
    SET_GPR_U32(ctx, 31, 0x454C38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454C38u; }
        if (ctx->pc != 0x454C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454C38u; }
        if (ctx->pc != 0x454C38u) { return; }
    }
    ctx->pc = 0x454C38u;
label_454c38:
    // 0x454c38: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x454c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_454c3c:
    // 0x454c3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_454c40:
    if (ctx->pc == 0x454C40u) {
        ctx->pc = 0x454C40u;
            // 0x454c40: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x454C44u;
        goto label_454c44;
    }
    ctx->pc = 0x454C3Cu;
    {
        const bool branch_taken_0x454c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c3c) {
            ctx->pc = 0x454C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454C3Cu;
            // 0x454c40: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454C6Cu;
            goto label_454c6c;
        }
    }
    ctx->pc = 0x454C44u;
label_454c44:
    // 0x454c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_454c48:
    if (ctx->pc == 0x454C48u) {
        ctx->pc = 0x454C4Cu;
        goto label_454c4c;
    }
    ctx->pc = 0x454C44u;
    {
        const bool branch_taken_0x454c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c44) {
            ctx->pc = 0x454C68u;
            goto label_454c68;
        }
    }
    ctx->pc = 0x454C4Cu;
label_454c4c:
    // 0x454c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_454c50:
    if (ctx->pc == 0x454C50u) {
        ctx->pc = 0x454C54u;
        goto label_454c54;
    }
    ctx->pc = 0x454C4Cu;
    {
        const bool branch_taken_0x454c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c4c) {
            ctx->pc = 0x454C68u;
            goto label_454c68;
        }
    }
    ctx->pc = 0x454C54u;
label_454c54:
    // 0x454c54: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x454c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_454c58:
    // 0x454c58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_454c5c:
    if (ctx->pc == 0x454C5Cu) {
        ctx->pc = 0x454C60u;
        goto label_454c60;
    }
    ctx->pc = 0x454C58u;
    {
        const bool branch_taken_0x454c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c58) {
            ctx->pc = 0x454C68u;
            goto label_454c68;
        }
    }
    ctx->pc = 0x454C60u;
label_454c60:
    // 0x454c60: 0xc0400a8  jal         func_1002A0
label_454c64:
    if (ctx->pc == 0x454C64u) {
        ctx->pc = 0x454C68u;
        goto label_454c68;
    }
    ctx->pc = 0x454C60u;
    SET_GPR_U32(ctx, 31, 0x454C68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454C68u; }
        if (ctx->pc != 0x454C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454C68u; }
        if (ctx->pc != 0x454C68u) { return; }
    }
    ctx->pc = 0x454C68u;
label_454c68:
    // 0x454c68: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x454c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_454c6c:
    // 0x454c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_454c70:
    if (ctx->pc == 0x454C70u) {
        ctx->pc = 0x454C74u;
        goto label_454c74;
    }
    ctx->pc = 0x454C6Cu;
    {
        const bool branch_taken_0x454c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c6c) {
            ctx->pc = 0x454C88u;
            goto label_454c88;
        }
    }
    ctx->pc = 0x454C74u;
label_454c74:
    // 0x454c74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x454c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_454c78:
    // 0x454c78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x454c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_454c7c:
    // 0x454c7c: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x454c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_454c80:
    // 0x454c80: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x454c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_454c84:
    // 0x454c84: 0xac4075b8  sw          $zero, 0x75B8($v0)
    ctx->pc = 0x454c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30136), GPR_U32(ctx, 0));
label_454c88:
    // 0x454c88: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_454c8c:
    if (ctx->pc == 0x454C8Cu) {
        ctx->pc = 0x454C8Cu;
            // 0x454c8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x454C90u;
        goto label_454c90;
    }
    ctx->pc = 0x454C88u;
    {
        const bool branch_taken_0x454c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c88) {
            ctx->pc = 0x454C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454C88u;
            // 0x454c8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454CE4u;
            goto label_454ce4;
        }
    }
    ctx->pc = 0x454C90u;
label_454c90:
    // 0x454c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x454c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_454c94:
    // 0x454c94: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x454c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_454c98:
    // 0x454c98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x454c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_454c9c:
    // 0x454c9c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x454c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_454ca0:
    // 0x454ca0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_454ca4:
    if (ctx->pc == 0x454CA4u) {
        ctx->pc = 0x454CA4u;
            // 0x454ca4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x454CA8u;
        goto label_454ca8;
    }
    ctx->pc = 0x454CA0u;
    {
        const bool branch_taken_0x454ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454ca0) {
            ctx->pc = 0x454CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454CA0u;
            // 0x454ca4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454CBCu;
            goto label_454cbc;
        }
    }
    ctx->pc = 0x454CA8u;
label_454ca8:
    // 0x454ca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x454ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_454cac:
    // 0x454cac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x454cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_454cb0:
    // 0x454cb0: 0x320f809  jalr        $t9
label_454cb4:
    if (ctx->pc == 0x454CB4u) {
        ctx->pc = 0x454CB4u;
            // 0x454cb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x454CB8u;
        goto label_454cb8;
    }
    ctx->pc = 0x454CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x454CB8u);
        ctx->pc = 0x454CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454CB0u;
            // 0x454cb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x454CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x454CB8u; }
            if (ctx->pc != 0x454CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x454CB8u;
label_454cb8:
    // 0x454cb8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x454cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_454cbc:
    // 0x454cbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_454cc0:
    if (ctx->pc == 0x454CC0u) {
        ctx->pc = 0x454CC0u;
            // 0x454cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454CC4u;
        goto label_454cc4;
    }
    ctx->pc = 0x454CBCu;
    {
        const bool branch_taken_0x454cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454cbc) {
            ctx->pc = 0x454CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454CBCu;
            // 0x454cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454CD8u;
            goto label_454cd8;
        }
    }
    ctx->pc = 0x454CC4u;
label_454cc4:
    // 0x454cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x454cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_454cc8:
    // 0x454cc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x454cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_454ccc:
    // 0x454ccc: 0x320f809  jalr        $t9
label_454cd0:
    if (ctx->pc == 0x454CD0u) {
        ctx->pc = 0x454CD0u;
            // 0x454cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x454CD4u;
        goto label_454cd4;
    }
    ctx->pc = 0x454CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x454CD4u);
        ctx->pc = 0x454CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454CCCu;
            // 0x454cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x454CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x454CD4u; }
            if (ctx->pc != 0x454CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x454CD4u;
label_454cd4:
    // 0x454cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x454cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_454cd8:
    // 0x454cd8: 0xc075bf8  jal         func_1D6FE0
label_454cdc:
    if (ctx->pc == 0x454CDCu) {
        ctx->pc = 0x454CDCu;
            // 0x454cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454CE0u;
        goto label_454ce0;
    }
    ctx->pc = 0x454CD8u;
    SET_GPR_U32(ctx, 31, 0x454CE0u);
    ctx->pc = 0x454CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454CD8u;
            // 0x454cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454CE0u; }
        if (ctx->pc != 0x454CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454CE0u; }
        if (ctx->pc != 0x454CE0u) { return; }
    }
    ctx->pc = 0x454CE0u;
label_454ce0:
    // 0x454ce0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x454ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_454ce4:
    // 0x454ce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x454ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_454ce8:
    // 0x454ce8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_454cec:
    if (ctx->pc == 0x454CECu) {
        ctx->pc = 0x454CECu;
            // 0x454cec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454CF0u;
        goto label_454cf0;
    }
    ctx->pc = 0x454CE8u;
    {
        const bool branch_taken_0x454ce8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x454ce8) {
            ctx->pc = 0x454CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454CE8u;
            // 0x454cec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454CFCu;
            goto label_454cfc;
        }
    }
    ctx->pc = 0x454CF0u;
label_454cf0:
    // 0x454cf0: 0xc0400a8  jal         func_1002A0
label_454cf4:
    if (ctx->pc == 0x454CF4u) {
        ctx->pc = 0x454CF4u;
            // 0x454cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454CF8u;
        goto label_454cf8;
    }
    ctx->pc = 0x454CF0u;
    SET_GPR_U32(ctx, 31, 0x454CF8u);
    ctx->pc = 0x454CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454CF0u;
            // 0x454cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454CF8u; }
        if (ctx->pc != 0x454CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454CF8u; }
        if (ctx->pc != 0x454CF8u) { return; }
    }
    ctx->pc = 0x454CF8u;
label_454cf8:
    // 0x454cf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x454cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_454cfc:
    // 0x454cfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x454cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_454d00:
    // 0x454d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_454d04:
    // 0x454d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_454d08:
    // 0x454d08: 0x3e00008  jr          $ra
label_454d0c:
    if (ctx->pc == 0x454D0Cu) {
        ctx->pc = 0x454D0Cu;
            // 0x454d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x454D10u;
        goto label_454d10;
    }
    ctx->pc = 0x454D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454D08u;
            // 0x454d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454D10u;
label_454d10:
    // 0x454d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x454d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_454d14:
    // 0x454d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x454d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_454d18:
    // 0x454d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x454d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_454d1c:
    // 0x454d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454d20:
    // 0x454d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x454d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454d24:
    // 0x454d24: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_454d28:
    if (ctx->pc == 0x454D28u) {
        ctx->pc = 0x454D28u;
            // 0x454d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454D2Cu;
        goto label_454d2c;
    }
    ctx->pc = 0x454D24u;
    {
        const bool branch_taken_0x454d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x454D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454D24u;
            // 0x454d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454d24) {
            ctx->pc = 0x454D98u;
            goto label_454d98;
        }
    }
    ctx->pc = 0x454D2Cu;
label_454d2c:
    // 0x454d2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x454d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_454d30:
    // 0x454d30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x454d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_454d34:
    // 0x454d34: 0x2463e0b0  addiu       $v1, $v1, -0x1F50
    ctx->pc = 0x454d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959280));
label_454d38:
    // 0x454d38: 0x2442e0f0  addiu       $v0, $v0, -0x1F10
    ctx->pc = 0x454d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959344));
label_454d3c:
    // 0x454d3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x454d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_454d40:
    // 0x454d40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x454d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_454d44:
    // 0x454d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x454d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_454d48:
    // 0x454d48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x454d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_454d4c:
    // 0x454d4c: 0x320f809  jalr        $t9
label_454d50:
    if (ctx->pc == 0x454D50u) {
        ctx->pc = 0x454D54u;
        goto label_454d54;
    }
    ctx->pc = 0x454D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x454D54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x454D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x454D54u; }
            if (ctx->pc != 0x454D54u) { return; }
        }
        }
    }
    ctx->pc = 0x454D54u;
label_454d54:
    // 0x454d54: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_454d58:
    if (ctx->pc == 0x454D58u) {
        ctx->pc = 0x454D58u;
            // 0x454d58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x454D5Cu;
        goto label_454d5c;
    }
    ctx->pc = 0x454D54u;
    {
        const bool branch_taken_0x454d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x454d54) {
            ctx->pc = 0x454D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454D54u;
            // 0x454d58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454D84u;
            goto label_454d84;
        }
    }
    ctx->pc = 0x454D5Cu;
label_454d5c:
    // 0x454d5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x454d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_454d60:
    // 0x454d60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x454d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_454d64:
    // 0x454d64: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x454d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_454d68:
    // 0x454d68: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x454d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_454d6c:
    // 0x454d6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x454d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_454d70:
    // 0x454d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_454d74:
    // 0x454d74: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x454d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_454d78:
    // 0x454d78: 0xc0aee40  jal         func_2BB900
label_454d7c:
    if (ctx->pc == 0x454D7Cu) {
        ctx->pc = 0x454D7Cu;
            // 0x454d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454D80u;
        goto label_454d80;
    }
    ctx->pc = 0x454D78u;
    SET_GPR_U32(ctx, 31, 0x454D80u);
    ctx->pc = 0x454D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454D78u;
            // 0x454d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454D80u; }
        if (ctx->pc != 0x454D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454D80u; }
        if (ctx->pc != 0x454D80u) { return; }
    }
    ctx->pc = 0x454D80u;
label_454d80:
    // 0x454d80: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x454d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_454d84:
    // 0x454d84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x454d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_454d88:
    // 0x454d88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_454d8c:
    if (ctx->pc == 0x454D8Cu) {
        ctx->pc = 0x454D8Cu;
            // 0x454d8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454D90u;
        goto label_454d90;
    }
    ctx->pc = 0x454D88u;
    {
        const bool branch_taken_0x454d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x454d88) {
            ctx->pc = 0x454D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454D88u;
            // 0x454d8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454D9Cu;
            goto label_454d9c;
        }
    }
    ctx->pc = 0x454D90u;
label_454d90:
    // 0x454d90: 0xc0400a8  jal         func_1002A0
label_454d94:
    if (ctx->pc == 0x454D94u) {
        ctx->pc = 0x454D94u;
            // 0x454d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454D98u;
        goto label_454d98;
    }
    ctx->pc = 0x454D90u;
    SET_GPR_U32(ctx, 31, 0x454D98u);
    ctx->pc = 0x454D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454D90u;
            // 0x454d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454D98u; }
        if (ctx->pc != 0x454D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454D98u; }
        if (ctx->pc != 0x454D98u) { return; }
    }
    ctx->pc = 0x454D98u;
label_454d98:
    // 0x454d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x454d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_454d9c:
    // 0x454d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x454d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_454da0:
    // 0x454da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_454da4:
    // 0x454da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_454da8:
    // 0x454da8: 0x3e00008  jr          $ra
label_454dac:
    if (ctx->pc == 0x454DACu) {
        ctx->pc = 0x454DACu;
            // 0x454dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x454DB0u;
        goto label_454db0;
    }
    ctx->pc = 0x454DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454DA8u;
            // 0x454dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454DB0u;
label_454db0:
    // 0x454db0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x454db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_454db4:
    // 0x454db4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x454db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_454db8:
    // 0x454db8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x454db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_454dbc:
    // 0x454dbc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x454dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_454dc0:
    // 0x454dc0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x454dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_454dc4:
    // 0x454dc4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x454dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_454dc8:
    // 0x454dc8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x454dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_454dcc:
    // 0x454dcc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x454dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_454dd0:
    // 0x454dd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x454dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_454dd4:
    // 0x454dd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x454dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_454dd8:
    // 0x454dd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x454dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_454ddc:
    // 0x454ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x454ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_454de0:
    // 0x454de0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x454de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_454de4:
    // 0x454de4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x454de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_454de8:
    // 0x454de8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x454de8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_454dec:
    // 0x454dec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x454decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_454df0:
    // 0x454df0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_454df4:
    if (ctx->pc == 0x454DF4u) {
        ctx->pc = 0x454DF4u;
            // 0x454df4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454DF8u;
        goto label_454df8;
    }
    ctx->pc = 0x454DF0u;
    {
        const bool branch_taken_0x454df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x454DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454DF0u;
            // 0x454df4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454df0) {
            ctx->pc = 0x454E34u;
            goto label_454e34;
        }
    }
    ctx->pc = 0x454DF8u;
label_454df8:
    // 0x454df8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x454df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454dfc:
    // 0x454dfc: 0x50a30099  beql        $a1, $v1, . + 4 + (0x99 << 2)
label_454e00:
    if (ctx->pc == 0x454E00u) {
        ctx->pc = 0x454E00u;
            // 0x454e00: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x454E04u;
        goto label_454e04;
    }
    ctx->pc = 0x454DFCu;
    {
        const bool branch_taken_0x454dfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x454dfc) {
            ctx->pc = 0x454E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454DFCu;
            // 0x454e00: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455064u;
            goto label_455064;
        }
    }
    ctx->pc = 0x454E04u;
label_454e04:
    // 0x454e04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x454e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_454e08:
    // 0x454e08: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_454e0c:
    if (ctx->pc == 0x454E0Cu) {
        ctx->pc = 0x454E0Cu;
            // 0x454e0c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x454E10u;
        goto label_454e10;
    }
    ctx->pc = 0x454E08u;
    {
        const bool branch_taken_0x454e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x454e08) {
            ctx->pc = 0x454E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454E08u;
            // 0x454e0c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454E18u;
            goto label_454e18;
        }
    }
    ctx->pc = 0x454E10u;
label_454e10:
    // 0x454e10: 0x10000093  b           . + 4 + (0x93 << 2)
label_454e14:
    if (ctx->pc == 0x454E14u) {
        ctx->pc = 0x454E18u;
        goto label_454e18;
    }
    ctx->pc = 0x454E10u;
    {
        const bool branch_taken_0x454e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454e10) {
            ctx->pc = 0x455060u;
            goto label_455060;
        }
    }
    ctx->pc = 0x454E18u;
label_454e18:
    // 0x454e18: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x454e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_454e1c:
    // 0x454e1c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x454e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_454e20:
    // 0x454e20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x454e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_454e24:
    // 0x454e24: 0x320f809  jalr        $t9
label_454e28:
    if (ctx->pc == 0x454E28u) {
        ctx->pc = 0x454E28u;
            // 0x454e28: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x454E2Cu;
        goto label_454e2c;
    }
    ctx->pc = 0x454E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x454E2Cu);
        ctx->pc = 0x454E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454E24u;
            // 0x454e28: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x454E2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x454E2Cu; }
            if (ctx->pc != 0x454E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x454E2Cu;
label_454e2c:
    // 0x454e2c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_454e30:
    if (ctx->pc == 0x454E30u) {
        ctx->pc = 0x454E34u;
        goto label_454e34;
    }
    ctx->pc = 0x454E2Cu;
    {
        const bool branch_taken_0x454e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454e2c) {
            ctx->pc = 0x455060u;
            goto label_455060;
        }
    }
    ctx->pc = 0x454E34u;
label_454e34:
    // 0x454e34: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x454e34u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_454e38:
    // 0x454e38: 0x12e00089  beqz        $s7, . + 4 + (0x89 << 2)
label_454e3c:
    if (ctx->pc == 0x454E3Cu) {
        ctx->pc = 0x454E40u;
        goto label_454e40;
    }
    ctx->pc = 0x454E38u;
    {
        const bool branch_taken_0x454e38 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x454e38) {
            ctx->pc = 0x455060u;
            goto label_455060;
        }
    }
    ctx->pc = 0x454E40u;
label_454e40:
    // 0x454e40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x454e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_454e44:
    // 0x454e44: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x454e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_454e48:
    // 0x454e48: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x454e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_454e4c:
    // 0x454e4c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x454e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_454e50:
    // 0x454e50: 0x8c84d130  lw          $a0, -0x2ED0($a0)
    ctx->pc = 0x454e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_454e54:
    // 0x454e54: 0x26be0084  addiu       $fp, $s5, 0x84
    ctx->pc = 0x454e54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_454e58:
    // 0x454e58: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x454e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_454e5c:
    // 0x454e5c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x454e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_454e60:
    // 0x454e60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x454e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_454e64:
    // 0x454e64: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x454e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_454e68:
    // 0x454e68: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x454e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_454e6c:
    // 0x454e6c: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x454e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_454e70:
    // 0x454e70: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x454e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_454e74:
    // 0x454e74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x454e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_454e78:
    // 0x454e78: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x454e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_454e7c:
    // 0x454e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x454e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_454e80:
    // 0x454e80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x454e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_454e84:
    // 0x454e84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x454e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_454e88:
    // 0x454e88: 0xc04e738  jal         func_139CE0
label_454e8c:
    if (ctx->pc == 0x454E8Cu) {
        ctx->pc = 0x454E8Cu;
            // 0x454e8c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x454E90u;
        goto label_454e90;
    }
    ctx->pc = 0x454E88u;
    SET_GPR_U32(ctx, 31, 0x454E90u);
    ctx->pc = 0x454E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454E88u;
            // 0x454e8c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454E90u; }
        if (ctx->pc != 0x454E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454E90u; }
        if (ctx->pc != 0x454E90u) { return; }
    }
    ctx->pc = 0x454E90u;
label_454e90:
    // 0x454e90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x454e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_454e94:
    // 0x454e94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x454e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_454e98:
    // 0x454e98: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x454e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_454e9c:
    // 0x454e9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x454e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454ea0:
    // 0x454ea0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x454ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_454ea4:
    // 0x454ea4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x454ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_454ea8:
    // 0x454ea8: 0xc454dea0  lwc1        $f20, -0x2160($v0)
    ctx->pc = 0x454ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_454eac:
    // 0x454eac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x454eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454eb0:
    // 0x454eb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x454eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_454eb4:
    // 0x454eb4: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x454eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_454eb8:
    // 0x454eb8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x454eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_454ebc:
    // 0x454ebc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x454ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_454ec0:
    // 0x454ec0: 0x8c530130  lw          $s3, 0x130($v0)
    ctx->pc = 0x454ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_454ec4:
    // 0x454ec4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x454ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_454ec8:
    // 0x454ec8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x454ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_454ecc:
    // 0x454ecc: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x454eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_454ed0:
    // 0x454ed0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x454ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_454ed4:
    // 0x454ed4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x454ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_454ed8:
    // 0x454ed8: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x454ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_454edc:
    // 0x454edc: 0xc0d639c  jal         func_358E70
label_454ee0:
    if (ctx->pc == 0x454EE0u) {
        ctx->pc = 0x454EE0u;
            // 0x454ee0: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x454EE4u;
        goto label_454ee4;
    }
    ctx->pc = 0x454EDCu;
    SET_GPR_U32(ctx, 31, 0x454EE4u);
    ctx->pc = 0x454EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454EDCu;
            // 0x454ee0: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454EE4u; }
        if (ctx->pc != 0x454EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454EE4u; }
        if (ctx->pc != 0x454EE4u) { return; }
    }
    ctx->pc = 0x454EE4u;
label_454ee4:
    // 0x454ee4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_454ee8:
    if (ctx->pc == 0x454EE8u) {
        ctx->pc = 0x454EECu;
        goto label_454eec;
    }
    ctx->pc = 0x454EE4u;
    {
        const bool branch_taken_0x454ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454ee4) {
            ctx->pc = 0x454FC0u;
            goto label_454fc0;
        }
    }
    ctx->pc = 0x454EECu;
label_454eec:
    // 0x454eec: 0xc0d1c14  jal         func_347050
label_454ef0:
    if (ctx->pc == 0x454EF0u) {
        ctx->pc = 0x454EF0u;
            // 0x454ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454EF4u;
        goto label_454ef4;
    }
    ctx->pc = 0x454EECu;
    SET_GPR_U32(ctx, 31, 0x454EF4u);
    ctx->pc = 0x454EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454EECu;
            // 0x454ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454EF4u; }
        if (ctx->pc != 0x454EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454EF4u; }
        if (ctx->pc != 0x454EF4u) { return; }
    }
    ctx->pc = 0x454EF4u;
label_454ef4:
    // 0x454ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ef8:
    // 0x454ef8: 0xc04f278  jal         func_13C9E0
label_454efc:
    if (ctx->pc == 0x454EFCu) {
        ctx->pc = 0x454EFCu;
            // 0x454efc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x454F00u;
        goto label_454f00;
    }
    ctx->pc = 0x454EF8u;
    SET_GPR_U32(ctx, 31, 0x454F00u);
    ctx->pc = 0x454EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454EF8u;
            // 0x454efc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F00u; }
        if (ctx->pc != 0x454F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F00u; }
        if (ctx->pc != 0x454F00u) { return; }
    }
    ctx->pc = 0x454F00u;
label_454f00:
    // 0x454f00: 0xc0d1c10  jal         func_347040
label_454f04:
    if (ctx->pc == 0x454F04u) {
        ctx->pc = 0x454F04u;
            // 0x454f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454F08u;
        goto label_454f08;
    }
    ctx->pc = 0x454F00u;
    SET_GPR_U32(ctx, 31, 0x454F08u);
    ctx->pc = 0x454F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F00u;
            // 0x454f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F08u; }
        if (ctx->pc != 0x454F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F08u; }
        if (ctx->pc != 0x454F08u) { return; }
    }
    ctx->pc = 0x454F08u;
label_454f08:
    // 0x454f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f0c:
    // 0x454f0c: 0xc04ce80  jal         func_133A00
label_454f10:
    if (ctx->pc == 0x454F10u) {
        ctx->pc = 0x454F10u;
            // 0x454f10: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x454F14u;
        goto label_454f14;
    }
    ctx->pc = 0x454F0Cu;
    SET_GPR_U32(ctx, 31, 0x454F14u);
    ctx->pc = 0x454F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F0Cu;
            // 0x454f10: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F14u; }
        if (ctx->pc != 0x454F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F14u; }
        if (ctx->pc != 0x454F14u) { return; }
    }
    ctx->pc = 0x454F14u;
label_454f14:
    // 0x454f14: 0xc0d4108  jal         func_350420
label_454f18:
    if (ctx->pc == 0x454F18u) {
        ctx->pc = 0x454F1Cu;
        goto label_454f1c;
    }
    ctx->pc = 0x454F14u;
    SET_GPR_U32(ctx, 31, 0x454F1Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F1Cu; }
        if (ctx->pc != 0x454F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F1Cu; }
        if (ctx->pc != 0x454F1Cu) { return; }
    }
    ctx->pc = 0x454F1Cu;
label_454f1c:
    // 0x454f1c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x454f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f20:
    // 0x454f20: 0xc0d4104  jal         func_350410
label_454f24:
    if (ctx->pc == 0x454F24u) {
        ctx->pc = 0x454F24u;
            // 0x454f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454F28u;
        goto label_454f28;
    }
    ctx->pc = 0x454F20u;
    SET_GPR_U32(ctx, 31, 0x454F28u);
    ctx->pc = 0x454F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F20u;
            // 0x454f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F28u; }
        if (ctx->pc != 0x454F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F28u; }
        if (ctx->pc != 0x454F28u) { return; }
    }
    ctx->pc = 0x454F28u;
label_454f28:
    // 0x454f28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x454f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_454f2c:
    // 0x454f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x454f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_454f30:
    // 0x454f30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x454f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_454f34:
    // 0x454f34: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x454f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_454f38:
    // 0x454f38: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x454f38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f3c:
    // 0x454f3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x454f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454f40:
    // 0x454f40: 0xc0d40ac  jal         func_3502B0
label_454f44:
    if (ctx->pc == 0x454F44u) {
        ctx->pc = 0x454F44u;
            // 0x454f44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x454F48u;
        goto label_454f48;
    }
    ctx->pc = 0x454F40u;
    SET_GPR_U32(ctx, 31, 0x454F48u);
    ctx->pc = 0x454F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F40u;
            // 0x454f44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F48u; }
        if (ctx->pc != 0x454F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F48u; }
        if (ctx->pc != 0x454F48u) { return; }
    }
    ctx->pc = 0x454F48u;
label_454f48:
    // 0x454f48: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x454f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_454f4c:
    // 0x454f4c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_454f50:
    if (ctx->pc == 0x454F50u) {
        ctx->pc = 0x454F50u;
            // 0x454f50: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x454F54u;
        goto label_454f54;
    }
    ctx->pc = 0x454F4Cu;
    {
        const bool branch_taken_0x454f4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x454F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454F4Cu;
            // 0x454f50: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454f4c) {
            ctx->pc = 0x454F60u;
            goto label_454f60;
        }
    }
    ctx->pc = 0x454F54u;
label_454f54:
    // 0x454f54: 0x1000001c  b           . + 4 + (0x1C << 2)
label_454f58:
    if (ctx->pc == 0x454F58u) {
        ctx->pc = 0x454F58u;
            // 0x454f58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454F5Cu;
        goto label_454f5c;
    }
    ctx->pc = 0x454F54u;
    {
        const bool branch_taken_0x454f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454F54u;
            // 0x454f58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454f54) {
            ctx->pc = 0x454FC8u;
            goto label_454fc8;
        }
    }
    ctx->pc = 0x454F5Cu;
label_454f5c:
    // 0x454f5c: 0x0  nop
    ctx->pc = 0x454f5cu;
    // NOP
label_454f60:
    // 0x454f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x454f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_454f64:
    // 0x454f64: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x454f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_454f68:
    // 0x454f68: 0xc115428  jal         func_4550A0
label_454f6c:
    if (ctx->pc == 0x454F6Cu) {
        ctx->pc = 0x454F6Cu;
            // 0x454f6c: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->pc = 0x454F70u;
        goto label_454f70;
    }
    ctx->pc = 0x454F68u;
    SET_GPR_U32(ctx, 31, 0x454F70u);
    ctx->pc = 0x454F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F68u;
            // 0x454f6c: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4550A0u;
    if (runtime->hasFunction(0x4550A0u)) {
        auto targetFn = runtime->lookupFunction(0x4550A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F70u; }
        if (ctx->pc != 0x454F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004550A0_0x4550a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F70u; }
        if (ctx->pc != 0x454F70u) { return; }
    }
    ctx->pc = 0x454F70u;
label_454f70:
    // 0x454f70: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x454f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_454f74:
    // 0x454f74: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x454f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_454f78:
    // 0x454f78: 0xc04e4a4  jal         func_139290
label_454f7c:
    if (ctx->pc == 0x454F7Cu) {
        ctx->pc = 0x454F7Cu;
            // 0x454f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454F80u;
        goto label_454f80;
    }
    ctx->pc = 0x454F78u;
    SET_GPR_U32(ctx, 31, 0x454F80u);
    ctx->pc = 0x454F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F78u;
            // 0x454f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F80u; }
        if (ctx->pc != 0x454F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F80u; }
        if (ctx->pc != 0x454F80u) { return; }
    }
    ctx->pc = 0x454F80u;
label_454f80:
    // 0x454f80: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x454f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_454f84:
    // 0x454f84: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x454f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_454f88:
    // 0x454f88: 0xc04cd60  jal         func_133580
label_454f8c:
    if (ctx->pc == 0x454F8Cu) {
        ctx->pc = 0x454F8Cu;
            // 0x454f8c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x454F90u;
        goto label_454f90;
    }
    ctx->pc = 0x454F88u;
    SET_GPR_U32(ctx, 31, 0x454F90u);
    ctx->pc = 0x454F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454F88u;
            // 0x454f8c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F90u; }
        if (ctx->pc != 0x454F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454F90u; }
        if (ctx->pc != 0x454F90u) { return; }
    }
    ctx->pc = 0x454F90u;
label_454f90:
    // 0x454f90: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x454f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_454f94:
    // 0x454f94: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x454f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_454f98:
    // 0x454f98: 0x320f809  jalr        $t9
label_454f9c:
    if (ctx->pc == 0x454F9Cu) {
        ctx->pc = 0x454F9Cu;
            // 0x454f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454FA0u;
        goto label_454fa0;
    }
    ctx->pc = 0x454F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x454FA0u);
        ctx->pc = 0x454F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454F98u;
            // 0x454f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x454FA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x454FA0u; }
            if (ctx->pc != 0x454FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x454FA0u;
label_454fa0:
    // 0x454fa0: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x454fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_454fa4:
    // 0x454fa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x454fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_454fa8:
    // 0x454fa8: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x454fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_454fac:
    // 0x454fac: 0xc054fd4  jal         func_153F50
label_454fb0:
    if (ctx->pc == 0x454FB0u) {
        ctx->pc = 0x454FB0u;
            // 0x454fb0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454FB4u;
        goto label_454fb4;
    }
    ctx->pc = 0x454FACu;
    SET_GPR_U32(ctx, 31, 0x454FB4u);
    ctx->pc = 0x454FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454FACu;
            // 0x454fb0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454FB4u; }
        if (ctx->pc != 0x454FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454FB4u; }
        if (ctx->pc != 0x454FB4u) { return; }
    }
    ctx->pc = 0x454FB4u;
label_454fb4:
    // 0x454fb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_454fb8:
    if (ctx->pc == 0x454FB8u) {
        ctx->pc = 0x454FB8u;
            // 0x454fb8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x454FBCu;
        goto label_454fbc;
    }
    ctx->pc = 0x454FB4u;
    {
        const bool branch_taken_0x454fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454FB4u;
            // 0x454fb8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454fb4) {
            ctx->pc = 0x454FC8u;
            goto label_454fc8;
        }
    }
    ctx->pc = 0x454FBCu;
label_454fbc:
    // 0x454fbc: 0x0  nop
    ctx->pc = 0x454fbcu;
    // NOP
label_454fc0:
    // 0x454fc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x454fc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454fc4:
    // 0x454fc4: 0x0  nop
    ctx->pc = 0x454fc4u;
    // NOP
label_454fc8:
    // 0x454fc8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_454fcc:
    if (ctx->pc == 0x454FCCu) {
        ctx->pc = 0x454FD0u;
        goto label_454fd0;
    }
    ctx->pc = 0x454FC8u;
    {
        const bool branch_taken_0x454fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x454fc8) {
            ctx->pc = 0x455020u;
            goto label_455020;
        }
    }
    ctx->pc = 0x454FD0u;
label_454fd0:
    // 0x454fd0: 0x8eb1008c  lw          $s1, 0x8C($s5)
    ctx->pc = 0x454fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_454fd4:
    // 0x454fd4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x454fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_454fd8:
    // 0x454fd8: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x454fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_454fdc:
    // 0x454fdc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x454fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_454fe0:
    // 0x454fe0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x454fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_454fe4:
    // 0x454fe4: 0xc04cce8  jal         func_1333A0
label_454fe8:
    if (ctx->pc == 0x454FE8u) {
        ctx->pc = 0x454FE8u;
            // 0x454fe8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x454FECu;
        goto label_454fec;
    }
    ctx->pc = 0x454FE4u;
    SET_GPR_U32(ctx, 31, 0x454FECu);
    ctx->pc = 0x454FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454FE4u;
            // 0x454fe8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454FECu; }
        if (ctx->pc != 0x454FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454FECu; }
        if (ctx->pc != 0x454FECu) { return; }
    }
    ctx->pc = 0x454FECu;
label_454fec:
    // 0x454fec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x454fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_454ff0:
    // 0x454ff0: 0x86250066  lh          $a1, 0x66($s1)
    ctx->pc = 0x454ff0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_454ff4:
    // 0x454ff4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x454ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_454ff8:
    // 0x454ff8: 0x86240064  lh          $a0, 0x64($s1)
    ctx->pc = 0x454ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_454ffc:
    // 0x454ffc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x454ffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_455000:
    // 0x455000: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x455000u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_455004:
    // 0x455004: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x455004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_455008:
    // 0x455008: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x455008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_45500c:
    // 0x45500c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x45500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_455010:
    // 0x455010: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x455010u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_455014:
    // 0x455014: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x455014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_455018:
    // 0x455018: 0xa6230066  sh          $v1, 0x66($s1)
    ctx->pc = 0x455018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 3));
label_45501c:
    // 0x45501c: 0x0  nop
    ctx->pc = 0x45501cu;
    // NOP
label_455020:
    // 0x455020: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x455020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_455024:
    // 0x455024: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x455024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_455028:
    // 0x455028: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
label_45502c:
    if (ctx->pc == 0x45502Cu) {
        ctx->pc = 0x45502Cu;
            // 0x45502c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x455030u;
        goto label_455030;
    }
    ctx->pc = 0x455028u;
    {
        const bool branch_taken_0x455028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x45502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455028u;
            // 0x45502c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455028) {
            ctx->pc = 0x454EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_454eb0;
        }
    }
    ctx->pc = 0x455030u;
label_455030:
    // 0x455030: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x455030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_455034:
    // 0x455034: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x455034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_455038:
    // 0x455038: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_45503c:
    if (ctx->pc == 0x45503Cu) {
        ctx->pc = 0x45503Cu;
            // 0x45503c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x455040u;
        goto label_455040;
    }
    ctx->pc = 0x455038u;
    {
        const bool branch_taken_0x455038 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x45503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455038u;
            // 0x45503c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455038) {
            ctx->pc = 0x455060u;
            goto label_455060;
        }
    }
    ctx->pc = 0x455040u;
label_455040:
    // 0x455040: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x455040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_455044:
    // 0x455044: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x455044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_455048:
    // 0x455048: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x455048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_45504c:
    // 0x45504c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x45504cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_455050:
    // 0x455050: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x455050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_455054:
    // 0x455054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x455054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455058:
    // 0x455058: 0xc055d28  jal         func_1574A0
label_45505c:
    if (ctx->pc == 0x45505Cu) {
        ctx->pc = 0x45505Cu;
            // 0x45505c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455060u;
        goto label_455060;
    }
    ctx->pc = 0x455058u;
    SET_GPR_U32(ctx, 31, 0x455060u);
    ctx->pc = 0x45505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455058u;
            // 0x45505c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455060u; }
        if (ctx->pc != 0x455060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455060u; }
        if (ctx->pc != 0x455060u) { return; }
    }
    ctx->pc = 0x455060u;
label_455060:
    // 0x455060: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x455060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_455064:
    // 0x455064: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x455064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_455068:
    // 0x455068: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x455068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45506c:
    // 0x45506c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45506cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_455070:
    // 0x455070: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x455070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_455074:
    // 0x455074: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x455074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_455078:
    // 0x455078: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x455078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45507c:
    // 0x45507c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x45507cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_455080:
    // 0x455080: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x455080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_455084:
    // 0x455084: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x455084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_455088:
    // 0x455088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x455088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45508c:
    // 0x45508c: 0x3e00008  jr          $ra
label_455090:
    if (ctx->pc == 0x455090u) {
        ctx->pc = 0x455090u;
            // 0x455090: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x455094u;
        goto label_455094;
    }
    ctx->pc = 0x45508Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45508Cu;
            // 0x455090: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x455094u;
label_455094:
    // 0x455094: 0x0  nop
    ctx->pc = 0x455094u;
    // NOP
label_455098:
    // 0x455098: 0x0  nop
    ctx->pc = 0x455098u;
    // NOP
label_45509c:
    // 0x45509c: 0x0  nop
    ctx->pc = 0x45509cu;
    // NOP
}
