#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105138
// Address: 0x105138 - 0x105358
void sub_00105138_0x105138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105138_0x105138");
#endif

    switch (ctx->pc) {
        case 0x105138u: goto label_105138;
        case 0x10513cu: goto label_10513c;
        case 0x105140u: goto label_105140;
        case 0x105144u: goto label_105144;
        case 0x105148u: goto label_105148;
        case 0x10514cu: goto label_10514c;
        case 0x105150u: goto label_105150;
        case 0x105154u: goto label_105154;
        case 0x105158u: goto label_105158;
        case 0x10515cu: goto label_10515c;
        case 0x105160u: goto label_105160;
        case 0x105164u: goto label_105164;
        case 0x105168u: goto label_105168;
        case 0x10516cu: goto label_10516c;
        case 0x105170u: goto label_105170;
        case 0x105174u: goto label_105174;
        case 0x105178u: goto label_105178;
        case 0x10517cu: goto label_10517c;
        case 0x105180u: goto label_105180;
        case 0x105184u: goto label_105184;
        case 0x105188u: goto label_105188;
        case 0x10518cu: goto label_10518c;
        case 0x105190u: goto label_105190;
        case 0x105194u: goto label_105194;
        case 0x105198u: goto label_105198;
        case 0x10519cu: goto label_10519c;
        case 0x1051a0u: goto label_1051a0;
        case 0x1051a4u: goto label_1051a4;
        case 0x1051a8u: goto label_1051a8;
        case 0x1051acu: goto label_1051ac;
        case 0x1051b0u: goto label_1051b0;
        case 0x1051b4u: goto label_1051b4;
        case 0x1051b8u: goto label_1051b8;
        case 0x1051bcu: goto label_1051bc;
        case 0x1051c0u: goto label_1051c0;
        case 0x1051c4u: goto label_1051c4;
        case 0x1051c8u: goto label_1051c8;
        case 0x1051ccu: goto label_1051cc;
        case 0x1051d0u: goto label_1051d0;
        case 0x1051d4u: goto label_1051d4;
        case 0x1051d8u: goto label_1051d8;
        case 0x1051dcu: goto label_1051dc;
        case 0x1051e0u: goto label_1051e0;
        case 0x1051e4u: goto label_1051e4;
        case 0x1051e8u: goto label_1051e8;
        case 0x1051ecu: goto label_1051ec;
        case 0x1051f0u: goto label_1051f0;
        case 0x1051f4u: goto label_1051f4;
        case 0x1051f8u: goto label_1051f8;
        case 0x1051fcu: goto label_1051fc;
        case 0x105200u: goto label_105200;
        case 0x105204u: goto label_105204;
        case 0x105208u: goto label_105208;
        case 0x10520cu: goto label_10520c;
        case 0x105210u: goto label_105210;
        case 0x105214u: goto label_105214;
        case 0x105218u: goto label_105218;
        case 0x10521cu: goto label_10521c;
        case 0x105220u: goto label_105220;
        case 0x105224u: goto label_105224;
        case 0x105228u: goto label_105228;
        case 0x10522cu: goto label_10522c;
        case 0x105230u: goto label_105230;
        case 0x105234u: goto label_105234;
        case 0x105238u: goto label_105238;
        case 0x10523cu: goto label_10523c;
        case 0x105240u: goto label_105240;
        case 0x105244u: goto label_105244;
        case 0x105248u: goto label_105248;
        case 0x10524cu: goto label_10524c;
        case 0x105250u: goto label_105250;
        case 0x105254u: goto label_105254;
        case 0x105258u: goto label_105258;
        case 0x10525cu: goto label_10525c;
        case 0x105260u: goto label_105260;
        case 0x105264u: goto label_105264;
        case 0x105268u: goto label_105268;
        case 0x10526cu: goto label_10526c;
        case 0x105270u: goto label_105270;
        case 0x105274u: goto label_105274;
        case 0x105278u: goto label_105278;
        case 0x10527cu: goto label_10527c;
        case 0x105280u: goto label_105280;
        case 0x105284u: goto label_105284;
        case 0x105288u: goto label_105288;
        case 0x10528cu: goto label_10528c;
        case 0x105290u: goto label_105290;
        case 0x105294u: goto label_105294;
        case 0x105298u: goto label_105298;
        case 0x10529cu: goto label_10529c;
        case 0x1052a0u: goto label_1052a0;
        case 0x1052a4u: goto label_1052a4;
        case 0x1052a8u: goto label_1052a8;
        case 0x1052acu: goto label_1052ac;
        case 0x1052b0u: goto label_1052b0;
        case 0x1052b4u: goto label_1052b4;
        case 0x1052b8u: goto label_1052b8;
        case 0x1052bcu: goto label_1052bc;
        case 0x1052c0u: goto label_1052c0;
        case 0x1052c4u: goto label_1052c4;
        case 0x1052c8u: goto label_1052c8;
        case 0x1052ccu: goto label_1052cc;
        case 0x1052d0u: goto label_1052d0;
        case 0x1052d4u: goto label_1052d4;
        case 0x1052d8u: goto label_1052d8;
        case 0x1052dcu: goto label_1052dc;
        case 0x1052e0u: goto label_1052e0;
        case 0x1052e4u: goto label_1052e4;
        case 0x1052e8u: goto label_1052e8;
        case 0x1052ecu: goto label_1052ec;
        case 0x1052f0u: goto label_1052f0;
        case 0x1052f4u: goto label_1052f4;
        case 0x1052f8u: goto label_1052f8;
        case 0x1052fcu: goto label_1052fc;
        case 0x105300u: goto label_105300;
        case 0x105304u: goto label_105304;
        case 0x105308u: goto label_105308;
        case 0x10530cu: goto label_10530c;
        case 0x105310u: goto label_105310;
        case 0x105314u: goto label_105314;
        case 0x105318u: goto label_105318;
        case 0x10531cu: goto label_10531c;
        case 0x105320u: goto label_105320;
        case 0x105324u: goto label_105324;
        case 0x105328u: goto label_105328;
        case 0x10532cu: goto label_10532c;
        case 0x105330u: goto label_105330;
        case 0x105334u: goto label_105334;
        case 0x105338u: goto label_105338;
        case 0x10533cu: goto label_10533c;
        case 0x105340u: goto label_105340;
        case 0x105344u: goto label_105344;
        case 0x105348u: goto label_105348;
        case 0x10534cu: goto label_10534c;
        case 0x105350u: goto label_105350;
        case 0x105354u: goto label_105354;
        default: break;
    }

    ctx->pc = 0x105138u;

label_105138:
    // 0x105138: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_10513c:
    // 0x10513c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105140:
    // 0x105140: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x105140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_105144:
    // 0x105144: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x105144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_105148:
    // 0x105148: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x105148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_10514c:
    // 0x10514c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_105150:
    // 0x105150: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x105150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_105154:
    // 0x105154: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x105154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105158:
    // 0x105158: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x105158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_10515c:
    // 0x10515c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_105160:
    // 0x105160: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x105160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_105164:
    // 0x105164: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_105168:
    // 0x105168: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x105168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_10516c:
    // 0x10516c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_105170:
    // 0x105170: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x105170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_105174:
    // 0x105174: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_105178:
    // 0x105178: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_10517c:
    // 0x10517c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_105180:
    if (ctx->pc == 0x105180u) {
        ctx->pc = 0x105180u;
            // 0x105180: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->pc = 0x105184u;
        goto label_105184;
    }
    ctx->pc = 0x10517Cu;
    {
        const bool branch_taken_0x10517c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10517Cu;
            // 0x105180: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10517c) {
            ctx->pc = 0x10521Cu;
            goto label_10521c;
        }
    }
    ctx->pc = 0x105184u;
label_105184:
    // 0x105184: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x105184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_105188:
    // 0x105188: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10518c:
    // 0x10518c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105190:
    // 0x105190: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_105194:
    if (ctx->pc == 0x105194u) {
        ctx->pc = 0x105194u;
            // 0x105194: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105198u;
        goto label_105198;
    }
    ctx->pc = 0x105190u;
    {
        const bool branch_taken_0x105190 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x105194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105190u;
            // 0x105194: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105190) {
            ctx->pc = 0x10522Cu;
            goto label_10522c;
        }
    }
    ctx->pc = 0x105198u;
label_105198:
    // 0x105198: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x105198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_10519c:
    // 0x10519c: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x10519cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_1051a0:
    // 0x1051a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1051a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1051a4:
    // 0x1051a4: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x1051a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_1051a8:
    // 0x1051a8: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x1051a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_1051ac:
    // 0x1051ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1051acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1051b0:
    // 0x1051b0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x1051b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1051b4:
    // 0x1051b4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x1051b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1051b8:
    // 0x1051b8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1051bc:
    // 0x1051bc: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x1051bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_1051c0:
    // 0x1051c0: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x1051c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_1051c4:
    // 0x1051c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1051c8:
    // 0x1051c8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1051cc:
    // 0x1051cc: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x1051ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_1051d0:
    // 0x1051d0: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x1051d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_1051d4:
    // 0x1051d4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x1051d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1051d8:
    // 0x1051d8: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x1051d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_1051dc:
    // 0x1051dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1051dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1051e0:
    // 0x1051e0: 0x60f809  jalr        $v1
label_1051e4:
    if (ctx->pc == 0x1051E4u) {
        ctx->pc = 0x1051E4u;
            // 0x1051e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x1051E8u;
        goto label_1051e8;
    }
    ctx->pc = 0x1051E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1051E8u);
        ctx->pc = 0x1051E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1051E0u;
            // 0x1051e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1051E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1051E8u; }
            if (ctx->pc != 0x1051E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1051E8u;
label_1051e8:
    // 0x1051e8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x1051e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1051ec:
    // 0x1051ec: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x1051ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_1051f0:
    // 0x1051f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1051f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1051f4:
    // 0x1051f4: 0x40f809  jalr        $v0
label_1051f8:
    if (ctx->pc == 0x1051F8u) {
        ctx->pc = 0x1051F8u;
            // 0x1051f8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->pc = 0x1051FCu;
        goto label_1051fc;
    }
    ctx->pc = 0x1051F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1051FCu);
        ctx->pc = 0x1051F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1051F4u;
            // 0x1051f8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1051FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1051FCu; }
            if (ctx->pc != 0x1051FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1051FCu;
label_1051fc:
    // 0x1051fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1051fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_105200:
    // 0x105200: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_105204:
    // 0x105204: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x105204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105208:
    // 0x105208: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x105208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10520c:
    // 0x10520c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_105210:
    if (ctx->pc == 0x105210u) {
        ctx->pc = 0x105210u;
            // 0x105210: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x105214u;
        goto label_105214;
    }
    ctx->pc = 0x10520Cu;
    {
        const bool branch_taken_0x10520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10520Cu;
            // 0x105210: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10520c) {
            ctx->pc = 0x1051B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1051b0;
        }
    }
    ctx->pc = 0x105214u;
label_105214:
    // 0x105214: 0x10000009  b           . + 4 + (0x9 << 2)
label_105218:
    if (ctx->pc == 0x105218u) {
        ctx->pc = 0x105218u;
            // 0x105218: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x10521Cu;
        goto label_10521c;
    }
    ctx->pc = 0x105214u;
    {
        const bool branch_taken_0x105214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105214u;
            // 0x105218: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105214) {
            ctx->pc = 0x10523Cu;
            goto label_10523c;
        }
    }
    ctx->pc = 0x10521Cu;
label_10521c:
    // 0x10521c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_105220:
    // 0x105220: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_105224:
    // 0x105224: 0x10000004  b           . + 4 + (0x4 << 2)
label_105228:
    if (ctx->pc == 0x105228u) {
        ctx->pc = 0x105228u;
            // 0x105228: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x10522Cu;
        goto label_10522c;
    }
    ctx->pc = 0x105224u;
    {
        const bool branch_taken_0x105224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105224u;
            // 0x105228: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105224) {
            ctx->pc = 0x105238u;
            goto label_105238;
        }
    }
    ctx->pc = 0x10522Cu;
label_10522c:
    // 0x10522c: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x10522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_105230:
    // 0x105230: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x105230u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_105234:
    // 0x105234: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x105234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_105238:
    // 0x105238: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10523c:
    // 0x10523c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105240:
    // 0x105240: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x105240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_105244:
    // 0x105244: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x105244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_105248:
    // 0x105248: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x105248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10524c:
    // 0x10524c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_105250:
    // 0x105250: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_105254:
    if (ctx->pc == 0x105254u) {
        ctx->pc = 0x105254u;
            // 0x105254: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x105258u;
        goto label_105258;
    }
    ctx->pc = 0x105250u;
    {
        const bool branch_taken_0x105250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105250u;
            // 0x105254: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105250) {
            ctx->pc = 0x105270u;
            goto label_105270;
        }
    }
    ctx->pc = 0x105258u;
label_105258:
    // 0x105258: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_10525c:
    // 0x10525c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_105260:
    if (ctx->pc == 0x105260u) {
        ctx->pc = 0x105260u;
            // 0x105260: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x105264u;
        goto label_105264;
    }
    ctx->pc = 0x10525Cu;
    {
        const bool branch_taken_0x10525c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10525Cu;
            // 0x105260: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10525c) {
            ctx->pc = 0x105270u;
            goto label_105270;
        }
    }
    ctx->pc = 0x105264u;
label_105264:
    // 0x105264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x105264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_105268:
    // 0x105268: 0xc042e16  jal         func_10B858
label_10526c:
    if (ctx->pc == 0x10526Cu) {
        ctx->pc = 0x10526Cu;
            // 0x10526c: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
        ctx->pc = 0x105270u;
        goto label_105270;
    }
    ctx->pc = 0x105268u;
    SET_GPR_U32(ctx, 31, 0x105270u);
    ctx->pc = 0x10526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105268u;
            // 0x10526c: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105270u; }
        if (ctx->pc != 0x105270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105270u; }
        if (ctx->pc != 0x105270u) { return; }
    }
    ctx->pc = 0x105270u;
label_105270:
    // 0x105270: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_105274:
    // 0x105274: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105278:
    // 0x105278: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x105278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_10527c:
    // 0x10527c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_105280:
    // 0x105280: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x105280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_105284:
    // 0x105284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_105288:
    // 0x105288: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_10528c:
    if (ctx->pc == 0x10528Cu) {
        ctx->pc = 0x10528Cu;
            // 0x10528c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->pc = 0x105290u;
        goto label_105290;
    }
    ctx->pc = 0x105288u;
    {
        const bool branch_taken_0x105288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105288u;
            // 0x10528c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105288) {
            ctx->pc = 0x1052D0u;
            goto label_1052d0;
        }
    }
    ctx->pc = 0x105290u;
label_105290:
    // 0x105290: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x105290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_105294:
    // 0x105294: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x105294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_105298:
    // 0x105298: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x105298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10529c:
    // 0x10529c: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x10529cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_1052a0:
    // 0x1052a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1052a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1052a4:
    // 0x1052a4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1052a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1052a8:
    // 0x1052a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1052a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1052ac:
    // 0x1052ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1052acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1052b0:
    // 0x1052b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1052b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1052b4:
    // 0x1052b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1052b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1052b8:
    // 0x1052b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1052b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1052bc:
    // 0x1052bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1052bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1052c0:
    // 0x1052c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1052c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1052c4:
    // 0x1052c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1052c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1052c8:
    // 0x1052c8: 0x8041b12  j           func_106C48
label_1052cc:
    if (ctx->pc == 0x1052CCu) {
        ctx->pc = 0x1052CCu;
            // 0x1052cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1052D0u;
        goto label_1052d0;
    }
    ctx->pc = 0x1052C8u;
    ctx->pc = 0x1052CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1052C8u;
            // 0x1052cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106C48u;
    {
        auto targetFn = runtime->lookupFunction(0x106C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1052D0u;
label_1052d0:
    // 0x1052d0: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x1052d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_1052d4:
    // 0x1052d4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1052d8:
    if (ctx->pc == 0x1052D8u) {
        ctx->pc = 0x1052D8u;
            // 0x1052d8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->pc = 0x1052DCu;
        goto label_1052dc;
    }
    ctx->pc = 0x1052D4u;
    {
        const bool branch_taken_0x1052d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1052D4u;
            // 0x1052d8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052d4) {
            ctx->pc = 0x105314u;
            goto label_105314;
        }
    }
    ctx->pc = 0x1052DCu;
label_1052dc:
    // 0x1052dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1052dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1052e0:
    // 0x1052e0: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x1052e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_1052e4:
    // 0x1052e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1052e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1052e8:
    // 0x1052e8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1052e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1052ec:
    // 0x1052ec: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1052ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1052f0:
    // 0x1052f0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1052f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1052f4:
    // 0x1052f4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1052f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1052f8:
    // 0x1052f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1052f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1052fc:
    // 0x1052fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1052fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_105300:
    // 0x105300: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_105304:
    // 0x105304: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_105308:
    // 0x105308: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10530c:
    // 0x10530c: 0x8041b12  j           func_106C48
label_105310:
    if (ctx->pc == 0x105310u) {
        ctx->pc = 0x105310u;
            // 0x105310: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x105314u;
        goto label_105314;
    }
    ctx->pc = 0x10530Cu;
    ctx->pc = 0x105310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10530Cu;
            // 0x105310: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106C48u;
    {
        auto targetFn = runtime->lookupFunction(0x106C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x105314u;
label_105314:
    // 0x105314: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x105314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_105318:
    // 0x105318: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_10531c:
    // 0x10531c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105320:
    // 0x105320: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x105320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_105324:
    // 0x105324: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_105328:
    // 0x105328: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105328u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10532c:
    // 0x10532c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10532cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_105330:
    // 0x105330: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105330u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_105334:
    // 0x105334: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_105338:
    // 0x105338: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10533c:
    // 0x10533c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10533cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_105340:
    // 0x105340: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_105344:
    // 0x105344: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_105348:
    // 0x105348: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10534c:
    // 0x10534c: 0x8041ad6  j           func_106B58
label_105350:
    if (ctx->pc == 0x105350u) {
        ctx->pc = 0x105350u;
            // 0x105350: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x105354u;
        goto label_105354;
    }
    ctx->pc = 0x10534Cu;
    ctx->pc = 0x105350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10534Cu;
            // 0x105350: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B58u;
    {
        auto targetFn = runtime->lookupFunction(0x106B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x105354u;
label_105354:
    // 0x105354: 0x0  nop
    ctx->pc = 0x105354u;
    // NOP
}
