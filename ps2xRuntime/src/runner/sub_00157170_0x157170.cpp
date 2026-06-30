#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157170
// Address: 0x157170 - 0x1574a0
void sub_00157170_0x157170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157170_0x157170");
#endif

    switch (ctx->pc) {
        case 0x157170u: goto label_157170;
        case 0x157174u: goto label_157174;
        case 0x157178u: goto label_157178;
        case 0x15717cu: goto label_15717c;
        case 0x157180u: goto label_157180;
        case 0x157184u: goto label_157184;
        case 0x157188u: goto label_157188;
        case 0x15718cu: goto label_15718c;
        case 0x157190u: goto label_157190;
        case 0x157194u: goto label_157194;
        case 0x157198u: goto label_157198;
        case 0x15719cu: goto label_15719c;
        case 0x1571a0u: goto label_1571a0;
        case 0x1571a4u: goto label_1571a4;
        case 0x1571a8u: goto label_1571a8;
        case 0x1571acu: goto label_1571ac;
        case 0x1571b0u: goto label_1571b0;
        case 0x1571b4u: goto label_1571b4;
        case 0x1571b8u: goto label_1571b8;
        case 0x1571bcu: goto label_1571bc;
        case 0x1571c0u: goto label_1571c0;
        case 0x1571c4u: goto label_1571c4;
        case 0x1571c8u: goto label_1571c8;
        case 0x1571ccu: goto label_1571cc;
        case 0x1571d0u: goto label_1571d0;
        case 0x1571d4u: goto label_1571d4;
        case 0x1571d8u: goto label_1571d8;
        case 0x1571dcu: goto label_1571dc;
        case 0x1571e0u: goto label_1571e0;
        case 0x1571e4u: goto label_1571e4;
        case 0x1571e8u: goto label_1571e8;
        case 0x1571ecu: goto label_1571ec;
        case 0x1571f0u: goto label_1571f0;
        case 0x1571f4u: goto label_1571f4;
        case 0x1571f8u: goto label_1571f8;
        case 0x1571fcu: goto label_1571fc;
        case 0x157200u: goto label_157200;
        case 0x157204u: goto label_157204;
        case 0x157208u: goto label_157208;
        case 0x15720cu: goto label_15720c;
        case 0x157210u: goto label_157210;
        case 0x157214u: goto label_157214;
        case 0x157218u: goto label_157218;
        case 0x15721cu: goto label_15721c;
        case 0x157220u: goto label_157220;
        case 0x157224u: goto label_157224;
        case 0x157228u: goto label_157228;
        case 0x15722cu: goto label_15722c;
        case 0x157230u: goto label_157230;
        case 0x157234u: goto label_157234;
        case 0x157238u: goto label_157238;
        case 0x15723cu: goto label_15723c;
        case 0x157240u: goto label_157240;
        case 0x157244u: goto label_157244;
        case 0x157248u: goto label_157248;
        case 0x15724cu: goto label_15724c;
        case 0x157250u: goto label_157250;
        case 0x157254u: goto label_157254;
        case 0x157258u: goto label_157258;
        case 0x15725cu: goto label_15725c;
        case 0x157260u: goto label_157260;
        case 0x157264u: goto label_157264;
        case 0x157268u: goto label_157268;
        case 0x15726cu: goto label_15726c;
        case 0x157270u: goto label_157270;
        case 0x157274u: goto label_157274;
        case 0x157278u: goto label_157278;
        case 0x15727cu: goto label_15727c;
        case 0x157280u: goto label_157280;
        case 0x157284u: goto label_157284;
        case 0x157288u: goto label_157288;
        case 0x15728cu: goto label_15728c;
        case 0x157290u: goto label_157290;
        case 0x157294u: goto label_157294;
        case 0x157298u: goto label_157298;
        case 0x15729cu: goto label_15729c;
        case 0x1572a0u: goto label_1572a0;
        case 0x1572a4u: goto label_1572a4;
        case 0x1572a8u: goto label_1572a8;
        case 0x1572acu: goto label_1572ac;
        case 0x1572b0u: goto label_1572b0;
        case 0x1572b4u: goto label_1572b4;
        case 0x1572b8u: goto label_1572b8;
        case 0x1572bcu: goto label_1572bc;
        case 0x1572c0u: goto label_1572c0;
        case 0x1572c4u: goto label_1572c4;
        case 0x1572c8u: goto label_1572c8;
        case 0x1572ccu: goto label_1572cc;
        case 0x1572d0u: goto label_1572d0;
        case 0x1572d4u: goto label_1572d4;
        case 0x1572d8u: goto label_1572d8;
        case 0x1572dcu: goto label_1572dc;
        case 0x1572e0u: goto label_1572e0;
        case 0x1572e4u: goto label_1572e4;
        case 0x1572e8u: goto label_1572e8;
        case 0x1572ecu: goto label_1572ec;
        case 0x1572f0u: goto label_1572f0;
        case 0x1572f4u: goto label_1572f4;
        case 0x1572f8u: goto label_1572f8;
        case 0x1572fcu: goto label_1572fc;
        case 0x157300u: goto label_157300;
        case 0x157304u: goto label_157304;
        case 0x157308u: goto label_157308;
        case 0x15730cu: goto label_15730c;
        case 0x157310u: goto label_157310;
        case 0x157314u: goto label_157314;
        case 0x157318u: goto label_157318;
        case 0x15731cu: goto label_15731c;
        case 0x157320u: goto label_157320;
        case 0x157324u: goto label_157324;
        case 0x157328u: goto label_157328;
        case 0x15732cu: goto label_15732c;
        case 0x157330u: goto label_157330;
        case 0x157334u: goto label_157334;
        case 0x157338u: goto label_157338;
        case 0x15733cu: goto label_15733c;
        case 0x157340u: goto label_157340;
        case 0x157344u: goto label_157344;
        case 0x157348u: goto label_157348;
        case 0x15734cu: goto label_15734c;
        case 0x157350u: goto label_157350;
        case 0x157354u: goto label_157354;
        case 0x157358u: goto label_157358;
        case 0x15735cu: goto label_15735c;
        case 0x157360u: goto label_157360;
        case 0x157364u: goto label_157364;
        case 0x157368u: goto label_157368;
        case 0x15736cu: goto label_15736c;
        case 0x157370u: goto label_157370;
        case 0x157374u: goto label_157374;
        case 0x157378u: goto label_157378;
        case 0x15737cu: goto label_15737c;
        case 0x157380u: goto label_157380;
        case 0x157384u: goto label_157384;
        case 0x157388u: goto label_157388;
        case 0x15738cu: goto label_15738c;
        case 0x157390u: goto label_157390;
        case 0x157394u: goto label_157394;
        case 0x157398u: goto label_157398;
        case 0x15739cu: goto label_15739c;
        case 0x1573a0u: goto label_1573a0;
        case 0x1573a4u: goto label_1573a4;
        case 0x1573a8u: goto label_1573a8;
        case 0x1573acu: goto label_1573ac;
        case 0x1573b0u: goto label_1573b0;
        case 0x1573b4u: goto label_1573b4;
        case 0x1573b8u: goto label_1573b8;
        case 0x1573bcu: goto label_1573bc;
        case 0x1573c0u: goto label_1573c0;
        case 0x1573c4u: goto label_1573c4;
        case 0x1573c8u: goto label_1573c8;
        case 0x1573ccu: goto label_1573cc;
        case 0x1573d0u: goto label_1573d0;
        case 0x1573d4u: goto label_1573d4;
        case 0x1573d8u: goto label_1573d8;
        case 0x1573dcu: goto label_1573dc;
        case 0x1573e0u: goto label_1573e0;
        case 0x1573e4u: goto label_1573e4;
        case 0x1573e8u: goto label_1573e8;
        case 0x1573ecu: goto label_1573ec;
        case 0x1573f0u: goto label_1573f0;
        case 0x1573f4u: goto label_1573f4;
        case 0x1573f8u: goto label_1573f8;
        case 0x1573fcu: goto label_1573fc;
        case 0x157400u: goto label_157400;
        case 0x157404u: goto label_157404;
        case 0x157408u: goto label_157408;
        case 0x15740cu: goto label_15740c;
        case 0x157410u: goto label_157410;
        case 0x157414u: goto label_157414;
        case 0x157418u: goto label_157418;
        case 0x15741cu: goto label_15741c;
        case 0x157420u: goto label_157420;
        case 0x157424u: goto label_157424;
        case 0x157428u: goto label_157428;
        case 0x15742cu: goto label_15742c;
        case 0x157430u: goto label_157430;
        case 0x157434u: goto label_157434;
        case 0x157438u: goto label_157438;
        case 0x15743cu: goto label_15743c;
        case 0x157440u: goto label_157440;
        case 0x157444u: goto label_157444;
        case 0x157448u: goto label_157448;
        case 0x15744cu: goto label_15744c;
        case 0x157450u: goto label_157450;
        case 0x157454u: goto label_157454;
        case 0x157458u: goto label_157458;
        case 0x15745cu: goto label_15745c;
        case 0x157460u: goto label_157460;
        case 0x157464u: goto label_157464;
        case 0x157468u: goto label_157468;
        case 0x15746cu: goto label_15746c;
        case 0x157470u: goto label_157470;
        case 0x157474u: goto label_157474;
        case 0x157478u: goto label_157478;
        case 0x15747cu: goto label_15747c;
        case 0x157480u: goto label_157480;
        case 0x157484u: goto label_157484;
        case 0x157488u: goto label_157488;
        case 0x15748cu: goto label_15748c;
        case 0x157490u: goto label_157490;
        case 0x157494u: goto label_157494;
        case 0x157498u: goto label_157498;
        case 0x15749cu: goto label_15749c;
        default: break;
    }

    ctx->pc = 0x157170u;

label_157170:
    // 0x157170: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x157170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_157174:
    // 0x157174: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x157174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_157178:
    // 0x157178: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x157178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15717c:
    // 0x15717c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_157180:
    // 0x157180: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x157180u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_157184:
    // 0x157184: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x157184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_157188:
    // 0x157188: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x157188u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15718c:
    // 0x15718c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_157190:
    // 0x157190: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_157194:
    // 0x157194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_157198:
    // 0x157198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15719c:
    // 0x15719c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15719cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1571a0:
    // 0x1571a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1571a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1571a4:
    // 0x1571a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1571a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1571a8:
    // 0x1571a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1571a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1571ac:
    // 0x1571ac: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1571b0:
    // 0x1571b0: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1571b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_1571b4:
    // 0x1571b4: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x1571b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
label_1571b8:
    // 0x1571b8: 0xafa800a4  sw          $t0, 0xA4($sp)
    ctx->pc = 0x1571b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 8));
label_1571bc:
    // 0x1571bc: 0x186000ac  blez        $v1, . + 4 + (0xAC << 2)
label_1571c0:
    if (ctx->pc == 0x1571C0u) {
        ctx->pc = 0x1571C0u;
            // 0x1571c0: 0xafa900a0  sw          $t1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
        ctx->pc = 0x1571C4u;
        goto label_1571c4;
    }
    ctx->pc = 0x1571BCu;
    {
        const bool branch_taken_0x1571bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1571C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571BCu;
            // 0x1571c0: 0xafa900a0  sw          $t1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571bc) {
            ctx->pc = 0x157470u;
            goto label_157470;
        }
    }
    ctx->pc = 0x1571C4u;
label_1571c4:
    // 0x1571c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1571c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1571c8:
    // 0x1571c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1571c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1571cc:
    // 0x1571cc: 0xac725774  sw          $s2, 0x5774($v1)
    ctx->pc = 0x1571ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 18));
label_1571d0:
    // 0x1571d0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1571d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1571d4:
    // 0x1571d4: 0xac435770  sw          $v1, 0x5770($v0)
    ctx->pc = 0x1571d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
label_1571d8:
    // 0x1571d8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1571d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1571dc:
    // 0x1571dc: 0xc05001c  jal         func_140070
label_1571e0:
    if (ctx->pc == 0x1571E0u) {
        ctx->pc = 0x1571E0u;
            // 0x1571e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1571E4u;
        goto label_1571e4;
    }
    ctx->pc = 0x1571DCu;
    SET_GPR_U32(ctx, 31, 0x1571E4u);
    ctx->pc = 0x1571E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1571DCu;
            // 0x1571e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140070u;
    if (runtime->hasFunction(0x140070u)) {
        auto targetFn = runtime->lookupFunction(0x140070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571E4u; }
        if (ctx->pc != 0x1571E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571E4u; }
        if (ctx->pc != 0x1571E4u) { return; }
    }
    ctx->pc = 0x1571E4u;
label_1571e4:
    // 0x1571e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1571e8:
    // 0x1571e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1571e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1571ec:
    // 0x1571ec: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x1571ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_1571f0:
    // 0x1571f0: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x1571f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_1571f4:
    // 0x1571f4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1571f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_1571f8:
    // 0x1571f8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x1571f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_1571fc:
    // 0x1571fc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1571fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_157200:
    // 0x157200: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x157200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_157204:
    // 0x157204: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_157208:
    // 0x157208: 0x8e6a0018  lw          $t2, 0x18($s3)
    ctx->pc = 0x157208u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_15720c:
    // 0x15720c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15720cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_157210:
    // 0x157210: 0x8c495768  lw          $t1, 0x5768($v0)
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_157214:
    // 0x157214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_157218:
    // 0x157218: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x157218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
label_15721c:
    // 0x15721c: 0xad0a5760  sw          $t2, 0x5760($t0)
    ctx->pc = 0x15721cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 22368), GPR_U32(ctx, 10));
label_157220:
    // 0x157220: 0x8ee80014  lw          $t0, 0x14($s7)
    ctx->pc = 0x157220u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_157224:
    // 0x157224: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x157224u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_157228:
    // 0x157228: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15722c:
    // 0x15722c: 0xacc9576c  sw          $t1, 0x576C($a2)
    ctx->pc = 0x15722cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22380), GPR_U32(ctx, 9));
label_157230:
    // 0x157230: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x157230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_157234:
    // 0x157234: 0xace6577c  sw          $a2, 0x577C($a3)
    ctx->pc = 0x157234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22396), GPR_U32(ctx, 6));
label_157238:
    // 0x157238: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x157238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_15723c:
    // 0x15723c: 0xaca65768  sw          $a2, 0x5768($a1)
    ctx->pc = 0x15723cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22376), GPR_U32(ctx, 6));
label_157240:
    // 0x157240: 0x8ee5001c  lw          $a1, 0x1C($s7)
    ctx->pc = 0x157240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_157244:
    // 0x157244: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x157244u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_157248:
    // 0x157248: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x157248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15724c:
    // 0x15724c: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x15724cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_157250:
    // 0x157250: 0xc05055c  jal         func_141570
label_157254:
    if (ctx->pc == 0x157254u) {
        ctx->pc = 0x157254u;
            // 0x157254: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->pc = 0x157258u;
        goto label_157258;
    }
    ctx->pc = 0x157250u;
    SET_GPR_U32(ctx, 31, 0x157258u);
    ctx->pc = 0x157254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157250u;
            // 0x157254: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141570u;
    if (runtime->hasFunction(0x141570u)) {
        auto targetFn = runtime->lookupFunction(0x141570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157258u; }
        if (ctx->pc != 0x157258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141570_0x141570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157258u; }
        if (ctx->pc != 0x157258u) { return; }
    }
    ctx->pc = 0x157258u;
label_157258:
    // 0x157258: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_15725c:
    if (ctx->pc == 0x15725Cu) {
        ctx->pc = 0x157260u;
        goto label_157260;
    }
    ctx->pc = 0x157258u;
    {
        const bool branch_taken_0x157258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157258) {
            ctx->pc = 0x157458u;
            goto label_157458;
        }
    }
    ctx->pc = 0x157260u;
label_157260:
    // 0x157260: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_157264:
    // 0x157264: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x157264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_157268:
    // 0x157268: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x157268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_15726c:
    // 0x15726c: 0x8c845828  lw          $a0, 0x5828($a0)
    ctx->pc = 0x15726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22568)));
label_157270:
    // 0x157270: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_157274:
    // 0x157274: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x157274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_157278:
    // 0x157278: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x157278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
label_15727c:
    // 0x15727c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x15727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_157280:
    // 0x157280: 0x18600075  blez        $v1, . + 4 + (0x75 << 2)
label_157284:
    if (ctx->pc == 0x157284u) {
        ctx->pc = 0x157284u;
            // 0x157284: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x157288u;
        goto label_157288;
    }
    ctx->pc = 0x157280u;
    {
        const bool branch_taken_0x157280 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x157284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157280u;
            // 0x157284: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157280) {
            ctx->pc = 0x157458u;
            goto label_157458;
        }
    }
    ctx->pc = 0x157288u;
label_157288:
    // 0x157288: 0x8fb000ac  lw          $s0, 0xAC($sp)
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15728c:
    // 0x15728c: 0x8fb600a8  lw          $s6, 0xA8($sp)
    ctx->pc = 0x15728cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_157290:
    // 0x157290: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x157290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157294:
    // 0x157294: 0x0  nop
    ctx->pc = 0x157294u;
    // NOP
label_157298:
    // 0x157298: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15729c:
    // 0x15729c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1572a0:
    if (ctx->pc == 0x1572A0u) {
        ctx->pc = 0x1572A4u;
        goto label_1572a4;
    }
    ctx->pc = 0x15729Cu;
    {
        const bool branch_taken_0x15729c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15729c) {
            ctx->pc = 0x1572B0u;
            goto label_1572b0;
        }
    }
    ctx->pc = 0x1572A4u;
label_1572a4:
    // 0x1572a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1572a8:
    if (ctx->pc == 0x1572A8u) {
        ctx->pc = 0x1572A8u;
            // 0x1572a8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1572ACu;
        goto label_1572ac;
    }
    ctx->pc = 0x1572A4u;
    {
        const bool branch_taken_0x1572a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572A4u;
            // 0x1572a8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572a4) {
            ctx->pc = 0x1572C0u;
            goto label_1572c0;
        }
    }
    ctx->pc = 0x1572ACu;
label_1572ac:
    // 0x1572ac: 0x0  nop
    ctx->pc = 0x1572acu;
    // NOP
label_1572b0:
    // 0x1572b0: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1572b4:
    // 0x1572b4: 0x12800060  beqz        $s4, . + 4 + (0x60 << 2)
label_1572b8:
    if (ctx->pc == 0x1572B8u) {
        ctx->pc = 0x1572BCu;
        goto label_1572bc;
    }
    ctx->pc = 0x1572B4u;
    {
        const bool branch_taken_0x1572b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1572b4) {
            ctx->pc = 0x157438u;
            goto label_157438;
        }
    }
    ctx->pc = 0x1572BCu;
label_1572bc:
    // 0x1572bc: 0x0  nop
    ctx->pc = 0x1572bcu;
    // NOP
label_1572c0:
    // 0x1572c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1572c4:
    // 0x1572c4: 0xac545788  sw          $s4, 0x5788($v0)
    ctx->pc = 0x1572c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22408), GPR_U32(ctx, 20));
label_1572c8:
    // 0x1572c8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1572c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1572cc:
    // 0x1572cc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_1572d0:
    if (ctx->pc == 0x1572D0u) {
        ctx->pc = 0x1572D0u;
            // 0x1572d0: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x1572D4u;
        goto label_1572d4;
    }
    ctx->pc = 0x1572CCu;
    {
        const bool branch_taken_0x1572cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572cc) {
            ctx->pc = 0x1572D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1572CCu;
            // 0x1572d0: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1572D8u;
            goto label_1572d8;
        }
    }
    ctx->pc = 0x1572D4u;
label_1572d4:
    // 0x1572d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1572d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1572d8:
    // 0x1572d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1572d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1572dc:
    // 0x1572dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1572e0:
    if (ctx->pc == 0x1572E0u) {
        ctx->pc = 0x1572E0u;
            // 0x1572e0: 0xac43578c  sw          $v1, 0x578C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 3));
        ctx->pc = 0x1572E4u;
        goto label_1572e4;
    }
    ctx->pc = 0x1572DCu;
    {
        const bool branch_taken_0x1572dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572DCu;
            // 0x1572e0: 0xac43578c  sw          $v1, 0x578C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572dc) {
            ctx->pc = 0x1572FCu;
            goto label_1572fc;
        }
    }
    ctx->pc = 0x1572E4u;
label_1572e4:
    // 0x1572e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1572e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1572e8:
    // 0x1572e8: 0x8c425770  lw          $v0, 0x5770($v0)
    ctx->pc = 0x1572e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22384)));
label_1572ec:
    // 0x1572ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1572ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1572f0:
    // 0x1572f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1572f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1572f4:
    // 0x1572f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1572f8:
    if (ctx->pc == 0x1572F8u) {
        ctx->pc = 0x1572F8u;
            // 0x1572f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1572FCu;
        goto label_1572fc;
    }
    ctx->pc = 0x1572F4u;
    {
        const bool branch_taken_0x1572f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572F4u;
            // 0x1572f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572f4) {
            ctx->pc = 0x157300u;
            goto label_157300;
        }
    }
    ctx->pc = 0x1572FCu;
label_1572fc:
    // 0x1572fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1572fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157300:
    // 0x157300: 0xc0557d8  jal         func_155F60
label_157304:
    if (ctx->pc == 0x157304u) {
        ctx->pc = 0x157308u;
        goto label_157308;
    }
    ctx->pc = 0x157300u;
    SET_GPR_U32(ctx, 31, 0x157308u);
    ctx->pc = 0x155F60u;
    if (runtime->hasFunction(0x155F60u)) {
        auto targetFn = runtime->lookupFunction(0x155F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157308u; }
        if (ctx->pc != 0x157308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155F60_0x155f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157308u; }
        if (ctx->pc != 0x157308u) { return; }
    }
    ctx->pc = 0x157308u;
label_157308:
    // 0x157308: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_15730c:
    if (ctx->pc == 0x15730Cu) {
        ctx->pc = 0x157310u;
        goto label_157310;
    }
    ctx->pc = 0x157308u;
    {
        const bool branch_taken_0x157308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157308) {
            ctx->pc = 0x157438u;
            goto label_157438;
        }
    }
    ctx->pc = 0x157310u;
label_157310:
    // 0x157310: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_157314:
    // 0x157314: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x157314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_157318:
    // 0x157318: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15731c:
    if (ctx->pc == 0x15731Cu) {
        ctx->pc = 0x157320u;
        goto label_157320;
    }
    ctx->pc = 0x157318u;
    {
        const bool branch_taken_0x157318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157318) {
            ctx->pc = 0x157340u;
            goto label_157340;
        }
    }
    ctx->pc = 0x157320u;
label_157320:
    // 0x157320: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x157320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_157324:
    // 0x157324: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_157328:
    // 0x157328: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x157328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
label_15732c:
    // 0x15732c: 0xc04cd60  jal         func_133580
label_157330:
    if (ctx->pc == 0x157330u) {
        ctx->pc = 0x157330u;
            // 0x157330: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x157334u;
        goto label_157334;
    }
    ctx->pc = 0x15732Cu;
    SET_GPR_U32(ctx, 31, 0x157334u);
    ctx->pc = 0x157330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15732Cu;
            // 0x157330: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157334u; }
        if (ctx->pc != 0x157334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157334u; }
        if (ctx->pc != 0x157334u) { return; }
    }
    ctx->pc = 0x157334u;
label_157334:
    // 0x157334: 0xc04fe9c  jal         func_13FA70
label_157338:
    if (ctx->pc == 0x157338u) {
        ctx->pc = 0x157338u;
            // 0x157338: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15733Cu;
        goto label_15733c;
    }
    ctx->pc = 0x157334u;
    SET_GPR_U32(ctx, 31, 0x15733Cu);
    ctx->pc = 0x157338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157334u;
            // 0x157338: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15733Cu; }
        if (ctx->pc != 0x15733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15733Cu; }
        if (ctx->pc != 0x15733Cu) { return; }
    }
    ctx->pc = 0x15733Cu;
label_15733c:
    // 0x15733c: 0x0  nop
    ctx->pc = 0x15733cu;
    // NOP
label_157340:
    // 0x157340: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_157344:
    // 0x157344: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x157344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_157348:
    // 0x157348: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_15734c:
    // 0x15734c: 0xc04cd60  jal         func_133580
label_157350:
    if (ctx->pc == 0x157350u) {
        ctx->pc = 0x157350u;
            // 0x157350: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x157354u;
        goto label_157354;
    }
    ctx->pc = 0x15734Cu;
    SET_GPR_U32(ctx, 31, 0x157354u);
    ctx->pc = 0x157350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15734Cu;
            // 0x157350: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157354u; }
        if (ctx->pc != 0x157354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157354u; }
        if (ctx->pc != 0x157354u) { return; }
    }
    ctx->pc = 0x157354u;
label_157354:
    // 0x157354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157358:
    // 0x157358: 0xc0573e0  jal         func_15CF80
label_15735c:
    if (ctx->pc == 0x15735Cu) {
        ctx->pc = 0x15735Cu;
            // 0x15735c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x157360u;
        goto label_157360;
    }
    ctx->pc = 0x157358u;
    SET_GPR_U32(ctx, 31, 0x157360u);
    ctx->pc = 0x15735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157358u;
            // 0x15735c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157360u; }
        if (ctx->pc != 0x157360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157360u; }
        if (ctx->pc != 0x157360u) { return; }
    }
    ctx->pc = 0x157360u;
label_157360:
    // 0x157360: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_157364:
    // 0x157364: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157368:
    // 0x157368: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x157368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_15736c:
    // 0x15736c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x15736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_157370:
    // 0x157370: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_157374:
    if (ctx->pc == 0x157374u) {
        ctx->pc = 0x157378u;
        goto label_157378;
    }
    ctx->pc = 0x157370u;
    {
        const bool branch_taken_0x157370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x157370) {
            ctx->pc = 0x1573E8u;
            goto label_1573e8;
        }
    }
    ctx->pc = 0x157378u;
label_157378:
    // 0x157378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15737c:
    // 0x15737c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_157380:
    if (ctx->pc == 0x157380u) {
        ctx->pc = 0x157384u;
        goto label_157384;
    }
    ctx->pc = 0x15737Cu;
    {
        const bool branch_taken_0x15737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15737c) {
            ctx->pc = 0x1573D0u;
            goto label_1573d0;
        }
    }
    ctx->pc = 0x157384u;
label_157384:
    // 0x157384: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x157384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_157388:
    // 0x157388: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_15738c:
    if (ctx->pc == 0x15738Cu) {
        ctx->pc = 0x157390u;
        goto label_157390;
    }
    ctx->pc = 0x157388u;
    {
        const bool branch_taken_0x157388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157388) {
            ctx->pc = 0x1573C0u;
            goto label_1573c0;
        }
    }
    ctx->pc = 0x157390u;
label_157390:
    // 0x157390: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_157394:
    // 0x157394: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_157398:
    if (ctx->pc == 0x157398u) {
        ctx->pc = 0x15739Cu;
        goto label_15739c;
    }
    ctx->pc = 0x157394u;
    {
        const bool branch_taken_0x157394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157394) {
            ctx->pc = 0x1573A8u;
            goto label_1573a8;
        }
    }
    ctx->pc = 0x15739Cu;
label_15739c:
    // 0x15739c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1573a0:
    if (ctx->pc == 0x1573A0u) {
        ctx->pc = 0x1573A4u;
        goto label_1573a4;
    }
    ctx->pc = 0x15739Cu;
    {
        const bool branch_taken_0x15739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15739c) {
            ctx->pc = 0x1573F8u;
            goto label_1573f8;
        }
    }
    ctx->pc = 0x1573A4u;
label_1573a4:
    // 0x1573a4: 0x0  nop
    ctx->pc = 0x1573a4u;
    // NOP
label_1573a8:
    // 0x1573a8: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_1573ac:
    // 0x1573ac: 0x40f809  jalr        $v0
label_1573b0:
    if (ctx->pc == 0x1573B0u) {
        ctx->pc = 0x1573B0u;
            // 0x1573b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1573B4u;
        goto label_1573b4;
    }
    ctx->pc = 0x1573ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1573B4u);
        ctx->pc = 0x1573B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573ACu;
            // 0x1573b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1573B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1573B4u; }
            if (ctx->pc != 0x1573B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1573B4u;
label_1573b4:
    // 0x1573b4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1573b8:
    if (ctx->pc == 0x1573B8u) {
        ctx->pc = 0x1573BCu;
        goto label_1573bc;
    }
    ctx->pc = 0x1573B4u;
    {
        const bool branch_taken_0x1573b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573b4) {
            ctx->pc = 0x1573F8u;
            goto label_1573f8;
        }
    }
    ctx->pc = 0x1573BCu;
label_1573bc:
    // 0x1573bc: 0x0  nop
    ctx->pc = 0x1573bcu;
    // NOP
label_1573c0:
    // 0x1573c0: 0xc04e550  jal         func_139540
label_1573c4:
    if (ctx->pc == 0x1573C4u) {
        ctx->pc = 0x1573C4u;
            // 0x1573c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1573C8u;
        goto label_1573c8;
    }
    ctx->pc = 0x1573C0u;
    SET_GPR_U32(ctx, 31, 0x1573C8u);
    ctx->pc = 0x1573C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1573C0u;
            // 0x1573c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573C8u; }
        if (ctx->pc != 0x1573C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573C8u; }
        if (ctx->pc != 0x1573C8u) { return; }
    }
    ctx->pc = 0x1573C8u;
label_1573c8:
    // 0x1573c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1573cc:
    if (ctx->pc == 0x1573CCu) {
        ctx->pc = 0x1573D0u;
        goto label_1573d0;
    }
    ctx->pc = 0x1573C8u;
    {
        const bool branch_taken_0x1573c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573c8) {
            ctx->pc = 0x1573F8u;
            goto label_1573f8;
        }
    }
    ctx->pc = 0x1573D0u;
label_1573d0:
    // 0x1573d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1573d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1573d4:
    // 0x1573d4: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x1573d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_1573d8:
    // 0x1573d8: 0x40f809  jalr        $v0
label_1573dc:
    if (ctx->pc == 0x1573DCu) {
        ctx->pc = 0x1573DCu;
            // 0x1573dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1573E0u;
        goto label_1573e0;
    }
    ctx->pc = 0x1573D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1573E0u);
        ctx->pc = 0x1573DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573D8u;
            // 0x1573dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1573E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1573E0u; }
            if (ctx->pc != 0x1573E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1573E0u;
label_1573e0:
    // 0x1573e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1573e4:
    if (ctx->pc == 0x1573E4u) {
        ctx->pc = 0x1573E8u;
        goto label_1573e8;
    }
    ctx->pc = 0x1573E0u;
    {
        const bool branch_taken_0x1573e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573e0) {
            ctx->pc = 0x1573F8u;
            goto label_1573f8;
        }
    }
    ctx->pc = 0x1573E8u;
label_1573e8:
    // 0x1573e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1573ec:
    // 0x1573ec: 0xc04e550  jal         func_139540
label_1573f0:
    if (ctx->pc == 0x1573F0u) {
        ctx->pc = 0x1573F0u;
            // 0x1573f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1573F4u;
        goto label_1573f4;
    }
    ctx->pc = 0x1573ECu;
    SET_GPR_U32(ctx, 31, 0x1573F4u);
    ctx->pc = 0x1573F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1573ECu;
            // 0x1573f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573F4u; }
        if (ctx->pc != 0x1573F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573F4u; }
        if (ctx->pc != 0x1573F4u) { return; }
    }
    ctx->pc = 0x1573F4u;
label_1573f4:
    // 0x1573f4: 0x0  nop
    ctx->pc = 0x1573f4u;
    // NOP
label_1573f8:
    // 0x1573f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1573fc:
    // 0x1573fc: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x1573fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_157400:
    // 0x157400: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x157400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_157404:
    // 0x157404: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x157404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_157408:
    // 0x157408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15740c:
    // 0x15740c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_157410:
    if (ctx->pc == 0x157410u) {
        ctx->pc = 0x157414u;
        goto label_157414;
    }
    ctx->pc = 0x15740Cu;
    {
        const bool branch_taken_0x15740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15740c) {
            ctx->pc = 0x157430u;
            goto label_157430;
        }
    }
    ctx->pc = 0x157414u;
label_157414:
    // 0x157414: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x157414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_157418:
    // 0x157418: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x157418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_15741c:
    // 0x15741c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_157420:
    // 0x157420: 0xc054484  jal         func_151210
label_157424:
    if (ctx->pc == 0x157424u) {
        ctx->pc = 0x157424u;
            // 0x157424: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x157428u;
        goto label_157428;
    }
    ctx->pc = 0x157420u;
    SET_GPR_U32(ctx, 31, 0x157428u);
    ctx->pc = 0x157424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157420u;
            // 0x157424: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157428u; }
        if (ctx->pc != 0x157428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157428u; }
        if (ctx->pc != 0x157428u) { return; }
    }
    ctx->pc = 0x157428u;
label_157428:
    // 0x157428: 0x10000003  b           . + 4 + (0x3 << 2)
label_15742c:
    if (ctx->pc == 0x15742Cu) {
        ctx->pc = 0x157430u;
        goto label_157430;
    }
    ctx->pc = 0x157428u;
    {
        const bool branch_taken_0x157428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157428) {
            ctx->pc = 0x157438u;
            goto label_157438;
        }
    }
    ctx->pc = 0x157430u;
label_157430:
    // 0x157430: 0xc04fdf4  jal         func_13F7D0
label_157434:
    if (ctx->pc == 0x157434u) {
        ctx->pc = 0x157438u;
        goto label_157438;
    }
    ctx->pc = 0x157430u;
    SET_GPR_U32(ctx, 31, 0x157438u);
    ctx->pc = 0x13F7D0u;
    if (runtime->hasFunction(0x13F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x13F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157438u; }
        if (ctx->pc != 0x157438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F7D0_0x13f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157438u; }
        if (ctx->pc != 0x157438u) { return; }
    }
    ctx->pc = 0x157438u;
label_157438:
    // 0x157438: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_15743c:
    // 0x15743c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_157440:
    // 0x157440: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x157440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_157444:
    // 0x157444: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x157444u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_157448:
    // 0x157448: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x157448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15744c:
    // 0x15744c: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
label_157450:
    if (ctx->pc == 0x157450u) {
        ctx->pc = 0x157450u;
            // 0x157450: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x157454u;
        goto label_157454;
    }
    ctx->pc = 0x15744Cu;
    {
        const bool branch_taken_0x15744c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15744Cu;
            // 0x157450: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15744c) {
            ctx->pc = 0x157298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157298;
        }
    }
    ctx->pc = 0x157454u;
label_157454:
    // 0x157454: 0x0  nop
    ctx->pc = 0x157454u;
    // NOP
label_157458:
    // 0x157458: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_15745c:
    // 0x15745c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15745cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157460:
    // 0x157460: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x157460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_157464:
    // 0x157464: 0x1460ff57  bnez        $v1, . + 4 + (-0xA9 << 2)
label_157468:
    if (ctx->pc == 0x157468u) {
        ctx->pc = 0x157468u;
            // 0x157468: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x15746Cu;
        goto label_15746c;
    }
    ctx->pc = 0x157464u;
    {
        const bool branch_taken_0x157464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157464u;
            // 0x157468: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157464) {
            ctx->pc = 0x1571C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1571c4;
        }
    }
    ctx->pc = 0x15746Cu;
label_15746c:
    // 0x15746c: 0x0  nop
    ctx->pc = 0x15746cu;
    // NOP
label_157470:
    // 0x157470: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x157470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_157474:
    // 0x157474: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x157474u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_157478:
    // 0x157478: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x157478u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15747c:
    // 0x15747c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15747cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_157480:
    // 0x157480: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157480u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_157484:
    // 0x157484: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157488:
    // 0x157488: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15748c:
    // 0x15748c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15748cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_157490:
    // 0x157490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157494:
    // 0x157494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_157498:
    // 0x157498: 0x3e00008  jr          $ra
label_15749c:
    if (ctx->pc == 0x15749Cu) {
        ctx->pc = 0x15749Cu;
            // 0x15749c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1574A0u;
        goto label_fallthrough_0x157498;
    }
    ctx->pc = 0x157498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157498u;
            // 0x15749c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x157498:
    ctx->pc = 0x1574A0u;
}
