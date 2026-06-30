#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00413270
// Address: 0x413270 - 0x413500
void sub_00413270_0x413270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413270_0x413270");
#endif

    switch (ctx->pc) {
        case 0x413270u: goto label_413270;
        case 0x413274u: goto label_413274;
        case 0x413278u: goto label_413278;
        case 0x41327cu: goto label_41327c;
        case 0x413280u: goto label_413280;
        case 0x413284u: goto label_413284;
        case 0x413288u: goto label_413288;
        case 0x41328cu: goto label_41328c;
        case 0x413290u: goto label_413290;
        case 0x413294u: goto label_413294;
        case 0x413298u: goto label_413298;
        case 0x41329cu: goto label_41329c;
        case 0x4132a0u: goto label_4132a0;
        case 0x4132a4u: goto label_4132a4;
        case 0x4132a8u: goto label_4132a8;
        case 0x4132acu: goto label_4132ac;
        case 0x4132b0u: goto label_4132b0;
        case 0x4132b4u: goto label_4132b4;
        case 0x4132b8u: goto label_4132b8;
        case 0x4132bcu: goto label_4132bc;
        case 0x4132c0u: goto label_4132c0;
        case 0x4132c4u: goto label_4132c4;
        case 0x4132c8u: goto label_4132c8;
        case 0x4132ccu: goto label_4132cc;
        case 0x4132d0u: goto label_4132d0;
        case 0x4132d4u: goto label_4132d4;
        case 0x4132d8u: goto label_4132d8;
        case 0x4132dcu: goto label_4132dc;
        case 0x4132e0u: goto label_4132e0;
        case 0x4132e4u: goto label_4132e4;
        case 0x4132e8u: goto label_4132e8;
        case 0x4132ecu: goto label_4132ec;
        case 0x4132f0u: goto label_4132f0;
        case 0x4132f4u: goto label_4132f4;
        case 0x4132f8u: goto label_4132f8;
        case 0x4132fcu: goto label_4132fc;
        case 0x413300u: goto label_413300;
        case 0x413304u: goto label_413304;
        case 0x413308u: goto label_413308;
        case 0x41330cu: goto label_41330c;
        case 0x413310u: goto label_413310;
        case 0x413314u: goto label_413314;
        case 0x413318u: goto label_413318;
        case 0x41331cu: goto label_41331c;
        case 0x413320u: goto label_413320;
        case 0x413324u: goto label_413324;
        case 0x413328u: goto label_413328;
        case 0x41332cu: goto label_41332c;
        case 0x413330u: goto label_413330;
        case 0x413334u: goto label_413334;
        case 0x413338u: goto label_413338;
        case 0x41333cu: goto label_41333c;
        case 0x413340u: goto label_413340;
        case 0x413344u: goto label_413344;
        case 0x413348u: goto label_413348;
        case 0x41334cu: goto label_41334c;
        case 0x413350u: goto label_413350;
        case 0x413354u: goto label_413354;
        case 0x413358u: goto label_413358;
        case 0x41335cu: goto label_41335c;
        case 0x413360u: goto label_413360;
        case 0x413364u: goto label_413364;
        case 0x413368u: goto label_413368;
        case 0x41336cu: goto label_41336c;
        case 0x413370u: goto label_413370;
        case 0x413374u: goto label_413374;
        case 0x413378u: goto label_413378;
        case 0x41337cu: goto label_41337c;
        case 0x413380u: goto label_413380;
        case 0x413384u: goto label_413384;
        case 0x413388u: goto label_413388;
        case 0x41338cu: goto label_41338c;
        case 0x413390u: goto label_413390;
        case 0x413394u: goto label_413394;
        case 0x413398u: goto label_413398;
        case 0x41339cu: goto label_41339c;
        case 0x4133a0u: goto label_4133a0;
        case 0x4133a4u: goto label_4133a4;
        case 0x4133a8u: goto label_4133a8;
        case 0x4133acu: goto label_4133ac;
        case 0x4133b0u: goto label_4133b0;
        case 0x4133b4u: goto label_4133b4;
        case 0x4133b8u: goto label_4133b8;
        case 0x4133bcu: goto label_4133bc;
        case 0x4133c0u: goto label_4133c0;
        case 0x4133c4u: goto label_4133c4;
        case 0x4133c8u: goto label_4133c8;
        case 0x4133ccu: goto label_4133cc;
        case 0x4133d0u: goto label_4133d0;
        case 0x4133d4u: goto label_4133d4;
        case 0x4133d8u: goto label_4133d8;
        case 0x4133dcu: goto label_4133dc;
        case 0x4133e0u: goto label_4133e0;
        case 0x4133e4u: goto label_4133e4;
        case 0x4133e8u: goto label_4133e8;
        case 0x4133ecu: goto label_4133ec;
        case 0x4133f0u: goto label_4133f0;
        case 0x4133f4u: goto label_4133f4;
        case 0x4133f8u: goto label_4133f8;
        case 0x4133fcu: goto label_4133fc;
        case 0x413400u: goto label_413400;
        case 0x413404u: goto label_413404;
        case 0x413408u: goto label_413408;
        case 0x41340cu: goto label_41340c;
        case 0x413410u: goto label_413410;
        case 0x413414u: goto label_413414;
        case 0x413418u: goto label_413418;
        case 0x41341cu: goto label_41341c;
        case 0x413420u: goto label_413420;
        case 0x413424u: goto label_413424;
        case 0x413428u: goto label_413428;
        case 0x41342cu: goto label_41342c;
        case 0x413430u: goto label_413430;
        case 0x413434u: goto label_413434;
        case 0x413438u: goto label_413438;
        case 0x41343cu: goto label_41343c;
        case 0x413440u: goto label_413440;
        case 0x413444u: goto label_413444;
        case 0x413448u: goto label_413448;
        case 0x41344cu: goto label_41344c;
        case 0x413450u: goto label_413450;
        case 0x413454u: goto label_413454;
        case 0x413458u: goto label_413458;
        case 0x41345cu: goto label_41345c;
        case 0x413460u: goto label_413460;
        case 0x413464u: goto label_413464;
        case 0x413468u: goto label_413468;
        case 0x41346cu: goto label_41346c;
        case 0x413470u: goto label_413470;
        case 0x413474u: goto label_413474;
        case 0x413478u: goto label_413478;
        case 0x41347cu: goto label_41347c;
        case 0x413480u: goto label_413480;
        case 0x413484u: goto label_413484;
        case 0x413488u: goto label_413488;
        case 0x41348cu: goto label_41348c;
        case 0x413490u: goto label_413490;
        case 0x413494u: goto label_413494;
        case 0x413498u: goto label_413498;
        case 0x41349cu: goto label_41349c;
        case 0x4134a0u: goto label_4134a0;
        case 0x4134a4u: goto label_4134a4;
        case 0x4134a8u: goto label_4134a8;
        case 0x4134acu: goto label_4134ac;
        case 0x4134b0u: goto label_4134b0;
        case 0x4134b4u: goto label_4134b4;
        case 0x4134b8u: goto label_4134b8;
        case 0x4134bcu: goto label_4134bc;
        case 0x4134c0u: goto label_4134c0;
        case 0x4134c4u: goto label_4134c4;
        case 0x4134c8u: goto label_4134c8;
        case 0x4134ccu: goto label_4134cc;
        case 0x4134d0u: goto label_4134d0;
        case 0x4134d4u: goto label_4134d4;
        case 0x4134d8u: goto label_4134d8;
        case 0x4134dcu: goto label_4134dc;
        case 0x4134e0u: goto label_4134e0;
        case 0x4134e4u: goto label_4134e4;
        case 0x4134e8u: goto label_4134e8;
        case 0x4134ecu: goto label_4134ec;
        case 0x4134f0u: goto label_4134f0;
        case 0x4134f4u: goto label_4134f4;
        case 0x4134f8u: goto label_4134f8;
        case 0x4134fcu: goto label_4134fc;
        default: break;
    }

    ctx->pc = 0x413270u;

label_413270:
    // 0x413270: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x413270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_413274:
    // 0x413274: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x413274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_413278:
    // 0x413278: 0x2442af48  addiu       $v0, $v0, -0x50B8
    ctx->pc = 0x413278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946632));
label_41327c:
    // 0x41327c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41327cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_413280:
    // 0x413280: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x413280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_413284:
    // 0x413284: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x413284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413288:
    // 0x413288: 0x3e00008  jr          $ra
label_41328c:
    if (ctx->pc == 0x41328Cu) {
        ctx->pc = 0x41328Cu;
            // 0x41328c: 0xac657308  sw          $a1, 0x7308($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29448), GPR_U32(ctx, 5));
        ctx->pc = 0x413290u;
        goto label_413290;
    }
    ctx->pc = 0x413288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413288u;
            // 0x41328c: 0xac657308  sw          $a1, 0x7308($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413290u;
label_413290:
    // 0x413290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413294:
    // 0x413294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x413294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413298:
    // 0x413298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41329c:
    // 0x41329c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4132a0:
    // 0x4132a0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4132a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4132a4:
    // 0x4132a4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_4132a8:
    if (ctx->pc == 0x4132A8u) {
        ctx->pc = 0x4132A8u;
            // 0x4132a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4132ACu;
        goto label_4132ac;
    }
    ctx->pc = 0x4132A4u;
    {
        const bool branch_taken_0x4132a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4132A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4132A4u;
            // 0x4132a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4132a4) {
            ctx->pc = 0x4132D0u;
            goto label_4132d0;
        }
    }
    ctx->pc = 0x4132ACu;
label_4132ac:
    // 0x4132ac: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_4132b0:
    if (ctx->pc == 0x4132B0u) {
        ctx->pc = 0x4132B0u;
            // 0x4132b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4132B4u;
        goto label_4132b4;
    }
    ctx->pc = 0x4132ACu;
    {
        const bool branch_taken_0x4132ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4132ac) {
            ctx->pc = 0x4132B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4132ACu;
            // 0x4132b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4132BCu;
            goto label_4132bc;
        }
    }
    ctx->pc = 0x4132B4u;
label_4132b4:
    // 0x4132b4: 0x10000079  b           . + 4 + (0x79 << 2)
label_4132b8:
    if (ctx->pc == 0x4132B8u) {
        ctx->pc = 0x4132B8u;
            // 0x4132b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4132BCu;
        goto label_4132bc;
    }
    ctx->pc = 0x4132B4u;
    {
        const bool branch_taken_0x4132b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4132B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4132B4u;
            // 0x4132b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4132b4) {
            ctx->pc = 0x41349Cu;
            goto label_41349c;
        }
    }
    ctx->pc = 0x4132BCu;
label_4132bc:
    // 0x4132bc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4132bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4132c0:
    // 0x4132c0: 0x320f809  jalr        $t9
label_4132c4:
    if (ctx->pc == 0x4132C4u) {
        ctx->pc = 0x4132C8u;
        goto label_4132c8;
    }
    ctx->pc = 0x4132C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4132C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4132C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4132C8u; }
            if (ctx->pc != 0x4132C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4132C8u;
label_4132c8:
    // 0x4132c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4132c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4132cc:
    // 0x4132cc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x4132ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_4132d0:
    // 0x4132d0: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x4132d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4132d4:
    // 0x4132d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4132d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4132d8:
    // 0x4132d8: 0x10a30055  beq         $a1, $v1, . + 4 + (0x55 << 2)
label_4132dc:
    if (ctx->pc == 0x4132DCu) {
        ctx->pc = 0x4132E0u;
        goto label_4132e0;
    }
    ctx->pc = 0x4132D8u;
    {
        const bool branch_taken_0x4132d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4132d8) {
            ctx->pc = 0x413430u;
            goto label_413430;
        }
    }
    ctx->pc = 0x4132E0u;
label_4132e0:
    // 0x4132e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4132e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4132e4:
    // 0x4132e4: 0x10a40037  beq         $a1, $a0, . + 4 + (0x37 << 2)
label_4132e8:
    if (ctx->pc == 0x4132E8u) {
        ctx->pc = 0x4132ECu;
        goto label_4132ec;
    }
    ctx->pc = 0x4132E4u;
    {
        const bool branch_taken_0x4132e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4132e4) {
            ctx->pc = 0x4133C4u;
            goto label_4133c4;
        }
    }
    ctx->pc = 0x4132ECu;
label_4132ec:
    // 0x4132ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4132ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4132f0:
    // 0x4132f0: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_4132f4:
    if (ctx->pc == 0x4132F4u) {
        ctx->pc = 0x4132F8u;
        goto label_4132f8;
    }
    ctx->pc = 0x4132F0u;
    {
        const bool branch_taken_0x4132f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4132f0) {
            ctx->pc = 0x413370u;
            goto label_413370;
        }
    }
    ctx->pc = 0x4132F8u;
label_4132f8:
    // 0x4132f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4132f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4132fc:
    // 0x4132fc: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_413300:
    if (ctx->pc == 0x413300u) {
        ctx->pc = 0x413304u;
        goto label_413304;
    }
    ctx->pc = 0x4132FCu;
    {
        const bool branch_taken_0x4132fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4132fc) {
            ctx->pc = 0x413314u;
            goto label_413314;
        }
    }
    ctx->pc = 0x413304u;
label_413304:
    // 0x413304: 0x10a00064  beqz        $a1, . + 4 + (0x64 << 2)
label_413308:
    if (ctx->pc == 0x413308u) {
        ctx->pc = 0x41330Cu;
        goto label_41330c;
    }
    ctx->pc = 0x413304u;
    {
        const bool branch_taken_0x413304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x413304) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x41330Cu;
label_41330c:
    // 0x41330c: 0x10000062  b           . + 4 + (0x62 << 2)
label_413310:
    if (ctx->pc == 0x413310u) {
        ctx->pc = 0x413314u;
        goto label_413314;
    }
    ctx->pc = 0x41330Cu;
    {
        const bool branch_taken_0x41330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41330c) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x413314u;
label_413314:
    // 0x413314: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x413314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_413318:
    // 0x413318: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x413318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41331c:
    // 0x41331c: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x41331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413320:
    // 0x413320: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x413320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_413324:
    // 0x413324: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x413324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413328:
    // 0x413328: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x413328u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_41332c:
    // 0x41332c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x41332cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_413330:
    // 0x413330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_413334:
    if (ctx->pc == 0x413334u) {
        ctx->pc = 0x413334u;
            // 0x413334: 0xe60200ec  swc1        $f2, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->pc = 0x413338u;
        goto label_413338;
    }
    ctx->pc = 0x413330u;
    {
        const bool branch_taken_0x413330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413330u;
            // 0x413334: 0xe60200ec  swc1        $f2, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x413330) {
            ctx->pc = 0x413340u;
            goto label_413340;
        }
    }
    ctx->pc = 0x413338u;
label_413338:
    // 0x413338: 0x10000057  b           . + 4 + (0x57 << 2)
label_41333c:
    if (ctx->pc == 0x41333Cu) {
        ctx->pc = 0x41333Cu;
            // 0x41333c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x413340u;
        goto label_413340;
    }
    ctx->pc = 0x413338u;
    {
        const bool branch_taken_0x413338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413338u;
            // 0x41333c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413338) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x413340u;
label_413340:
    // 0x413340: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x413340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_413344:
    // 0x413344: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x413344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_413348:
    // 0x413348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x413348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41334c:
    // 0x41334c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413350:
    // 0x413350: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x413350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_413354:
    // 0x413354: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x413354u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_413358:
    // 0x413358: 0x0  nop
    ctx->pc = 0x413358u;
    // NOP
label_41335c:
    // 0x41335c: 0x0  nop
    ctx->pc = 0x41335cu;
    // NOP
label_413360:
    // 0x413360: 0xc104d40  jal         func_413500
label_413364:
    if (ctx->pc == 0x413364u) {
        ctx->pc = 0x413368u;
        goto label_413368;
    }
    ctx->pc = 0x413360u;
    SET_GPR_U32(ctx, 31, 0x413368u);
    ctx->pc = 0x413500u;
    if (runtime->hasFunction(0x413500u)) {
        auto targetFn = runtime->lookupFunction(0x413500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413368u; }
        if (ctx->pc != 0x413368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413500_0x413500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413368u; }
        if (ctx->pc != 0x413368u) { return; }
    }
    ctx->pc = 0x413368u;
label_413368:
    // 0x413368: 0x1000004b  b           . + 4 + (0x4B << 2)
label_41336c:
    if (ctx->pc == 0x41336Cu) {
        ctx->pc = 0x413370u;
        goto label_413370;
    }
    ctx->pc = 0x413368u;
    {
        const bool branch_taken_0x413368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x413368) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x413370u;
label_413370:
    // 0x413370: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x413370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_413374:
    // 0x413374: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x413374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_413378:
    // 0x413378: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x413378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41337c:
    // 0x41337c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41337cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_413380:
    // 0x413380: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x413380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413384:
    // 0x413384: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x413384u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_413388:
    // 0x413388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x413388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41338c:
    // 0x41338c: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_413390:
    if (ctx->pc == 0x413390u) {
        ctx->pc = 0x413390u;
            // 0x413390: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->pc = 0x413394u;
        goto label_413394;
    }
    ctx->pc = 0x41338Cu;
    {
        const bool branch_taken_0x41338c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41338Cu;
            // 0x413390: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41338c) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x413394u;
label_413394:
    // 0x413394: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x413394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
label_413398:
    // 0x413398: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x413398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_41339c:
    // 0x41339c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x41339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_4133a0:
    // 0x4133a0: 0x920300f0  lbu         $v1, 0xF0($s0)
    ctx->pc = 0x4133a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
label_4133a4:
    // 0x4133a4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_4133a8:
    if (ctx->pc == 0x4133A8u) {
        ctx->pc = 0x4133ACu;
        goto label_4133ac;
    }
    ctx->pc = 0x4133A4u;
    {
        const bool branch_taken_0x4133a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4133a4) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x4133ACu;
label_4133ac:
    // 0x4133ac: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x4133acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_4133b0:
    // 0x4133b0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4133b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4133b4:
    // 0x4133b4: 0xc122d2c  jal         func_48B4B0
label_4133b8:
    if (ctx->pc == 0x4133B8u) {
        ctx->pc = 0x4133B8u;
            // 0x4133b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4133BCu;
        goto label_4133bc;
    }
    ctx->pc = 0x4133B4u;
    SET_GPR_U32(ctx, 31, 0x4133BCu);
    ctx->pc = 0x4133B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4133B4u;
            // 0x4133b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4133BCu; }
        if (ctx->pc != 0x4133BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4133BCu; }
        if (ctx->pc != 0x4133BCu) { return; }
    }
    ctx->pc = 0x4133BCu;
label_4133bc:
    // 0x4133bc: 0x10000036  b           . + 4 + (0x36 << 2)
label_4133c0:
    if (ctx->pc == 0x4133C0u) {
        ctx->pc = 0x4133C4u;
        goto label_4133c4;
    }
    ctx->pc = 0x4133BCu;
    {
        const bool branch_taken_0x4133bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4133bc) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x4133C4u;
label_4133c4:
    // 0x4133c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4133c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4133c8:
    // 0x4133c8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4133c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4133cc:
    // 0x4133cc: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x4133ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4133d0:
    // 0x4133d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4133d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4133d4:
    // 0x4133d4: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4133d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4133d8:
    // 0x4133d8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4133d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4133dc:
    // 0x4133dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4133dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4133e0:
    // 0x4133e0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4133e4:
    if (ctx->pc == 0x4133E4u) {
        ctx->pc = 0x4133E4u;
            // 0x4133e4: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->pc = 0x4133E8u;
        goto label_4133e8;
    }
    ctx->pc = 0x4133E0u;
    {
        const bool branch_taken_0x4133e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4133E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4133E0u;
            // 0x4133e4: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4133e0) {
            ctx->pc = 0x413418u;
            goto label_413418;
        }
    }
    ctx->pc = 0x4133E8u;
label_4133e8:
    // 0x4133e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4133e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4133ec:
    // 0x4133ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4133ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4133f0:
    // 0x4133f0: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x4133f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
label_4133f4:
    // 0x4133f4: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x4133f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_4133f8:
    // 0x4133f8: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x4133f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_4133fc:
    // 0x4133fc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_413400:
    if (ctx->pc == 0x413400u) {
        ctx->pc = 0x413400u;
            // 0x413400: 0x8e0500e0  lw          $a1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x413404u;
        goto label_413404;
    }
    ctx->pc = 0x4133FCu;
    {
        const bool branch_taken_0x4133fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4133fc) {
            ctx->pc = 0x413400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4133FCu;
            // 0x413400: 0x8e0500e0  lw          $a1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41341Cu;
            goto label_41341c;
        }
    }
    ctx->pc = 0x413404u;
label_413404:
    // 0x413404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x413404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_413408:
    // 0x413408: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x413408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_41340c:
    // 0x41340c: 0x320f809  jalr        $t9
label_413410:
    if (ctx->pc == 0x413410u) {
        ctx->pc = 0x413414u;
        goto label_413414;
    }
    ctx->pc = 0x41340Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x413414u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x413414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x413414u; }
            if (ctx->pc != 0x413414u) { return; }
        }
        }
    }
    ctx->pc = 0x413414u;
label_413414:
    // 0x413414: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x413414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_413418:
    // 0x413418: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x413418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_41341c:
    // 0x41341c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41341cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413420:
    // 0x413420: 0xc104d40  jal         func_413500
label_413424:
    if (ctx->pc == 0x413424u) {
        ctx->pc = 0x413424u;
            // 0x413424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413428u;
        goto label_413428;
    }
    ctx->pc = 0x413420u;
    SET_GPR_U32(ctx, 31, 0x413428u);
    ctx->pc = 0x413424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413420u;
            // 0x413424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413500u;
    if (runtime->hasFunction(0x413500u)) {
        auto targetFn = runtime->lookupFunction(0x413500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413428u; }
        if (ctx->pc != 0x413428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413500_0x413500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413428u; }
        if (ctx->pc != 0x413428u) { return; }
    }
    ctx->pc = 0x413428u;
label_413428:
    // 0x413428: 0x1000001b  b           . + 4 + (0x1B << 2)
label_41342c:
    if (ctx->pc == 0x41342Cu) {
        ctx->pc = 0x413430u;
        goto label_413430;
    }
    ctx->pc = 0x413428u;
    {
        const bool branch_taken_0x413428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x413428) {
            ctx->pc = 0x413498u;
            goto label_413498;
        }
    }
    ctx->pc = 0x413430u;
label_413430:
    // 0x413430: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x413430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_413434:
    // 0x413434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x413434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_413438:
    // 0x413438: 0x8c420e18  lw          $v0, 0xE18($v0)
    ctx->pc = 0x413438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3608)));
label_41343c:
    // 0x41343c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x41343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_413440:
    // 0x413440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x413440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_413444:
    // 0x413444: 0x90420078  lbu         $v0, 0x78($v0)
    ctx->pc = 0x413444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
label_413448:
    // 0x413448: 0x54440010  bnel        $v0, $a0, . + 4 + (0x10 << 2)
label_41344c:
    if (ctx->pc == 0x41344Cu) {
        ctx->pc = 0x41344Cu;
            // 0x41344c: 0x8e0500e4  lw          $a1, 0xE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->pc = 0x413450u;
        goto label_413450;
    }
    ctx->pc = 0x413448u;
    {
        const bool branch_taken_0x413448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x413448) {
            ctx->pc = 0x41344Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413448u;
            // 0x41344c: 0x8e0500e4  lw          $a1, 0xE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41348Cu;
            goto label_41348c;
        }
    }
    ctx->pc = 0x413450u;
label_413450:
    // 0x413450: 0x820300f1  lb          $v1, 0xF1($s0)
    ctx->pc = 0x413450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 241)));
label_413454:
    // 0x413454: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x413454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_413458:
    // 0x413458: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x413458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41345c:
    // 0x41345c: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x41345cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
label_413460:
    // 0x413460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x413460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_413464:
    // 0x413464: 0x0  nop
    ctx->pc = 0x413464u;
    // NOP
label_413468:
    // 0x413468: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x413468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_41346c:
    // 0x41346c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x41346cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_413470:
    // 0x413470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x413470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_413474:
    // 0x413474: 0x0  nop
    ctx->pc = 0x413474u;
    // NOP
label_413478:
    // 0x413478: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x413478u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41347c:
    // 0x41347c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x41347cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_413480:
    // 0x413480: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x413480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_413484:
    // 0x413484: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x413484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
label_413488:
    // 0x413488: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x413488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_41348c:
    // 0x41348c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41348cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413490:
    // 0x413490: 0xc104d40  jal         func_413500
label_413494:
    if (ctx->pc == 0x413494u) {
        ctx->pc = 0x413494u;
            // 0x413494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413498u;
        goto label_413498;
    }
    ctx->pc = 0x413490u;
    SET_GPR_U32(ctx, 31, 0x413498u);
    ctx->pc = 0x413494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413490u;
            // 0x413494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413500u;
    if (runtime->hasFunction(0x413500u)) {
        auto targetFn = runtime->lookupFunction(0x413500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413498u; }
        if (ctx->pc != 0x413498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413500_0x413500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413498u; }
        if (ctx->pc != 0x413498u) { return; }
    }
    ctx->pc = 0x413498u;
label_413498:
    // 0x413498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41349c:
    // 0x41349c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41349cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4134a0:
    // 0x4134a0: 0x3e00008  jr          $ra
label_4134a4:
    if (ctx->pc == 0x4134A4u) {
        ctx->pc = 0x4134A4u;
            // 0x4134a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4134A8u;
        goto label_4134a8;
    }
    ctx->pc = 0x4134A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4134A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4134A0u;
            // 0x4134a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4134A8u;
label_4134a8:
    // 0x4134a8: 0x0  nop
    ctx->pc = 0x4134a8u;
    // NOP
label_4134ac:
    // 0x4134ac: 0x0  nop
    ctx->pc = 0x4134acu;
    // NOP
label_4134b0:
    // 0x4134b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4134b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4134b4:
    // 0x4134b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4134b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4134b8:
    // 0x4134b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4134b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4134bc:
    // 0x4134bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4134bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4134c0:
    // 0x4134c0: 0x8c8500ac  lw          $a1, 0xAC($a0)
    ctx->pc = 0x4134c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_4134c4:
    // 0x4134c4: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
label_4134c8:
    if (ctx->pc == 0x4134C8u) {
        ctx->pc = 0x4134C8u;
            // 0x4134c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4134CCu;
        goto label_4134cc;
    }
    ctx->pc = 0x4134C4u;
    {
        const bool branch_taken_0x4134c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4134C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4134C4u;
            // 0x4134c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4134c4) {
            ctx->pc = 0x4134F0u;
            goto label_4134f0;
        }
    }
    ctx->pc = 0x4134CCu;
label_4134cc:
    // 0x4134cc: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x4134ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_4134d0:
    // 0x4134d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4134d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4134d4:
    // 0x4134d4: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x4134d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4134d8:
    // 0x4134d8: 0xc0e32a4  jal         func_38CA90
label_4134dc:
    if (ctx->pc == 0x4134DCu) {
        ctx->pc = 0x4134DCu;
            // 0x4134dc: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x4134E0u;
        goto label_4134e0;
    }
    ctx->pc = 0x4134D8u;
    SET_GPR_U32(ctx, 31, 0x4134E0u);
    ctx->pc = 0x4134DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4134D8u;
            // 0x4134dc: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4134E0u; }
        if (ctx->pc != 0x4134E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4134E0u; }
        if (ctx->pc != 0x4134E0u) { return; }
    }
    ctx->pc = 0x4134E0u;
label_4134e0:
    // 0x4134e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4134e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4134e4:
    // 0x4134e4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4134e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4134e8:
    // 0x4134e8: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x4134e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_4134ec:
    // 0x4134ec: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x4134ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_4134f0:
    // 0x4134f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4134f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4134f4:
    // 0x4134f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4134f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4134f8:
    // 0x4134f8: 0x3e00008  jr          $ra
label_4134fc:
    if (ctx->pc == 0x4134FCu) {
        ctx->pc = 0x4134FCu;
            // 0x4134fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x413500u;
        goto label_fallthrough_0x4134f8;
    }
    ctx->pc = 0x4134F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4134FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4134F8u;
            // 0x4134fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4134f8:
    ctx->pc = 0x413500u;
}
