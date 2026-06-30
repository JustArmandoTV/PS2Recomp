#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00485240
// Address: 0x485240 - 0x485750
void sub_00485240_0x485240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485240_0x485240");
#endif

    switch (ctx->pc) {
        case 0x485240u: goto label_485240;
        case 0x485244u: goto label_485244;
        case 0x485248u: goto label_485248;
        case 0x48524cu: goto label_48524c;
        case 0x485250u: goto label_485250;
        case 0x485254u: goto label_485254;
        case 0x485258u: goto label_485258;
        case 0x48525cu: goto label_48525c;
        case 0x485260u: goto label_485260;
        case 0x485264u: goto label_485264;
        case 0x485268u: goto label_485268;
        case 0x48526cu: goto label_48526c;
        case 0x485270u: goto label_485270;
        case 0x485274u: goto label_485274;
        case 0x485278u: goto label_485278;
        case 0x48527cu: goto label_48527c;
        case 0x485280u: goto label_485280;
        case 0x485284u: goto label_485284;
        case 0x485288u: goto label_485288;
        case 0x48528cu: goto label_48528c;
        case 0x485290u: goto label_485290;
        case 0x485294u: goto label_485294;
        case 0x485298u: goto label_485298;
        case 0x48529cu: goto label_48529c;
        case 0x4852a0u: goto label_4852a0;
        case 0x4852a4u: goto label_4852a4;
        case 0x4852a8u: goto label_4852a8;
        case 0x4852acu: goto label_4852ac;
        case 0x4852b0u: goto label_4852b0;
        case 0x4852b4u: goto label_4852b4;
        case 0x4852b8u: goto label_4852b8;
        case 0x4852bcu: goto label_4852bc;
        case 0x4852c0u: goto label_4852c0;
        case 0x4852c4u: goto label_4852c4;
        case 0x4852c8u: goto label_4852c8;
        case 0x4852ccu: goto label_4852cc;
        case 0x4852d0u: goto label_4852d0;
        case 0x4852d4u: goto label_4852d4;
        case 0x4852d8u: goto label_4852d8;
        case 0x4852dcu: goto label_4852dc;
        case 0x4852e0u: goto label_4852e0;
        case 0x4852e4u: goto label_4852e4;
        case 0x4852e8u: goto label_4852e8;
        case 0x4852ecu: goto label_4852ec;
        case 0x4852f0u: goto label_4852f0;
        case 0x4852f4u: goto label_4852f4;
        case 0x4852f8u: goto label_4852f8;
        case 0x4852fcu: goto label_4852fc;
        case 0x485300u: goto label_485300;
        case 0x485304u: goto label_485304;
        case 0x485308u: goto label_485308;
        case 0x48530cu: goto label_48530c;
        case 0x485310u: goto label_485310;
        case 0x485314u: goto label_485314;
        case 0x485318u: goto label_485318;
        case 0x48531cu: goto label_48531c;
        case 0x485320u: goto label_485320;
        case 0x485324u: goto label_485324;
        case 0x485328u: goto label_485328;
        case 0x48532cu: goto label_48532c;
        case 0x485330u: goto label_485330;
        case 0x485334u: goto label_485334;
        case 0x485338u: goto label_485338;
        case 0x48533cu: goto label_48533c;
        case 0x485340u: goto label_485340;
        case 0x485344u: goto label_485344;
        case 0x485348u: goto label_485348;
        case 0x48534cu: goto label_48534c;
        case 0x485350u: goto label_485350;
        case 0x485354u: goto label_485354;
        case 0x485358u: goto label_485358;
        case 0x48535cu: goto label_48535c;
        case 0x485360u: goto label_485360;
        case 0x485364u: goto label_485364;
        case 0x485368u: goto label_485368;
        case 0x48536cu: goto label_48536c;
        case 0x485370u: goto label_485370;
        case 0x485374u: goto label_485374;
        case 0x485378u: goto label_485378;
        case 0x48537cu: goto label_48537c;
        case 0x485380u: goto label_485380;
        case 0x485384u: goto label_485384;
        case 0x485388u: goto label_485388;
        case 0x48538cu: goto label_48538c;
        case 0x485390u: goto label_485390;
        case 0x485394u: goto label_485394;
        case 0x485398u: goto label_485398;
        case 0x48539cu: goto label_48539c;
        case 0x4853a0u: goto label_4853a0;
        case 0x4853a4u: goto label_4853a4;
        case 0x4853a8u: goto label_4853a8;
        case 0x4853acu: goto label_4853ac;
        case 0x4853b0u: goto label_4853b0;
        case 0x4853b4u: goto label_4853b4;
        case 0x4853b8u: goto label_4853b8;
        case 0x4853bcu: goto label_4853bc;
        case 0x4853c0u: goto label_4853c0;
        case 0x4853c4u: goto label_4853c4;
        case 0x4853c8u: goto label_4853c8;
        case 0x4853ccu: goto label_4853cc;
        case 0x4853d0u: goto label_4853d0;
        case 0x4853d4u: goto label_4853d4;
        case 0x4853d8u: goto label_4853d8;
        case 0x4853dcu: goto label_4853dc;
        case 0x4853e0u: goto label_4853e0;
        case 0x4853e4u: goto label_4853e4;
        case 0x4853e8u: goto label_4853e8;
        case 0x4853ecu: goto label_4853ec;
        case 0x4853f0u: goto label_4853f0;
        case 0x4853f4u: goto label_4853f4;
        case 0x4853f8u: goto label_4853f8;
        case 0x4853fcu: goto label_4853fc;
        case 0x485400u: goto label_485400;
        case 0x485404u: goto label_485404;
        case 0x485408u: goto label_485408;
        case 0x48540cu: goto label_48540c;
        case 0x485410u: goto label_485410;
        case 0x485414u: goto label_485414;
        case 0x485418u: goto label_485418;
        case 0x48541cu: goto label_48541c;
        case 0x485420u: goto label_485420;
        case 0x485424u: goto label_485424;
        case 0x485428u: goto label_485428;
        case 0x48542cu: goto label_48542c;
        case 0x485430u: goto label_485430;
        case 0x485434u: goto label_485434;
        case 0x485438u: goto label_485438;
        case 0x48543cu: goto label_48543c;
        case 0x485440u: goto label_485440;
        case 0x485444u: goto label_485444;
        case 0x485448u: goto label_485448;
        case 0x48544cu: goto label_48544c;
        case 0x485450u: goto label_485450;
        case 0x485454u: goto label_485454;
        case 0x485458u: goto label_485458;
        case 0x48545cu: goto label_48545c;
        case 0x485460u: goto label_485460;
        case 0x485464u: goto label_485464;
        case 0x485468u: goto label_485468;
        case 0x48546cu: goto label_48546c;
        case 0x485470u: goto label_485470;
        case 0x485474u: goto label_485474;
        case 0x485478u: goto label_485478;
        case 0x48547cu: goto label_48547c;
        case 0x485480u: goto label_485480;
        case 0x485484u: goto label_485484;
        case 0x485488u: goto label_485488;
        case 0x48548cu: goto label_48548c;
        case 0x485490u: goto label_485490;
        case 0x485494u: goto label_485494;
        case 0x485498u: goto label_485498;
        case 0x48549cu: goto label_48549c;
        case 0x4854a0u: goto label_4854a0;
        case 0x4854a4u: goto label_4854a4;
        case 0x4854a8u: goto label_4854a8;
        case 0x4854acu: goto label_4854ac;
        case 0x4854b0u: goto label_4854b0;
        case 0x4854b4u: goto label_4854b4;
        case 0x4854b8u: goto label_4854b8;
        case 0x4854bcu: goto label_4854bc;
        case 0x4854c0u: goto label_4854c0;
        case 0x4854c4u: goto label_4854c4;
        case 0x4854c8u: goto label_4854c8;
        case 0x4854ccu: goto label_4854cc;
        case 0x4854d0u: goto label_4854d0;
        case 0x4854d4u: goto label_4854d4;
        case 0x4854d8u: goto label_4854d8;
        case 0x4854dcu: goto label_4854dc;
        case 0x4854e0u: goto label_4854e0;
        case 0x4854e4u: goto label_4854e4;
        case 0x4854e8u: goto label_4854e8;
        case 0x4854ecu: goto label_4854ec;
        case 0x4854f0u: goto label_4854f0;
        case 0x4854f4u: goto label_4854f4;
        case 0x4854f8u: goto label_4854f8;
        case 0x4854fcu: goto label_4854fc;
        case 0x485500u: goto label_485500;
        case 0x485504u: goto label_485504;
        case 0x485508u: goto label_485508;
        case 0x48550cu: goto label_48550c;
        case 0x485510u: goto label_485510;
        case 0x485514u: goto label_485514;
        case 0x485518u: goto label_485518;
        case 0x48551cu: goto label_48551c;
        case 0x485520u: goto label_485520;
        case 0x485524u: goto label_485524;
        case 0x485528u: goto label_485528;
        case 0x48552cu: goto label_48552c;
        case 0x485530u: goto label_485530;
        case 0x485534u: goto label_485534;
        case 0x485538u: goto label_485538;
        case 0x48553cu: goto label_48553c;
        case 0x485540u: goto label_485540;
        case 0x485544u: goto label_485544;
        case 0x485548u: goto label_485548;
        case 0x48554cu: goto label_48554c;
        case 0x485550u: goto label_485550;
        case 0x485554u: goto label_485554;
        case 0x485558u: goto label_485558;
        case 0x48555cu: goto label_48555c;
        case 0x485560u: goto label_485560;
        case 0x485564u: goto label_485564;
        case 0x485568u: goto label_485568;
        case 0x48556cu: goto label_48556c;
        case 0x485570u: goto label_485570;
        case 0x485574u: goto label_485574;
        case 0x485578u: goto label_485578;
        case 0x48557cu: goto label_48557c;
        case 0x485580u: goto label_485580;
        case 0x485584u: goto label_485584;
        case 0x485588u: goto label_485588;
        case 0x48558cu: goto label_48558c;
        case 0x485590u: goto label_485590;
        case 0x485594u: goto label_485594;
        case 0x485598u: goto label_485598;
        case 0x48559cu: goto label_48559c;
        case 0x4855a0u: goto label_4855a0;
        case 0x4855a4u: goto label_4855a4;
        case 0x4855a8u: goto label_4855a8;
        case 0x4855acu: goto label_4855ac;
        case 0x4855b0u: goto label_4855b0;
        case 0x4855b4u: goto label_4855b4;
        case 0x4855b8u: goto label_4855b8;
        case 0x4855bcu: goto label_4855bc;
        case 0x4855c0u: goto label_4855c0;
        case 0x4855c4u: goto label_4855c4;
        case 0x4855c8u: goto label_4855c8;
        case 0x4855ccu: goto label_4855cc;
        case 0x4855d0u: goto label_4855d0;
        case 0x4855d4u: goto label_4855d4;
        case 0x4855d8u: goto label_4855d8;
        case 0x4855dcu: goto label_4855dc;
        case 0x4855e0u: goto label_4855e0;
        case 0x4855e4u: goto label_4855e4;
        case 0x4855e8u: goto label_4855e8;
        case 0x4855ecu: goto label_4855ec;
        case 0x4855f0u: goto label_4855f0;
        case 0x4855f4u: goto label_4855f4;
        case 0x4855f8u: goto label_4855f8;
        case 0x4855fcu: goto label_4855fc;
        case 0x485600u: goto label_485600;
        case 0x485604u: goto label_485604;
        case 0x485608u: goto label_485608;
        case 0x48560cu: goto label_48560c;
        case 0x485610u: goto label_485610;
        case 0x485614u: goto label_485614;
        case 0x485618u: goto label_485618;
        case 0x48561cu: goto label_48561c;
        case 0x485620u: goto label_485620;
        case 0x485624u: goto label_485624;
        case 0x485628u: goto label_485628;
        case 0x48562cu: goto label_48562c;
        case 0x485630u: goto label_485630;
        case 0x485634u: goto label_485634;
        case 0x485638u: goto label_485638;
        case 0x48563cu: goto label_48563c;
        case 0x485640u: goto label_485640;
        case 0x485644u: goto label_485644;
        case 0x485648u: goto label_485648;
        case 0x48564cu: goto label_48564c;
        case 0x485650u: goto label_485650;
        case 0x485654u: goto label_485654;
        case 0x485658u: goto label_485658;
        case 0x48565cu: goto label_48565c;
        case 0x485660u: goto label_485660;
        case 0x485664u: goto label_485664;
        case 0x485668u: goto label_485668;
        case 0x48566cu: goto label_48566c;
        case 0x485670u: goto label_485670;
        case 0x485674u: goto label_485674;
        case 0x485678u: goto label_485678;
        case 0x48567cu: goto label_48567c;
        case 0x485680u: goto label_485680;
        case 0x485684u: goto label_485684;
        case 0x485688u: goto label_485688;
        case 0x48568cu: goto label_48568c;
        case 0x485690u: goto label_485690;
        case 0x485694u: goto label_485694;
        case 0x485698u: goto label_485698;
        case 0x48569cu: goto label_48569c;
        case 0x4856a0u: goto label_4856a0;
        case 0x4856a4u: goto label_4856a4;
        case 0x4856a8u: goto label_4856a8;
        case 0x4856acu: goto label_4856ac;
        case 0x4856b0u: goto label_4856b0;
        case 0x4856b4u: goto label_4856b4;
        case 0x4856b8u: goto label_4856b8;
        case 0x4856bcu: goto label_4856bc;
        case 0x4856c0u: goto label_4856c0;
        case 0x4856c4u: goto label_4856c4;
        case 0x4856c8u: goto label_4856c8;
        case 0x4856ccu: goto label_4856cc;
        case 0x4856d0u: goto label_4856d0;
        case 0x4856d4u: goto label_4856d4;
        case 0x4856d8u: goto label_4856d8;
        case 0x4856dcu: goto label_4856dc;
        case 0x4856e0u: goto label_4856e0;
        case 0x4856e4u: goto label_4856e4;
        case 0x4856e8u: goto label_4856e8;
        case 0x4856ecu: goto label_4856ec;
        case 0x4856f0u: goto label_4856f0;
        case 0x4856f4u: goto label_4856f4;
        case 0x4856f8u: goto label_4856f8;
        case 0x4856fcu: goto label_4856fc;
        case 0x485700u: goto label_485700;
        case 0x485704u: goto label_485704;
        case 0x485708u: goto label_485708;
        case 0x48570cu: goto label_48570c;
        case 0x485710u: goto label_485710;
        case 0x485714u: goto label_485714;
        case 0x485718u: goto label_485718;
        case 0x48571cu: goto label_48571c;
        case 0x485720u: goto label_485720;
        case 0x485724u: goto label_485724;
        case 0x485728u: goto label_485728;
        case 0x48572cu: goto label_48572c;
        case 0x485730u: goto label_485730;
        case 0x485734u: goto label_485734;
        case 0x485738u: goto label_485738;
        case 0x48573cu: goto label_48573c;
        case 0x485740u: goto label_485740;
        case 0x485744u: goto label_485744;
        case 0x485748u: goto label_485748;
        case 0x48574cu: goto label_48574c;
        default: break;
    }

    ctx->pc = 0x485240u;

label_485240:
    // 0x485240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_485244:
    // 0x485244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x485244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_485248:
    // 0x485248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48524c:
    // 0x48524c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485250:
    // 0x485250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x485250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485254:
    // 0x485254: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_485258:
    if (ctx->pc == 0x485258u) {
        ctx->pc = 0x485258u;
            // 0x485258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48525Cu;
        goto label_48525c;
    }
    ctx->pc = 0x485254u;
    {
        const bool branch_taken_0x485254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x485258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485254u;
            // 0x485258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485254) {
            ctx->pc = 0x485388u;
            goto label_485388;
        }
    }
    ctx->pc = 0x48525Cu;
label_48525c:
    // 0x48525c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48525cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_485260:
    // 0x485260: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x485260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_485264:
    // 0x485264: 0x2463f4f0  addiu       $v1, $v1, -0xB10
    ctx->pc = 0x485264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964464));
label_485268:
    // 0x485268: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x485268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_48526c:
    // 0x48526c: 0x2442f528  addiu       $v0, $v0, -0xAD8
    ctx->pc = 0x48526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964520));
label_485270:
    // 0x485270: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x485270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_485274:
    // 0x485274: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x485274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_485278:
    // 0x485278: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x485278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_48527c:
    // 0x48527c: 0xc0407c0  jal         func_101F00
label_485280:
    if (ctx->pc == 0x485280u) {
        ctx->pc = 0x485280u;
            // 0x485280: 0x24a553a0  addiu       $a1, $a1, 0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21408));
        ctx->pc = 0x485284u;
        goto label_485284;
    }
    ctx->pc = 0x48527Cu;
    SET_GPR_U32(ctx, 31, 0x485284u);
    ctx->pc = 0x485280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48527Cu;
            // 0x485280: 0x24a553a0  addiu       $a1, $a1, 0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485284u; }
        if (ctx->pc != 0x485284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485284u; }
        if (ctx->pc != 0x485284u) { return; }
    }
    ctx->pc = 0x485284u;
label_485284:
    // 0x485284: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x485284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_485288:
    // 0x485288: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_48528c:
    if (ctx->pc == 0x48528Cu) {
        ctx->pc = 0x48528Cu;
            // 0x48528c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x485290u;
        goto label_485290;
    }
    ctx->pc = 0x485288u;
    {
        const bool branch_taken_0x485288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485288) {
            ctx->pc = 0x48528Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485288u;
            // 0x48528c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48529Cu;
            goto label_48529c;
        }
    }
    ctx->pc = 0x485290u;
label_485290:
    // 0x485290: 0xc07507c  jal         func_1D41F0
label_485294:
    if (ctx->pc == 0x485294u) {
        ctx->pc = 0x485294u;
            // 0x485294: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x485298u;
        goto label_485298;
    }
    ctx->pc = 0x485290u;
    SET_GPR_U32(ctx, 31, 0x485298u);
    ctx->pc = 0x485294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485290u;
            // 0x485294: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485298u; }
        if (ctx->pc != 0x485298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485298u; }
        if (ctx->pc != 0x485298u) { return; }
    }
    ctx->pc = 0x485298u;
label_485298:
    // 0x485298: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x485298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_48529c:
    // 0x48529c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4852a0:
    if (ctx->pc == 0x4852A0u) {
        ctx->pc = 0x4852A0u;
            // 0x4852a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4852A4u;
        goto label_4852a4;
    }
    ctx->pc = 0x48529Cu;
    {
        const bool branch_taken_0x48529c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48529c) {
            ctx->pc = 0x4852A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48529Cu;
            // 0x4852a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4852CCu;
            goto label_4852cc;
        }
    }
    ctx->pc = 0x4852A4u;
label_4852a4:
    // 0x4852a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4852a8:
    if (ctx->pc == 0x4852A8u) {
        ctx->pc = 0x4852ACu;
        goto label_4852ac;
    }
    ctx->pc = 0x4852A4u;
    {
        const bool branch_taken_0x4852a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852a4) {
            ctx->pc = 0x4852C8u;
            goto label_4852c8;
        }
    }
    ctx->pc = 0x4852ACu;
label_4852ac:
    // 0x4852ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4852b0:
    if (ctx->pc == 0x4852B0u) {
        ctx->pc = 0x4852B4u;
        goto label_4852b4;
    }
    ctx->pc = 0x4852ACu;
    {
        const bool branch_taken_0x4852ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852ac) {
            ctx->pc = 0x4852C8u;
            goto label_4852c8;
        }
    }
    ctx->pc = 0x4852B4u;
label_4852b4:
    // 0x4852b4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4852b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4852b8:
    // 0x4852b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4852bc:
    if (ctx->pc == 0x4852BCu) {
        ctx->pc = 0x4852C0u;
        goto label_4852c0;
    }
    ctx->pc = 0x4852B8u;
    {
        const bool branch_taken_0x4852b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852b8) {
            ctx->pc = 0x4852C8u;
            goto label_4852c8;
        }
    }
    ctx->pc = 0x4852C0u;
label_4852c0:
    // 0x4852c0: 0xc0400a8  jal         func_1002A0
label_4852c4:
    if (ctx->pc == 0x4852C4u) {
        ctx->pc = 0x4852C8u;
        goto label_4852c8;
    }
    ctx->pc = 0x4852C0u;
    SET_GPR_U32(ctx, 31, 0x4852C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4852C8u; }
        if (ctx->pc != 0x4852C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4852C8u; }
        if (ctx->pc != 0x4852C8u) { return; }
    }
    ctx->pc = 0x4852C8u;
label_4852c8:
    // 0x4852c8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4852c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4852cc:
    // 0x4852cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4852d0:
    if (ctx->pc == 0x4852D0u) {
        ctx->pc = 0x4852D0u;
            // 0x4852d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4852D4u;
        goto label_4852d4;
    }
    ctx->pc = 0x4852CCu;
    {
        const bool branch_taken_0x4852cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852cc) {
            ctx->pc = 0x4852D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4852CCu;
            // 0x4852d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4852FCu;
            goto label_4852fc;
        }
    }
    ctx->pc = 0x4852D4u;
label_4852d4:
    // 0x4852d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4852d8:
    if (ctx->pc == 0x4852D8u) {
        ctx->pc = 0x4852DCu;
        goto label_4852dc;
    }
    ctx->pc = 0x4852D4u;
    {
        const bool branch_taken_0x4852d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852d4) {
            ctx->pc = 0x4852F8u;
            goto label_4852f8;
        }
    }
    ctx->pc = 0x4852DCu;
label_4852dc:
    // 0x4852dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4852e0:
    if (ctx->pc == 0x4852E0u) {
        ctx->pc = 0x4852E4u;
        goto label_4852e4;
    }
    ctx->pc = 0x4852DCu;
    {
        const bool branch_taken_0x4852dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852dc) {
            ctx->pc = 0x4852F8u;
            goto label_4852f8;
        }
    }
    ctx->pc = 0x4852E4u;
label_4852e4:
    // 0x4852e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4852e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4852e8:
    // 0x4852e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4852ec:
    if (ctx->pc == 0x4852ECu) {
        ctx->pc = 0x4852F0u;
        goto label_4852f0;
    }
    ctx->pc = 0x4852E8u;
    {
        const bool branch_taken_0x4852e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852e8) {
            ctx->pc = 0x4852F8u;
            goto label_4852f8;
        }
    }
    ctx->pc = 0x4852F0u;
label_4852f0:
    // 0x4852f0: 0xc0400a8  jal         func_1002A0
label_4852f4:
    if (ctx->pc == 0x4852F4u) {
        ctx->pc = 0x4852F8u;
        goto label_4852f8;
    }
    ctx->pc = 0x4852F0u;
    SET_GPR_U32(ctx, 31, 0x4852F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4852F8u; }
        if (ctx->pc != 0x4852F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4852F8u; }
        if (ctx->pc != 0x4852F8u) { return; }
    }
    ctx->pc = 0x4852F8u;
label_4852f8:
    // 0x4852f8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4852f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4852fc:
    // 0x4852fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_485300:
    if (ctx->pc == 0x485300u) {
        ctx->pc = 0x485304u;
        goto label_485304;
    }
    ctx->pc = 0x4852FCu;
    {
        const bool branch_taken_0x4852fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4852fc) {
            ctx->pc = 0x485318u;
            goto label_485318;
        }
    }
    ctx->pc = 0x485304u;
label_485304:
    // 0x485304: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x485304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_485308:
    // 0x485308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x485308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48530c:
    // 0x48530c: 0x2463f4e0  addiu       $v1, $v1, -0xB20
    ctx->pc = 0x48530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964448));
label_485310:
    // 0x485310: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x485310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_485314:
    // 0x485314: 0xac407ba0  sw          $zero, 0x7BA0($v0)
    ctx->pc = 0x485314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31648), GPR_U32(ctx, 0));
label_485318:
    // 0x485318: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_48531c:
    if (ctx->pc == 0x48531Cu) {
        ctx->pc = 0x48531Cu;
            // 0x48531c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x485320u;
        goto label_485320;
    }
    ctx->pc = 0x485318u;
    {
        const bool branch_taken_0x485318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x485318) {
            ctx->pc = 0x48531Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485318u;
            // 0x48531c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485374u;
            goto label_485374;
        }
    }
    ctx->pc = 0x485320u;
label_485320:
    // 0x485320: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x485320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_485324:
    // 0x485324: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x485324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_485328:
    // 0x485328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x485328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48532c:
    // 0x48532c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x48532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_485330:
    // 0x485330: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_485334:
    if (ctx->pc == 0x485334u) {
        ctx->pc = 0x485334u;
            // 0x485334: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x485338u;
        goto label_485338;
    }
    ctx->pc = 0x485330u;
    {
        const bool branch_taken_0x485330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x485330) {
            ctx->pc = 0x485334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485330u;
            // 0x485334: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48534Cu;
            goto label_48534c;
        }
    }
    ctx->pc = 0x485338u;
label_485338:
    // 0x485338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x485338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48533c:
    // 0x48533c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48533cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_485340:
    // 0x485340: 0x320f809  jalr        $t9
label_485344:
    if (ctx->pc == 0x485344u) {
        ctx->pc = 0x485344u;
            // 0x485344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x485348u;
        goto label_485348;
    }
    ctx->pc = 0x485340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485348u);
        ctx->pc = 0x485344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485340u;
            // 0x485344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x485348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485348u; }
            if (ctx->pc != 0x485348u) { return; }
        }
        }
    }
    ctx->pc = 0x485348u;
label_485348:
    // 0x485348: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x485348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_48534c:
    // 0x48534c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_485350:
    if (ctx->pc == 0x485350u) {
        ctx->pc = 0x485350u;
            // 0x485350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485354u;
        goto label_485354;
    }
    ctx->pc = 0x48534Cu;
    {
        const bool branch_taken_0x48534c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48534c) {
            ctx->pc = 0x485350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48534Cu;
            // 0x485350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485368u;
            goto label_485368;
        }
    }
    ctx->pc = 0x485354u;
label_485354:
    // 0x485354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x485354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_485358:
    // 0x485358: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x485358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48535c:
    // 0x48535c: 0x320f809  jalr        $t9
label_485360:
    if (ctx->pc == 0x485360u) {
        ctx->pc = 0x485360u;
            // 0x485360: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x485364u;
        goto label_485364;
    }
    ctx->pc = 0x48535Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485364u);
        ctx->pc = 0x485360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48535Cu;
            // 0x485360: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x485364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485364u; }
            if (ctx->pc != 0x485364u) { return; }
        }
        }
    }
    ctx->pc = 0x485364u;
label_485364:
    // 0x485364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485368:
    // 0x485368: 0xc075bf8  jal         func_1D6FE0
label_48536c:
    if (ctx->pc == 0x48536Cu) {
        ctx->pc = 0x48536Cu;
            // 0x48536c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485370u;
        goto label_485370;
    }
    ctx->pc = 0x485368u;
    SET_GPR_U32(ctx, 31, 0x485370u);
    ctx->pc = 0x48536Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485368u;
            // 0x48536c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485370u; }
        if (ctx->pc != 0x485370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485370u; }
        if (ctx->pc != 0x485370u) { return; }
    }
    ctx->pc = 0x485370u;
label_485370:
    // 0x485370: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x485370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_485374:
    // 0x485374: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x485374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_485378:
    // 0x485378: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48537c:
    if (ctx->pc == 0x48537Cu) {
        ctx->pc = 0x48537Cu;
            // 0x48537c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485380u;
        goto label_485380;
    }
    ctx->pc = 0x485378u;
    {
        const bool branch_taken_0x485378 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x485378) {
            ctx->pc = 0x48537Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485378u;
            // 0x48537c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48538Cu;
            goto label_48538c;
        }
    }
    ctx->pc = 0x485380u;
label_485380:
    // 0x485380: 0xc0400a8  jal         func_1002A0
label_485384:
    if (ctx->pc == 0x485384u) {
        ctx->pc = 0x485384u;
            // 0x485384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485388u;
        goto label_485388;
    }
    ctx->pc = 0x485380u;
    SET_GPR_U32(ctx, 31, 0x485388u);
    ctx->pc = 0x485384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485380u;
            // 0x485384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485388u; }
        if (ctx->pc != 0x485388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485388u; }
        if (ctx->pc != 0x485388u) { return; }
    }
    ctx->pc = 0x485388u;
label_485388:
    // 0x485388: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x485388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48538c:
    // 0x48538c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_485390:
    // 0x485390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485394:
    // 0x485394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485398:
    // 0x485398: 0x3e00008  jr          $ra
label_48539c:
    if (ctx->pc == 0x48539Cu) {
        ctx->pc = 0x48539Cu;
            // 0x48539c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4853A0u;
        goto label_4853a0;
    }
    ctx->pc = 0x485398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485398u;
            // 0x48539c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4853A0u;
label_4853a0:
    // 0x4853a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4853a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4853a4:
    // 0x4853a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4853a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4853a8:
    // 0x4853a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4853a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4853ac:
    // 0x4853ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4853acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4853b0:
    // 0x4853b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4853b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4853b4:
    // 0x4853b4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_4853b8:
    if (ctx->pc == 0x4853B8u) {
        ctx->pc = 0x4853B8u;
            // 0x4853b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4853BCu;
        goto label_4853bc;
    }
    ctx->pc = 0x4853B4u;
    {
        const bool branch_taken_0x4853b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4853B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4853B4u;
            // 0x4853b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4853b4) {
            ctx->pc = 0x485428u;
            goto label_485428;
        }
    }
    ctx->pc = 0x4853BCu;
label_4853bc:
    // 0x4853bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4853bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4853c0:
    // 0x4853c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4853c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4853c4:
    // 0x4853c4: 0x2463f430  addiu       $v1, $v1, -0xBD0
    ctx->pc = 0x4853c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964272));
label_4853c8:
    // 0x4853c8: 0x2442f470  addiu       $v0, $v0, -0xB90
    ctx->pc = 0x4853c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964336));
label_4853cc:
    // 0x4853cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4853ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4853d0:
    // 0x4853d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4853d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4853d4:
    // 0x4853d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4853d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4853d8:
    // 0x4853d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4853d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4853dc:
    // 0x4853dc: 0x320f809  jalr        $t9
label_4853e0:
    if (ctx->pc == 0x4853E0u) {
        ctx->pc = 0x4853E4u;
        goto label_4853e4;
    }
    ctx->pc = 0x4853DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4853E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4853E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4853E4u; }
            if (ctx->pc != 0x4853E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4853E4u;
label_4853e4:
    // 0x4853e4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4853e8:
    if (ctx->pc == 0x4853E8u) {
        ctx->pc = 0x4853E8u;
            // 0x4853e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4853ECu;
        goto label_4853ec;
    }
    ctx->pc = 0x4853E4u;
    {
        const bool branch_taken_0x4853e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4853e4) {
            ctx->pc = 0x4853E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4853E4u;
            // 0x4853e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485414u;
            goto label_485414;
        }
    }
    ctx->pc = 0x4853ECu;
label_4853ec:
    // 0x4853ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4853ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4853f0:
    // 0x4853f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4853f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4853f4:
    // 0x4853f4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4853f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4853f8:
    // 0x4853f8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4853f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4853fc:
    // 0x4853fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4853fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_485400:
    // 0x485400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485404:
    // 0x485404: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x485404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_485408:
    // 0x485408: 0xc0aee40  jal         func_2BB900
label_48540c:
    if (ctx->pc == 0x48540Cu) {
        ctx->pc = 0x48540Cu;
            // 0x48540c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485410u;
        goto label_485410;
    }
    ctx->pc = 0x485408u;
    SET_GPR_U32(ctx, 31, 0x485410u);
    ctx->pc = 0x48540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485408u;
            // 0x48540c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485410u; }
        if (ctx->pc != 0x485410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485410u; }
        if (ctx->pc != 0x485410u) { return; }
    }
    ctx->pc = 0x485410u;
label_485410:
    // 0x485410: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x485410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_485414:
    // 0x485414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x485414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_485418:
    // 0x485418: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48541c:
    if (ctx->pc == 0x48541Cu) {
        ctx->pc = 0x48541Cu;
            // 0x48541c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485420u;
        goto label_485420;
    }
    ctx->pc = 0x485418u;
    {
        const bool branch_taken_0x485418 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x485418) {
            ctx->pc = 0x48541Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485418u;
            // 0x48541c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48542Cu;
            goto label_48542c;
        }
    }
    ctx->pc = 0x485420u;
label_485420:
    // 0x485420: 0xc0400a8  jal         func_1002A0
label_485424:
    if (ctx->pc == 0x485424u) {
        ctx->pc = 0x485424u;
            // 0x485424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485428u;
        goto label_485428;
    }
    ctx->pc = 0x485420u;
    SET_GPR_U32(ctx, 31, 0x485428u);
    ctx->pc = 0x485424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485420u;
            // 0x485424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485428u; }
        if (ctx->pc != 0x485428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485428u; }
        if (ctx->pc != 0x485428u) { return; }
    }
    ctx->pc = 0x485428u;
label_485428:
    // 0x485428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48542c:
    // 0x48542c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48542cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_485430:
    // 0x485430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485434:
    // 0x485434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485438:
    // 0x485438: 0x3e00008  jr          $ra
label_48543c:
    if (ctx->pc == 0x48543Cu) {
        ctx->pc = 0x48543Cu;
            // 0x48543c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x485440u;
        goto label_485440;
    }
    ctx->pc = 0x485438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485438u;
            // 0x48543c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485440u;
label_485440:
    // 0x485440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x485440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_485444:
    // 0x485444: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x485444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_485448:
    // 0x485448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x485448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48544c:
    // 0x48544c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_485450:
    // 0x485450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_485454:
    // 0x485454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485458:
    // 0x485458: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x485458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_48545c:
    // 0x48545c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_485460:
    if (ctx->pc == 0x485460u) {
        ctx->pc = 0x485460u;
            // 0x485460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485464u;
        goto label_485464;
    }
    ctx->pc = 0x48545Cu;
    {
        const bool branch_taken_0x48545c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x485460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48545Cu;
            // 0x485460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48545c) {
            ctx->pc = 0x485498u;
            goto label_485498;
        }
    }
    ctx->pc = 0x485464u;
label_485464:
    // 0x485464: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x485464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485468:
    // 0x485468: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x485468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48546c:
    // 0x48546c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x48546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_485470:
    // 0x485470: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x485470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_485474:
    // 0x485474: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x485474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_485478:
    // 0x485478: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x485478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48547c:
    // 0x48547c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x48547cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_485480:
    // 0x485480: 0x320f809  jalr        $t9
label_485484:
    if (ctx->pc == 0x485484u) {
        ctx->pc = 0x485488u;
        goto label_485488;
    }
    ctx->pc = 0x485480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485488u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x485488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485488u; }
            if (ctx->pc != 0x485488u) { return; }
        }
        }
    }
    ctx->pc = 0x485488u;
label_485488:
    // 0x485488: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x485488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48548c:
    // 0x48548c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x48548cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_485490:
    // 0x485490: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_485494:
    if (ctx->pc == 0x485494u) {
        ctx->pc = 0x485494u;
            // 0x485494: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x485498u;
        goto label_485498;
    }
    ctx->pc = 0x485490u;
    {
        const bool branch_taken_0x485490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x485494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485490u;
            // 0x485494: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485490) {
            ctx->pc = 0x48546Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48546c;
        }
    }
    ctx->pc = 0x485498u;
label_485498:
    // 0x485498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x485498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48549c:
    // 0x48549c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48549cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4854a0:
    // 0x4854a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4854a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4854a4:
    // 0x4854a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4854a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4854a8:
    // 0x4854a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4854a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4854ac:
    // 0x4854ac: 0x3e00008  jr          $ra
label_4854b0:
    if (ctx->pc == 0x4854B0u) {
        ctx->pc = 0x4854B0u;
            // 0x4854b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4854B4u;
        goto label_4854b4;
    }
    ctx->pc = 0x4854ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4854B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4854ACu;
            // 0x4854b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4854B4u;
label_4854b4:
    // 0x4854b4: 0x0  nop
    ctx->pc = 0x4854b4u;
    // NOP
label_4854b8:
    // 0x4854b8: 0x0  nop
    ctx->pc = 0x4854b8u;
    // NOP
label_4854bc:
    // 0x4854bc: 0x0  nop
    ctx->pc = 0x4854bcu;
    // NOP
label_4854c0:
    // 0x4854c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4854c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4854c4:
    // 0x4854c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4854c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4854c8:
    // 0x4854c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4854c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4854cc:
    // 0x4854cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4854ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4854d0:
    // 0x4854d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4854d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4854d4:
    // 0x4854d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4854d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4854d8:
    // 0x4854d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4854d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4854dc:
    // 0x4854dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4854dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4854e0:
    // 0x4854e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4854e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4854e4:
    // 0x4854e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4854e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4854e8:
    // 0x4854e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4854e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4854ec:
    // 0x4854ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4854ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4854f0:
    // 0x4854f0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4854f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4854f4:
    // 0x4854f4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4854f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4854f8:
    // 0x4854f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4854f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4854fc:
    // 0x4854fc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_485500:
    if (ctx->pc == 0x485500u) {
        ctx->pc = 0x485500u;
            // 0x485500: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485504u;
        goto label_485504;
    }
    ctx->pc = 0x4854FCu;
    {
        const bool branch_taken_0x4854fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x485500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4854FCu;
            // 0x485500: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4854fc) {
            ctx->pc = 0x485540u;
            goto label_485540;
        }
    }
    ctx->pc = 0x485504u;
label_485504:
    // 0x485504: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x485504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_485508:
    // 0x485508: 0x50a3005a  beql        $a1, $v1, . + 4 + (0x5A << 2)
label_48550c:
    if (ctx->pc == 0x48550Cu) {
        ctx->pc = 0x48550Cu;
            // 0x48550c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x485510u;
        goto label_485510;
    }
    ctx->pc = 0x485508u;
    {
        const bool branch_taken_0x485508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x485508) {
            ctx->pc = 0x48550Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485508u;
            // 0x48550c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485674u;
            goto label_485674;
        }
    }
    ctx->pc = 0x485510u;
label_485510:
    // 0x485510: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x485510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_485514:
    // 0x485514: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_485518:
    if (ctx->pc == 0x485518u) {
        ctx->pc = 0x485518u;
            // 0x485518: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x48551Cu;
        goto label_48551c;
    }
    ctx->pc = 0x485514u;
    {
        const bool branch_taken_0x485514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x485514) {
            ctx->pc = 0x485518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485514u;
            // 0x485518: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485524u;
            goto label_485524;
        }
    }
    ctx->pc = 0x48551Cu;
label_48551c:
    // 0x48551c: 0x10000054  b           . + 4 + (0x54 << 2)
label_485520:
    if (ctx->pc == 0x485520u) {
        ctx->pc = 0x485524u;
        goto label_485524;
    }
    ctx->pc = 0x48551Cu;
    {
        const bool branch_taken_0x48551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48551c) {
            ctx->pc = 0x485670u;
            goto label_485670;
        }
    }
    ctx->pc = 0x485524u;
label_485524:
    // 0x485524: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x485524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_485528:
    // 0x485528: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x485528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_48552c:
    // 0x48552c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_485530:
    // 0x485530: 0x320f809  jalr        $t9
label_485534:
    if (ctx->pc == 0x485534u) {
        ctx->pc = 0x485534u;
            // 0x485534: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x485538u;
        goto label_485538;
    }
    ctx->pc = 0x485530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485538u);
        ctx->pc = 0x485534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485530u;
            // 0x485534: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x485538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485538u; }
            if (ctx->pc != 0x485538u) { return; }
        }
        }
    }
    ctx->pc = 0x485538u;
label_485538:
    // 0x485538: 0x1000004d  b           . + 4 + (0x4D << 2)
label_48553c:
    if (ctx->pc == 0x48553Cu) {
        ctx->pc = 0x485540u;
        goto label_485540;
    }
    ctx->pc = 0x485538u;
    {
        const bool branch_taken_0x485538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485538) {
            ctx->pc = 0x485670u;
            goto label_485670;
        }
    }
    ctx->pc = 0x485540u;
label_485540:
    // 0x485540: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x485540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_485544:
    // 0x485544: 0x1240004a  beqz        $s2, . + 4 + (0x4A << 2)
label_485548:
    if (ctx->pc == 0x485548u) {
        ctx->pc = 0x48554Cu;
        goto label_48554c;
    }
    ctx->pc = 0x485544u;
    {
        const bool branch_taken_0x485544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x485544) {
            ctx->pc = 0x485670u;
            goto label_485670;
        }
    }
    ctx->pc = 0x48554Cu;
label_48554c:
    // 0x48554c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48554cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485550:
    // 0x485550: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x485550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_485554:
    // 0x485554: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x485554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_485558:
    // 0x485558: 0x26b10084  addiu       $s1, $s5, 0x84
    ctx->pc = 0x485558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_48555c:
    // 0x48555c: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x48555cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_485560:
    // 0x485560: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485564:
    // 0x485564: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x485564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_485568:
    // 0x485568: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x485568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_48556c:
    // 0x48556c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x48556cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_485570:
    // 0x485570: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x485570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_485574:
    // 0x485574: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x485574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_485578:
    // 0x485578: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x485578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_48557c:
    // 0x48557c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x48557cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_485580:
    // 0x485580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x485580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_485584:
    // 0x485584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x485584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_485588:
    // 0x485588: 0xc04e738  jal         func_139CE0
label_48558c:
    if (ctx->pc == 0x48558Cu) {
        ctx->pc = 0x48558Cu;
            // 0x48558c: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x485590u;
        goto label_485590;
    }
    ctx->pc = 0x485588u;
    SET_GPR_U32(ctx, 31, 0x485590u);
    ctx->pc = 0x48558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485588u;
            // 0x48558c: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485590u; }
        if (ctx->pc != 0x485590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485590u; }
        if (ctx->pc != 0x485590u) { return; }
    }
    ctx->pc = 0x485590u;
label_485590:
    // 0x485590: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485594:
    // 0x485594: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485598:
    // 0x485598: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x485598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_48559c:
    // 0x48559c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x48559cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4855a0:
    // 0x4855a0: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4855a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4855a4:
    // 0x4855a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4855a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4855a8:
    // 0x4855a8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x4855a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4855ac:
    // 0x4855ac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4855acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4855b0:
    // 0x4855b0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4855b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4855b4:
    // 0x4855b4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4855b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4855b8:
    // 0x4855b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4855b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4855bc:
    // 0x4855bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4855bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4855c0:
    // 0x4855c0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4855c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4855c4:
    // 0x4855c4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4855c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4855c8:
    // 0x4855c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4855c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4855cc:
    // 0x4855cc: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4855ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4855d0:
    // 0x4855d0: 0xc121928  jal         func_4864A0
label_4855d4:
    if (ctx->pc == 0x4855D4u) {
        ctx->pc = 0x4855D4u;
            // 0x4855d4: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4855D8u;
        goto label_4855d8;
    }
    ctx->pc = 0x4855D0u;
    SET_GPR_U32(ctx, 31, 0x4855D8u);
    ctx->pc = 0x4855D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4855D0u;
            // 0x4855d4: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4864A0u;
    if (runtime->hasFunction(0x4864A0u)) {
        auto targetFn = runtime->lookupFunction(0x4864A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4855D8u; }
        if (ctx->pc != 0x4855D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004864A0_0x4864a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4855D8u; }
        if (ctx->pc != 0x4855D8u) { return; }
    }
    ctx->pc = 0x4855D8u;
label_4855d8:
    // 0x4855d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4855dc:
    if (ctx->pc == 0x4855DCu) {
        ctx->pc = 0x4855E0u;
        goto label_4855e0;
    }
    ctx->pc = 0x4855D8u;
    {
        const bool branch_taken_0x4855d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4855d8) {
            ctx->pc = 0x485630u;
            goto label_485630;
        }
    }
    ctx->pc = 0x4855E0u;
label_4855e0:
    // 0x4855e0: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x4855e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_4855e4:
    // 0x4855e4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4855e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4855e8:
    // 0x4855e8: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x4855e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_4855ec:
    // 0x4855ec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4855ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4855f0:
    // 0x4855f0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4855f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4855f4:
    // 0x4855f4: 0xc04cce8  jal         func_1333A0
label_4855f8:
    if (ctx->pc == 0x4855F8u) {
        ctx->pc = 0x4855F8u;
            // 0x4855f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4855FCu;
        goto label_4855fc;
    }
    ctx->pc = 0x4855F4u;
    SET_GPR_U32(ctx, 31, 0x4855FCu);
    ctx->pc = 0x4855F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4855F4u;
            // 0x4855f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4855FCu; }
        if (ctx->pc != 0x4855FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4855FCu; }
        if (ctx->pc != 0x4855FCu) { return; }
    }
    ctx->pc = 0x4855FCu;
label_4855fc:
    // 0x4855fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4855fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_485600:
    // 0x485600: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x485600u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_485604:
    // 0x485604: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x485604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_485608:
    // 0x485608: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x485608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_48560c:
    // 0x48560c: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x48560cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_485610:
    // 0x485610: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x485610u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_485614:
    // 0x485614: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x485614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_485618:
    // 0x485618: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x485618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_48561c:
    // 0x48561c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x48561cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_485620:
    // 0x485620: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x485620u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_485624:
    // 0x485624: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x485624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_485628:
    // 0x485628: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x485628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_48562c:
    // 0x48562c: 0x0  nop
    ctx->pc = 0x48562cu;
    // NOP
label_485630:
    // 0x485630: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x485630u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_485634:
    // 0x485634: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x485634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_485638:
    // 0x485638: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_48563c:
    if (ctx->pc == 0x48563Cu) {
        ctx->pc = 0x48563Cu;
            // 0x48563c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x485640u;
        goto label_485640;
    }
    ctx->pc = 0x485638u;
    {
        const bool branch_taken_0x485638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485638u;
            // 0x48563c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485638) {
            ctx->pc = 0x4855A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4855a8;
        }
    }
    ctx->pc = 0x485640u;
label_485640:
    // 0x485640: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485644:
    // 0x485644: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x485644u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_485648:
    // 0x485648: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_48564c:
    if (ctx->pc == 0x48564Cu) {
        ctx->pc = 0x48564Cu;
            // 0x48564c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x485650u;
        goto label_485650;
    }
    ctx->pc = 0x485648u;
    {
        const bool branch_taken_0x485648 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x48564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485648u;
            // 0x48564c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485648) {
            ctx->pc = 0x485670u;
            goto label_485670;
        }
    }
    ctx->pc = 0x485650u;
label_485650:
    // 0x485650: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485654:
    // 0x485654: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485658:
    // 0x485658: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x485658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_48565c:
    // 0x48565c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x48565cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_485660:
    // 0x485660: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x485660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_485664:
    // 0x485664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x485664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485668:
    // 0x485668: 0xc055d28  jal         func_1574A0
label_48566c:
    if (ctx->pc == 0x48566Cu) {
        ctx->pc = 0x48566Cu;
            // 0x48566c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485670u;
        goto label_485670;
    }
    ctx->pc = 0x485668u;
    SET_GPR_U32(ctx, 31, 0x485670u);
    ctx->pc = 0x48566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485668u;
            // 0x48566c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485670u; }
        if (ctx->pc != 0x485670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485670u; }
        if (ctx->pc != 0x485670u) { return; }
    }
    ctx->pc = 0x485670u;
label_485670:
    // 0x485670: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x485670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_485674:
    // 0x485674: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x485674u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_485678:
    // 0x485678: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x485678u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48567c:
    // 0x48567c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48567cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_485680:
    // 0x485680: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x485680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_485684:
    // 0x485684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x485684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_485688:
    // 0x485688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48568c:
    // 0x48568c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48568cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485690:
    // 0x485690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485694:
    // 0x485694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485698:
    // 0x485698: 0x3e00008  jr          $ra
label_48569c:
    if (ctx->pc == 0x48569Cu) {
        ctx->pc = 0x48569Cu;
            // 0x48569c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4856A0u;
        goto label_4856a0;
    }
    ctx->pc = 0x485698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485698u;
            // 0x48569c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4856A0u;
label_4856a0:
    // 0x4856a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4856a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4856a4:
    // 0x4856a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4856a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4856a8:
    // 0x4856a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4856a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4856ac:
    // 0x4856ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4856acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4856b0:
    // 0x4856b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4856b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4856b4:
    // 0x4856b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4856b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4856b8:
    // 0x4856b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4856b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4856bc:
    // 0x4856bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4856bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4856c0:
    // 0x4856c0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4856c4:
    if (ctx->pc == 0x4856C4u) {
        ctx->pc = 0x4856C4u;
            // 0x4856c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4856C8u;
        goto label_4856c8;
    }
    ctx->pc = 0x4856C0u;
    {
        const bool branch_taken_0x4856c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4856C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4856C0u;
            // 0x4856c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856c0) {
            ctx->pc = 0x4856F4u;
            goto label_4856f4;
        }
    }
    ctx->pc = 0x4856C8u;
label_4856c8:
    // 0x4856c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4856c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4856cc:
    // 0x4856cc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4856d0:
    if (ctx->pc == 0x4856D0u) {
        ctx->pc = 0x4856D0u;
            // 0x4856d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4856D4u;
        goto label_4856d4;
    }
    ctx->pc = 0x4856CCu;
    {
        const bool branch_taken_0x4856cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4856cc) {
            ctx->pc = 0x4856D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4856CCu;
            // 0x4856d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4856E8u;
            goto label_4856e8;
        }
    }
    ctx->pc = 0x4856D4u;
label_4856d4:
    // 0x4856d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4856d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4856d8:
    // 0x4856d8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4856dc:
    if (ctx->pc == 0x4856DCu) {
        ctx->pc = 0x4856E0u;
        goto label_4856e0;
    }
    ctx->pc = 0x4856D8u;
    {
        const bool branch_taken_0x4856d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4856d8) {
            ctx->pc = 0x485728u;
            goto label_485728;
        }
    }
    ctx->pc = 0x4856E0u;
label_4856e0:
    // 0x4856e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_4856e4:
    if (ctx->pc == 0x4856E4u) {
        ctx->pc = 0x4856E8u;
        goto label_4856e8;
    }
    ctx->pc = 0x4856E0u;
    {
        const bool branch_taken_0x4856e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4856e0) {
            ctx->pc = 0x485728u;
            goto label_485728;
        }
    }
    ctx->pc = 0x4856E8u;
label_4856e8:
    // 0x4856e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4856e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4856ec:
    // 0x4856ec: 0x320f809  jalr        $t9
label_4856f0:
    if (ctx->pc == 0x4856F0u) {
        ctx->pc = 0x4856F4u;
        goto label_4856f4;
    }
    ctx->pc = 0x4856ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4856F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4856F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4856F4u; }
            if (ctx->pc != 0x4856F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4856F4u;
label_4856f4:
    // 0x4856f4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4856f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4856f8:
    // 0x4856f8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4856fc:
    if (ctx->pc == 0x4856FCu) {
        ctx->pc = 0x485700u;
        goto label_485700;
    }
    ctx->pc = 0x4856F8u;
    {
        const bool branch_taken_0x4856f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4856f8) {
            ctx->pc = 0x485728u;
            goto label_485728;
        }
    }
    ctx->pc = 0x485700u;
label_485700:
    // 0x485700: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x485700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485704:
    // 0x485704: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x485704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485708:
    // 0x485708: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x485708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_48570c:
    // 0x48570c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x48570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_485710:
    // 0x485710: 0xc0e3658  jal         func_38D960
label_485714:
    if (ctx->pc == 0x485714u) {
        ctx->pc = 0x485714u;
            // 0x485714: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x485718u;
        goto label_485718;
    }
    ctx->pc = 0x485710u;
    SET_GPR_U32(ctx, 31, 0x485718u);
    ctx->pc = 0x485714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485710u;
            // 0x485714: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485718u; }
        if (ctx->pc != 0x485718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485718u; }
        if (ctx->pc != 0x485718u) { return; }
    }
    ctx->pc = 0x485718u;
label_485718:
    // 0x485718: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x485718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48571c:
    // 0x48571c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x48571cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_485720:
    // 0x485720: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_485724:
    if (ctx->pc == 0x485724u) {
        ctx->pc = 0x485724u;
            // 0x485724: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x485728u;
        goto label_485728;
    }
    ctx->pc = 0x485720u;
    {
        const bool branch_taken_0x485720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x485724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485720u;
            // 0x485724: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485720) {
            ctx->pc = 0x485708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_485708;
        }
    }
    ctx->pc = 0x485728u;
label_485728:
    // 0x485728: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x485728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48572c:
    // 0x48572c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48572cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_485730:
    // 0x485730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485734:
    // 0x485734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485738:
    // 0x485738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48573c:
    // 0x48573c: 0x3e00008  jr          $ra
label_485740:
    if (ctx->pc == 0x485740u) {
        ctx->pc = 0x485740u;
            // 0x485740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x485744u;
        goto label_485744;
    }
    ctx->pc = 0x48573Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48573Cu;
            // 0x485740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485744u;
label_485744:
    // 0x485744: 0x0  nop
    ctx->pc = 0x485744u;
    // NOP
label_485748:
    // 0x485748: 0x0  nop
    ctx->pc = 0x485748u;
    // NOP
label_48574c:
    // 0x48574c: 0x0  nop
    ctx->pc = 0x48574cu;
    // NOP
}
