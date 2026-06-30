#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00374CC0
// Address: 0x374cc0 - 0x375250
void sub_00374CC0_0x374cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374CC0_0x374cc0");
#endif

    switch (ctx->pc) {
        case 0x374cc0u: goto label_374cc0;
        case 0x374cc4u: goto label_374cc4;
        case 0x374cc8u: goto label_374cc8;
        case 0x374cccu: goto label_374ccc;
        case 0x374cd0u: goto label_374cd0;
        case 0x374cd4u: goto label_374cd4;
        case 0x374cd8u: goto label_374cd8;
        case 0x374cdcu: goto label_374cdc;
        case 0x374ce0u: goto label_374ce0;
        case 0x374ce4u: goto label_374ce4;
        case 0x374ce8u: goto label_374ce8;
        case 0x374cecu: goto label_374cec;
        case 0x374cf0u: goto label_374cf0;
        case 0x374cf4u: goto label_374cf4;
        case 0x374cf8u: goto label_374cf8;
        case 0x374cfcu: goto label_374cfc;
        case 0x374d00u: goto label_374d00;
        case 0x374d04u: goto label_374d04;
        case 0x374d08u: goto label_374d08;
        case 0x374d0cu: goto label_374d0c;
        case 0x374d10u: goto label_374d10;
        case 0x374d14u: goto label_374d14;
        case 0x374d18u: goto label_374d18;
        case 0x374d1cu: goto label_374d1c;
        case 0x374d20u: goto label_374d20;
        case 0x374d24u: goto label_374d24;
        case 0x374d28u: goto label_374d28;
        case 0x374d2cu: goto label_374d2c;
        case 0x374d30u: goto label_374d30;
        case 0x374d34u: goto label_374d34;
        case 0x374d38u: goto label_374d38;
        case 0x374d3cu: goto label_374d3c;
        case 0x374d40u: goto label_374d40;
        case 0x374d44u: goto label_374d44;
        case 0x374d48u: goto label_374d48;
        case 0x374d4cu: goto label_374d4c;
        case 0x374d50u: goto label_374d50;
        case 0x374d54u: goto label_374d54;
        case 0x374d58u: goto label_374d58;
        case 0x374d5cu: goto label_374d5c;
        case 0x374d60u: goto label_374d60;
        case 0x374d64u: goto label_374d64;
        case 0x374d68u: goto label_374d68;
        case 0x374d6cu: goto label_374d6c;
        case 0x374d70u: goto label_374d70;
        case 0x374d74u: goto label_374d74;
        case 0x374d78u: goto label_374d78;
        case 0x374d7cu: goto label_374d7c;
        case 0x374d80u: goto label_374d80;
        case 0x374d84u: goto label_374d84;
        case 0x374d88u: goto label_374d88;
        case 0x374d8cu: goto label_374d8c;
        case 0x374d90u: goto label_374d90;
        case 0x374d94u: goto label_374d94;
        case 0x374d98u: goto label_374d98;
        case 0x374d9cu: goto label_374d9c;
        case 0x374da0u: goto label_374da0;
        case 0x374da4u: goto label_374da4;
        case 0x374da8u: goto label_374da8;
        case 0x374dacu: goto label_374dac;
        case 0x374db0u: goto label_374db0;
        case 0x374db4u: goto label_374db4;
        case 0x374db8u: goto label_374db8;
        case 0x374dbcu: goto label_374dbc;
        case 0x374dc0u: goto label_374dc0;
        case 0x374dc4u: goto label_374dc4;
        case 0x374dc8u: goto label_374dc8;
        case 0x374dccu: goto label_374dcc;
        case 0x374dd0u: goto label_374dd0;
        case 0x374dd4u: goto label_374dd4;
        case 0x374dd8u: goto label_374dd8;
        case 0x374ddcu: goto label_374ddc;
        case 0x374de0u: goto label_374de0;
        case 0x374de4u: goto label_374de4;
        case 0x374de8u: goto label_374de8;
        case 0x374decu: goto label_374dec;
        case 0x374df0u: goto label_374df0;
        case 0x374df4u: goto label_374df4;
        case 0x374df8u: goto label_374df8;
        case 0x374dfcu: goto label_374dfc;
        case 0x374e00u: goto label_374e00;
        case 0x374e04u: goto label_374e04;
        case 0x374e08u: goto label_374e08;
        case 0x374e0cu: goto label_374e0c;
        case 0x374e10u: goto label_374e10;
        case 0x374e14u: goto label_374e14;
        case 0x374e18u: goto label_374e18;
        case 0x374e1cu: goto label_374e1c;
        case 0x374e20u: goto label_374e20;
        case 0x374e24u: goto label_374e24;
        case 0x374e28u: goto label_374e28;
        case 0x374e2cu: goto label_374e2c;
        case 0x374e30u: goto label_374e30;
        case 0x374e34u: goto label_374e34;
        case 0x374e38u: goto label_374e38;
        case 0x374e3cu: goto label_374e3c;
        case 0x374e40u: goto label_374e40;
        case 0x374e44u: goto label_374e44;
        case 0x374e48u: goto label_374e48;
        case 0x374e4cu: goto label_374e4c;
        case 0x374e50u: goto label_374e50;
        case 0x374e54u: goto label_374e54;
        case 0x374e58u: goto label_374e58;
        case 0x374e5cu: goto label_374e5c;
        case 0x374e60u: goto label_374e60;
        case 0x374e64u: goto label_374e64;
        case 0x374e68u: goto label_374e68;
        case 0x374e6cu: goto label_374e6c;
        case 0x374e70u: goto label_374e70;
        case 0x374e74u: goto label_374e74;
        case 0x374e78u: goto label_374e78;
        case 0x374e7cu: goto label_374e7c;
        case 0x374e80u: goto label_374e80;
        case 0x374e84u: goto label_374e84;
        case 0x374e88u: goto label_374e88;
        case 0x374e8cu: goto label_374e8c;
        case 0x374e90u: goto label_374e90;
        case 0x374e94u: goto label_374e94;
        case 0x374e98u: goto label_374e98;
        case 0x374e9cu: goto label_374e9c;
        case 0x374ea0u: goto label_374ea0;
        case 0x374ea4u: goto label_374ea4;
        case 0x374ea8u: goto label_374ea8;
        case 0x374eacu: goto label_374eac;
        case 0x374eb0u: goto label_374eb0;
        case 0x374eb4u: goto label_374eb4;
        case 0x374eb8u: goto label_374eb8;
        case 0x374ebcu: goto label_374ebc;
        case 0x374ec0u: goto label_374ec0;
        case 0x374ec4u: goto label_374ec4;
        case 0x374ec8u: goto label_374ec8;
        case 0x374eccu: goto label_374ecc;
        case 0x374ed0u: goto label_374ed0;
        case 0x374ed4u: goto label_374ed4;
        case 0x374ed8u: goto label_374ed8;
        case 0x374edcu: goto label_374edc;
        case 0x374ee0u: goto label_374ee0;
        case 0x374ee4u: goto label_374ee4;
        case 0x374ee8u: goto label_374ee8;
        case 0x374eecu: goto label_374eec;
        case 0x374ef0u: goto label_374ef0;
        case 0x374ef4u: goto label_374ef4;
        case 0x374ef8u: goto label_374ef8;
        case 0x374efcu: goto label_374efc;
        case 0x374f00u: goto label_374f00;
        case 0x374f04u: goto label_374f04;
        case 0x374f08u: goto label_374f08;
        case 0x374f0cu: goto label_374f0c;
        case 0x374f10u: goto label_374f10;
        case 0x374f14u: goto label_374f14;
        case 0x374f18u: goto label_374f18;
        case 0x374f1cu: goto label_374f1c;
        case 0x374f20u: goto label_374f20;
        case 0x374f24u: goto label_374f24;
        case 0x374f28u: goto label_374f28;
        case 0x374f2cu: goto label_374f2c;
        case 0x374f30u: goto label_374f30;
        case 0x374f34u: goto label_374f34;
        case 0x374f38u: goto label_374f38;
        case 0x374f3cu: goto label_374f3c;
        case 0x374f40u: goto label_374f40;
        case 0x374f44u: goto label_374f44;
        case 0x374f48u: goto label_374f48;
        case 0x374f4cu: goto label_374f4c;
        case 0x374f50u: goto label_374f50;
        case 0x374f54u: goto label_374f54;
        case 0x374f58u: goto label_374f58;
        case 0x374f5cu: goto label_374f5c;
        case 0x374f60u: goto label_374f60;
        case 0x374f64u: goto label_374f64;
        case 0x374f68u: goto label_374f68;
        case 0x374f6cu: goto label_374f6c;
        case 0x374f70u: goto label_374f70;
        case 0x374f74u: goto label_374f74;
        case 0x374f78u: goto label_374f78;
        case 0x374f7cu: goto label_374f7c;
        case 0x374f80u: goto label_374f80;
        case 0x374f84u: goto label_374f84;
        case 0x374f88u: goto label_374f88;
        case 0x374f8cu: goto label_374f8c;
        case 0x374f90u: goto label_374f90;
        case 0x374f94u: goto label_374f94;
        case 0x374f98u: goto label_374f98;
        case 0x374f9cu: goto label_374f9c;
        case 0x374fa0u: goto label_374fa0;
        case 0x374fa4u: goto label_374fa4;
        case 0x374fa8u: goto label_374fa8;
        case 0x374facu: goto label_374fac;
        case 0x374fb0u: goto label_374fb0;
        case 0x374fb4u: goto label_374fb4;
        case 0x374fb8u: goto label_374fb8;
        case 0x374fbcu: goto label_374fbc;
        case 0x374fc0u: goto label_374fc0;
        case 0x374fc4u: goto label_374fc4;
        case 0x374fc8u: goto label_374fc8;
        case 0x374fccu: goto label_374fcc;
        case 0x374fd0u: goto label_374fd0;
        case 0x374fd4u: goto label_374fd4;
        case 0x374fd8u: goto label_374fd8;
        case 0x374fdcu: goto label_374fdc;
        case 0x374fe0u: goto label_374fe0;
        case 0x374fe4u: goto label_374fe4;
        case 0x374fe8u: goto label_374fe8;
        case 0x374fecu: goto label_374fec;
        case 0x374ff0u: goto label_374ff0;
        case 0x374ff4u: goto label_374ff4;
        case 0x374ff8u: goto label_374ff8;
        case 0x374ffcu: goto label_374ffc;
        case 0x375000u: goto label_375000;
        case 0x375004u: goto label_375004;
        case 0x375008u: goto label_375008;
        case 0x37500cu: goto label_37500c;
        case 0x375010u: goto label_375010;
        case 0x375014u: goto label_375014;
        case 0x375018u: goto label_375018;
        case 0x37501cu: goto label_37501c;
        case 0x375020u: goto label_375020;
        case 0x375024u: goto label_375024;
        case 0x375028u: goto label_375028;
        case 0x37502cu: goto label_37502c;
        case 0x375030u: goto label_375030;
        case 0x375034u: goto label_375034;
        case 0x375038u: goto label_375038;
        case 0x37503cu: goto label_37503c;
        case 0x375040u: goto label_375040;
        case 0x375044u: goto label_375044;
        case 0x375048u: goto label_375048;
        case 0x37504cu: goto label_37504c;
        case 0x375050u: goto label_375050;
        case 0x375054u: goto label_375054;
        case 0x375058u: goto label_375058;
        case 0x37505cu: goto label_37505c;
        case 0x375060u: goto label_375060;
        case 0x375064u: goto label_375064;
        case 0x375068u: goto label_375068;
        case 0x37506cu: goto label_37506c;
        case 0x375070u: goto label_375070;
        case 0x375074u: goto label_375074;
        case 0x375078u: goto label_375078;
        case 0x37507cu: goto label_37507c;
        case 0x375080u: goto label_375080;
        case 0x375084u: goto label_375084;
        case 0x375088u: goto label_375088;
        case 0x37508cu: goto label_37508c;
        case 0x375090u: goto label_375090;
        case 0x375094u: goto label_375094;
        case 0x375098u: goto label_375098;
        case 0x37509cu: goto label_37509c;
        case 0x3750a0u: goto label_3750a0;
        case 0x3750a4u: goto label_3750a4;
        case 0x3750a8u: goto label_3750a8;
        case 0x3750acu: goto label_3750ac;
        case 0x3750b0u: goto label_3750b0;
        case 0x3750b4u: goto label_3750b4;
        case 0x3750b8u: goto label_3750b8;
        case 0x3750bcu: goto label_3750bc;
        case 0x3750c0u: goto label_3750c0;
        case 0x3750c4u: goto label_3750c4;
        case 0x3750c8u: goto label_3750c8;
        case 0x3750ccu: goto label_3750cc;
        case 0x3750d0u: goto label_3750d0;
        case 0x3750d4u: goto label_3750d4;
        case 0x3750d8u: goto label_3750d8;
        case 0x3750dcu: goto label_3750dc;
        case 0x3750e0u: goto label_3750e0;
        case 0x3750e4u: goto label_3750e4;
        case 0x3750e8u: goto label_3750e8;
        case 0x3750ecu: goto label_3750ec;
        case 0x3750f0u: goto label_3750f0;
        case 0x3750f4u: goto label_3750f4;
        case 0x3750f8u: goto label_3750f8;
        case 0x3750fcu: goto label_3750fc;
        case 0x375100u: goto label_375100;
        case 0x375104u: goto label_375104;
        case 0x375108u: goto label_375108;
        case 0x37510cu: goto label_37510c;
        case 0x375110u: goto label_375110;
        case 0x375114u: goto label_375114;
        case 0x375118u: goto label_375118;
        case 0x37511cu: goto label_37511c;
        case 0x375120u: goto label_375120;
        case 0x375124u: goto label_375124;
        case 0x375128u: goto label_375128;
        case 0x37512cu: goto label_37512c;
        case 0x375130u: goto label_375130;
        case 0x375134u: goto label_375134;
        case 0x375138u: goto label_375138;
        case 0x37513cu: goto label_37513c;
        case 0x375140u: goto label_375140;
        case 0x375144u: goto label_375144;
        case 0x375148u: goto label_375148;
        case 0x37514cu: goto label_37514c;
        case 0x375150u: goto label_375150;
        case 0x375154u: goto label_375154;
        case 0x375158u: goto label_375158;
        case 0x37515cu: goto label_37515c;
        case 0x375160u: goto label_375160;
        case 0x375164u: goto label_375164;
        case 0x375168u: goto label_375168;
        case 0x37516cu: goto label_37516c;
        case 0x375170u: goto label_375170;
        case 0x375174u: goto label_375174;
        case 0x375178u: goto label_375178;
        case 0x37517cu: goto label_37517c;
        case 0x375180u: goto label_375180;
        case 0x375184u: goto label_375184;
        case 0x375188u: goto label_375188;
        case 0x37518cu: goto label_37518c;
        case 0x375190u: goto label_375190;
        case 0x375194u: goto label_375194;
        case 0x375198u: goto label_375198;
        case 0x37519cu: goto label_37519c;
        case 0x3751a0u: goto label_3751a0;
        case 0x3751a4u: goto label_3751a4;
        case 0x3751a8u: goto label_3751a8;
        case 0x3751acu: goto label_3751ac;
        case 0x3751b0u: goto label_3751b0;
        case 0x3751b4u: goto label_3751b4;
        case 0x3751b8u: goto label_3751b8;
        case 0x3751bcu: goto label_3751bc;
        case 0x3751c0u: goto label_3751c0;
        case 0x3751c4u: goto label_3751c4;
        case 0x3751c8u: goto label_3751c8;
        case 0x3751ccu: goto label_3751cc;
        case 0x3751d0u: goto label_3751d0;
        case 0x3751d4u: goto label_3751d4;
        case 0x3751d8u: goto label_3751d8;
        case 0x3751dcu: goto label_3751dc;
        case 0x3751e0u: goto label_3751e0;
        case 0x3751e4u: goto label_3751e4;
        case 0x3751e8u: goto label_3751e8;
        case 0x3751ecu: goto label_3751ec;
        case 0x3751f0u: goto label_3751f0;
        case 0x3751f4u: goto label_3751f4;
        case 0x3751f8u: goto label_3751f8;
        case 0x3751fcu: goto label_3751fc;
        case 0x375200u: goto label_375200;
        case 0x375204u: goto label_375204;
        case 0x375208u: goto label_375208;
        case 0x37520cu: goto label_37520c;
        case 0x375210u: goto label_375210;
        case 0x375214u: goto label_375214;
        case 0x375218u: goto label_375218;
        case 0x37521cu: goto label_37521c;
        case 0x375220u: goto label_375220;
        case 0x375224u: goto label_375224;
        case 0x375228u: goto label_375228;
        case 0x37522cu: goto label_37522c;
        case 0x375230u: goto label_375230;
        case 0x375234u: goto label_375234;
        case 0x375238u: goto label_375238;
        case 0x37523cu: goto label_37523c;
        case 0x375240u: goto label_375240;
        case 0x375244u: goto label_375244;
        case 0x375248u: goto label_375248;
        case 0x37524cu: goto label_37524c;
        default: break;
    }

    ctx->pc = 0x374cc0u;

label_374cc0:
    // 0x374cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_374cc4:
    // 0x374cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_374cc8:
    // 0x374cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_374ccc:
    // 0x374ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_374cd0:
    // 0x374cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_374cd4:
    // 0x374cd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_374cd8:
    if (ctx->pc == 0x374CD8u) {
        ctx->pc = 0x374CD8u;
            // 0x374cd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374CDCu;
        goto label_374cdc;
    }
    ctx->pc = 0x374CD4u;
    {
        const bool branch_taken_0x374cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374CD4u;
            // 0x374cd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cd4) {
            ctx->pc = 0x374D18u;
            goto label_374d18;
        }
    }
    ctx->pc = 0x374CDCu;
label_374cdc:
    // 0x374cdc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_374ce0:
    if (ctx->pc == 0x374CE0u) {
        ctx->pc = 0x374CE0u;
            // 0x374ce0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x374CE4u;
        goto label_374ce4;
    }
    ctx->pc = 0x374CDCu;
    {
        const bool branch_taken_0x374cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x374cdc) {
            ctx->pc = 0x374CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374CDCu;
            // 0x374ce0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374D04u;
            goto label_374d04;
        }
    }
    ctx->pc = 0x374CE4u;
label_374ce4:
    // 0x374ce4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_374ce8:
    if (ctx->pc == 0x374CE8u) {
        ctx->pc = 0x374CECu;
        goto label_374cec;
    }
    ctx->pc = 0x374CE4u;
    {
        const bool branch_taken_0x374ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x374ce4) {
            ctx->pc = 0x374D00u;
            goto label_374d00;
        }
    }
    ctx->pc = 0x374CECu;
label_374cec:
    // 0x374cec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x374cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_374cf0:
    // 0x374cf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_374cf4:
    if (ctx->pc == 0x374CF4u) {
        ctx->pc = 0x374CF8u;
        goto label_374cf8;
    }
    ctx->pc = 0x374CF0u;
    {
        const bool branch_taken_0x374cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x374cf0) {
            ctx->pc = 0x374D00u;
            goto label_374d00;
        }
    }
    ctx->pc = 0x374CF8u;
label_374cf8:
    // 0x374cf8: 0xc0400a8  jal         func_1002A0
label_374cfc:
    if (ctx->pc == 0x374CFCu) {
        ctx->pc = 0x374D00u;
        goto label_374d00;
    }
    ctx->pc = 0x374CF8u;
    SET_GPR_U32(ctx, 31, 0x374D00u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D00u; }
        if (ctx->pc != 0x374D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D00u; }
        if (ctx->pc != 0x374D00u) { return; }
    }
    ctx->pc = 0x374D00u;
label_374d00:
    // 0x374d00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x374d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_374d04:
    // 0x374d04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x374d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_374d08:
    // 0x374d08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_374d0c:
    if (ctx->pc == 0x374D0Cu) {
        ctx->pc = 0x374D0Cu;
            // 0x374d0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374D10u;
        goto label_374d10;
    }
    ctx->pc = 0x374D08u;
    {
        const bool branch_taken_0x374d08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x374d08) {
            ctx->pc = 0x374D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374D08u;
            // 0x374d0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374D1Cu;
            goto label_374d1c;
        }
    }
    ctx->pc = 0x374D10u;
label_374d10:
    // 0x374d10: 0xc0400a8  jal         func_1002A0
label_374d14:
    if (ctx->pc == 0x374D14u) {
        ctx->pc = 0x374D14u;
            // 0x374d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374D18u;
        goto label_374d18;
    }
    ctx->pc = 0x374D10u;
    SET_GPR_U32(ctx, 31, 0x374D18u);
    ctx->pc = 0x374D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D10u;
            // 0x374d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D18u; }
        if (ctx->pc != 0x374D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D18u; }
        if (ctx->pc != 0x374D18u) { return; }
    }
    ctx->pc = 0x374D18u;
label_374d18:
    // 0x374d18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x374d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374d1c:
    // 0x374d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_374d20:
    // 0x374d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374d24:
    // 0x374d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374d28:
    // 0x374d28: 0x3e00008  jr          $ra
label_374d2c:
    if (ctx->pc == 0x374D2Cu) {
        ctx->pc = 0x374D2Cu;
            // 0x374d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x374D30u;
        goto label_374d30;
    }
    ctx->pc = 0x374D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374D28u;
            // 0x374d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374D30u;
label_374d30:
    // 0x374d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_374d34:
    // 0x374d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_374d38:
    // 0x374d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_374d3c:
    // 0x374d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_374d40:
    // 0x374d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_374d44:
    // 0x374d44: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
label_374d48:
    if (ctx->pc == 0x374D48u) {
        ctx->pc = 0x374D48u;
            // 0x374d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374D4Cu;
        goto label_374d4c;
    }
    ctx->pc = 0x374D44u;
    {
        const bool branch_taken_0x374d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374D44u;
            // 0x374d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d44) {
            ctx->pc = 0x374E94u;
            goto label_374e94;
        }
    }
    ctx->pc = 0x374D4Cu;
label_374d4c:
    // 0x374d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374d50:
    // 0x374d50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x374d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_374d54:
    // 0x374d54: 0x24427020  addiu       $v0, $v0, 0x7020
    ctx->pc = 0x374d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28704));
label_374d58:
    // 0x374d58: 0x24637060  addiu       $v1, $v1, 0x7060
    ctx->pc = 0x374d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28768));
label_374d5c:
    // 0x374d5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x374d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_374d60:
    // 0x374d60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374d64:
    // 0x374d64: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x374d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_374d68:
    // 0x374d68: 0x244270bc  addiu       $v0, $v0, 0x70BC
    ctx->pc = 0x374d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28860));
label_374d6c:
    // 0x374d6c: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x374d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_374d70:
    // 0x374d70: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x374d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_374d74:
    // 0x374d74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_374d78:
    if (ctx->pc == 0x374D78u) {
        ctx->pc = 0x374D78u;
            // 0x374d78: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x374D7Cu;
        goto label_374d7c;
    }
    ctx->pc = 0x374D74u;
    {
        const bool branch_taken_0x374d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x374d74) {
            ctx->pc = 0x374D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374D74u;
            // 0x374d78: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374D90u;
            goto label_374d90;
        }
    }
    ctx->pc = 0x374D7Cu;
label_374d7c:
    // 0x374d7c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x374d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_374d80:
    // 0x374d80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x374d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_374d84:
    // 0x374d84: 0x320f809  jalr        $t9
label_374d88:
    if (ctx->pc == 0x374D88u) {
        ctx->pc = 0x374D88u;
            // 0x374d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x374D8Cu;
        goto label_374d8c;
    }
    ctx->pc = 0x374D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374D8Cu);
        ctx->pc = 0x374D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374D84u;
            // 0x374d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x374D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374D8Cu; }
            if (ctx->pc != 0x374D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x374D8Cu;
label_374d8c:
    // 0x374d8c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x374d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_374d90:
    // 0x374d90: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x374d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_374d94:
    // 0x374d94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_374d98:
    if (ctx->pc == 0x374D98u) {
        ctx->pc = 0x374D98u;
            // 0x374d98: 0xae2002bc  sw          $zero, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
        ctx->pc = 0x374D9Cu;
        goto label_374d9c;
    }
    ctx->pc = 0x374D94u;
    {
        const bool branch_taken_0x374d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x374d94) {
            ctx->pc = 0x374D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374D94u;
            // 0x374d98: 0xae2002bc  sw          $zero, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374DB0u;
            goto label_374db0;
        }
    }
    ctx->pc = 0x374D9Cu;
label_374d9c:
    // 0x374d9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x374d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_374da0:
    // 0x374da0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x374da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_374da4:
    // 0x374da4: 0x320f809  jalr        $t9
label_374da8:
    if (ctx->pc == 0x374DA8u) {
        ctx->pc = 0x374DA8u;
            // 0x374da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x374DACu;
        goto label_374dac;
    }
    ctx->pc = 0x374DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374DACu);
        ctx->pc = 0x374DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374DA4u;
            // 0x374da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x374DACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374DACu; }
            if (ctx->pc != 0x374DACu) { return; }
        }
        }
    }
    ctx->pc = 0x374DACu;
label_374dac:
    // 0x374dac: 0xae2002bc  sw          $zero, 0x2BC($s1)
    ctx->pc = 0x374dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
label_374db0:
    // 0x374db0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x374db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_374db4:
    // 0x374db4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_374db8:
    if (ctx->pc == 0x374DB8u) {
        ctx->pc = 0x374DB8u;
            // 0x374db8: 0x262200f0  addiu       $v0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x374DBCu;
        goto label_374dbc;
    }
    ctx->pc = 0x374DB4u;
    {
        const bool branch_taken_0x374db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x374db4) {
            ctx->pc = 0x374DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374DB4u;
            // 0x374db8: 0x262200f0  addiu       $v0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374DD0u;
            goto label_374dd0;
        }
    }
    ctx->pc = 0x374DBCu;
label_374dbc:
    // 0x374dbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x374dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_374dc0:
    // 0x374dc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x374dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_374dc4:
    // 0x374dc4: 0x320f809  jalr        $t9
label_374dc8:
    if (ctx->pc == 0x374DC8u) {
        ctx->pc = 0x374DC8u;
            // 0x374dc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x374DCCu;
        goto label_374dcc;
    }
    ctx->pc = 0x374DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374DCCu);
        ctx->pc = 0x374DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374DC4u;
            // 0x374dc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x374DCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374DCCu; }
            if (ctx->pc != 0x374DCCu) { return; }
        }
        }
    }
    ctx->pc = 0x374DCCu;
label_374dcc:
    // 0x374dcc: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x374dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_374dd0:
    // 0x374dd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_374dd4:
    if (ctx->pc == 0x374DD4u) {
        ctx->pc = 0x374DD4u;
            // 0x374dd4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x374DD8u;
        goto label_374dd8;
    }
    ctx->pc = 0x374DD0u;
    {
        const bool branch_taken_0x374dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374DD0u;
            // 0x374dd4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374dd0) {
            ctx->pc = 0x374DE4u;
            goto label_374de4;
        }
    }
    ctx->pc = 0x374DD8u;
label_374dd8:
    // 0x374dd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374ddc:
    // 0x374ddc: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x374ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_374de0:
    // 0x374de0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x374de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_374de4:
    // 0x374de4: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x374de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_374de8:
    // 0x374de8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_374dec:
    if (ctx->pc == 0x374DECu) {
        ctx->pc = 0x374DF0u;
        goto label_374df0;
    }
    ctx->pc = 0x374DE8u;
    {
        const bool branch_taken_0x374de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374de8) {
            ctx->pc = 0x374DFCu;
            goto label_374dfc;
        }
    }
    ctx->pc = 0x374DF0u;
label_374df0:
    // 0x374df0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374df4:
    // 0x374df4: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x374df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
label_374df8:
    // 0x374df8: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x374df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_374dfc:
    // 0x374dfc: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_374e00:
    if (ctx->pc == 0x374E00u) {
        ctx->pc = 0x374E00u;
            // 0x374e00: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x374E04u;
        goto label_374e04;
    }
    ctx->pc = 0x374DFCu;
    {
        const bool branch_taken_0x374dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x374dfc) {
            ctx->pc = 0x374E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374DFCu;
            // 0x374e00: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374E80u;
            goto label_374e80;
        }
    }
    ctx->pc = 0x374E04u;
label_374e04:
    // 0x374e04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x374e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_374e08:
    // 0x374e08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374e0c:
    // 0x374e0c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x374e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_374e10:
    // 0x374e10: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x374e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_374e14:
    // 0x374e14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x374e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_374e18:
    // 0x374e18: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x374e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_374e1c:
    // 0x374e1c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x374e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_374e20:
    // 0x374e20: 0xc0aecc4  jal         func_2BB310
label_374e24:
    if (ctx->pc == 0x374E24u) {
        ctx->pc = 0x374E24u;
            // 0x374e24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x374E28u;
        goto label_374e28;
    }
    ctx->pc = 0x374E20u;
    SET_GPR_U32(ctx, 31, 0x374E28u);
    ctx->pc = 0x374E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374E20u;
            // 0x374e24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E28u; }
        if (ctx->pc != 0x374E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E28u; }
        if (ctx->pc != 0x374E28u) { return; }
    }
    ctx->pc = 0x374E28u;
label_374e28:
    // 0x374e28: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x374e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_374e2c:
    // 0x374e2c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x374e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_374e30:
    // 0x374e30: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_374e34:
    if (ctx->pc == 0x374E34u) {
        ctx->pc = 0x374E34u;
            // 0x374e34: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x374E38u;
        goto label_374e38;
    }
    ctx->pc = 0x374E30u;
    {
        const bool branch_taken_0x374e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x374e30) {
            ctx->pc = 0x374E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374E30u;
            // 0x374e34: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374E4Cu;
            goto label_374e4c;
        }
    }
    ctx->pc = 0x374E38u;
label_374e38:
    // 0x374e38: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x374e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_374e3c:
    // 0x374e3c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x374e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_374e40:
    // 0x374e40: 0x320f809  jalr        $t9
label_374e44:
    if (ctx->pc == 0x374E44u) {
        ctx->pc = 0x374E44u;
            // 0x374e44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x374E48u;
        goto label_374e48;
    }
    ctx->pc = 0x374E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374E48u);
        ctx->pc = 0x374E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374E40u;
            // 0x374e44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x374E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374E48u; }
            if (ctx->pc != 0x374E48u) { return; }
        }
        }
    }
    ctx->pc = 0x374E48u;
label_374e48:
    // 0x374e48: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x374e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_374e4c:
    // 0x374e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x374e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_374e50:
    // 0x374e50: 0xc0aec9c  jal         func_2BB270
label_374e54:
    if (ctx->pc == 0x374E54u) {
        ctx->pc = 0x374E54u;
            // 0x374e54: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x374E58u;
        goto label_374e58;
    }
    ctx->pc = 0x374E50u;
    SET_GPR_U32(ctx, 31, 0x374E58u);
    ctx->pc = 0x374E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374E50u;
            // 0x374e54: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E58u; }
        if (ctx->pc != 0x374E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E58u; }
        if (ctx->pc != 0x374E58u) { return; }
    }
    ctx->pc = 0x374E58u;
label_374e58:
    // 0x374e58: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x374e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_374e5c:
    // 0x374e5c: 0xc0aec88  jal         func_2BB220
label_374e60:
    if (ctx->pc == 0x374E60u) {
        ctx->pc = 0x374E60u;
            // 0x374e60: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x374E64u;
        goto label_374e64;
    }
    ctx->pc = 0x374E5Cu;
    SET_GPR_U32(ctx, 31, 0x374E64u);
    ctx->pc = 0x374E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374E5Cu;
            // 0x374e60: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E64u; }
        if (ctx->pc != 0x374E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E64u; }
        if (ctx->pc != 0x374E64u) { return; }
    }
    ctx->pc = 0x374E64u;
label_374e64:
    // 0x374e64: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x374e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_374e68:
    // 0x374e68: 0xc0aec0c  jal         func_2BB030
label_374e6c:
    if (ctx->pc == 0x374E6Cu) {
        ctx->pc = 0x374E6Cu;
            // 0x374e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374E70u;
        goto label_374e70;
    }
    ctx->pc = 0x374E68u;
    SET_GPR_U32(ctx, 31, 0x374E70u);
    ctx->pc = 0x374E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374E68u;
            // 0x374e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E70u; }
        if (ctx->pc != 0x374E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E70u; }
        if (ctx->pc != 0x374E70u) { return; }
    }
    ctx->pc = 0x374E70u;
label_374e70:
    // 0x374e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374e74:
    // 0x374e74: 0xc0aeaa8  jal         func_2BAAA0
label_374e78:
    if (ctx->pc == 0x374E78u) {
        ctx->pc = 0x374E78u;
            // 0x374e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374E7Cu;
        goto label_374e7c;
    }
    ctx->pc = 0x374E74u;
    SET_GPR_U32(ctx, 31, 0x374E7Cu);
    ctx->pc = 0x374E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374E74u;
            // 0x374e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E7Cu; }
        if (ctx->pc != 0x374E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E7Cu; }
        if (ctx->pc != 0x374E7Cu) { return; }
    }
    ctx->pc = 0x374E7Cu;
label_374e7c:
    // 0x374e7c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x374e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_374e80:
    // 0x374e80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x374e80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_374e84:
    // 0x374e84: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_374e88:
    if (ctx->pc == 0x374E88u) {
        ctx->pc = 0x374E88u;
            // 0x374e88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374E8Cu;
        goto label_374e8c;
    }
    ctx->pc = 0x374E84u;
    {
        const bool branch_taken_0x374e84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x374e84) {
            ctx->pc = 0x374E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374E84u;
            // 0x374e88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374E98u;
            goto label_374e98;
        }
    }
    ctx->pc = 0x374E8Cu;
label_374e8c:
    // 0x374e8c: 0xc0400a8  jal         func_1002A0
label_374e90:
    if (ctx->pc == 0x374E90u) {
        ctx->pc = 0x374E90u;
            // 0x374e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374E94u;
        goto label_374e94;
    }
    ctx->pc = 0x374E8Cu;
    SET_GPR_U32(ctx, 31, 0x374E94u);
    ctx->pc = 0x374E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374E8Cu;
            // 0x374e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E94u; }
        if (ctx->pc != 0x374E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E94u; }
        if (ctx->pc != 0x374E94u) { return; }
    }
    ctx->pc = 0x374E94u;
label_374e94:
    // 0x374e94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x374e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374e98:
    // 0x374e98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_374e9c:
    // 0x374e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374ea0:
    // 0x374ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374ea4:
    // 0x374ea4: 0x3e00008  jr          $ra
label_374ea8:
    if (ctx->pc == 0x374EA8u) {
        ctx->pc = 0x374EA8u;
            // 0x374ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x374EACu;
        goto label_374eac;
    }
    ctx->pc = 0x374EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374EA4u;
            // 0x374ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374EACu;
label_374eac:
    // 0x374eac: 0x0  nop
    ctx->pc = 0x374eacu;
    // NOP
label_374eb0:
    // 0x374eb0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x374eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_374eb4:
    // 0x374eb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x374eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_374eb8:
    // 0x374eb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x374eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_374ebc:
    // 0x374ebc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x374ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_374ec0:
    // 0x374ec0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x374ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_374ec4:
    // 0x374ec4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x374ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_374ec8:
    // 0x374ec8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x374ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_374ecc:
    // 0x374ecc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x374eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_374ed0:
    // 0x374ed0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x374ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_374ed4:
    // 0x374ed4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x374ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_374ed8:
    // 0x374ed8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x374ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_374edc:
    // 0x374edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_374ee0:
    // 0x374ee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x374ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_374ee4:
    // 0x374ee4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x374ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_374ee8:
    // 0x374ee8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x374ee8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_374eec:
    // 0x374eec: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_374ef0:
    if (ctx->pc == 0x374EF0u) {
        ctx->pc = 0x374EF0u;
            // 0x374ef0: 0x8ebe0070  lw          $fp, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x374EF4u;
        goto label_374ef4;
    }
    ctx->pc = 0x374EECu;
    {
        const bool branch_taken_0x374eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x374eec) {
            ctx->pc = 0x374EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374EECu;
            // 0x374ef0: 0x8ebe0070  lw          $fp, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374F58u;
            goto label_374f58;
        }
    }
    ctx->pc = 0x374EF4u;
label_374ef4:
    // 0x374ef4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x374ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_374ef8:
    // 0x374ef8: 0x508300c8  beql        $a0, $v1, . + 4 + (0xC8 << 2)
label_374efc:
    if (ctx->pc == 0x374EFCu) {
        ctx->pc = 0x374EFCu;
            // 0x374efc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x374F00u;
        goto label_374f00;
    }
    ctx->pc = 0x374EF8u;
    {
        const bool branch_taken_0x374ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x374ef8) {
            ctx->pc = 0x374EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374EF8u;
            // 0x374efc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37521Cu;
            goto label_37521c;
        }
    }
    ctx->pc = 0x374F00u;
label_374f00:
    // 0x374f00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x374f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_374f04:
    // 0x374f04: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_374f08:
    if (ctx->pc == 0x374F08u) {
        ctx->pc = 0x374F0Cu;
        goto label_374f0c;
    }
    ctx->pc = 0x374F04u;
    {
        const bool branch_taken_0x374f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x374f04) {
            ctx->pc = 0x374F14u;
            goto label_374f14;
        }
    }
    ctx->pc = 0x374F0Cu;
label_374f0c:
    // 0x374f0c: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_374f10:
    if (ctx->pc == 0x374F10u) {
        ctx->pc = 0x374F14u;
        goto label_374f14;
    }
    ctx->pc = 0x374F0Cu;
    {
        const bool branch_taken_0x374f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f0c) {
            ctx->pc = 0x375218u;
            goto label_375218;
        }
    }
    ctx->pc = 0x374F14u;
label_374f14:
    // 0x374f14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x374f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_374f18:
    // 0x374f18: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x374f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_374f1c:
    // 0x374f1c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x374f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_374f20:
    // 0x374f20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x374f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_374f24:
    // 0x374f24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x374f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_374f28:
    // 0x374f28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_374f2c:
    if (ctx->pc == 0x374F2Cu) {
        ctx->pc = 0x374F2Cu;
            // 0x374f2c: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x374F30u;
        goto label_374f30;
    }
    ctx->pc = 0x374F28u;
    {
        const bool branch_taken_0x374f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f28) {
            ctx->pc = 0x374F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374F28u;
            // 0x374f2c: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374F40u;
            goto label_374f40;
        }
    }
    ctx->pc = 0x374F30u;
label_374f30:
    // 0x374f30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x374f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_374f34:
    // 0x374f34: 0x8c423fd0  lw          $v0, 0x3FD0($v0)
    ctx->pc = 0x374f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16336)));
label_374f38:
    // 0x374f38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x374f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_374f3c:
    // 0x374f3c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x374f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_374f40:
    // 0x374f40: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x374f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374f44:
    // 0x374f44: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x374f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_374f48:
    // 0x374f48: 0x320f809  jalr        $t9
label_374f4c:
    if (ctx->pc == 0x374F4Cu) {
        ctx->pc = 0x374F4Cu;
            // 0x374f4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374F50u;
        goto label_374f50;
    }
    ctx->pc = 0x374F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374F50u);
        ctx->pc = 0x374F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374F48u;
            // 0x374f4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x374F50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374F50u; }
            if (ctx->pc != 0x374F50u) { return; }
        }
        }
    }
    ctx->pc = 0x374F50u;
label_374f50:
    // 0x374f50: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_374f54:
    if (ctx->pc == 0x374F54u) {
        ctx->pc = 0x374F58u;
        goto label_374f58;
    }
    ctx->pc = 0x374F50u;
    {
        const bool branch_taken_0x374f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f50) {
            ctx->pc = 0x375218u;
            goto label_375218;
        }
    }
    ctx->pc = 0x374F58u;
label_374f58:
    // 0x374f58: 0x13c000af  beqz        $fp, . + 4 + (0xAF << 2)
label_374f5c:
    if (ctx->pc == 0x374F5Cu) {
        ctx->pc = 0x374F60u;
        goto label_374f60;
    }
    ctx->pc = 0x374F58u;
    {
        const bool branch_taken_0x374f58 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f58) {
            ctx->pc = 0x375218u;
            goto label_375218;
        }
    }
    ctx->pc = 0x374F60u;
label_374f60:
    // 0x374f60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x374f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_374f64:
    // 0x374f64: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x374f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_374f68:
    // 0x374f68: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x374f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_374f6c:
    // 0x374f6c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x374f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_374f70:
    // 0x374f70: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x374f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_374f74:
    // 0x374f74: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x374f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_374f78:
    // 0x374f78: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x374f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_374f7c:
    // 0x374f7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x374f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_374f80:
    // 0x374f80: 0x8cb70130  lw          $s7, 0x130($a1)
    ctx->pc = 0x374f80u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_374f84:
    // 0x374f84: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x374f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_374f88:
    // 0x374f88: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x374f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_374f8c:
    // 0x374f8c: 0x8c873fd0  lw          $a3, 0x3FD0($a0)
    ctx->pc = 0x374f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16336)));
label_374f90:
    // 0x374f90: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x374f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_374f94:
    // 0x374f94: 0x174080  sll         $t0, $s7, 2
    ctx->pc = 0x374f94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_374f98:
    // 0x374f98: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x374f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_374f9c:
    // 0x374f9c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x374f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_374fa0:
    // 0x374fa0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_374fa4:
    // 0x374fa4: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x374fa4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_374fa8:
    // 0x374fa8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x374fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_374fac:
    // 0x374fac: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x374facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_374fb0:
    // 0x374fb0: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x374fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_374fb4:
    // 0x374fb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x374fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_374fb8:
    // 0x374fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374fbc:
    // 0x374fbc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x374fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_374fc0:
    // 0x374fc0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x374fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_374fc4:
    // 0x374fc4: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x374fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_374fc8:
    // 0x374fc8: 0xaca0e3d8  sw          $zero, -0x1C28($a1)
    ctx->pc = 0x374fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 0));
label_374fcc:
    // 0x374fcc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x374fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_374fd0:
    // 0x374fd0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x374fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_374fd4:
    // 0x374fd4: 0x8ce20084  lw          $v0, 0x84($a3)
    ctx->pc = 0x374fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
label_374fd8:
    // 0x374fd8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x374fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_374fdc:
    // 0x374fdc: 0xc04e4a4  jal         func_139290
label_374fe0:
    if (ctx->pc == 0x374FE0u) {
        ctx->pc = 0x374FE0u;
            // 0x374fe0: 0x24f60084  addiu       $s6, $a3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 132));
        ctx->pc = 0x374FE4u;
        goto label_374fe4;
    }
    ctx->pc = 0x374FDCu;
    SET_GPR_U32(ctx, 31, 0x374FE4u);
    ctx->pc = 0x374FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374FDCu;
            // 0x374fe0: 0x24f60084  addiu       $s6, $a3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374FE4u; }
        if (ctx->pc != 0x374FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374FE4u; }
        if (ctx->pc != 0x374FE4u) { return; }
    }
    ctx->pc = 0x374FE4u;
label_374fe4:
    // 0x374fe4: 0xc04e738  jal         func_139CE0
label_374fe8:
    if (ctx->pc == 0x374FE8u) {
        ctx->pc = 0x374FE8u;
            // 0x374fe8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x374FECu;
        goto label_374fec;
    }
    ctx->pc = 0x374FE4u;
    SET_GPR_U32(ctx, 31, 0x374FECu);
    ctx->pc = 0x374FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374FE4u;
            // 0x374fe8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374FECu; }
        if (ctx->pc != 0x374FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374FECu; }
        if (ctx->pc != 0x374FECu) { return; }
    }
    ctx->pc = 0x374FECu;
label_374fec:
    // 0x374fec: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x374fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_374ff0:
    // 0x374ff0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x374ff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374ff4:
    // 0x374ff4: 0xc4545010  lwc1        $f20, 0x5010($v0)
    ctx->pc = 0x374ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_374ff8:
    // 0x374ff8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x374ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374ffc:
    // 0x374ffc: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x374ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_375000:
    // 0x375000: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x375000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_375004:
    // 0x375004: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x375004u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_375008:
    // 0x375008: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x375008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_37500c:
    // 0x37500c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x37500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_375010:
    // 0x375010: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x375010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_375014:
    // 0x375014: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x375014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_375018:
    // 0x375018: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x375018u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_37501c:
    // 0x37501c: 0xc0d639c  jal         func_358E70
label_375020:
    if (ctx->pc == 0x375020u) {
        ctx->pc = 0x375020u;
            // 0x375020: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x375024u;
        goto label_375024;
    }
    ctx->pc = 0x37501Cu;
    SET_GPR_U32(ctx, 31, 0x375024u);
    ctx->pc = 0x375020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37501Cu;
            // 0x375020: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375024u; }
        if (ctx->pc != 0x375024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375024u; }
        if (ctx->pc != 0x375024u) { return; }
    }
    ctx->pc = 0x375024u;
label_375024:
    // 0x375024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_375028:
    if (ctx->pc == 0x375028u) {
        ctx->pc = 0x37502Cu;
        goto label_37502c;
    }
    ctx->pc = 0x375024u;
    {
        const bool branch_taken_0x375024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x375024) {
            ctx->pc = 0x375038u;
            goto label_375038;
        }
    }
    ctx->pc = 0x37502Cu;
label_37502c:
    // 0x37502c: 0x10000054  b           . + 4 + (0x54 << 2)
label_375030:
    if (ctx->pc == 0x375030u) {
        ctx->pc = 0x375030u;
            // 0x375030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375034u;
        goto label_375034;
    }
    ctx->pc = 0x37502Cu;
    {
        const bool branch_taken_0x37502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37502Cu;
            // 0x375030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37502c) {
            ctx->pc = 0x375180u;
            goto label_375180;
        }
    }
    ctx->pc = 0x375034u;
label_375034:
    // 0x375034: 0x0  nop
    ctx->pc = 0x375034u;
    // NOP
label_375038:
    // 0x375038: 0xc0d1c14  jal         func_347050
label_37503c:
    if (ctx->pc == 0x37503Cu) {
        ctx->pc = 0x37503Cu;
            // 0x37503c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375040u;
        goto label_375040;
    }
    ctx->pc = 0x375038u;
    SET_GPR_U32(ctx, 31, 0x375040u);
    ctx->pc = 0x37503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375038u;
            // 0x37503c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375040u; }
        if (ctx->pc != 0x375040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375040u; }
        if (ctx->pc != 0x375040u) { return; }
    }
    ctx->pc = 0x375040u;
label_375040:
    // 0x375040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375044:
    // 0x375044: 0xc04f278  jal         func_13C9E0
label_375048:
    if (ctx->pc == 0x375048u) {
        ctx->pc = 0x375048u;
            // 0x375048: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x37504Cu;
        goto label_37504c;
    }
    ctx->pc = 0x375044u;
    SET_GPR_U32(ctx, 31, 0x37504Cu);
    ctx->pc = 0x375048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375044u;
            // 0x375048: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37504Cu; }
        if (ctx->pc != 0x37504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37504Cu; }
        if (ctx->pc != 0x37504Cu) { return; }
    }
    ctx->pc = 0x37504Cu;
label_37504c:
    // 0x37504c: 0xc0d1c10  jal         func_347040
label_375050:
    if (ctx->pc == 0x375050u) {
        ctx->pc = 0x375050u;
            // 0x375050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375054u;
        goto label_375054;
    }
    ctx->pc = 0x37504Cu;
    SET_GPR_U32(ctx, 31, 0x375054u);
    ctx->pc = 0x375050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37504Cu;
            // 0x375050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375054u; }
        if (ctx->pc != 0x375054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375054u; }
        if (ctx->pc != 0x375054u) { return; }
    }
    ctx->pc = 0x375054u;
label_375054:
    // 0x375054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375058:
    // 0x375058: 0xc04ce80  jal         func_133A00
label_37505c:
    if (ctx->pc == 0x37505Cu) {
        ctx->pc = 0x37505Cu;
            // 0x37505c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x375060u;
        goto label_375060;
    }
    ctx->pc = 0x375058u;
    SET_GPR_U32(ctx, 31, 0x375060u);
    ctx->pc = 0x37505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375058u;
            // 0x37505c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375060u; }
        if (ctx->pc != 0x375060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375060u; }
        if (ctx->pc != 0x375060u) { return; }
    }
    ctx->pc = 0x375060u;
label_375060:
    // 0x375060: 0xc0d4108  jal         func_350420
label_375064:
    if (ctx->pc == 0x375064u) {
        ctx->pc = 0x375068u;
        goto label_375068;
    }
    ctx->pc = 0x375060u;
    SET_GPR_U32(ctx, 31, 0x375068u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375068u; }
        if (ctx->pc != 0x375068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375068u; }
        if (ctx->pc != 0x375068u) { return; }
    }
    ctx->pc = 0x375068u;
label_375068:
    // 0x375068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x375068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37506c:
    // 0x37506c: 0xc0d4104  jal         func_350410
label_375070:
    if (ctx->pc == 0x375070u) {
        ctx->pc = 0x375070u;
            // 0x375070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375074u;
        goto label_375074;
    }
    ctx->pc = 0x37506Cu;
    SET_GPR_U32(ctx, 31, 0x375074u);
    ctx->pc = 0x375070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37506Cu;
            // 0x375070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375074u; }
        if (ctx->pc != 0x375074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375074u; }
        if (ctx->pc != 0x375074u) { return; }
    }
    ctx->pc = 0x375074u;
label_375074:
    // 0x375074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375078:
    // 0x375078: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x375078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37507c:
    // 0x37507c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37507cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_375080:
    // 0x375080: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x375080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_375084:
    // 0x375084: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x375084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375088:
    // 0x375088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x375088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37508c:
    // 0x37508c: 0xc0d40ac  jal         func_3502B0
label_375090:
    if (ctx->pc == 0x375090u) {
        ctx->pc = 0x375090u;
            // 0x375090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x375094u;
        goto label_375094;
    }
    ctx->pc = 0x37508Cu;
    SET_GPR_U32(ctx, 31, 0x375094u);
    ctx->pc = 0x375090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37508Cu;
            // 0x375090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375094u; }
        if (ctx->pc != 0x375094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375094u; }
        if (ctx->pc != 0x375094u) { return; }
    }
    ctx->pc = 0x375094u;
label_375094:
    // 0x375094: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x375094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_375098:
    // 0x375098: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_37509c:
    if (ctx->pc == 0x37509Cu) {
        ctx->pc = 0x37509Cu;
            // 0x37509c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3750A0u;
        goto label_3750a0;
    }
    ctx->pc = 0x375098u;
    {
        const bool branch_taken_0x375098 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375098u;
            // 0x37509c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375098) {
            ctx->pc = 0x3750A8u;
            goto label_3750a8;
        }
    }
    ctx->pc = 0x3750A0u;
label_3750a0:
    // 0x3750a0: 0x10000037  b           . + 4 + (0x37 << 2)
label_3750a4:
    if (ctx->pc == 0x3750A4u) {
        ctx->pc = 0x3750A4u;
            // 0x3750a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3750A8u;
        goto label_3750a8;
    }
    ctx->pc = 0x3750A0u;
    {
        const bool branch_taken_0x3750a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3750A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3750A0u;
            // 0x3750a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3750a0) {
            ctx->pc = 0x375180u;
            goto label_375180;
        }
    }
    ctx->pc = 0x3750A8u;
label_3750a8:
    // 0x3750a8: 0xc0dd4bc  jal         func_3752F0
label_3750ac:
    if (ctx->pc == 0x3750ACu) {
        ctx->pc = 0x3750ACu;
            // 0x3750ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3750B0u;
        goto label_3750b0;
    }
    ctx->pc = 0x3750A8u;
    SET_GPR_U32(ctx, 31, 0x3750B0u);
    ctx->pc = 0x3750ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3750A8u;
            // 0x3750ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3750B0u; }
        if (ctx->pc != 0x3750B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3750B0u; }
        if (ctx->pc != 0x3750B0u) { return; }
    }
    ctx->pc = 0x3750B0u;
label_3750b0:
    // 0x3750b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_3750b4:
    if (ctx->pc == 0x3750B4u) {
        ctx->pc = 0x3750B8u;
        goto label_3750b8;
    }
    ctx->pc = 0x3750B0u;
    {
        const bool branch_taken_0x3750b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3750b0) {
            ctx->pc = 0x375128u;
            goto label_375128;
        }
    }
    ctx->pc = 0x3750B8u;
label_3750b8:
    // 0x3750b8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3750b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3750bc:
    // 0x3750bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3750bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3750c0:
    // 0x3750c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3750c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3750c4:
    // 0x3750c4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3750c8:
    if (ctx->pc == 0x3750C8u) {
        ctx->pc = 0x3750C8u;
            // 0x3750c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3750CCu;
        goto label_3750cc;
    }
    ctx->pc = 0x3750C4u;
    {
        const bool branch_taken_0x3750c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3750c4) {
            ctx->pc = 0x3750C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3750C4u;
            // 0x3750c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3750D8u;
            goto label_3750d8;
        }
    }
    ctx->pc = 0x3750CCu;
label_3750cc:
    // 0x3750cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3750ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3750d0:
    // 0x3750d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3750d4:
    if (ctx->pc == 0x3750D4u) {
        ctx->pc = 0x3750D4u;
            // 0x3750d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3750D8u;
        goto label_3750d8;
    }
    ctx->pc = 0x3750D0u;
    {
        const bool branch_taken_0x3750d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3750D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3750D0u;
            // 0x3750d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3750d0) {
            ctx->pc = 0x3750F0u;
            goto label_3750f0;
        }
    }
    ctx->pc = 0x3750D8u;
label_3750d8:
    // 0x3750d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3750d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3750dc:
    // 0x3750dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3750dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3750e0:
    // 0x3750e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3750e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3750e4:
    // 0x3750e4: 0x0  nop
    ctx->pc = 0x3750e4u;
    // NOP
label_3750e8:
    // 0x3750e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3750e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3750ec:
    // 0x3750ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3750ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3750f0:
    // 0x3750f0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x3750f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_3750f4:
    // 0x3750f4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3750f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_3750f8:
    // 0x3750f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3750f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3750fc:
    // 0x3750fc: 0xc0477a8  jal         func_11DEA0
label_375100:
    if (ctx->pc == 0x375100u) {
        ctx->pc = 0x375100u;
            // 0x375100: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x375104u;
        goto label_375104;
    }
    ctx->pc = 0x3750FCu;
    SET_GPR_U32(ctx, 31, 0x375104u);
    ctx->pc = 0x375100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3750FCu;
            // 0x375100: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375104u; }
        if (ctx->pc != 0x375104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375104u; }
        if (ctx->pc != 0x375104u) { return; }
    }
    ctx->pc = 0x375104u;
label_375104:
    // 0x375104: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x375104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375108:
    // 0x375108: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x375108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_37510c:
    // 0x37510c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x37510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_375110:
    // 0x375110: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x375110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375114:
    // 0x375114: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x375114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_375118:
    // 0x375118: 0x0  nop
    ctx->pc = 0x375118u;
    // NOP
label_37511c:
    // 0x37511c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x37511cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_375120:
    // 0x375120: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x375120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_375124:
    // 0x375124: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x375124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_375128:
    // 0x375128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37512c:
    // 0x37512c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x37512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_375130:
    // 0x375130: 0xc0dd494  jal         func_375250
label_375134:
    if (ctx->pc == 0x375134u) {
        ctx->pc = 0x375134u;
            // 0x375134: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->pc = 0x375138u;
        goto label_375138;
    }
    ctx->pc = 0x375130u;
    SET_GPR_U32(ctx, 31, 0x375138u);
    ctx->pc = 0x375134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375130u;
            // 0x375134: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375250u;
    if (runtime->hasFunction(0x375250u)) {
        auto targetFn = runtime->lookupFunction(0x375250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375138u; }
        if (ctx->pc != 0x375138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375250_0x375250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375138u; }
        if (ctx->pc != 0x375138u) { return; }
    }
    ctx->pc = 0x375138u;
label_375138:
    // 0x375138: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x375138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_37513c:
    // 0x37513c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x37513cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_375140:
    // 0x375140: 0xc04e4a4  jal         func_139290
label_375144:
    if (ctx->pc == 0x375144u) {
        ctx->pc = 0x375144u;
            // 0x375144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375148u;
        goto label_375148;
    }
    ctx->pc = 0x375140u;
    SET_GPR_U32(ctx, 31, 0x375148u);
    ctx->pc = 0x375144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375140u;
            // 0x375144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375148u; }
        if (ctx->pc != 0x375148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375148u; }
        if (ctx->pc != 0x375148u) { return; }
    }
    ctx->pc = 0x375148u;
label_375148:
    // 0x375148: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x375148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_37514c:
    // 0x37514c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x37514cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_375150:
    // 0x375150: 0xc04cd60  jal         func_133580
label_375154:
    if (ctx->pc == 0x375154u) {
        ctx->pc = 0x375154u;
            // 0x375154: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x375158u;
        goto label_375158;
    }
    ctx->pc = 0x375150u;
    SET_GPR_U32(ctx, 31, 0x375158u);
    ctx->pc = 0x375154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375150u;
            // 0x375154: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375158u; }
        if (ctx->pc != 0x375158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375158u; }
        if (ctx->pc != 0x375158u) { return; }
    }
    ctx->pc = 0x375158u;
label_375158:
    // 0x375158: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x375158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37515c:
    // 0x37515c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x37515cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_375160:
    // 0x375160: 0x320f809  jalr        $t9
label_375164:
    if (ctx->pc == 0x375164u) {
        ctx->pc = 0x375164u;
            // 0x375164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375168u;
        goto label_375168;
    }
    ctx->pc = 0x375160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375168u);
        ctx->pc = 0x375164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375160u;
            // 0x375164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x375168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375168u; }
            if (ctx->pc != 0x375168u) { return; }
        }
        }
    }
    ctx->pc = 0x375168u;
label_375168:
    // 0x375168: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x375168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_37516c:
    // 0x37516c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37516cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_375170:
    // 0x375170: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x375170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_375174:
    // 0x375174: 0xc054fd4  jal         func_153F50
label_375178:
    if (ctx->pc == 0x375178u) {
        ctx->pc = 0x375178u;
            // 0x375178: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37517Cu;
        goto label_37517c;
    }
    ctx->pc = 0x375174u;
    SET_GPR_U32(ctx, 31, 0x37517Cu);
    ctx->pc = 0x375178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375174u;
            // 0x375178: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37517Cu; }
        if (ctx->pc != 0x37517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37517Cu; }
        if (ctx->pc != 0x37517Cu) { return; }
    }
    ctx->pc = 0x37517Cu;
label_37517c:
    // 0x37517c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x37517cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_375180:
    // 0x375180: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_375184:
    if (ctx->pc == 0x375184u) {
        ctx->pc = 0x375188u;
        goto label_375188;
    }
    ctx->pc = 0x375180u;
    {
        const bool branch_taken_0x375180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375180) {
            ctx->pc = 0x3751D8u;
            goto label_3751d8;
        }
    }
    ctx->pc = 0x375188u;
label_375188:
    // 0x375188: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x375188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_37518c:
    // 0x37518c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x37518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_375190:
    // 0x375190: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x375190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_375194:
    // 0x375194: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x375194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_375198:
    // 0x375198: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x375198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_37519c:
    // 0x37519c: 0xc04cce8  jal         func_1333A0
label_3751a0:
    if (ctx->pc == 0x3751A0u) {
        ctx->pc = 0x3751A0u;
            // 0x3751a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3751A4u;
        goto label_3751a4;
    }
    ctx->pc = 0x37519Cu;
    SET_GPR_U32(ctx, 31, 0x3751A4u);
    ctx->pc = 0x3751A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37519Cu;
            // 0x3751a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3751A4u; }
        if (ctx->pc != 0x3751A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3751A4u; }
        if (ctx->pc != 0x3751A4u) { return; }
    }
    ctx->pc = 0x3751A4u;
label_3751a4:
    // 0x3751a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3751a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3751a8:
    // 0x3751a8: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x3751a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_3751ac:
    // 0x3751ac: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3751acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3751b0:
    // 0x3751b0: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x3751b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_3751b4:
    // 0x3751b4: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x3751b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_3751b8:
    // 0x3751b8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x3751b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3751bc:
    // 0x3751bc: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3751bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3751c0:
    // 0x3751c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3751c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3751c4:
    // 0x3751c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3751c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3751c8:
    // 0x3751c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3751c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3751cc:
    // 0x3751cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3751ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3751d0:
    // 0x3751d0: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x3751d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_3751d4:
    // 0x3751d4: 0x0  nop
    ctx->pc = 0x3751d4u;
    // NOP
label_3751d8:
    // 0x3751d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3751d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3751dc:
    // 0x3751dc: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x3751dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3751e0:
    // 0x3751e0: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
label_3751e4:
    if (ctx->pc == 0x3751E4u) {
        ctx->pc = 0x3751E4u;
            // 0x3751e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3751E8u;
        goto label_3751e8;
    }
    ctx->pc = 0x3751E0u;
    {
        const bool branch_taken_0x3751e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3751E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3751E0u;
            // 0x3751e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751e0) {
            ctx->pc = 0x374FFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_374ffc;
        }
    }
    ctx->pc = 0x3751E8u;
label_3751e8:
    // 0x3751e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3751ec:
    // 0x3751ec: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3751ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3751f0:
    // 0x3751f0: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3751f4:
    if (ctx->pc == 0x3751F4u) {
        ctx->pc = 0x3751F4u;
            // 0x3751f4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x3751F8u;
        goto label_3751f8;
    }
    ctx->pc = 0x3751F0u;
    {
        const bool branch_taken_0x3751f0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3751F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3751F0u;
            // 0x3751f4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751f0) {
            ctx->pc = 0x375218u;
            goto label_375218;
        }
    }
    ctx->pc = 0x3751F8u;
label_3751f8:
    // 0x3751f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3751f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3751fc:
    // 0x3751fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3751fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_375200:
    // 0x375200: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x375200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_375204:
    // 0x375204: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x375204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_375208:
    // 0x375208: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x375208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_37520c:
    // 0x37520c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37520cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375210:
    // 0x375210: 0xc055d28  jal         func_1574A0
label_375214:
    if (ctx->pc == 0x375214u) {
        ctx->pc = 0x375214u;
            // 0x375214: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375218u;
        goto label_375218;
    }
    ctx->pc = 0x375210u;
    SET_GPR_U32(ctx, 31, 0x375218u);
    ctx->pc = 0x375214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375210u;
            // 0x375214: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375218u; }
        if (ctx->pc != 0x375218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375218u; }
        if (ctx->pc != 0x375218u) { return; }
    }
    ctx->pc = 0x375218u;
label_375218:
    // 0x375218: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x375218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_37521c:
    // 0x37521c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_375220:
    // 0x375220: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x375220u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_375224:
    // 0x375224: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x375224u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_375228:
    // 0x375228: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x375228u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37522c:
    // 0x37522c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x37522cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_375230:
    // 0x375230: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x375230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_375234:
    // 0x375234: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x375234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_375238:
    // 0x375238: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x375238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37523c:
    // 0x37523c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37523cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_375240:
    // 0x375240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_375244:
    // 0x375244: 0x3e00008  jr          $ra
label_375248:
    if (ctx->pc == 0x375248u) {
        ctx->pc = 0x375248u;
            // 0x375248: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x37524Cu;
        goto label_37524c;
    }
    ctx->pc = 0x375244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375244u;
            // 0x375248: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37524Cu;
label_37524c:
    // 0x37524c: 0x0  nop
    ctx->pc = 0x37524cu;
    // NOP
}
