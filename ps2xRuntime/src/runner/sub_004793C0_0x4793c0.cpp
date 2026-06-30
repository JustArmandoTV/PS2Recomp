#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004793C0
// Address: 0x4793c0 - 0x479490
void sub_004793C0_0x4793c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004793C0_0x4793c0");
#endif

    switch (ctx->pc) {
        case 0x4793c0u: goto label_4793c0;
        case 0x4793c4u: goto label_4793c4;
        case 0x4793c8u: goto label_4793c8;
        case 0x4793ccu: goto label_4793cc;
        case 0x4793d0u: goto label_4793d0;
        case 0x4793d4u: goto label_4793d4;
        case 0x4793d8u: goto label_4793d8;
        case 0x4793dcu: goto label_4793dc;
        case 0x4793e0u: goto label_4793e0;
        case 0x4793e4u: goto label_4793e4;
        case 0x4793e8u: goto label_4793e8;
        case 0x4793ecu: goto label_4793ec;
        case 0x4793f0u: goto label_4793f0;
        case 0x4793f4u: goto label_4793f4;
        case 0x4793f8u: goto label_4793f8;
        case 0x4793fcu: goto label_4793fc;
        case 0x479400u: goto label_479400;
        case 0x479404u: goto label_479404;
        case 0x479408u: goto label_479408;
        case 0x47940cu: goto label_47940c;
        case 0x479410u: goto label_479410;
        case 0x479414u: goto label_479414;
        case 0x479418u: goto label_479418;
        case 0x47941cu: goto label_47941c;
        case 0x479420u: goto label_479420;
        case 0x479424u: goto label_479424;
        case 0x479428u: goto label_479428;
        case 0x47942cu: goto label_47942c;
        case 0x479430u: goto label_479430;
        case 0x479434u: goto label_479434;
        case 0x479438u: goto label_479438;
        case 0x47943cu: goto label_47943c;
        case 0x479440u: goto label_479440;
        case 0x479444u: goto label_479444;
        case 0x479448u: goto label_479448;
        case 0x47944cu: goto label_47944c;
        case 0x479450u: goto label_479450;
        case 0x479454u: goto label_479454;
        case 0x479458u: goto label_479458;
        case 0x47945cu: goto label_47945c;
        case 0x479460u: goto label_479460;
        case 0x479464u: goto label_479464;
        case 0x479468u: goto label_479468;
        case 0x47946cu: goto label_47946c;
        case 0x479470u: goto label_479470;
        case 0x479474u: goto label_479474;
        case 0x479478u: goto label_479478;
        case 0x47947cu: goto label_47947c;
        case 0x479480u: goto label_479480;
        case 0x479484u: goto label_479484;
        case 0x479488u: goto label_479488;
        case 0x47948cu: goto label_47948c;
        default: break;
    }

    ctx->pc = 0x4793c0u;

label_4793c0:
    // 0x4793c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4793c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4793c4:
    // 0x4793c4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4793c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4793c8:
    // 0x4793c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4793c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4793cc:
    // 0x4793cc: 0x2463f300  addiu       $v1, $v1, -0xD00
    ctx->pc = 0x4793ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963968));
label_4793d0:
    // 0x4793d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4793d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4793d4:
    // 0x4793d4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x4793d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4793d8:
    // 0x4793d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4793d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4793dc:
    // 0x4793dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4793e0:
    if (ctx->pc == 0x4793E0u) {
        ctx->pc = 0x4793E0u;
            // 0x4793e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4793E4u;
        goto label_4793e4;
    }
    ctx->pc = 0x4793DCu;
    {
        const bool branch_taken_0x4793dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4793E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4793DCu;
            // 0x4793e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4793dc) {
            ctx->pc = 0x4793ECu;
            goto label_4793ec;
        }
    }
    ctx->pc = 0x4793E4u;
label_4793e4:
    // 0x4793e4: 0x10000025  b           . + 4 + (0x25 << 2)
label_4793e8:
    if (ctx->pc == 0x4793E8u) {
        ctx->pc = 0x4793E8u;
            // 0x4793e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4793ECu;
        goto label_4793ec;
    }
    ctx->pc = 0x4793E4u;
    {
        const bool branch_taken_0x4793e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4793E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4793E4u;
            // 0x4793e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4793e4) {
            ctx->pc = 0x47947Cu;
            goto label_47947c;
        }
    }
    ctx->pc = 0x4793ECu;
label_4793ec:
    // 0x4793ec: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x4793ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4793f0:
    // 0x4793f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4793f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4793f4:
    // 0x4793f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4793f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4793f8:
    // 0x4793f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4793f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4793fc:
    // 0x4793fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_479400:
    // 0x479400: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x479400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_479404:
    // 0x479404: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x479404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_479408:
    // 0x479408: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x479408u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47940c:
    // 0x47940c: 0x0  nop
    ctx->pc = 0x47940cu;
    // NOP
label_479410:
    // 0x479410: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x479410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_479414:
    // 0x479414: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x479414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_479418:
    // 0x479418: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x479418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47941c:
    // 0x47941c: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x47941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
label_479420:
    // 0x479420: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x479420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
label_479424:
    // 0x479424: 0xaca000a8  sw          $zero, 0xA8($a1)
    ctx->pc = 0x479424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
label_479428:
    // 0x479428: 0x8ca300ac  lw          $v1, 0xAC($a1)
    ctx->pc = 0x479428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_47942c:
    // 0x47942c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x47942cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_479430:
    // 0x479430: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x479430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_479434:
    // 0x479434: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_479438:
    if (ctx->pc == 0x479438u) {
        ctx->pc = 0x47943Cu;
        goto label_47943c;
    }
    ctx->pc = 0x479434u;
    {
        const bool branch_taken_0x479434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x479434) {
            ctx->pc = 0x479440u;
            goto label_479440;
        }
    }
    ctx->pc = 0x47943Cu;
label_47943c:
    // 0x47943c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x47943cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_479440:
    // 0x479440: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x479440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_479444:
    // 0x479444: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x479444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_479448:
    // 0x479448: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x479448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_47944c:
    // 0x47944c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x47944cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_479450:
    // 0x479450: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_479454:
    if (ctx->pc == 0x479454u) {
        ctx->pc = 0x479454u;
            // 0x479454: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x479458u;
        goto label_479458;
    }
    ctx->pc = 0x479450u;
    {
        const bool branch_taken_0x479450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479450u;
            // 0x479454: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479450) {
            ctx->pc = 0x479408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_479408;
        }
    }
    ctx->pc = 0x479458u;
label_479458:
    // 0x479458: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x479458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47945c:
    // 0x47945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_479460:
    // 0x479460: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x479460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_479464:
    // 0x479464: 0x320f809  jalr        $t9
label_479468:
    if (ctx->pc == 0x479468u) {
        ctx->pc = 0x479468u;
            // 0x479468: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x47946Cu;
        goto label_47946c;
    }
    ctx->pc = 0x479464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47946Cu);
        ctx->pc = 0x479468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479464u;
            // 0x479468: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47946Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47946Cu; }
            if (ctx->pc != 0x47946Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47946Cu;
label_47946c:
    // 0x47946c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x47946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_479470:
    // 0x479470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_479474:
    // 0x479474: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x479474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_479478:
    // 0x479478: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x479478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_47947c:
    // 0x47947c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47947cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_479480:
    // 0x479480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_479484:
    // 0x479484: 0x3e00008  jr          $ra
label_479488:
    if (ctx->pc == 0x479488u) {
        ctx->pc = 0x479488u;
            // 0x479488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47948Cu;
        goto label_47948c;
    }
    ctx->pc = 0x479484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479484u;
            // 0x479488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47948Cu;
label_47948c:
    // 0x47948c: 0x0  nop
    ctx->pc = 0x47948cu;
    // NOP
}
