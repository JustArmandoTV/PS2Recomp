#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00128028
// Address: 0x128028 - 0x1283f0
void sub_00128028_0x128028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128028_0x128028");
#endif

    switch (ctx->pc) {
        case 0x128028u: goto label_128028;
        case 0x12802cu: goto label_12802c;
        case 0x128030u: goto label_128030;
        case 0x128034u: goto label_128034;
        case 0x128038u: goto label_128038;
        case 0x12803cu: goto label_12803c;
        case 0x128040u: goto label_128040;
        case 0x128044u: goto label_128044;
        case 0x128048u: goto label_128048;
        case 0x12804cu: goto label_12804c;
        case 0x128050u: goto label_128050;
        case 0x128054u: goto label_128054;
        case 0x128058u: goto label_128058;
        case 0x12805cu: goto label_12805c;
        case 0x128060u: goto label_128060;
        case 0x128064u: goto label_128064;
        case 0x128068u: goto label_128068;
        case 0x12806cu: goto label_12806c;
        case 0x128070u: goto label_128070;
        case 0x128074u: goto label_128074;
        case 0x128078u: goto label_128078;
        case 0x12807cu: goto label_12807c;
        case 0x128080u: goto label_128080;
        case 0x128084u: goto label_128084;
        case 0x128088u: goto label_128088;
        case 0x12808cu: goto label_12808c;
        case 0x128090u: goto label_128090;
        case 0x128094u: goto label_128094;
        case 0x128098u: goto label_128098;
        case 0x12809cu: goto label_12809c;
        case 0x1280a0u: goto label_1280a0;
        case 0x1280a4u: goto label_1280a4;
        case 0x1280a8u: goto label_1280a8;
        case 0x1280acu: goto label_1280ac;
        case 0x1280b0u: goto label_1280b0;
        case 0x1280b4u: goto label_1280b4;
        case 0x1280b8u: goto label_1280b8;
        case 0x1280bcu: goto label_1280bc;
        case 0x1280c0u: goto label_1280c0;
        case 0x1280c4u: goto label_1280c4;
        case 0x1280c8u: goto label_1280c8;
        case 0x1280ccu: goto label_1280cc;
        case 0x1280d0u: goto label_1280d0;
        case 0x1280d4u: goto label_1280d4;
        case 0x1280d8u: goto label_1280d8;
        case 0x1280dcu: goto label_1280dc;
        case 0x1280e0u: goto label_1280e0;
        case 0x1280e4u: goto label_1280e4;
        case 0x1280e8u: goto label_1280e8;
        case 0x1280ecu: goto label_1280ec;
        case 0x1280f0u: goto label_1280f0;
        case 0x1280f4u: goto label_1280f4;
        case 0x1280f8u: goto label_1280f8;
        case 0x1280fcu: goto label_1280fc;
        case 0x128100u: goto label_128100;
        case 0x128104u: goto label_128104;
        case 0x128108u: goto label_128108;
        case 0x12810cu: goto label_12810c;
        case 0x128110u: goto label_128110;
        case 0x128114u: goto label_128114;
        case 0x128118u: goto label_128118;
        case 0x12811cu: goto label_12811c;
        case 0x128120u: goto label_128120;
        case 0x128124u: goto label_128124;
        case 0x128128u: goto label_128128;
        case 0x12812cu: goto label_12812c;
        case 0x128130u: goto label_128130;
        case 0x128134u: goto label_128134;
        case 0x128138u: goto label_128138;
        case 0x12813cu: goto label_12813c;
        case 0x128140u: goto label_128140;
        case 0x128144u: goto label_128144;
        case 0x128148u: goto label_128148;
        case 0x12814cu: goto label_12814c;
        case 0x128150u: goto label_128150;
        case 0x128154u: goto label_128154;
        case 0x128158u: goto label_128158;
        case 0x12815cu: goto label_12815c;
        case 0x128160u: goto label_128160;
        case 0x128164u: goto label_128164;
        case 0x128168u: goto label_128168;
        case 0x12816cu: goto label_12816c;
        case 0x128170u: goto label_128170;
        case 0x128174u: goto label_128174;
        case 0x128178u: goto label_128178;
        case 0x12817cu: goto label_12817c;
        case 0x128180u: goto label_128180;
        case 0x128184u: goto label_128184;
        case 0x128188u: goto label_128188;
        case 0x12818cu: goto label_12818c;
        case 0x128190u: goto label_128190;
        case 0x128194u: goto label_128194;
        case 0x128198u: goto label_128198;
        case 0x12819cu: goto label_12819c;
        case 0x1281a0u: goto label_1281a0;
        case 0x1281a4u: goto label_1281a4;
        case 0x1281a8u: goto label_1281a8;
        case 0x1281acu: goto label_1281ac;
        case 0x1281b0u: goto label_1281b0;
        case 0x1281b4u: goto label_1281b4;
        case 0x1281b8u: goto label_1281b8;
        case 0x1281bcu: goto label_1281bc;
        case 0x1281c0u: goto label_1281c0;
        case 0x1281c4u: goto label_1281c4;
        case 0x1281c8u: goto label_1281c8;
        case 0x1281ccu: goto label_1281cc;
        case 0x1281d0u: goto label_1281d0;
        case 0x1281d4u: goto label_1281d4;
        case 0x1281d8u: goto label_1281d8;
        case 0x1281dcu: goto label_1281dc;
        case 0x1281e0u: goto label_1281e0;
        case 0x1281e4u: goto label_1281e4;
        case 0x1281e8u: goto label_1281e8;
        case 0x1281ecu: goto label_1281ec;
        case 0x1281f0u: goto label_1281f0;
        case 0x1281f4u: goto label_1281f4;
        case 0x1281f8u: goto label_1281f8;
        case 0x1281fcu: goto label_1281fc;
        case 0x128200u: goto label_128200;
        case 0x128204u: goto label_128204;
        case 0x128208u: goto label_128208;
        case 0x12820cu: goto label_12820c;
        case 0x128210u: goto label_128210;
        case 0x128214u: goto label_128214;
        case 0x128218u: goto label_128218;
        case 0x12821cu: goto label_12821c;
        case 0x128220u: goto label_128220;
        case 0x128224u: goto label_128224;
        case 0x128228u: goto label_128228;
        case 0x12822cu: goto label_12822c;
        case 0x128230u: goto label_128230;
        case 0x128234u: goto label_128234;
        case 0x128238u: goto label_128238;
        case 0x12823cu: goto label_12823c;
        case 0x128240u: goto label_128240;
        case 0x128244u: goto label_128244;
        case 0x128248u: goto label_128248;
        case 0x12824cu: goto label_12824c;
        case 0x128250u: goto label_128250;
        case 0x128254u: goto label_128254;
        case 0x128258u: goto label_128258;
        case 0x12825cu: goto label_12825c;
        case 0x128260u: goto label_128260;
        case 0x128264u: goto label_128264;
        case 0x128268u: goto label_128268;
        case 0x12826cu: goto label_12826c;
        case 0x128270u: goto label_128270;
        case 0x128274u: goto label_128274;
        case 0x128278u: goto label_128278;
        case 0x12827cu: goto label_12827c;
        case 0x128280u: goto label_128280;
        case 0x128284u: goto label_128284;
        case 0x128288u: goto label_128288;
        case 0x12828cu: goto label_12828c;
        case 0x128290u: goto label_128290;
        case 0x128294u: goto label_128294;
        case 0x128298u: goto label_128298;
        case 0x12829cu: goto label_12829c;
        case 0x1282a0u: goto label_1282a0;
        case 0x1282a4u: goto label_1282a4;
        case 0x1282a8u: goto label_1282a8;
        case 0x1282acu: goto label_1282ac;
        case 0x1282b0u: goto label_1282b0;
        case 0x1282b4u: goto label_1282b4;
        case 0x1282b8u: goto label_1282b8;
        case 0x1282bcu: goto label_1282bc;
        case 0x1282c0u: goto label_1282c0;
        case 0x1282c4u: goto label_1282c4;
        case 0x1282c8u: goto label_1282c8;
        case 0x1282ccu: goto label_1282cc;
        case 0x1282d0u: goto label_1282d0;
        case 0x1282d4u: goto label_1282d4;
        case 0x1282d8u: goto label_1282d8;
        case 0x1282dcu: goto label_1282dc;
        case 0x1282e0u: goto label_1282e0;
        case 0x1282e4u: goto label_1282e4;
        case 0x1282e8u: goto label_1282e8;
        case 0x1282ecu: goto label_1282ec;
        case 0x1282f0u: goto label_1282f0;
        case 0x1282f4u: goto label_1282f4;
        case 0x1282f8u: goto label_1282f8;
        case 0x1282fcu: goto label_1282fc;
        case 0x128300u: goto label_128300;
        case 0x128304u: goto label_128304;
        case 0x128308u: goto label_128308;
        case 0x12830cu: goto label_12830c;
        case 0x128310u: goto label_128310;
        case 0x128314u: goto label_128314;
        case 0x128318u: goto label_128318;
        case 0x12831cu: goto label_12831c;
        case 0x128320u: goto label_128320;
        case 0x128324u: goto label_128324;
        case 0x128328u: goto label_128328;
        case 0x12832cu: goto label_12832c;
        case 0x128330u: goto label_128330;
        case 0x128334u: goto label_128334;
        case 0x128338u: goto label_128338;
        case 0x12833cu: goto label_12833c;
        case 0x128340u: goto label_128340;
        case 0x128344u: goto label_128344;
        case 0x128348u: goto label_128348;
        case 0x12834cu: goto label_12834c;
        case 0x128350u: goto label_128350;
        case 0x128354u: goto label_128354;
        case 0x128358u: goto label_128358;
        case 0x12835cu: goto label_12835c;
        case 0x128360u: goto label_128360;
        case 0x128364u: goto label_128364;
        case 0x128368u: goto label_128368;
        case 0x12836cu: goto label_12836c;
        case 0x128370u: goto label_128370;
        case 0x128374u: goto label_128374;
        case 0x128378u: goto label_128378;
        case 0x12837cu: goto label_12837c;
        case 0x128380u: goto label_128380;
        case 0x128384u: goto label_128384;
        case 0x128388u: goto label_128388;
        case 0x12838cu: goto label_12838c;
        case 0x128390u: goto label_128390;
        case 0x128394u: goto label_128394;
        case 0x128398u: goto label_128398;
        case 0x12839cu: goto label_12839c;
        case 0x1283a0u: goto label_1283a0;
        case 0x1283a4u: goto label_1283a4;
        case 0x1283a8u: goto label_1283a8;
        case 0x1283acu: goto label_1283ac;
        case 0x1283b0u: goto label_1283b0;
        case 0x1283b4u: goto label_1283b4;
        case 0x1283b8u: goto label_1283b8;
        case 0x1283bcu: goto label_1283bc;
        case 0x1283c0u: goto label_1283c0;
        case 0x1283c4u: goto label_1283c4;
        case 0x1283c8u: goto label_1283c8;
        case 0x1283ccu: goto label_1283cc;
        case 0x1283d0u: goto label_1283d0;
        case 0x1283d4u: goto label_1283d4;
        case 0x1283d8u: goto label_1283d8;
        case 0x1283dcu: goto label_1283dc;
        case 0x1283e0u: goto label_1283e0;
        case 0x1283e4u: goto label_1283e4;
        case 0x1283e8u: goto label_1283e8;
        case 0x1283ecu: goto label_1283ec;
        default: break;
    }

    ctx->pc = 0x128028u;

label_128028:
    // 0x128028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x128028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_12802c:
    // 0x12802c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12802cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128030:
    // 0x128030: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x128030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_128034:
    // 0x128034: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x128034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_128038:
    // 0x128038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12803c:
    // 0x12803c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12803cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128040:
    // 0x128040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_128044:
    // 0x128044: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x128044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_128048:
    // 0x128048: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x128048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_12804c:
    // 0x12804c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_128050:
    // 0x128050: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x128050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_128054:
    // 0x128054: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x128054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_128058:
    // 0x128058: 0x8cb20008  lw          $s2, 0x8($a1)
    ctx->pc = 0x128058u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12805c:
    // 0x12805c: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_128060:
    if (ctx->pc == 0x128060u) {
        ctx->pc = 0x128060u;
            // 0x128060: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128064u;
        goto label_128064;
    }
    ctx->pc = 0x12805Cu;
    {
        const bool branch_taken_0x12805c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12805Cu;
            // 0x128060: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12805c) {
            ctx->pc = 0x12810Cu;
            goto label_12810c;
        }
    }
    ctx->pc = 0x128064u;
label_128064:
    // 0x128064: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x128064u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_128068:
    // 0x128068: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x128068u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12806c:
    // 0x12806c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_128070:
    if (ctx->pc == 0x128070u) {
        ctx->pc = 0x128074u;
        goto label_128074;
    }
    ctx->pc = 0x12806Cu;
    {
        const bool branch_taken_0x12806c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12806c) {
            ctx->pc = 0x128080u;
            goto label_128080;
        }
    }
    ctx->pc = 0x128074u;
label_128074:
    // 0x128074: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x128074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_128078:
    // 0x128078: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
label_12807c:
    if (ctx->pc == 0x12807Cu) {
        ctx->pc = 0x12807Cu;
            // 0x12807c: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x128080u;
        goto label_128080;
    }
    ctx->pc = 0x128078u;
    {
        const bool branch_taken_0x128078 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128078) {
            ctx->pc = 0x12807Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128078u;
            // 0x12807c: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128098u;
            goto label_128098;
        }
    }
    ctx->pc = 0x128080u;
label_128080:
    // 0x128080: 0xc04c178  jal         func_1305E0
label_128084:
    if (ctx->pc == 0x128084u) {
        ctx->pc = 0x128088u;
        goto label_128088;
    }
    ctx->pc = 0x128080u;
    SET_GPR_U32(ctx, 31, 0x128088u);
    ctx->pc = 0x1305E0u;
    if (runtime->hasFunction(0x1305E0u)) {
        auto targetFn = runtime->lookupFunction(0x1305E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128088u; }
        if (ctx->pc != 0x128088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001305E0_0x1305e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128088u; }
        if (ctx->pc != 0x128088u) { return; }
    }
    ctx->pc = 0x128088u;
label_128088:
    // 0x128088: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_12808c:
    if (ctx->pc == 0x12808Cu) {
        ctx->pc = 0x12808Cu;
            // 0x12808c: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x128090u;
        goto label_128090;
    }
    ctx->pc = 0x128088u;
    {
        const bool branch_taken_0x128088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12808Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128088u;
            // 0x12808c: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128088) {
            ctx->pc = 0x12810Cu;
            goto label_12810c;
        }
    }
    ctx->pc = 0x128090u;
label_128090:
    // 0x128090: 0x966e000c  lhu         $t6, 0xC($s3)
    ctx->pc = 0x128090u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_128094:
    // 0x128094: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_128098:
    // 0x128098: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
label_12809c:
    // 0x12809c: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
label_1280a0:
    if (ctx->pc == 0x1280A0u) {
        ctx->pc = 0x1280A0u;
            // 0x1280a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1280A4u;
        goto label_1280a4;
    }
    ctx->pc = 0x12809Cu;
    {
        const bool branch_taken_0x12809c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12809Cu;
            // 0x1280a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12809c) {
            ctx->pc = 0x128150u;
            goto label_128150;
        }
    }
    ctx->pc = 0x1280A4u;
label_1280a4:
    // 0x1280a4: 0x24160400  addiu       $s6, $zero, 0x400
    ctx->pc = 0x1280a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1280a8:
    // 0x1280a8: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1280ac:
    if (ctx->pc == 0x1280ACu) {
        ctx->pc = 0x1280ACu;
            // 0x1280ac: 0x2e4f0401  sltiu       $t7, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->pc = 0x1280B0u;
        goto label_1280b0;
    }
    ctx->pc = 0x1280A8u;
    {
        const bool branch_taken_0x1280a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1280ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280A8u;
            // 0x1280ac: 0x2e4f0401  sltiu       $t7, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280a8) {
            ctx->pc = 0x1280D4u;
            goto label_1280d4;
        }
    }
    ctx->pc = 0x1280B0u;
label_1280b0:
    // 0x1280b0: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x1280b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1280b4:
    // 0x1280b4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1280b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1280b8:
    // 0x1280b8: 0x0  nop
    ctx->pc = 0x1280b8u;
    // NOP
label_1280bc:
    // 0x1280bc: 0x0  nop
    ctx->pc = 0x1280bcu;
    // NOP
label_1280c0:
    // 0x1280c0: 0x0  nop
    ctx->pc = 0x1280c0u;
    // NOP
label_1280c4:
    // 0x1280c4: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_1280c8:
    if (ctx->pc == 0x1280C8u) {
        ctx->pc = 0x1280C8u;
            // 0x1280c8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1280CCu;
        goto label_1280cc;
    }
    ctx->pc = 0x1280C4u;
    {
        const bool branch_taken_0x1280c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280C4u;
            // 0x1280c8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280c4) {
            ctx->pc = 0x1280B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1280b0;
        }
    }
    ctx->pc = 0x1280CCu;
label_1280cc:
    // 0x1280cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1280ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1280d0:
    // 0x1280d0: 0x2e4f0401  sltiu       $t7, $s2, 0x401
    ctx->pc = 0x1280d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1280d4:
    // 0x1280d4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1280d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1280d8:
    // 0x1280d8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1280d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1280dc:
    // 0x1280dc: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1280e0:
    // 0x1280e0: 0x24f300b  movn        $a2, $s2, $t7
    ctx->pc = 0x1280e0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_1280e4:
    // 0x1280e4: 0x40f809  jalr        $v0
label_1280e8:
    if (ctx->pc == 0x1280E8u) {
        ctx->pc = 0x1280E8u;
            // 0x1280e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1280ECu;
        goto label_1280ec;
    }
    ctx->pc = 0x1280E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1280ECu);
        ctx->pc = 0x1280E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280E4u;
            // 0x1280e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1280ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1280ECu; }
            if (ctx->pc != 0x1280ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1280ECu;
label_1280ec:
    // 0x1280ec: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_1280f0:
    if (ctx->pc == 0x1280F0u) {
        ctx->pc = 0x1280F0u;
            // 0x1280f0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x1280F4u;
        goto label_1280f4;
    }
    ctx->pc = 0x1280ECu;
    {
        const bool branch_taken_0x1280ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1280F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280ECu;
            // 0x1280f0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280ec) {
            ctx->pc = 0x12813Cu;
            goto label_12813c;
        }
    }
    ctx->pc = 0x1280F4u;
label_1280f4:
    // 0x1280f4: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x1280f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1280f8:
    // 0x1280f8: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x1280f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1280fc:
    // 0x1280fc: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x1280fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_128100:
    // 0x128100: 0x15e0ffe9  bnez        $t7, . + 4 + (-0x17 << 2)
label_128104:
    if (ctx->pc == 0x128104u) {
        ctx->pc = 0x128104u;
            // 0x128104: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->pc = 0x128108u;
        goto label_128108;
    }
    ctx->pc = 0x128100u;
    {
        const bool branch_taken_0x128100 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128100u;
            // 0x128104: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128100) {
            ctx->pc = 0x1280A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1280a8;
        }
    }
    ctx->pc = 0x128108u;
label_128108:
    // 0x128108: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x128108u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12810c:
    // 0x12810c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12810cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128110:
    // 0x128110: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x128110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_128114:
    // 0x128114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_128118:
    // 0x128118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x128118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12811c:
    // 0x12811c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12811cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_128120:
    // 0x128120: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x128120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128124:
    // 0x128124: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x128124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_128128:
    // 0x128128: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x128128u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12812c:
    // 0x12812c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12812cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_128130:
    // 0x128130: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x128130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_128134:
    // 0x128134: 0x3e00008  jr          $ra
label_128138:
    if (ctx->pc == 0x128138u) {
        ctx->pc = 0x128138u;
            // 0x128138: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x12813Cu;
        goto label_12813c;
    }
    ctx->pc = 0x128134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128134u;
            // 0x128138: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12813Cu;
label_12813c:
    // 0x12813c: 0x966f000c  lhu         $t7, 0xC($s3)
    ctx->pc = 0x12813cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_128140:
    // 0x128140: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x128140u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128144:
    // 0x128144: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x128144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
label_128148:
    // 0x128148: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_12814c:
    if (ctx->pc == 0x12814Cu) {
        ctx->pc = 0x12814Cu;
            // 0x12814c: 0xa66f000c  sh          $t7, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->pc = 0x128150u;
        goto label_128150;
    }
    ctx->pc = 0x128148u;
    {
        const bool branch_taken_0x128148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128148u;
            // 0x12814c: 0xa66f000c  sh          $t7, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128148) {
            ctx->pc = 0x12810Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12810c;
        }
    }
    ctx->pc = 0x128150u;
label_128150:
    // 0x128150: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x128150u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_128154:
    // 0x128154: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
label_128158:
    // 0x128158: 0xf7c03  sra         $t7, $t7, 16
    ctx->pc = 0x128158u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 16));
label_12815c:
    // 0x12815c: 0x15e0004f  bnez        $t7, . + 4 + (0x4F << 2)
label_128160:
    if (ctx->pc == 0x128160u) {
        ctx->pc = 0x128160u;
            // 0x128160: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128164u;
        goto label_128164;
    }
    ctx->pc = 0x12815Cu;
    {
        const bool branch_taken_0x12815c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12815Cu;
            // 0x128160: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12815c) {
            ctx->pc = 0x12829Cu;
            goto label_12829c;
        }
    }
    ctx->pc = 0x128164u;
label_128164:
    // 0x128164: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_128168:
    if (ctx->pc == 0x128168u) {
        ctx->pc = 0x128168u;
            // 0x128168: 0x31cf0200  andi        $t7, $t6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x12816Cu;
        goto label_12816c;
    }
    ctx->pc = 0x128164u;
    {
        const bool branch_taken_0x128164 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x128168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128164u;
            // 0x128168: 0x31cf0200  andi        $t7, $t6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128164) {
            ctx->pc = 0x128190u;
            goto label_128190;
        }
    }
    ctx->pc = 0x12816Cu;
label_12816c:
    // 0x12816c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12816cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128170:
    // 0x128170: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_128174:
    // 0x128174: 0x0  nop
    ctx->pc = 0x128174u;
    // NOP
label_128178:
    // 0x128178: 0x0  nop
    ctx->pc = 0x128178u;
    // NOP
label_12817c:
    // 0x12817c: 0x0  nop
    ctx->pc = 0x12817cu;
    // NOP
label_128180:
    // 0x128180: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_128184:
    if (ctx->pc == 0x128184u) {
        ctx->pc = 0x128184u;
            // 0x128184: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x128188u;
        goto label_128188;
    }
    ctx->pc = 0x128180u;
    {
        const bool branch_taken_0x128180 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x128184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128180u;
            // 0x128184: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128180) {
            ctx->pc = 0x12816Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12816c;
        }
    }
    ctx->pc = 0x128188u;
label_128188:
    // 0x128188: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x128188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12818c:
    // 0x12818c: 0x31cf0200  andi        $t7, $t6, 0x200
    ctx->pc = 0x12818cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
label_128190:
    // 0x128190: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_128194:
    if (ctx->pc == 0x128194u) {
        ctx->pc = 0x128194u;
            // 0x128194: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x128198u;
        goto label_128198;
    }
    ctx->pc = 0x128190u;
    {
        const bool branch_taken_0x128190 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128190u;
            // 0x128194: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128190) {
            ctx->pc = 0x1281ECu;
            goto label_1281ec;
        }
    }
    ctx->pc = 0x128198u;
label_128198:
    // 0x128198: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x128198u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_12819c:
    // 0x12819c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x12819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1281a0:
    // 0x1281a0: 0x24f800b  movn        $s0, $s2, $t7
    ctx->pc = 0x1281a0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1281a4:
    // 0x1281a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1281a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1281a8:
    // 0x1281a8: 0xc04a534  jal         func_1294D0
label_1281ac:
    if (ctx->pc == 0x1281ACu) {
        ctx->pc = 0x1281ACu;
            // 0x1281ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1281B0u;
        goto label_1281b0;
    }
    ctx->pc = 0x1281A8u;
    SET_GPR_U32(ctx, 31, 0x1281B0u);
    ctx->pc = 0x1281ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1281A8u;
            // 0x1281ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281B0u; }
        if (ctx->pc != 0x1281B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281B0u; }
        if (ctx->pc != 0x1281B0u) { return; }
    }
    ctx->pc = 0x1281B0u;
label_1281b0:
    // 0x1281b0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1281b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1281b4:
    // 0x1281b4: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x1281b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1281b8:
    // 0x1281b8: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x1281b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_1281bc:
    // 0x1281bc: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x1281bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_1281c0:
    // 0x1281c0: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x1281c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_1281c4:
    // 0x1281c4: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x1281c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
label_1281c8:
    // 0x1281c8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1281c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1281cc:
    // 0x1281cc: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x1281ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1281d0:
    // 0x1281d0: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x1281d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1281d4:
    // 0x1281d4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1281d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1281d8:
    // 0x1281d8: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x1281d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_1281dc:
    // 0x1281dc: 0x11e0ffca  beqz        $t7, . + 4 + (-0x36 << 2)
label_1281e0:
    if (ctx->pc == 0x1281E0u) {
        ctx->pc = 0x1281E0u;
            // 0x1281e0: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->pc = 0x1281E4u;
        goto label_1281e4;
    }
    ctx->pc = 0x1281DCu;
    {
        const bool branch_taken_0x1281dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281DCu;
            // 0x1281e0: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281dc) {
            ctx->pc = 0x128108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128108;
        }
    }
    ctx->pc = 0x1281E4u;
label_1281e4:
    // 0x1281e4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_1281e8:
    if (ctx->pc == 0x1281E8u) {
        ctx->pc = 0x1281E8u;
            // 0x1281e8: 0x966e000c  lhu         $t6, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x1281ECu;
        goto label_1281ec;
    }
    ctx->pc = 0x1281E4u;
    {
        const bool branch_taken_0x1281e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281E4u;
            // 0x1281e8: 0x966e000c  lhu         $t6, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281e4) {
            ctx->pc = 0x128164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128164;
        }
    }
    ctx->pc = 0x1281ECu;
label_1281ec:
    // 0x1281ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1281ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1281f0:
    // 0x1281f0: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x1281f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1281f4:
    // 0x1281f4: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x1281f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1281f8:
    // 0x1281f8: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
label_1281fc:
    if (ctx->pc == 0x1281FCu) {
        ctx->pc = 0x1281FCu;
            // 0x1281fc: 0x212782b  sltu        $t7, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->pc = 0x128200u;
        goto label_128200;
    }
    ctx->pc = 0x1281F8u;
    {
        const bool branch_taken_0x1281f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281F8u;
            // 0x1281fc: 0x212782b  sltu        $t7, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281f8) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x128200u;
label_128200:
    // 0x128200: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_128204:
    if (ctx->pc == 0x128204u) {
        ctx->pc = 0x128204u;
            // 0x128204: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128208u;
        goto label_128208;
    }
    ctx->pc = 0x128200u;
    {
        const bool branch_taken_0x128200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128200u;
            // 0x128204: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128200) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x128208u;
label_128208:
    // 0x128208: 0xc04a534  jal         func_1294D0
label_12820c:
    if (ctx->pc == 0x12820Cu) {
        ctx->pc = 0x12820Cu;
            // 0x12820c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128210u;
        goto label_128210;
    }
    ctx->pc = 0x128208u;
    SET_GPR_U32(ctx, 31, 0x128210u);
    ctx->pc = 0x12820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128208u;
            // 0x12820c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128210u; }
        if (ctx->pc != 0x128210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128210u; }
        if (ctx->pc != 0x128210u) { return; }
    }
    ctx->pc = 0x128210u;
label_128210:
    // 0x128210: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_128214:
    // 0x128214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_128218:
    // 0x128218: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x128218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12821c:
    // 0x12821c: 0xc049db4  jal         func_1276D0
label_128220:
    if (ctx->pc == 0x128220u) {
        ctx->pc = 0x128220u;
            // 0x128220: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x128224u;
        goto label_128224;
    }
    ctx->pc = 0x12821Cu;
    SET_GPR_U32(ctx, 31, 0x128224u);
    ctx->pc = 0x128220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12821Cu;
            // 0x128220: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128224u; }
        if (ctx->pc != 0x128224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D0_0x1276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128224u; }
        if (ctx->pc != 0x128224u) { return; }
    }
    ctx->pc = 0x128224u;
label_128224:
    // 0x128224: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_128228:
    if (ctx->pc == 0x128228u) {
        ctx->pc = 0x128228u;
            // 0x128228: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x12822Cu;
        goto label_12822c;
    }
    ctx->pc = 0x128224u;
    {
        const bool branch_taken_0x128224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128224) {
            ctx->pc = 0x128228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128224u;
            // 0x128228: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1281D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1281d0;
        }
    }
    ctx->pc = 0x12822Cu;
label_12822c:
    // 0x12822c: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_128230:
    if (ctx->pc == 0x128230u) {
        ctx->pc = 0x128230u;
            // 0x128230: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x128234u;
        goto label_128234;
    }
    ctx->pc = 0x12822Cu;
    {
        const bool branch_taken_0x12822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12822Cu;
            // 0x128230: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12822c) {
            ctx->pc = 0x128140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128140;
        }
    }
    ctx->pc = 0x128234u;
label_128234:
    // 0x128234: 0x0  nop
    ctx->pc = 0x128234u;
    // NOP
label_128238:
    // 0x128238: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x128238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_12823c:
    // 0x12823c: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x12823cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_128240:
    // 0x128240: 0x55e0000b  bnel        $t7, $zero, . + 4 + (0xB << 2)
label_128244:
    if (ctx->pc == 0x128244u) {
        ctx->pc = 0x128244u;
            // 0x128244: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x128248u;
        goto label_128248;
    }
    ctx->pc = 0x128240u;
    {
        const bool branch_taken_0x128240 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128240) {
            ctx->pc = 0x128244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128240u;
            // 0x128244: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128270u;
            goto label_128270;
        }
    }
    ctx->pc = 0x128248u;
label_128248:
    // 0x128248: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x128248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_12824c:
    // 0x12824c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12824cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128250:
    // 0x128250: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x128250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_128254:
    // 0x128254: 0x40f809  jalr        $v0
label_128258:
    if (ctx->pc == 0x128258u) {
        ctx->pc = 0x128258u;
            // 0x128258: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12825Cu;
        goto label_12825c;
    }
    ctx->pc = 0x128254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12825Cu);
        ctx->pc = 0x128258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128254u;
            // 0x128258: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12825Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12825Cu; }
            if (ctx->pc != 0x12825Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12825Cu;
label_12825c:
    // 0x12825c: 0x1c40ffdb  bgtz        $v0, . + 4 + (-0x25 << 2)
label_128260:
    if (ctx->pc == 0x128260u) {
        ctx->pc = 0x128260u;
            // 0x128260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128264u;
        goto label_128264;
    }
    ctx->pc = 0x12825Cu;
    {
        const bool branch_taken_0x12825c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x128260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12825Cu;
            // 0x128260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12825c) {
            ctx->pc = 0x1281CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1281cc;
        }
    }
    ctx->pc = 0x128264u;
label_128264:
    // 0x128264: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_128268:
    if (ctx->pc == 0x128268u) {
        ctx->pc = 0x128268u;
            // 0x128268: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x12826Cu;
        goto label_12826c;
    }
    ctx->pc = 0x128264u;
    {
        const bool branch_taken_0x128264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128264u;
            // 0x128268: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128264) {
            ctx->pc = 0x128140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128140;
        }
    }
    ctx->pc = 0x12826Cu;
label_12826c:
    // 0x12826c: 0x0  nop
    ctx->pc = 0x12826cu;
    // NOP
label_128270:
    // 0x128270: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x128270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_128274:
    // 0x128274: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x128274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128278:
    // 0x128278: 0xc04a534  jal         func_1294D0
label_12827c:
    if (ctx->pc == 0x12827Cu) {
        ctx->pc = 0x12827Cu;
            // 0x12827c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128280u;
        goto label_128280;
    }
    ctx->pc = 0x128278u;
    SET_GPR_U32(ctx, 31, 0x128280u);
    ctx->pc = 0x12827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128278u;
            // 0x12827c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128280u; }
        if (ctx->pc != 0x128280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128280u; }
        if (ctx->pc != 0x128280u) { return; }
    }
    ctx->pc = 0x128280u;
label_128280:
    // 0x128280: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x128280u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_128284:
    // 0x128284: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x128284u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_128288:
    // 0x128288: 0x1f27823  subu        $t7, $t7, $s2
    ctx->pc = 0x128288u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12828c:
    // 0x12828c: 0x1d27021  addu        $t6, $t6, $s2
    ctx->pc = 0x12828cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_128290:
    // 0x128290: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x128290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_128294:
    // 0x128294: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_128298:
    if (ctx->pc == 0x128298u) {
        ctx->pc = 0x128298u;
            // 0x128298: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->pc = 0x12829Cu;
        goto label_12829c;
    }
    ctx->pc = 0x128294u;
    {
        const bool branch_taken_0x128294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128294u;
            // 0x128298: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128294) {
            ctx->pc = 0x1281CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1281cc;
        }
    }
    ctx->pc = 0x12829Cu;
label_12829c:
    // 0x12829c: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1282a0:
    if (ctx->pc == 0x1282A0u) {
        ctx->pc = 0x1282A4u;
        goto label_1282a4;
    }
    ctx->pc = 0x12829Cu;
    {
        const bool branch_taken_0x12829c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12829c) {
            ctx->pc = 0x1282C8u;
            goto label_1282c8;
        }
    }
    ctx->pc = 0x1282A4u;
label_1282a4:
    // 0x1282a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1282a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1282a8:
    // 0x1282a8: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1282ac:
    // 0x1282ac: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1282acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1282b0:
    // 0x1282b0: 0x0  nop
    ctx->pc = 0x1282b0u;
    // NOP
label_1282b4:
    // 0x1282b4: 0x0  nop
    ctx->pc = 0x1282b4u;
    // NOP
label_1282b8:
    // 0x1282b8: 0x0  nop
    ctx->pc = 0x1282b8u;
    // NOP
label_1282bc:
    // 0x1282bc: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_1282c0:
    if (ctx->pc == 0x1282C0u) {
        ctx->pc = 0x1282C0u;
            // 0x1282c0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1282C4u;
        goto label_1282c4;
    }
    ctx->pc = 0x1282BCu;
    {
        const bool branch_taken_0x1282bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282BCu;
            // 0x1282c0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282bc) {
            ctx->pc = 0x1282A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1282a8;
        }
    }
    ctx->pc = 0x1282C4u;
label_1282c4:
    // 0x1282c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1282c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1282c8:
    // 0x1282c8: 0x16e0000a  bnez        $s7, . + 4 + (0xA << 2)
label_1282cc:
    if (ctx->pc == 0x1282CCu) {
        ctx->pc = 0x1282CCu;
            // 0x1282cc: 0x256782b  sltu        $t7, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->pc = 0x1282D0u;
        goto label_1282d0;
    }
    ctx->pc = 0x1282C8u;
    {
        const bool branch_taken_0x1282c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1282CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282C8u;
            // 0x1282cc: 0x256782b  sltu        $t7, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282c8) {
            ctx->pc = 0x1282F4u;
            goto label_1282f4;
        }
    }
    ctx->pc = 0x1282D0u;
label_1282d0:
    // 0x1282d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1282d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1282d4:
    // 0x1282d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1282d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1282d8:
    // 0x1282d8: 0xc04a4aa  jal         func_1292A8
label_1282dc:
    if (ctx->pc == 0x1282DCu) {
        ctx->pc = 0x1282DCu;
            // 0x1282dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1282E0u;
        goto label_1282e0;
    }
    ctx->pc = 0x1282D8u;
    SET_GPR_U32(ctx, 31, 0x1282E0u);
    ctx->pc = 0x1282DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1282D8u;
            // 0x1282dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1292A8u;
    if (runtime->hasFunction(0x1292A8u)) {
        auto targetFn = runtime->lookupFunction(0x1292A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282E0u; }
        if (ctx->pc != 0x1282E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001292A8_0x1292a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282E0u; }
        if (ctx->pc != 0x1282E0u) { return; }
    }
    ctx->pc = 0x1282E0u;
label_1282e0:
    // 0x1282e0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1282e4:
    if (ctx->pc == 0x1282E4u) {
        ctx->pc = 0x1282E4u;
            // 0x1282e4: 0x547823  subu        $t7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->pc = 0x1282E8u;
        goto label_1282e8;
    }
    ctx->pc = 0x1282E0u;
    {
        const bool branch_taken_0x1282e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282E0u;
            // 0x1282e4: 0x547823  subu        $t7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282e0) {
            ctx->pc = 0x1283E4u;
            goto label_1283e4;
        }
    }
    ctx->pc = 0x1282E8u;
label_1282e8:
    // 0x1282e8: 0x25f60001  addiu       $s6, $t7, 0x1
    ctx->pc = 0x1282e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1282ec:
    // 0x1282ec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1282f0:
    // 0x1282f0: 0x256782b  sltu        $t7, $s2, $s6
    ctx->pc = 0x1282f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1282f4:
    // 0x1282f4: 0x8e6e0008  lw          $t6, 0x8($s3)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1282f8:
    // 0x1282f8: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x1282f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1282fc:
    // 0x1282fc: 0x8e6c0014  lw          $t4, 0x14($s3)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_128300:
    // 0x128300: 0x2cf680a  movz        $t5, $s6, $t7
    ctx->pc = 0x128300u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 22));
label_128304:
    // 0x128304: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_128308:
    // 0x128308: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x128308u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_12830c:
    // 0x12830c: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_128310:
    // 0x128310: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_128314:
    if (ctx->pc == 0x128314u) {
        ctx->pc = 0x128314u;
            // 0x128314: 0x1cc8021  addu        $s0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->pc = 0x128318u;
        goto label_128318;
    }
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128310u;
            // 0x128314: 0x1cc8021  addu        $s0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x128388u;
            goto label_128388;
        }
    }
    ctx->pc = 0x128318u;
label_128318:
    // 0x128318: 0x20d782a  slt         $t7, $s0, $t5
    ctx->pc = 0x128318u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_12831c:
    // 0x12831c: 0x11e0001a  beqz        $t7, . + 4 + (0x1A << 2)
label_128320:
    if (ctx->pc == 0x128320u) {
        ctx->pc = 0x128320u;
            // 0x128320: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128324u;
        goto label_128324;
    }
    ctx->pc = 0x12831Cu;
    {
        const bool branch_taken_0x12831c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12831Cu;
            // 0x128320: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12831c) {
            ctx->pc = 0x128388u;
            goto label_128388;
        }
    }
    ctx->pc = 0x128324u;
label_128324:
    // 0x128324: 0xc04a534  jal         func_1294D0
label_128328:
    if (ctx->pc == 0x128328u) {
        ctx->pc = 0x128328u;
            // 0x128328: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12832Cu;
        goto label_12832c;
    }
    ctx->pc = 0x128324u;
    SET_GPR_U32(ctx, 31, 0x12832Cu);
    ctx->pc = 0x128328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128324u;
            // 0x128328: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12832Cu; }
        if (ctx->pc != 0x12832Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12832Cu; }
        if (ctx->pc != 0x12832Cu) { return; }
    }
    ctx->pc = 0x12832Cu;
label_12832c:
    // 0x12832c: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_128330:
    // 0x128330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_128334:
    // 0x128334: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x128334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_128338:
    // 0x128338: 0xc049db4  jal         func_1276D0
label_12833c:
    if (ctx->pc == 0x12833Cu) {
        ctx->pc = 0x12833Cu;
            // 0x12833c: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x128340u;
        goto label_128340;
    }
    ctx->pc = 0x128338u;
    SET_GPR_U32(ctx, 31, 0x128340u);
    ctx->pc = 0x12833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128338u;
            // 0x12833c: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128340u; }
        if (ctx->pc != 0x128340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D0_0x1276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128340u; }
        if (ctx->pc != 0x128340u) { return; }
    }
    ctx->pc = 0x128340u;
label_128340:
    // 0x128340: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
label_128344:
    if (ctx->pc == 0x128344u) {
        ctx->pc = 0x128344u;
            // 0x128344: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x128348u;
        goto label_128348;
    }
    ctx->pc = 0x128340u;
    {
        const bool branch_taken_0x128340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128340) {
            ctx->pc = 0x128344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128340u;
            // 0x128344: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128140;
        }
    }
    ctx->pc = 0x128348u;
label_128348:
    // 0x128348: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x128348u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_12834c:
    // 0x12834c: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
label_128350:
    if (ctx->pc == 0x128350u) {
        ctx->pc = 0x128350u;
            // 0x128350: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x128354u;
        goto label_128354;
    }
    ctx->pc = 0x12834Cu;
    {
        const bool branch_taken_0x12834c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x12834c) {
            ctx->pc = 0x128350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12834Cu;
            // 0x128350: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128368u;
            goto label_128368;
        }
    }
    ctx->pc = 0x128354u;
label_128354:
    // 0x128354: 0xc049db4  jal         func_1276D0
label_128358:
    if (ctx->pc == 0x128358u) {
        ctx->pc = 0x128358u;
            // 0x128358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12835Cu;
        goto label_12835c;
    }
    ctx->pc = 0x128354u;
    SET_GPR_U32(ctx, 31, 0x12835Cu);
    ctx->pc = 0x128358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128354u;
            // 0x128358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12835Cu; }
        if (ctx->pc != 0x12835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D0_0x1276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12835Cu; }
        if (ctx->pc != 0x12835Cu) { return; }
    }
    ctx->pc = 0x12835Cu;
label_12835c:
    // 0x12835c: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
label_128360:
    if (ctx->pc == 0x128360u) {
        ctx->pc = 0x128360u;
            // 0x128360: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128364u;
        goto label_128364;
    }
    ctx->pc = 0x12835Cu;
    {
        const bool branch_taken_0x12835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12835Cu;
            // 0x128360: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12835c) {
            ctx->pc = 0x12813Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12813c;
        }
    }
    ctx->pc = 0x128364u;
label_128364:
    // 0x128364: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x128364u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_128368:
    // 0x128368: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x128368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_12836c:
    // 0x12836c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x12836cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_128370:
    // 0x128370: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_128374:
    // 0x128374: 0x15e0ffc9  bnez        $t7, . + 4 + (-0x37 << 2)
label_128378:
    if (ctx->pc == 0x128378u) {
        ctx->pc = 0x128378u;
            // 0x128378: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->pc = 0x12837Cu;
        goto label_12837c;
    }
    ctx->pc = 0x128374u;
    {
        const bool branch_taken_0x128374 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128374u;
            // 0x128378: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128374) {
            ctx->pc = 0x12829Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12829c;
        }
    }
    ctx->pc = 0x12837Cu;
label_12837c:
    // 0x12837c: 0x1000ff63  b           . + 4 + (-0x9D << 2)
label_128380:
    if (ctx->pc == 0x128380u) {
        ctx->pc = 0x128380u;
            // 0x128380: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128384u;
        goto label_128384;
    }
    ctx->pc = 0x12837Cu;
    {
        const bool branch_taken_0x12837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12837Cu;
            // 0x128380: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12837c) {
            ctx->pc = 0x12810Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12810c;
        }
    }
    ctx->pc = 0x128384u;
label_128384:
    // 0x128384: 0x0  nop
    ctx->pc = 0x128384u;
    // NOP
label_128388:
    // 0x128388: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x128388u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_12838c:
    // 0x12838c: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
label_128390:
    if (ctx->pc == 0x128390u) {
        ctx->pc = 0x128390u;
            // 0x128390: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x128394u;
        goto label_128394;
    }
    ctx->pc = 0x12838Cu;
    {
        const bool branch_taken_0x12838c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12838c) {
            ctx->pc = 0x128390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12838Cu;
            // 0x128390: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1283B8u;
            goto label_1283b8;
        }
    }
    ctx->pc = 0x128394u;
label_128394:
    // 0x128394: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x128394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_128398:
    // 0x128398: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x128398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12839c:
    // 0x12839c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1283a0:
    // 0x1283a0: 0x40f809  jalr        $v0
label_1283a4:
    if (ctx->pc == 0x1283A4u) {
        ctx->pc = 0x1283A4u;
            // 0x1283a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1283A8u;
        goto label_1283a8;
    }
    ctx->pc = 0x1283A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1283A8u);
        ctx->pc = 0x1283A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283A0u;
            // 0x1283a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1283A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1283A8u; }
            if (ctx->pc != 0x1283A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1283A8u;
label_1283a8:
    // 0x1283a8: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
label_1283ac:
    if (ctx->pc == 0x1283ACu) {
        ctx->pc = 0x1283ACu;
            // 0x1283ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1283B0u;
        goto label_1283b0;
    }
    ctx->pc = 0x1283A8u;
    {
        const bool branch_taken_0x1283a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1283ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283A8u;
            // 0x1283ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283a8) {
            ctx->pc = 0x128348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128348;
        }
    }
    ctx->pc = 0x1283B0u;
label_1283b0:
    // 0x1283b0: 0x1000ff63  b           . + 4 + (-0x9D << 2)
label_1283b4:
    if (ctx->pc == 0x1283B4u) {
        ctx->pc = 0x1283B4u;
            // 0x1283b4: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x1283B8u;
        goto label_1283b8;
    }
    ctx->pc = 0x1283B0u;
    {
        const bool branch_taken_0x1283b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283B0u;
            // 0x1283b4: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283b0) {
            ctx->pc = 0x128140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128140;
        }
    }
    ctx->pc = 0x1283B8u;
label_1283b8:
    // 0x1283b8: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x1283b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1283bc:
    // 0x1283bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1283bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1283c0:
    // 0x1283c0: 0xc04a534  jal         func_1294D0
label_1283c4:
    if (ctx->pc == 0x1283C4u) {
        ctx->pc = 0x1283C4u;
            // 0x1283c4: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1283C8u;
        goto label_1283c8;
    }
    ctx->pc = 0x1283C0u;
    SET_GPR_U32(ctx, 31, 0x1283C8u);
    ctx->pc = 0x1283C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283C0u;
            // 0x1283c4: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1283C8u; }
        if (ctx->pc != 0x1283C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1283C8u; }
        if (ctx->pc != 0x1283C8u) { return; }
    }
    ctx->pc = 0x1283C8u;
label_1283c8:
    // 0x1283c8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1283c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1283cc:
    // 0x1283cc: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x1283ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1283d0:
    // 0x1283d0: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x1283d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_1283d4:
    // 0x1283d4: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x1283d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_1283d8:
    // 0x1283d8: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x1283d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_1283dc:
    // 0x1283dc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_1283e0:
    if (ctx->pc == 0x1283E0u) {
        ctx->pc = 0x1283E0u;
            // 0x1283e0: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->pc = 0x1283E4u;
        goto label_1283e4;
    }
    ctx->pc = 0x1283DCu;
    {
        const bool branch_taken_0x1283dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283DCu;
            // 0x1283e0: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283dc) {
            ctx->pc = 0x128348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128348;
        }
    }
    ctx->pc = 0x1283E4u;
label_1283e4:
    // 0x1283e4: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
label_1283e8:
    if (ctx->pc == 0x1283E8u) {
        ctx->pc = 0x1283E8u;
            // 0x1283e8: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1283ECu;
        goto label_1283ec;
    }
    ctx->pc = 0x1283E4u;
    {
        const bool branch_taken_0x1283e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283E4u;
            // 0x1283e8: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283e4) {
            ctx->pc = 0x1282ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1282ec;
        }
    }
    ctx->pc = 0x1283ECu;
label_1283ec:
    // 0x1283ec: 0x0  nop
    ctx->pc = 0x1283ecu;
    // NOP
}
