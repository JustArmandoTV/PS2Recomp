#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00433370
// Address: 0x433370 - 0x433600
void sub_00433370_0x433370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433370_0x433370");
#endif

    switch (ctx->pc) {
        case 0x433370u: goto label_433370;
        case 0x433374u: goto label_433374;
        case 0x433378u: goto label_433378;
        case 0x43337cu: goto label_43337c;
        case 0x433380u: goto label_433380;
        case 0x433384u: goto label_433384;
        case 0x433388u: goto label_433388;
        case 0x43338cu: goto label_43338c;
        case 0x433390u: goto label_433390;
        case 0x433394u: goto label_433394;
        case 0x433398u: goto label_433398;
        case 0x43339cu: goto label_43339c;
        case 0x4333a0u: goto label_4333a0;
        case 0x4333a4u: goto label_4333a4;
        case 0x4333a8u: goto label_4333a8;
        case 0x4333acu: goto label_4333ac;
        case 0x4333b0u: goto label_4333b0;
        case 0x4333b4u: goto label_4333b4;
        case 0x4333b8u: goto label_4333b8;
        case 0x4333bcu: goto label_4333bc;
        case 0x4333c0u: goto label_4333c0;
        case 0x4333c4u: goto label_4333c4;
        case 0x4333c8u: goto label_4333c8;
        case 0x4333ccu: goto label_4333cc;
        case 0x4333d0u: goto label_4333d0;
        case 0x4333d4u: goto label_4333d4;
        case 0x4333d8u: goto label_4333d8;
        case 0x4333dcu: goto label_4333dc;
        case 0x4333e0u: goto label_4333e0;
        case 0x4333e4u: goto label_4333e4;
        case 0x4333e8u: goto label_4333e8;
        case 0x4333ecu: goto label_4333ec;
        case 0x4333f0u: goto label_4333f0;
        case 0x4333f4u: goto label_4333f4;
        case 0x4333f8u: goto label_4333f8;
        case 0x4333fcu: goto label_4333fc;
        case 0x433400u: goto label_433400;
        case 0x433404u: goto label_433404;
        case 0x433408u: goto label_433408;
        case 0x43340cu: goto label_43340c;
        case 0x433410u: goto label_433410;
        case 0x433414u: goto label_433414;
        case 0x433418u: goto label_433418;
        case 0x43341cu: goto label_43341c;
        case 0x433420u: goto label_433420;
        case 0x433424u: goto label_433424;
        case 0x433428u: goto label_433428;
        case 0x43342cu: goto label_43342c;
        case 0x433430u: goto label_433430;
        case 0x433434u: goto label_433434;
        case 0x433438u: goto label_433438;
        case 0x43343cu: goto label_43343c;
        case 0x433440u: goto label_433440;
        case 0x433444u: goto label_433444;
        case 0x433448u: goto label_433448;
        case 0x43344cu: goto label_43344c;
        case 0x433450u: goto label_433450;
        case 0x433454u: goto label_433454;
        case 0x433458u: goto label_433458;
        case 0x43345cu: goto label_43345c;
        case 0x433460u: goto label_433460;
        case 0x433464u: goto label_433464;
        case 0x433468u: goto label_433468;
        case 0x43346cu: goto label_43346c;
        case 0x433470u: goto label_433470;
        case 0x433474u: goto label_433474;
        case 0x433478u: goto label_433478;
        case 0x43347cu: goto label_43347c;
        case 0x433480u: goto label_433480;
        case 0x433484u: goto label_433484;
        case 0x433488u: goto label_433488;
        case 0x43348cu: goto label_43348c;
        case 0x433490u: goto label_433490;
        case 0x433494u: goto label_433494;
        case 0x433498u: goto label_433498;
        case 0x43349cu: goto label_43349c;
        case 0x4334a0u: goto label_4334a0;
        case 0x4334a4u: goto label_4334a4;
        case 0x4334a8u: goto label_4334a8;
        case 0x4334acu: goto label_4334ac;
        case 0x4334b0u: goto label_4334b0;
        case 0x4334b4u: goto label_4334b4;
        case 0x4334b8u: goto label_4334b8;
        case 0x4334bcu: goto label_4334bc;
        case 0x4334c0u: goto label_4334c0;
        case 0x4334c4u: goto label_4334c4;
        case 0x4334c8u: goto label_4334c8;
        case 0x4334ccu: goto label_4334cc;
        case 0x4334d0u: goto label_4334d0;
        case 0x4334d4u: goto label_4334d4;
        case 0x4334d8u: goto label_4334d8;
        case 0x4334dcu: goto label_4334dc;
        case 0x4334e0u: goto label_4334e0;
        case 0x4334e4u: goto label_4334e4;
        case 0x4334e8u: goto label_4334e8;
        case 0x4334ecu: goto label_4334ec;
        case 0x4334f0u: goto label_4334f0;
        case 0x4334f4u: goto label_4334f4;
        case 0x4334f8u: goto label_4334f8;
        case 0x4334fcu: goto label_4334fc;
        case 0x433500u: goto label_433500;
        case 0x433504u: goto label_433504;
        case 0x433508u: goto label_433508;
        case 0x43350cu: goto label_43350c;
        case 0x433510u: goto label_433510;
        case 0x433514u: goto label_433514;
        case 0x433518u: goto label_433518;
        case 0x43351cu: goto label_43351c;
        case 0x433520u: goto label_433520;
        case 0x433524u: goto label_433524;
        case 0x433528u: goto label_433528;
        case 0x43352cu: goto label_43352c;
        case 0x433530u: goto label_433530;
        case 0x433534u: goto label_433534;
        case 0x433538u: goto label_433538;
        case 0x43353cu: goto label_43353c;
        case 0x433540u: goto label_433540;
        case 0x433544u: goto label_433544;
        case 0x433548u: goto label_433548;
        case 0x43354cu: goto label_43354c;
        case 0x433550u: goto label_433550;
        case 0x433554u: goto label_433554;
        case 0x433558u: goto label_433558;
        case 0x43355cu: goto label_43355c;
        case 0x433560u: goto label_433560;
        case 0x433564u: goto label_433564;
        case 0x433568u: goto label_433568;
        case 0x43356cu: goto label_43356c;
        case 0x433570u: goto label_433570;
        case 0x433574u: goto label_433574;
        case 0x433578u: goto label_433578;
        case 0x43357cu: goto label_43357c;
        case 0x433580u: goto label_433580;
        case 0x433584u: goto label_433584;
        case 0x433588u: goto label_433588;
        case 0x43358cu: goto label_43358c;
        case 0x433590u: goto label_433590;
        case 0x433594u: goto label_433594;
        case 0x433598u: goto label_433598;
        case 0x43359cu: goto label_43359c;
        case 0x4335a0u: goto label_4335a0;
        case 0x4335a4u: goto label_4335a4;
        case 0x4335a8u: goto label_4335a8;
        case 0x4335acu: goto label_4335ac;
        case 0x4335b0u: goto label_4335b0;
        case 0x4335b4u: goto label_4335b4;
        case 0x4335b8u: goto label_4335b8;
        case 0x4335bcu: goto label_4335bc;
        case 0x4335c0u: goto label_4335c0;
        case 0x4335c4u: goto label_4335c4;
        case 0x4335c8u: goto label_4335c8;
        case 0x4335ccu: goto label_4335cc;
        case 0x4335d0u: goto label_4335d0;
        case 0x4335d4u: goto label_4335d4;
        case 0x4335d8u: goto label_4335d8;
        case 0x4335dcu: goto label_4335dc;
        case 0x4335e0u: goto label_4335e0;
        case 0x4335e4u: goto label_4335e4;
        case 0x4335e8u: goto label_4335e8;
        case 0x4335ecu: goto label_4335ec;
        case 0x4335f0u: goto label_4335f0;
        case 0x4335f4u: goto label_4335f4;
        case 0x4335f8u: goto label_4335f8;
        case 0x4335fcu: goto label_4335fc;
        default: break;
    }

    ctx->pc = 0x433370u;

label_433370:
    // 0x433370: 0x3e00008  jr          $ra
label_433374:
    if (ctx->pc == 0x433374u) {
        ctx->pc = 0x433374u;
            // 0x433374: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->pc = 0x433378u;
        goto label_433378;
    }
    ctx->pc = 0x433370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433370u;
            // 0x433374: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433378u;
label_433378:
    // 0x433378: 0x0  nop
    ctx->pc = 0x433378u;
    // NOP
label_43337c:
    // 0x43337c: 0x0  nop
    ctx->pc = 0x43337cu;
    // NOP
label_433380:
    // 0x433380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x433380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_433384:
    // 0x433384: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x433384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_433388:
    // 0x433388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x433388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43338c:
    // 0x43338c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_433390:
    // 0x433390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x433390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_433394:
    // 0x433394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_433398:
    // 0x433398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43339c:
    // 0x43339c: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x43339cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4333a0:
    // 0x4333a0: 0x10e60037  beq         $a3, $a2, . + 4 + (0x37 << 2)
label_4333a4:
    if (ctx->pc == 0x4333A4u) {
        ctx->pc = 0x4333A4u;
            // 0x4333a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4333A8u;
        goto label_4333a8;
    }
    ctx->pc = 0x4333A0u;
    {
        const bool branch_taken_0x4333a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x4333A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4333A0u;
            // 0x4333a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4333a0) {
            ctx->pc = 0x433480u;
            goto label_433480;
        }
    }
    ctx->pc = 0x4333A8u;
label_4333a8:
    // 0x4333a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4333a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4333ac:
    // 0x4333ac: 0x50e30031  beql        $a3, $v1, . + 4 + (0x31 << 2)
label_4333b0:
    if (ctx->pc == 0x4333B0u) {
        ctx->pc = 0x4333B0u;
            // 0x4333b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4333B4u;
        goto label_4333b4;
    }
    ctx->pc = 0x4333ACu;
    {
        const bool branch_taken_0x4333ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x4333ac) {
            ctx->pc = 0x4333B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4333ACu;
            // 0x4333b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433474u;
            goto label_433474;
        }
    }
    ctx->pc = 0x4333B4u;
label_4333b4:
    // 0x4333b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4333b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4333b8:
    // 0x4333b8: 0x50e50003  beql        $a3, $a1, . + 4 + (0x3 << 2)
label_4333bc:
    if (ctx->pc == 0x4333BCu) {
        ctx->pc = 0x4333BCu;
            // 0x4333bc: 0x92230091  lbu         $v1, 0x91($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 145)));
        ctx->pc = 0x4333C0u;
        goto label_4333c0;
    }
    ctx->pc = 0x4333B8u;
    {
        const bool branch_taken_0x4333b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x4333b8) {
            ctx->pc = 0x4333BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4333B8u;
            // 0x4333bc: 0x92230091  lbu         $v1, 0x91($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 145)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4333C8u;
            goto label_4333c8;
        }
    }
    ctx->pc = 0x4333C0u;
label_4333c0:
    // 0x4333c0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4333c4:
    if (ctx->pc == 0x4333C4u) {
        ctx->pc = 0x4333C8u;
        goto label_4333c8;
    }
    ctx->pc = 0x4333C0u;
    {
        const bool branch_taken_0x4333c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4333c0) {
            ctx->pc = 0x4334B8u;
            goto label_4334b8;
        }
    }
    ctx->pc = 0x4333C8u;
label_4333c8:
    // 0x4333c8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_4333cc:
    if (ctx->pc == 0x4333CCu) {
        ctx->pc = 0x4333D0u;
        goto label_4333d0;
    }
    ctx->pc = 0x4333C8u;
    {
        const bool branch_taken_0x4333c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4333c8) {
            ctx->pc = 0x4334B8u;
            goto label_4334b8;
        }
    }
    ctx->pc = 0x4333D0u;
label_4333d0:
    // 0x4333d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4333d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4333d4:
    // 0x4333d4: 0x240461d0  addiu       $a0, $zero, 0x61D0
    ctx->pc = 0x4333d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25040));
label_4333d8:
    // 0x4333d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4333d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4333dc:
    // 0x4333dc: 0xa04674f2  sb          $a2, 0x74F2($v0)
    ctx->pc = 0x4333dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29938), (uint8_t)GPR_U32(ctx, 6));
label_4333e0:
    // 0x4333e0: 0xa46474f0  sh          $a0, 0x74F0($v1)
    ctx->pc = 0x4333e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 29936), (uint16_t)GPR_U32(ctx, 4));
label_4333e4:
    // 0x4333e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4333e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4333e8:
    // 0x4333e8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4333e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4333ec:
    // 0x4333ec: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4333ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4333f0:
    // 0x4333f0: 0xa04374f3  sb          $v1, 0x74F3($v0)
    ctx->pc = 0x4333f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29939), (uint8_t)GPR_U32(ctx, 3));
label_4333f4:
    // 0x4333f4: 0x248474fc  addiu       $a0, $a0, 0x74FC
    ctx->pc = 0x4333f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29948));
label_4333f8:
    // 0x4333f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4333f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4333fc:
    // 0x4333fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4333fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433400:
    // 0x433400: 0xac4574f4  sw          $a1, 0x74F4($v0)
    ctx->pc = 0x433400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29940), GPR_U32(ctx, 5));
label_433404:
    // 0x433404: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x433404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_433408:
    // 0x433408: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x433408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43340c:
    // 0x43340c: 0xac4074f8  sw          $zero, 0x74F8($v0)
    ctx->pc = 0x43340cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29944), GPR_U32(ctx, 0));
label_433410:
    // 0x433410: 0xc04cb1c  jal         func_132C70
label_433414:
    if (ctx->pc == 0x433414u) {
        ctx->pc = 0x433414u;
            // 0x433414: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->pc = 0x433418u;
        goto label_433418;
    }
    ctx->pc = 0x433410u;
    SET_GPR_U32(ctx, 31, 0x433418u);
    ctx->pc = 0x433414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433410u;
            // 0x433414: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433418u; }
        if (ctx->pc != 0x433418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433418u; }
        if (ctx->pc != 0x433418u) { return; }
    }
    ctx->pc = 0x433418u;
label_433418:
    // 0x433418: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x433418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_43341c:
    // 0x43341c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43341cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_433420:
    // 0x433420: 0x24847508  addiu       $a0, $a0, 0x7508
    ctx->pc = 0x433420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29960));
label_433424:
    // 0x433424: 0xc04cb1c  jal         func_132C70
label_433428:
    if (ctx->pc == 0x433428u) {
        ctx->pc = 0x433428u;
            // 0x433428: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->pc = 0x43342Cu;
        goto label_43342c;
    }
    ctx->pc = 0x433424u;
    SET_GPR_U32(ctx, 31, 0x43342Cu);
    ctx->pc = 0x433428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433424u;
            // 0x433428: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43342Cu; }
        if (ctx->pc != 0x43342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43342Cu; }
        if (ctx->pc != 0x43342Cu) { return; }
    }
    ctx->pc = 0x43342Cu;
label_43342c:
    // 0x43342c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x43342cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_433430:
    // 0x433430: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x433430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_433434:
    // 0x433434: 0x24847514  addiu       $a0, $a0, 0x7514
    ctx->pc = 0x433434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29972));
label_433438:
    // 0x433438: 0xc04cb1c  jal         func_132C70
label_43343c:
    if (ctx->pc == 0x43343Cu) {
        ctx->pc = 0x43343Cu;
            // 0x43343c: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->pc = 0x433440u;
        goto label_433440;
    }
    ctx->pc = 0x433438u;
    SET_GPR_U32(ctx, 31, 0x433440u);
    ctx->pc = 0x43343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433438u;
            // 0x43343c: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433440u; }
        if (ctx->pc != 0x433440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433440u; }
        if (ctx->pc != 0x433440u) { return; }
    }
    ctx->pc = 0x433440u;
label_433440:
    // 0x433440: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x433440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_433444:
    // 0x433444: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x433444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_433448:
    // 0x433448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x433448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43344c:
    // 0x43344c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x43344cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_433450:
    // 0x433450: 0x320f809  jalr        $t9
label_433454:
    if (ctx->pc == 0x433454u) {
        ctx->pc = 0x433454u;
            // 0x433454: 0x24a574f0  addiu       $a1, $a1, 0x74F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29936));
        ctx->pc = 0x433458u;
        goto label_433458;
    }
    ctx->pc = 0x433450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433458u);
        ctx->pc = 0x433454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433450u;
            // 0x433454: 0x24a574f0  addiu       $a1, $a1, 0x74F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29936));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x433458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433458u; }
            if (ctx->pc != 0x433458u) { return; }
        }
        }
    }
    ctx->pc = 0x433458u;
label_433458:
    // 0x433458: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x433458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43345c:
    // 0x43345c: 0x2e03000c  sltiu       $v1, $s0, 0xC
    ctx->pc = 0x43345cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_433460:
    // 0x433460: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_433464:
    if (ctx->pc == 0x433464u) {
        ctx->pc = 0x433464u;
            // 0x433464: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x433468u;
        goto label_433468;
    }
    ctx->pc = 0x433460u;
    {
        const bool branch_taken_0x433460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x433460) {
            ctx->pc = 0x433464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433460u;
            // 0x433464: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_433444;
        }
    }
    ctx->pc = 0x433468u;
label_433468:
    // 0x433468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x433468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43346c:
    // 0x43346c: 0x10000012  b           . + 4 + (0x12 << 2)
label_433470:
    if (ctx->pc == 0x433470u) {
        ctx->pc = 0x433470u;
            // 0x433470: 0xa2230091  sb          $v1, 0x91($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 145), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x433474u;
        goto label_433474;
    }
    ctx->pc = 0x43346Cu;
    {
        const bool branch_taken_0x43346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43346Cu;
            // 0x433470: 0xa2230091  sb          $v1, 0x91($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 145), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43346c) {
            ctx->pc = 0x4334B8u;
            goto label_4334b8;
        }
    }
    ctx->pc = 0x433474u;
label_433474:
    // 0x433474: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x433474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_433478:
    // 0x433478: 0x320f809  jalr        $t9
label_43347c:
    if (ctx->pc == 0x43347Cu) {
        ctx->pc = 0x433480u;
        goto label_433480;
    }
    ctx->pc = 0x433478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433480u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x433480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433480u; }
            if (ctx->pc != 0x433480u) { return; }
        }
        }
    }
    ctx->pc = 0x433480u;
label_433480:
    // 0x433480: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x433480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_433484:
    // 0x433484: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_433488:
    if (ctx->pc == 0x433488u) {
        ctx->pc = 0x43348Cu;
        goto label_43348c;
    }
    ctx->pc = 0x433484u;
    {
        const bool branch_taken_0x433484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x433484) {
            ctx->pc = 0x4334B8u;
            goto label_4334b8;
        }
    }
    ctx->pc = 0x43348Cu;
label_43348c:
    // 0x43348c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43348cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433490:
    // 0x433490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x433490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433494:
    // 0x433494: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x433494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_433498:
    // 0x433498: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x433498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43349c:
    // 0x43349c: 0xc0e3658  jal         func_38D960
label_4334a0:
    if (ctx->pc == 0x4334A0u) {
        ctx->pc = 0x4334A0u;
            // 0x4334a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4334A4u;
        goto label_4334a4;
    }
    ctx->pc = 0x43349Cu;
    SET_GPR_U32(ctx, 31, 0x4334A4u);
    ctx->pc = 0x4334A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43349Cu;
            // 0x4334a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4334A4u; }
        if (ctx->pc != 0x4334A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4334A4u; }
        if (ctx->pc != 0x4334A4u) { return; }
    }
    ctx->pc = 0x4334A4u;
label_4334a4:
    // 0x4334a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4334a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4334a8:
    // 0x4334a8: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x4334a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4334ac:
    // 0x4334ac: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4334b0:
    if (ctx->pc == 0x4334B0u) {
        ctx->pc = 0x4334B0u;
            // 0x4334b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4334B4u;
        goto label_4334b4;
    }
    ctx->pc = 0x4334ACu;
    {
        const bool branch_taken_0x4334ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4334B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4334ACu;
            // 0x4334b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334ac) {
            ctx->pc = 0x433494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_433494;
        }
    }
    ctx->pc = 0x4334B4u;
label_4334b4:
    // 0x4334b4: 0x0  nop
    ctx->pc = 0x4334b4u;
    // NOP
label_4334b8:
    // 0x4334b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4334b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4334bc:
    // 0x4334bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4334bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4334c0:
    // 0x4334c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4334c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4334c4:
    // 0x4334c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4334c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4334c8:
    // 0x4334c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4334c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4334cc:
    // 0x4334cc: 0x3e00008  jr          $ra
label_4334d0:
    if (ctx->pc == 0x4334D0u) {
        ctx->pc = 0x4334D0u;
            // 0x4334d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4334D4u;
        goto label_4334d4;
    }
    ctx->pc = 0x4334CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4334D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4334CCu;
            // 0x4334d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4334D4u;
label_4334d4:
    // 0x4334d4: 0x0  nop
    ctx->pc = 0x4334d4u;
    // NOP
label_4334d8:
    // 0x4334d8: 0x0  nop
    ctx->pc = 0x4334d8u;
    // NOP
label_4334dc:
    // 0x4334dc: 0x0  nop
    ctx->pc = 0x4334dcu;
    // NOP
label_4334e0:
    // 0x4334e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4334e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4334e4:
    // 0x4334e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4334e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4334e8:
    // 0x4334e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4334e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4334ec:
    // 0x4334ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4334ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4334f0:
    // 0x4334f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4334f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4334f4:
    // 0x4334f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4334f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4334f8:
    // 0x4334f8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4334f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4334fc:
    // 0x4334fc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_433500:
    if (ctx->pc == 0x433500u) {
        ctx->pc = 0x433500u;
            // 0x433500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433504u;
        goto label_433504;
    }
    ctx->pc = 0x4334FCu;
    {
        const bool branch_taken_0x4334fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x433500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4334FCu;
            // 0x433500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334fc) {
            ctx->pc = 0x433538u;
            goto label_433538;
        }
    }
    ctx->pc = 0x433504u;
label_433504:
    // 0x433504: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x433504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433508:
    // 0x433508: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x433508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43350c:
    // 0x43350c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x43350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_433510:
    // 0x433510: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x433510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_433514:
    // 0x433514: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x433514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_433518:
    // 0x433518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x433518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43351c:
    // 0x43351c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x43351cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_433520:
    // 0x433520: 0x320f809  jalr        $t9
label_433524:
    if (ctx->pc == 0x433524u) {
        ctx->pc = 0x433528u;
        goto label_433528;
    }
    ctx->pc = 0x433520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433528u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x433528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433528u; }
            if (ctx->pc != 0x433528u) { return; }
        }
        }
    }
    ctx->pc = 0x433528u;
label_433528:
    // 0x433528: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x433528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43352c:
    // 0x43352c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x43352cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_433530:
    // 0x433530: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_433534:
    if (ctx->pc == 0x433534u) {
        ctx->pc = 0x433534u;
            // 0x433534: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x433538u;
        goto label_433538;
    }
    ctx->pc = 0x433530u;
    {
        const bool branch_taken_0x433530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x433534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433530u;
            // 0x433534: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433530) {
            ctx->pc = 0x43350Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43350c;
        }
    }
    ctx->pc = 0x433538u;
label_433538:
    // 0x433538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x433538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43353c:
    // 0x43353c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43353cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_433540:
    // 0x433540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x433540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_433544:
    // 0x433544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_433548:
    // 0x433548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43354c:
    // 0x43354c: 0x3e00008  jr          $ra
label_433550:
    if (ctx->pc == 0x433550u) {
        ctx->pc = 0x433550u;
            // 0x433550: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x433554u;
        goto label_433554;
    }
    ctx->pc = 0x43354Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43354Cu;
            // 0x433550: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433554u;
label_433554:
    // 0x433554: 0x0  nop
    ctx->pc = 0x433554u;
    // NOP
label_433558:
    // 0x433558: 0x0  nop
    ctx->pc = 0x433558u;
    // NOP
label_43355c:
    // 0x43355c: 0x0  nop
    ctx->pc = 0x43355cu;
    // NOP
label_433560:
    // 0x433560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_433564:
    // 0x433564: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x433564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_433568:
    // 0x433568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43356c:
    // 0x43356c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43356cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433570:
    // 0x433570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_433574:
    // 0x433574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x433574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433578:
    // 0x433578: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x433578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43357c:
    // 0x43357c: 0xc08914c  jal         func_224530
label_433580:
    if (ctx->pc == 0x433580u) {
        ctx->pc = 0x433580u;
            // 0x433580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433584u;
        goto label_433584;
    }
    ctx->pc = 0x43357Cu;
    SET_GPR_U32(ctx, 31, 0x433584u);
    ctx->pc = 0x433580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43357Cu;
            // 0x433580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433584u; }
        if (ctx->pc != 0x433584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433584u; }
        if (ctx->pc != 0x433584u) { return; }
    }
    ctx->pc = 0x433584u;
label_433584:
    // 0x433584: 0xc0e393c  jal         func_38E4F0
label_433588:
    if (ctx->pc == 0x433588u) {
        ctx->pc = 0x433588u;
            // 0x433588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43358Cu;
        goto label_43358c;
    }
    ctx->pc = 0x433584u;
    SET_GPR_U32(ctx, 31, 0x43358Cu);
    ctx->pc = 0x433588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433584u;
            // 0x433588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43358Cu; }
        if (ctx->pc != 0x43358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43358Cu; }
        if (ctx->pc != 0x43358Cu) { return; }
    }
    ctx->pc = 0x43358Cu;
label_43358c:
    // 0x43358c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x43358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_433590:
    // 0x433590: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x433590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_433594:
    // 0x433594: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x433594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_433598:
    // 0x433598: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x433598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_43359c:
    // 0x43359c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x43359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4335a0:
    // 0x4335a0: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x4335a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
label_4335a4:
    // 0x4335a4: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x4335a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_4335a8:
    // 0x4335a8: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4335a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4335ac:
    // 0x4335ac: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x4335acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
label_4335b0:
    // 0x4335b0: 0x24a5cdf0  addiu       $a1, $a1, -0x3210
    ctx->pc = 0x4335b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
label_4335b4:
    // 0x4335b4: 0xc04cce8  jal         func_1333A0
label_4335b8:
    if (ctx->pc == 0x4335B8u) {
        ctx->pc = 0x4335B8u;
            // 0x4335b8: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->pc = 0x4335BCu;
        goto label_4335bc;
    }
    ctx->pc = 0x4335B4u;
    SET_GPR_U32(ctx, 31, 0x4335BCu);
    ctx->pc = 0x4335B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4335B4u;
            // 0x4335b8: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4335BCu; }
        if (ctx->pc != 0x4335BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4335BCu; }
        if (ctx->pc != 0x4335BCu) { return; }
    }
    ctx->pc = 0x4335BCu;
label_4335bc:
    // 0x4335bc: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x4335bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_4335c0:
    // 0x4335c0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_4335c4:
    if (ctx->pc == 0x4335C4u) {
        ctx->pc = 0x4335C4u;
            // 0x4335c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4335C8u;
        goto label_4335c8;
    }
    ctx->pc = 0x4335C0u;
    {
        const bool branch_taken_0x4335c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4335c0) {
            ctx->pc = 0x4335C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4335C0u;
            // 0x4335c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4335E8u;
            goto label_4335e8;
        }
    }
    ctx->pc = 0x4335C8u;
label_4335c8:
    // 0x4335c8: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x4335c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
label_4335cc:
    // 0x4335cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4335ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4335d0:
    // 0x4335d0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4335d4:
    // 0x4335d4: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x4335d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_4335d8:
    // 0x4335d8: 0xc057b7c  jal         func_15EDF0
label_4335dc:
    if (ctx->pc == 0x4335DCu) {
        ctx->pc = 0x4335DCu;
            // 0x4335dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4335E0u;
        goto label_4335e0;
    }
    ctx->pc = 0x4335D8u;
    SET_GPR_U32(ctx, 31, 0x4335E0u);
    ctx->pc = 0x4335DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4335D8u;
            // 0x4335dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4335E0u; }
        if (ctx->pc != 0x4335E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4335E0u; }
        if (ctx->pc != 0x4335E0u) { return; }
    }
    ctx->pc = 0x4335E0u;
label_4335e0:
    // 0x4335e0: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x4335e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_4335e4:
    // 0x4335e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4335e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4335e8:
    // 0x4335e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4335e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4335ec:
    // 0x4335ec: 0x3e00008  jr          $ra
label_4335f0:
    if (ctx->pc == 0x4335F0u) {
        ctx->pc = 0x4335F0u;
            // 0x4335f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4335F4u;
        goto label_4335f4;
    }
    ctx->pc = 0x4335ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4335F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4335ECu;
            // 0x4335f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4335F4u;
label_4335f4:
    // 0x4335f4: 0x0  nop
    ctx->pc = 0x4335f4u;
    // NOP
label_4335f8:
    // 0x4335f8: 0x0  nop
    ctx->pc = 0x4335f8u;
    // NOP
label_4335fc:
    // 0x4335fc: 0x0  nop
    ctx->pc = 0x4335fcu;
    // NOP
}
