#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00396EA0
// Address: 0x396ea0 - 0x397350
void sub_00396EA0_0x396ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396EA0_0x396ea0");
#endif

    switch (ctx->pc) {
        case 0x396ea0u: goto label_396ea0;
        case 0x396ea4u: goto label_396ea4;
        case 0x396ea8u: goto label_396ea8;
        case 0x396eacu: goto label_396eac;
        case 0x396eb0u: goto label_396eb0;
        case 0x396eb4u: goto label_396eb4;
        case 0x396eb8u: goto label_396eb8;
        case 0x396ebcu: goto label_396ebc;
        case 0x396ec0u: goto label_396ec0;
        case 0x396ec4u: goto label_396ec4;
        case 0x396ec8u: goto label_396ec8;
        case 0x396eccu: goto label_396ecc;
        case 0x396ed0u: goto label_396ed0;
        case 0x396ed4u: goto label_396ed4;
        case 0x396ed8u: goto label_396ed8;
        case 0x396edcu: goto label_396edc;
        case 0x396ee0u: goto label_396ee0;
        case 0x396ee4u: goto label_396ee4;
        case 0x396ee8u: goto label_396ee8;
        case 0x396eecu: goto label_396eec;
        case 0x396ef0u: goto label_396ef0;
        case 0x396ef4u: goto label_396ef4;
        case 0x396ef8u: goto label_396ef8;
        case 0x396efcu: goto label_396efc;
        case 0x396f00u: goto label_396f00;
        case 0x396f04u: goto label_396f04;
        case 0x396f08u: goto label_396f08;
        case 0x396f0cu: goto label_396f0c;
        case 0x396f10u: goto label_396f10;
        case 0x396f14u: goto label_396f14;
        case 0x396f18u: goto label_396f18;
        case 0x396f1cu: goto label_396f1c;
        case 0x396f20u: goto label_396f20;
        case 0x396f24u: goto label_396f24;
        case 0x396f28u: goto label_396f28;
        case 0x396f2cu: goto label_396f2c;
        case 0x396f30u: goto label_396f30;
        case 0x396f34u: goto label_396f34;
        case 0x396f38u: goto label_396f38;
        case 0x396f3cu: goto label_396f3c;
        case 0x396f40u: goto label_396f40;
        case 0x396f44u: goto label_396f44;
        case 0x396f48u: goto label_396f48;
        case 0x396f4cu: goto label_396f4c;
        case 0x396f50u: goto label_396f50;
        case 0x396f54u: goto label_396f54;
        case 0x396f58u: goto label_396f58;
        case 0x396f5cu: goto label_396f5c;
        case 0x396f60u: goto label_396f60;
        case 0x396f64u: goto label_396f64;
        case 0x396f68u: goto label_396f68;
        case 0x396f6cu: goto label_396f6c;
        case 0x396f70u: goto label_396f70;
        case 0x396f74u: goto label_396f74;
        case 0x396f78u: goto label_396f78;
        case 0x396f7cu: goto label_396f7c;
        case 0x396f80u: goto label_396f80;
        case 0x396f84u: goto label_396f84;
        case 0x396f88u: goto label_396f88;
        case 0x396f8cu: goto label_396f8c;
        case 0x396f90u: goto label_396f90;
        case 0x396f94u: goto label_396f94;
        case 0x396f98u: goto label_396f98;
        case 0x396f9cu: goto label_396f9c;
        case 0x396fa0u: goto label_396fa0;
        case 0x396fa4u: goto label_396fa4;
        case 0x396fa8u: goto label_396fa8;
        case 0x396facu: goto label_396fac;
        case 0x396fb0u: goto label_396fb0;
        case 0x396fb4u: goto label_396fb4;
        case 0x396fb8u: goto label_396fb8;
        case 0x396fbcu: goto label_396fbc;
        case 0x396fc0u: goto label_396fc0;
        case 0x396fc4u: goto label_396fc4;
        case 0x396fc8u: goto label_396fc8;
        case 0x396fccu: goto label_396fcc;
        case 0x396fd0u: goto label_396fd0;
        case 0x396fd4u: goto label_396fd4;
        case 0x396fd8u: goto label_396fd8;
        case 0x396fdcu: goto label_396fdc;
        case 0x396fe0u: goto label_396fe0;
        case 0x396fe4u: goto label_396fe4;
        case 0x396fe8u: goto label_396fe8;
        case 0x396fecu: goto label_396fec;
        case 0x396ff0u: goto label_396ff0;
        case 0x396ff4u: goto label_396ff4;
        case 0x396ff8u: goto label_396ff8;
        case 0x396ffcu: goto label_396ffc;
        case 0x397000u: goto label_397000;
        case 0x397004u: goto label_397004;
        case 0x397008u: goto label_397008;
        case 0x39700cu: goto label_39700c;
        case 0x397010u: goto label_397010;
        case 0x397014u: goto label_397014;
        case 0x397018u: goto label_397018;
        case 0x39701cu: goto label_39701c;
        case 0x397020u: goto label_397020;
        case 0x397024u: goto label_397024;
        case 0x397028u: goto label_397028;
        case 0x39702cu: goto label_39702c;
        case 0x397030u: goto label_397030;
        case 0x397034u: goto label_397034;
        case 0x397038u: goto label_397038;
        case 0x39703cu: goto label_39703c;
        case 0x397040u: goto label_397040;
        case 0x397044u: goto label_397044;
        case 0x397048u: goto label_397048;
        case 0x39704cu: goto label_39704c;
        case 0x397050u: goto label_397050;
        case 0x397054u: goto label_397054;
        case 0x397058u: goto label_397058;
        case 0x39705cu: goto label_39705c;
        case 0x397060u: goto label_397060;
        case 0x397064u: goto label_397064;
        case 0x397068u: goto label_397068;
        case 0x39706cu: goto label_39706c;
        case 0x397070u: goto label_397070;
        case 0x397074u: goto label_397074;
        case 0x397078u: goto label_397078;
        case 0x39707cu: goto label_39707c;
        case 0x397080u: goto label_397080;
        case 0x397084u: goto label_397084;
        case 0x397088u: goto label_397088;
        case 0x39708cu: goto label_39708c;
        case 0x397090u: goto label_397090;
        case 0x397094u: goto label_397094;
        case 0x397098u: goto label_397098;
        case 0x39709cu: goto label_39709c;
        case 0x3970a0u: goto label_3970a0;
        case 0x3970a4u: goto label_3970a4;
        case 0x3970a8u: goto label_3970a8;
        case 0x3970acu: goto label_3970ac;
        case 0x3970b0u: goto label_3970b0;
        case 0x3970b4u: goto label_3970b4;
        case 0x3970b8u: goto label_3970b8;
        case 0x3970bcu: goto label_3970bc;
        case 0x3970c0u: goto label_3970c0;
        case 0x3970c4u: goto label_3970c4;
        case 0x3970c8u: goto label_3970c8;
        case 0x3970ccu: goto label_3970cc;
        case 0x3970d0u: goto label_3970d0;
        case 0x3970d4u: goto label_3970d4;
        case 0x3970d8u: goto label_3970d8;
        case 0x3970dcu: goto label_3970dc;
        case 0x3970e0u: goto label_3970e0;
        case 0x3970e4u: goto label_3970e4;
        case 0x3970e8u: goto label_3970e8;
        case 0x3970ecu: goto label_3970ec;
        case 0x3970f0u: goto label_3970f0;
        case 0x3970f4u: goto label_3970f4;
        case 0x3970f8u: goto label_3970f8;
        case 0x3970fcu: goto label_3970fc;
        case 0x397100u: goto label_397100;
        case 0x397104u: goto label_397104;
        case 0x397108u: goto label_397108;
        case 0x39710cu: goto label_39710c;
        case 0x397110u: goto label_397110;
        case 0x397114u: goto label_397114;
        case 0x397118u: goto label_397118;
        case 0x39711cu: goto label_39711c;
        case 0x397120u: goto label_397120;
        case 0x397124u: goto label_397124;
        case 0x397128u: goto label_397128;
        case 0x39712cu: goto label_39712c;
        case 0x397130u: goto label_397130;
        case 0x397134u: goto label_397134;
        case 0x397138u: goto label_397138;
        case 0x39713cu: goto label_39713c;
        case 0x397140u: goto label_397140;
        case 0x397144u: goto label_397144;
        case 0x397148u: goto label_397148;
        case 0x39714cu: goto label_39714c;
        case 0x397150u: goto label_397150;
        case 0x397154u: goto label_397154;
        case 0x397158u: goto label_397158;
        case 0x39715cu: goto label_39715c;
        case 0x397160u: goto label_397160;
        case 0x397164u: goto label_397164;
        case 0x397168u: goto label_397168;
        case 0x39716cu: goto label_39716c;
        case 0x397170u: goto label_397170;
        case 0x397174u: goto label_397174;
        case 0x397178u: goto label_397178;
        case 0x39717cu: goto label_39717c;
        case 0x397180u: goto label_397180;
        case 0x397184u: goto label_397184;
        case 0x397188u: goto label_397188;
        case 0x39718cu: goto label_39718c;
        case 0x397190u: goto label_397190;
        case 0x397194u: goto label_397194;
        case 0x397198u: goto label_397198;
        case 0x39719cu: goto label_39719c;
        case 0x3971a0u: goto label_3971a0;
        case 0x3971a4u: goto label_3971a4;
        case 0x3971a8u: goto label_3971a8;
        case 0x3971acu: goto label_3971ac;
        case 0x3971b0u: goto label_3971b0;
        case 0x3971b4u: goto label_3971b4;
        case 0x3971b8u: goto label_3971b8;
        case 0x3971bcu: goto label_3971bc;
        case 0x3971c0u: goto label_3971c0;
        case 0x3971c4u: goto label_3971c4;
        case 0x3971c8u: goto label_3971c8;
        case 0x3971ccu: goto label_3971cc;
        case 0x3971d0u: goto label_3971d0;
        case 0x3971d4u: goto label_3971d4;
        case 0x3971d8u: goto label_3971d8;
        case 0x3971dcu: goto label_3971dc;
        case 0x3971e0u: goto label_3971e0;
        case 0x3971e4u: goto label_3971e4;
        case 0x3971e8u: goto label_3971e8;
        case 0x3971ecu: goto label_3971ec;
        case 0x3971f0u: goto label_3971f0;
        case 0x3971f4u: goto label_3971f4;
        case 0x3971f8u: goto label_3971f8;
        case 0x3971fcu: goto label_3971fc;
        case 0x397200u: goto label_397200;
        case 0x397204u: goto label_397204;
        case 0x397208u: goto label_397208;
        case 0x39720cu: goto label_39720c;
        case 0x397210u: goto label_397210;
        case 0x397214u: goto label_397214;
        case 0x397218u: goto label_397218;
        case 0x39721cu: goto label_39721c;
        case 0x397220u: goto label_397220;
        case 0x397224u: goto label_397224;
        case 0x397228u: goto label_397228;
        case 0x39722cu: goto label_39722c;
        case 0x397230u: goto label_397230;
        case 0x397234u: goto label_397234;
        case 0x397238u: goto label_397238;
        case 0x39723cu: goto label_39723c;
        case 0x397240u: goto label_397240;
        case 0x397244u: goto label_397244;
        case 0x397248u: goto label_397248;
        case 0x39724cu: goto label_39724c;
        case 0x397250u: goto label_397250;
        case 0x397254u: goto label_397254;
        case 0x397258u: goto label_397258;
        case 0x39725cu: goto label_39725c;
        case 0x397260u: goto label_397260;
        case 0x397264u: goto label_397264;
        case 0x397268u: goto label_397268;
        case 0x39726cu: goto label_39726c;
        case 0x397270u: goto label_397270;
        case 0x397274u: goto label_397274;
        case 0x397278u: goto label_397278;
        case 0x39727cu: goto label_39727c;
        case 0x397280u: goto label_397280;
        case 0x397284u: goto label_397284;
        case 0x397288u: goto label_397288;
        case 0x39728cu: goto label_39728c;
        case 0x397290u: goto label_397290;
        case 0x397294u: goto label_397294;
        case 0x397298u: goto label_397298;
        case 0x39729cu: goto label_39729c;
        case 0x3972a0u: goto label_3972a0;
        case 0x3972a4u: goto label_3972a4;
        case 0x3972a8u: goto label_3972a8;
        case 0x3972acu: goto label_3972ac;
        case 0x3972b0u: goto label_3972b0;
        case 0x3972b4u: goto label_3972b4;
        case 0x3972b8u: goto label_3972b8;
        case 0x3972bcu: goto label_3972bc;
        case 0x3972c0u: goto label_3972c0;
        case 0x3972c4u: goto label_3972c4;
        case 0x3972c8u: goto label_3972c8;
        case 0x3972ccu: goto label_3972cc;
        case 0x3972d0u: goto label_3972d0;
        case 0x3972d4u: goto label_3972d4;
        case 0x3972d8u: goto label_3972d8;
        case 0x3972dcu: goto label_3972dc;
        case 0x3972e0u: goto label_3972e0;
        case 0x3972e4u: goto label_3972e4;
        case 0x3972e8u: goto label_3972e8;
        case 0x3972ecu: goto label_3972ec;
        case 0x3972f0u: goto label_3972f0;
        case 0x3972f4u: goto label_3972f4;
        case 0x3972f8u: goto label_3972f8;
        case 0x3972fcu: goto label_3972fc;
        case 0x397300u: goto label_397300;
        case 0x397304u: goto label_397304;
        case 0x397308u: goto label_397308;
        case 0x39730cu: goto label_39730c;
        case 0x397310u: goto label_397310;
        case 0x397314u: goto label_397314;
        case 0x397318u: goto label_397318;
        case 0x39731cu: goto label_39731c;
        case 0x397320u: goto label_397320;
        case 0x397324u: goto label_397324;
        case 0x397328u: goto label_397328;
        case 0x39732cu: goto label_39732c;
        case 0x397330u: goto label_397330;
        case 0x397334u: goto label_397334;
        case 0x397338u: goto label_397338;
        case 0x39733cu: goto label_39733c;
        case 0x397340u: goto label_397340;
        case 0x397344u: goto label_397344;
        case 0x397348u: goto label_397348;
        case 0x39734cu: goto label_39734c;
        default: break;
    }

    ctx->pc = 0x396ea0u;

label_396ea0:
    // 0x396ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396ea4:
    // 0x396ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396ea8:
    // 0x396ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396eac:
    // 0x396eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396eb0:
    // 0x396eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396eb4:
    // 0x396eb4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_396eb8:
    if (ctx->pc == 0x396EB8u) {
        ctx->pc = 0x396EB8u;
            // 0x396eb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396EBCu;
        goto label_396ebc;
    }
    ctx->pc = 0x396EB4u;
    {
        const bool branch_taken_0x396eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396EB4u;
            // 0x396eb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396eb4) {
            ctx->pc = 0x396EF8u;
            goto label_396ef8;
        }
    }
    ctx->pc = 0x396EBCu;
label_396ebc:
    // 0x396ebc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_396ec0:
    if (ctx->pc == 0x396EC0u) {
        ctx->pc = 0x396EC0u;
            // 0x396ec0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396EC4u;
        goto label_396ec4;
    }
    ctx->pc = 0x396EBCu;
    {
        const bool branch_taken_0x396ebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ebc) {
            ctx->pc = 0x396EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396EBCu;
            // 0x396ec0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396EE4u;
            goto label_396ee4;
        }
    }
    ctx->pc = 0x396EC4u;
label_396ec4:
    // 0x396ec4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_396ec8:
    if (ctx->pc == 0x396EC8u) {
        ctx->pc = 0x396ECCu;
        goto label_396ecc;
    }
    ctx->pc = 0x396EC4u;
    {
        const bool branch_taken_0x396ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ec4) {
            ctx->pc = 0x396EE0u;
            goto label_396ee0;
        }
    }
    ctx->pc = 0x396ECCu;
label_396ecc:
    // 0x396ecc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x396eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_396ed0:
    // 0x396ed0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396ed4:
    if (ctx->pc == 0x396ED4u) {
        ctx->pc = 0x396ED8u;
        goto label_396ed8;
    }
    ctx->pc = 0x396ED0u;
    {
        const bool branch_taken_0x396ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ed0) {
            ctx->pc = 0x396EE0u;
            goto label_396ee0;
        }
    }
    ctx->pc = 0x396ED8u;
label_396ed8:
    // 0x396ed8: 0xc0400a8  jal         func_1002A0
label_396edc:
    if (ctx->pc == 0x396EDCu) {
        ctx->pc = 0x396EE0u;
        goto label_396ee0;
    }
    ctx->pc = 0x396ED8u;
    SET_GPR_U32(ctx, 31, 0x396EE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396EE0u; }
        if (ctx->pc != 0x396EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396EE0u; }
        if (ctx->pc != 0x396EE0u) { return; }
    }
    ctx->pc = 0x396EE0u;
label_396ee0:
    // 0x396ee0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x396ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_396ee4:
    // 0x396ee4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_396ee8:
    // 0x396ee8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_396eec:
    if (ctx->pc == 0x396EECu) {
        ctx->pc = 0x396EECu;
            // 0x396eec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396EF0u;
        goto label_396ef0;
    }
    ctx->pc = 0x396EE8u;
    {
        const bool branch_taken_0x396ee8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x396ee8) {
            ctx->pc = 0x396EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396EE8u;
            // 0x396eec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396EFCu;
            goto label_396efc;
        }
    }
    ctx->pc = 0x396EF0u;
label_396ef0:
    // 0x396ef0: 0xc0400a8  jal         func_1002A0
label_396ef4:
    if (ctx->pc == 0x396EF4u) {
        ctx->pc = 0x396EF4u;
            // 0x396ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396EF8u;
        goto label_396ef8;
    }
    ctx->pc = 0x396EF0u;
    SET_GPR_U32(ctx, 31, 0x396EF8u);
    ctx->pc = 0x396EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396EF0u;
            // 0x396ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396EF8u; }
        if (ctx->pc != 0x396EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396EF8u; }
        if (ctx->pc != 0x396EF8u) { return; }
    }
    ctx->pc = 0x396EF8u;
label_396ef8:
    // 0x396ef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396efc:
    // 0x396efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396f00:
    // 0x396f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396f04:
    // 0x396f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396f08:
    // 0x396f08: 0x3e00008  jr          $ra
label_396f0c:
    if (ctx->pc == 0x396F0Cu) {
        ctx->pc = 0x396F0Cu;
            // 0x396f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x396F10u;
        goto label_396f10;
    }
    ctx->pc = 0x396F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396F08u;
            // 0x396f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396F10u;
label_396f10:
    // 0x396f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396f14:
    // 0x396f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396f18:
    // 0x396f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396f1c:
    // 0x396f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396f20:
    // 0x396f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396f24:
    // 0x396f24: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_396f28:
    if (ctx->pc == 0x396F28u) {
        ctx->pc = 0x396F28u;
            // 0x396f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396F2Cu;
        goto label_396f2c;
    }
    ctx->pc = 0x396F24u;
    {
        const bool branch_taken_0x396f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396F24u;
            // 0x396f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f24) {
            ctx->pc = 0x39702Cu;
            goto label_39702c;
        }
    }
    ctx->pc = 0x396F2Cu;
label_396f2c:
    // 0x396f2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396f30:
    // 0x396f30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_396f34:
    // 0x396f34: 0x246381d0  addiu       $v1, $v1, -0x7E30
    ctx->pc = 0x396f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934992));
label_396f38:
    // 0x396f38: 0x24428210  addiu       $v0, $v0, -0x7DF0
    ctx->pc = 0x396f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935056));
label_396f3c:
    // 0x396f3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x396f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_396f40:
    // 0x396f40: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x396f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_396f44:
    // 0x396f44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x396f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396f48:
    // 0x396f48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x396f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_396f4c:
    // 0x396f4c: 0x320f809  jalr        $t9
label_396f50:
    if (ctx->pc == 0x396F50u) {
        ctx->pc = 0x396F54u;
        goto label_396f54;
    }
    ctx->pc = 0x396F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396F54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x396F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396F54u; }
            if (ctx->pc != 0x396F54u) { return; }
        }
        }
    }
    ctx->pc = 0x396F54u;
label_396f54:
    // 0x396f54: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x396f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_396f58:
    // 0x396f58: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_396f5c:
    if (ctx->pc == 0x396F5Cu) {
        ctx->pc = 0x396F60u;
        goto label_396f60;
    }
    ctx->pc = 0x396F58u;
    {
        const bool branch_taken_0x396f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f58) {
            ctx->pc = 0x396F94u;
            goto label_396f94;
        }
    }
    ctx->pc = 0x396F60u;
label_396f60:
    // 0x396f60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_396f64:
    // 0x396f64: 0x24428158  addiu       $v0, $v0, -0x7EA8
    ctx->pc = 0x396f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934872));
label_396f68:
    // 0x396f68: 0xc0e65a4  jal         func_399690
label_396f6c:
    if (ctx->pc == 0x396F6Cu) {
        ctx->pc = 0x396F6Cu;
            // 0x396f6c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x396F70u;
        goto label_396f70;
    }
    ctx->pc = 0x396F68u;
    SET_GPR_U32(ctx, 31, 0x396F70u);
    ctx->pc = 0x396F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396F68u;
            // 0x396f6c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399690u;
    if (runtime->hasFunction(0x399690u)) {
        auto targetFn = runtime->lookupFunction(0x399690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396F70u; }
        if (ctx->pc != 0x396F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399690_0x399690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396F70u; }
        if (ctx->pc != 0x396F70u) { return; }
    }
    ctx->pc = 0x396F70u;
label_396f70:
    // 0x396f70: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x396f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_396f74:
    // 0x396f74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_396f78:
    if (ctx->pc == 0x396F78u) {
        ctx->pc = 0x396F7Cu;
        goto label_396f7c;
    }
    ctx->pc = 0x396F74u;
    {
        const bool branch_taken_0x396f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f74) {
            ctx->pc = 0x396F94u;
            goto label_396f94;
        }
    }
    ctx->pc = 0x396F7Cu;
label_396f7c:
    // 0x396f7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396f80:
    // 0x396f80: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x396f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_396f84:
    // 0x396f84: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x396f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_396f88:
    // 0x396f88: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x396f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_396f8c:
    // 0x396f8c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x396f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_396f90:
    // 0x396f90: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x396f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_396f94:
    // 0x396f94: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_396f98:
    if (ctx->pc == 0x396F98u) {
        ctx->pc = 0x396F98u;
            // 0x396f98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396F9Cu;
        goto label_396f9c;
    }
    ctx->pc = 0x396F94u;
    {
        const bool branch_taken_0x396f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f94) {
            ctx->pc = 0x396F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396F94u;
            // 0x396f98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397018u;
            goto label_397018;
        }
    }
    ctx->pc = 0x396F9Cu;
label_396f9c:
    // 0x396f9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396fa0:
    // 0x396fa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x396fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_396fa4:
    // 0x396fa4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x396fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_396fa8:
    // 0x396fa8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x396fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_396fac:
    // 0x396fac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x396facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_396fb0:
    // 0x396fb0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x396fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_396fb4:
    // 0x396fb4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_396fb8:
    if (ctx->pc == 0x396FB8u) {
        ctx->pc = 0x396FB8u;
            // 0x396fb8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x396FBCu;
        goto label_396fbc;
    }
    ctx->pc = 0x396FB4u;
    {
        const bool branch_taken_0x396fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396FB4u;
            // 0x396fb8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396fb4) {
            ctx->pc = 0x396FF0u;
            goto label_396ff0;
        }
    }
    ctx->pc = 0x396FBCu;
label_396fbc:
    // 0x396fbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396fc0:
    // 0x396fc0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x396fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_396fc4:
    // 0x396fc4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x396fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_396fc8:
    // 0x396fc8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x396fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_396fcc:
    // 0x396fcc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_396fd0:
    if (ctx->pc == 0x396FD0u) {
        ctx->pc = 0x396FD4u;
        goto label_396fd4;
    }
    ctx->pc = 0x396FCCu;
    {
        const bool branch_taken_0x396fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fcc) {
            ctx->pc = 0x396FF0u;
            goto label_396ff0;
        }
    }
    ctx->pc = 0x396FD4u;
label_396fd4:
    // 0x396fd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_396fd8:
    if (ctx->pc == 0x396FD8u) {
        ctx->pc = 0x396FD8u;
            // 0x396fd8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x396FDCu;
        goto label_396fdc;
    }
    ctx->pc = 0x396FD4u;
    {
        const bool branch_taken_0x396fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fd4) {
            ctx->pc = 0x396FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396FD4u;
            // 0x396fd8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396FF0u;
            goto label_396ff0;
        }
    }
    ctx->pc = 0x396FDCu;
label_396fdc:
    // 0x396fdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x396fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396fe0:
    // 0x396fe0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x396fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_396fe4:
    // 0x396fe4: 0x320f809  jalr        $t9
label_396fe8:
    if (ctx->pc == 0x396FE8u) {
        ctx->pc = 0x396FE8u;
            // 0x396fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x396FECu;
        goto label_396fec;
    }
    ctx->pc = 0x396FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396FECu);
        ctx->pc = 0x396FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396FE4u;
            // 0x396fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396FECu; }
            if (ctx->pc != 0x396FECu) { return; }
        }
        }
    }
    ctx->pc = 0x396FECu;
label_396fec:
    // 0x396fec: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x396fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_396ff0:
    // 0x396ff0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_396ff4:
    if (ctx->pc == 0x396FF4u) {
        ctx->pc = 0x396FF8u;
        goto label_396ff8;
    }
    ctx->pc = 0x396FF0u;
    {
        const bool branch_taken_0x396ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ff0) {
            ctx->pc = 0x397014u;
            goto label_397014;
        }
    }
    ctx->pc = 0x396FF8u;
label_396ff8:
    // 0x396ff8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396ffc:
    // 0x396ffc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x396ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_397000:
    // 0x397000: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_397004:
    if (ctx->pc == 0x397004u) {
        ctx->pc = 0x397004u;
            // 0x397004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x397008u;
        goto label_397008;
    }
    ctx->pc = 0x397000u;
    {
        const bool branch_taken_0x397000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x397004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397000u;
            // 0x397004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397000) {
            ctx->pc = 0x397014u;
            goto label_397014;
        }
    }
    ctx->pc = 0x397008u;
label_397008:
    // 0x397008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x397008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39700c:
    // 0x39700c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x39700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_397010:
    // 0x397010: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x397010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_397014:
    // 0x397014: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x397014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_397018:
    // 0x397018: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x397018u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39701c:
    // 0x39701c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_397020:
    if (ctx->pc == 0x397020u) {
        ctx->pc = 0x397020u;
            // 0x397020: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397024u;
        goto label_397024;
    }
    ctx->pc = 0x39701Cu;
    {
        const bool branch_taken_0x39701c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39701c) {
            ctx->pc = 0x397020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39701Cu;
            // 0x397020: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397030u;
            goto label_397030;
        }
    }
    ctx->pc = 0x397024u;
label_397024:
    // 0x397024: 0xc0400a8  jal         func_1002A0
label_397028:
    if (ctx->pc == 0x397028u) {
        ctx->pc = 0x397028u;
            // 0x397028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39702Cu;
        goto label_39702c;
    }
    ctx->pc = 0x397024u;
    SET_GPR_U32(ctx, 31, 0x39702Cu);
    ctx->pc = 0x397028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397024u;
            // 0x397028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39702Cu; }
        if (ctx->pc != 0x39702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39702Cu; }
        if (ctx->pc != 0x39702Cu) { return; }
    }
    ctx->pc = 0x39702Cu;
label_39702c:
    // 0x39702c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39702cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_397030:
    // 0x397030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x397030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_397034:
    // 0x397034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x397034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397038:
    // 0x397038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39703c:
    // 0x39703c: 0x3e00008  jr          $ra
label_397040:
    if (ctx->pc == 0x397040u) {
        ctx->pc = 0x397040u;
            // 0x397040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x397044u;
        goto label_397044;
    }
    ctx->pc = 0x39703Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39703Cu;
            // 0x397040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397044u;
label_397044:
    // 0x397044: 0x0  nop
    ctx->pc = 0x397044u;
    // NOP
label_397048:
    // 0x397048: 0x0  nop
    ctx->pc = 0x397048u;
    // NOP
label_39704c:
    // 0x39704c: 0x0  nop
    ctx->pc = 0x39704cu;
    // NOP
label_397050:
    // 0x397050: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x397050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_397054:
    // 0x397054: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x397054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_397058:
    // 0x397058: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x397058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_39705c:
    // 0x39705c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x39705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_397060:
    // 0x397060: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x397060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_397064:
    // 0x397064: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x397064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_397068:
    // 0x397068: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x397068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_39706c:
    // 0x39706c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_397070:
    // 0x397070: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x397070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_397074:
    // 0x397074: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x397074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_397078:
    // 0x397078: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39707c:
    // 0x39707c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_397080:
    // 0x397080: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x397080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_397084:
    // 0x397084: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x397084u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_397088:
    // 0x397088: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_39708c:
    if (ctx->pc == 0x39708Cu) {
        ctx->pc = 0x39708Cu;
            // 0x39708c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->pc = 0x397090u;
        goto label_397090;
    }
    ctx->pc = 0x397088u;
    {
        const bool branch_taken_0x397088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397088u;
            // 0x39708c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397088) {
            ctx->pc = 0x3970D8u;
            goto label_3970d8;
        }
    }
    ctx->pc = 0x397090u;
label_397090:
    // 0x397090: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x397090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_397094:
    // 0x397094: 0x10a300a0  beq         $a1, $v1, . + 4 + (0xA0 << 2)
label_397098:
    if (ctx->pc == 0x397098u) {
        ctx->pc = 0x39709Cu;
        goto label_39709c;
    }
    ctx->pc = 0x397094u;
    {
        const bool branch_taken_0x397094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x397094) {
            ctx->pc = 0x397318u;
            goto label_397318;
        }
    }
    ctx->pc = 0x39709Cu;
label_39709c:
    // 0x39709c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3970a0:
    // 0x3970a0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3970a4:
    if (ctx->pc == 0x3970A4u) {
        ctx->pc = 0x3970A8u;
        goto label_3970a8;
    }
    ctx->pc = 0x3970A0u;
    {
        const bool branch_taken_0x3970a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3970a0) {
            ctx->pc = 0x3970B0u;
            goto label_3970b0;
        }
    }
    ctx->pc = 0x3970A8u;
label_3970a8:
    // 0x3970a8: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3970ac:
    if (ctx->pc == 0x3970ACu) {
        ctx->pc = 0x3970B0u;
        goto label_3970b0;
    }
    ctx->pc = 0x3970A8u;
    {
        const bool branch_taken_0x3970a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970a8) {
            ctx->pc = 0x397318u;
            goto label_397318;
        }
    }
    ctx->pc = 0x3970B0u;
label_3970b0:
    // 0x3970b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3970b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3970b4:
    // 0x3970b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3970b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3970b8:
    // 0x3970b8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3970b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3970bc:
    // 0x3970bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3970bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3970c0:
    // 0x3970c0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3970c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3970c4:
    // 0x3970c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3970c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3970c8:
    // 0x3970c8: 0x320f809  jalr        $t9
label_3970cc:
    if (ctx->pc == 0x3970CCu) {
        ctx->pc = 0x3970CCu;
            // 0x3970cc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3970D0u;
        goto label_3970d0;
    }
    ctx->pc = 0x3970C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3970D0u);
        ctx->pc = 0x3970CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3970C8u;
            // 0x3970cc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3970D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3970D0u; }
            if (ctx->pc != 0x3970D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3970D0u;
label_3970d0:
    // 0x3970d0: 0x10000091  b           . + 4 + (0x91 << 2)
label_3970d4:
    if (ctx->pc == 0x3970D4u) {
        ctx->pc = 0x3970D8u;
        goto label_3970d8;
    }
    ctx->pc = 0x3970D0u;
    {
        const bool branch_taken_0x3970d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970d0) {
            ctx->pc = 0x397318u;
            goto label_397318;
        }
    }
    ctx->pc = 0x3970D8u;
label_3970d8:
    // 0x3970d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3970d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3970dc:
    // 0x3970dc: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x3970dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_3970e0:
    // 0x3970e0: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_3970e4:
    if (ctx->pc == 0x3970E4u) {
        ctx->pc = 0x3970E4u;
            // 0x3970e4: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x3970E8u;
        goto label_3970e8;
    }
    ctx->pc = 0x3970E0u;
    {
        const bool branch_taken_0x3970e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3970E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3970E0u;
            // 0x3970e4: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3970e0) {
            ctx->pc = 0x397318u;
            goto label_397318;
        }
    }
    ctx->pc = 0x3970E8u;
label_3970e8:
    // 0x3970e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3970e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3970ec:
    // 0x3970ec: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3970ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3970f0:
    // 0x3970f0: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x3970f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3970f4:
    // 0x3970f4: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3970f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3970f8:
    // 0x3970f8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x3970f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_3970fc:
    // 0x3970fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3970fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_397100:
    // 0x397100: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x397100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_397104:
    // 0x397104: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x397104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_397108:
    // 0x397108: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39710c:
    // 0x39710c: 0x8c74e370  lw          $s4, -0x1C90($v1)
    ctx->pc = 0x39710cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_397110:
    // 0x397110: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x397110u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_397114:
    // 0x397114: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x397114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_397118:
    // 0x397118: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x397118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_39711c:
    // 0x39711c: 0x2453009c  addiu       $s3, $v0, 0x9C
    ctx->pc = 0x39711cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_397120:
    // 0x397120: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x397120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_397124:
    // 0x397124: 0xc4546dc8  lwc1        $f20, 0x6DC8($v0)
    ctx->pc = 0x397124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_397128:
    // 0x397128: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x397128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_39712c:
    // 0x39712c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_397130:
    // 0x397130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x397130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397134:
    // 0x397134: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x397134u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_397138:
    // 0x397138: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x397138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_39713c:
    // 0x39713c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x39713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_397140:
    // 0x397140: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x397140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_397144:
    // 0x397144: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x397144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_397148:
    // 0x397148: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x397148u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39714c:
    // 0x39714c: 0xc0d1c14  jal         func_347050
label_397150:
    if (ctx->pc == 0x397150u) {
        ctx->pc = 0x397150u;
            // 0x397150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397154u;
        goto label_397154;
    }
    ctx->pc = 0x39714Cu;
    SET_GPR_U32(ctx, 31, 0x397154u);
    ctx->pc = 0x397150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39714Cu;
            // 0x397150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397154u; }
        if (ctx->pc != 0x397154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397154u; }
        if (ctx->pc != 0x397154u) { return; }
    }
    ctx->pc = 0x397154u;
label_397154:
    // 0x397154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x397154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397158:
    // 0x397158: 0xc04f278  jal         func_13C9E0
label_39715c:
    if (ctx->pc == 0x39715Cu) {
        ctx->pc = 0x39715Cu;
            // 0x39715c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x397160u;
        goto label_397160;
    }
    ctx->pc = 0x397158u;
    SET_GPR_U32(ctx, 31, 0x397160u);
    ctx->pc = 0x39715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397158u;
            // 0x39715c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397160u; }
        if (ctx->pc != 0x397160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397160u; }
        if (ctx->pc != 0x397160u) { return; }
    }
    ctx->pc = 0x397160u;
label_397160:
    // 0x397160: 0xc0d1c10  jal         func_347040
label_397164:
    if (ctx->pc == 0x397164u) {
        ctx->pc = 0x397164u;
            // 0x397164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397168u;
        goto label_397168;
    }
    ctx->pc = 0x397160u;
    SET_GPR_U32(ctx, 31, 0x397168u);
    ctx->pc = 0x397164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397160u;
            // 0x397164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397168u; }
        if (ctx->pc != 0x397168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397168u; }
        if (ctx->pc != 0x397168u) { return; }
    }
    ctx->pc = 0x397168u;
label_397168:
    // 0x397168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x397168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39716c:
    // 0x39716c: 0xc04ce80  jal         func_133A00
label_397170:
    if (ctx->pc == 0x397170u) {
        ctx->pc = 0x397170u;
            // 0x397170: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x397174u;
        goto label_397174;
    }
    ctx->pc = 0x39716Cu;
    SET_GPR_U32(ctx, 31, 0x397174u);
    ctx->pc = 0x397170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39716Cu;
            // 0x397170: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397174u; }
        if (ctx->pc != 0x397174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397174u; }
        if (ctx->pc != 0x397174u) { return; }
    }
    ctx->pc = 0x397174u;
label_397174:
    // 0x397174: 0xc0d4108  jal         func_350420
label_397178:
    if (ctx->pc == 0x397178u) {
        ctx->pc = 0x39717Cu;
        goto label_39717c;
    }
    ctx->pc = 0x397174u;
    SET_GPR_U32(ctx, 31, 0x39717Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39717Cu; }
        if (ctx->pc != 0x39717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39717Cu; }
        if (ctx->pc != 0x39717Cu) { return; }
    }
    ctx->pc = 0x39717Cu;
label_39717c:
    // 0x39717c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39717cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397180:
    // 0x397180: 0xc0d4104  jal         func_350410
label_397184:
    if (ctx->pc == 0x397184u) {
        ctx->pc = 0x397184u;
            // 0x397184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397188u;
        goto label_397188;
    }
    ctx->pc = 0x397180u;
    SET_GPR_U32(ctx, 31, 0x397188u);
    ctx->pc = 0x397184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397180u;
            // 0x397184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397188u; }
        if (ctx->pc != 0x397188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397188u; }
        if (ctx->pc != 0x397188u) { return; }
    }
    ctx->pc = 0x397188u;
label_397188:
    // 0x397188: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x397188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39718c:
    // 0x39718c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397190:
    // 0x397190: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x397190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_397194:
    // 0x397194: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x397194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_397198:
    // 0x397198: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x397198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39719c:
    // 0x39719c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39719cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3971a0:
    // 0x3971a0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3971a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3971a4:
    // 0x3971a4: 0xc0d40ac  jal         func_3502B0
label_3971a8:
    if (ctx->pc == 0x3971A8u) {
        ctx->pc = 0x3971A8u;
            // 0x3971a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3971ACu;
        goto label_3971ac;
    }
    ctx->pc = 0x3971A4u;
    SET_GPR_U32(ctx, 31, 0x3971ACu);
    ctx->pc = 0x3971A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3971A4u;
            // 0x3971a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971ACu; }
        if (ctx->pc != 0x3971ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971ACu; }
        if (ctx->pc != 0x3971ACu) { return; }
    }
    ctx->pc = 0x3971ACu;
label_3971ac:
    // 0x3971ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3971acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3971b0:
    // 0x3971b0: 0xc0e5de0  jal         func_397780
label_3971b4:
    if (ctx->pc == 0x3971B4u) {
        ctx->pc = 0x3971B4u;
            // 0x3971b4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3971B8u;
        goto label_3971b8;
    }
    ctx->pc = 0x3971B0u;
    SET_GPR_U32(ctx, 31, 0x3971B8u);
    ctx->pc = 0x3971B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3971B0u;
            // 0x3971b4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397780u;
    if (runtime->hasFunction(0x397780u)) {
        auto targetFn = runtime->lookupFunction(0x397780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971B8u; }
        if (ctx->pc != 0x3971B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397780_0x397780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971B8u; }
        if (ctx->pc != 0x3971B8u) { return; }
    }
    ctx->pc = 0x3971B8u;
label_3971b8:
    // 0x3971b8: 0xc0d1c0c  jal         func_347030
label_3971bc:
    if (ctx->pc == 0x3971BCu) {
        ctx->pc = 0x3971BCu;
            // 0x3971bc: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x3971C0u;
        goto label_3971c0;
    }
    ctx->pc = 0x3971B8u;
    SET_GPR_U32(ctx, 31, 0x3971C0u);
    ctx->pc = 0x3971BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3971B8u;
            // 0x3971bc: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347030u;
    if (runtime->hasFunction(0x347030u)) {
        auto targetFn = runtime->lookupFunction(0x347030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971C0u; }
        if (ctx->pc != 0x3971C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347030_0x347030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971C0u; }
        if (ctx->pc != 0x3971C0u) { return; }
    }
    ctx->pc = 0x3971C0u;
label_3971c0:
    // 0x3971c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3971c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3971c4:
    // 0x3971c4: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_3971c8:
    if (ctx->pc == 0x3971C8u) {
        ctx->pc = 0x3971CCu;
        goto label_3971cc;
    }
    ctx->pc = 0x3971C4u;
    {
        const bool branch_taken_0x3971c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971c4) {
            ctx->pc = 0x397248u;
            goto label_397248;
        }
    }
    ctx->pc = 0x3971CCu;
label_3971cc:
    // 0x3971cc: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3971ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3971d0:
    // 0x3971d0: 0xc0e5ddc  jal         func_397770
label_3971d4:
    if (ctx->pc == 0x3971D4u) {
        ctx->pc = 0x3971D4u;
            // 0x3971d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3971D8u;
        goto label_3971d8;
    }
    ctx->pc = 0x3971D0u;
    SET_GPR_U32(ctx, 31, 0x3971D8u);
    ctx->pc = 0x3971D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3971D0u;
            // 0x3971d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397770u;
    if (runtime->hasFunction(0x397770u)) {
        auto targetFn = runtime->lookupFunction(0x397770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971D8u; }
        if (ctx->pc != 0x3971D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397770_0x397770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971D8u; }
        if (ctx->pc != 0x3971D8u) { return; }
    }
    ctx->pc = 0x3971D8u;
label_3971d8:
    // 0x3971d8: 0xc0e5dd8  jal         func_397760
label_3971dc:
    if (ctx->pc == 0x3971DCu) {
        ctx->pc = 0x3971DCu;
            // 0x3971dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3971E0u;
        goto label_3971e0;
    }
    ctx->pc = 0x3971D8u;
    SET_GPR_U32(ctx, 31, 0x3971E0u);
    ctx->pc = 0x3971DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3971D8u;
            // 0x3971dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397760u;
    if (runtime->hasFunction(0x397760u)) {
        auto targetFn = runtime->lookupFunction(0x397760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971E0u; }
        if (ctx->pc != 0x3971E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397760_0x397760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971E0u; }
        if (ctx->pc != 0x3971E0u) { return; }
    }
    ctx->pc = 0x3971E0u;
label_3971e0:
    // 0x3971e0: 0xc0e5dd4  jal         func_397750
label_3971e4:
    if (ctx->pc == 0x3971E4u) {
        ctx->pc = 0x3971E4u;
            // 0x3971e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3971E8u;
        goto label_3971e8;
    }
    ctx->pc = 0x3971E0u;
    SET_GPR_U32(ctx, 31, 0x3971E8u);
    ctx->pc = 0x3971E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3971E0u;
            // 0x3971e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397750u;
    if (runtime->hasFunction(0x397750u)) {
        auto targetFn = runtime->lookupFunction(0x397750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971E8u; }
        if (ctx->pc != 0x3971E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397750_0x397750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3971E8u; }
        if (ctx->pc != 0x3971E8u) { return; }
    }
    ctx->pc = 0x3971E8u;
label_3971e8:
    // 0x3971e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3971e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3971ec:
    // 0x3971ec: 0x0  nop
    ctx->pc = 0x3971ecu;
    // NOP
label_3971f0:
    // 0x3971f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3971f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3971f4:
    // 0x3971f4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3971f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3971f8:
    // 0x3971f8: 0x320f809  jalr        $t9
label_3971fc:
    if (ctx->pc == 0x3971FCu) {
        ctx->pc = 0x3971FCu;
            // 0x3971fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397200u;
        goto label_397200;
    }
    ctx->pc = 0x3971F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x397200u);
        ctx->pc = 0x3971FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3971F8u;
            // 0x3971fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x397200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x397200u; }
            if (ctx->pc != 0x397200u) { return; }
        }
        }
    }
    ctx->pc = 0x397200u;
label_397200:
    // 0x397200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x397200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_397204:
    // 0x397204: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x397204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_397208:
    // 0x397208: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x397208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39720c:
    // 0x39720c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x39720cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_397210:
    // 0x397210: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x397210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_397214:
    // 0x397214: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x397214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_397218:
    // 0x397218: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x397218u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39721c:
    // 0x39721c: 0xc0e5d0c  jal         func_397430
label_397220:
    if (ctx->pc == 0x397220u) {
        ctx->pc = 0x397220u;
            // 0x397220: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397224u;
        goto label_397224;
    }
    ctx->pc = 0x39721Cu;
    SET_GPR_U32(ctx, 31, 0x397224u);
    ctx->pc = 0x397220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39721Cu;
            // 0x397220: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397430u;
    if (runtime->hasFunction(0x397430u)) {
        auto targetFn = runtime->lookupFunction(0x397430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397224u; }
        if (ctx->pc != 0x397224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397430_0x397430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397224u; }
        if (ctx->pc != 0x397224u) { return; }
    }
    ctx->pc = 0x397224u;
label_397224:
    // 0x397224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_397228:
    if (ctx->pc == 0x397228u) {
        ctx->pc = 0x39722Cu;
        goto label_39722c;
    }
    ctx->pc = 0x397224u;
    {
        const bool branch_taken_0x397224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397224) {
            ctx->pc = 0x397238u;
            goto label_397238;
        }
    }
    ctx->pc = 0x39722Cu;
label_39722c:
    // 0x39722c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x39722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_397230:
    // 0x397230: 0xc0e0dcc  jal         func_383730
label_397234:
    if (ctx->pc == 0x397234u) {
        ctx->pc = 0x397234u;
            // 0x397234: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x397238u;
        goto label_397238;
    }
    ctx->pc = 0x397230u;
    SET_GPR_U32(ctx, 31, 0x397238u);
    ctx->pc = 0x397234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397230u;
            // 0x397234: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383730u;
    if (runtime->hasFunction(0x383730u)) {
        auto targetFn = runtime->lookupFunction(0x383730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397238u; }
        if (ctx->pc != 0x397238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383730_0x383730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397238u; }
        if (ctx->pc != 0x397238u) { return; }
    }
    ctx->pc = 0x397238u;
label_397238:
    // 0x397238: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x397238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39723c:
    // 0x39723c: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x39723cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_397240:
    // 0x397240: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_397244:
    if (ctx->pc == 0x397244u) {
        ctx->pc = 0x397244u;
            // 0x397244: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x397248u;
        goto label_397248;
    }
    ctx->pc = 0x397240u;
    {
        const bool branch_taken_0x397240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397240u;
            // 0x397244: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397240) {
            ctx->pc = 0x3971F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3971f0;
        }
    }
    ctx->pc = 0x397248u;
label_397248:
    // 0x397248: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x397248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_39724c:
    // 0x39724c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x39724cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_397250:
    // 0x397250: 0xc0e5ce4  jal         func_397390
label_397254:
    if (ctx->pc == 0x397254u) {
        ctx->pc = 0x397254u;
            // 0x397254: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x397258u;
        goto label_397258;
    }
    ctx->pc = 0x397250u;
    SET_GPR_U32(ctx, 31, 0x397258u);
    ctx->pc = 0x397254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397250u;
            // 0x397254: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397390u;
    if (runtime->hasFunction(0x397390u)) {
        auto targetFn = runtime->lookupFunction(0x397390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397258u; }
        if (ctx->pc != 0x397258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397390_0x397390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397258u; }
        if (ctx->pc != 0x397258u) { return; }
    }
    ctx->pc = 0x397258u;
label_397258:
    // 0x397258: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x397258u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39725c:
    // 0x39725c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x39725cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_397260:
    // 0x397260: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_397264:
    if (ctx->pc == 0x397264u) {
        ctx->pc = 0x397268u;
        goto label_397268;
    }
    ctx->pc = 0x397260u;
    {
        const bool branch_taken_0x397260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397260) {
            ctx->pc = 0x3972E8u;
            goto label_3972e8;
        }
    }
    ctx->pc = 0x397268u;
label_397268:
    // 0x397268: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x397268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39726c:
    // 0x39726c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_397270:
    // 0x397270: 0xc04e738  jal         func_139CE0
label_397274:
    if (ctx->pc == 0x397274u) {
        ctx->pc = 0x397274u;
            // 0x397274: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x397278u;
        goto label_397278;
    }
    ctx->pc = 0x397270u;
    SET_GPR_U32(ctx, 31, 0x397278u);
    ctx->pc = 0x397274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397270u;
            // 0x397274: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397278u; }
        if (ctx->pc != 0x397278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397278u; }
        if (ctx->pc != 0x397278u) { return; }
    }
    ctx->pc = 0x397278u;
label_397278:
    // 0x397278: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x397278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_39727c:
    // 0x39727c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_397280:
    // 0x397280: 0xc04e4a4  jal         func_139290
label_397284:
    if (ctx->pc == 0x397284u) {
        ctx->pc = 0x397284u;
            // 0x397284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397288u;
        goto label_397288;
    }
    ctx->pc = 0x397280u;
    SET_GPR_U32(ctx, 31, 0x397288u);
    ctx->pc = 0x397284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397280u;
            // 0x397284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397288u; }
        if (ctx->pc != 0x397288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397288u; }
        if (ctx->pc != 0x397288u) { return; }
    }
    ctx->pc = 0x397288u;
label_397288:
    // 0x397288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39728c:
    // 0x39728c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x39728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_397290:
    // 0x397290: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x397290u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_397294:
    // 0x397294: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x397294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_397298:
    // 0x397298: 0xc04cd60  jal         func_133580
label_39729c:
    if (ctx->pc == 0x39729Cu) {
        ctx->pc = 0x39729Cu;
            // 0x39729c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3972A0u;
        goto label_3972a0;
    }
    ctx->pc = 0x397298u;
    SET_GPR_U32(ctx, 31, 0x3972A0u);
    ctx->pc = 0x39729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397298u;
            // 0x39729c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3972A0u; }
        if (ctx->pc != 0x3972A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3972A0u; }
        if (ctx->pc != 0x3972A0u) { return; }
    }
    ctx->pc = 0x3972A0u;
label_3972a0:
    // 0x3972a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3972a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3972a4:
    // 0x3972a4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3972a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3972a8:
    // 0x3972a8: 0x320f809  jalr        $t9
label_3972ac:
    if (ctx->pc == 0x3972ACu) {
        ctx->pc = 0x3972ACu;
            // 0x3972ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3972B0u;
        goto label_3972b0;
    }
    ctx->pc = 0x3972A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3972B0u);
        ctx->pc = 0x3972ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3972A8u;
            // 0x3972ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3972B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3972B0u; }
            if (ctx->pc != 0x3972B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3972B0u;
label_3972b0:
    // 0x3972b0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3972b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3972b4:
    // 0x3972b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3972b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3972b8:
    // 0x3972b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3972b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3972bc:
    // 0x3972bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3972bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3972c0:
    // 0x3972c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3972c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3972c4:
    // 0x3972c4: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x3972c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3972c8:
    // 0x3972c8: 0xc04cfcc  jal         func_133F30
label_3972cc:
    if (ctx->pc == 0x3972CCu) {
        ctx->pc = 0x3972CCu;
            // 0x3972cc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x3972D0u;
        goto label_3972d0;
    }
    ctx->pc = 0x3972C8u;
    SET_GPR_U32(ctx, 31, 0x3972D0u);
    ctx->pc = 0x3972CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3972C8u;
            // 0x3972cc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3972D0u; }
        if (ctx->pc != 0x3972D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3972D0u; }
        if (ctx->pc != 0x3972D0u) { return; }
    }
    ctx->pc = 0x3972D0u;
label_3972d0:
    // 0x3972d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3972d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3972d4:
    // 0x3972d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3972d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3972d8:
    // 0x3972d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3972d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3972dc:
    // 0x3972dc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3972dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3972e0:
    // 0x3972e0: 0xc0e5cd4  jal         func_397350
label_3972e4:
    if (ctx->pc == 0x3972E4u) {
        ctx->pc = 0x3972E4u;
            // 0x3972e4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3972E8u;
        goto label_3972e8;
    }
    ctx->pc = 0x3972E0u;
    SET_GPR_U32(ctx, 31, 0x3972E8u);
    ctx->pc = 0x3972E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3972E0u;
            // 0x3972e4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397350u;
    if (runtime->hasFunction(0x397350u)) {
        auto targetFn = runtime->lookupFunction(0x397350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3972E8u; }
        if (ctx->pc != 0x3972E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397350_0x397350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3972E8u; }
        if (ctx->pc != 0x3972E8u) { return; }
    }
    ctx->pc = 0x3972E8u;
label_3972e8:
    // 0x3972e8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3972e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3972ec:
    // 0x3972ec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3972ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3972f0:
    // 0x3972f0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x3972f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_3972f4:
    // 0x3972f4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3972f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3972f8:
    // 0x3972f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3972f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3972fc:
    // 0x3972fc: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x3972fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_397300:
    // 0x397300: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x397300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_397304:
    // 0x397304: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x397304u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_397308:
    // 0x397308: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x397308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39730c:
    // 0x39730c: 0x5460ff8b  bnel        $v1, $zero, . + 4 + (-0x75 << 2)
label_397310:
    if (ctx->pc == 0x397310u) {
        ctx->pc = 0x397310u;
            // 0x397310: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->pc = 0x397314u;
        goto label_397314;
    }
    ctx->pc = 0x39730Cu;
    {
        const bool branch_taken_0x39730c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39730c) {
            ctx->pc = 0x397310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39730Cu;
            // 0x397310: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39713Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39713c;
        }
    }
    ctx->pc = 0x397314u;
label_397314:
    // 0x397314: 0x0  nop
    ctx->pc = 0x397314u;
    // NOP
label_397318:
    // 0x397318: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x397318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_39731c:
    // 0x39731c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x39731cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_397320:
    // 0x397320: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x397320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_397324:
    // 0x397324: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x397324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_397328:
    // 0x397328: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x397328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39732c:
    // 0x39732c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x39732cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_397330:
    // 0x397330: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x397330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_397334:
    // 0x397334: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x397334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_397338:
    // 0x397338: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x397338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39733c:
    // 0x39733c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39733cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_397340:
    // 0x397340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x397340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397344:
    // 0x397344: 0x3e00008  jr          $ra
label_397348:
    if (ctx->pc == 0x397348u) {
        ctx->pc = 0x397348u;
            // 0x397348: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x39734Cu;
        goto label_39734c;
    }
    ctx->pc = 0x397344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397344u;
            // 0x397348: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39734Cu;
label_39734c:
    // 0x39734c: 0x0  nop
    ctx->pc = 0x39734cu;
    // NOP
}
