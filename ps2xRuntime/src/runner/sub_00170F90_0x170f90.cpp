#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170F90
// Address: 0x170f90 - 0x1713f0
void sub_00170F90_0x170f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170F90_0x170f90");
#endif

    switch (ctx->pc) {
        case 0x170f90u: goto label_170f90;
        case 0x170f94u: goto label_170f94;
        case 0x170f98u: goto label_170f98;
        case 0x170f9cu: goto label_170f9c;
        case 0x170fa0u: goto label_170fa0;
        case 0x170fa4u: goto label_170fa4;
        case 0x170fa8u: goto label_170fa8;
        case 0x170facu: goto label_170fac;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fb8u: goto label_170fb8;
        case 0x170fbcu: goto label_170fbc;
        case 0x170fc0u: goto label_170fc0;
        case 0x170fc4u: goto label_170fc4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd0u: goto label_170fd0;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fdcu: goto label_170fdc;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe4u: goto label_170fe4;
        case 0x170fe8u: goto label_170fe8;
        case 0x170fecu: goto label_170fec;
        case 0x170ff0u: goto label_170ff0;
        case 0x170ff4u: goto label_170ff4;
        case 0x170ff8u: goto label_170ff8;
        case 0x170ffcu: goto label_170ffc;
        case 0x171000u: goto label_171000;
        case 0x171004u: goto label_171004;
        case 0x171008u: goto label_171008;
        case 0x17100cu: goto label_17100c;
        case 0x171010u: goto label_171010;
        case 0x171014u: goto label_171014;
        case 0x171018u: goto label_171018;
        case 0x17101cu: goto label_17101c;
        case 0x171020u: goto label_171020;
        case 0x171024u: goto label_171024;
        case 0x171028u: goto label_171028;
        case 0x17102cu: goto label_17102c;
        case 0x171030u: goto label_171030;
        case 0x171034u: goto label_171034;
        case 0x171038u: goto label_171038;
        case 0x17103cu: goto label_17103c;
        case 0x171040u: goto label_171040;
        case 0x171044u: goto label_171044;
        case 0x171048u: goto label_171048;
        case 0x17104cu: goto label_17104c;
        case 0x171050u: goto label_171050;
        case 0x171054u: goto label_171054;
        case 0x171058u: goto label_171058;
        case 0x17105cu: goto label_17105c;
        case 0x171060u: goto label_171060;
        case 0x171064u: goto label_171064;
        case 0x171068u: goto label_171068;
        case 0x17106cu: goto label_17106c;
        case 0x171070u: goto label_171070;
        case 0x171074u: goto label_171074;
        case 0x171078u: goto label_171078;
        case 0x17107cu: goto label_17107c;
        case 0x171080u: goto label_171080;
        case 0x171084u: goto label_171084;
        case 0x171088u: goto label_171088;
        case 0x17108cu: goto label_17108c;
        case 0x171090u: goto label_171090;
        case 0x171094u: goto label_171094;
        case 0x171098u: goto label_171098;
        case 0x17109cu: goto label_17109c;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710a4u: goto label_1710a4;
        case 0x1710a8u: goto label_1710a8;
        case 0x1710acu: goto label_1710ac;
        case 0x1710b0u: goto label_1710b0;
        case 0x1710b4u: goto label_1710b4;
        case 0x1710b8u: goto label_1710b8;
        case 0x1710bcu: goto label_1710bc;
        case 0x1710c0u: goto label_1710c0;
        case 0x1710c4u: goto label_1710c4;
        case 0x1710c8u: goto label_1710c8;
        case 0x1710ccu: goto label_1710cc;
        case 0x1710d0u: goto label_1710d0;
        case 0x1710d4u: goto label_1710d4;
        case 0x1710d8u: goto label_1710d8;
        case 0x1710dcu: goto label_1710dc;
        case 0x1710e0u: goto label_1710e0;
        case 0x1710e4u: goto label_1710e4;
        case 0x1710e8u: goto label_1710e8;
        case 0x1710ecu: goto label_1710ec;
        case 0x1710f0u: goto label_1710f0;
        case 0x1710f4u: goto label_1710f4;
        case 0x1710f8u: goto label_1710f8;
        case 0x1710fcu: goto label_1710fc;
        case 0x171100u: goto label_171100;
        case 0x171104u: goto label_171104;
        case 0x171108u: goto label_171108;
        case 0x17110cu: goto label_17110c;
        case 0x171110u: goto label_171110;
        case 0x171114u: goto label_171114;
        case 0x171118u: goto label_171118;
        case 0x17111cu: goto label_17111c;
        case 0x171120u: goto label_171120;
        case 0x171124u: goto label_171124;
        case 0x171128u: goto label_171128;
        case 0x17112cu: goto label_17112c;
        case 0x171130u: goto label_171130;
        case 0x171134u: goto label_171134;
        case 0x171138u: goto label_171138;
        case 0x17113cu: goto label_17113c;
        case 0x171140u: goto label_171140;
        case 0x171144u: goto label_171144;
        case 0x171148u: goto label_171148;
        case 0x17114cu: goto label_17114c;
        case 0x171150u: goto label_171150;
        case 0x171154u: goto label_171154;
        case 0x171158u: goto label_171158;
        case 0x17115cu: goto label_17115c;
        case 0x171160u: goto label_171160;
        case 0x171164u: goto label_171164;
        case 0x171168u: goto label_171168;
        case 0x17116cu: goto label_17116c;
        case 0x171170u: goto label_171170;
        case 0x171174u: goto label_171174;
        case 0x171178u: goto label_171178;
        case 0x17117cu: goto label_17117c;
        case 0x171180u: goto label_171180;
        case 0x171184u: goto label_171184;
        case 0x171188u: goto label_171188;
        case 0x17118cu: goto label_17118c;
        case 0x171190u: goto label_171190;
        case 0x171194u: goto label_171194;
        case 0x171198u: goto label_171198;
        case 0x17119cu: goto label_17119c;
        case 0x1711a0u: goto label_1711a0;
        case 0x1711a4u: goto label_1711a4;
        case 0x1711a8u: goto label_1711a8;
        case 0x1711acu: goto label_1711ac;
        case 0x1711b0u: goto label_1711b0;
        case 0x1711b4u: goto label_1711b4;
        case 0x1711b8u: goto label_1711b8;
        case 0x1711bcu: goto label_1711bc;
        case 0x1711c0u: goto label_1711c0;
        case 0x1711c4u: goto label_1711c4;
        case 0x1711c8u: goto label_1711c8;
        case 0x1711ccu: goto label_1711cc;
        case 0x1711d0u: goto label_1711d0;
        case 0x1711d4u: goto label_1711d4;
        case 0x1711d8u: goto label_1711d8;
        case 0x1711dcu: goto label_1711dc;
        case 0x1711e0u: goto label_1711e0;
        case 0x1711e4u: goto label_1711e4;
        case 0x1711e8u: goto label_1711e8;
        case 0x1711ecu: goto label_1711ec;
        case 0x1711f0u: goto label_1711f0;
        case 0x1711f4u: goto label_1711f4;
        case 0x1711f8u: goto label_1711f8;
        case 0x1711fcu: goto label_1711fc;
        case 0x171200u: goto label_171200;
        case 0x171204u: goto label_171204;
        case 0x171208u: goto label_171208;
        case 0x17120cu: goto label_17120c;
        case 0x171210u: goto label_171210;
        case 0x171214u: goto label_171214;
        case 0x171218u: goto label_171218;
        case 0x17121cu: goto label_17121c;
        case 0x171220u: goto label_171220;
        case 0x171224u: goto label_171224;
        case 0x171228u: goto label_171228;
        case 0x17122cu: goto label_17122c;
        case 0x171230u: goto label_171230;
        case 0x171234u: goto label_171234;
        case 0x171238u: goto label_171238;
        case 0x17123cu: goto label_17123c;
        case 0x171240u: goto label_171240;
        case 0x171244u: goto label_171244;
        case 0x171248u: goto label_171248;
        case 0x17124cu: goto label_17124c;
        case 0x171250u: goto label_171250;
        case 0x171254u: goto label_171254;
        case 0x171258u: goto label_171258;
        case 0x17125cu: goto label_17125c;
        case 0x171260u: goto label_171260;
        case 0x171264u: goto label_171264;
        case 0x171268u: goto label_171268;
        case 0x17126cu: goto label_17126c;
        case 0x171270u: goto label_171270;
        case 0x171274u: goto label_171274;
        case 0x171278u: goto label_171278;
        case 0x17127cu: goto label_17127c;
        case 0x171280u: goto label_171280;
        case 0x171284u: goto label_171284;
        case 0x171288u: goto label_171288;
        case 0x17128cu: goto label_17128c;
        case 0x171290u: goto label_171290;
        case 0x171294u: goto label_171294;
        case 0x171298u: goto label_171298;
        case 0x17129cu: goto label_17129c;
        case 0x1712a0u: goto label_1712a0;
        case 0x1712a4u: goto label_1712a4;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712acu: goto label_1712ac;
        case 0x1712b0u: goto label_1712b0;
        case 0x1712b4u: goto label_1712b4;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712bcu: goto label_1712bc;
        case 0x1712c0u: goto label_1712c0;
        case 0x1712c4u: goto label_1712c4;
        case 0x1712c8u: goto label_1712c8;
        case 0x1712ccu: goto label_1712cc;
        case 0x1712d0u: goto label_1712d0;
        case 0x1712d4u: goto label_1712d4;
        case 0x1712d8u: goto label_1712d8;
        case 0x1712dcu: goto label_1712dc;
        case 0x1712e0u: goto label_1712e0;
        case 0x1712e4u: goto label_1712e4;
        case 0x1712e8u: goto label_1712e8;
        case 0x1712ecu: goto label_1712ec;
        case 0x1712f0u: goto label_1712f0;
        case 0x1712f4u: goto label_1712f4;
        case 0x1712f8u: goto label_1712f8;
        case 0x1712fcu: goto label_1712fc;
        case 0x171300u: goto label_171300;
        case 0x171304u: goto label_171304;
        case 0x171308u: goto label_171308;
        case 0x17130cu: goto label_17130c;
        case 0x171310u: goto label_171310;
        case 0x171314u: goto label_171314;
        case 0x171318u: goto label_171318;
        case 0x17131cu: goto label_17131c;
        case 0x171320u: goto label_171320;
        case 0x171324u: goto label_171324;
        case 0x171328u: goto label_171328;
        case 0x17132cu: goto label_17132c;
        case 0x171330u: goto label_171330;
        case 0x171334u: goto label_171334;
        case 0x171338u: goto label_171338;
        case 0x17133cu: goto label_17133c;
        case 0x171340u: goto label_171340;
        case 0x171344u: goto label_171344;
        case 0x171348u: goto label_171348;
        case 0x17134cu: goto label_17134c;
        case 0x171350u: goto label_171350;
        case 0x171354u: goto label_171354;
        case 0x171358u: goto label_171358;
        case 0x17135cu: goto label_17135c;
        case 0x171360u: goto label_171360;
        case 0x171364u: goto label_171364;
        case 0x171368u: goto label_171368;
        case 0x17136cu: goto label_17136c;
        case 0x171370u: goto label_171370;
        case 0x171374u: goto label_171374;
        case 0x171378u: goto label_171378;
        case 0x17137cu: goto label_17137c;
        case 0x171380u: goto label_171380;
        case 0x171384u: goto label_171384;
        case 0x171388u: goto label_171388;
        case 0x17138cu: goto label_17138c;
        case 0x171390u: goto label_171390;
        case 0x171394u: goto label_171394;
        case 0x171398u: goto label_171398;
        case 0x17139cu: goto label_17139c;
        case 0x1713a0u: goto label_1713a0;
        case 0x1713a4u: goto label_1713a4;
        case 0x1713a8u: goto label_1713a8;
        case 0x1713acu: goto label_1713ac;
        case 0x1713b0u: goto label_1713b0;
        case 0x1713b4u: goto label_1713b4;
        case 0x1713b8u: goto label_1713b8;
        case 0x1713bcu: goto label_1713bc;
        case 0x1713c0u: goto label_1713c0;
        case 0x1713c4u: goto label_1713c4;
        case 0x1713c8u: goto label_1713c8;
        case 0x1713ccu: goto label_1713cc;
        case 0x1713d0u: goto label_1713d0;
        case 0x1713d4u: goto label_1713d4;
        case 0x1713d8u: goto label_1713d8;
        case 0x1713dcu: goto label_1713dc;
        case 0x1713e0u: goto label_1713e0;
        case 0x1713e4u: goto label_1713e4;
        case 0x1713e8u: goto label_1713e8;
        case 0x1713ecu: goto label_1713ec;
        default: break;
    }

    ctx->pc = 0x170f90u;

label_170f90:
    // 0x170f90: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_170f94:
    // 0x170f94: 0x24632e78  addiu       $v1, $v1, 0x2E78
    ctx->pc = 0x170f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11896));
label_170f98:
    // 0x170f98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_170f9c:
    // 0x170f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x170f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_170fa0:
    // 0x170fa0: 0x3e00008  jr          $ra
label_170fa4:
    if (ctx->pc == 0x170FA4u) {
        ctx->pc = 0x170FA4u;
            // 0x170fa4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x170FA8u;
        goto label_170fa8;
    }
    ctx->pc = 0x170FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FA0u;
            // 0x170fa4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170FA8u;
label_170fa8:
    // 0x170fa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_170fac:
    // 0x170fac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x170facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_170fb0:
    // 0x170fb0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x170fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_170fb4:
    // 0x170fb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x170fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170fb8:
    // 0x170fb8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x170fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_170fbc:
    // 0x170fbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x170fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_170fc0:
    // 0x170fc0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x170fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_170fc4:
    // 0x170fc4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x170fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_170fc8:
    // 0x170fc8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x170fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170fcc:
    // 0x170fcc: 0xc05e3ee  jal         func_178FB8
label_170fd0:
    if (ctx->pc == 0x170FD0u) {
        ctx->pc = 0x170FD0u;
            // 0x170fd0: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x170FD4u;
        goto label_170fd4;
    }
    ctx->pc = 0x170FCCu;
    SET_GPR_U32(ctx, 31, 0x170FD4u);
    ctx->pc = 0x170FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FCCu;
            // 0x170fd0: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178FB8u;
    if (runtime->hasFunction(0x178FB8u)) {
        auto targetFn = runtime->lookupFunction(0x178FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FD4u; }
        if (ctx->pc != 0x170FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178FB8_0x178fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FD4u; }
        if (ctx->pc != 0x170FD4u) { return; }
    }
    ctx->pc = 0x170FD4u;
label_170fd4:
    // 0x170fd4: 0xc05c834  jal         func_1720D0
label_170fd8:
    if (ctx->pc == 0x170FD8u) {
        ctx->pc = 0x170FD8u;
            // 0x170fd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170FDCu;
        goto label_170fdc;
    }
    ctx->pc = 0x170FD4u;
    SET_GPR_U32(ctx, 31, 0x170FDCu);
    ctx->pc = 0x170FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FD4u;
            // 0x170fd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FDCu; }
        if (ctx->pc != 0x170FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FDCu; }
        if (ctx->pc != 0x170FDCu) { return; }
    }
    ctx->pc = 0x170FDCu;
label_170fdc:
    // 0x170fdc: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_170fe0:
    // 0x170fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170fe4:
    // 0x170fe4: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
label_170fe8:
    if (ctx->pc == 0x170FE8u) {
        ctx->pc = 0x170FECu;
        goto label_170fec;
    }
    ctx->pc = 0x170FE4u;
    {
        const bool branch_taken_0x170fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170fe4) {
            ctx->pc = 0x171170u;
            goto label_171170;
        }
    }
    ctx->pc = 0x170FECu;
label_170fec:
    // 0x170fec: 0x5603003c  bnel        $s0, $v1, . + 4 + (0x3C << 2)
label_170ff0:
    if (ctx->pc == 0x170FF0u) {
        ctx->pc = 0x170FF0u;
            // 0x170ff0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x170FF4u;
        goto label_170ff4;
    }
    ctx->pc = 0x170FECu;
    {
        const bool branch_taken_0x170fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x170fec) {
            ctx->pc = 0x170FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170FECu;
            // 0x170ff0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1710E0u;
            goto label_1710e0;
        }
    }
    ctx->pc = 0x170FF4u;
label_170ff4:
    // 0x170ff4: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x170ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_170ff8:
    // 0x170ff8: 0xc05c83a  jal         func_1720E8
label_170ffc:
    if (ctx->pc == 0x170FFCu) {
        ctx->pc = 0x170FFCu;
            // 0x170ffc: 0x26720028  addiu       $s2, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->pc = 0x171000u;
        goto label_171000;
    }
    ctx->pc = 0x170FF8u;
    SET_GPR_U32(ctx, 31, 0x171000u);
    ctx->pc = 0x170FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FF8u;
            // 0x170ffc: 0x26720028  addiu       $s2, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171000u; }
        if (ctx->pc != 0x171000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171000u; }
        if (ctx->pc != 0x171000u) { return; }
    }
    ctx->pc = 0x171000u;
label_171000:
    // 0x171000: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x171000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_171004:
    // 0x171004: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x171004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_171008:
    // 0x171008: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x171008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17100c:
    // 0x17100c: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x17100cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_171010:
    // 0x171010: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x171010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171014:
    // 0x171014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171018:
    // 0x171018: 0xc061c20  jal         func_187080
label_17101c:
    if (ctx->pc == 0x17101Cu) {
        ctx->pc = 0x17101Cu;
            // 0x17101c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171020u;
        goto label_171020;
    }
    ctx->pc = 0x171018u;
    SET_GPR_U32(ctx, 31, 0x171020u);
    ctx->pc = 0x17101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171018u;
            // 0x17101c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171020u; }
        if (ctx->pc != 0x171020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171020u; }
        if (ctx->pc != 0x171020u) { return; }
    }
    ctx->pc = 0x171020u;
label_171020:
    // 0x171020: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_171024:
    // 0x171024: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x171024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_171028:
    // 0x171028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17102c:
    // 0x17102c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_171030:
    // 0x171030: 0x40f809  jalr        $v0
label_171034:
    if (ctx->pc == 0x171034u) {
        ctx->pc = 0x171034u;
            // 0x171034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x171038u;
        goto label_171038;
    }
    ctx->pc = 0x171030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171038u);
        ctx->pc = 0x171034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171030u;
            // 0x171034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171038u; }
            if (ctx->pc != 0x171038u) { return; }
        }
        }
    }
    ctx->pc = 0x171038u;
label_171038:
    // 0x171038: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x171038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17103c:
    // 0x17103c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17103cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_171040:
    // 0x171040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171044:
    // 0x171044: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_171048:
    // 0x171048: 0x40f809  jalr        $v0
label_17104c:
    if (ctx->pc == 0x17104Cu) {
        ctx->pc = 0x17104Cu;
            // 0x17104c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171050u;
        goto label_171050;
    }
    ctx->pc = 0x171048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171050u);
        ctx->pc = 0x17104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171048u;
            // 0x17104c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171050u; }
            if (ctx->pc != 0x171050u) { return; }
        }
        }
    }
    ctx->pc = 0x171050u;
label_171050:
    // 0x171050: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x171050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_171054:
    // 0x171054: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x171054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_171058:
    // 0x171058: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x171058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_17105c:
    // 0x17105c: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_171060:
    // 0x171060: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x171060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_171064:
    // 0x171064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_171068:
    // 0x171068: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x171068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_17106c:
    // 0x17106c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17106cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_171070:
    // 0x171070: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x171070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
label_171074:
    // 0x171074: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x171074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_171078:
    // 0x171078: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_17107c:
    if (ctx->pc == 0x17107Cu) {
        ctx->pc = 0x17107Cu;
            // 0x17107c: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x171080u;
        goto label_171080;
    }
    ctx->pc = 0x171078u;
    {
        const bool branch_taken_0x171078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x17107Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171078u;
            // 0x17107c: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171078) {
            ctx->pc = 0x171094u;
            goto label_171094;
        }
    }
    ctx->pc = 0x171080u;
label_171080:
    // 0x171080: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_171084:
    // 0x171084: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_171088:
    if (ctx->pc == 0x171088u) {
        ctx->pc = 0x171088u;
            // 0x171088: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->pc = 0x17108Cu;
        goto label_17108c;
    }
    ctx->pc = 0x171084u;
    {
        const bool branch_taken_0x171084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171084) {
            ctx->pc = 0x171088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171084u;
            // 0x171088: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171098u;
            goto label_171098;
        }
    }
    ctx->pc = 0x17108Cu;
label_17108c:
    // 0x17108c: 0x40f809  jalr        $v0
label_171090:
    if (ctx->pc == 0x171090u) {
        ctx->pc = 0x171090u;
            // 0x171090: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->pc = 0x171094u;
        goto label_171094;
    }
    ctx->pc = 0x17108Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171094u);
        ctx->pc = 0x171090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17108Cu;
            // 0x171090: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171094u; }
            if (ctx->pc != 0x171094u) { return; }
        }
        }
    }
    ctx->pc = 0x171094u;
label_171094:
    // 0x171094: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x171094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_171098:
    // 0x171098: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x171098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17109c:
    // 0x17109c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1710a0:
    if (ctx->pc == 0x1710A0u) {
        ctx->pc = 0x1710A0u;
            // 0x1710a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1710A4u;
        goto label_1710a4;
    }
    ctx->pc = 0x17109Cu;
    {
        const bool branch_taken_0x17109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17109Cu;
            // 0x1710a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17109c) {
            ctx->pc = 0x1710D4u;
            goto label_1710d4;
        }
    }
    ctx->pc = 0x1710A4u;
label_1710a4:
    // 0x1710a4: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1710a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1710a8:
    // 0x1710a8: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1710a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1710ac:
    // 0x1710ac: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1710acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_1710b0:
    // 0x1710b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1710b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1710b4:
    // 0x1710b4: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_1710b8:
    if (ctx->pc == 0x1710B8u) {
        ctx->pc = 0x1710B8u;
            // 0x1710b8: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x1710BCu;
        goto label_1710bc;
    }
    ctx->pc = 0x1710B4u;
    {
        const bool branch_taken_0x1710b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1710b4) {
            ctx->pc = 0x1710B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1710B4u;
            // 0x1710b8: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x1710BCu;
label_1710bc:
    // 0x1710bc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1710bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1710c0:
    // 0x1710c0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1710c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1710c4:
    // 0x1710c4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1710c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1710c8:
    // 0x1710c8: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_1710cc:
    if (ctx->pc == 0x1710CCu) {
        ctx->pc = 0x1710CCu;
            // 0x1710cc: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x1710D0u;
        goto label_1710d0;
    }
    ctx->pc = 0x1710C8u;
    {
        const bool branch_taken_0x1710c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1710c8) {
            ctx->pc = 0x1710CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1710C8u;
            // 0x1710cc: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x1710D0u;
label_1710d0:
    // 0x1710d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1710d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1710d4:
    // 0x1710d4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x1710d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1710d8:
    // 0x1710d8: 0x10000027  b           . + 4 + (0x27 << 2)
label_1710dc:
    if (ctx->pc == 0x1710DCu) {
        ctx->pc = 0x1710DCu;
            // 0x1710dc: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x1710E0u;
        goto label_1710e0;
    }
    ctx->pc = 0x1710D8u;
    {
        const bool branch_taken_0x1710d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710D8u;
            // 0x1710dc: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710d8) {
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x1710E0u;
label_1710e0:
    // 0x1710e0: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_1710e4:
    if (ctx->pc == 0x1710E4u) {
        ctx->pc = 0x1710E8u;
        goto label_1710e8;
    }
    ctx->pc = 0x1710E0u;
    {
        const bool branch_taken_0x1710e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1710e0) {
            ctx->pc = 0x171160u;
            goto label_171160;
        }
    }
    ctx->pc = 0x1710E8u;
label_1710e8:
    // 0x1710e8: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1710e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1710ec:
    // 0x1710ec: 0xc05c83a  jal         func_1720E8
label_1710f0:
    if (ctx->pc == 0x1710F0u) {
        ctx->pc = 0x1710F0u;
            // 0x1710f0: 0x26700028  addiu       $s0, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->pc = 0x1710F4u;
        goto label_1710f4;
    }
    ctx->pc = 0x1710ECu;
    SET_GPR_U32(ctx, 31, 0x1710F4u);
    ctx->pc = 0x1710F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1710ECu;
            // 0x1710f0: 0x26700028  addiu       $s0, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1710F4u; }
        if (ctx->pc != 0x1710F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1710F4u; }
        if (ctx->pc != 0x1710F4u) { return; }
    }
    ctx->pc = 0x1710F4u;
label_1710f4:
    // 0x1710f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1710f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1710f8:
    // 0x1710f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1710f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1710fc:
    // 0x1710fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1710fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171100:
    // 0x171100: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_171104:
    // 0x171104: 0x40f809  jalr        $v0
label_171108:
    if (ctx->pc == 0x171108u) {
        ctx->pc = 0x171108u;
            // 0x171108: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17110Cu;
        goto label_17110c;
    }
    ctx->pc = 0x171104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17110Cu);
        ctx->pc = 0x171108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171104u;
            // 0x171108: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17110Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17110Cu; }
            if (ctx->pc != 0x17110Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17110Cu;
label_17110c:
    // 0x17110c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17110cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_171110:
    // 0x171110: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x171110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_171114:
    // 0x171114: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_171118:
    // 0x171118: 0x8c422e74  lw          $v0, 0x2E74($v0)
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11892)));
label_17111c:
    // 0x17111c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_171120:
    if (ctx->pc == 0x171120u) {
        ctx->pc = 0x171120u;
            // 0x171120: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x171124u;
        goto label_171124;
    }
    ctx->pc = 0x17111Cu;
    {
        const bool branch_taken_0x17111c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x171120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17111Cu;
            // 0x171120: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17111c) {
            ctx->pc = 0x171140u;
            goto label_171140;
        }
    }
    ctx->pc = 0x171124u;
label_171124:
    // 0x171124: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x171124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_171128:
    // 0x171128: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_17112c:
    if (ctx->pc == 0x17112Cu) {
        ctx->pc = 0x17112Cu;
            // 0x17112c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x171130u;
        goto label_171130;
    }
    ctx->pc = 0x171128u;
    {
        const bool branch_taken_0x171128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171128u;
            // 0x17112c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171128) {
            ctx->pc = 0x171144u;
            goto label_171144;
        }
    }
    ctx->pc = 0x171130u;
label_171130:
    // 0x171130: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_171134:
    // 0x171134: 0x10000010  b           . + 4 + (0x10 << 2)
label_171138:
    if (ctx->pc == 0x171138u) {
        ctx->pc = 0x171138u;
            // 0x171138: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x17113Cu;
        goto label_17113c;
    }
    ctx->pc = 0x171134u;
    {
        const bool branch_taken_0x171134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171134u;
            // 0x171138: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171134) {
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x17113Cu;
label_17113c:
    // 0x17113c: 0x0  nop
    ctx->pc = 0x17113cu;
    // NOP
label_171140:
    // 0x171140: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x171140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_171144:
    // 0x171144: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_171148:
    // 0x171148: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x171148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17114c:
    // 0x17114c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_171150:
    if (ctx->pc == 0x171150u) {
        ctx->pc = 0x171150u;
            // 0x171150: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->pc = 0x171154u;
        goto label_171154;
    }
    ctx->pc = 0x17114Cu;
    {
        const bool branch_taken_0x17114c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17114c) {
            ctx->pc = 0x171150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17114Cu;
            // 0x171150: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17117Cu;
            goto label_17117c;
        }
    }
    ctx->pc = 0x171154u;
label_171154:
    // 0x171154: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x171154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_171158:
    // 0x171158: 0x10000007  b           . + 4 + (0x7 << 2)
label_17115c:
    if (ctx->pc == 0x17115Cu) {
        ctx->pc = 0x17115Cu;
            // 0x17115c: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x171160u;
        goto label_171160;
    }
    ctx->pc = 0x171158u;
    {
        const bool branch_taken_0x171158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171158u;
            // 0x17115c: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171158) {
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x171160u;
label_171160:
    // 0x171160: 0xc05c83a  jal         func_1720E8
label_171164:
    if (ctx->pc == 0x171164u) {
        ctx->pc = 0x171168u;
        goto label_171168;
    }
    ctx->pc = 0x171160u;
    SET_GPR_U32(ctx, 31, 0x171168u);
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171168u; }
        if (ctx->pc != 0x171168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171168u; }
        if (ctx->pc != 0x171168u) { return; }
    }
    ctx->pc = 0x171168u;
label_171168:
    // 0x171168: 0x10000004  b           . + 4 + (0x4 << 2)
label_17116c:
    if (ctx->pc == 0x17116Cu) {
        ctx->pc = 0x17116Cu;
            // 0x17116c: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->pc = 0x171170u;
        goto label_171170;
    }
    ctx->pc = 0x171168u;
    {
        const bool branch_taken_0x171168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171168u;
            // 0x17116c: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171168) {
            ctx->pc = 0x17117Cu;
            goto label_17117c;
        }
    }
    ctx->pc = 0x171170u;
label_171170:
    // 0x171170: 0xc05c83a  jal         func_1720E8
label_171174:
    if (ctx->pc == 0x171174u) {
        ctx->pc = 0x171178u;
        goto label_171178;
    }
    ctx->pc = 0x171170u;
    SET_GPR_U32(ctx, 31, 0x171178u);
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171178u; }
        if (ctx->pc != 0x171178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171178u; }
        if (ctx->pc != 0x171178u) { return; }
    }
    ctx->pc = 0x171178u;
label_171178:
    // 0x171178: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x171178u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_17117c:
    // 0x17117c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_171180:
    // 0x171180: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
label_171184:
    if (ctx->pc == 0x171184u) {
        ctx->pc = 0x171184u;
            // 0x171184: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x171188u;
        goto label_171188;
    }
    ctx->pc = 0x171180u;
    {
        const bool branch_taken_0x171180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x171184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171180u;
            // 0x171184: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171180) {
            ctx->pc = 0x1713D4u;
            goto label_1713d4;
        }
    }
    ctx->pc = 0x171188u;
label_171188:
    // 0x171188: 0xc05c834  jal         func_1720D0
label_17118c:
    if (ctx->pc == 0x17118Cu) {
        ctx->pc = 0x171190u;
        goto label_171190;
    }
    ctx->pc = 0x171188u;
    SET_GPR_U32(ctx, 31, 0x171190u);
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171190u; }
        if (ctx->pc != 0x171190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171190u; }
        if (ctx->pc != 0x171190u) { return; }
    }
    ctx->pc = 0x171190u;
label_171190:
    // 0x171190: 0x82620002  lb          $v0, 0x2($s3)
    ctx->pc = 0x171190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_171194:
    // 0x171194: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
label_171198:
    if (ctx->pc == 0x171198u) {
        ctx->pc = 0x171198u;
            // 0x171198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17119Cu;
        goto label_17119c;
    }
    ctx->pc = 0x171194u;
    {
        const bool branch_taken_0x171194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171194u;
            // 0x171198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171194) {
            ctx->pc = 0x1713C8u;
            goto label_1713c8;
        }
    }
    ctx->pc = 0x17119Cu;
label_17119c:
    // 0x17119c: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x17119cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_1711a0:
    // 0x1711a0: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x1711a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_1711a4:
    // 0x1711a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1711a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1711a8:
    // 0x1711a8: 0xc05c83a  jal         func_1720E8
label_1711ac:
    if (ctx->pc == 0x1711ACu) {
        ctx->pc = 0x1711ACu;
            // 0x1711ac: 0xae60002c  sw          $zero, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x1711B0u;
        goto label_1711b0;
    }
    ctx->pc = 0x1711A8u;
    SET_GPR_U32(ctx, 31, 0x1711B0u);
    ctx->pc = 0x1711ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1711A8u;
            // 0x1711ac: 0xae60002c  sw          $zero, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711B0u; }
        if (ctx->pc != 0x1711B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711B0u; }
        if (ctx->pc != 0x1711B0u) { return; }
    }
    ctx->pc = 0x1711B0u;
label_1711b0:
    // 0x1711b0: 0x82620048  lb          $v0, 0x48($s3)
    ctx->pc = 0x1711b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
label_1711b4:
    // 0x1711b4: 0x50510086  beql        $v0, $s1, . + 4 + (0x86 << 2)
label_1711b8:
    if (ctx->pc == 0x1711B8u) {
        ctx->pc = 0x1711B8u;
            // 0x1711b8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1711BCu;
        goto label_1711bc;
    }
    ctx->pc = 0x1711B4u;
    {
        const bool branch_taken_0x1711b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1711b4) {
            ctx->pc = 0x1711B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1711B4u;
            // 0x1711b8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1713D0u;
            goto label_1713d0;
        }
    }
    ctx->pc = 0x1711BCu;
label_1711bc:
    // 0x1711bc: 0x8262004c  lb          $v0, 0x4C($s3)
    ctx->pc = 0x1711bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_1711c0:
    // 0x1711c0: 0x50510083  beql        $v0, $s1, . + 4 + (0x83 << 2)
label_1711c4:
    if (ctx->pc == 0x1711C4u) {
        ctx->pc = 0x1711C4u;
            // 0x1711c4: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1711C8u;
        goto label_1711c8;
    }
    ctx->pc = 0x1711C0u;
    {
        const bool branch_taken_0x1711c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1711c0) {
            ctx->pc = 0x1711C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1711C0u;
            // 0x1711c4: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1713D0u;
            goto label_1713d0;
        }
    }
    ctx->pc = 0x1711C8u;
label_1711c8:
    // 0x1711c8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1711c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1711cc:
    // 0x1711cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1711d0:
    if (ctx->pc == 0x1711D0u) {
        ctx->pc = 0x1711D0u;
            // 0x1711d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1711D4u;
        goto label_1711d4;
    }
    ctx->pc = 0x1711CCu;
    {
        const bool branch_taken_0x1711cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1711D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711CCu;
            // 0x1711d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711cc) {
            ctx->pc = 0x1711E8u;
            goto label_1711e8;
        }
    }
    ctx->pc = 0x1711D4u;
label_1711d4:
    // 0x1711d4: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1711d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1711d8:
    // 0x1711d8: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x1711d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1711dc:
    // 0x1711dc: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1711e0:
    if (ctx->pc == 0x1711E0u) {
        ctx->pc = 0x1711E0u;
            // 0x1711e0: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1711E4u;
        goto label_1711e4;
    }
    ctx->pc = 0x1711DCu;
    {
        const bool branch_taken_0x1711dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711DCu;
            // 0x1711e0: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711dc) {
            ctx->pc = 0x1713D0u;
            goto label_1713d0;
        }
    }
    ctx->pc = 0x1711E4u;
label_1711e4:
    // 0x1711e4: 0x0  nop
    ctx->pc = 0x1711e4u;
    // NOP
label_1711e8:
    // 0x1711e8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1711ec:
    if (ctx->pc == 0x1711ECu) {
        ctx->pc = 0x1711F0u;
        goto label_1711f0;
    }
    ctx->pc = 0x1711E8u;
    {
        const bool branch_taken_0x1711e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1711e8) {
            ctx->pc = 0x1711FCu;
            goto label_1711fc;
        }
    }
    ctx->pc = 0x1711F0u;
label_1711f0:
    // 0x1711f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1711f4:
    // 0x1711f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1711f8:
    if (ctx->pc == 0x1711F8u) {
        ctx->pc = 0x1711F8u;
            // 0x1711f8: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->pc = 0x1711FCu;
        goto label_1711fc;
    }
    ctx->pc = 0x1711F4u;
    {
        const bool branch_taken_0x1711f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1711f4) {
            ctx->pc = 0x1711F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1711F4u;
            // 0x1711f8: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171210u;
            goto label_171210;
        }
    }
    ctx->pc = 0x1711FCu;
label_1711fc:
    // 0x1711fc: 0xc05c3e4  jal         func_170F90
label_171200:
    if (ctx->pc == 0x171200u) {
        ctx->pc = 0x171200u;
            // 0x171200: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x171204u;
        goto label_171204;
    }
    ctx->pc = 0x1711FCu;
    SET_GPR_U32(ctx, 31, 0x171204u);
    ctx->pc = 0x171200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1711FCu;
            // 0x171200: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F90u;
    goto label_170f90;
    ctx->pc = 0x171204u;
label_171204:
    // 0x171204: 0x10000073  b           . + 4 + (0x73 << 2)
label_171208:
    if (ctx->pc == 0x171208u) {
        ctx->pc = 0x171208u;
            // 0x171208: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17120Cu;
        goto label_17120c;
    }
    ctx->pc = 0x171204u;
    {
        const bool branch_taken_0x171204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171204u;
            // 0x171208: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171204) {
            ctx->pc = 0x1713D4u;
            goto label_1713d4;
        }
    }
    ctx->pc = 0x17120Cu;
label_17120c:
    // 0x17120c: 0x0  nop
    ctx->pc = 0x17120cu;
    // NOP
label_171210:
    // 0x171210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_171214:
    // 0x171214: 0x40f809  jalr        $v0
label_171218:
    if (ctx->pc == 0x171218u) {
        ctx->pc = 0x171218u;
            // 0x171218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17121Cu;
        goto label_17121c;
    }
    ctx->pc = 0x171214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17121Cu);
        ctx->pc = 0x171218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171214u;
            // 0x171218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17121Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17121Cu; }
            if (ctx->pc != 0x17121Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17121Cu;
label_17121c:
    // 0x17121c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_171220:
    // 0x171220: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x171220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_171224:
    // 0x171224: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x171224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_171228:
    // 0x171228: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x171228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17122c:
    // 0x17122c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_171230:
    if (ctx->pc == 0x171230u) {
        ctx->pc = 0x171230u;
            // 0x171230: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x171234u;
        goto label_171234;
    }
    ctx->pc = 0x17122Cu;
    {
        const bool branch_taken_0x17122c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17122c) {
            ctx->pc = 0x171230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17122Cu;
            // 0x171230: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171240u;
            goto label_171240;
        }
    }
    ctx->pc = 0x171234u;
label_171234:
    // 0x171234: 0x10000066  b           . + 4 + (0x66 << 2)
label_171238:
    if (ctx->pc == 0x171238u) {
        ctx->pc = 0x171238u;
            // 0x171238: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17123Cu;
        goto label_17123c;
    }
    ctx->pc = 0x171234u;
    {
        const bool branch_taken_0x171234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171234u;
            // 0x171238: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171234) {
            ctx->pc = 0x1713D0u;
            goto label_1713d0;
        }
    }
    ctx->pc = 0x17123Cu;
label_17123c:
    // 0x17123c: 0x0  nop
    ctx->pc = 0x17123cu;
    // NOP
label_171240:
    // 0x171240: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x171240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_171244:
    // 0x171244: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x171244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_171248:
    // 0x171248: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17124c:
    // 0x17124c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x17124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_171250:
    // 0x171250: 0x40f809  jalr        $v0
label_171254:
    if (ctx->pc == 0x171254u) {
        ctx->pc = 0x171254u;
            // 0x171254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171258u;
        goto label_171258;
    }
    ctx->pc = 0x171250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171258u);
        ctx->pc = 0x171254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171250u;
            // 0x171254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171258u; }
            if (ctx->pc != 0x171258u) { return; }
        }
        }
    }
    ctx->pc = 0x171258u;
label_171258:
    // 0x171258: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_17125c:
    // 0x17125c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x17125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_171260:
    // 0x171260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171264:
    // 0x171264: 0x8e67005c  lw          $a3, 0x5C($s3)
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_171268:
    // 0x171268: 0x246407ff  addiu       $a0, $v1, 0x7FF
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_17126c:
    // 0x17126c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x17126cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_171270:
    // 0x171270: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x171270u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_171274:
    // 0x171274: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_171278:
    // 0x171278: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x171278u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_17127c:
    // 0x17127c: 0x382c3  sra         $s0, $v1, 11
    ctx->pc = 0x17127cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 11));
label_171280:
    // 0x171280: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x171280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_171284:
    // 0x171284: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x171284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_171288:
    // 0x171288: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x171288u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_17128c:
    // 0x17128c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_171290:
    // 0x171290: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x171290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_171294:
    // 0x171294: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_171298:
    // 0x171298: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x171298u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_17129c:
    // 0x17129c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1712a0:
    // 0x1712a0: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x1712a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1712a4:
    // 0x1712a4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1712a8:
    // 0x1712a8: 0xc05e358  jal         func_178D60
label_1712ac:
    if (ctx->pc == 0x1712ACu) {
        ctx->pc = 0x1712ACu;
            // 0x1712ac: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
        ctx->pc = 0x1712B0u;
        goto label_1712b0;
    }
    ctx->pc = 0x1712A8u;
    SET_GPR_U32(ctx, 31, 0x1712B0u);
    ctx->pc = 0x1712ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1712A8u;
            // 0x1712ac: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178D60u;
    if (runtime->hasFunction(0x178D60u)) {
        auto targetFn = runtime->lookupFunction(0x178D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712B0u; }
        if (ctx->pc != 0x1712B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D60_0x178d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712B0u; }
        if (ctx->pc != 0x1712B0u) { return; }
    }
    ctx->pc = 0x1712B0u;
label_1712b0:
    // 0x1712b0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1712b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_1712b4:
    // 0x1712b4: 0x8c643ef0  lw          $a0, 0x3EF0($v1)
    ctx->pc = 0x1712b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16112)));
label_1712b8:
    // 0x1712b8: 0x1491000b  bne         $a0, $s1, . + 4 + (0xB << 2)
label_1712bc:
    if (ctx->pc == 0x1712BCu) {
        ctx->pc = 0x1712BCu;
            // 0x1712bc: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x1712C0u;
        goto label_1712c0;
    }
    ctx->pc = 0x1712B8u;
    {
        const bool branch_taken_0x1712b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x1712BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1712B8u;
            // 0x1712bc: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712b8) {
            ctx->pc = 0x1712E8u;
            goto label_1712e8;
        }
    }
    ctx->pc = 0x1712C0u;
label_1712c0:
    // 0x1712c0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1712c4:
    // 0x1712c4: 0xac444410  sw          $a0, 0x4410($v0)
    ctx->pc = 0x1712c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17424), GPR_U32(ctx, 4));
label_1712c8:
    // 0x1712c8: 0x82630003  lb          $v1, 0x3($s3)
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1712cc:
    // 0x1712cc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1712d0:
    if (ctx->pc == 0x1712D0u) {
        ctx->pc = 0x1712D0u;
            // 0x1712d0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x1712D4u;
        goto label_1712d4;
    }
    ctx->pc = 0x1712CCu;
    {
        const bool branch_taken_0x1712cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1712D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1712CCu;
            // 0x1712d0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712cc) {
            ctx->pc = 0x1712E0u;
            goto label_1712e0;
        }
    }
    ctx->pc = 0x1712D4u;
label_1712d4:
    // 0x1712d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1712d8:
    if (ctx->pc == 0x1712D8u) {
        ctx->pc = 0x1712D8u;
            // 0x1712d8: 0xa0404414  sb          $zero, 0x4414($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17428), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1712DCu;
        goto label_1712dc;
    }
    ctx->pc = 0x1712D4u;
    {
        const bool branch_taken_0x1712d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1712D4u;
            // 0x1712d8: 0xa0404414  sb          $zero, 0x4414($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17428), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712d4) {
            ctx->pc = 0x1712E4u;
            goto label_1712e4;
        }
    }
    ctx->pc = 0x1712DCu;
label_1712dc:
    // 0x1712dc: 0x0  nop
    ctx->pc = 0x1712dcu;
    // NOP
label_1712e0:
    // 0x1712e0: 0xa0444414  sb          $a0, 0x4414($v0)
    ctx->pc = 0x1712e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17428), (uint8_t)GPR_U32(ctx, 4));
label_1712e4:
    // 0x1712e4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1712e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1712e8:
    // 0x1712e8: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1712e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1712ec:
    // 0x1712ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1712ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1712f0:
    // 0x1712f0: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
label_1712f4:
    if (ctx->pc == 0x1712F4u) {
        ctx->pc = 0x1712F4u;
            // 0x1712f4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1712F8u;
        goto label_1712f8;
    }
    ctx->pc = 0x1712F0u;
    {
        const bool branch_taken_0x1712f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1712f0) {
            ctx->pc = 0x1712F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1712F0u;
            // 0x1712f4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17131Cu;
            goto label_17131c;
        }
    }
    ctx->pc = 0x1712F8u;
label_1712f8:
    // 0x1712f8: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1712f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1712fc:
    // 0x1712fc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1712fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_171300:
    // 0x171300: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x171300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_171304:
    // 0x171304: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x171304u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_171308:
    // 0x171308: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_17130c:
    // 0x17130c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_171310:
    // 0x171310: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x171310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_171314:
    // 0x171314: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x171314u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_171318:
    // 0x171318: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17131c:
    // 0x17131c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17131cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171320:
    // 0x171320: 0xc05e372  jal         func_178DC8
label_171324:
    if (ctx->pc == 0x171324u) {
        ctx->pc = 0x171324u;
            // 0x171324: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x171328u;
        goto label_171328;
    }
    ctx->pc = 0x171320u;
    SET_GPR_U32(ctx, 31, 0x171328u);
    ctx->pc = 0x171324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171320u;
            // 0x171324: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DC8u;
    if (runtime->hasFunction(0x178DC8u)) {
        auto targetFn = runtime->lookupFunction(0x178DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171328u; }
        if (ctx->pc != 0x171328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DC8_0x178dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171328u; }
        if (ctx->pc != 0x171328u) { return; }
    }
    ctx->pc = 0x171328u;
label_171328:
    // 0x171328: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_17132c:
    // 0x17132c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171330:
    // 0x171330: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x171330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
label_171334:
    // 0x171334: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x171334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_171338:
    // 0x171338: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
label_17133c:
    if (ctx->pc == 0x17133Cu) {
        ctx->pc = 0x17133Cu;
            // 0x17133c: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x171340u;
        goto label_171340;
    }
    ctx->pc = 0x171338u;
    {
        const bool branch_taken_0x171338 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171338u;
            // 0x17133c: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171338) {
            ctx->pc = 0x1713D0u;
            goto label_1713d0;
        }
    }
    ctx->pc = 0x171340u;
label_171340:
    // 0x171340: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_171344:
    // 0x171344: 0x26700028  addiu       $s0, $s3, 0x28
    ctx->pc = 0x171344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_171348:
    // 0x171348: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x171348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17134c:
    // 0x17134c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17134cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171350:
    // 0x171350: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x171350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_171354:
    // 0x171354: 0x40f809  jalr        $v0
label_171358:
    if (ctx->pc == 0x171358u) {
        ctx->pc = 0x171358u;
            // 0x171358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17135Cu;
        goto label_17135c;
    }
    ctx->pc = 0x171354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17135Cu);
        ctx->pc = 0x171358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171354u;
            // 0x171358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17135Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17135Cu; }
            if (ctx->pc != 0x17135Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17135Cu;
label_17135c:
    // 0x17135c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_171360:
    // 0x171360: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x171360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_171364:
    // 0x171364: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x171364u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_171368:
    // 0x171368: 0xc05e3ee  jal         func_178FB8
label_17136c:
    if (ctx->pc == 0x17136Cu) {
        ctx->pc = 0x17136Cu;
            // 0x17136c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x171370u;
        goto label_171370;
    }
    ctx->pc = 0x171368u;
    SET_GPR_U32(ctx, 31, 0x171370u);
    ctx->pc = 0x17136Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171368u;
            // 0x17136c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178FB8u;
    if (runtime->hasFunction(0x178FB8u)) {
        auto targetFn = runtime->lookupFunction(0x178FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171370u; }
        if (ctx->pc != 0x171370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178FB8_0x178fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171370u; }
        if (ctx->pc != 0x171370u) { return; }
    }
    ctx->pc = 0x171370u;
label_171370:
    // 0x171370: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x171370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_171374:
    // 0x171374: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_171378:
    if (ctx->pc == 0x171378u) {
        ctx->pc = 0x171378u;
            // 0x171378: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17137Cu;
        goto label_17137c;
    }
    ctx->pc = 0x171374u;
    {
        const bool branch_taken_0x171374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x171374) {
            ctx->pc = 0x171378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171374u;
            // 0x171378: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1713D4u;
            goto label_1713d4;
        }
    }
    ctx->pc = 0x17137Cu;
label_17137c:
    // 0x17137c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_171380:
    // 0x171380: 0x8c422e74  lw          $v0, 0x2E74($v0)
    ctx->pc = 0x171380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11892)));
label_171384:
    // 0x171384: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_171388:
    if (ctx->pc == 0x171388u) {
        ctx->pc = 0x171388u;
            // 0x171388: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x17138Cu;
        goto label_17138c;
    }
    ctx->pc = 0x171384u;
    {
        const bool branch_taken_0x171384 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x171388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171384u;
            // 0x171388: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171384) {
            ctx->pc = 0x1713A8u;
            goto label_1713a8;
        }
    }
    ctx->pc = 0x17138Cu;
label_17138c:
    // 0x17138c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x17138cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_171390:
    // 0x171390: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_171394:
    if (ctx->pc == 0x171394u) {
        ctx->pc = 0x171394u;
            // 0x171394: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x171398u;
        goto label_171398;
    }
    ctx->pc = 0x171390u;
    {
        const bool branch_taken_0x171390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171390u;
            // 0x171394: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171390) {
            ctx->pc = 0x1713ACu;
            goto label_1713ac;
        }
    }
    ctx->pc = 0x171398u;
label_171398:
    // 0x171398: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17139c:
    // 0x17139c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1713a0:
    if (ctx->pc == 0x1713A0u) {
        ctx->pc = 0x1713A0u;
            // 0x1713a0: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1713A4u;
        goto label_1713a4;
    }
    ctx->pc = 0x17139Cu;
    {
        const bool branch_taken_0x17139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17139Cu;
            // 0x1713a0: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17139c) {
            ctx->pc = 0x1713D0u;
            goto label_1713d0;
        }
    }
    ctx->pc = 0x1713A4u;
label_1713a4:
    // 0x1713a4: 0x0  nop
    ctx->pc = 0x1713a4u;
    // NOP
label_1713a8:
    // 0x1713a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1713a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1713ac:
    // 0x1713ac: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1713acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1713b0:
    // 0x1713b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1713b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1713b4:
    // 0x1713b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1713b8:
    if (ctx->pc == 0x1713B8u) {
        ctx->pc = 0x1713B8u;
            // 0x1713b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1713BCu;
        goto label_1713bc;
    }
    ctx->pc = 0x1713B4u;
    {
        const bool branch_taken_0x1713b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713B4u;
            // 0x1713b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713b4) {
            ctx->pc = 0x1713D4u;
            goto label_1713d4;
        }
    }
    ctx->pc = 0x1713BCu;
label_1713bc:
    // 0x1713bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1713bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1713c0:
    // 0x1713c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1713c4:
    if (ctx->pc == 0x1713C4u) {
        ctx->pc = 0x1713C4u;
            // 0x1713c4: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x1713C8u;
        goto label_1713c8;
    }
    ctx->pc = 0x1713C0u;
    {
        const bool branch_taken_0x1713c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713C0u;
            // 0x1713c4: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713c0) {
            ctx->pc = 0x1713D4u;
            goto label_1713d4;
        }
    }
    ctx->pc = 0x1713C8u;
label_1713c8:
    // 0x1713c8: 0xc05c83a  jal         func_1720E8
label_1713cc:
    if (ctx->pc == 0x1713CCu) {
        ctx->pc = 0x1713D0u;
        goto label_1713d0;
    }
    ctx->pc = 0x1713C8u;
    SET_GPR_U32(ctx, 31, 0x1713D0u);
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713D0u; }
        if (ctx->pc != 0x1713D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713D0u; }
        if (ctx->pc != 0x1713D0u) { return; }
    }
    ctx->pc = 0x1713D0u;
label_1713d0:
    // 0x1713d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1713d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1713d4:
    // 0x1713d4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1713d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1713d8:
    // 0x1713d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1713d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1713dc:
    // 0x1713dc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1713dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1713e0:
    // 0x1713e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1713e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1713e4:
    // 0x1713e4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1713e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1713e8:
    // 0x1713e8: 0x3e00008  jr          $ra
label_1713ec:
    if (ctx->pc == 0x1713ECu) {
        ctx->pc = 0x1713ECu;
            // 0x1713ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1713F0u;
        goto label_fallthrough_0x1713e8;
    }
    ctx->pc = 0x1713E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1713ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713E8u;
            // 0x1713ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1713e8:
    ctx->pc = 0x1713F0u;
}
