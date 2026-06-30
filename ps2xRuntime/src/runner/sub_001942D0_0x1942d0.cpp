#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001942D0
// Address: 0x1942d0 - 0x1944e0
void sub_001942D0_0x1942d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001942D0_0x1942d0");
#endif

    switch (ctx->pc) {
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        case 0x1943c0u: goto label_1943c0;
        case 0x1943c4u: goto label_1943c4;
        case 0x1943c8u: goto label_1943c8;
        case 0x1943ccu: goto label_1943cc;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d4u: goto label_1943d4;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943dcu: goto label_1943dc;
        case 0x1943e0u: goto label_1943e0;
        case 0x1943e4u: goto label_1943e4;
        case 0x1943e8u: goto label_1943e8;
        case 0x1943ecu: goto label_1943ec;
        case 0x1943f0u: goto label_1943f0;
        case 0x1943f4u: goto label_1943f4;
        case 0x1943f8u: goto label_1943f8;
        case 0x1943fcu: goto label_1943fc;
        case 0x194400u: goto label_194400;
        case 0x194404u: goto label_194404;
        case 0x194408u: goto label_194408;
        case 0x19440cu: goto label_19440c;
        case 0x194410u: goto label_194410;
        case 0x194414u: goto label_194414;
        case 0x194418u: goto label_194418;
        case 0x19441cu: goto label_19441c;
        case 0x194420u: goto label_194420;
        case 0x194424u: goto label_194424;
        case 0x194428u: goto label_194428;
        case 0x19442cu: goto label_19442c;
        case 0x194430u: goto label_194430;
        case 0x194434u: goto label_194434;
        case 0x194438u: goto label_194438;
        case 0x19443cu: goto label_19443c;
        case 0x194440u: goto label_194440;
        case 0x194444u: goto label_194444;
        case 0x194448u: goto label_194448;
        case 0x19444cu: goto label_19444c;
        case 0x194450u: goto label_194450;
        case 0x194454u: goto label_194454;
        case 0x194458u: goto label_194458;
        case 0x19445cu: goto label_19445c;
        case 0x194460u: goto label_194460;
        case 0x194464u: goto label_194464;
        case 0x194468u: goto label_194468;
        case 0x19446cu: goto label_19446c;
        case 0x194470u: goto label_194470;
        case 0x194474u: goto label_194474;
        case 0x194478u: goto label_194478;
        case 0x19447cu: goto label_19447c;
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        default: break;
    }

    ctx->pc = 0x1942d0u;

label_1942d0:
    // 0x1942d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1942d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1942d4:
    // 0x1942d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1942d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1942d8:
    // 0x1942d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1942d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1942dc:
    // 0x1942dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1942dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1942e0:
    // 0x1942e0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1942e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1942e4:
    // 0x1942e4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1942e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1942e8:
    // 0x1942e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1942e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1942ec:
    // 0x1942ec: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1942ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1942f0:
    // 0x1942f0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1942f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1942f4:
    // 0x1942f4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1942f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1942f8:
    // 0x1942f8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1942f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1942fc:
    // 0x1942fc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1942fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_194300:
    // 0x194300: 0xc06599a  jal         func_196668
label_194304:
    if (ctx->pc == 0x194304u) {
        ctx->pc = 0x194304u;
            // 0x194304: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194308u;
        goto label_194308;
    }
    ctx->pc = 0x194300u;
    SET_GPR_U32(ctx, 31, 0x194308u);
    ctx->pc = 0x194304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194300u;
            // 0x194304: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194308u; }
        if (ctx->pc != 0x194308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194308u; }
        if (ctx->pc != 0x194308u) { return; }
    }
    ctx->pc = 0x194308u;
label_194308:
    // 0x194308: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19430c:
    if (ctx->pc == 0x19430Cu) {
        ctx->pc = 0x19430Cu;
            // 0x19430c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194310u;
        goto label_194310;
    }
    ctx->pc = 0x194308u;
    {
        const bool branch_taken_0x194308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194308u;
            // 0x19430c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194308) {
            ctx->pc = 0x194328u;
            goto label_194328;
        }
    }
    ctx->pc = 0x194310u;
label_194310:
    // 0x194310: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x194310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_194314:
    // 0x194314: 0xc064f2a  jal         func_193CA8
label_194318:
    if (ctx->pc == 0x194318u) {
        ctx->pc = 0x194318u;
            // 0x194318: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
        ctx->pc = 0x19431Cu;
        goto label_19431c;
    }
    ctx->pc = 0x194314u;
    SET_GPR_U32(ctx, 31, 0x19431Cu);
    ctx->pc = 0x194318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194314u;
            // 0x194318: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19431Cu; }
        if (ctx->pc != 0x19431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193CA8_0x193ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19431Cu; }
        if (ctx->pc != 0x19431Cu) { return; }
    }
    ctx->pc = 0x19431Cu;
label_19431c:
    // 0x19431c: 0x10000065  b           . + 4 + (0x65 << 2)
label_194320:
    if (ctx->pc == 0x194320u) {
        ctx->pc = 0x194320u;
            // 0x194320: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x194324u;
        goto label_194324;
    }
    ctx->pc = 0x19431Cu;
    {
        const bool branch_taken_0x19431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19431Cu;
            // 0x194320: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19431c) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x194324u;
label_194324:
    // 0x194324: 0x0  nop
    ctx->pc = 0x194324u;
    // NOP
label_194328:
    // 0x194328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19432c:
    // 0x19432c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x19432cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_194330:
    // 0x194330: 0xae400414  sw          $zero, 0x414($s2)
    ctx->pc = 0x194330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1044), GPR_U32(ctx, 0));
label_194334:
    // 0x194334: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x194334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194338:
    // 0x194338: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x194338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_19433c:
    // 0x19433c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194340:
    // 0x194340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194344:
    // 0x194344: 0x100f809  jalr        $t0
label_194348:
    if (ctx->pc == 0x194348u) {
        ctx->pc = 0x194348u;
            // 0x194348: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x19434Cu;
        goto label_19434c;
    }
    ctx->pc = 0x194344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x19434Cu);
        ctx->pc = 0x194348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194344u;
            // 0x194348: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19434Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19434Cu; }
            if (ctx->pc != 0x19434Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19434Cu;
label_19434c:
    // 0x19434c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194350:
    // 0x194350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194354:
    // 0x194354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194358:
    // 0x194358: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_19435c:
    // 0x19435c: 0x40f809  jalr        $v0
label_194360:
    if (ctx->pc == 0x194360u) {
        ctx->pc = 0x194360u;
            // 0x194360: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194364u;
        goto label_194364;
    }
    ctx->pc = 0x19435Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194364u);
        ctx->pc = 0x194360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19435Cu;
            // 0x194360: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194364u; }
            if (ctx->pc != 0x194364u) { return; }
        }
        }
    }
    ctx->pc = 0x194364u;
label_194364:
    // 0x194364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194368:
    // 0x194368: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19436c:
    // 0x19436c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19436cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_194370:
    // 0x194370: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_194374:
    // 0x194374: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x194374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_194378:
    // 0x194378: 0xc065184  jal         func_194610
label_19437c:
    if (ctx->pc == 0x19437Cu) {
        ctx->pc = 0x19437Cu;
            // 0x19437c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x194380u;
        goto label_194380;
    }
    ctx->pc = 0x194378u;
    SET_GPR_U32(ctx, 31, 0x194380u);
    ctx->pc = 0x19437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194378u;
            // 0x19437c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194610u;
    if (runtime->hasFunction(0x194610u)) {
        auto targetFn = runtime->lookupFunction(0x194610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194380u; }
        if (ctx->pc != 0x194380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194610_0x194610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194380u; }
        if (ctx->pc != 0x194380u) { return; }
    }
    ctx->pc = 0x194380u;
label_194380:
    // 0x194380: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x194380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194384:
    // 0x194384: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_194388:
    if (ctx->pc == 0x194388u) {
        ctx->pc = 0x194388u;
            // 0x194388: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19438Cu;
        goto label_19438c;
    }
    ctx->pc = 0x194384u;
    {
        const bool branch_taken_0x194384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x194388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194384u;
            // 0x194388: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194384) {
            ctx->pc = 0x1943B0u;
            goto label_1943b0;
        }
    }
    ctx->pc = 0x19438Cu;
label_19438c:
    // 0x19438c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194390:
    // 0x194390: 0xc0659d8  jal         func_196760
label_194394:
    if (ctx->pc == 0x194394u) {
        ctx->pc = 0x194394u;
            // 0x194394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194398u;
        goto label_194398;
    }
    ctx->pc = 0x194390u;
    SET_GPR_U32(ctx, 31, 0x194398u);
    ctx->pc = 0x194394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194390u;
            // 0x194394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196760u;
    if (runtime->hasFunction(0x196760u)) {
        auto targetFn = runtime->lookupFunction(0x196760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194398u; }
        if (ctx->pc != 0x194398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196760_0x196760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194398u; }
        if (ctx->pc != 0x194398u) { return; }
    }
    ctx->pc = 0x194398u;
label_194398:
    // 0x194398: 0x10000046  b           . + 4 + (0x46 << 2)
label_19439c:
    if (ctx->pc == 0x19439Cu) {
        ctx->pc = 0x19439Cu;
            // 0x19439c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1943A0u;
        goto label_1943a0;
    }
    ctx->pc = 0x194398u;
    {
        const bool branch_taken_0x194398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194398u;
            // 0x19439c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194398) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x1943A0u;
label_1943a0:
    // 0x1943a0: 0xc064f2a  jal         func_193CA8
label_1943a4:
    if (ctx->pc == 0x1943A4u) {
        ctx->pc = 0x1943A4u;
            // 0x1943a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1943A8u;
        goto label_1943a8;
    }
    ctx->pc = 0x1943A0u;
    SET_GPR_U32(ctx, 31, 0x1943A8u);
    ctx->pc = 0x1943A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1943A0u;
            // 0x1943a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943A8u; }
        if (ctx->pc != 0x1943A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193CA8_0x193ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943A8u; }
        if (ctx->pc != 0x1943A8u) { return; }
    }
    ctx->pc = 0x1943A8u;
label_1943a8:
    // 0x1943a8: 0x10000042  b           . + 4 + (0x42 << 2)
label_1943ac:
    if (ctx->pc == 0x1943ACu) {
        ctx->pc = 0x1943ACu;
            // 0x1943ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1943B0u;
        goto label_1943b0;
    }
    ctx->pc = 0x1943A8u;
    {
        const bool branch_taken_0x1943a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943A8u;
            // 0x1943ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943a8) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x1943B0u;
label_1943b0:
    // 0x1943b0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1943b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1943b4:
    // 0x1943b4: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1943b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1943b8:
    // 0x1943b8: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1943b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1943bc:
    // 0x1943bc: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x1943bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1943c0:
    // 0x1943c0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1943c4:
    if (ctx->pc == 0x1943C4u) {
        ctx->pc = 0x1943C4u;
            // 0x1943c4: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1943C8u;
        goto label_1943c8;
    }
    ctx->pc = 0x1943C0u;
    {
        const bool branch_taken_0x1943c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943C0u;
            // 0x1943c4: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943c0) {
            ctx->pc = 0x194464u;
            goto label_194464;
        }
    }
    ctx->pc = 0x1943C8u;
label_1943c8:
    // 0x1943c8: 0x1074001d  beq         $v1, $s4, . + 4 + (0x1D << 2)
label_1943cc:
    if (ctx->pc == 0x1943CCu) {
        ctx->pc = 0x1943CCu;
            // 0x1943cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1943D0u;
        goto label_1943d0;
    }
    ctx->pc = 0x1943C8u;
    {
        const bool branch_taken_0x1943c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1943CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943C8u;
            // 0x1943cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943c8) {
            ctx->pc = 0x194440u;
            goto label_194440;
        }
    }
    ctx->pc = 0x1943D0u;
label_1943d0:
    // 0x1943d0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x1943d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_1943d4:
    // 0x1943d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1943d8:
    if (ctx->pc == 0x1943D8u) {
        ctx->pc = 0x1943DCu;
        goto label_1943dc;
    }
    ctx->pc = 0x1943D4u;
    {
        const bool branch_taken_0x1943d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943d4) {
            ctx->pc = 0x1943F8u;
            goto label_1943f8;
        }
    }
    ctx->pc = 0x1943DCu;
label_1943dc:
    // 0x1943dc: 0x10760014  beq         $v1, $s6, . + 4 + (0x14 << 2)
label_1943e0:
    if (ctx->pc == 0x1943E0u) {
        ctx->pc = 0x1943E0u;
            // 0x1943e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1943E4u;
        goto label_1943e4;
    }
    ctx->pc = 0x1943DCu;
    {
        const bool branch_taken_0x1943dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1943E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943DCu;
            // 0x1943e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943dc) {
            ctx->pc = 0x194430u;
            goto label_194430;
        }
    }
    ctx->pc = 0x1943E4u;
label_1943e4:
    // 0x1943e4: 0x107e000e  beq         $v1, $fp, . + 4 + (0xE << 2)
label_1943e8:
    if (ctx->pc == 0x1943E8u) {
        ctx->pc = 0x1943ECu;
        goto label_1943ec;
    }
    ctx->pc = 0x1943E4u;
    {
        const bool branch_taken_0x1943e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x1943e4) {
            ctx->pc = 0x194420u;
            goto label_194420;
        }
    }
    ctx->pc = 0x1943ECu;
label_1943ec:
    // 0x1943ec: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1943f0:
    if (ctx->pc == 0x1943F0u) {
        ctx->pc = 0x1943F0u;
            // 0x1943f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1943F4u;
        goto label_1943f4;
    }
    ctx->pc = 0x1943ECu;
    {
        const bool branch_taken_0x1943ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943ECu;
            // 0x1943f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943ec) {
            ctx->pc = 0x19446Cu;
            goto label_19446c;
        }
    }
    ctx->pc = 0x1943F4u;
label_1943f4:
    // 0x1943f4: 0x0  nop
    ctx->pc = 0x1943f4u;
    // NOP
label_1943f8:
    // 0x1943f8: 0x10750017  beq         $v1, $s5, . + 4 + (0x17 << 2)
label_1943fc:
    if (ctx->pc == 0x1943FCu) {
        ctx->pc = 0x1943FCu;
            // 0x1943fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194400u;
        goto label_194400;
    }
    ctx->pc = 0x1943F8u;
    {
        const bool branch_taken_0x1943f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1943FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943F8u;
            // 0x1943fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943f8) {
            ctx->pc = 0x194458u;
            goto label_194458;
        }
    }
    ctx->pc = 0x194400u;
label_194400:
    // 0x194400: 0x1477001a  bne         $v1, $s7, . + 4 + (0x1A << 2)
label_194404:
    if (ctx->pc == 0x194404u) {
        ctx->pc = 0x194404u;
            // 0x194404: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x194408u;
        goto label_194408;
    }
    ctx->pc = 0x194400u;
    {
        const bool branch_taken_0x194400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x194404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194400u;
            // 0x194404: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194400) {
            ctx->pc = 0x19446Cu;
            goto label_19446c;
        }
    }
    ctx->pc = 0x194408u;
label_194408:
    // 0x194408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19440c:
    // 0x19440c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19440cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194410:
    // 0x194410: 0xc0651ae  jal         func_1946B8
label_194414:
    if (ctx->pc == 0x194414u) {
        ctx->pc = 0x194414u;
            // 0x194414: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x194418u;
        goto label_194418;
    }
    ctx->pc = 0x194410u;
    SET_GPR_U32(ctx, 31, 0x194418u);
    ctx->pc = 0x194414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194410u;
            // 0x194414: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1946B8u;
    if (runtime->hasFunction(0x1946B8u)) {
        auto targetFn = runtime->lookupFunction(0x1946B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194418u; }
        if (ctx->pc != 0x194418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001946B8_0x1946b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194418u; }
        if (ctx->pc != 0x194418u) { return; }
    }
    ctx->pc = 0x194418u;
label_194418:
    // 0x194418: 0x10000013  b           . + 4 + (0x13 << 2)
label_19441c:
    if (ctx->pc == 0x19441Cu) {
        ctx->pc = 0x19441Cu;
            // 0x19441c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194420u;
        goto label_194420;
    }
    ctx->pc = 0x194418u;
    {
        const bool branch_taken_0x194418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19441Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194418u;
            // 0x19441c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194418) {
            ctx->pc = 0x194468u;
            goto label_194468;
        }
    }
    ctx->pc = 0x194420u;
label_194420:
    // 0x194420: 0xc065360  jal         func_194D80
label_194424:
    if (ctx->pc == 0x194424u) {
        ctx->pc = 0x194424u;
            // 0x194424: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x194428u;
        goto label_194428;
    }
    ctx->pc = 0x194420u;
    SET_GPR_U32(ctx, 31, 0x194428u);
    ctx->pc = 0x194424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194420u;
            // 0x194424: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D80u;
    if (runtime->hasFunction(0x194D80u)) {
        auto targetFn = runtime->lookupFunction(0x194D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194428u; }
        if (ctx->pc != 0x194428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194D80_0x194d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194428u; }
        if (ctx->pc != 0x194428u) { return; }
    }
    ctx->pc = 0x194428u;
label_194428:
    // 0x194428: 0x1000000f  b           . + 4 + (0xF << 2)
label_19442c:
    if (ctx->pc == 0x19442Cu) {
        ctx->pc = 0x19442Cu;
            // 0x19442c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194430u;
        goto label_194430;
    }
    ctx->pc = 0x194428u;
    {
        const bool branch_taken_0x194428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194428u;
            // 0x19442c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194428) {
            ctx->pc = 0x194468u;
            goto label_194468;
        }
    }
    ctx->pc = 0x194430u;
label_194430:
    // 0x194430: 0xc065400  jal         func_195000
label_194434:
    if (ctx->pc == 0x194434u) {
        ctx->pc = 0x194434u;
            // 0x194434: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x194438u;
        goto label_194438;
    }
    ctx->pc = 0x194430u;
    SET_GPR_U32(ctx, 31, 0x194438u);
    ctx->pc = 0x194434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194430u;
            // 0x194434: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195000u;
    if (runtime->hasFunction(0x195000u)) {
        auto targetFn = runtime->lookupFunction(0x195000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194438u; }
        if (ctx->pc != 0x194438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195000_0x195000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194438u; }
        if (ctx->pc != 0x194438u) { return; }
    }
    ctx->pc = 0x194438u;
label_194438:
    // 0x194438: 0x1000000b  b           . + 4 + (0xB << 2)
label_19443c:
    if (ctx->pc == 0x19443Cu) {
        ctx->pc = 0x19443Cu;
            // 0x19443c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194440u;
        goto label_194440;
    }
    ctx->pc = 0x194438u;
    {
        const bool branch_taken_0x194438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194438u;
            // 0x19443c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194438) {
            ctx->pc = 0x194468u;
            goto label_194468;
        }
    }
    ctx->pc = 0x194440u;
label_194440:
    // 0x194440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194444:
    // 0x194444: 0xc06557a  jal         func_1955E8
label_194448:
    if (ctx->pc == 0x194448u) {
        ctx->pc = 0x194448u;
            // 0x194448: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19444Cu;
        goto label_19444c;
    }
    ctx->pc = 0x194444u;
    SET_GPR_U32(ctx, 31, 0x19444Cu);
    ctx->pc = 0x194448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194444u;
            // 0x194448: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1955E8u;
    if (runtime->hasFunction(0x1955E8u)) {
        auto targetFn = runtime->lookupFunction(0x1955E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19444Cu; }
        if (ctx->pc != 0x19444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001955E8_0x1955e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19444Cu; }
        if (ctx->pc != 0x19444Cu) { return; }
    }
    ctx->pc = 0x19444Cu;
label_19444c:
    // 0x19444c: 0x10000006  b           . + 4 + (0x6 << 2)
label_194450:
    if (ctx->pc == 0x194450u) {
        ctx->pc = 0x194450u;
            // 0x194450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194454u;
        goto label_194454;
    }
    ctx->pc = 0x19444Cu;
    {
        const bool branch_taken_0x19444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19444Cu;
            // 0x194450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19444c) {
            ctx->pc = 0x194468u;
            goto label_194468;
        }
    }
    ctx->pc = 0x194454u;
label_194454:
    // 0x194454: 0x0  nop
    ctx->pc = 0x194454u;
    // NOP
label_194458:
    // 0x194458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19445c:
    // 0x19445c: 0xc0655aa  jal         func_1956A8
label_194460:
    if (ctx->pc == 0x194460u) {
        ctx->pc = 0x194460u;
            // 0x194460: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194464u;
        goto label_194464;
    }
    ctx->pc = 0x19445Cu;
    SET_GPR_U32(ctx, 31, 0x194464u);
    ctx->pc = 0x194460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19445Cu;
            // 0x194460: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A8u;
    if (runtime->hasFunction(0x1956A8u)) {
        auto targetFn = runtime->lookupFunction(0x1956A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194464u; }
        if (ctx->pc != 0x194464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001956A8_0x1956a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194464u; }
        if (ctx->pc != 0x194464u) { return; }
    }
    ctx->pc = 0x194464u;
label_194464:
    // 0x194464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194468:
    // 0x194468: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19446c:
    // 0x19446c: 0xc065720  jal         func_195C80
label_194470:
    if (ctx->pc == 0x194470u) {
        ctx->pc = 0x194470u;
            // 0x194470: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194474u;
        goto label_194474;
    }
    ctx->pc = 0x19446Cu;
    SET_GPR_U32(ctx, 31, 0x194474u);
    ctx->pc = 0x194470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19446Cu;
            // 0x194470: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C80u;
    if (runtime->hasFunction(0x195C80u)) {
        auto targetFn = runtime->lookupFunction(0x195C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194474u; }
        if (ctx->pc != 0x194474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195C80_0x195c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194474u; }
        if (ctx->pc != 0x194474u) { return; }
    }
    ctx->pc = 0x194474u;
label_194474:
    // 0x194474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194478:
    // 0x194478: 0x1600ffc9  bnez        $s0, . + 4 + (-0x37 << 2)
label_19447c:
    if (ctx->pc == 0x19447Cu) {
        ctx->pc = 0x19447Cu;
            // 0x19447c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194480u;
        goto label_194480;
    }
    ctx->pc = 0x194478u;
    {
        const bool branch_taken_0x194478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194478u;
            // 0x19447c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194478) {
            ctx->pc = 0x1943A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1943a0;
        }
    }
    ctx->pc = 0x194480u;
label_194480:
    // 0x194480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194484:
    // 0x194484: 0xc065138  jal         func_1944E0
label_194488:
    if (ctx->pc == 0x194488u) {
        ctx->pc = 0x194488u;
            // 0x194488: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19448Cu;
        goto label_19448c;
    }
    ctx->pc = 0x194484u;
    SET_GPR_U32(ctx, 31, 0x19448Cu);
    ctx->pc = 0x194488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194484u;
            // 0x194488: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944E0u;
    if (runtime->hasFunction(0x1944E0u)) {
        auto targetFn = runtime->lookupFunction(0x1944E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19448Cu; }
        if (ctx->pc != 0x19448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001944E0_0x1944e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19448Cu; }
        if (ctx->pc != 0x19448Cu) { return; }
    }
    ctx->pc = 0x19448Cu;
label_19448c:
    // 0x19448c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19448cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194490:
    // 0x194490: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_194494:
    if (ctx->pc == 0x194494u) {
        ctx->pc = 0x194494u;
            // 0x194494: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x194498u;
        goto label_194498;
    }
    ctx->pc = 0x194490u;
    {
        const bool branch_taken_0x194490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194490u;
            // 0x194494: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194490) {
            ctx->pc = 0x1944ACu;
            goto label_1944ac;
        }
    }
    ctx->pc = 0x194498u;
label_194498:
    // 0x194498: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19449c:
    if (ctx->pc == 0x19449Cu) {
        ctx->pc = 0x19449Cu;
            // 0x19449c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1944A0u;
        goto label_1944a0;
    }
    ctx->pc = 0x194498u;
    {
        const bool branch_taken_0x194498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194498u;
            // 0x19449c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194498) {
            ctx->pc = 0x1944B0u;
            goto label_1944b0;
        }
    }
    ctx->pc = 0x1944A0u;
label_1944a0:
    // 0x1944a0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1944a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1944a4:
    // 0x1944a4: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
label_1944a8:
    if (ctx->pc == 0x1944A8u) {
        ctx->pc = 0x1944A8u;
            // 0x1944a8: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1944ACu;
        goto label_1944ac;
    }
    ctx->pc = 0x1944A4u;
    {
        const bool branch_taken_0x1944a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1944A4u;
            // 0x1944a8: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944a4) {
            ctx->pc = 0x1943C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1943c8;
        }
    }
    ctx->pc = 0x1944ACu;
label_1944ac:
    // 0x1944ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1944acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1944b0:
    // 0x1944b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1944b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1944b4:
    // 0x1944b4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1944b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1944b8:
    // 0x1944b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1944b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1944bc:
    // 0x1944bc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1944bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1944c0:
    // 0x1944c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1944c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1944c4:
    // 0x1944c4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1944c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1944c8:
    // 0x1944c8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1944c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1944cc:
    // 0x1944cc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1944ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1944d0:
    // 0x1944d0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1944d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1944d4:
    // 0x1944d4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1944d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1944d8:
    // 0x1944d8: 0x3e00008  jr          $ra
label_1944dc:
    if (ctx->pc == 0x1944DCu) {
        ctx->pc = 0x1944DCu;
            // 0x1944dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1944E0u;
        goto label_fallthrough_0x1944d8;
    }
    ctx->pc = 0x1944D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1944DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1944D8u;
            // 0x1944dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1944d8:
    ctx->pc = 0x1944E0u;
}
