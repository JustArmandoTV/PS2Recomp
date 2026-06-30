#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003240F0
// Address: 0x3240f0 - 0x3243d0
void sub_003240F0_0x3240f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003240F0_0x3240f0");
#endif

    switch (ctx->pc) {
        case 0x3240f0u: goto label_3240f0;
        case 0x3240f4u: goto label_3240f4;
        case 0x3240f8u: goto label_3240f8;
        case 0x3240fcu: goto label_3240fc;
        case 0x324100u: goto label_324100;
        case 0x324104u: goto label_324104;
        case 0x324108u: goto label_324108;
        case 0x32410cu: goto label_32410c;
        case 0x324110u: goto label_324110;
        case 0x324114u: goto label_324114;
        case 0x324118u: goto label_324118;
        case 0x32411cu: goto label_32411c;
        case 0x324120u: goto label_324120;
        case 0x324124u: goto label_324124;
        case 0x324128u: goto label_324128;
        case 0x32412cu: goto label_32412c;
        case 0x324130u: goto label_324130;
        case 0x324134u: goto label_324134;
        case 0x324138u: goto label_324138;
        case 0x32413cu: goto label_32413c;
        case 0x324140u: goto label_324140;
        case 0x324144u: goto label_324144;
        case 0x324148u: goto label_324148;
        case 0x32414cu: goto label_32414c;
        case 0x324150u: goto label_324150;
        case 0x324154u: goto label_324154;
        case 0x324158u: goto label_324158;
        case 0x32415cu: goto label_32415c;
        case 0x324160u: goto label_324160;
        case 0x324164u: goto label_324164;
        case 0x324168u: goto label_324168;
        case 0x32416cu: goto label_32416c;
        case 0x324170u: goto label_324170;
        case 0x324174u: goto label_324174;
        case 0x324178u: goto label_324178;
        case 0x32417cu: goto label_32417c;
        case 0x324180u: goto label_324180;
        case 0x324184u: goto label_324184;
        case 0x324188u: goto label_324188;
        case 0x32418cu: goto label_32418c;
        case 0x324190u: goto label_324190;
        case 0x324194u: goto label_324194;
        case 0x324198u: goto label_324198;
        case 0x32419cu: goto label_32419c;
        case 0x3241a0u: goto label_3241a0;
        case 0x3241a4u: goto label_3241a4;
        case 0x3241a8u: goto label_3241a8;
        case 0x3241acu: goto label_3241ac;
        case 0x3241b0u: goto label_3241b0;
        case 0x3241b4u: goto label_3241b4;
        case 0x3241b8u: goto label_3241b8;
        case 0x3241bcu: goto label_3241bc;
        case 0x3241c0u: goto label_3241c0;
        case 0x3241c4u: goto label_3241c4;
        case 0x3241c8u: goto label_3241c8;
        case 0x3241ccu: goto label_3241cc;
        case 0x3241d0u: goto label_3241d0;
        case 0x3241d4u: goto label_3241d4;
        case 0x3241d8u: goto label_3241d8;
        case 0x3241dcu: goto label_3241dc;
        case 0x3241e0u: goto label_3241e0;
        case 0x3241e4u: goto label_3241e4;
        case 0x3241e8u: goto label_3241e8;
        case 0x3241ecu: goto label_3241ec;
        case 0x3241f0u: goto label_3241f0;
        case 0x3241f4u: goto label_3241f4;
        case 0x3241f8u: goto label_3241f8;
        case 0x3241fcu: goto label_3241fc;
        case 0x324200u: goto label_324200;
        case 0x324204u: goto label_324204;
        case 0x324208u: goto label_324208;
        case 0x32420cu: goto label_32420c;
        case 0x324210u: goto label_324210;
        case 0x324214u: goto label_324214;
        case 0x324218u: goto label_324218;
        case 0x32421cu: goto label_32421c;
        case 0x324220u: goto label_324220;
        case 0x324224u: goto label_324224;
        case 0x324228u: goto label_324228;
        case 0x32422cu: goto label_32422c;
        case 0x324230u: goto label_324230;
        case 0x324234u: goto label_324234;
        case 0x324238u: goto label_324238;
        case 0x32423cu: goto label_32423c;
        case 0x324240u: goto label_324240;
        case 0x324244u: goto label_324244;
        case 0x324248u: goto label_324248;
        case 0x32424cu: goto label_32424c;
        case 0x324250u: goto label_324250;
        case 0x324254u: goto label_324254;
        case 0x324258u: goto label_324258;
        case 0x32425cu: goto label_32425c;
        case 0x324260u: goto label_324260;
        case 0x324264u: goto label_324264;
        case 0x324268u: goto label_324268;
        case 0x32426cu: goto label_32426c;
        case 0x324270u: goto label_324270;
        case 0x324274u: goto label_324274;
        case 0x324278u: goto label_324278;
        case 0x32427cu: goto label_32427c;
        case 0x324280u: goto label_324280;
        case 0x324284u: goto label_324284;
        case 0x324288u: goto label_324288;
        case 0x32428cu: goto label_32428c;
        case 0x324290u: goto label_324290;
        case 0x324294u: goto label_324294;
        case 0x324298u: goto label_324298;
        case 0x32429cu: goto label_32429c;
        case 0x3242a0u: goto label_3242a0;
        case 0x3242a4u: goto label_3242a4;
        case 0x3242a8u: goto label_3242a8;
        case 0x3242acu: goto label_3242ac;
        case 0x3242b0u: goto label_3242b0;
        case 0x3242b4u: goto label_3242b4;
        case 0x3242b8u: goto label_3242b8;
        case 0x3242bcu: goto label_3242bc;
        case 0x3242c0u: goto label_3242c0;
        case 0x3242c4u: goto label_3242c4;
        case 0x3242c8u: goto label_3242c8;
        case 0x3242ccu: goto label_3242cc;
        case 0x3242d0u: goto label_3242d0;
        case 0x3242d4u: goto label_3242d4;
        case 0x3242d8u: goto label_3242d8;
        case 0x3242dcu: goto label_3242dc;
        case 0x3242e0u: goto label_3242e0;
        case 0x3242e4u: goto label_3242e4;
        case 0x3242e8u: goto label_3242e8;
        case 0x3242ecu: goto label_3242ec;
        case 0x3242f0u: goto label_3242f0;
        case 0x3242f4u: goto label_3242f4;
        case 0x3242f8u: goto label_3242f8;
        case 0x3242fcu: goto label_3242fc;
        case 0x324300u: goto label_324300;
        case 0x324304u: goto label_324304;
        case 0x324308u: goto label_324308;
        case 0x32430cu: goto label_32430c;
        case 0x324310u: goto label_324310;
        case 0x324314u: goto label_324314;
        case 0x324318u: goto label_324318;
        case 0x32431cu: goto label_32431c;
        case 0x324320u: goto label_324320;
        case 0x324324u: goto label_324324;
        case 0x324328u: goto label_324328;
        case 0x32432cu: goto label_32432c;
        case 0x324330u: goto label_324330;
        case 0x324334u: goto label_324334;
        case 0x324338u: goto label_324338;
        case 0x32433cu: goto label_32433c;
        case 0x324340u: goto label_324340;
        case 0x324344u: goto label_324344;
        case 0x324348u: goto label_324348;
        case 0x32434cu: goto label_32434c;
        case 0x324350u: goto label_324350;
        case 0x324354u: goto label_324354;
        case 0x324358u: goto label_324358;
        case 0x32435cu: goto label_32435c;
        case 0x324360u: goto label_324360;
        case 0x324364u: goto label_324364;
        case 0x324368u: goto label_324368;
        case 0x32436cu: goto label_32436c;
        case 0x324370u: goto label_324370;
        case 0x324374u: goto label_324374;
        case 0x324378u: goto label_324378;
        case 0x32437cu: goto label_32437c;
        case 0x324380u: goto label_324380;
        case 0x324384u: goto label_324384;
        case 0x324388u: goto label_324388;
        case 0x32438cu: goto label_32438c;
        case 0x324390u: goto label_324390;
        case 0x324394u: goto label_324394;
        case 0x324398u: goto label_324398;
        case 0x32439cu: goto label_32439c;
        case 0x3243a0u: goto label_3243a0;
        case 0x3243a4u: goto label_3243a4;
        case 0x3243a8u: goto label_3243a8;
        case 0x3243acu: goto label_3243ac;
        case 0x3243b0u: goto label_3243b0;
        case 0x3243b4u: goto label_3243b4;
        case 0x3243b8u: goto label_3243b8;
        case 0x3243bcu: goto label_3243bc;
        case 0x3243c0u: goto label_3243c0;
        case 0x3243c4u: goto label_3243c4;
        case 0x3243c8u: goto label_3243c8;
        case 0x3243ccu: goto label_3243cc;
        default: break;
    }

    ctx->pc = 0x3240f0u;

label_3240f0:
    // 0x3240f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3240f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3240f4:
    // 0x3240f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3240f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3240f8:
    // 0x3240f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3240f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3240fc:
    // 0x3240fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3240fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_324100:
    // 0x324100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_324104:
    // 0x324104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_324108:
    // 0x324108: 0x8c683e30  lw          $t0, 0x3E30($v1)
    ctx->pc = 0x324108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_32410c:
    // 0x32410c: 0x2d01000c  sltiu       $at, $t0, 0xC
    ctx->pc = 0x32410cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_324110:
    // 0x324110: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
label_324114:
    if (ctx->pc == 0x324114u) {
        ctx->pc = 0x324114u;
            // 0x324114: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x324118u;
        goto label_324118;
    }
    ctx->pc = 0x324110u;
    {
        const bool branch_taken_0x324110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x324114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324110u;
            // 0x324114: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324110) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324118u;
label_324118:
    // 0x324118: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32411c:
    // 0x32411c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x32411cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_324120:
    // 0x324120: 0x24a5c9a0  addiu       $a1, $a1, -0x3660
    ctx->pc = 0x324120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953376));
label_324124:
    // 0x324124: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x324124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_324128:
    // 0x324128: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x324128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32412c:
    // 0x32412c: 0x600008  jr          $v1
label_324130:
    if (ctx->pc == 0x324130u) {
        ctx->pc = 0x324134u;
        goto label_324134;
    }
    ctx->pc = 0x32412Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x324134u: goto label_324134;
            case 0x32414Cu: goto label_32414c;
            case 0x32416Cu: goto label_32416c;
            case 0x324398u: goto label_324398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x324134u;
label_324134:
    // 0x324134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x324134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_324138:
    // 0x324138: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x324138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32413c:
    // 0x32413c: 0x320f809  jalr        $t9
label_324140:
    if (ctx->pc == 0x324140u) {
        ctx->pc = 0x324144u;
        goto label_324144;
    }
    ctx->pc = 0x32413Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324144u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x324144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324144u; }
            if (ctx->pc != 0x324144u) { return; }
        }
        }
    }
    ctx->pc = 0x324144u;
label_324144:
    // 0x324144: 0x1000009c  b           . + 4 + (0x9C << 2)
label_324148:
    if (ctx->pc == 0x324148u) {
        ctx->pc = 0x324148u;
            // 0x324148: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x32414Cu;
        goto label_32414c;
    }
    ctx->pc = 0x324144u;
    {
        const bool branch_taken_0x324144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324144u;
            // 0x324148: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324144) {
            ctx->pc = 0x3243B8u;
            goto label_3243b8;
        }
    }
    ctx->pc = 0x32414Cu;
label_32414c:
    // 0x32414c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_324150:
    // 0x324150: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x324150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
label_324154:
    // 0x324154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x324154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_324158:
    // 0x324158: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x324158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32415c:
    // 0x32415c: 0x320f809  jalr        $t9
label_324160:
    if (ctx->pc == 0x324160u) {
        ctx->pc = 0x324164u;
        goto label_324164;
    }
    ctx->pc = 0x32415Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324164u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x324164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324164u; }
            if (ctx->pc != 0x324164u) { return; }
        }
        }
    }
    ctx->pc = 0x324164u;
label_324164:
    // 0x324164: 0x10000093  b           . + 4 + (0x93 << 2)
label_324168:
    if (ctx->pc == 0x324168u) {
        ctx->pc = 0x32416Cu;
        goto label_32416c;
    }
    ctx->pc = 0x324164u;
    {
        const bool branch_taken_0x324164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324164) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x32416Cu;
label_32416c:
    // 0x32416c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x32416cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_324170:
    // 0x324170: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x324170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_324174:
    // 0x324174: 0x8ca50ec8  lw          $a1, 0xEC8($a1)
    ctx->pc = 0x324174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3784)));
label_324178:
    // 0x324178: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x324178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_32417c:
    // 0x32417c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x32417cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_324180:
    // 0x324180: 0x9066008c  lbu         $a2, 0x8C($v1)
    ctx->pc = 0x324180u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
label_324184:
    // 0x324184: 0x90710038  lbu         $s1, 0x38($v1)
    ctx->pc = 0x324184u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
label_324188:
    // 0x324188: 0x90650039  lbu         $a1, 0x39($v1)
    ctx->pc = 0x324188u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
label_32418c:
    // 0x32418c: 0x38c60002  xori        $a2, $a2, 0x2
    ctx->pc = 0x32418cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
label_324190:
    // 0x324190: 0x2cd00001  sltiu       $s0, $a2, 0x1
    ctx->pc = 0x324190u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_324194:
    // 0x324194: 0x2e23000c  sltiu       $v1, $s1, 0xC
    ctx->pc = 0x324194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_324198:
    // 0x324198: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x324198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_32419c:
    // 0x32419c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3241a0:
    if (ctx->pc == 0x3241A0u) {
        ctx->pc = 0x3241A0u;
            // 0x3241a0: 0xae48067c  sw          $t0, 0x67C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1660), GPR_U32(ctx, 8));
        ctx->pc = 0x3241A4u;
        goto label_3241a4;
    }
    ctx->pc = 0x32419Cu;
    {
        const bool branch_taken_0x32419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3241A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32419Cu;
            // 0x3241a0: 0xae48067c  sw          $t0, 0x67C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1660), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32419c) {
            ctx->pc = 0x3241B0u;
            goto label_3241b0;
        }
    }
    ctx->pc = 0x3241A4u;
label_3241a4:
    // 0x3241a4: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x3241a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3241a8:
    // 0x3241a8: 0x54600076  bnel        $v1, $zero, . + 4 + (0x76 << 2)
label_3241ac:
    if (ctx->pc == 0x3241ACu) {
        ctx->pc = 0x3241ACu;
            // 0x3241ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3241B0u;
        goto label_3241b0;
    }
    ctx->pc = 0x3241A8u;
    {
        const bool branch_taken_0x3241a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3241a8) {
            ctx->pc = 0x3241ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3241A8u;
            // 0x3241ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324384u;
            goto label_324384;
        }
    }
    ctx->pc = 0x3241B0u;
label_3241b0:
    // 0x3241b0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3241b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3241b4:
    // 0x3241b4: 0x52230055  beql        $s1, $v1, . + 4 + (0x55 << 2)
label_3241b8:
    if (ctx->pc == 0x3241B8u) {
        ctx->pc = 0x3241B8u;
            // 0x3241b8: 0x24e40030  addiu       $a0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->pc = 0x3241BCu;
        goto label_3241bc;
    }
    ctx->pc = 0x3241B4u;
    {
        const bool branch_taken_0x3241b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3241b4) {
            ctx->pc = 0x3241B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3241B4u;
            // 0x3241b8: 0x24e40030  addiu       $a0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32430Cu;
            goto label_32430c;
        }
    }
    ctx->pc = 0x3241BCu;
label_3241bc:
    // 0x3241bc: 0x2e230006  sltiu       $v1, $s1, 0x6
    ctx->pc = 0x3241bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3241c0:
    // 0x3241c0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3241c4:
    if (ctx->pc == 0x3241C4u) {
        ctx->pc = 0x3241C4u;
            // 0x3241c4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3241C8u;
        goto label_3241c8;
    }
    ctx->pc = 0x3241C0u;
    {
        const bool branch_taken_0x3241c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3241c0) {
            ctx->pc = 0x3241C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3241C0u;
            // 0x3241c4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3241D8u;
            goto label_3241d8;
        }
    }
    ctx->pc = 0x3241C8u;
label_3241c8:
    // 0x3241c8: 0x2e23000a  sltiu       $v1, $s1, 0xA
    ctx->pc = 0x3241c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3241cc:
    // 0x3241cc: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
label_3241d0:
    if (ctx->pc == 0x3241D0u) {
        ctx->pc = 0x3241D4u;
        goto label_3241d4;
    }
    ctx->pc = 0x3241CCu;
    {
        const bool branch_taken_0x3241cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3241cc) {
            ctx->pc = 0x324308u;
            goto label_324308;
        }
    }
    ctx->pc = 0x3241D4u;
label_3241d4:
    // 0x3241d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3241d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3241d8:
    // 0x3241d8: 0x5223002d  beql        $s1, $v1, . + 4 + (0x2D << 2)
label_3241dc:
    if (ctx->pc == 0x3241DCu) {
        ctx->pc = 0x3241DCu;
            // 0x3241dc: 0x24e40030  addiu       $a0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->pc = 0x3241E0u;
        goto label_3241e0;
    }
    ctx->pc = 0x3241D8u;
    {
        const bool branch_taken_0x3241d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3241d8) {
            ctx->pc = 0x3241DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3241D8u;
            // 0x3241dc: 0x24e40030  addiu       $a0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324290u;
            goto label_324290;
        }
    }
    ctx->pc = 0x3241E0u;
label_3241e0:
    // 0x3241e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3241e4:
    // 0x3241e4: 0x52230024  beql        $s1, $v1, . + 4 + (0x24 << 2)
label_3241e8:
    if (ctx->pc == 0x3241E8u) {
        ctx->pc = 0x3241E8u;
            // 0x3241e8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3241ECu;
        goto label_3241ec;
    }
    ctx->pc = 0x3241E4u;
    {
        const bool branch_taken_0x3241e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3241e4) {
            ctx->pc = 0x3241E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3241E4u;
            // 0x3241e8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324278u;
            goto label_324278;
        }
    }
    ctx->pc = 0x3241ECu;
label_3241ec:
    // 0x3241ec: 0x2e230005  sltiu       $v1, $s1, 0x5
    ctx->pc = 0x3241ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3241f0:
    // 0x3241f0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3241f4:
    if (ctx->pc == 0x3241F4u) {
        ctx->pc = 0x3241F4u;
            // 0x3241f4: 0x24e40030  addiu       $a0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->pc = 0x3241F8u;
        goto label_3241f8;
    }
    ctx->pc = 0x3241F0u;
    {
        const bool branch_taken_0x3241f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3241f0) {
            ctx->pc = 0x3241F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3241F0u;
            // 0x3241f4: 0x24e40030  addiu       $a0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324200u;
            goto label_324200;
        }
    }
    ctx->pc = 0x3241F8u;
label_3241f8:
    // 0x3241f8: 0x1000006e  b           . + 4 + (0x6E << 2)
label_3241fc:
    if (ctx->pc == 0x3241FCu) {
        ctx->pc = 0x324200u;
        goto label_324200;
    }
    ctx->pc = 0x3241F8u;
    {
        const bool branch_taken_0x3241f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3241f8) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324200u;
label_324200:
    // 0x324200: 0xc0b90e0  jal         func_2E4380
label_324204:
    if (ctx->pc == 0x324204u) {
        ctx->pc = 0x324208u;
        goto label_324208;
    }
    ctx->pc = 0x324200u;
    SET_GPR_U32(ctx, 31, 0x324208u);
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324208u; }
        if (ctx->pc != 0x324208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324208u; }
        if (ctx->pc != 0x324208u) { return; }
    }
    ctx->pc = 0x324208u;
label_324208:
    // 0x324208: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_32420c:
    if (ctx->pc == 0x32420Cu) {
        ctx->pc = 0x32420Cu;
            // 0x32420c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x324210u;
        goto label_324210;
    }
    ctx->pc = 0x324208u;
    {
        const bool branch_taken_0x324208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324208) {
            ctx->pc = 0x32420Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324208u;
            // 0x32420c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324260u;
            goto label_324260;
        }
    }
    ctx->pc = 0x324210u;
label_324210:
    // 0x324210: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_324214:
    if (ctx->pc == 0x324214u) {
        ctx->pc = 0x324214u;
            // 0x324214: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x324218u;
        goto label_324218;
    }
    ctx->pc = 0x324210u;
    {
        const bool branch_taken_0x324210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x324210) {
            ctx->pc = 0x324214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324210u;
            // 0x324214: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324248u;
            goto label_324248;
        }
    }
    ctx->pc = 0x324218u;
label_324218:
    // 0x324218: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x324218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32421c:
    // 0x32421c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_324220:
    // 0x324220: 0xac453e30  sw          $a1, 0x3E30($v0)
    ctx->pc = 0x324220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 5));
label_324224:
    // 0x324224: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x324224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_324228:
    // 0x324228: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x324228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_32422c:
    // 0x32422c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_324230:
    // 0x324230: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x324230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_324234:
    // 0x324234: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x324234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324238:
    // 0x324238: 0x320f809  jalr        $t9
label_32423c:
    if (ctx->pc == 0x32423Cu) {
        ctx->pc = 0x32423Cu;
            // 0x32423c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x324240u;
        goto label_324240;
    }
    ctx->pc = 0x324238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324240u);
        ctx->pc = 0x32423Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324238u;
            // 0x32423c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324240u; }
            if (ctx->pc != 0x324240u) { return; }
        }
        }
    }
    ctx->pc = 0x324240u;
label_324240:
    // 0x324240: 0x1000005c  b           . + 4 + (0x5C << 2)
label_324244:
    if (ctx->pc == 0x324244u) {
        ctx->pc = 0x324248u;
        goto label_324248;
    }
    ctx->pc = 0x324240u;
    {
        const bool branch_taken_0x324240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324240) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324248u;
label_324248:
    // 0x324248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32424c:
    // 0x32424c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32424cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324250:
    // 0x324250: 0x320f809  jalr        $t9
label_324254:
    if (ctx->pc == 0x324254u) {
        ctx->pc = 0x324254u;
            // 0x324254: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x324258u;
        goto label_324258;
    }
    ctx->pc = 0x324250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324258u);
        ctx->pc = 0x324254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324250u;
            // 0x324254: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324258u; }
            if (ctx->pc != 0x324258u) { return; }
        }
        }
    }
    ctx->pc = 0x324258u;
label_324258:
    // 0x324258: 0x10000056  b           . + 4 + (0x56 << 2)
label_32425c:
    if (ctx->pc == 0x32425Cu) {
        ctx->pc = 0x324260u;
        goto label_324260;
    }
    ctx->pc = 0x324258u;
    {
        const bool branch_taken_0x324258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324258) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324260u;
label_324260:
    // 0x324260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_324264:
    // 0x324264: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x324264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324268:
    // 0x324268: 0x320f809  jalr        $t9
label_32426c:
    if (ctx->pc == 0x32426Cu) {
        ctx->pc = 0x32426Cu;
            // 0x32426c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x324270u;
        goto label_324270;
    }
    ctx->pc = 0x324268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324270u);
        ctx->pc = 0x32426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324268u;
            // 0x32426c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324270u; }
            if (ctx->pc != 0x324270u) { return; }
        }
        }
    }
    ctx->pc = 0x324270u;
label_324270:
    // 0x324270: 0x10000050  b           . + 4 + (0x50 << 2)
label_324274:
    if (ctx->pc == 0x324274u) {
        ctx->pc = 0x324278u;
        goto label_324278;
    }
    ctx->pc = 0x324270u;
    {
        const bool branch_taken_0x324270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324270) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324278u;
label_324278:
    // 0x324278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32427c:
    // 0x32427c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32427cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324280:
    // 0x324280: 0x320f809  jalr        $t9
label_324284:
    if (ctx->pc == 0x324284u) {
        ctx->pc = 0x324284u;
            // 0x324284: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x324288u;
        goto label_324288;
    }
    ctx->pc = 0x324280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324288u);
        ctx->pc = 0x324284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324280u;
            // 0x324284: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324288u; }
            if (ctx->pc != 0x324288u) { return; }
        }
        }
    }
    ctx->pc = 0x324288u;
label_324288:
    // 0x324288: 0x1000004a  b           . + 4 + (0x4A << 2)
label_32428c:
    if (ctx->pc == 0x32428Cu) {
        ctx->pc = 0x324290u;
        goto label_324290;
    }
    ctx->pc = 0x324288u;
    {
        const bool branch_taken_0x324288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324288) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324290u;
label_324290:
    // 0x324290: 0xc0b90e0  jal         func_2E4380
label_324294:
    if (ctx->pc == 0x324294u) {
        ctx->pc = 0x324298u;
        goto label_324298;
    }
    ctx->pc = 0x324290u;
    SET_GPR_U32(ctx, 31, 0x324298u);
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324298u; }
        if (ctx->pc != 0x324298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324298u; }
        if (ctx->pc != 0x324298u) { return; }
    }
    ctx->pc = 0x324298u;
label_324298:
    // 0x324298: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_32429c:
    if (ctx->pc == 0x32429Cu) {
        ctx->pc = 0x32429Cu;
            // 0x32429c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3242A0u;
        goto label_3242a0;
    }
    ctx->pc = 0x324298u;
    {
        const bool branch_taken_0x324298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324298) {
            ctx->pc = 0x32429Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324298u;
            // 0x32429c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3242F0u;
            goto label_3242f0;
        }
    }
    ctx->pc = 0x3242A0u;
label_3242a0:
    // 0x3242a0: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_3242a4:
    if (ctx->pc == 0x3242A4u) {
        ctx->pc = 0x3242A4u;
            // 0x3242a4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3242A8u;
        goto label_3242a8;
    }
    ctx->pc = 0x3242A0u;
    {
        const bool branch_taken_0x3242a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3242a0) {
            ctx->pc = 0x3242A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3242A0u;
            // 0x3242a4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3242D8u;
            goto label_3242d8;
        }
    }
    ctx->pc = 0x3242A8u;
label_3242a8:
    // 0x3242a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3242a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3242ac:
    // 0x3242ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3242acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3242b0:
    // 0x3242b0: 0xac453e30  sw          $a1, 0x3E30($v0)
    ctx->pc = 0x3242b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 5));
label_3242b4:
    // 0x3242b4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x3242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3242b8:
    // 0x3242b8: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x3242b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_3242bc:
    // 0x3242bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3242bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3242c0:
    // 0x3242c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3242c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3242c4:
    // 0x3242c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3242c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3242c8:
    // 0x3242c8: 0x320f809  jalr        $t9
label_3242cc:
    if (ctx->pc == 0x3242CCu) {
        ctx->pc = 0x3242CCu;
            // 0x3242cc: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x3242D0u;
        goto label_3242d0;
    }
    ctx->pc = 0x3242C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3242D0u);
        ctx->pc = 0x3242CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3242C8u;
            // 0x3242cc: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3242D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3242D0u; }
            if (ctx->pc != 0x3242D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3242D0u;
label_3242d0:
    // 0x3242d0: 0x10000038  b           . + 4 + (0x38 << 2)
label_3242d4:
    if (ctx->pc == 0x3242D4u) {
        ctx->pc = 0x3242D8u;
        goto label_3242d8;
    }
    ctx->pc = 0x3242D0u;
    {
        const bool branch_taken_0x3242d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3242d0) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x3242D8u;
label_3242d8:
    // 0x3242d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3242d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3242dc:
    // 0x3242dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3242dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3242e0:
    // 0x3242e0: 0x320f809  jalr        $t9
label_3242e4:
    if (ctx->pc == 0x3242E4u) {
        ctx->pc = 0x3242E4u;
            // 0x3242e4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x3242E8u;
        goto label_3242e8;
    }
    ctx->pc = 0x3242E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3242E8u);
        ctx->pc = 0x3242E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3242E0u;
            // 0x3242e4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3242E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3242E8u; }
            if (ctx->pc != 0x3242E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3242E8u;
label_3242e8:
    // 0x3242e8: 0x10000032  b           . + 4 + (0x32 << 2)
label_3242ec:
    if (ctx->pc == 0x3242ECu) {
        ctx->pc = 0x3242F0u;
        goto label_3242f0;
    }
    ctx->pc = 0x3242E8u;
    {
        const bool branch_taken_0x3242e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3242e8) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x3242F0u;
label_3242f0:
    // 0x3242f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3242f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3242f4:
    // 0x3242f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3242f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3242f8:
    // 0x3242f8: 0x320f809  jalr        $t9
label_3242fc:
    if (ctx->pc == 0x3242FCu) {
        ctx->pc = 0x3242FCu;
            // 0x3242fc: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x324300u;
        goto label_324300;
    }
    ctx->pc = 0x3242F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324300u);
        ctx->pc = 0x3242FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3242F8u;
            // 0x3242fc: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324300u; }
            if (ctx->pc != 0x324300u) { return; }
        }
        }
    }
    ctx->pc = 0x324300u;
label_324300:
    // 0x324300: 0x1000002c  b           . + 4 + (0x2C << 2)
label_324304:
    if (ctx->pc == 0x324304u) {
        ctx->pc = 0x324308u;
        goto label_324308;
    }
    ctx->pc = 0x324300u;
    {
        const bool branch_taken_0x324300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324300) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324308u;
label_324308:
    // 0x324308: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x324308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_32430c:
    // 0x32430c: 0xc0b90e0  jal         func_2E4380
label_324310:
    if (ctx->pc == 0x324310u) {
        ctx->pc = 0x324314u;
        goto label_324314;
    }
    ctx->pc = 0x32430Cu;
    SET_GPR_U32(ctx, 31, 0x324314u);
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324314u; }
        if (ctx->pc != 0x324314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324314u; }
        if (ctx->pc != 0x324314u) { return; }
    }
    ctx->pc = 0x324314u;
label_324314:
    // 0x324314: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_324318:
    if (ctx->pc == 0x324318u) {
        ctx->pc = 0x324318u;
            // 0x324318: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x32431Cu;
        goto label_32431c;
    }
    ctx->pc = 0x324314u;
    {
        const bool branch_taken_0x324314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324314) {
            ctx->pc = 0x324318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324314u;
            // 0x324318: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32436Cu;
            goto label_32436c;
        }
    }
    ctx->pc = 0x32431Cu;
label_32431c:
    // 0x32431c: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_324320:
    if (ctx->pc == 0x324320u) {
        ctx->pc = 0x324320u;
            // 0x324320: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x324324u;
        goto label_324324;
    }
    ctx->pc = 0x32431Cu;
    {
        const bool branch_taken_0x32431c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32431c) {
            ctx->pc = 0x324320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32431Cu;
            // 0x324320: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324354u;
            goto label_324354;
        }
    }
    ctx->pc = 0x324324u;
label_324324:
    // 0x324324: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x324324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_324328:
    // 0x324328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x324328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32432c:
    // 0x32432c: 0xac453e30  sw          $a1, 0x3E30($v0)
    ctx->pc = 0x32432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 5));
label_324330:
    // 0x324330: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x324330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_324334:
    // 0x324334: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x324334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_324338:
    // 0x324338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32433c:
    // 0x32433c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x32433cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_324340:
    // 0x324340: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x324340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324344:
    // 0x324344: 0x320f809  jalr        $t9
label_324348:
    if (ctx->pc == 0x324348u) {
        ctx->pc = 0x324348u;
            // 0x324348: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x32434Cu;
        goto label_32434c;
    }
    ctx->pc = 0x324344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32434Cu);
        ctx->pc = 0x324348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324344u;
            // 0x324348: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32434Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32434Cu; }
            if (ctx->pc != 0x32434Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32434Cu;
label_32434c:
    // 0x32434c: 0x10000019  b           . + 4 + (0x19 << 2)
label_324350:
    if (ctx->pc == 0x324350u) {
        ctx->pc = 0x324354u;
        goto label_324354;
    }
    ctx->pc = 0x32434Cu;
    {
        const bool branch_taken_0x32434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32434c) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324354u;
label_324354:
    // 0x324354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_324358:
    // 0x324358: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x324358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32435c:
    // 0x32435c: 0x320f809  jalr        $t9
label_324360:
    if (ctx->pc == 0x324360u) {
        ctx->pc = 0x324360u;
            // 0x324360: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x324364u;
        goto label_324364;
    }
    ctx->pc = 0x32435Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324364u);
        ctx->pc = 0x324360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32435Cu;
            // 0x324360: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324364u; }
            if (ctx->pc != 0x324364u) { return; }
        }
        }
    }
    ctx->pc = 0x324364u;
label_324364:
    // 0x324364: 0x10000013  b           . + 4 + (0x13 << 2)
label_324368:
    if (ctx->pc == 0x324368u) {
        ctx->pc = 0x32436Cu;
        goto label_32436c;
    }
    ctx->pc = 0x324364u;
    {
        const bool branch_taken_0x324364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324364) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x32436Cu;
label_32436c:
    // 0x32436c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_324370:
    // 0x324370: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x324370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324374:
    // 0x324374: 0x320f809  jalr        $t9
label_324378:
    if (ctx->pc == 0x324378u) {
        ctx->pc = 0x324378u;
            // 0x324378: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x32437Cu;
        goto label_32437c;
    }
    ctx->pc = 0x324374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32437Cu);
        ctx->pc = 0x324378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324374u;
            // 0x324378: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32437Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32437Cu; }
            if (ctx->pc != 0x32437Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32437Cu;
label_32437c:
    // 0x32437c: 0x1000000d  b           . + 4 + (0xD << 2)
label_324380:
    if (ctx->pc == 0x324380u) {
        ctx->pc = 0x324384u;
        goto label_324384;
    }
    ctx->pc = 0x32437Cu;
    {
        const bool branch_taken_0x32437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32437c) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324384u;
label_324384:
    // 0x324384: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x324384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_324388:
    // 0x324388: 0x320f809  jalr        $t9
label_32438c:
    if (ctx->pc == 0x32438Cu) {
        ctx->pc = 0x32438Cu;
            // 0x32438c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x324390u;
        goto label_324390;
    }
    ctx->pc = 0x324388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324390u);
        ctx->pc = 0x32438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324388u;
            // 0x32438c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324390u; }
            if (ctx->pc != 0x324390u) { return; }
        }
        }
    }
    ctx->pc = 0x324390u;
label_324390:
    // 0x324390: 0x10000008  b           . + 4 + (0x8 << 2)
label_324394:
    if (ctx->pc == 0x324394u) {
        ctx->pc = 0x324398u;
        goto label_324398;
    }
    ctx->pc = 0x324390u;
    {
        const bool branch_taken_0x324390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324390) {
            ctx->pc = 0x3243B4u;
            goto label_3243b4;
        }
    }
    ctx->pc = 0x324398u;
label_324398:
    // 0x324398: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x324398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32439c:
    // 0x32439c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32439cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3243a0:
    // 0x3243a0: 0x320f809  jalr        $t9
label_3243a4:
    if (ctx->pc == 0x3243A4u) {
        ctx->pc = 0x3243A4u;
            // 0x3243a4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x3243A8u;
        goto label_3243a8;
    }
    ctx->pc = 0x3243A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3243A8u);
        ctx->pc = 0x3243A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3243A0u;
            // 0x3243a4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3243A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3243A8u; }
            if (ctx->pc != 0x3243A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3243A8u;
label_3243a8:
    // 0x3243a8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3243a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3243ac:
    // 0x3243ac: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x3243acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_3243b0:
    // 0x3243b0: 0xae43067c  sw          $v1, 0x67C($s2)
    ctx->pc = 0x3243b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1660), GPR_U32(ctx, 3));
label_3243b4:
    // 0x3243b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3243b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3243b8:
    // 0x3243b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3243b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3243bc:
    // 0x3243bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3243bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3243c0:
    // 0x3243c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3243c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3243c4:
    // 0x3243c4: 0x3e00008  jr          $ra
label_3243c8:
    if (ctx->pc == 0x3243C8u) {
        ctx->pc = 0x3243C8u;
            // 0x3243c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3243CCu;
        goto label_3243cc;
    }
    ctx->pc = 0x3243C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3243C4u;
            // 0x3243c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3243CCu;
label_3243cc:
    // 0x3243cc: 0x0  nop
    ctx->pc = 0x3243ccu;
    // NOP
}
