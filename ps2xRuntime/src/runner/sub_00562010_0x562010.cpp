#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00562010
// Address: 0x562010 - 0x5625d0
void sub_00562010_0x562010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00562010_0x562010");
#endif

    switch (ctx->pc) {
        case 0x562010u: goto label_562010;
        case 0x562014u: goto label_562014;
        case 0x562018u: goto label_562018;
        case 0x56201cu: goto label_56201c;
        case 0x562020u: goto label_562020;
        case 0x562024u: goto label_562024;
        case 0x562028u: goto label_562028;
        case 0x56202cu: goto label_56202c;
        case 0x562030u: goto label_562030;
        case 0x562034u: goto label_562034;
        case 0x562038u: goto label_562038;
        case 0x56203cu: goto label_56203c;
        case 0x562040u: goto label_562040;
        case 0x562044u: goto label_562044;
        case 0x562048u: goto label_562048;
        case 0x56204cu: goto label_56204c;
        case 0x562050u: goto label_562050;
        case 0x562054u: goto label_562054;
        case 0x562058u: goto label_562058;
        case 0x56205cu: goto label_56205c;
        case 0x562060u: goto label_562060;
        case 0x562064u: goto label_562064;
        case 0x562068u: goto label_562068;
        case 0x56206cu: goto label_56206c;
        case 0x562070u: goto label_562070;
        case 0x562074u: goto label_562074;
        case 0x562078u: goto label_562078;
        case 0x56207cu: goto label_56207c;
        case 0x562080u: goto label_562080;
        case 0x562084u: goto label_562084;
        case 0x562088u: goto label_562088;
        case 0x56208cu: goto label_56208c;
        case 0x562090u: goto label_562090;
        case 0x562094u: goto label_562094;
        case 0x562098u: goto label_562098;
        case 0x56209cu: goto label_56209c;
        case 0x5620a0u: goto label_5620a0;
        case 0x5620a4u: goto label_5620a4;
        case 0x5620a8u: goto label_5620a8;
        case 0x5620acu: goto label_5620ac;
        case 0x5620b0u: goto label_5620b0;
        case 0x5620b4u: goto label_5620b4;
        case 0x5620b8u: goto label_5620b8;
        case 0x5620bcu: goto label_5620bc;
        case 0x5620c0u: goto label_5620c0;
        case 0x5620c4u: goto label_5620c4;
        case 0x5620c8u: goto label_5620c8;
        case 0x5620ccu: goto label_5620cc;
        case 0x5620d0u: goto label_5620d0;
        case 0x5620d4u: goto label_5620d4;
        case 0x5620d8u: goto label_5620d8;
        case 0x5620dcu: goto label_5620dc;
        case 0x5620e0u: goto label_5620e0;
        case 0x5620e4u: goto label_5620e4;
        case 0x5620e8u: goto label_5620e8;
        case 0x5620ecu: goto label_5620ec;
        case 0x5620f0u: goto label_5620f0;
        case 0x5620f4u: goto label_5620f4;
        case 0x5620f8u: goto label_5620f8;
        case 0x5620fcu: goto label_5620fc;
        case 0x562100u: goto label_562100;
        case 0x562104u: goto label_562104;
        case 0x562108u: goto label_562108;
        case 0x56210cu: goto label_56210c;
        case 0x562110u: goto label_562110;
        case 0x562114u: goto label_562114;
        case 0x562118u: goto label_562118;
        case 0x56211cu: goto label_56211c;
        case 0x562120u: goto label_562120;
        case 0x562124u: goto label_562124;
        case 0x562128u: goto label_562128;
        case 0x56212cu: goto label_56212c;
        case 0x562130u: goto label_562130;
        case 0x562134u: goto label_562134;
        case 0x562138u: goto label_562138;
        case 0x56213cu: goto label_56213c;
        case 0x562140u: goto label_562140;
        case 0x562144u: goto label_562144;
        case 0x562148u: goto label_562148;
        case 0x56214cu: goto label_56214c;
        case 0x562150u: goto label_562150;
        case 0x562154u: goto label_562154;
        case 0x562158u: goto label_562158;
        case 0x56215cu: goto label_56215c;
        case 0x562160u: goto label_562160;
        case 0x562164u: goto label_562164;
        case 0x562168u: goto label_562168;
        case 0x56216cu: goto label_56216c;
        case 0x562170u: goto label_562170;
        case 0x562174u: goto label_562174;
        case 0x562178u: goto label_562178;
        case 0x56217cu: goto label_56217c;
        case 0x562180u: goto label_562180;
        case 0x562184u: goto label_562184;
        case 0x562188u: goto label_562188;
        case 0x56218cu: goto label_56218c;
        case 0x562190u: goto label_562190;
        case 0x562194u: goto label_562194;
        case 0x562198u: goto label_562198;
        case 0x56219cu: goto label_56219c;
        case 0x5621a0u: goto label_5621a0;
        case 0x5621a4u: goto label_5621a4;
        case 0x5621a8u: goto label_5621a8;
        case 0x5621acu: goto label_5621ac;
        case 0x5621b0u: goto label_5621b0;
        case 0x5621b4u: goto label_5621b4;
        case 0x5621b8u: goto label_5621b8;
        case 0x5621bcu: goto label_5621bc;
        case 0x5621c0u: goto label_5621c0;
        case 0x5621c4u: goto label_5621c4;
        case 0x5621c8u: goto label_5621c8;
        case 0x5621ccu: goto label_5621cc;
        case 0x5621d0u: goto label_5621d0;
        case 0x5621d4u: goto label_5621d4;
        case 0x5621d8u: goto label_5621d8;
        case 0x5621dcu: goto label_5621dc;
        case 0x5621e0u: goto label_5621e0;
        case 0x5621e4u: goto label_5621e4;
        case 0x5621e8u: goto label_5621e8;
        case 0x5621ecu: goto label_5621ec;
        case 0x5621f0u: goto label_5621f0;
        case 0x5621f4u: goto label_5621f4;
        case 0x5621f8u: goto label_5621f8;
        case 0x5621fcu: goto label_5621fc;
        case 0x562200u: goto label_562200;
        case 0x562204u: goto label_562204;
        case 0x562208u: goto label_562208;
        case 0x56220cu: goto label_56220c;
        case 0x562210u: goto label_562210;
        case 0x562214u: goto label_562214;
        case 0x562218u: goto label_562218;
        case 0x56221cu: goto label_56221c;
        case 0x562220u: goto label_562220;
        case 0x562224u: goto label_562224;
        case 0x562228u: goto label_562228;
        case 0x56222cu: goto label_56222c;
        case 0x562230u: goto label_562230;
        case 0x562234u: goto label_562234;
        case 0x562238u: goto label_562238;
        case 0x56223cu: goto label_56223c;
        case 0x562240u: goto label_562240;
        case 0x562244u: goto label_562244;
        case 0x562248u: goto label_562248;
        case 0x56224cu: goto label_56224c;
        case 0x562250u: goto label_562250;
        case 0x562254u: goto label_562254;
        case 0x562258u: goto label_562258;
        case 0x56225cu: goto label_56225c;
        case 0x562260u: goto label_562260;
        case 0x562264u: goto label_562264;
        case 0x562268u: goto label_562268;
        case 0x56226cu: goto label_56226c;
        case 0x562270u: goto label_562270;
        case 0x562274u: goto label_562274;
        case 0x562278u: goto label_562278;
        case 0x56227cu: goto label_56227c;
        case 0x562280u: goto label_562280;
        case 0x562284u: goto label_562284;
        case 0x562288u: goto label_562288;
        case 0x56228cu: goto label_56228c;
        case 0x562290u: goto label_562290;
        case 0x562294u: goto label_562294;
        case 0x562298u: goto label_562298;
        case 0x56229cu: goto label_56229c;
        case 0x5622a0u: goto label_5622a0;
        case 0x5622a4u: goto label_5622a4;
        case 0x5622a8u: goto label_5622a8;
        case 0x5622acu: goto label_5622ac;
        case 0x5622b0u: goto label_5622b0;
        case 0x5622b4u: goto label_5622b4;
        case 0x5622b8u: goto label_5622b8;
        case 0x5622bcu: goto label_5622bc;
        case 0x5622c0u: goto label_5622c0;
        case 0x5622c4u: goto label_5622c4;
        case 0x5622c8u: goto label_5622c8;
        case 0x5622ccu: goto label_5622cc;
        case 0x5622d0u: goto label_5622d0;
        case 0x5622d4u: goto label_5622d4;
        case 0x5622d8u: goto label_5622d8;
        case 0x5622dcu: goto label_5622dc;
        case 0x5622e0u: goto label_5622e0;
        case 0x5622e4u: goto label_5622e4;
        case 0x5622e8u: goto label_5622e8;
        case 0x5622ecu: goto label_5622ec;
        case 0x5622f0u: goto label_5622f0;
        case 0x5622f4u: goto label_5622f4;
        case 0x5622f8u: goto label_5622f8;
        case 0x5622fcu: goto label_5622fc;
        case 0x562300u: goto label_562300;
        case 0x562304u: goto label_562304;
        case 0x562308u: goto label_562308;
        case 0x56230cu: goto label_56230c;
        case 0x562310u: goto label_562310;
        case 0x562314u: goto label_562314;
        case 0x562318u: goto label_562318;
        case 0x56231cu: goto label_56231c;
        case 0x562320u: goto label_562320;
        case 0x562324u: goto label_562324;
        case 0x562328u: goto label_562328;
        case 0x56232cu: goto label_56232c;
        case 0x562330u: goto label_562330;
        case 0x562334u: goto label_562334;
        case 0x562338u: goto label_562338;
        case 0x56233cu: goto label_56233c;
        case 0x562340u: goto label_562340;
        case 0x562344u: goto label_562344;
        case 0x562348u: goto label_562348;
        case 0x56234cu: goto label_56234c;
        case 0x562350u: goto label_562350;
        case 0x562354u: goto label_562354;
        case 0x562358u: goto label_562358;
        case 0x56235cu: goto label_56235c;
        case 0x562360u: goto label_562360;
        case 0x562364u: goto label_562364;
        case 0x562368u: goto label_562368;
        case 0x56236cu: goto label_56236c;
        case 0x562370u: goto label_562370;
        case 0x562374u: goto label_562374;
        case 0x562378u: goto label_562378;
        case 0x56237cu: goto label_56237c;
        case 0x562380u: goto label_562380;
        case 0x562384u: goto label_562384;
        case 0x562388u: goto label_562388;
        case 0x56238cu: goto label_56238c;
        case 0x562390u: goto label_562390;
        case 0x562394u: goto label_562394;
        case 0x562398u: goto label_562398;
        case 0x56239cu: goto label_56239c;
        case 0x5623a0u: goto label_5623a0;
        case 0x5623a4u: goto label_5623a4;
        case 0x5623a8u: goto label_5623a8;
        case 0x5623acu: goto label_5623ac;
        case 0x5623b0u: goto label_5623b0;
        case 0x5623b4u: goto label_5623b4;
        case 0x5623b8u: goto label_5623b8;
        case 0x5623bcu: goto label_5623bc;
        case 0x5623c0u: goto label_5623c0;
        case 0x5623c4u: goto label_5623c4;
        case 0x5623c8u: goto label_5623c8;
        case 0x5623ccu: goto label_5623cc;
        case 0x5623d0u: goto label_5623d0;
        case 0x5623d4u: goto label_5623d4;
        case 0x5623d8u: goto label_5623d8;
        case 0x5623dcu: goto label_5623dc;
        case 0x5623e0u: goto label_5623e0;
        case 0x5623e4u: goto label_5623e4;
        case 0x5623e8u: goto label_5623e8;
        case 0x5623ecu: goto label_5623ec;
        case 0x5623f0u: goto label_5623f0;
        case 0x5623f4u: goto label_5623f4;
        case 0x5623f8u: goto label_5623f8;
        case 0x5623fcu: goto label_5623fc;
        case 0x562400u: goto label_562400;
        case 0x562404u: goto label_562404;
        case 0x562408u: goto label_562408;
        case 0x56240cu: goto label_56240c;
        case 0x562410u: goto label_562410;
        case 0x562414u: goto label_562414;
        case 0x562418u: goto label_562418;
        case 0x56241cu: goto label_56241c;
        case 0x562420u: goto label_562420;
        case 0x562424u: goto label_562424;
        case 0x562428u: goto label_562428;
        case 0x56242cu: goto label_56242c;
        case 0x562430u: goto label_562430;
        case 0x562434u: goto label_562434;
        case 0x562438u: goto label_562438;
        case 0x56243cu: goto label_56243c;
        case 0x562440u: goto label_562440;
        case 0x562444u: goto label_562444;
        case 0x562448u: goto label_562448;
        case 0x56244cu: goto label_56244c;
        case 0x562450u: goto label_562450;
        case 0x562454u: goto label_562454;
        case 0x562458u: goto label_562458;
        case 0x56245cu: goto label_56245c;
        case 0x562460u: goto label_562460;
        case 0x562464u: goto label_562464;
        case 0x562468u: goto label_562468;
        case 0x56246cu: goto label_56246c;
        case 0x562470u: goto label_562470;
        case 0x562474u: goto label_562474;
        case 0x562478u: goto label_562478;
        case 0x56247cu: goto label_56247c;
        case 0x562480u: goto label_562480;
        case 0x562484u: goto label_562484;
        case 0x562488u: goto label_562488;
        case 0x56248cu: goto label_56248c;
        case 0x562490u: goto label_562490;
        case 0x562494u: goto label_562494;
        case 0x562498u: goto label_562498;
        case 0x56249cu: goto label_56249c;
        case 0x5624a0u: goto label_5624a0;
        case 0x5624a4u: goto label_5624a4;
        case 0x5624a8u: goto label_5624a8;
        case 0x5624acu: goto label_5624ac;
        case 0x5624b0u: goto label_5624b0;
        case 0x5624b4u: goto label_5624b4;
        case 0x5624b8u: goto label_5624b8;
        case 0x5624bcu: goto label_5624bc;
        case 0x5624c0u: goto label_5624c0;
        case 0x5624c4u: goto label_5624c4;
        case 0x5624c8u: goto label_5624c8;
        case 0x5624ccu: goto label_5624cc;
        case 0x5624d0u: goto label_5624d0;
        case 0x5624d4u: goto label_5624d4;
        case 0x5624d8u: goto label_5624d8;
        case 0x5624dcu: goto label_5624dc;
        case 0x5624e0u: goto label_5624e0;
        case 0x5624e4u: goto label_5624e4;
        case 0x5624e8u: goto label_5624e8;
        case 0x5624ecu: goto label_5624ec;
        case 0x5624f0u: goto label_5624f0;
        case 0x5624f4u: goto label_5624f4;
        case 0x5624f8u: goto label_5624f8;
        case 0x5624fcu: goto label_5624fc;
        case 0x562500u: goto label_562500;
        case 0x562504u: goto label_562504;
        case 0x562508u: goto label_562508;
        case 0x56250cu: goto label_56250c;
        case 0x562510u: goto label_562510;
        case 0x562514u: goto label_562514;
        case 0x562518u: goto label_562518;
        case 0x56251cu: goto label_56251c;
        case 0x562520u: goto label_562520;
        case 0x562524u: goto label_562524;
        case 0x562528u: goto label_562528;
        case 0x56252cu: goto label_56252c;
        case 0x562530u: goto label_562530;
        case 0x562534u: goto label_562534;
        case 0x562538u: goto label_562538;
        case 0x56253cu: goto label_56253c;
        case 0x562540u: goto label_562540;
        case 0x562544u: goto label_562544;
        case 0x562548u: goto label_562548;
        case 0x56254cu: goto label_56254c;
        case 0x562550u: goto label_562550;
        case 0x562554u: goto label_562554;
        case 0x562558u: goto label_562558;
        case 0x56255cu: goto label_56255c;
        case 0x562560u: goto label_562560;
        case 0x562564u: goto label_562564;
        case 0x562568u: goto label_562568;
        case 0x56256cu: goto label_56256c;
        case 0x562570u: goto label_562570;
        case 0x562574u: goto label_562574;
        case 0x562578u: goto label_562578;
        case 0x56257cu: goto label_56257c;
        case 0x562580u: goto label_562580;
        case 0x562584u: goto label_562584;
        case 0x562588u: goto label_562588;
        case 0x56258cu: goto label_56258c;
        case 0x562590u: goto label_562590;
        case 0x562594u: goto label_562594;
        case 0x562598u: goto label_562598;
        case 0x56259cu: goto label_56259c;
        case 0x5625a0u: goto label_5625a0;
        case 0x5625a4u: goto label_5625a4;
        case 0x5625a8u: goto label_5625a8;
        case 0x5625acu: goto label_5625ac;
        case 0x5625b0u: goto label_5625b0;
        case 0x5625b4u: goto label_5625b4;
        case 0x5625b8u: goto label_5625b8;
        case 0x5625bcu: goto label_5625bc;
        case 0x5625c0u: goto label_5625c0;
        case 0x5625c4u: goto label_5625c4;
        case 0x5625c8u: goto label_5625c8;
        case 0x5625ccu: goto label_5625cc;
        default: break;
    }

    ctx->pc = 0x562010u;

label_562010:
    // 0x562010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x562010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_562014:
    // 0x562014: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x562014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_562018:
    // 0x562018: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x562018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_56201c:
    // 0x56201c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x56201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_562020:
    // 0x562020: 0xc075128  jal         func_1D44A0
label_562024:
    if (ctx->pc == 0x562024u) {
        ctx->pc = 0x562024u;
            // 0x562024: 0x2484b840  addiu       $a0, $a0, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
        ctx->pc = 0x562028u;
        goto label_562028;
    }
    ctx->pc = 0x562020u;
    SET_GPR_U32(ctx, 31, 0x562028u);
    ctx->pc = 0x562024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562020u;
            // 0x562024: 0x2484b840  addiu       $a0, $a0, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562028u; }
        if (ctx->pc != 0x562028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562028u; }
        if (ctx->pc != 0x562028u) { return; }
    }
    ctx->pc = 0x562028u;
label_562028:
    // 0x562028: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x562028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_56202c:
    // 0x56202c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x56202cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562030:
    // 0x562030: 0x8c86b840  lw          $a2, -0x47C0($a0)
    ctx->pc = 0x562030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948928)));
label_562034:
    // 0x562034: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x562034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_562038:
    // 0x562038: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x562038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_56203c:
    // 0x56203c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56203cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562040:
    // 0x562040: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_562044:
    if (ctx->pc == 0x562044u) {
        ctx->pc = 0x562048u;
        goto label_562048;
    }
    ctx->pc = 0x562040u;
    {
        const bool branch_taken_0x562040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x562040) {
            ctx->pc = 0x562050u;
            goto label_562050;
        }
    }
    ctx->pc = 0x562048u;
label_562048:
    // 0x562048: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56204c:
    // 0x56204c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x56204cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_562050:
    // 0x562050: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562054:
    // 0x562054: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x562054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_562058:
    // 0x562058: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x562058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_56205c:
    // 0x56205c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56205cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562060:
    // 0x562060: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_562064:
    if (ctx->pc == 0x562064u) {
        ctx->pc = 0x562064u;
            // 0x562064: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x562068u;
        goto label_562068;
    }
    ctx->pc = 0x562060u;
    {
        const bool branch_taken_0x562060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x562064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562060u;
            // 0x562064: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562060) {
            ctx->pc = 0x562070u;
            goto label_562070;
        }
    }
    ctx->pc = 0x562068u;
label_562068:
    // 0x562068: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56206c:
    // 0x56206c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x56206cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_562070:
    // 0x562070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562074:
    // 0x562074: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x562074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_562078:
    // 0x562078: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x562078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_56207c:
    // 0x56207c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56207cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562080:
    // 0x562080: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_562084:
    if (ctx->pc == 0x562084u) {
        ctx->pc = 0x562088u;
        goto label_562088;
    }
    ctx->pc = 0x562080u;
    {
        const bool branch_taken_0x562080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x562080) {
            ctx->pc = 0x562090u;
            goto label_562090;
        }
    }
    ctx->pc = 0x562088u;
label_562088:
    // 0x562088: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56208c:
    // 0x56208c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x56208cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_562090:
    // 0x562090: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562094:
    // 0x562094: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x562094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_562098:
    // 0x562098: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x562098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_56209c:
    // 0x56209c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56209cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5620a0:
    // 0x5620a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5620a4:
    if (ctx->pc == 0x5620A4u) {
        ctx->pc = 0x5620A4u;
            // 0x5620a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x5620A8u;
        goto label_5620a8;
    }
    ctx->pc = 0x5620A0u;
    {
        const bool branch_taken_0x5620a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5620a0) {
            ctx->pc = 0x5620A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5620A0u;
            // 0x5620a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5620B4u;
            goto label_5620b4;
        }
    }
    ctx->pc = 0x5620A8u;
label_5620a8:
    // 0x5620a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5620a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5620ac:
    // 0x5620ac: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x5620acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_5620b0:
    // 0x5620b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5620b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5620b4:
    // 0x5620b4: 0x3e00008  jr          $ra
label_5620b8:
    if (ctx->pc == 0x5620B8u) {
        ctx->pc = 0x5620B8u;
            // 0x5620b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x5620BCu;
        goto label_5620bc;
    }
    ctx->pc = 0x5620B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5620B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5620B4u;
            // 0x5620b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5620BCu;
label_5620bc:
    // 0x5620bc: 0x0  nop
    ctx->pc = 0x5620bcu;
    // NOP
label_5620c0:
    // 0x5620c0: 0x3e00008  jr          $ra
label_5620c4:
    if (ctx->pc == 0x5620C4u) {
        ctx->pc = 0x5620C8u;
        goto label_5620c8;
    }
    ctx->pc = 0x5620C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5620C8u;
label_5620c8:
    // 0x5620c8: 0x0  nop
    ctx->pc = 0x5620c8u;
    // NOP
label_5620cc:
    // 0x5620cc: 0x0  nop
    ctx->pc = 0x5620ccu;
    // NOP
label_5620d0:
    // 0x5620d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x5620d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_5620d4:
    // 0x5620d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5620d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5620d8:
    // 0x5620d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x5620d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_5620dc:
    // 0x5620dc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x5620dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_5620e0:
    // 0x5620e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5620e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_5620e4:
    // 0x5620e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5620e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_5620e8:
    // 0x5620e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5620e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5620ec:
    // 0x5620ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5620ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5620f0:
    // 0x5620f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5620f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5620f4:
    // 0x5620f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5620f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5620f8:
    // 0x5620f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5620f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5620fc:
    // 0x5620fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5620fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_562100:
    // 0x562100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x562100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_562104:
    // 0x562104: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x562104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_562108:
    // 0x562108: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_56210c:
    if (ctx->pc == 0x56210Cu) {
        ctx->pc = 0x562110u;
        goto label_562110;
    }
    ctx->pc = 0x562108u;
    {
        const bool branch_taken_0x562108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x562108) {
            ctx->pc = 0x562124u;
            goto label_562124;
        }
    }
    ctx->pc = 0x562110u;
label_562110:
    // 0x562110: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x562110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_562114:
    // 0x562114: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x562114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_562118:
    // 0x562118: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x562118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_56211c:
    // 0x56211c: 0x148300de  bne         $a0, $v1, . + 4 + (0xDE << 2)
label_562120:
    if (ctx->pc == 0x562120u) {
        ctx->pc = 0x562124u;
        goto label_562124;
    }
    ctx->pc = 0x56211Cu;
    {
        const bool branch_taken_0x56211c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x56211c) {
            ctx->pc = 0x562498u;
            goto label_562498;
        }
    }
    ctx->pc = 0x562124u;
label_562124:
    // 0x562124: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x562124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_562128:
    // 0x562128: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x562128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_56212c:
    // 0x56212c: 0x8c46d130  lw          $a2, -0x2ED0($v0)
    ctx->pc = 0x56212cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_562130:
    // 0x562130: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x562130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_562134:
    // 0x562134: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x562134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_562138:
    // 0x562138: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x562138u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
label_56213c:
    // 0x56213c: 0x8c91e378  lw          $s1, -0x1C88($a0)
    ctx->pc = 0x56213cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_562140:
    // 0x562140: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x562140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_562144:
    // 0x562144: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x562144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_562148:
    // 0x562148: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x562148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_56214c:
    // 0x56214c: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x56214cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_562150:
    // 0x562150: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x562150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_562154:
    // 0x562154: 0x8c74b860  lw          $s4, -0x47A0($v1)
    ctx->pc = 0x562154u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948960)));
label_562158:
    // 0x562158: 0x258cde90  addiu       $t4, $t4, -0x2170
    ctx->pc = 0x562158u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958736));
label_56215c:
    // 0x56215c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x56215cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_562160:
    // 0x562160: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x562160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_562164:
    // 0x562164: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x562164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_562168:
    // 0x562168: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x562168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_56216c:
    // 0x56216c: 0x8c56b870  lw          $s6, -0x4790($v0)
    ctx->pc = 0x56216cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948976)));
label_562170:
    // 0x562170: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x562170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_562174:
    // 0x562174: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x562174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_562178:
    // 0x562178: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x562178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_56217c:
    // 0x56217c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x56217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_562180:
    // 0x562180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x562180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_562184:
    // 0x562184: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x562184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_562188:
    // 0x562188: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x562188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_56218c:
    // 0x56218c: 0x245e0090  addiu       $fp, $v0, 0x90
    ctx->pc = 0x56218cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_562190:
    // 0x562190: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x562190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_562194:
    // 0x562194: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x562194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_562198:
    // 0x562198: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x562198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_56219c:
    // 0x56219c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x56219cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_5621a0:
    // 0x5621a0: 0x29090002  slti        $t1, $t0, 0x2
    ctx->pc = 0x5621a0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_5621a4:
    // 0x5621a4: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x5621a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5621a8:
    // 0x5621a8: 0x8c6a003c  lw          $t2, 0x3C($v1)
    ctx->pc = 0x5621a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_5621ac:
    // 0x5621ac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x5621acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5621b0:
    // 0x5621b0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x5621b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_5621b4:
    // 0x5621b4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x5621b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5621b8:
    // 0x5621b8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x5621b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_5621bc:
    // 0x5621bc: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x5621bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_5621c0:
    // 0x5621c0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x5621c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_5621c4:
    // 0x5621c4: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x5621c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_5621c8:
    // 0x5621c8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x5621c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_5621cc:
    // 0x5621cc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x5621ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_5621d0:
    // 0x5621d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x5621d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5621d4:
    // 0x5621d4: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x5621d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_5621d8:
    // 0x5621d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x5621d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5621dc:
    // 0x5621dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x5621dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5621e0:
    // 0x5621e0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x5621e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_5621e4:
    // 0x5621e4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x5621e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_5621e8:
    // 0x5621e8: 0xac6a003c  sw          $t2, 0x3C($v1)
    ctx->pc = 0x5621e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 10));
label_5621ec:
    // 0x5621ec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x5621ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_5621f0:
    // 0x5621f0: 0x8e6b0064  lw          $t3, 0x64($s3)
    ctx->pc = 0x5621f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_5621f4:
    // 0x5621f4: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x5621f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_5621f8:
    // 0x5621f8: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x5621f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_5621fc:
    // 0x5621fc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x5621fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_562200:
    // 0x562200: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x562200u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_562204:
    // 0x562204: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x562204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_562208:
    // 0x562208: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x562208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56220c:
    // 0x56220c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x56220cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_562210:
    // 0x562210: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x562210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562214:
    // 0x562214: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x562214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_562218:
    // 0x562218: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x562218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56221c:
    // 0x56221c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x56221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_562220:
    // 0x562220: 0x8e6b0064  lw          $t3, 0x64($s3)
    ctx->pc = 0x562220u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_562224:
    // 0x562224: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x562224u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_562228:
    // 0x562228: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x562228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_56222c:
    // 0x56222c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x56222cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_562230:
    // 0x562230: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x562230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_562234:
    // 0x562234: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x562234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562238:
    // 0x562238: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x562238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_56223c:
    // 0x56223c: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x56223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562240:
    // 0x562240: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x562240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_562244:
    // 0x562244: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x562244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562248:
    // 0x562248: 0x1520ffd3  bnez        $t1, . + 4 + (-0x2D << 2)
label_56224c:
    if (ctx->pc == 0x56224Cu) {
        ctx->pc = 0x56224Cu;
            // 0x56224c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->pc = 0x562250u;
        goto label_562250;
    }
    ctx->pc = 0x562248u;
    {
        const bool branch_taken_0x562248 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x56224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562248u;
            // 0x56224c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x562248) {
            ctx->pc = 0x562198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_562198;
        }
    }
    ctx->pc = 0x562250u;
label_562250:
    // 0x562250: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x562250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_562254:
    // 0x562254: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x562254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_562258:
    // 0x562258: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x562258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_56225c:
    // 0x56225c: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x56225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_562260:
    // 0x562260: 0xc04f3fc  jal         func_13CFF0
label_562264:
    if (ctx->pc == 0x562264u) {
        ctx->pc = 0x562264u;
            // 0x562264: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x562268u;
        goto label_562268;
    }
    ctx->pc = 0x562260u;
    SET_GPR_U32(ctx, 31, 0x562268u);
    ctx->pc = 0x562264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562260u;
            // 0x562264: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562268u; }
        if (ctx->pc != 0x562268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562268u; }
        if (ctx->pc != 0x562268u) { return; }
    }
    ctx->pc = 0x562268u;
label_562268:
    // 0x562268: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x562268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_56226c:
    // 0x56226c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x56226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_562270:
    // 0x562270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x562270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_562274:
    // 0x562274: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x562274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_562278:
    // 0x562278: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x562278u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_56227c:
    // 0x56227c: 0xc04ce50  jal         func_133940
label_562280:
    if (ctx->pc == 0x562280u) {
        ctx->pc = 0x562280u;
            // 0x562280: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x562284u;
        goto label_562284;
    }
    ctx->pc = 0x56227Cu;
    SET_GPR_U32(ctx, 31, 0x562284u);
    ctx->pc = 0x562280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56227Cu;
            // 0x562280: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562284u; }
        if (ctx->pc != 0x562284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562284u; }
        if (ctx->pc != 0x562284u) { return; }
    }
    ctx->pc = 0x562284u;
label_562284:
    // 0x562284: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x562284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_562288:
    // 0x562288: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x562288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56228c:
    // 0x56228c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x56228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_562290:
    // 0x562290: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x562290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_562294:
    // 0x562294: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x562294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_562298:
    // 0x562298: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x562298u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_56229c:
    // 0x56229c: 0xc07698c  jal         func_1DA630
label_5622a0:
    if (ctx->pc == 0x5622A0u) {
        ctx->pc = 0x5622A0u;
            // 0x5622a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5622A4u;
        goto label_5622a4;
    }
    ctx->pc = 0x56229Cu;
    SET_GPR_U32(ctx, 31, 0x5622A4u);
    ctx->pc = 0x5622A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56229Cu;
            // 0x5622a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5622A4u; }
        if (ctx->pc != 0x5622A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5622A4u; }
        if (ctx->pc != 0x5622A4u) { return; }
    }
    ctx->pc = 0x5622A4u;
label_5622a4:
    // 0x5622a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5622a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5622a8:
    // 0x5622a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_5622ac:
    if (ctx->pc == 0x5622ACu) {
        ctx->pc = 0x5622B0u;
        goto label_5622b0;
    }
    ctx->pc = 0x5622A8u;
    {
        const bool branch_taken_0x5622a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5622a8) {
            ctx->pc = 0x5622B8u;
            goto label_5622b8;
        }
    }
    ctx->pc = 0x5622B0u;
label_5622b0:
    // 0x5622b0: 0x10000035  b           . + 4 + (0x35 << 2)
label_5622b4:
    if (ctx->pc == 0x5622B4u) {
        ctx->pc = 0x5622B4u;
            // 0x5622b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5622B8u;
        goto label_5622b8;
    }
    ctx->pc = 0x5622B0u;
    {
        const bool branch_taken_0x5622b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5622B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5622B0u;
            // 0x5622b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5622b0) {
            ctx->pc = 0x562388u;
            goto label_562388;
        }
    }
    ctx->pc = 0x5622B8u;
label_5622b8:
    // 0x5622b8: 0xc0576f4  jal         func_15DBD0
label_5622bc:
    if (ctx->pc == 0x5622BCu) {
        ctx->pc = 0x5622C0u;
        goto label_5622c0;
    }
    ctx->pc = 0x5622B8u;
    SET_GPR_U32(ctx, 31, 0x5622C0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5622C0u; }
        if (ctx->pc != 0x5622C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5622C0u; }
        if (ctx->pc != 0x5622C0u) { return; }
    }
    ctx->pc = 0x5622C0u;
label_5622c0:
    // 0x5622c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5622c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5622c4:
    // 0x5622c4: 0xc076984  jal         func_1DA610
label_5622c8:
    if (ctx->pc == 0x5622C8u) {
        ctx->pc = 0x5622C8u;
            // 0x5622c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5622CCu;
        goto label_5622cc;
    }
    ctx->pc = 0x5622C4u;
    SET_GPR_U32(ctx, 31, 0x5622CCu);
    ctx->pc = 0x5622C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5622C4u;
            // 0x5622c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5622CCu; }
        if (ctx->pc != 0x5622CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5622CCu; }
        if (ctx->pc != 0x5622CCu) { return; }
    }
    ctx->pc = 0x5622CCu;
label_5622cc:
    // 0x5622cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x5622ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5622d0:
    // 0x5622d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5622d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5622d4:
    // 0x5622d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5622d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5622d8:
    // 0x5622d8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x5622d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_5622dc:
    // 0x5622dc: 0xc442df70  lwc1        $f2, -0x2090($v0)
    ctx->pc = 0x5622dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5622e0:
    // 0x5622e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5622e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5622e4:
    // 0x5622e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5622e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5622e8:
    // 0x5622e8: 0xc441df78  lwc1        $f1, -0x2088($v0)
    ctx->pc = 0x5622e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5622ec:
    // 0x5622ec: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x5622ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_5622f0:
    // 0x5622f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5622f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5622f4:
    // 0x5622f4: 0xc440df7c  lwc1        $f0, -0x2084($v0)
    ctx->pc = 0x5622f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5622f8:
    // 0x5622f8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x5622f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_5622fc:
    // 0x5622fc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5622fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_562300:
    // 0x562300: 0x8c42df74  lw          $v0, -0x208C($v0)
    ctx->pc = 0x562300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958964)));
label_562304:
    // 0x562304: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x562304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_562308:
    // 0x562308: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x562308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_56230c:
    // 0x56230c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x56230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562310:
    // 0x562310: 0xc04cca0  jal         func_133280
label_562314:
    if (ctx->pc == 0x562314u) {
        ctx->pc = 0x562314u;
            // 0x562314: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x562318u;
        goto label_562318;
    }
    ctx->pc = 0x562310u;
    SET_GPR_U32(ctx, 31, 0x562318u);
    ctx->pc = 0x562314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562310u;
            // 0x562314: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562318u; }
        if (ctx->pc != 0x562318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562318u; }
        if (ctx->pc != 0x562318u) { return; }
    }
    ctx->pc = 0x562318u;
label_562318:
    // 0x562318: 0xc076980  jal         func_1DA600
label_56231c:
    if (ctx->pc == 0x56231Cu) {
        ctx->pc = 0x56231Cu;
            // 0x56231c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562320u;
        goto label_562320;
    }
    ctx->pc = 0x562318u;
    SET_GPR_U32(ctx, 31, 0x562320u);
    ctx->pc = 0x56231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562318u;
            // 0x56231c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562320u; }
        if (ctx->pc != 0x562320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562320u; }
        if (ctx->pc != 0x562320u) { return; }
    }
    ctx->pc = 0x562320u;
label_562320:
    // 0x562320: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x562320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_562324:
    // 0x562324: 0xc04cc34  jal         func_1330D0
label_562328:
    if (ctx->pc == 0x562328u) {
        ctx->pc = 0x562328u;
            // 0x562328: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56232Cu;
        goto label_56232c;
    }
    ctx->pc = 0x562324u;
    SET_GPR_U32(ctx, 31, 0x56232Cu);
    ctx->pc = 0x562328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562324u;
            // 0x562328: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56232Cu; }
        if (ctx->pc != 0x56232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56232Cu; }
        if (ctx->pc != 0x56232Cu) { return; }
    }
    ctx->pc = 0x56232Cu;
label_56232c:
    // 0x56232c: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x56232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_562330:
    // 0x562330: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x562330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_562334:
    // 0x562334: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x562334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_562338:
    // 0x562338: 0x0  nop
    ctx->pc = 0x562338u;
    // NOP
label_56233c:
    // 0x56233c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x56233cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_562340:
    // 0x562340: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_562344:
    if (ctx->pc == 0x562344u) {
        ctx->pc = 0x562344u;
            // 0x562344: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562348u;
        goto label_562348;
    }
    ctx->pc = 0x562340u;
    {
        const bool branch_taken_0x562340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x562340) {
            ctx->pc = 0x562344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562340u;
            // 0x562344: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562350u;
            goto label_562350;
        }
    }
    ctx->pc = 0x562348u;
label_562348:
    // 0x562348: 0x1000000f  b           . + 4 + (0xF << 2)
label_56234c:
    if (ctx->pc == 0x56234Cu) {
        ctx->pc = 0x56234Cu;
            // 0x56234c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x562350u;
        goto label_562350;
    }
    ctx->pc = 0x562348u;
    {
        const bool branch_taken_0x562348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562348u;
            // 0x56234c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562348) {
            ctx->pc = 0x562388u;
            goto label_562388;
        }
    }
    ctx->pc = 0x562350u;
label_562350:
    // 0x562350: 0xc07697c  jal         func_1DA5F0
label_562354:
    if (ctx->pc == 0x562354u) {
        ctx->pc = 0x562358u;
        goto label_562358;
    }
    ctx->pc = 0x562350u;
    SET_GPR_U32(ctx, 31, 0x562358u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562358u; }
        if (ctx->pc != 0x562358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562358u; }
        if (ctx->pc != 0x562358u) { return; }
    }
    ctx->pc = 0x562358u;
label_562358:
    // 0x562358: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x562358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_56235c:
    // 0x56235c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x56235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_562360:
    // 0x562360: 0xc04cd60  jal         func_133580
label_562364:
    if (ctx->pc == 0x562364u) {
        ctx->pc = 0x562364u;
            // 0x562364: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x562368u;
        goto label_562368;
    }
    ctx->pc = 0x562360u;
    SET_GPR_U32(ctx, 31, 0x562368u);
    ctx->pc = 0x562364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562360u;
            // 0x562364: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562368u; }
        if (ctx->pc != 0x562368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562368u; }
        if (ctx->pc != 0x562368u) { return; }
    }
    ctx->pc = 0x562368u;
label_562368:
    // 0x562368: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x562368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_56236c:
    // 0x56236c: 0xc04c650  jal         func_131940
label_562370:
    if (ctx->pc == 0x562370u) {
        ctx->pc = 0x562370u;
            // 0x562370: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x562374u;
        goto label_562374;
    }
    ctx->pc = 0x56236Cu;
    SET_GPR_U32(ctx, 31, 0x562374u);
    ctx->pc = 0x562370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56236Cu;
            // 0x562370: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562374u; }
        if (ctx->pc != 0x562374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562374u; }
        if (ctx->pc != 0x562374u) { return; }
    }
    ctx->pc = 0x562374u;
label_562374:
    // 0x562374: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x562374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_562378:
    // 0x562378: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x562378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_56237c:
    // 0x56237c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x56237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_562380:
    // 0x562380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x562380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_562384:
    // 0x562384: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x562384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_562388:
    // 0x562388: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x562388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_56238c:
    // 0x56238c: 0x50200043  beql        $at, $zero, . + 4 + (0x43 << 2)
label_562390:
    if (ctx->pc == 0x562390u) {
        ctx->pc = 0x562390u;
            // 0x562390: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x562394u;
        goto label_562394;
    }
    ctx->pc = 0x56238Cu;
    {
        const bool branch_taken_0x56238c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56238c) {
            ctx->pc = 0x562390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56238Cu;
            // 0x562390: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56249Cu;
            goto label_56249c;
        }
    }
    ctx->pc = 0x562394u;
label_562394:
    // 0x562394: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x562394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_562398:
    // 0x562398: 0xc04e738  jal         func_139CE0
label_56239c:
    if (ctx->pc == 0x56239Cu) {
        ctx->pc = 0x56239Cu;
            // 0x56239c: 0x8c44b864  lw          $a0, -0x479C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948964)));
        ctx->pc = 0x5623A0u;
        goto label_5623a0;
    }
    ctx->pc = 0x562398u;
    SET_GPR_U32(ctx, 31, 0x5623A0u);
    ctx->pc = 0x56239Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562398u;
            // 0x56239c: 0x8c44b864  lw          $a0, -0x479C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948964)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623A0u; }
        if (ctx->pc != 0x5623A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623A0u; }
        if (ctx->pc != 0x5623A0u) { return; }
    }
    ctx->pc = 0x5623A0u;
label_5623a0:
    // 0x5623a0: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x5623a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_5623a4:
    // 0x5623a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5623a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5623a8:
    // 0x5623a8: 0xc04e4a4  jal         func_139290
label_5623ac:
    if (ctx->pc == 0x5623ACu) {
        ctx->pc = 0x5623ACu;
            // 0x5623ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5623B0u;
        goto label_5623b0;
    }
    ctx->pc = 0x5623A8u;
    SET_GPR_U32(ctx, 31, 0x5623B0u);
    ctx->pc = 0x5623ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5623A8u;
            // 0x5623ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623B0u; }
        if (ctx->pc != 0x5623B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623B0u; }
        if (ctx->pc != 0x5623B0u) { return; }
    }
    ctx->pc = 0x5623B0u;
label_5623b0:
    // 0x5623b0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x5623b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_5623b4:
    // 0x5623b4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x5623b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_5623b8:
    // 0x5623b8: 0xc04cd60  jal         func_133580
label_5623bc:
    if (ctx->pc == 0x5623BCu) {
        ctx->pc = 0x5623BCu;
            // 0x5623bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5623C0u;
        goto label_5623c0;
    }
    ctx->pc = 0x5623B8u;
    SET_GPR_U32(ctx, 31, 0x5623C0u);
    ctx->pc = 0x5623BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5623B8u;
            // 0x5623bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623C0u; }
        if (ctx->pc != 0x5623C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623C0u; }
        if (ctx->pc != 0x5623C0u) { return; }
    }
    ctx->pc = 0x5623C0u;
label_5623c0:
    // 0x5623c0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x5623c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_5623c4:
    // 0x5623c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x5623c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_5623c8:
    // 0x5623c8: 0xc04cd60  jal         func_133580
label_5623cc:
    if (ctx->pc == 0x5623CCu) {
        ctx->pc = 0x5623CCu;
            // 0x5623cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5623D0u;
        goto label_5623d0;
    }
    ctx->pc = 0x5623C8u;
    SET_GPR_U32(ctx, 31, 0x5623D0u);
    ctx->pc = 0x5623CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5623C8u;
            // 0x5623cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623D0u; }
        if (ctx->pc != 0x5623D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623D0u; }
        if (ctx->pc != 0x5623D0u) { return; }
    }
    ctx->pc = 0x5623D0u;
label_5623d0:
    // 0x5623d0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5623d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5623d4:
    // 0x5623d4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x5623d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_5623d8:
    // 0x5623d8: 0x8c47b868  lw          $a3, -0x4798($v0)
    ctx->pc = 0x5623d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948968)));
label_5623dc:
    // 0x5623dc: 0xc66c005c  lwc1        $f12, 0x5C($s3)
    ctx->pc = 0x5623dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5623e0:
    // 0x5623e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5623e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5623e4:
    // 0x5623e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5623e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5623e8:
    // 0x5623e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x5623e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5623ec:
    // 0x5623ec: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x5623ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_5623f0:
    // 0x5623f0: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x5623f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_5623f4:
    // 0x5623f4: 0xc04cff4  jal         func_133FD0
label_5623f8:
    if (ctx->pc == 0x5623F8u) {
        ctx->pc = 0x5623F8u;
            // 0x5623f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5623FCu;
        goto label_5623fc;
    }
    ctx->pc = 0x5623F4u;
    SET_GPR_U32(ctx, 31, 0x5623FCu);
    ctx->pc = 0x5623F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5623F4u;
            // 0x5623f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623FCu; }
        if (ctx->pc != 0x5623FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5623FCu; }
        if (ctx->pc != 0x5623FCu) { return; }
    }
    ctx->pc = 0x5623FCu;
label_5623fc:
    // 0x5623fc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5623fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_562400:
    // 0x562400: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x562400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_562404:
    // 0x562404: 0xc66c0060  lwc1        $f12, 0x60($s3)
    ctx->pc = 0x562404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_562408:
    // 0x562408: 0x8c46b874  lw          $a2, -0x478C($v0)
    ctx->pc = 0x562408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948980)));
label_56240c:
    // 0x56240c: 0xc054bbc  jal         func_152EF0
label_562410:
    if (ctx->pc == 0x562410u) {
        ctx->pc = 0x562410u;
            // 0x562410: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562414u;
        goto label_562414;
    }
    ctx->pc = 0x56240Cu;
    SET_GPR_U32(ctx, 31, 0x562414u);
    ctx->pc = 0x562410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56240Cu;
            // 0x562410: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562414u; }
        if (ctx->pc != 0x562414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562414u; }
        if (ctx->pc != 0x562414u) { return; }
    }
    ctx->pc = 0x562414u;
label_562414:
    // 0x562414: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x562414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_562418:
    // 0x562418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x562418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56241c:
    // 0x56241c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x56241cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_562420:
    // 0x562420: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x562420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_562424:
    // 0x562424: 0xc054c2c  jal         func_1530B0
label_562428:
    if (ctx->pc == 0x562428u) {
        ctx->pc = 0x562428u;
            // 0x562428: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x56242Cu;
        goto label_56242c;
    }
    ctx->pc = 0x562424u;
    SET_GPR_U32(ctx, 31, 0x56242Cu);
    ctx->pc = 0x562428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562424u;
            // 0x562428: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56242Cu; }
        if (ctx->pc != 0x56242Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56242Cu; }
        if (ctx->pc != 0x56242Cu) { return; }
    }
    ctx->pc = 0x56242Cu;
label_56242c:
    // 0x56242c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56242cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_562430:
    // 0x562430: 0x27a80178  addiu       $t0, $sp, 0x178
    ctx->pc = 0x562430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_562434:
    // 0x562434: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x562434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_562438:
    // 0x562438: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x562438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_56243c:
    // 0x56243c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x56243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_562440:
    // 0x562440: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x562440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_562444:
    // 0x562444: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x562444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_562448:
    // 0x562448: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x562448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_56244c:
    // 0x56244c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x56244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_562450:
    // 0x562450: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x562450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_562454:
    // 0x562454: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x562454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_562458:
    // 0x562458: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x562458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_56245c:
    // 0x56245c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x56245cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_562460:
    // 0x562460: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x562460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562464:
    // 0x562464: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x562464u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_562468:
    // 0x562468: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x562468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_56246c:
    // 0x56246c: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x56246cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_562470:
    // 0x562470: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x562470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_562474:
    // 0x562474: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x562474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_562478:
    // 0x562478: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x562478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_56247c:
    // 0x56247c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x56247cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_562480:
    // 0x562480: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x562480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_562484:
    // 0x562484: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x562484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562488:
    // 0x562488: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x562488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_56248c:
    // 0x56248c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_562490:
    if (ctx->pc == 0x562490u) {
        ctx->pc = 0x562490u;
            // 0x562490: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->pc = 0x562494u;
        goto label_562494;
    }
    ctx->pc = 0x56248Cu;
    {
        const bool branch_taken_0x56248c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x562490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56248Cu;
            // 0x562490: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56248c) {
            ctx->pc = 0x56243Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56243c;
        }
    }
    ctx->pc = 0x562494u;
label_562494:
    // 0x562494: 0x0  nop
    ctx->pc = 0x562494u;
    // NOP
label_562498:
    // 0x562498: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x562498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_56249c:
    // 0x56249c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x56249cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5624a0:
    // 0x5624a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5624a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5624a4:
    // 0x5624a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5624a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5624a8:
    // 0x5624a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5624a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5624ac:
    // 0x5624ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5624acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5624b0:
    // 0x5624b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5624b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5624b4:
    // 0x5624b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5624b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5624b8:
    // 0x5624b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5624b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5624bc:
    // 0x5624bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5624bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5624c0:
    // 0x5624c0: 0x3e00008  jr          $ra
label_5624c4:
    if (ctx->pc == 0x5624C4u) {
        ctx->pc = 0x5624C4u;
            // 0x5624c4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x5624C8u;
        goto label_5624c8;
    }
    ctx->pc = 0x5624C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5624C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5624C0u;
            // 0x5624c4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5624C8u;
label_5624c8:
    // 0x5624c8: 0x0  nop
    ctx->pc = 0x5624c8u;
    // NOP
label_5624cc:
    // 0x5624cc: 0x0  nop
    ctx->pc = 0x5624ccu;
    // NOP
label_5624d0:
    // 0x5624d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5624d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5624d4:
    // 0x5624d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5624d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5624d8:
    // 0x5624d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5624d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5624dc:
    // 0x5624dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5624dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5624e0:
    // 0x5624e0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5624e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5624e4:
    // 0x5624e4: 0x10a3002e  beq         $a1, $v1, . + 4 + (0x2E << 2)
label_5624e8:
    if (ctx->pc == 0x5624E8u) {
        ctx->pc = 0x5624E8u;
            // 0x5624e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5624ECu;
        goto label_5624ec;
    }
    ctx->pc = 0x5624E4u;
    {
        const bool branch_taken_0x5624e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5624E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5624E4u;
            // 0x5624e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5624e4) {
            ctx->pc = 0x5625A0u;
            goto label_5625a0;
        }
    }
    ctx->pc = 0x5624ECu;
label_5624ec:
    // 0x5624ec: 0x50a00027  beql        $a1, $zero, . + 4 + (0x27 << 2)
label_5624f0:
    if (ctx->pc == 0x5624F0u) {
        ctx->pc = 0x5624F0u;
            // 0x5624f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5624F4u;
        goto label_5624f4;
    }
    ctx->pc = 0x5624ECu;
    {
        const bool branch_taken_0x5624ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5624ec) {
            ctx->pc = 0x5624F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5624ECu;
            // 0x5624f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56258Cu;
            goto label_56258c;
        }
    }
    ctx->pc = 0x5624F4u;
label_5624f4:
    // 0x5624f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5624f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5624f8:
    // 0x5624f8: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_5624fc:
    if (ctx->pc == 0x5624FCu) {
        ctx->pc = 0x562500u;
        goto label_562500;
    }
    ctx->pc = 0x5624F8u;
    {
        const bool branch_taken_0x5624f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5624f8) {
            ctx->pc = 0x562520u;
            goto label_562520;
        }
    }
    ctx->pc = 0x562500u;
label_562500:
    // 0x562500: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x562500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_562504:
    // 0x562504: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_562508:
    if (ctx->pc == 0x562508u) {
        ctx->pc = 0x562508u;
            // 0x562508: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x56250Cu;
        goto label_56250c;
    }
    ctx->pc = 0x562504u;
    {
        const bool branch_taken_0x562504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x562504) {
            ctx->pc = 0x562508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562504u;
            // 0x562508: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562514u;
            goto label_562514;
        }
    }
    ctx->pc = 0x56250Cu;
label_56250c:
    // 0x56250c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_562510:
    if (ctx->pc == 0x562510u) {
        ctx->pc = 0x562510u;
            // 0x562510: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x562514u;
        goto label_562514;
    }
    ctx->pc = 0x56250Cu;
    {
        const bool branch_taken_0x56250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56250Cu;
            // 0x562510: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56250c) {
            ctx->pc = 0x5625B8u;
            goto label_5625b8;
        }
    }
    ctx->pc = 0x562514u;
label_562514:
    // 0x562514: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x562514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_562518:
    // 0x562518: 0x320f809  jalr        $t9
label_56251c:
    if (ctx->pc == 0x56251Cu) {
        ctx->pc = 0x562520u;
        goto label_562520;
    }
    ctx->pc = 0x562518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x562520u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x562520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x562520u; }
            if (ctx->pc != 0x562520u) { return; }
        }
        }
    }
    ctx->pc = 0x562520u;
label_562520:
    // 0x562520: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x562520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_562524:
    // 0x562524: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x562524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_562528:
    // 0x562528: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x562528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_56252c:
    // 0x56252c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x56252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562530:
    // 0x562530: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x562530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_562534:
    // 0x562534: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x562534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_562538:
    // 0x562538: 0xe601005c  swc1        $f1, 0x5C($s0)
    ctx->pc = 0x562538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_56253c:
    // 0x56253c: 0x8c63b868  lw          $v1, -0x4798($v1)
    ctx->pc = 0x56253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948968)));
label_562540:
    // 0x562540: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x562540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562544:
    // 0x562544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x562544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_562548:
    // 0x562548: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_56254c:
    if (ctx->pc == 0x56254Cu) {
        ctx->pc = 0x562550u;
        goto label_562550;
    }
    ctx->pc = 0x562548u;
    {
        const bool branch_taken_0x562548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x562548) {
            ctx->pc = 0x562554u;
            goto label_562554;
        }
    }
    ctx->pc = 0x562550u;
label_562550:
    // 0x562550: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x562550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_562554:
    // 0x562554: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x562554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_562558:
    // 0x562558: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x562558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_56255c:
    // 0x56255c: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x56255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_562560:
    // 0x562560: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x562560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562564:
    // 0x562564: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x562564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_562568:
    // 0x562568: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x562568u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_56256c:
    // 0x56256c: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x56256cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_562570:
    // 0x562570: 0x8c63b874  lw          $v1, -0x478C($v1)
    ctx->pc = 0x562570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948980)));
label_562574:
    // 0x562574: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x562574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_562578:
    // 0x562578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x562578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56257c:
    // 0x56257c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_562580:
    if (ctx->pc == 0x562580u) {
        ctx->pc = 0x562584u;
        goto label_562584;
    }
    ctx->pc = 0x56257Cu;
    {
        const bool branch_taken_0x56257c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56257c) {
            ctx->pc = 0x5625B4u;
            goto label_5625b4;
        }
    }
    ctx->pc = 0x562584u;
label_562584:
    // 0x562584: 0x1000000b  b           . + 4 + (0xB << 2)
label_562588:
    if (ctx->pc == 0x562588u) {
        ctx->pc = 0x562588u;
            // 0x562588: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x56258Cu;
        goto label_56258c;
    }
    ctx->pc = 0x562584u;
    {
        const bool branch_taken_0x562584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562584u;
            // 0x562588: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562584) {
            ctx->pc = 0x5625B4u;
            goto label_5625b4;
        }
    }
    ctx->pc = 0x56258Cu;
label_56258c:
    // 0x56258c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x56258cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_562590:
    // 0x562590: 0x320f809  jalr        $t9
label_562594:
    if (ctx->pc == 0x562594u) {
        ctx->pc = 0x562598u;
        goto label_562598;
    }
    ctx->pc = 0x562590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x562598u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x562598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x562598u; }
            if (ctx->pc != 0x562598u) { return; }
        }
        }
    }
    ctx->pc = 0x562598u;
label_562598:
    // 0x562598: 0x10000006  b           . + 4 + (0x6 << 2)
label_56259c:
    if (ctx->pc == 0x56259Cu) {
        ctx->pc = 0x5625A0u;
        goto label_5625a0;
    }
    ctx->pc = 0x562598u;
    {
        const bool branch_taken_0x562598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x562598) {
            ctx->pc = 0x5625B4u;
            goto label_5625b4;
        }
    }
    ctx->pc = 0x5625A0u;
label_5625a0:
    // 0x5625a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5625a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5625a4:
    // 0x5625a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5625a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5625a8:
    // 0x5625a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x5625a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5625ac:
    // 0x5625ac: 0xc057b7c  jal         func_15EDF0
label_5625b0:
    if (ctx->pc == 0x5625B0u) {
        ctx->pc = 0x5625B0u;
            // 0x5625b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x5625B4u;
        goto label_5625b4;
    }
    ctx->pc = 0x5625ACu;
    SET_GPR_U32(ctx, 31, 0x5625B4u);
    ctx->pc = 0x5625B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5625ACu;
            // 0x5625b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5625B4u; }
        if (ctx->pc != 0x5625B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5625B4u; }
        if (ctx->pc != 0x5625B4u) { return; }
    }
    ctx->pc = 0x5625B4u;
label_5625b4:
    // 0x5625b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5625b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5625b8:
    // 0x5625b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5625b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5625bc:
    // 0x5625bc: 0x3e00008  jr          $ra
label_5625c0:
    if (ctx->pc == 0x5625C0u) {
        ctx->pc = 0x5625C0u;
            // 0x5625c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5625C4u;
        goto label_5625c4;
    }
    ctx->pc = 0x5625BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5625C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5625BCu;
            // 0x5625c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5625C4u;
label_5625c4:
    // 0x5625c4: 0x0  nop
    ctx->pc = 0x5625c4u;
    // NOP
label_5625c8:
    // 0x5625c8: 0x0  nop
    ctx->pc = 0x5625c8u;
    // NOP
label_5625cc:
    // 0x5625cc: 0x0  nop
    ctx->pc = 0x5625ccu;
    // NOP
}
