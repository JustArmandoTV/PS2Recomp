#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224010
// Address: 0x224010 - 0x224530
void sub_00224010_0x224010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224010_0x224010");
#endif

    switch (ctx->pc) {
        case 0x224010u: goto label_224010;
        case 0x224014u: goto label_224014;
        case 0x224018u: goto label_224018;
        case 0x22401cu: goto label_22401c;
        case 0x224020u: goto label_224020;
        case 0x224024u: goto label_224024;
        case 0x224028u: goto label_224028;
        case 0x22402cu: goto label_22402c;
        case 0x224030u: goto label_224030;
        case 0x224034u: goto label_224034;
        case 0x224038u: goto label_224038;
        case 0x22403cu: goto label_22403c;
        case 0x224040u: goto label_224040;
        case 0x224044u: goto label_224044;
        case 0x224048u: goto label_224048;
        case 0x22404cu: goto label_22404c;
        case 0x224050u: goto label_224050;
        case 0x224054u: goto label_224054;
        case 0x224058u: goto label_224058;
        case 0x22405cu: goto label_22405c;
        case 0x224060u: goto label_224060;
        case 0x224064u: goto label_224064;
        case 0x224068u: goto label_224068;
        case 0x22406cu: goto label_22406c;
        case 0x224070u: goto label_224070;
        case 0x224074u: goto label_224074;
        case 0x224078u: goto label_224078;
        case 0x22407cu: goto label_22407c;
        case 0x224080u: goto label_224080;
        case 0x224084u: goto label_224084;
        case 0x224088u: goto label_224088;
        case 0x22408cu: goto label_22408c;
        case 0x224090u: goto label_224090;
        case 0x224094u: goto label_224094;
        case 0x224098u: goto label_224098;
        case 0x22409cu: goto label_22409c;
        case 0x2240a0u: goto label_2240a0;
        case 0x2240a4u: goto label_2240a4;
        case 0x2240a8u: goto label_2240a8;
        case 0x2240acu: goto label_2240ac;
        case 0x2240b0u: goto label_2240b0;
        case 0x2240b4u: goto label_2240b4;
        case 0x2240b8u: goto label_2240b8;
        case 0x2240bcu: goto label_2240bc;
        case 0x2240c0u: goto label_2240c0;
        case 0x2240c4u: goto label_2240c4;
        case 0x2240c8u: goto label_2240c8;
        case 0x2240ccu: goto label_2240cc;
        case 0x2240d0u: goto label_2240d0;
        case 0x2240d4u: goto label_2240d4;
        case 0x2240d8u: goto label_2240d8;
        case 0x2240dcu: goto label_2240dc;
        case 0x2240e0u: goto label_2240e0;
        case 0x2240e4u: goto label_2240e4;
        case 0x2240e8u: goto label_2240e8;
        case 0x2240ecu: goto label_2240ec;
        case 0x2240f0u: goto label_2240f0;
        case 0x2240f4u: goto label_2240f4;
        case 0x2240f8u: goto label_2240f8;
        case 0x2240fcu: goto label_2240fc;
        case 0x224100u: goto label_224100;
        case 0x224104u: goto label_224104;
        case 0x224108u: goto label_224108;
        case 0x22410cu: goto label_22410c;
        case 0x224110u: goto label_224110;
        case 0x224114u: goto label_224114;
        case 0x224118u: goto label_224118;
        case 0x22411cu: goto label_22411c;
        case 0x224120u: goto label_224120;
        case 0x224124u: goto label_224124;
        case 0x224128u: goto label_224128;
        case 0x22412cu: goto label_22412c;
        case 0x224130u: goto label_224130;
        case 0x224134u: goto label_224134;
        case 0x224138u: goto label_224138;
        case 0x22413cu: goto label_22413c;
        case 0x224140u: goto label_224140;
        case 0x224144u: goto label_224144;
        case 0x224148u: goto label_224148;
        case 0x22414cu: goto label_22414c;
        case 0x224150u: goto label_224150;
        case 0x224154u: goto label_224154;
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241b4u: goto label_2241b4;
        case 0x2241b8u: goto label_2241b8;
        case 0x2241bcu: goto label_2241bc;
        case 0x2241c0u: goto label_2241c0;
        case 0x2241c4u: goto label_2241c4;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241ccu: goto label_2241cc;
        case 0x2241d0u: goto label_2241d0;
        case 0x2241d4u: goto label_2241d4;
        case 0x2241d8u: goto label_2241d8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241e0u: goto label_2241e0;
        case 0x2241e4u: goto label_2241e4;
        case 0x2241e8u: goto label_2241e8;
        case 0x2241ecu: goto label_2241ec;
        case 0x2241f0u: goto label_2241f0;
        case 0x2241f4u: goto label_2241f4;
        case 0x2241f8u: goto label_2241f8;
        case 0x2241fcu: goto label_2241fc;
        case 0x224200u: goto label_224200;
        case 0x224204u: goto label_224204;
        case 0x224208u: goto label_224208;
        case 0x22420cu: goto label_22420c;
        case 0x224210u: goto label_224210;
        case 0x224214u: goto label_224214;
        case 0x224218u: goto label_224218;
        case 0x22421cu: goto label_22421c;
        case 0x224220u: goto label_224220;
        case 0x224224u: goto label_224224;
        case 0x224228u: goto label_224228;
        case 0x22422cu: goto label_22422c;
        case 0x224230u: goto label_224230;
        case 0x224234u: goto label_224234;
        case 0x224238u: goto label_224238;
        case 0x22423cu: goto label_22423c;
        case 0x224240u: goto label_224240;
        case 0x224244u: goto label_224244;
        case 0x224248u: goto label_224248;
        case 0x22424cu: goto label_22424c;
        case 0x224250u: goto label_224250;
        case 0x224254u: goto label_224254;
        case 0x224258u: goto label_224258;
        case 0x22425cu: goto label_22425c;
        case 0x224260u: goto label_224260;
        case 0x224264u: goto label_224264;
        case 0x224268u: goto label_224268;
        case 0x22426cu: goto label_22426c;
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        case 0x224388u: goto label_224388;
        case 0x22438cu: goto label_22438c;
        case 0x224390u: goto label_224390;
        case 0x224394u: goto label_224394;
        case 0x224398u: goto label_224398;
        case 0x22439cu: goto label_22439c;
        case 0x2243a0u: goto label_2243a0;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243a8u: goto label_2243a8;
        case 0x2243acu: goto label_2243ac;
        case 0x2243b0u: goto label_2243b0;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243b8u: goto label_2243b8;
        case 0x2243bcu: goto label_2243bc;
        case 0x2243c0u: goto label_2243c0;
        case 0x2243c4u: goto label_2243c4;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243ccu: goto label_2243cc;
        case 0x2243d0u: goto label_2243d0;
        case 0x2243d4u: goto label_2243d4;
        case 0x2243d8u: goto label_2243d8;
        case 0x2243dcu: goto label_2243dc;
        case 0x2243e0u: goto label_2243e0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243e8u: goto label_2243e8;
        case 0x2243ecu: goto label_2243ec;
        case 0x2243f0u: goto label_2243f0;
        case 0x2243f4u: goto label_2243f4;
        case 0x2243f8u: goto label_2243f8;
        case 0x2243fcu: goto label_2243fc;
        case 0x224400u: goto label_224400;
        case 0x224404u: goto label_224404;
        case 0x224408u: goto label_224408;
        case 0x22440cu: goto label_22440c;
        case 0x224410u: goto label_224410;
        case 0x224414u: goto label_224414;
        case 0x224418u: goto label_224418;
        case 0x22441cu: goto label_22441c;
        case 0x224420u: goto label_224420;
        case 0x224424u: goto label_224424;
        case 0x224428u: goto label_224428;
        case 0x22442cu: goto label_22442c;
        case 0x224430u: goto label_224430;
        case 0x224434u: goto label_224434;
        case 0x224438u: goto label_224438;
        case 0x22443cu: goto label_22443c;
        case 0x224440u: goto label_224440;
        case 0x224444u: goto label_224444;
        case 0x224448u: goto label_224448;
        case 0x22444cu: goto label_22444c;
        case 0x224450u: goto label_224450;
        case 0x224454u: goto label_224454;
        case 0x224458u: goto label_224458;
        case 0x22445cu: goto label_22445c;
        case 0x224460u: goto label_224460;
        case 0x224464u: goto label_224464;
        case 0x224468u: goto label_224468;
        case 0x22446cu: goto label_22446c;
        case 0x224470u: goto label_224470;
        case 0x224474u: goto label_224474;
        case 0x224478u: goto label_224478;
        case 0x22447cu: goto label_22447c;
        case 0x224480u: goto label_224480;
        case 0x224484u: goto label_224484;
        case 0x224488u: goto label_224488;
        case 0x22448cu: goto label_22448c;
        case 0x224490u: goto label_224490;
        case 0x224494u: goto label_224494;
        case 0x224498u: goto label_224498;
        case 0x22449cu: goto label_22449c;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244dcu: goto label_2244dc;
        case 0x2244e0u: goto label_2244e0;
        case 0x2244e4u: goto label_2244e4;
        case 0x2244e8u: goto label_2244e8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244f0u: goto label_2244f0;
        case 0x2244f4u: goto label_2244f4;
        case 0x2244f8u: goto label_2244f8;
        case 0x2244fcu: goto label_2244fc;
        case 0x224500u: goto label_224500;
        case 0x224504u: goto label_224504;
        case 0x224508u: goto label_224508;
        case 0x22450cu: goto label_22450c;
        case 0x224510u: goto label_224510;
        case 0x224514u: goto label_224514;
        case 0x224518u: goto label_224518;
        case 0x22451cu: goto label_22451c;
        case 0x224520u: goto label_224520;
        case 0x224524u: goto label_224524;
        case 0x224528u: goto label_224528;
        case 0x22452cu: goto label_22452c;
        default: break;
    }

    ctx->pc = 0x224010u;

label_224010:
    // 0x224010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_224014:
    // 0x224014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224018:
    // 0x224018: 0xc088acc  jal         func_222B30
label_22401c:
    if (ctx->pc == 0x22401Cu) {
        ctx->pc = 0x224020u;
        goto label_224020;
    }
    ctx->pc = 0x224018u;
    SET_GPR_U32(ctx, 31, 0x224020u);
    ctx->pc = 0x222B30u;
    if (runtime->hasFunction(0x222B30u)) {
        auto targetFn = runtime->lookupFunction(0x222B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224020u; }
        if (ctx->pc != 0x224020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222B30_0x222b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224020u; }
        if (ctx->pc != 0x224020u) { return; }
    }
    ctx->pc = 0x224020u;
label_224020:
    // 0x224020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224024:
    // 0x224024: 0x3e00008  jr          $ra
label_224028:
    if (ctx->pc == 0x224028u) {
        ctx->pc = 0x224028u;
            // 0x224028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22402Cu;
        goto label_22402c;
    }
    ctx->pc = 0x224024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224024u;
            // 0x224028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22402Cu;
label_22402c:
    // 0x22402c: 0x0  nop
    ctx->pc = 0x22402cu;
    // NOP
label_224030:
    // 0x224030: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x224030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_224034:
    // 0x224034: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x224034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_224038:
    // 0x224038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22403c:
    // 0x22403c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224040:
    // 0x224040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224044:
    // 0x224044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224048:
    // 0x224048: 0xc0892d0  jal         func_224B40
label_22404c:
    if (ctx->pc == 0x22404Cu) {
        ctx->pc = 0x22404Cu;
            // 0x22404c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x224050u;
        goto label_224050;
    }
    ctx->pc = 0x224048u;
    SET_GPR_U32(ctx, 31, 0x224050u);
    ctx->pc = 0x22404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224048u;
            // 0x22404c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224050u; }
        if (ctx->pc != 0x224050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224050u; }
        if (ctx->pc != 0x224050u) { return; }
    }
    ctx->pc = 0x224050u;
label_224050:
    // 0x224050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224054:
    // 0x224054: 0xc088f98  jal         func_223E60
label_224058:
    if (ctx->pc == 0x224058u) {
        ctx->pc = 0x224058u;
            // 0x224058: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22405Cu;
        goto label_22405c;
    }
    ctx->pc = 0x224054u;
    SET_GPR_U32(ctx, 31, 0x22405Cu);
    ctx->pc = 0x224058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224054u;
            // 0x224058: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (runtime->hasFunction(0x223E60u)) {
        auto targetFn = runtime->lookupFunction(0x223E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22405Cu; }
        if (ctx->pc != 0x22405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223E60_0x223e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22405Cu; }
        if (ctx->pc != 0x22405Cu) { return; }
    }
    ctx->pc = 0x22405Cu;
label_22405c:
    // 0x22405c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_224060:
    // 0x224060: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_224064:
    // 0x224064: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x224064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_224068:
    // 0x224068: 0xc0a7a88  jal         func_29EA20
label_22406c:
    if (ctx->pc == 0x22406Cu) {
        ctx->pc = 0x22406Cu;
            // 0x22406c: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x224070u;
        goto label_224070;
    }
    ctx->pc = 0x224068u;
    SET_GPR_U32(ctx, 31, 0x224070u);
    ctx->pc = 0x22406Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224068u;
            // 0x22406c: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224070u; }
        if (ctx->pc != 0x224070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224070u; }
        if (ctx->pc != 0x224070u) { return; }
    }
    ctx->pc = 0x224070u;
label_224070:
    // 0x224070: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x224070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_224074:
    // 0x224074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224078:
    // 0x224078: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22407c:
    if (ctx->pc == 0x22407Cu) {
        ctx->pc = 0x22407Cu;
            // 0x22407c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x224080u;
        goto label_224080;
    }
    ctx->pc = 0x224078u;
    {
        const bool branch_taken_0x224078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224078u;
            // 0x22407c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224078) {
            ctx->pc = 0x22408Cu;
            goto label_22408c;
        }
    }
    ctx->pc = 0x224080u;
label_224080:
    // 0x224080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224084:
    // 0x224084: 0xc088ef4  jal         func_223BD0
label_224088:
    if (ctx->pc == 0x224088u) {
        ctx->pc = 0x224088u;
            // 0x224088: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22408Cu;
        goto label_22408c;
    }
    ctx->pc = 0x224084u;
    SET_GPR_U32(ctx, 31, 0x22408Cu);
    ctx->pc = 0x224088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224084u;
            // 0x224088: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22408Cu; }
        if (ctx->pc != 0x22408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22408Cu; }
        if (ctx->pc != 0x22408Cu) { return; }
    }
    ctx->pc = 0x22408Cu;
label_22408c:
    // 0x22408c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x22408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_224090:
    // 0x224090: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x224090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_224094:
    // 0x224094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224098:
    // 0x224098: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x224098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22409c:
    // 0x22409c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x22409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2240a0:
    // 0x2240a0: 0x2845000d  slti        $a1, $v0, 0xD
    ctx->pc = 0x2240a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_2240a4:
    // 0x2240a4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_2240a8:
    // 0x2240a8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2240a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2240ac:
    // 0x2240ac: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2240acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_2240b0:
    // 0x2240b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2240b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2240b4:
    // 0x2240b4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2240b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_2240b8:
    // 0x2240b8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2240b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2240bc:
    // 0x2240bc: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2240bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_2240c0:
    // 0x2240c0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2240c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2240c4:
    // 0x2240c4: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x2240c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
label_2240c8:
    // 0x2240c8: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2240c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2240cc:
    // 0x2240cc: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x2240ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_2240d0:
    // 0x2240d0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2240d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2240d4:
    // 0x2240d4: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x2240d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
label_2240d8:
    // 0x2240d8: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x2240d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2240dc:
    // 0x2240dc: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x2240dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
label_2240e0:
    // 0x2240e0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2240e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2240e4:
    // 0x2240e4: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x2240e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_2240e8:
    // 0x2240e8: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2240ec:
    // 0x2240ec: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x2240ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
label_2240f0:
    // 0x2240f0: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x2240f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2240f4:
    // 0x2240f4: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x2240f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
label_2240f8:
    // 0x2240f8: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x2240f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2240fc:
    // 0x2240fc: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x2240fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
label_224100:
    // 0x224100: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x224100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_224104:
    // 0x224104: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x224104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_224108:
    // 0x224108: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x224108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_22410c:
    // 0x22410c: 0xac660034  sw          $a2, 0x34($v1)
    ctx->pc = 0x22410cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 6));
label_224110:
    // 0x224110: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x224110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_224114:
    // 0x224114: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x224114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
label_224118:
    // 0x224118: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x224118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_22411c:
    // 0x22411c: 0xac66003c  sw          $a2, 0x3C($v1)
    ctx->pc = 0x22411cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
label_224120:
    // 0x224120: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x224120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_224124:
    // 0x224124: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x224124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
label_224128:
    // 0x224128: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x224128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_22412c:
    // 0x22412c: 0xac660044  sw          $a2, 0x44($v1)
    ctx->pc = 0x22412cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 6));
label_224130:
    // 0x224130: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x224130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_224134:
    // 0x224134: 0xac660048  sw          $a2, 0x48($v1)
    ctx->pc = 0x224134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 6));
label_224138:
    // 0x224138: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x224138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_22413c:
    // 0x22413c: 0xac66004c  sw          $a2, 0x4C($v1)
    ctx->pc = 0x22413cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 6));
label_224140:
    // 0x224140: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x224140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_224144:
    // 0x224144: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x224144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
label_224148:
    // 0x224148: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x224148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_22414c:
    // 0x22414c: 0xac660054  sw          $a2, 0x54($v1)
    ctx->pc = 0x22414cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 6));
label_224150:
    // 0x224150: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x224150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_224154:
    // 0x224154: 0xac660058  sw          $a2, 0x58($v1)
    ctx->pc = 0x224154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 6));
label_224158:
    // 0x224158: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22415c:
    // 0x22415c: 0xac66005c  sw          $a2, 0x5C($v1)
    ctx->pc = 0x22415cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 6));
label_224160:
    // 0x224160: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_224164:
    // 0x224164: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
label_224168:
    if (ctx->pc == 0x224168u) {
        ctx->pc = 0x224168u;
            // 0x224168: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x22416Cu;
        goto label_22416c;
    }
    ctx->pc = 0x224164u;
    {
        const bool branch_taken_0x224164 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x224168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224164u;
            // 0x224168: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224164) {
            ctx->pc = 0x224098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224098;
        }
    }
    ctx->pc = 0x22416Cu;
label_22416c:
    // 0x22416c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224170:
    // 0x224170: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x224170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_224174:
    // 0x224174: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_224178:
    // 0x224178: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x224178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_22417c:
    // 0x22417c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x22417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_224180:
    // 0x224180: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x224180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_224184:
    // 0x224184: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x224184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_224188:
    // 0x224188: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x224188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_22418c:
    // 0x22418c: 0x8e2201c0  lw          $v0, 0x1C0($s1)
    ctx->pc = 0x22418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_224190:
    // 0x224190: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
label_224194:
    if (ctx->pc == 0x224194u) {
        ctx->pc = 0x224194u;
            // 0x224194: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x224198u;
        goto label_224198;
    }
    ctx->pc = 0x224190u;
    {
        const bool branch_taken_0x224190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224190) {
            ctx->pc = 0x224194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224190u;
            // 0x224194: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224304u;
            goto label_224304;
        }
    }
    ctx->pc = 0x224198u;
label_224198:
    // 0x224198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22419c:
    // 0x22419c: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x22419cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2241a0:
    // 0x2241a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2241a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2241a4:
    // 0x2241a4: 0xc0a7a88  jal         func_29EA20
label_2241a8:
    if (ctx->pc == 0x2241A8u) {
        ctx->pc = 0x2241A8u;
            // 0x2241a8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x2241ACu;
        goto label_2241ac;
    }
    ctx->pc = 0x2241A4u;
    SET_GPR_U32(ctx, 31, 0x2241ACu);
    ctx->pc = 0x2241A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2241A4u;
            // 0x2241a8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241ACu; }
        if (ctx->pc != 0x2241ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241ACu; }
        if (ctx->pc != 0x2241ACu) { return; }
    }
    ctx->pc = 0x2241ACu;
label_2241ac:
    // 0x2241ac: 0x24030130  addiu       $v1, $zero, 0x130
    ctx->pc = 0x2241acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2241b0:
    // 0x2241b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2241b4:
    if (ctx->pc == 0x2241B4u) {
        ctx->pc = 0x2241B4u;
            // 0x2241b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2241B8u;
        goto label_2241b8;
    }
    ctx->pc = 0x2241B0u;
    {
        const bool branch_taken_0x2241b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241B0u;
            // 0x2241b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241b0) {
            ctx->pc = 0x224200u;
            goto label_224200;
        }
    }
    ctx->pc = 0x2241B8u;
label_2241b8:
    // 0x2241b8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2241bc:
    // 0x2241bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2241c0:
    // 0x2241c0: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_2241c4:
    // 0x2241c4: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x2241c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_2241c8:
    // 0x2241c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2241c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2241cc:
    // 0x2241cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2241ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2241d0:
    // 0x2241d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2241d4:
    // 0x2241d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2241d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2241d8:
    // 0x2241d8: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x2241d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_2241dc:
    // 0x2241dc: 0x2463ec30  addiu       $v1, $v1, -0x13D0
    ctx->pc = 0x2241dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962224));
label_2241e0:
    // 0x2241e0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2241e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2241e4:
    // 0x2241e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2241e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2241e8:
    // 0x2241e8: 0x2484ed90  addiu       $a0, $a0, -0x1270
    ctx->pc = 0x2241e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962576));
label_2241ec:
    // 0x2241ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2241f0:
    // 0x2241f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2241f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2241f4:
    // 0x2241f4: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x2241f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
label_2241f8:
    // 0x2241f8: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x2241f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
label_2241fc:
    // 0x2241fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2241fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_224200:
    // 0x224200: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x224200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
label_224204:
    // 0x224204: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x224204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224208:
    // 0x224208: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x224208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_22420c:
    // 0x22420c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x22420cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224210:
    // 0x224210: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_224214:
    // 0x224214: 0x2865000d  slti        $a1, $v1, 0xD
    ctx->pc = 0x224214u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_224218:
    // 0x224218: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x224218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_22421c:
    // 0x22421c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x22421cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_224220:
    // 0x224220: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x224220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_224224:
    // 0x224224: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x224224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_224228:
    // 0x224228: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x224228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_22422c:
    // 0x22422c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_224230:
    // 0x224230: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x224230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_224234:
    // 0x224234: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x224234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_224238:
    // 0x224238: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x224238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_22423c:
    // 0x22423c: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x22423cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_224240:
    // 0x224240: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x224240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
label_224244:
    // 0x224244: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x224244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_224248:
    // 0x224248: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x224248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_22424c:
    // 0x22424c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x22424cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_224250:
    // 0x224250: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x224250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
label_224254:
    // 0x224254: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x224254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_224258:
    // 0x224258: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x224258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
label_22425c:
    // 0x22425c: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x22425cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_224260:
    // 0x224260: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x224260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_224264:
    // 0x224264: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x224264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_224268:
    // 0x224268: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x224268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
label_22426c:
    // 0x22426c: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x22426cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_224270:
    // 0x224270: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x224270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
label_224274:
    // 0x224274: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x224274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_224278:
    // 0x224278: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x224278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
label_22427c:
    // 0x22427c: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x22427cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_224280:
    // 0x224280: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x224280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
label_224284:
    // 0x224284: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x224284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_224288:
    // 0x224288: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x224288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
label_22428c:
    // 0x22428c: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x22428cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_224290:
    // 0x224290: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x224290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
label_224294:
    // 0x224294: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_224298:
    // 0x224298: 0xac460040  sw          $a2, 0x40($v0)
    ctx->pc = 0x224298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
label_22429c:
    // 0x22429c: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x22429cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2242a0:
    // 0x2242a0: 0xac460044  sw          $a2, 0x44($v0)
    ctx->pc = 0x2242a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 6));
label_2242a4:
    // 0x2242a4: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x2242a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2242a8:
    // 0x2242a8: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x2242a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 6));
label_2242ac:
    // 0x2242ac: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x2242acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2242b0:
    // 0x2242b0: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x2242b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
label_2242b4:
    // 0x2242b4: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x2242b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2242b8:
    // 0x2242b8: 0xac460050  sw          $a2, 0x50($v0)
    ctx->pc = 0x2242b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 6));
label_2242bc:
    // 0x2242bc: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x2242bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2242c0:
    // 0x2242c0: 0xac460054  sw          $a2, 0x54($v0)
    ctx->pc = 0x2242c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 6));
label_2242c4:
    // 0x2242c4: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x2242c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2242c8:
    // 0x2242c8: 0xac460058  sw          $a2, 0x58($v0)
    ctx->pc = 0x2242c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 6));
label_2242cc:
    // 0x2242cc: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x2242ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2242d0:
    // 0x2242d0: 0xac46005c  sw          $a2, 0x5C($v0)
    ctx->pc = 0x2242d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 6));
label_2242d4:
    // 0x2242d4: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2242d8:
    // 0x2242d8: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
label_2242dc:
    if (ctx->pc == 0x2242DCu) {
        ctx->pc = 0x2242DCu;
            // 0x2242dc: 0x24420060  addiu       $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x2242E0u;
        goto label_2242e0;
    }
    ctx->pc = 0x2242D8u;
    {
        const bool branch_taken_0x2242d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2242DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242D8u;
            // 0x2242dc: 0x24420060  addiu       $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242d8) {
            ctx->pc = 0x22420Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22420c;
        }
    }
    ctx->pc = 0x2242E0u;
label_2242e0:
    // 0x2242e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2242e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2242e4:
    // 0x2242e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2242e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2242e8:
    // 0x2242e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2242e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2242ec:
    // 0x2242ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2242ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2242f0:
    // 0x2242f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2242f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2242f4:
    // 0x2242f4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2242f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2242f8:
    // 0x2242f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2242f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2242fc:
    // 0x2242fc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2242fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_224300:
    // 0x224300: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x224300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224304:
    // 0x224304: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x224304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_224308:
    // 0x224308: 0x320f809  jalr        $t9
label_22430c:
    if (ctx->pc == 0x22430Cu) {
        ctx->pc = 0x22430Cu;
            // 0x22430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224310u;
        goto label_224310;
    }
    ctx->pc = 0x224308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224310u);
        ctx->pc = 0x22430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224308u;
            // 0x22430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224310u; }
            if (ctx->pc != 0x224310u) { return; }
        }
        }
    }
    ctx->pc = 0x224310u;
label_224310:
    // 0x224310: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x224310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_224314:
    // 0x224314: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x224314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_224318:
    // 0x224318: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x224318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_22431c:
    // 0x22431c: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22431cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
label_224320:
    // 0x224320: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x224320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_224324:
    // 0x224324: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x224324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_224328:
    // 0x224328: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_22432c:
    if (ctx->pc == 0x22432Cu) {
        ctx->pc = 0x22432Cu;
            // 0x22432c: 0x26320050  addiu       $s2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x224330u;
        goto label_224330;
    }
    ctx->pc = 0x224328u;
    {
        const bool branch_taken_0x224328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224328u;
            // 0x22432c: 0x26320050  addiu       $s2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224328) {
            ctx->pc = 0x224390u;
            goto label_224390;
        }
    }
    ctx->pc = 0x224330u;
label_224330:
    // 0x224330: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x224330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_224334:
    // 0x224334: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x224334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_224338:
    // 0x224338: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22433c:
    // 0x22433c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_224340:
    if (ctx->pc == 0x224340u) {
        ctx->pc = 0x224340u;
            // 0x224340: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x224344u;
        goto label_224344;
    }
    ctx->pc = 0x22433Cu;
    {
        const bool branch_taken_0x22433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22433c) {
            ctx->pc = 0x224340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22433Cu;
            // 0x224340: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224360u;
            goto label_224360;
        }
    }
    ctx->pc = 0x224344u;
label_224344:
    // 0x224344: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_224348:
    // 0x224348: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x224348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22434c:
    // 0x22434c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22434cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_224350:
    // 0x224350: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x224350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_224354:
    // 0x224354: 0xc0a7ab4  jal         func_29EAD0
label_224358:
    if (ctx->pc == 0x224358u) {
        ctx->pc = 0x224358u;
            // 0x224358: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x22435Cu;
        goto label_22435c;
    }
    ctx->pc = 0x224354u;
    SET_GPR_U32(ctx, 31, 0x22435Cu);
    ctx->pc = 0x224358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224354u;
            // 0x224358: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22435Cu; }
        if (ctx->pc != 0x22435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22435Cu; }
        if (ctx->pc != 0x22435Cu) { return; }
    }
    ctx->pc = 0x22435Cu;
label_22435c:
    // 0x22435c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_224360:
    // 0x224360: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x224360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_224364:
    // 0x224364: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_224368:
    // 0x224368: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x224368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22436c:
    // 0x22436c: 0xc0a7a88  jal         func_29EA20
label_224370:
    if (ctx->pc == 0x224370u) {
        ctx->pc = 0x224370u;
            // 0x224370: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x224374u;
        goto label_224374;
    }
    ctx->pc = 0x22436Cu;
    SET_GPR_U32(ctx, 31, 0x224374u);
    ctx->pc = 0x224370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22436Cu;
            // 0x224370: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224374u; }
        if (ctx->pc != 0x224374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224374u; }
        if (ctx->pc != 0x224374u) { return; }
    }
    ctx->pc = 0x224374u;
label_224374:
    // 0x224374: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x224374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_224378:
    // 0x224378: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x224378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22437c:
    // 0x22437c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_224380:
    // 0x224380: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x224380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_224384:
    // 0x224384: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x224384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_224388:
    // 0x224388: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x224388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22438c:
    // 0x22438c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x22438cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_224390:
    // 0x224390: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x224390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_224394:
    // 0x224394: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x224394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_224398:
    // 0x224398: 0x8e27004c  lw          $a3, 0x4C($s1)
    ctx->pc = 0x224398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_22439c:
    // 0x22439c: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x22439cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2243a0:
    // 0x2243a0: 0x18600057  blez        $v1, . + 4 + (0x57 << 2)
label_2243a4:
    if (ctx->pc == 0x2243A4u) {
        ctx->pc = 0x2243A4u;
            // 0x2243a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2243A8u;
        goto label_2243a8;
    }
    ctx->pc = 0x2243A0u;
    {
        const bool branch_taken_0x2243a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2243A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243A0u;
            // 0x2243a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243a0) {
            ctx->pc = 0x224500u;
            goto label_224500;
        }
    }
    ctx->pc = 0x2243A8u;
label_2243a8:
    // 0x2243a8: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2243a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2243ac:
    // 0x2243ac: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
label_2243b0:
    if (ctx->pc == 0x2243B0u) {
        ctx->pc = 0x2243B0u;
            // 0x2243b0: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x2243B4u;
        goto label_2243b4;
    }
    ctx->pc = 0x2243ACu;
    {
        const bool branch_taken_0x2243ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243ACu;
            // 0x2243b0: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243ac) {
            ctx->pc = 0x2244B8u;
            goto label_2244b8;
        }
    }
    ctx->pc = 0x2243B4u;
label_2243b4:
    // 0x2243b4: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_2243b8:
    if (ctx->pc == 0x2243B8u) {
        ctx->pc = 0x2243B8u;
            // 0x2243b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2243BCu;
        goto label_2243bc;
    }
    ctx->pc = 0x2243B4u;
    {
        const bool branch_taken_0x2243b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2243B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243B4u;
            // 0x2243b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243b4) {
            ctx->pc = 0x2243D4u;
            goto label_2243d4;
        }
    }
    ctx->pc = 0x2243BCu;
label_2243bc:
    // 0x2243bc: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x2243bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_2243c0:
    // 0x2243c0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2243c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_2243c4:
    // 0x2243c4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x2243c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2243c8:
    // 0x2243c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2243cc:
    if (ctx->pc == 0x2243CCu) {
        ctx->pc = 0x2243D0u;
        goto label_2243d0;
    }
    ctx->pc = 0x2243C8u;
    {
        const bool branch_taken_0x2243c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2243c8) {
            ctx->pc = 0x2243D4u;
            goto label_2243d4;
        }
    }
    ctx->pc = 0x2243D0u;
label_2243d0:
    // 0x2243d0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2243d0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2243d4:
    // 0x2243d4: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_2243d8:
    if (ctx->pc == 0x2243D8u) {
        ctx->pc = 0x2243DCu;
        goto label_2243dc;
    }
    ctx->pc = 0x2243D4u;
    {
        const bool branch_taken_0x2243d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2243d4) {
            ctx->pc = 0x2244B8u;
            goto label_2244b8;
        }
    }
    ctx->pc = 0x2243DCu;
label_2243dc:
    // 0x2243dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2243dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2243e0:
    // 0x2243e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2243e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2243e4:
    // 0x2243e4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2243e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2243e8:
    // 0x2243e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2243e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2243ec:
    // 0x2243ec: 0xc2482a  slt         $t1, $a2, $v0
    ctx->pc = 0x2243ecu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2243f0:
    // 0x2243f0: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x2243f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
label_2243f4:
    // 0x2243f4: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2243f8:
    // 0x2243f8: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x2243f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
label_2243fc:
    // 0x2243fc: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x2243fcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_224400:
    // 0x224400: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x224400u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_224404:
    // 0x224404: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_224408:
    // 0x224408: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x224408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
label_22440c:
    // 0x22440c: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x22440cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_224410:
    // 0x224410: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x224410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
label_224414:
    // 0x224414: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x224414u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_224418:
    // 0x224418: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x224418u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
label_22441c:
    // 0x22441c: 0x8caa0020  lw          $t2, 0x20($a1)
    ctx->pc = 0x22441cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_224420:
    // 0x224420: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x224420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
label_224424:
    // 0x224424: 0x8caa0024  lw          $t2, 0x24($a1)
    ctx->pc = 0x224424u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_224428:
    // 0x224428: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x224428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
label_22442c:
    // 0x22442c: 0xdcaa0028  ld          $t2, 0x28($a1)
    ctx->pc = 0x22442cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 40)));
label_224430:
    // 0x224430: 0xfc8a0028  sd          $t2, 0x28($a0)
    ctx->pc = 0x224430u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 10));
label_224434:
    // 0x224434: 0x8caa0030  lw          $t2, 0x30($a1)
    ctx->pc = 0x224434u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_224438:
    // 0x224438: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x224438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
label_22443c:
    // 0x22443c: 0x8caa0034  lw          $t2, 0x34($a1)
    ctx->pc = 0x22443cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_224440:
    // 0x224440: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x224440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
label_224444:
    // 0x224444: 0xdcaa0038  ld          $t2, 0x38($a1)
    ctx->pc = 0x224444u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 56)));
label_224448:
    // 0x224448: 0xfc8a0038  sd          $t2, 0x38($a0)
    ctx->pc = 0x224448u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 10));
label_22444c:
    // 0x22444c: 0x8caa0040  lw          $t2, 0x40($a1)
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_224450:
    // 0x224450: 0xac8a0040  sw          $t2, 0x40($a0)
    ctx->pc = 0x224450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 10));
label_224454:
    // 0x224454: 0x8caa0044  lw          $t2, 0x44($a1)
    ctx->pc = 0x224454u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_224458:
    // 0x224458: 0xac8a0044  sw          $t2, 0x44($a0)
    ctx->pc = 0x224458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 10));
label_22445c:
    // 0x22445c: 0xdcaa0048  ld          $t2, 0x48($a1)
    ctx->pc = 0x22445cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 72)));
label_224460:
    // 0x224460: 0xfc8a0048  sd          $t2, 0x48($a0)
    ctx->pc = 0x224460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 10));
label_224464:
    // 0x224464: 0x8caa0050  lw          $t2, 0x50($a1)
    ctx->pc = 0x224464u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_224468:
    // 0x224468: 0xac8a0050  sw          $t2, 0x50($a0)
    ctx->pc = 0x224468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 10));
label_22446c:
    // 0x22446c: 0x8caa0054  lw          $t2, 0x54($a1)
    ctx->pc = 0x22446cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_224470:
    // 0x224470: 0xac8a0054  sw          $t2, 0x54($a0)
    ctx->pc = 0x224470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 10));
label_224474:
    // 0x224474: 0xdcaa0058  ld          $t2, 0x58($a1)
    ctx->pc = 0x224474u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 88)));
label_224478:
    // 0x224478: 0xfc8a0058  sd          $t2, 0x58($a0)
    ctx->pc = 0x224478u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 10));
label_22447c:
    // 0x22447c: 0x8caa0060  lw          $t2, 0x60($a1)
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
label_224480:
    // 0x224480: 0xac8a0060  sw          $t2, 0x60($a0)
    ctx->pc = 0x224480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 10));
label_224484:
    // 0x224484: 0x8caa0064  lw          $t2, 0x64($a1)
    ctx->pc = 0x224484u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_224488:
    // 0x224488: 0xac8a0064  sw          $t2, 0x64($a0)
    ctx->pc = 0x224488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 10));
label_22448c:
    // 0x22448c: 0xdcaa0068  ld          $t2, 0x68($a1)
    ctx->pc = 0x22448cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 104)));
label_224490:
    // 0x224490: 0xfc8a0068  sd          $t2, 0x68($a0)
    ctx->pc = 0x224490u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 10));
label_224494:
    // 0x224494: 0x8caa0070  lw          $t2, 0x70($a1)
    ctx->pc = 0x224494u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_224498:
    // 0x224498: 0xac8a0070  sw          $t2, 0x70($a0)
    ctx->pc = 0x224498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 10));
label_22449c:
    // 0x22449c: 0x8caa0074  lw          $t2, 0x74($a1)
    ctx->pc = 0x22449cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_2244a0:
    // 0x2244a0: 0xac8a0074  sw          $t2, 0x74($a0)
    ctx->pc = 0x2244a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 10));
label_2244a4:
    // 0x2244a4: 0xdcaa0078  ld          $t2, 0x78($a1)
    ctx->pc = 0x2244a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 120)));
label_2244a8:
    // 0x2244a8: 0xfc8a0078  sd          $t2, 0x78($a0)
    ctx->pc = 0x2244a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 10));
label_2244ac:
    // 0x2244ac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_2244b0:
    // 0x2244b0: 0x1520ffcc  bnez        $t1, . + 4 + (-0x34 << 2)
label_2244b4:
    if (ctx->pc == 0x2244B4u) {
        ctx->pc = 0x2244B4u;
            // 0x2244b4: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->pc = 0x2244B8u;
        goto label_2244b8;
    }
    ctx->pc = 0x2244B0u;
    {
        const bool branch_taken_0x2244b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2244B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2244B0u;
            // 0x2244b4: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244b0) {
            ctx->pc = 0x2243E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2243e4;
        }
    }
    ctx->pc = 0x2244B8u;
label_2244b8:
    // 0x2244b8: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2244b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2244bc:
    // 0x2244bc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2244c0:
    if (ctx->pc == 0x2244C0u) {
        ctx->pc = 0x2244C4u;
        goto label_2244c4;
    }
    ctx->pc = 0x2244BCu;
    {
        const bool branch_taken_0x2244bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2244bc) {
            ctx->pc = 0x224500u;
            goto label_224500;
        }
    }
    ctx->pc = 0x2244C4u;
label_2244c4:
    // 0x2244c4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2244c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2244c8:
    // 0x2244c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2244cc:
    // 0x2244cc: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x2244ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2244d0:
    // 0x2244d0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2244d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2244d4:
    // 0x2244d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2244d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2244d8:
    // 0x2244d8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2244d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2244dc:
    // 0x2244dc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2244dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_2244e0:
    // 0x2244e0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x2244e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2244e4:
    // 0x2244e4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2244e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_2244e8:
    // 0x2244e8: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x2244e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2244ec:
    // 0x2244ec: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x2244ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
label_2244f0:
    // 0x2244f0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2244f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2244f4:
    // 0x2244f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2244f8:
    if (ctx->pc == 0x2244F8u) {
        ctx->pc = 0x2244F8u;
            // 0x2244f8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x2244FCu;
        goto label_2244fc;
    }
    ctx->pc = 0x2244F4u;
    {
        const bool branch_taken_0x2244f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2244F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2244F4u;
            // 0x2244f8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244f4) {
            ctx->pc = 0x2244D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2244d0;
        }
    }
    ctx->pc = 0x2244FCu;
label_2244fc:
    // 0x2244fc: 0x0  nop
    ctx->pc = 0x2244fcu;
    // NOP
label_224500:
    // 0x224500: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x224500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_224504:
    // 0x224504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224508:
    // 0x224508: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x224508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_22450c:
    // 0x22450c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_224510:
    // 0x224510: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x224510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_224514:
    // 0x224514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x224514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_224518:
    // 0x224518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x224518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22451c:
    // 0x22451c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22451cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224520:
    // 0x224520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224524:
    // 0x224524: 0x3e00008  jr          $ra
label_224528:
    if (ctx->pc == 0x224528u) {
        ctx->pc = 0x224528u;
            // 0x224528: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x22452Cu;
        goto label_22452c;
    }
    ctx->pc = 0x224524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224524u;
            // 0x224528: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22452Cu;
label_22452c:
    // 0x22452c: 0x0  nop
    ctx->pc = 0x22452cu;
    // NOP
}
