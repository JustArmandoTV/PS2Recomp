#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00104358
// Address: 0x104358 - 0x104a60
void sub_00104358_0x104358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104358_0x104358");
#endif

    switch (ctx->pc) {
        case 0x104474u: goto label_104474;
        case 0x1044b4u: goto label_1044b4;
        case 0x1044e0u: goto label_1044e0;
        case 0x104520u: goto label_104520;
        case 0x10455cu: goto label_10455c;
        case 0x10459cu: goto label_10459c;
        case 0x1045e4u: goto label_1045e4;
        case 0x1046e8u: goto label_1046e8;
        case 0x104788u: goto label_104788;
        case 0x1047d0u: goto label_1047d0;
        case 0x104820u: goto label_104820;
        case 0x104838u: goto label_104838;
        case 0x1048dcu: goto label_1048dc;
        case 0x10491cu: goto label_10491c;
        case 0x104974u: goto label_104974;
        case 0x1049ccu: goto label_1049cc;
        case 0x104a14u: goto label_104a14;
        case 0x104a2cu: goto label_104a2c;
        default: break;
    }

    ctx->pc = 0x104358u;

    // 0x104358: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x104358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x10435c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104360: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x104360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x104364: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x104364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x104368: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x104368u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10436c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x10436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x104370: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x104370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104374: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x104374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x104378: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x104378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10437c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x10437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x104380: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x104380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104384: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x104384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x104388: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x104388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10438c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x10438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x104390: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x104390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104394: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x104394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x104398: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10439c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x10439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1043a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1043a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043a4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x1043a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x1043a8: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x1043a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x1043ac: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1043acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1043b0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1043b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1043b4: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x1043b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x1043b8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1043b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1043bc: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1043BCu;
    {
        const bool branch_taken_0x1043bc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1043C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1043BCu;
            // 0x1043c0: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043bc) {
            ctx->pc = 0x1043D4u;
            goto label_1043d4;
        }
    }
    ctx->pc = 0x1043C4u;
    // 0x1043c4: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x1043c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1043c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1043c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1043cc: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1043CCu;
    {
        const bool branch_taken_0x1043cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1043D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1043CCu;
            // 0x1043d0: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043cc) {
            ctx->pc = 0x104840u;
            goto label_104840;
        }
    }
    ctx->pc = 0x1043D4u;
label_1043d4:
    // 0x1043d4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1043d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1043d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1043d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1043dc: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1043DCu;
    {
        const bool branch_taken_0x1043dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1043E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1043DCu;
            // 0x1043e0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043dc) {
            ctx->pc = 0x1045ECu;
            goto label_1045ec;
        }
    }
    ctx->pc = 0x1043E4u;
    // 0x1043e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1043e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1043e8: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1043E8u;
    {
        const bool branch_taken_0x1043e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1043e8) {
            ctx->pc = 0x1043ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1043E8u;
            // 0x1043ec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1043FCu;
            goto label_1043fc;
        }
    }
    ctx->pc = 0x1043F0u;
    // 0x1043f0: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x1043F0u;
    {
        const bool branch_taken_0x1043f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1043f0) {
            ctx->pc = 0x104430u;
            goto label_104430;
        }
    }
    ctx->pc = 0x1043F8u;
    // 0x1043f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1043f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1043fc:
    // 0x1043fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1043fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104400: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104408: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x10440c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10440cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104410: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104418: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x104418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10441c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x10441cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104420: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104424: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104428: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x104428u;
    {
        const bool branch_taken_0x104428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104428u;
            // 0x10442c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104428) {
            ctx->pc = 0x104818u;
            goto label_104818;
        }
    }
    ctx->pc = 0x104430u;
label_104430:
    // 0x104430: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x104430u;
    {
        const bool branch_taken_0x104430 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x104434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104430u;
            // 0x104434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104430) {
            ctx->pc = 0x1044BCu;
            goto label_1044bc;
        }
    }
    ctx->pc = 0x104438u;
    // 0x104438: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x104438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10443c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104444: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104448: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10444c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x10444cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104454: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104458: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10445c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104460: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104464: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x104464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x104468: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x104468u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10446c: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x10446Cu;
    SET_GPR_U32(ctx, 31, 0x104474u);
    ctx->pc = 0x104470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10446Cu;
            // 0x104470: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104474u; }
        if (ctx->pc != 0x104474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104474u; }
        if (ctx->pc != 0x104474u) { return; }
    }
    ctx->pc = 0x104474u;
label_104474:
    // 0x104474: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x104474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x104478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10447c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x10447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x104480: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x104480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104484: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104488: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10448c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x10448cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x104490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104494: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104498: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10449c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10449cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1044a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1044a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044a4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1044a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1044a8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1044a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044ac: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x1044ACu;
    SET_GPR_U32(ctx, 31, 0x1044B4u);
    ctx->pc = 0x1044B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1044ACu;
            // 0x1044b0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044B4u; }
        if (ctx->pc != 0x1044B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044B4u; }
        if (ctx->pc != 0x1044B4u) { return; }
    }
    ctx->pc = 0x1044B4u;
label_1044b4:
    // 0x1044b4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1044B4u;
    {
        const bool branch_taken_0x1044b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1044B4u;
            // 0x1044b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044b4) {
            ctx->pc = 0x10483Cu;
            goto label_10483c;
        }
    }
    ctx->pc = 0x1044BCu;
label_1044bc:
    // 0x1044bc: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1044BCu;
    {
        const bool branch_taken_0x1044bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1044C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1044BCu;
            // 0x1044c0: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044bc) {
            ctx->pc = 0x1045D4u;
            goto label_1045d4;
        }
    }
    ctx->pc = 0x1044C4u;
    // 0x1044c4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1044c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1044c8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1044c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044cc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1044ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1044d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1044d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044d4: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x1044d4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x1044d8: 0xc041074  jal         func_1041D0
    ctx->pc = 0x1044D8u;
    SET_GPR_U32(ctx, 31, 0x1044E0u);
    ctx->pc = 0x1044DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1044D8u;
            // 0x1044dc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041D0u;
    if (runtime->hasFunction(0x1041D0u)) {
        auto targetFn = runtime->lookupFunction(0x1041D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044E0u; }
        if (ctx->pc != 0x1044E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001041D0_0x1041d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044E0u; }
        if (ctx->pc != 0x1044E0u) { return; }
    }
    ctx->pc = 0x1044E0u;
label_1044e0:
    // 0x1044e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1044e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1044e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1044e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1044e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1044ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1044ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044f0: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1044f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1044f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1044f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1044f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1044f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1044fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1044fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104500: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104508: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x104508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x10450c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10450cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104510: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x104510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x104514: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104518: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x104518u;
    SET_GPR_U32(ctx, 31, 0x104520u);
    ctx->pc = 0x10451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104518u;
            // 0x10451c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104520u; }
        if (ctx->pc != 0x104520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104520u; }
        if (ctx->pc != 0x104520u) { return; }
    }
    ctx->pc = 0x104520u;
label_104520:
    // 0x104520: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x104520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104528: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x104528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10452c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104530: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104538: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10453c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10453cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104540: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x104540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x104544: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104548: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x104548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x10454c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x10454cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104550: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x104550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x104554: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x104554u;
    SET_GPR_U32(ctx, 31, 0x10455Cu);
    ctx->pc = 0x104558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104554u;
            // 0x104558: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10455Cu; }
        if (ctx->pc != 0x10455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10455Cu; }
        if (ctx->pc != 0x10455Cu) { return; }
    }
    ctx->pc = 0x10455Cu;
label_10455c:
    // 0x10455c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104564: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x104564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104568: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10456c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x10456cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104570: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104574: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104578: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10457c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10457cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104584: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x104584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x104588: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10458c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x104590: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104594: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x104594u;
    SET_GPR_U32(ctx, 31, 0x10459Cu);
    ctx->pc = 0x104598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104594u;
            // 0x104598: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10459Cu; }
        if (ctx->pc != 0x10459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10459Cu; }
        if (ctx->pc != 0x10459Cu) { return; }
    }
    ctx->pc = 0x10459Cu;
label_10459c:
    // 0x10459c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x10459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1045a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1045a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045a4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1045a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1045a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1045a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045ac: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1045acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1045b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1045b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1045b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1045b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1045b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1045b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1045bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1045c0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1045c4: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1045c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1045c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1045c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045cc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1045CCu;
    {
        const bool branch_taken_0x1045cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1045CCu;
            // 0x1045d0: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045cc) {
            ctx->pc = 0x104818u;
            goto label_104818;
        }
    }
    ctx->pc = 0x1045D4u;
label_1045d4:
    // 0x1045d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1045d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045d8: 0x24a5e630  addiu       $a1, $a1, -0x19D0
    ctx->pc = 0x1045d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960688));
    // 0x1045dc: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x1045DCu;
    SET_GPR_U32(ctx, 31, 0x1045E4u);
    ctx->pc = 0x1045E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1045DCu;
            // 0x1045e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045E4u; }
        if (ctx->pc != 0x1045E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045E4u; }
        if (ctx->pc != 0x1045E4u) { return; }
    }
    ctx->pc = 0x1045E4u;
label_1045e4:
    // 0x1045e4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1045E4u;
    {
        const bool branch_taken_0x1045e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1045E4u;
            // 0x1045e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045e4) {
            ctx->pc = 0x10483Cu;
            goto label_10483c;
        }
    }
    ctx->pc = 0x1045ECu;
label_1045ec:
    // 0x1045ec: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x1045ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x1045f0: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x1045f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1045f4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1045f4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1045f8: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x1045f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1045fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1045fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104600: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x104600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x104604: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x104604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104608: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x104608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x10460c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x10460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x104610: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x104610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x104614: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x104614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x104618: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x104618u;
    {
        const bool branch_taken_0x104618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x10461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104618u;
            // 0x10461c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104618) {
            ctx->pc = 0x104638u;
            goto label_104638;
        }
    }
    ctx->pc = 0x104620u;
    // 0x104620: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x104620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x104624: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104624u;
    {
        const bool branch_taken_0x104624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104624u;
            // 0x104628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104624) {
            ctx->pc = 0x10463Cu;
            goto label_10463c;
        }
    }
    ctx->pc = 0x10462Cu;
    // 0x10462c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x10462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104630: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x104630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x104634: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x104634u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_104638:
    // 0x104638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10463c:
    // 0x10463c: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10463Cu;
    {
        const bool branch_taken_0x10463c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x10463c) {
            ctx->pc = 0x104640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10463Cu;
            // 0x104640: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104650u;
            goto label_104650;
        }
    }
    ctx->pc = 0x104644u;
    // 0x104644: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x104644u;
    {
        const bool branch_taken_0x104644 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x104648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104644u;
            // 0x104648: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104644) {
            ctx->pc = 0x10468Cu;
            goto label_10468c;
        }
    }
    ctx->pc = 0x10464Cu;
    // 0x10464c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_104650:
    // 0x104650: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x104650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x104654: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10465c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104664: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x104664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x104668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10466c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x10466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x104670: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x104670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x104674: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x104674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x104678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10467c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104684: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x104684u;
    {
        const bool branch_taken_0x104684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104684u;
            // 0x104688: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104684) {
            ctx->pc = 0x10480Cu;
            goto label_10480c;
        }
    }
    ctx->pc = 0x10468Cu;
label_10468c:
    // 0x10468c: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x10468Cu;
    {
        const bool branch_taken_0x10468c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x104690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10468Cu;
            // 0x104690: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10468c) {
            ctx->pc = 0x10475Cu;
            goto label_10475c;
        }
    }
    ctx->pc = 0x104694u;
    // 0x104694: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104698: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x104698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x10469c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x10469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1046a0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1046a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1046a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1046a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1046a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1046a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1046ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1046acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1046b0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1046b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1046b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1046b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1046b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1046b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1046bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1046bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1046c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1046c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1046c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1046ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1046d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1046d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1046d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1046d8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1046d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1046dc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1046dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046e0: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x1046E0u;
    SET_GPR_U32(ctx, 31, 0x1046E8u);
    ctx->pc = 0x1046E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1046E0u;
            // 0x1046e4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1046E8u; }
        if (ctx->pc != 0x1046E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1046E8u; }
        if (ctx->pc != 0x1046E8u) { return; }
    }
    ctx->pc = 0x1046E8u;
label_1046e8:
    // 0x1046e8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1046e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1046ec: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1046ECu;
    {
        const bool branch_taken_0x1046ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1046F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1046ECu;
            // 0x1046f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046ec) {
            ctx->pc = 0x104710u;
            goto label_104710;
        }
    }
    ctx->pc = 0x1046F4u;
    // 0x1046f4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1046f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1046f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1046F8u;
    {
        const bool branch_taken_0x1046f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1046F8u;
            // 0x1046fc: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046f8) {
            ctx->pc = 0x104714u;
            goto label_104714;
        }
    }
    ctx->pc = 0x104700u;
    // 0x104700: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x104700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104704: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x104704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x104708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104708u;
    {
        const bool branch_taken_0x104708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104708u;
            // 0x10470c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104708) {
            ctx->pc = 0x104714u;
            goto label_104714;
        }
    }
    ctx->pc = 0x104710u;
label_104710:
    // 0x104710: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x104710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_104714:
    // 0x104714: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x104714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x104718: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x104718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10471c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x10471cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x104720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10472c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104730: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x104730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x104734: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104738: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10473c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x10473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x104740: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104748: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x104748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10474c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10474cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104750: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104754: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x104754u;
    {
        const bool branch_taken_0x104754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104754u;
            // 0x104758: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104754) {
            ctx->pc = 0x104818u;
            goto label_104818;
        }
    }
    ctx->pc = 0x10475Cu;
label_10475c:
    // 0x10475c: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10475Cu;
    {
        const bool branch_taken_0x10475c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x104760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10475Cu;
            // 0x104760: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10475c) {
            ctx->pc = 0x104828u;
            goto label_104828;
        }
    }
    ctx->pc = 0x104764u;
    // 0x104764: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x104764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x104768: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x104768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10476c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x10476cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104770: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x104770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104774: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x104774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104778: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x104778u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x10477c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104780: 0xc041074  jal         func_1041D0
    ctx->pc = 0x104780u;
    SET_GPR_U32(ctx, 31, 0x104788u);
    ctx->pc = 0x104784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104780u;
            // 0x104784: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041D0u;
    if (runtime->hasFunction(0x1041D0u)) {
        auto targetFn = runtime->lookupFunction(0x1041D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104788u; }
        if (ctx->pc != 0x104788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001041D0_0x1041d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104788u; }
        if (ctx->pc != 0x104788u) { return; }
    }
    ctx->pc = 0x104788u;
label_104788:
    // 0x104788: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10478c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x10478cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x104790: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x104790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104794: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104798: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x104798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10479c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1047a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1047a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1047a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047a8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1047a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1047ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1047acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1047b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1047b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1047b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1047b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1047bc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1047bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1047c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1047c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1047c4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1047c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047c8: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x1047C8u;
    SET_GPR_U32(ctx, 31, 0x1047D0u);
    ctx->pc = 0x1047CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1047C8u;
            // 0x1047cc: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1047D0u; }
        if (ctx->pc != 0x1047D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1047D0u; }
        if (ctx->pc != 0x1047D0u) { return; }
    }
    ctx->pc = 0x1047D0u;
label_1047d0:
    // 0x1047d0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1047d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1047d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1047d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1047d8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1047dc: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1047dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1047e0: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1047e0u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1047e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1047e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1047e8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1047e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1047ec: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1047ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1047f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1047f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1047f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1047f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1047f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1047f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1047fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x104800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104804: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10480c:
    // 0x10480c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10480cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104810: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x104810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104814: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_104818:
    // 0x104818: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x104818u;
    SET_GPR_U32(ctx, 31, 0x104820u);
    ctx->pc = 0x10481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104818u;
            // 0x10481c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104820u; }
        if (ctx->pc != 0x104820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104820u; }
        if (ctx->pc != 0x104820u) { return; }
    }
    ctx->pc = 0x104820u;
label_104820:
    // 0x104820: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104820u;
    {
        const bool branch_taken_0x104820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104820u;
            // 0x104824: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104820) {
            ctx->pc = 0x10483Cu;
            goto label_10483c;
        }
    }
    ctx->pc = 0x104828u;
label_104828:
    // 0x104828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10482c: 0x24a5e650  addiu       $a1, $a1, -0x19B0
    ctx->pc = 0x10482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960720));
    // 0x104830: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x104830u;
    SET_GPR_U32(ctx, 31, 0x104838u);
    ctx->pc = 0x104834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104830u;
            // 0x104834: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104838u; }
        if (ctx->pc != 0x104838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104838u; }
        if (ctx->pc != 0x104838u) { return; }
    }
    ctx->pc = 0x104838u;
label_104838:
    // 0x104838: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x104838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10483c:
    // 0x10483c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_104840:
    // 0x104840: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x104840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x104844: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x104844u;
    {
        const bool branch_taken_0x104844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104844u;
            // 0x104848: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104844) {
            ctx->pc = 0x104A2Cu;
            goto label_104a2c;
        }
    }
    ctx->pc = 0x10484Cu;
    // 0x10484c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x10484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x104850: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x104850u;
    {
        const bool branch_taken_0x104850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104850u;
            // 0x104854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104850) {
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x104858u;
    // 0x104858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10485c: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10485Cu;
    {
        const bool branch_taken_0x10485c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x104860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10485Cu;
            // 0x104860: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10485c) {
            ctx->pc = 0x10489Cu;
            goto label_10489c;
        }
    }
    ctx->pc = 0x104864u;
    // 0x104864: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x104868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10486c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x104870: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104870u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104874: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104878: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x104878u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10487c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104884: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x104884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x104888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10488c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10488cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104890: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104894: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x104894u;
    {
        const bool branch_taken_0x104894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104894u;
            // 0x104898: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104894) {
            ctx->pc = 0x104914u;
            goto label_104914;
        }
    }
    ctx->pc = 0x10489Cu;
label_10489c:
    // 0x10489c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1048a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1048a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048a4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1048a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1048a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1048a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048ac: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1048b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1048b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1048b4: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1048b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1048b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1048c0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1048c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1048c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1048c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1048c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1048c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048cc: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1048ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1048d0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1048d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048d4: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x1048D4u;
    SET_GPR_U32(ctx, 31, 0x1048DCu);
    ctx->pc = 0x1048D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1048D4u;
            // 0x1048d8: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1048DCu; }
        if (ctx->pc != 0x1048DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1048DCu; }
        if (ctx->pc != 0x1048DCu) { return; }
    }
    ctx->pc = 0x1048DCu;
label_1048dc:
    // 0x1048dc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1048dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1048e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1048e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048e4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1048e8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1048e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1048ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1048f0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1048f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1048f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1048f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1048f8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1048f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1048fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104900: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x104900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104904: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x104904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x104908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10490c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10490cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104910: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x104910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_104914:
    // 0x104914: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x104914u;
    SET_GPR_U32(ctx, 31, 0x10491Cu);
    ctx->pc = 0x104918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104914u;
            // 0x104918: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10491Cu; }
        if (ctx->pc != 0x10491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10491Cu; }
        if (ctx->pc != 0x10491Cu) { return; }
    }
    ctx->pc = 0x10491Cu;
label_10491c:
    // 0x10491c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10491Cu;
    {
        const bool branch_taken_0x10491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10491Cu;
            // 0x104920: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10491c) {
            ctx->pc = 0x104A30u;
            goto label_104a30;
        }
    }
    ctx->pc = 0x104924u;
label_104924:
    // 0x104924: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x104924u;
    {
        const bool branch_taken_0x104924 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x104928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104924u;
            // 0x104928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104924) {
            ctx->pc = 0x10497Cu;
            goto label_10497c;
        }
    }
    ctx->pc = 0x10492Cu;
    // 0x10492c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x10492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x104930: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x104930u;
    {
        const bool branch_taken_0x104930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104930) {
            ctx->pc = 0x104934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104930u;
            // 0x104934: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10493Cu;
            goto label_10493c;
        }
    }
    ctx->pc = 0x104938u;
    // 0x104938: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_10493c:
    // 0x10493c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x104940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104944: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x104944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x104948: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104948u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10494c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10494cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104950: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x104950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104954: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10495c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x104960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104964: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10496c: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x10496Cu;
    SET_GPR_U32(ctx, 31, 0x104974u);
    ctx->pc = 0x104970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10496Cu;
            // 0x104970: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104974u; }
        if (ctx->pc != 0x104974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104974u; }
        if (ctx->pc != 0x104974u) { return; }
    }
    ctx->pc = 0x104974u;
label_104974:
    // 0x104974: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x104974u;
    {
        const bool branch_taken_0x104974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104974u;
            // 0x104978: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104974) {
            ctx->pc = 0x104A30u;
            goto label_104a30;
        }
    }
    ctx->pc = 0x10497Cu;
label_10497c:
    // 0x10497c: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10497Cu;
    {
        const bool branch_taken_0x10497c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x104980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10497Cu;
            // 0x104980: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10497c) {
            ctx->pc = 0x104A1Cu;
            goto label_104a1c;
        }
    }
    ctx->pc = 0x104984u;
    // 0x104984: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x104984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x104988: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x104988u;
    {
        const bool branch_taken_0x104988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104988) {
            ctx->pc = 0x10498Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104988u;
            // 0x10498c: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104994u;
            goto label_104994;
        }
    }
    ctx->pc = 0x104990u;
    // 0x104990: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x104990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_104994:
    // 0x104994: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x104994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x104998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10499c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1049a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1049a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1049a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1049a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1049a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049ac: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1049acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1049b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1049b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1049b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1049b8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1049b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1049bc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1049bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1049c0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1049c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049c4: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x1049C4u;
    SET_GPR_U32(ctx, 31, 0x1049CCu);
    ctx->pc = 0x1049C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1049C4u;
            // 0x1049c8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1049CCu; }
        if (ctx->pc != 0x1049CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1049CCu; }
        if (ctx->pc != 0x1049CCu) { return; }
    }
    ctx->pc = 0x1049CCu;
label_1049cc:
    // 0x1049cc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x1049ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1049d0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1049D0u;
    {
        const bool branch_taken_0x1049d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1049d0) {
            ctx->pc = 0x1049D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1049D0u;
            // 0x1049d4: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1049DCu;
            goto label_1049dc;
        }
    }
    ctx->pc = 0x1049D8u;
    // 0x1049d8: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x1049d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_1049dc:
    // 0x1049dc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1049e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1049e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049e4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1049e8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1049e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049ec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1049f0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1049f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1049f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1049f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1049f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049fc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1049fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x104a00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a04: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104a08: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104a0c: 0xc04132c  jal         func_104CB0
    ctx->pc = 0x104A0Cu;
    SET_GPR_U32(ctx, 31, 0x104A14u);
    ctx->pc = 0x104A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104A0Cu;
            // 0x104a10: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104CB0u;
    if (runtime->hasFunction(0x104CB0u)) {
        auto targetFn = runtime->lookupFunction(0x104CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A14u; }
        if (ctx->pc != 0x104A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104CB0_0x104cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A14u; }
        if (ctx->pc != 0x104A14u) { return; }
    }
    ctx->pc = 0x104A14u;
label_104a14:
    // 0x104a14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104A14u;
    {
        const bool branch_taken_0x104a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104A14u;
            // 0x104a18: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a14) {
            ctx->pc = 0x104A30u;
            goto label_104a30;
        }
    }
    ctx->pc = 0x104A1Cu;
label_104a1c:
    // 0x104a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a20: 0x24a5e670  addiu       $a1, $a1, -0x1990
    ctx->pc = 0x104a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960752));
    // 0x104a24: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x104A24u;
    SET_GPR_U32(ctx, 31, 0x104A2Cu);
    ctx->pc = 0x104A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104A24u;
            // 0x104a28: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A2Cu; }
        if (ctx->pc != 0x104A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A2Cu; }
        if (ctx->pc != 0x104A2Cu) { return; }
    }
    ctx->pc = 0x104A2Cu;
label_104a2c:
    // 0x104a2c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x104a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_104a30:
    // 0x104a30: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x104a30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x104a34: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x104a34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x104a38: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x104a38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x104a3c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x104a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x104a40: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x104a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104a44: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x104a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104a48: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x104a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104a4c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x104a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104a50: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x104a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104a54: 0x3e00008  jr          $ra
    ctx->pc = 0x104A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104A54u;
            // 0x104a58: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104A5Cu;
    // 0x104a5c: 0x0  nop
    ctx->pc = 0x104a5cu;
    // NOP
}
