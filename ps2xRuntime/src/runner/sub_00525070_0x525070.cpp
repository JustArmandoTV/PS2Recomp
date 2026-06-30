#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00525070
// Address: 0x525070 - 0x5254e0
void sub_00525070_0x525070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00525070_0x525070");
#endif

    switch (ctx->pc) {
        case 0x525070u: goto label_525070;
        case 0x525074u: goto label_525074;
        case 0x525078u: goto label_525078;
        case 0x52507cu: goto label_52507c;
        case 0x525080u: goto label_525080;
        case 0x525084u: goto label_525084;
        case 0x525088u: goto label_525088;
        case 0x52508cu: goto label_52508c;
        case 0x525090u: goto label_525090;
        case 0x525094u: goto label_525094;
        case 0x525098u: goto label_525098;
        case 0x52509cu: goto label_52509c;
        case 0x5250a0u: goto label_5250a0;
        case 0x5250a4u: goto label_5250a4;
        case 0x5250a8u: goto label_5250a8;
        case 0x5250acu: goto label_5250ac;
        case 0x5250b0u: goto label_5250b0;
        case 0x5250b4u: goto label_5250b4;
        case 0x5250b8u: goto label_5250b8;
        case 0x5250bcu: goto label_5250bc;
        case 0x5250c0u: goto label_5250c0;
        case 0x5250c4u: goto label_5250c4;
        case 0x5250c8u: goto label_5250c8;
        case 0x5250ccu: goto label_5250cc;
        case 0x5250d0u: goto label_5250d0;
        case 0x5250d4u: goto label_5250d4;
        case 0x5250d8u: goto label_5250d8;
        case 0x5250dcu: goto label_5250dc;
        case 0x5250e0u: goto label_5250e0;
        case 0x5250e4u: goto label_5250e4;
        case 0x5250e8u: goto label_5250e8;
        case 0x5250ecu: goto label_5250ec;
        case 0x5250f0u: goto label_5250f0;
        case 0x5250f4u: goto label_5250f4;
        case 0x5250f8u: goto label_5250f8;
        case 0x5250fcu: goto label_5250fc;
        case 0x525100u: goto label_525100;
        case 0x525104u: goto label_525104;
        case 0x525108u: goto label_525108;
        case 0x52510cu: goto label_52510c;
        case 0x525110u: goto label_525110;
        case 0x525114u: goto label_525114;
        case 0x525118u: goto label_525118;
        case 0x52511cu: goto label_52511c;
        case 0x525120u: goto label_525120;
        case 0x525124u: goto label_525124;
        case 0x525128u: goto label_525128;
        case 0x52512cu: goto label_52512c;
        case 0x525130u: goto label_525130;
        case 0x525134u: goto label_525134;
        case 0x525138u: goto label_525138;
        case 0x52513cu: goto label_52513c;
        case 0x525140u: goto label_525140;
        case 0x525144u: goto label_525144;
        case 0x525148u: goto label_525148;
        case 0x52514cu: goto label_52514c;
        case 0x525150u: goto label_525150;
        case 0x525154u: goto label_525154;
        case 0x525158u: goto label_525158;
        case 0x52515cu: goto label_52515c;
        case 0x525160u: goto label_525160;
        case 0x525164u: goto label_525164;
        case 0x525168u: goto label_525168;
        case 0x52516cu: goto label_52516c;
        case 0x525170u: goto label_525170;
        case 0x525174u: goto label_525174;
        case 0x525178u: goto label_525178;
        case 0x52517cu: goto label_52517c;
        case 0x525180u: goto label_525180;
        case 0x525184u: goto label_525184;
        case 0x525188u: goto label_525188;
        case 0x52518cu: goto label_52518c;
        case 0x525190u: goto label_525190;
        case 0x525194u: goto label_525194;
        case 0x525198u: goto label_525198;
        case 0x52519cu: goto label_52519c;
        case 0x5251a0u: goto label_5251a0;
        case 0x5251a4u: goto label_5251a4;
        case 0x5251a8u: goto label_5251a8;
        case 0x5251acu: goto label_5251ac;
        case 0x5251b0u: goto label_5251b0;
        case 0x5251b4u: goto label_5251b4;
        case 0x5251b8u: goto label_5251b8;
        case 0x5251bcu: goto label_5251bc;
        case 0x5251c0u: goto label_5251c0;
        case 0x5251c4u: goto label_5251c4;
        case 0x5251c8u: goto label_5251c8;
        case 0x5251ccu: goto label_5251cc;
        case 0x5251d0u: goto label_5251d0;
        case 0x5251d4u: goto label_5251d4;
        case 0x5251d8u: goto label_5251d8;
        case 0x5251dcu: goto label_5251dc;
        case 0x5251e0u: goto label_5251e0;
        case 0x5251e4u: goto label_5251e4;
        case 0x5251e8u: goto label_5251e8;
        case 0x5251ecu: goto label_5251ec;
        case 0x5251f0u: goto label_5251f0;
        case 0x5251f4u: goto label_5251f4;
        case 0x5251f8u: goto label_5251f8;
        case 0x5251fcu: goto label_5251fc;
        case 0x525200u: goto label_525200;
        case 0x525204u: goto label_525204;
        case 0x525208u: goto label_525208;
        case 0x52520cu: goto label_52520c;
        case 0x525210u: goto label_525210;
        case 0x525214u: goto label_525214;
        case 0x525218u: goto label_525218;
        case 0x52521cu: goto label_52521c;
        case 0x525220u: goto label_525220;
        case 0x525224u: goto label_525224;
        case 0x525228u: goto label_525228;
        case 0x52522cu: goto label_52522c;
        case 0x525230u: goto label_525230;
        case 0x525234u: goto label_525234;
        case 0x525238u: goto label_525238;
        case 0x52523cu: goto label_52523c;
        case 0x525240u: goto label_525240;
        case 0x525244u: goto label_525244;
        case 0x525248u: goto label_525248;
        case 0x52524cu: goto label_52524c;
        case 0x525250u: goto label_525250;
        case 0x525254u: goto label_525254;
        case 0x525258u: goto label_525258;
        case 0x52525cu: goto label_52525c;
        case 0x525260u: goto label_525260;
        case 0x525264u: goto label_525264;
        case 0x525268u: goto label_525268;
        case 0x52526cu: goto label_52526c;
        case 0x525270u: goto label_525270;
        case 0x525274u: goto label_525274;
        case 0x525278u: goto label_525278;
        case 0x52527cu: goto label_52527c;
        case 0x525280u: goto label_525280;
        case 0x525284u: goto label_525284;
        case 0x525288u: goto label_525288;
        case 0x52528cu: goto label_52528c;
        case 0x525290u: goto label_525290;
        case 0x525294u: goto label_525294;
        case 0x525298u: goto label_525298;
        case 0x52529cu: goto label_52529c;
        case 0x5252a0u: goto label_5252a0;
        case 0x5252a4u: goto label_5252a4;
        case 0x5252a8u: goto label_5252a8;
        case 0x5252acu: goto label_5252ac;
        case 0x5252b0u: goto label_5252b0;
        case 0x5252b4u: goto label_5252b4;
        case 0x5252b8u: goto label_5252b8;
        case 0x5252bcu: goto label_5252bc;
        case 0x5252c0u: goto label_5252c0;
        case 0x5252c4u: goto label_5252c4;
        case 0x5252c8u: goto label_5252c8;
        case 0x5252ccu: goto label_5252cc;
        case 0x5252d0u: goto label_5252d0;
        case 0x5252d4u: goto label_5252d4;
        case 0x5252d8u: goto label_5252d8;
        case 0x5252dcu: goto label_5252dc;
        case 0x5252e0u: goto label_5252e0;
        case 0x5252e4u: goto label_5252e4;
        case 0x5252e8u: goto label_5252e8;
        case 0x5252ecu: goto label_5252ec;
        case 0x5252f0u: goto label_5252f0;
        case 0x5252f4u: goto label_5252f4;
        case 0x5252f8u: goto label_5252f8;
        case 0x5252fcu: goto label_5252fc;
        case 0x525300u: goto label_525300;
        case 0x525304u: goto label_525304;
        case 0x525308u: goto label_525308;
        case 0x52530cu: goto label_52530c;
        case 0x525310u: goto label_525310;
        case 0x525314u: goto label_525314;
        case 0x525318u: goto label_525318;
        case 0x52531cu: goto label_52531c;
        case 0x525320u: goto label_525320;
        case 0x525324u: goto label_525324;
        case 0x525328u: goto label_525328;
        case 0x52532cu: goto label_52532c;
        case 0x525330u: goto label_525330;
        case 0x525334u: goto label_525334;
        case 0x525338u: goto label_525338;
        case 0x52533cu: goto label_52533c;
        case 0x525340u: goto label_525340;
        case 0x525344u: goto label_525344;
        case 0x525348u: goto label_525348;
        case 0x52534cu: goto label_52534c;
        case 0x525350u: goto label_525350;
        case 0x525354u: goto label_525354;
        case 0x525358u: goto label_525358;
        case 0x52535cu: goto label_52535c;
        case 0x525360u: goto label_525360;
        case 0x525364u: goto label_525364;
        case 0x525368u: goto label_525368;
        case 0x52536cu: goto label_52536c;
        case 0x525370u: goto label_525370;
        case 0x525374u: goto label_525374;
        case 0x525378u: goto label_525378;
        case 0x52537cu: goto label_52537c;
        case 0x525380u: goto label_525380;
        case 0x525384u: goto label_525384;
        case 0x525388u: goto label_525388;
        case 0x52538cu: goto label_52538c;
        case 0x525390u: goto label_525390;
        case 0x525394u: goto label_525394;
        case 0x525398u: goto label_525398;
        case 0x52539cu: goto label_52539c;
        case 0x5253a0u: goto label_5253a0;
        case 0x5253a4u: goto label_5253a4;
        case 0x5253a8u: goto label_5253a8;
        case 0x5253acu: goto label_5253ac;
        case 0x5253b0u: goto label_5253b0;
        case 0x5253b4u: goto label_5253b4;
        case 0x5253b8u: goto label_5253b8;
        case 0x5253bcu: goto label_5253bc;
        case 0x5253c0u: goto label_5253c0;
        case 0x5253c4u: goto label_5253c4;
        case 0x5253c8u: goto label_5253c8;
        case 0x5253ccu: goto label_5253cc;
        case 0x5253d0u: goto label_5253d0;
        case 0x5253d4u: goto label_5253d4;
        case 0x5253d8u: goto label_5253d8;
        case 0x5253dcu: goto label_5253dc;
        case 0x5253e0u: goto label_5253e0;
        case 0x5253e4u: goto label_5253e4;
        case 0x5253e8u: goto label_5253e8;
        case 0x5253ecu: goto label_5253ec;
        case 0x5253f0u: goto label_5253f0;
        case 0x5253f4u: goto label_5253f4;
        case 0x5253f8u: goto label_5253f8;
        case 0x5253fcu: goto label_5253fc;
        case 0x525400u: goto label_525400;
        case 0x525404u: goto label_525404;
        case 0x525408u: goto label_525408;
        case 0x52540cu: goto label_52540c;
        case 0x525410u: goto label_525410;
        case 0x525414u: goto label_525414;
        case 0x525418u: goto label_525418;
        case 0x52541cu: goto label_52541c;
        case 0x525420u: goto label_525420;
        case 0x525424u: goto label_525424;
        case 0x525428u: goto label_525428;
        case 0x52542cu: goto label_52542c;
        case 0x525430u: goto label_525430;
        case 0x525434u: goto label_525434;
        case 0x525438u: goto label_525438;
        case 0x52543cu: goto label_52543c;
        case 0x525440u: goto label_525440;
        case 0x525444u: goto label_525444;
        case 0x525448u: goto label_525448;
        case 0x52544cu: goto label_52544c;
        case 0x525450u: goto label_525450;
        case 0x525454u: goto label_525454;
        case 0x525458u: goto label_525458;
        case 0x52545cu: goto label_52545c;
        case 0x525460u: goto label_525460;
        case 0x525464u: goto label_525464;
        case 0x525468u: goto label_525468;
        case 0x52546cu: goto label_52546c;
        case 0x525470u: goto label_525470;
        case 0x525474u: goto label_525474;
        case 0x525478u: goto label_525478;
        case 0x52547cu: goto label_52547c;
        case 0x525480u: goto label_525480;
        case 0x525484u: goto label_525484;
        case 0x525488u: goto label_525488;
        case 0x52548cu: goto label_52548c;
        case 0x525490u: goto label_525490;
        case 0x525494u: goto label_525494;
        case 0x525498u: goto label_525498;
        case 0x52549cu: goto label_52549c;
        case 0x5254a0u: goto label_5254a0;
        case 0x5254a4u: goto label_5254a4;
        case 0x5254a8u: goto label_5254a8;
        case 0x5254acu: goto label_5254ac;
        case 0x5254b0u: goto label_5254b0;
        case 0x5254b4u: goto label_5254b4;
        case 0x5254b8u: goto label_5254b8;
        case 0x5254bcu: goto label_5254bc;
        case 0x5254c0u: goto label_5254c0;
        case 0x5254c4u: goto label_5254c4;
        case 0x5254c8u: goto label_5254c8;
        case 0x5254ccu: goto label_5254cc;
        case 0x5254d0u: goto label_5254d0;
        case 0x5254d4u: goto label_5254d4;
        case 0x5254d8u: goto label_5254d8;
        case 0x5254dcu: goto label_5254dc;
        default: break;
    }

    ctx->pc = 0x525070u;

label_525070:
    // 0x525070: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x525070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_525074:
    // 0x525074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x525074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_525078:
    // 0x525078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x525078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52507c:
    // 0x52507c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_525080:
    // 0x525080: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x525080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_525084:
    // 0x525084: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x525084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_525088:
    // 0x525088: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x525088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_52508c:
    // 0x52508c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525090:
    // 0x525090: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x525090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_525094:
    // 0x525094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525098:
    // 0x525098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x525098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52509c:
    // 0x52509c: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x52509cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_5250a0:
    // 0x5250a0: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_5250a4:
    if (ctx->pc == 0x5250A4u) {
        ctx->pc = 0x5250A4u;
            // 0x5250a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5250A8u;
        goto label_5250a8;
    }
    ctx->pc = 0x5250A0u;
    {
        const bool branch_taken_0x5250a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5250A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5250A0u;
            // 0x5250a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5250a0) {
            ctx->pc = 0x5252D0u;
            goto label_5252d0;
        }
    }
    ctx->pc = 0x5250A8u;
label_5250a8:
    // 0x5250a8: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x5250a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_5250ac:
    // 0x5250ac: 0x50800089  beql        $a0, $zero, . + 4 + (0x89 << 2)
label_5250b0:
    if (ctx->pc == 0x5250B0u) {
        ctx->pc = 0x5250B0u;
            // 0x5250b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x5250B4u;
        goto label_5250b4;
    }
    ctx->pc = 0x5250ACu;
    {
        const bool branch_taken_0x5250ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5250ac) {
            ctx->pc = 0x5250B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5250ACu;
            // 0x5250b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5252D4u;
            goto label_5252d4;
        }
    }
    ctx->pc = 0x5250B4u;
label_5250b4:
    // 0x5250b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x5250b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5250b8:
    // 0x5250b8: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
label_5250bc:
    if (ctx->pc == 0x5250BCu) {
        ctx->pc = 0x5250C0u;
        goto label_5250c0;
    }
    ctx->pc = 0x5250B8u;
    {
        const bool branch_taken_0x5250b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5250b8) {
            ctx->pc = 0x5252D0u;
            goto label_5252d0;
        }
    }
    ctx->pc = 0x5250C0u;
label_5250c0:
    // 0x5250c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5250c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5250c4:
    // 0x5250c4: 0xc04f278  jal         func_13C9E0
label_5250c8:
    if (ctx->pc == 0x5250C8u) {
        ctx->pc = 0x5250C8u;
            // 0x5250c8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x5250CCu;
        goto label_5250cc;
    }
    ctx->pc = 0x5250C4u;
    SET_GPR_U32(ctx, 31, 0x5250CCu);
    ctx->pc = 0x5250C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5250C4u;
            // 0x5250c8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5250CCu; }
        if (ctx->pc != 0x5250CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5250CCu; }
        if (ctx->pc != 0x5250CCu) { return; }
    }
    ctx->pc = 0x5250CCu;
label_5250cc:
    // 0x5250cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5250ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5250d0:
    // 0x5250d0: 0xc04ce80  jal         func_133A00
label_5250d4:
    if (ctx->pc == 0x5250D4u) {
        ctx->pc = 0x5250D4u;
            // 0x5250d4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x5250D8u;
        goto label_5250d8;
    }
    ctx->pc = 0x5250D0u;
    SET_GPR_U32(ctx, 31, 0x5250D8u);
    ctx->pc = 0x5250D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5250D0u;
            // 0x5250d4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5250D8u; }
        if (ctx->pc != 0x5250D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5250D8u; }
        if (ctx->pc != 0x5250D8u) { return; }
    }
    ctx->pc = 0x5250D8u;
label_5250d8:
    // 0x5250d8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x5250d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_5250dc:
    // 0x5250dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5250dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5250e0:
    // 0x5250e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x5250e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_5250e4:
    // 0x5250e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5250e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5250e8:
    // 0x5250e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5250e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5250ec:
    // 0x5250ec: 0x0  nop
    ctx->pc = 0x5250ecu;
    // NOP
label_5250f0:
    // 0x5250f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5250f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5250f4:
    // 0x5250f4: 0xc04ce50  jal         func_133940
label_5250f8:
    if (ctx->pc == 0x5250F8u) {
        ctx->pc = 0x5250F8u;
            // 0x5250f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5250FCu;
        goto label_5250fc;
    }
    ctx->pc = 0x5250F4u;
    SET_GPR_U32(ctx, 31, 0x5250FCu);
    ctx->pc = 0x5250F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5250F4u;
            // 0x5250f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5250FCu; }
        if (ctx->pc != 0x5250FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5250FCu; }
        if (ctx->pc != 0x5250FCu) { return; }
    }
    ctx->pc = 0x5250FCu;
label_5250fc:
    // 0x5250fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5250fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_525100:
    // 0x525100: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x525100u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_525104:
    // 0x525104: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x525104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_525108:
    // 0x525108: 0xc07698c  jal         func_1DA630
label_52510c:
    if (ctx->pc == 0x52510Cu) {
        ctx->pc = 0x52510Cu;
            // 0x52510c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525110u;
        goto label_525110;
    }
    ctx->pc = 0x525108u;
    SET_GPR_U32(ctx, 31, 0x525110u);
    ctx->pc = 0x52510Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525108u;
            // 0x52510c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525110u; }
        if (ctx->pc != 0x525110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525110u; }
        if (ctx->pc != 0x525110u) { return; }
    }
    ctx->pc = 0x525110u;
label_525110:
    // 0x525110: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x525110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_525114:
    // 0x525114: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_525118:
    if (ctx->pc == 0x525118u) {
        ctx->pc = 0x52511Cu;
        goto label_52511c;
    }
    ctx->pc = 0x525114u;
    {
        const bool branch_taken_0x525114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x525114) {
            ctx->pc = 0x525124u;
            goto label_525124;
        }
    }
    ctx->pc = 0x52511Cu;
label_52511c:
    // 0x52511c: 0x10000033  b           . + 4 + (0x33 << 2)
label_525120:
    if (ctx->pc == 0x525120u) {
        ctx->pc = 0x525120u;
            // 0x525120: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x525124u;
        goto label_525124;
    }
    ctx->pc = 0x52511Cu;
    {
        const bool branch_taken_0x52511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x525120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52511Cu;
            // 0x525120: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52511c) {
            ctx->pc = 0x5251ECu;
            goto label_5251ec;
        }
    }
    ctx->pc = 0x525124u;
label_525124:
    // 0x525124: 0xc0576f4  jal         func_15DBD0
label_525128:
    if (ctx->pc == 0x525128u) {
        ctx->pc = 0x52512Cu;
        goto label_52512c;
    }
    ctx->pc = 0x525124u;
    SET_GPR_U32(ctx, 31, 0x52512Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52512Cu; }
        if (ctx->pc != 0x52512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52512Cu; }
        if (ctx->pc != 0x52512Cu) { return; }
    }
    ctx->pc = 0x52512Cu;
label_52512c:
    // 0x52512c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x52512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_525130:
    // 0x525130: 0xc076984  jal         func_1DA610
label_525134:
    if (ctx->pc == 0x525134u) {
        ctx->pc = 0x525134u;
            // 0x525134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525138u;
        goto label_525138;
    }
    ctx->pc = 0x525130u;
    SET_GPR_U32(ctx, 31, 0x525138u);
    ctx->pc = 0x525134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525130u;
            // 0x525134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525138u; }
        if (ctx->pc != 0x525138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525138u; }
        if (ctx->pc != 0x525138u) { return; }
    }
    ctx->pc = 0x525138u;
label_525138:
    // 0x525138: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x525138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52513c:
    // 0x52513c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x52513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_525140:
    // 0x525140: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x525140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_525144:
    // 0x525144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x525144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_525148:
    // 0x525148: 0xc442cea0  lwc1        $f2, -0x3160($v0)
    ctx->pc = 0x525148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52514c:
    // 0x52514c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x52514cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_525150:
    // 0x525150: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x525150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_525154:
    // 0x525154: 0xc441cea8  lwc1        $f1, -0x3158($v0)
    ctx->pc = 0x525154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_525158:
    // 0x525158: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x525158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_52515c:
    // 0x52515c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_525160:
    // 0x525160: 0xc440ceac  lwc1        $f0, -0x3154($v0)
    ctx->pc = 0x525160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_525164:
    // 0x525164: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x525164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_525168:
    // 0x525168: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x525168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52516c:
    // 0x52516c: 0x8c42cea4  lw          $v0, -0x315C($v0)
    ctx->pc = 0x52516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954660)));
label_525170:
    // 0x525170: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x525170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_525174:
    // 0x525174: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x525174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_525178:
    // 0x525178: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x525178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52517c:
    // 0x52517c: 0xc04cca0  jal         func_133280
label_525180:
    if (ctx->pc == 0x525180u) {
        ctx->pc = 0x525180u;
            // 0x525180: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x525184u;
        goto label_525184;
    }
    ctx->pc = 0x52517Cu;
    SET_GPR_U32(ctx, 31, 0x525184u);
    ctx->pc = 0x525180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52517Cu;
            // 0x525180: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525184u; }
        if (ctx->pc != 0x525184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525184u; }
        if (ctx->pc != 0x525184u) { return; }
    }
    ctx->pc = 0x525184u;
label_525184:
    // 0x525184: 0xc076980  jal         func_1DA600
label_525188:
    if (ctx->pc == 0x525188u) {
        ctx->pc = 0x525188u;
            // 0x525188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52518Cu;
        goto label_52518c;
    }
    ctx->pc = 0x525184u;
    SET_GPR_U32(ctx, 31, 0x52518Cu);
    ctx->pc = 0x525188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525184u;
            // 0x525188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52518Cu; }
        if (ctx->pc != 0x52518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52518Cu; }
        if (ctx->pc != 0x52518Cu) { return; }
    }
    ctx->pc = 0x52518Cu;
label_52518c:
    // 0x52518c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x52518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_525190:
    // 0x525190: 0xc04cc34  jal         func_1330D0
label_525194:
    if (ctx->pc == 0x525194u) {
        ctx->pc = 0x525194u;
            // 0x525194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525198u;
        goto label_525198;
    }
    ctx->pc = 0x525190u;
    SET_GPR_U32(ctx, 31, 0x525198u);
    ctx->pc = 0x525194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525190u;
            // 0x525194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525198u; }
        if (ctx->pc != 0x525198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525198u; }
        if (ctx->pc != 0x525198u) { return; }
    }
    ctx->pc = 0x525198u;
label_525198:
    // 0x525198: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x525198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52519c:
    // 0x52519c: 0xc461c8a8  lwc1        $f1, -0x3758($v1)
    ctx->pc = 0x52519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5251a0:
    // 0x5251a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5251a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5251a4:
    // 0x5251a4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_5251a8:
    if (ctx->pc == 0x5251A8u) {
        ctx->pc = 0x5251A8u;
            // 0x5251a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5251ACu;
        goto label_5251ac;
    }
    ctx->pc = 0x5251A4u;
    {
        const bool branch_taken_0x5251a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5251a4) {
            ctx->pc = 0x5251A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5251A4u;
            // 0x5251a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5251B4u;
            goto label_5251b4;
        }
    }
    ctx->pc = 0x5251ACu;
label_5251ac:
    // 0x5251ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_5251b0:
    if (ctx->pc == 0x5251B0u) {
        ctx->pc = 0x5251B0u;
            // 0x5251b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5251B4u;
        goto label_5251b4;
    }
    ctx->pc = 0x5251ACu;
    {
        const bool branch_taken_0x5251ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5251B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5251ACu;
            // 0x5251b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5251ac) {
            ctx->pc = 0x5251ECu;
            goto label_5251ec;
        }
    }
    ctx->pc = 0x5251B4u;
label_5251b4:
    // 0x5251b4: 0xc07697c  jal         func_1DA5F0
label_5251b8:
    if (ctx->pc == 0x5251B8u) {
        ctx->pc = 0x5251BCu;
        goto label_5251bc;
    }
    ctx->pc = 0x5251B4u;
    SET_GPR_U32(ctx, 31, 0x5251BCu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5251BCu; }
        if (ctx->pc != 0x5251BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5251BCu; }
        if (ctx->pc != 0x5251BCu) { return; }
    }
    ctx->pc = 0x5251BCu;
label_5251bc:
    // 0x5251bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5251bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5251c0:
    // 0x5251c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5251c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5251c4:
    // 0x5251c4: 0xc04cd60  jal         func_133580
label_5251c8:
    if (ctx->pc == 0x5251C8u) {
        ctx->pc = 0x5251C8u;
            // 0x5251c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5251CCu;
        goto label_5251cc;
    }
    ctx->pc = 0x5251C4u;
    SET_GPR_U32(ctx, 31, 0x5251CCu);
    ctx->pc = 0x5251C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5251C4u;
            // 0x5251c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5251CCu; }
        if (ctx->pc != 0x5251CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5251CCu; }
        if (ctx->pc != 0x5251CCu) { return; }
    }
    ctx->pc = 0x5251CCu;
label_5251cc:
    // 0x5251cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5251ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5251d0:
    // 0x5251d0: 0xc04c650  jal         func_131940
label_5251d4:
    if (ctx->pc == 0x5251D4u) {
        ctx->pc = 0x5251D4u;
            // 0x5251d4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5251D8u;
        goto label_5251d8;
    }
    ctx->pc = 0x5251D0u;
    SET_GPR_U32(ctx, 31, 0x5251D8u);
    ctx->pc = 0x5251D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5251D0u;
            // 0x5251d4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5251D8u; }
        if (ctx->pc != 0x5251D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5251D8u; }
        if (ctx->pc != 0x5251D8u) { return; }
    }
    ctx->pc = 0x5251D8u;
label_5251d8:
    // 0x5251d8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5251d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5251dc:
    // 0x5251dc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x5251dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5251e0:
    // 0x5251e0: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x5251e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_5251e4:
    // 0x5251e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5251e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5251e8:
    // 0x5251e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5251e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5251ec:
    // 0x5251ec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x5251ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_5251f0:
    // 0x5251f0: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_5251f4:
    if (ctx->pc == 0x5251F4u) {
        ctx->pc = 0x5251F4u;
            // 0x5251f4: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x5251F8u;
        goto label_5251f8;
    }
    ctx->pc = 0x5251F0u;
    {
        const bool branch_taken_0x5251f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5251F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5251F0u;
            // 0x5251f4: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5251f0) {
            ctx->pc = 0x5252D0u;
            goto label_5252d0;
        }
    }
    ctx->pc = 0x5251F8u;
label_5251f8:
    // 0x5251f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5251f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5251fc:
    // 0x5251fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5251fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525200:
    // 0x525200: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x525200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_525204:
    // 0x525204: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x525204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_525208:
    // 0x525208: 0x8c48e3d8  lw          $t0, -0x1C28($v0)
    ctx->pc = 0x525208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_52520c:
    // 0x52520c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x52520cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_525210:
    // 0x525210: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x525210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_525214:
    // 0x525214: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x525214u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_525218:
    // 0x525218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52521c:
    // 0x52521c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x52521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_525220:
    // 0x525220: 0x8c47e3b0  lw          $a3, -0x1C50($v0)
    ctx->pc = 0x525220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_525224:
    // 0x525224: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x525224u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_525228:
    // 0x525228: 0x889821  addu        $s3, $a0, $t0
    ctx->pc = 0x525228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_52522c:
    // 0x52522c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52522cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_525230:
    // 0x525230: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x525230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_525234:
    // 0x525234: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525238:
    // 0x525238: 0xacf30000  sw          $s3, 0x0($a3)
    ctx->pc = 0x525238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 19));
label_52523c:
    // 0x52523c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x52523cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_525240:
    // 0x525240: 0x8c6be3d8  lw          $t3, -0x1C28($v1)
    ctx->pc = 0x525240u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_525244:
    // 0x525244: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x525244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_525248:
    // 0x525248: 0x8c89e3b8  lw          $t1, -0x1C48($a0)
    ctx->pc = 0x525248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_52524c:
    // 0x52524c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x52524cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_525250:
    // 0x525250: 0x8c4ae378  lw          $t2, -0x1C88($v0)
    ctx->pc = 0x525250u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_525254:
    // 0x525254: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x525254u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_525258:
    // 0x525258: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x525258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52525c:
    // 0x52525c: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x52525cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_525260:
    // 0x525260: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x525260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_525264:
    // 0x525264: 0x14b9021  addu        $s2, $t2, $t3
    ctx->pc = 0x525264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_525268:
    // 0x525268: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52526c:
    // 0x52526c: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x52526cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_525270:
    // 0x525270: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x525270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_525274:
    // 0x525274: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x525274u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_525278:
    // 0x525278: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x525278u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_52527c:
    // 0x52527c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x52527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_525280:
    // 0x525280: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x525280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_525284:
    // 0x525284: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x525284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_525288:
    // 0x525288: 0xc04cd60  jal         func_133580
label_52528c:
    if (ctx->pc == 0x52528Cu) {
        ctx->pc = 0x52528Cu;
            // 0x52528c: 0xace2e3d8  sw          $v0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
        ctx->pc = 0x525290u;
        goto label_525290;
    }
    ctx->pc = 0x525288u;
    SET_GPR_U32(ctx, 31, 0x525290u);
    ctx->pc = 0x52528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525288u;
            // 0x52528c: 0xace2e3d8  sw          $v0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525290u; }
        if (ctx->pc != 0x525290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525290u; }
        if (ctx->pc != 0x525290u) { return; }
    }
    ctx->pc = 0x525290u;
label_525290:
    // 0x525290: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x525290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_525294:
    // 0x525294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x525294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_525298:
    // 0x525298: 0xc04e4a4  jal         func_139290
label_52529c:
    if (ctx->pc == 0x52529Cu) {
        ctx->pc = 0x52529Cu;
            // 0x52529c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5252A0u;
        goto label_5252a0;
    }
    ctx->pc = 0x525298u;
    SET_GPR_U32(ctx, 31, 0x5252A0u);
    ctx->pc = 0x52529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525298u;
            // 0x52529c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5252A0u; }
        if (ctx->pc != 0x5252A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5252A0u; }
        if (ctx->pc != 0x5252A0u) { return; }
    }
    ctx->pc = 0x5252A0u;
label_5252a0:
    // 0x5252a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5252a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5252a4:
    // 0x5252a4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x5252a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_5252a8:
    // 0x5252a8: 0x320f809  jalr        $t9
label_5252ac:
    if (ctx->pc == 0x5252ACu) {
        ctx->pc = 0x5252ACu;
            // 0x5252ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5252B0u;
        goto label_5252b0;
    }
    ctx->pc = 0x5252A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5252B0u);
        ctx->pc = 0x5252ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5252A8u;
            // 0x5252ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5252B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5252B0u; }
            if (ctx->pc != 0x5252B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5252B0u;
label_5252b0:
    // 0x5252b0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x5252b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_5252b4:
    // 0x5252b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5252b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5252b8:
    // 0x5252b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5252b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5252bc:
    // 0x5252bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x5252bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5252c0:
    // 0x5252c0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x5252c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5252c4:
    // 0x5252c4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x5252c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_5252c8:
    // 0x5252c8: 0xc04cfcc  jal         func_133F30
label_5252cc:
    if (ctx->pc == 0x5252CCu) {
        ctx->pc = 0x5252CCu;
            // 0x5252cc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5252D0u;
        goto label_5252d0;
    }
    ctx->pc = 0x5252C8u;
    SET_GPR_U32(ctx, 31, 0x5252D0u);
    ctx->pc = 0x5252CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5252C8u;
            // 0x5252cc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5252D0u; }
        if (ctx->pc != 0x5252D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5252D0u; }
        if (ctx->pc != 0x5252D0u) { return; }
    }
    ctx->pc = 0x5252D0u;
label_5252d0:
    // 0x5252d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5252d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5252d4:
    // 0x5252d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5252d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5252d8:
    // 0x5252d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5252d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5252dc:
    // 0x5252dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5252dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5252e0:
    // 0x5252e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5252e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5252e4:
    // 0x5252e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5252e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5252e8:
    // 0x5252e8: 0x3e00008  jr          $ra
label_5252ec:
    if (ctx->pc == 0x5252ECu) {
        ctx->pc = 0x5252ECu;
            // 0x5252ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5252F0u;
        goto label_5252f0;
    }
    ctx->pc = 0x5252E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5252ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5252E8u;
            // 0x5252ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5252F0u;
label_5252f0:
    // 0x5252f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5252f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5252f4:
    // 0x5252f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5252f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5252f8:
    // 0x5252f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5252f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5252fc:
    // 0x5252fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5252fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525300:
    // 0x525300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x525300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_525304:
    // 0x525304: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_525308:
    if (ctx->pc == 0x525308u) {
        ctx->pc = 0x525308u;
            // 0x525308: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52530Cu;
        goto label_52530c;
    }
    ctx->pc = 0x525304u;
    {
        const bool branch_taken_0x525304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x525308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525304u;
            // 0x525308: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525304) {
            ctx->pc = 0x5253B8u;
            goto label_5253b8;
        }
    }
    ctx->pc = 0x52530Cu;
label_52530c:
    // 0x52530c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52530cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_525310:
    // 0x525310: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x525310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_525314:
    // 0x525314: 0x246362b0  addiu       $v1, $v1, 0x62B0
    ctx->pc = 0x525314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25264));
label_525318:
    // 0x525318: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x525318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
label_52531c:
    // 0x52531c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_525320:
    // 0x525320: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_525324:
    if (ctx->pc == 0x525324u) {
        ctx->pc = 0x525324u;
            // 0x525324: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x525328u;
        goto label_525328;
    }
    ctx->pc = 0x525320u;
    {
        const bool branch_taken_0x525320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x525324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525320u;
            // 0x525324: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525320) {
            ctx->pc = 0x5253A0u;
            goto label_5253a0;
        }
    }
    ctx->pc = 0x525328u;
label_525328:
    // 0x525328: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x525328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52532c:
    // 0x52532c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_525330:
    // 0x525330: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x525330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_525334:
    // 0x525334: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x525334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_525338:
    // 0x525338: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x525338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52533c:
    // 0x52533c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x52533cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_525340:
    // 0x525340: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x525340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_525344:
    // 0x525344: 0xc0aecc4  jal         func_2BB310
label_525348:
    if (ctx->pc == 0x525348u) {
        ctx->pc = 0x525348u;
            // 0x525348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52534Cu;
        goto label_52534c;
    }
    ctx->pc = 0x525344u;
    SET_GPR_U32(ctx, 31, 0x52534Cu);
    ctx->pc = 0x525348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525344u;
            // 0x525348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52534Cu; }
        if (ctx->pc != 0x52534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52534Cu; }
        if (ctx->pc != 0x52534Cu) { return; }
    }
    ctx->pc = 0x52534Cu;
label_52534c:
    // 0x52534c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x52534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_525350:
    // 0x525350: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x525350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_525354:
    // 0x525354: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_525358:
    if (ctx->pc == 0x525358u) {
        ctx->pc = 0x525358u;
            // 0x525358: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x52535Cu;
        goto label_52535c;
    }
    ctx->pc = 0x525354u;
    {
        const bool branch_taken_0x525354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x525354) {
            ctx->pc = 0x525358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525354u;
            // 0x525358: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525370u;
            goto label_525370;
        }
    }
    ctx->pc = 0x52535Cu;
label_52535c:
    // 0x52535c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x52535cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_525360:
    // 0x525360: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x525360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_525364:
    // 0x525364: 0x320f809  jalr        $t9
label_525368:
    if (ctx->pc == 0x525368u) {
        ctx->pc = 0x525368u;
            // 0x525368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52536Cu;
        goto label_52536c;
    }
    ctx->pc = 0x525364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52536Cu);
        ctx->pc = 0x525368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525364u;
            // 0x525368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52536Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52536Cu; }
            if (ctx->pc != 0x52536Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52536Cu;
label_52536c:
    // 0x52536c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x52536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_525370:
    // 0x525370: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x525370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_525374:
    // 0x525374: 0xc0aec9c  jal         func_2BB270
label_525378:
    if (ctx->pc == 0x525378u) {
        ctx->pc = 0x525378u;
            // 0x525378: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x52537Cu;
        goto label_52537c;
    }
    ctx->pc = 0x525374u;
    SET_GPR_U32(ctx, 31, 0x52537Cu);
    ctx->pc = 0x525378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525374u;
            // 0x525378: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52537Cu; }
        if (ctx->pc != 0x52537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52537Cu; }
        if (ctx->pc != 0x52537Cu) { return; }
    }
    ctx->pc = 0x52537Cu;
label_52537c:
    // 0x52537c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x52537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_525380:
    // 0x525380: 0xc0aec88  jal         func_2BB220
label_525384:
    if (ctx->pc == 0x525384u) {
        ctx->pc = 0x525384u;
            // 0x525384: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x525388u;
        goto label_525388;
    }
    ctx->pc = 0x525380u;
    SET_GPR_U32(ctx, 31, 0x525388u);
    ctx->pc = 0x525384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525380u;
            // 0x525384: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525388u; }
        if (ctx->pc != 0x525388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525388u; }
        if (ctx->pc != 0x525388u) { return; }
    }
    ctx->pc = 0x525388u;
label_525388:
    // 0x525388: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x525388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_52538c:
    // 0x52538c: 0xc0aec0c  jal         func_2BB030
label_525390:
    if (ctx->pc == 0x525390u) {
        ctx->pc = 0x525390u;
            // 0x525390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525394u;
        goto label_525394;
    }
    ctx->pc = 0x52538Cu;
    SET_GPR_U32(ctx, 31, 0x525394u);
    ctx->pc = 0x525390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52538Cu;
            // 0x525390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525394u; }
        if (ctx->pc != 0x525394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525394u; }
        if (ctx->pc != 0x525394u) { return; }
    }
    ctx->pc = 0x525394u;
label_525394:
    // 0x525394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x525394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_525398:
    // 0x525398: 0xc0aeaa8  jal         func_2BAAA0
label_52539c:
    if (ctx->pc == 0x52539Cu) {
        ctx->pc = 0x52539Cu;
            // 0x52539c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5253A0u;
        goto label_5253a0;
    }
    ctx->pc = 0x525398u;
    SET_GPR_U32(ctx, 31, 0x5253A0u);
    ctx->pc = 0x52539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525398u;
            // 0x52539c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253A0u; }
        if (ctx->pc != 0x5253A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253A0u; }
        if (ctx->pc != 0x5253A0u) { return; }
    }
    ctx->pc = 0x5253A0u;
label_5253a0:
    // 0x5253a0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5253a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5253a4:
    // 0x5253a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5253a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5253a8:
    // 0x5253a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5253ac:
    if (ctx->pc == 0x5253ACu) {
        ctx->pc = 0x5253ACu;
            // 0x5253ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5253B0u;
        goto label_5253b0;
    }
    ctx->pc = 0x5253A8u;
    {
        const bool branch_taken_0x5253a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5253a8) {
            ctx->pc = 0x5253ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5253A8u;
            // 0x5253ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5253BCu;
            goto label_5253bc;
        }
    }
    ctx->pc = 0x5253B0u;
label_5253b0:
    // 0x5253b0: 0xc0400a8  jal         func_1002A0
label_5253b4:
    if (ctx->pc == 0x5253B4u) {
        ctx->pc = 0x5253B4u;
            // 0x5253b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5253B8u;
        goto label_5253b8;
    }
    ctx->pc = 0x5253B0u;
    SET_GPR_U32(ctx, 31, 0x5253B8u);
    ctx->pc = 0x5253B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5253B0u;
            // 0x5253b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253B8u; }
        if (ctx->pc != 0x5253B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253B8u; }
        if (ctx->pc != 0x5253B8u) { return; }
    }
    ctx->pc = 0x5253B8u;
label_5253b8:
    // 0x5253b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5253b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5253bc:
    // 0x5253bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5253bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5253c0:
    // 0x5253c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5253c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5253c4:
    // 0x5253c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5253c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5253c8:
    // 0x5253c8: 0x3e00008  jr          $ra
label_5253cc:
    if (ctx->pc == 0x5253CCu) {
        ctx->pc = 0x5253CCu;
            // 0x5253cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5253D0u;
        goto label_5253d0;
    }
    ctx->pc = 0x5253C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5253CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5253C8u;
            // 0x5253cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5253D0u;
label_5253d0:
    // 0x5253d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5253d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5253d4:
    // 0x5253d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5253d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5253d8:
    // 0x5253d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5253d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5253dc:
    // 0x5253dc: 0xc0aeebc  jal         func_2BBAF0
label_5253e0:
    if (ctx->pc == 0x5253E0u) {
        ctx->pc = 0x5253E0u;
            // 0x5253e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5253E4u;
        goto label_5253e4;
    }
    ctx->pc = 0x5253DCu;
    SET_GPR_U32(ctx, 31, 0x5253E4u);
    ctx->pc = 0x5253E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5253DCu;
            // 0x5253e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253E4u; }
        if (ctx->pc != 0x5253E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253E4u; }
        if (ctx->pc != 0x5253E4u) { return; }
    }
    ctx->pc = 0x5253E4u;
label_5253e4:
    // 0x5253e4: 0xc0aeeb4  jal         func_2BBAD0
label_5253e8:
    if (ctx->pc == 0x5253E8u) {
        ctx->pc = 0x5253E8u;
            // 0x5253e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x5253ECu;
        goto label_5253ec;
    }
    ctx->pc = 0x5253E4u;
    SET_GPR_U32(ctx, 31, 0x5253ECu);
    ctx->pc = 0x5253E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5253E4u;
            // 0x5253e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253ECu; }
        if (ctx->pc != 0x5253ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5253ECu; }
        if (ctx->pc != 0x5253ECu) { return; }
    }
    ctx->pc = 0x5253ECu;
label_5253ec:
    // 0x5253ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5253ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5253f0:
    // 0x5253f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5253f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5253f4:
    // 0x5253f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x5253f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_5253f8:
    // 0x5253f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x5253f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_5253fc:
    // 0x5253fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5253fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_525400:
    // 0x525400: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x525400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_525404:
    // 0x525404: 0xc0aeea4  jal         func_2BBA90
label_525408:
    if (ctx->pc == 0x525408u) {
        ctx->pc = 0x525408u;
            // 0x525408: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x52540Cu;
        goto label_52540c;
    }
    ctx->pc = 0x525404u;
    SET_GPR_U32(ctx, 31, 0x52540Cu);
    ctx->pc = 0x525408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525404u;
            // 0x525408: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52540Cu; }
        if (ctx->pc != 0x52540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52540Cu; }
        if (ctx->pc != 0x52540Cu) { return; }
    }
    ctx->pc = 0x52540Cu;
label_52540c:
    // 0x52540c: 0xc0aee8c  jal         func_2BBA30
label_525410:
    if (ctx->pc == 0x525410u) {
        ctx->pc = 0x525410u;
            // 0x525410: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x525414u;
        goto label_525414;
    }
    ctx->pc = 0x52540Cu;
    SET_GPR_U32(ctx, 31, 0x525414u);
    ctx->pc = 0x525410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52540Cu;
            // 0x525410: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525414u; }
        if (ctx->pc != 0x525414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525414u; }
        if (ctx->pc != 0x525414u) { return; }
    }
    ctx->pc = 0x525414u;
label_525414:
    // 0x525414: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x525414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_525418:
    // 0x525418: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x525418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_52541c:
    // 0x52541c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x52541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_525420:
    // 0x525420: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x525420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_525424:
    // 0x525424: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x525424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_525428:
    // 0x525428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x525428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52542c:
    // 0x52542c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x52542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_525430:
    // 0x525430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x525430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_525434:
    // 0x525434: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x525434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_525438:
    // 0x525438: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x525438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_52543c:
    // 0x52543c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x52543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_525440:
    // 0x525440: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x525440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_525444:
    // 0x525444: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x525444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_525448:
    // 0x525448: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x525448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_52544c:
    // 0x52544c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x52544cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_525450:
    // 0x525450: 0xc0775b8  jal         func_1DD6E0
label_525454:
    if (ctx->pc == 0x525454u) {
        ctx->pc = 0x525454u;
            // 0x525454: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x525458u;
        goto label_525458;
    }
    ctx->pc = 0x525450u;
    SET_GPR_U32(ctx, 31, 0x525458u);
    ctx->pc = 0x525454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525450u;
            // 0x525454: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525458u; }
        if (ctx->pc != 0x525458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525458u; }
        if (ctx->pc != 0x525458u) { return; }
    }
    ctx->pc = 0x525458u;
label_525458:
    // 0x525458: 0xc077314  jal         func_1DCC50
label_52545c:
    if (ctx->pc == 0x52545Cu) {
        ctx->pc = 0x52545Cu;
            // 0x52545c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x525460u;
        goto label_525460;
    }
    ctx->pc = 0x525458u;
    SET_GPR_U32(ctx, 31, 0x525460u);
    ctx->pc = 0x52545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525458u;
            // 0x52545c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525460u; }
        if (ctx->pc != 0x525460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525460u; }
        if (ctx->pc != 0x525460u) { return; }
    }
    ctx->pc = 0x525460u;
label_525460:
    // 0x525460: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x525460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_525464:
    // 0x525464: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x525464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_525468:
    // 0x525468: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x525468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_52546c:
    // 0x52546c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x52546cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_525470:
    // 0x525470: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x525470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_525474:
    // 0x525474: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x525474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_525478:
    // 0x525478: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x525478u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_52547c:
    // 0x52547c: 0x24a562b0  addiu       $a1, $a1, 0x62B0
    ctx->pc = 0x52547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
label_525480:
    // 0x525480: 0x248462f0  addiu       $a0, $a0, 0x62F0
    ctx->pc = 0x525480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25328));
label_525484:
    // 0x525484: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x525484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_525488:
    // 0x525488: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x525488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_52548c:
    // 0x52548c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52548cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_525490:
    // 0x525490: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x525490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_525494:
    // 0x525494: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x525494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_525498:
    // 0x525498: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x525498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_52549c:
    // 0x52549c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x52549cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_5254a0:
    // 0x5254a0: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x5254a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_5254a4:
    // 0x5254a4: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x5254a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_5254a8:
    // 0x5254a8: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x5254a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_5254ac:
    // 0x5254ac: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x5254acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_5254b0:
    // 0x5254b0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x5254b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_5254b4:
    // 0x5254b4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x5254b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_5254b8:
    // 0x5254b8: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x5254b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_5254bc:
    // 0x5254bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5254bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5254c0:
    // 0x5254c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5254c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5254c4:
    // 0x5254c4: 0x3e00008  jr          $ra
label_5254c8:
    if (ctx->pc == 0x5254C8u) {
        ctx->pc = 0x5254C8u;
            // 0x5254c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5254CCu;
        goto label_5254cc;
    }
    ctx->pc = 0x5254C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5254C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5254C4u;
            // 0x5254c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5254CCu;
label_5254cc:
    // 0x5254cc: 0x0  nop
    ctx->pc = 0x5254ccu;
    // NOP
label_5254d0:
    // 0x5254d0: 0x81494bc  j           func_5252F0
label_5254d4:
    if (ctx->pc == 0x5254D4u) {
        ctx->pc = 0x5254D4u;
            // 0x5254d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x5254D8u;
        goto label_5254d8;
    }
    ctx->pc = 0x5254D0u;
    ctx->pc = 0x5254D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5254D0u;
            // 0x5254d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5252F0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_5252f0;
    ctx->pc = 0x5254D8u;
label_5254d8:
    // 0x5254d8: 0x0  nop
    ctx->pc = 0x5254d8u;
    // NOP
label_5254dc:
    // 0x5254dc: 0x0  nop
    ctx->pc = 0x5254dcu;
    // NOP
}
