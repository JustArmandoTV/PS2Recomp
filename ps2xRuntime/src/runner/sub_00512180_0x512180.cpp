#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00512180
// Address: 0x512180 - 0x5123b0
void sub_00512180_0x512180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512180_0x512180");
#endif

    switch (ctx->pc) {
        case 0x512180u: goto label_512180;
        case 0x512184u: goto label_512184;
        case 0x512188u: goto label_512188;
        case 0x51218cu: goto label_51218c;
        case 0x512190u: goto label_512190;
        case 0x512194u: goto label_512194;
        case 0x512198u: goto label_512198;
        case 0x51219cu: goto label_51219c;
        case 0x5121a0u: goto label_5121a0;
        case 0x5121a4u: goto label_5121a4;
        case 0x5121a8u: goto label_5121a8;
        case 0x5121acu: goto label_5121ac;
        case 0x5121b0u: goto label_5121b0;
        case 0x5121b4u: goto label_5121b4;
        case 0x5121b8u: goto label_5121b8;
        case 0x5121bcu: goto label_5121bc;
        case 0x5121c0u: goto label_5121c0;
        case 0x5121c4u: goto label_5121c4;
        case 0x5121c8u: goto label_5121c8;
        case 0x5121ccu: goto label_5121cc;
        case 0x5121d0u: goto label_5121d0;
        case 0x5121d4u: goto label_5121d4;
        case 0x5121d8u: goto label_5121d8;
        case 0x5121dcu: goto label_5121dc;
        case 0x5121e0u: goto label_5121e0;
        case 0x5121e4u: goto label_5121e4;
        case 0x5121e8u: goto label_5121e8;
        case 0x5121ecu: goto label_5121ec;
        case 0x5121f0u: goto label_5121f0;
        case 0x5121f4u: goto label_5121f4;
        case 0x5121f8u: goto label_5121f8;
        case 0x5121fcu: goto label_5121fc;
        case 0x512200u: goto label_512200;
        case 0x512204u: goto label_512204;
        case 0x512208u: goto label_512208;
        case 0x51220cu: goto label_51220c;
        case 0x512210u: goto label_512210;
        case 0x512214u: goto label_512214;
        case 0x512218u: goto label_512218;
        case 0x51221cu: goto label_51221c;
        case 0x512220u: goto label_512220;
        case 0x512224u: goto label_512224;
        case 0x512228u: goto label_512228;
        case 0x51222cu: goto label_51222c;
        case 0x512230u: goto label_512230;
        case 0x512234u: goto label_512234;
        case 0x512238u: goto label_512238;
        case 0x51223cu: goto label_51223c;
        case 0x512240u: goto label_512240;
        case 0x512244u: goto label_512244;
        case 0x512248u: goto label_512248;
        case 0x51224cu: goto label_51224c;
        case 0x512250u: goto label_512250;
        case 0x512254u: goto label_512254;
        case 0x512258u: goto label_512258;
        case 0x51225cu: goto label_51225c;
        case 0x512260u: goto label_512260;
        case 0x512264u: goto label_512264;
        case 0x512268u: goto label_512268;
        case 0x51226cu: goto label_51226c;
        case 0x512270u: goto label_512270;
        case 0x512274u: goto label_512274;
        case 0x512278u: goto label_512278;
        case 0x51227cu: goto label_51227c;
        case 0x512280u: goto label_512280;
        case 0x512284u: goto label_512284;
        case 0x512288u: goto label_512288;
        case 0x51228cu: goto label_51228c;
        case 0x512290u: goto label_512290;
        case 0x512294u: goto label_512294;
        case 0x512298u: goto label_512298;
        case 0x51229cu: goto label_51229c;
        case 0x5122a0u: goto label_5122a0;
        case 0x5122a4u: goto label_5122a4;
        case 0x5122a8u: goto label_5122a8;
        case 0x5122acu: goto label_5122ac;
        case 0x5122b0u: goto label_5122b0;
        case 0x5122b4u: goto label_5122b4;
        case 0x5122b8u: goto label_5122b8;
        case 0x5122bcu: goto label_5122bc;
        case 0x5122c0u: goto label_5122c0;
        case 0x5122c4u: goto label_5122c4;
        case 0x5122c8u: goto label_5122c8;
        case 0x5122ccu: goto label_5122cc;
        case 0x5122d0u: goto label_5122d0;
        case 0x5122d4u: goto label_5122d4;
        case 0x5122d8u: goto label_5122d8;
        case 0x5122dcu: goto label_5122dc;
        case 0x5122e0u: goto label_5122e0;
        case 0x5122e4u: goto label_5122e4;
        case 0x5122e8u: goto label_5122e8;
        case 0x5122ecu: goto label_5122ec;
        case 0x5122f0u: goto label_5122f0;
        case 0x5122f4u: goto label_5122f4;
        case 0x5122f8u: goto label_5122f8;
        case 0x5122fcu: goto label_5122fc;
        case 0x512300u: goto label_512300;
        case 0x512304u: goto label_512304;
        case 0x512308u: goto label_512308;
        case 0x51230cu: goto label_51230c;
        case 0x512310u: goto label_512310;
        case 0x512314u: goto label_512314;
        case 0x512318u: goto label_512318;
        case 0x51231cu: goto label_51231c;
        case 0x512320u: goto label_512320;
        case 0x512324u: goto label_512324;
        case 0x512328u: goto label_512328;
        case 0x51232cu: goto label_51232c;
        case 0x512330u: goto label_512330;
        case 0x512334u: goto label_512334;
        case 0x512338u: goto label_512338;
        case 0x51233cu: goto label_51233c;
        case 0x512340u: goto label_512340;
        case 0x512344u: goto label_512344;
        case 0x512348u: goto label_512348;
        case 0x51234cu: goto label_51234c;
        case 0x512350u: goto label_512350;
        case 0x512354u: goto label_512354;
        case 0x512358u: goto label_512358;
        case 0x51235cu: goto label_51235c;
        case 0x512360u: goto label_512360;
        case 0x512364u: goto label_512364;
        case 0x512368u: goto label_512368;
        case 0x51236cu: goto label_51236c;
        case 0x512370u: goto label_512370;
        case 0x512374u: goto label_512374;
        case 0x512378u: goto label_512378;
        case 0x51237cu: goto label_51237c;
        case 0x512380u: goto label_512380;
        case 0x512384u: goto label_512384;
        case 0x512388u: goto label_512388;
        case 0x51238cu: goto label_51238c;
        case 0x512390u: goto label_512390;
        case 0x512394u: goto label_512394;
        case 0x512398u: goto label_512398;
        case 0x51239cu: goto label_51239c;
        case 0x5123a0u: goto label_5123a0;
        case 0x5123a4u: goto label_5123a4;
        case 0x5123a8u: goto label_5123a8;
        case 0x5123acu: goto label_5123ac;
        default: break;
    }

    ctx->pc = 0x512180u;

label_512180:
    // 0x512180: 0x3e00008  jr          $ra
label_512184:
    if (ctx->pc == 0x512184u) {
        ctx->pc = 0x512184u;
            // 0x512184: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->pc = 0x512188u;
        goto label_512188;
    }
    ctx->pc = 0x512180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512180u;
            // 0x512184: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512188u;
label_512188:
    // 0x512188: 0x0  nop
    ctx->pc = 0x512188u;
    // NOP
label_51218c:
    // 0x51218c: 0x0  nop
    ctx->pc = 0x51218cu;
    // NOP
label_512190:
    // 0x512190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x512190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_512194:
    // 0x512194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x512194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_512198:
    // 0x512198: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x512198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51219c:
    // 0x51219c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5121a0:
    // 0x5121a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5121a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5121a4:
    // 0x5121a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5121a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5121a8:
    // 0x5121a8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x5121a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5121ac:
    // 0x5121ac: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_5121b0:
    if (ctx->pc == 0x5121B0u) {
        ctx->pc = 0x5121B0u;
            // 0x5121b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5121B4u;
        goto label_5121b4;
    }
    ctx->pc = 0x5121ACu;
    {
        const bool branch_taken_0x5121ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5121B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5121ACu;
            // 0x5121b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5121ac) {
            ctx->pc = 0x5121E8u;
            goto label_5121e8;
        }
    }
    ctx->pc = 0x5121B4u;
label_5121b4:
    // 0x5121b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5121b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5121b8:
    // 0x5121b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5121b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5121bc:
    // 0x5121bc: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x5121bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_5121c0:
    // 0x5121c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x5121c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_5121c4:
    // 0x5121c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5121c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5121c8:
    // 0x5121c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5121c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5121cc:
    // 0x5121cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x5121ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_5121d0:
    // 0x5121d0: 0x320f809  jalr        $t9
label_5121d4:
    if (ctx->pc == 0x5121D4u) {
        ctx->pc = 0x5121D8u;
        goto label_5121d8;
    }
    ctx->pc = 0x5121D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5121D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5121D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5121D8u; }
            if (ctx->pc != 0x5121D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5121D8u;
label_5121d8:
    // 0x5121d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5121d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5121dc:
    // 0x5121dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x5121dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5121e0:
    // 0x5121e0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_5121e4:
    if (ctx->pc == 0x5121E4u) {
        ctx->pc = 0x5121E4u;
            // 0x5121e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x5121E8u;
        goto label_5121e8;
    }
    ctx->pc = 0x5121E0u;
    {
        const bool branch_taken_0x5121e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5121E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5121E0u;
            // 0x5121e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5121e0) {
            ctx->pc = 0x5121BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5121bc;
        }
    }
    ctx->pc = 0x5121E8u;
label_5121e8:
    // 0x5121e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x5121e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5121ec:
    // 0x5121ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5121ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5121f0:
    // 0x5121f0: 0xc1443f8  jal         func_510FE0
label_5121f4:
    if (ctx->pc == 0x5121F4u) {
        ctx->pc = 0x5121F4u;
            // 0x5121f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5121F8u;
        goto label_5121f8;
    }
    ctx->pc = 0x5121F0u;
    SET_GPR_U32(ctx, 31, 0x5121F8u);
    ctx->pc = 0x5121F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5121F0u;
            // 0x5121f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510FE0u;
    if (runtime->hasFunction(0x510FE0u)) {
        auto targetFn = runtime->lookupFunction(0x510FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5121F8u; }
        if (ctx->pc != 0x5121F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510FE0_0x510fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5121F8u; }
        if (ctx->pc != 0x5121F8u) { return; }
    }
    ctx->pc = 0x5121F8u;
label_5121f8:
    // 0x5121f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x5121f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_5121fc:
    // 0x5121fc: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x5121fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_512200:
    // 0x512200: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_512204:
    if (ctx->pc == 0x512204u) {
        ctx->pc = 0x512208u;
        goto label_512208;
    }
    ctx->pc = 0x512200u;
    {
        const bool branch_taken_0x512200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x512200) {
            ctx->pc = 0x5121ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5121ec;
        }
    }
    ctx->pc = 0x512208u;
label_512208:
    // 0x512208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x512208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51220c:
    // 0x51220c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51220cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_512210:
    // 0x512210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x512210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_512214:
    // 0x512214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512218:
    // 0x512218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51221c:
    // 0x51221c: 0x3e00008  jr          $ra
label_512220:
    if (ctx->pc == 0x512220u) {
        ctx->pc = 0x512220u;
            // 0x512220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x512224u;
        goto label_512224;
    }
    ctx->pc = 0x51221Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51221Cu;
            // 0x512220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512224u;
label_512224:
    // 0x512224: 0x0  nop
    ctx->pc = 0x512224u;
    // NOP
label_512228:
    // 0x512228: 0x0  nop
    ctx->pc = 0x512228u;
    // NOP
label_51222c:
    // 0x51222c: 0x0  nop
    ctx->pc = 0x51222cu;
    // NOP
label_512230:
    // 0x512230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x512230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_512234:
    // 0x512234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x512234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_512238:
    // 0x512238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51223c:
    // 0x51223c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512240:
    // 0x512240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x512240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512244:
    // 0x512244: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_512248:
    if (ctx->pc == 0x512248u) {
        ctx->pc = 0x512248u;
            // 0x512248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51224Cu;
        goto label_51224c;
    }
    ctx->pc = 0x512244u;
    {
        const bool branch_taken_0x512244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512244u;
            // 0x512248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512244) {
            ctx->pc = 0x512288u;
            goto label_512288;
        }
    }
    ctx->pc = 0x51224Cu;
label_51224c:
    // 0x51224c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_512250:
    // 0x512250: 0x24425360  addiu       $v0, $v0, 0x5360
    ctx->pc = 0x512250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21344));
label_512254:
    // 0x512254: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_512258:
    if (ctx->pc == 0x512258u) {
        ctx->pc = 0x512258u;
            // 0x512258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x51225Cu;
        goto label_51225c;
    }
    ctx->pc = 0x512254u;
    {
        const bool branch_taken_0x512254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512254u;
            // 0x512258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512254) {
            ctx->pc = 0x512270u;
            goto label_512270;
        }
    }
    ctx->pc = 0x51225Cu;
label_51225c:
    // 0x51225c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_512260:
    // 0x512260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x512260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512264:
    // 0x512264: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x512264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
label_512268:
    // 0x512268: 0xc075bf8  jal         func_1D6FE0
label_51226c:
    if (ctx->pc == 0x51226Cu) {
        ctx->pc = 0x51226Cu;
            // 0x51226c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x512270u;
        goto label_512270;
    }
    ctx->pc = 0x512268u;
    SET_GPR_U32(ctx, 31, 0x512270u);
    ctx->pc = 0x51226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512268u;
            // 0x51226c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512270u; }
        if (ctx->pc != 0x512270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512270u; }
        if (ctx->pc != 0x512270u) { return; }
    }
    ctx->pc = 0x512270u;
label_512270:
    // 0x512270: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x512270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_512274:
    // 0x512274: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x512274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_512278:
    // 0x512278: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51227c:
    if (ctx->pc == 0x51227Cu) {
        ctx->pc = 0x51227Cu;
            // 0x51227c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512280u;
        goto label_512280;
    }
    ctx->pc = 0x512278u;
    {
        const bool branch_taken_0x512278 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x512278) {
            ctx->pc = 0x51227Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512278u;
            // 0x51227c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51228Cu;
            goto label_51228c;
        }
    }
    ctx->pc = 0x512280u;
label_512280:
    // 0x512280: 0xc0400a8  jal         func_1002A0
label_512284:
    if (ctx->pc == 0x512284u) {
        ctx->pc = 0x512284u;
            // 0x512284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512288u;
        goto label_512288;
    }
    ctx->pc = 0x512280u;
    SET_GPR_U32(ctx, 31, 0x512288u);
    ctx->pc = 0x512284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512280u;
            // 0x512284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512288u; }
        if (ctx->pc != 0x512288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512288u; }
        if (ctx->pc != 0x512288u) { return; }
    }
    ctx->pc = 0x512288u;
label_512288:
    // 0x512288: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x512288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51228c:
    // 0x51228c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512290:
    // 0x512290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512294:
    // 0x512294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512298:
    // 0x512298: 0x3e00008  jr          $ra
label_51229c:
    if (ctx->pc == 0x51229Cu) {
        ctx->pc = 0x51229Cu;
            // 0x51229c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5122A0u;
        goto label_5122a0;
    }
    ctx->pc = 0x512298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512298u;
            // 0x51229c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5122A0u;
label_5122a0:
    // 0x5122a0: 0x3e00008  jr          $ra
label_5122a4:
    if (ctx->pc == 0x5122A4u) {
        ctx->pc = 0x5122A4u;
            // 0x5122a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5122A8u;
        goto label_5122a8;
    }
    ctx->pc = 0x5122A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5122A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5122A0u;
            // 0x5122a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5122A8u;
label_5122a8:
    // 0x5122a8: 0x0  nop
    ctx->pc = 0x5122a8u;
    // NOP
label_5122ac:
    // 0x5122ac: 0x0  nop
    ctx->pc = 0x5122acu;
    // NOP
label_5122b0:
    // 0x5122b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5122b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5122b4:
    // 0x5122b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5122b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5122b8:
    // 0x5122b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5122b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5122bc:
    // 0x5122bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5122bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5122c0:
    // 0x5122c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5122c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5122c4:
    // 0x5122c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_5122c8:
    if (ctx->pc == 0x5122C8u) {
        ctx->pc = 0x5122C8u;
            // 0x5122c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5122CCu;
        goto label_5122cc;
    }
    ctx->pc = 0x5122C4u;
    {
        const bool branch_taken_0x5122c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5122C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5122C4u;
            // 0x5122c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5122c4) {
            ctx->pc = 0x512308u;
            goto label_512308;
        }
    }
    ctx->pc = 0x5122CCu;
label_5122cc:
    // 0x5122cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5122ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5122d0:
    // 0x5122d0: 0x244253a0  addiu       $v0, $v0, 0x53A0
    ctx->pc = 0x5122d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21408));
label_5122d4:
    // 0x5122d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_5122d8:
    if (ctx->pc == 0x5122D8u) {
        ctx->pc = 0x5122D8u;
            // 0x5122d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5122DCu;
        goto label_5122dc;
    }
    ctx->pc = 0x5122D4u;
    {
        const bool branch_taken_0x5122d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5122D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5122D4u;
            // 0x5122d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5122d4) {
            ctx->pc = 0x5122F0u;
            goto label_5122f0;
        }
    }
    ctx->pc = 0x5122DCu;
label_5122dc:
    // 0x5122dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5122e0:
    // 0x5122e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5122e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5122e4:
    // 0x5122e4: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x5122e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
label_5122e8:
    // 0x5122e8: 0xc075bf8  jal         func_1D6FE0
label_5122ec:
    if (ctx->pc == 0x5122ECu) {
        ctx->pc = 0x5122ECu;
            // 0x5122ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5122F0u;
        goto label_5122f0;
    }
    ctx->pc = 0x5122E8u;
    SET_GPR_U32(ctx, 31, 0x5122F0u);
    ctx->pc = 0x5122ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5122E8u;
            // 0x5122ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5122F0u; }
        if (ctx->pc != 0x5122F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5122F0u; }
        if (ctx->pc != 0x5122F0u) { return; }
    }
    ctx->pc = 0x5122F0u;
label_5122f0:
    // 0x5122f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5122f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5122f4:
    // 0x5122f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5122f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5122f8:
    // 0x5122f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5122fc:
    if (ctx->pc == 0x5122FCu) {
        ctx->pc = 0x5122FCu;
            // 0x5122fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512300u;
        goto label_512300;
    }
    ctx->pc = 0x5122F8u;
    {
        const bool branch_taken_0x5122f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5122f8) {
            ctx->pc = 0x5122FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5122F8u;
            // 0x5122fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51230Cu;
            goto label_51230c;
        }
    }
    ctx->pc = 0x512300u;
label_512300:
    // 0x512300: 0xc0400a8  jal         func_1002A0
label_512304:
    if (ctx->pc == 0x512304u) {
        ctx->pc = 0x512304u;
            // 0x512304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512308u;
        goto label_512308;
    }
    ctx->pc = 0x512300u;
    SET_GPR_U32(ctx, 31, 0x512308u);
    ctx->pc = 0x512304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512300u;
            // 0x512304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512308u; }
        if (ctx->pc != 0x512308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512308u; }
        if (ctx->pc != 0x512308u) { return; }
    }
    ctx->pc = 0x512308u;
label_512308:
    // 0x512308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x512308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51230c:
    // 0x51230c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512310:
    // 0x512310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512314:
    // 0x512314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512318:
    // 0x512318: 0x3e00008  jr          $ra
label_51231c:
    if (ctx->pc == 0x51231Cu) {
        ctx->pc = 0x51231Cu;
            // 0x51231c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x512320u;
        goto label_512320;
    }
    ctx->pc = 0x512318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512318u;
            // 0x51231c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512320u;
label_512320:
    // 0x512320: 0x3e00008  jr          $ra
label_512324:
    if (ctx->pc == 0x512324u) {
        ctx->pc = 0x512324u;
            // 0x512324: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x512328u;
        goto label_512328;
    }
    ctx->pc = 0x512320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512320u;
            // 0x512324: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512328u;
label_512328:
    // 0x512328: 0x0  nop
    ctx->pc = 0x512328u;
    // NOP
label_51232c:
    // 0x51232c: 0x0  nop
    ctx->pc = 0x51232cu;
    // NOP
label_512330:
    // 0x512330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x512330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_512334:
    // 0x512334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x512334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_512338:
    // 0x512338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51233c:
    // 0x51233c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512340:
    // 0x512340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x512340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512344:
    // 0x512344: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_512348:
    if (ctx->pc == 0x512348u) {
        ctx->pc = 0x512348u;
            // 0x512348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51234Cu;
        goto label_51234c;
    }
    ctx->pc = 0x512344u;
    {
        const bool branch_taken_0x512344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512344u;
            // 0x512348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512344) {
            ctx->pc = 0x512388u;
            goto label_512388;
        }
    }
    ctx->pc = 0x51234Cu;
label_51234c:
    // 0x51234c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_512350:
    // 0x512350: 0x244253e0  addiu       $v0, $v0, 0x53E0
    ctx->pc = 0x512350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21472));
label_512354:
    // 0x512354: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_512358:
    if (ctx->pc == 0x512358u) {
        ctx->pc = 0x512358u;
            // 0x512358: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x51235Cu;
        goto label_51235c;
    }
    ctx->pc = 0x512354u;
    {
        const bool branch_taken_0x512354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512354u;
            // 0x512358: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512354) {
            ctx->pc = 0x512370u;
            goto label_512370;
        }
    }
    ctx->pc = 0x51235Cu;
label_51235c:
    // 0x51235c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_512360:
    // 0x512360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x512360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512364:
    // 0x512364: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x512364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
label_512368:
    // 0x512368: 0xc075bf8  jal         func_1D6FE0
label_51236c:
    if (ctx->pc == 0x51236Cu) {
        ctx->pc = 0x51236Cu;
            // 0x51236c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x512370u;
        goto label_512370;
    }
    ctx->pc = 0x512368u;
    SET_GPR_U32(ctx, 31, 0x512370u);
    ctx->pc = 0x51236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512368u;
            // 0x51236c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512370u; }
        if (ctx->pc != 0x512370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512370u; }
        if (ctx->pc != 0x512370u) { return; }
    }
    ctx->pc = 0x512370u;
label_512370:
    // 0x512370: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x512370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_512374:
    // 0x512374: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x512374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_512378:
    // 0x512378: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51237c:
    if (ctx->pc == 0x51237Cu) {
        ctx->pc = 0x51237Cu;
            // 0x51237c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512380u;
        goto label_512380;
    }
    ctx->pc = 0x512378u;
    {
        const bool branch_taken_0x512378 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x512378) {
            ctx->pc = 0x51237Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512378u;
            // 0x51237c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51238Cu;
            goto label_51238c;
        }
    }
    ctx->pc = 0x512380u;
label_512380:
    // 0x512380: 0xc0400a8  jal         func_1002A0
label_512384:
    if (ctx->pc == 0x512384u) {
        ctx->pc = 0x512384u;
            // 0x512384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512388u;
        goto label_512388;
    }
    ctx->pc = 0x512380u;
    SET_GPR_U32(ctx, 31, 0x512388u);
    ctx->pc = 0x512384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512380u;
            // 0x512384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512388u; }
        if (ctx->pc != 0x512388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512388u; }
        if (ctx->pc != 0x512388u) { return; }
    }
    ctx->pc = 0x512388u;
label_512388:
    // 0x512388: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x512388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51238c:
    // 0x51238c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512390:
    // 0x512390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512394:
    // 0x512394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512398:
    // 0x512398: 0x3e00008  jr          $ra
label_51239c:
    if (ctx->pc == 0x51239Cu) {
        ctx->pc = 0x51239Cu;
            // 0x51239c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5123A0u;
        goto label_5123a0;
    }
    ctx->pc = 0x512398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512398u;
            // 0x51239c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5123A0u;
label_5123a0:
    // 0x5123a0: 0x3e00008  jr          $ra
label_5123a4:
    if (ctx->pc == 0x5123A4u) {
        ctx->pc = 0x5123A4u;
            // 0x5123a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5123A8u;
        goto label_5123a8;
    }
    ctx->pc = 0x5123A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5123A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5123A0u;
            // 0x5123a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5123A8u;
label_5123a8:
    // 0x5123a8: 0x0  nop
    ctx->pc = 0x5123a8u;
    // NOP
label_5123ac:
    // 0x5123ac: 0x0  nop
    ctx->pc = 0x5123acu;
    // NOP
}
