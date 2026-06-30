#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547370
// Address: 0x547370 - 0x547650
void sub_00547370_0x547370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547370_0x547370");
#endif

    switch (ctx->pc) {
        case 0x5473e0u: goto label_5473e0;
        case 0x5473fcu: goto label_5473fc;
        case 0x5474e0u: goto label_5474e0;
        case 0x5474fcu: goto label_5474fc;
        case 0x5475a0u: goto label_5475a0;
        case 0x5475b8u: goto label_5475b8;
        case 0x547614u: goto label_547614;
        case 0x547620u: goto label_547620;
        default: break;
    }

    ctx->pc = 0x547370u;

    // 0x547370: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x547370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x547374: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x547374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x547378: 0x2463b6f8  addiu       $v1, $v1, -0x4908
    ctx->pc = 0x547378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948600));
    // 0x54737c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x54737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x547380: 0x3e00008  jr          $ra
    ctx->pc = 0x547380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547380u;
            // 0x547384: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547388u;
    // 0x547388: 0x0  nop
    ctx->pc = 0x547388u;
    // NOP
    // 0x54738c: 0x0  nop
    ctx->pc = 0x54738cu;
    // NOP
    // 0x547390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x547390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x547394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x547394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x547398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x547398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x54739c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5473a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5473a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5473a4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x5473A4u;
    {
        const bool branch_taken_0x5473a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5473A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5473A4u;
            // 0x5473a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5473a4) {
            ctx->pc = 0x5473FCu;
            goto label_5473fc;
        }
    }
    ctx->pc = 0x5473ACu;
    // 0x5473ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5473acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5473b0: 0x244278e0  addiu       $v0, $v0, 0x78E0
    ctx->pc = 0x5473b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x5473b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x5473B4u;
    {
        const bool branch_taken_0x5473b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5473B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5473B4u;
            // 0x5473b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5473b4) {
            ctx->pc = 0x5473E4u;
            goto label_5473e4;
        }
    }
    ctx->pc = 0x5473BCu;
    // 0x5473bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5473bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5473c0: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x5473c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
    // 0x5473c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x5473c8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x5473c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x5473cc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x5473CCu;
    {
        const bool branch_taken_0x5473cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5473cc) {
            ctx->pc = 0x5473D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5473CCu;
            // 0x5473d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5473E8u;
            goto label_5473e8;
        }
    }
    ctx->pc = 0x5473D4u;
    // 0x5473d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5473d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5473d8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x5473D8u;
    SET_GPR_U32(ctx, 31, 0x5473E0u);
    ctx->pc = 0x5473DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5473D8u;
            // 0x5473dc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5473E0u; }
        if (ctx->pc != 0x5473E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5473E0u; }
        if (ctx->pc != 0x5473E0u) { return; }
    }
    ctx->pc = 0x5473E0u;
label_5473e0:
    // 0x5473e0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x5473e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_5473e4:
    // 0x5473e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5473e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5473e8:
    // 0x5473e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5473e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5473ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5473ECu;
    {
        const bool branch_taken_0x5473ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5473ec) {
            ctx->pc = 0x5473F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5473ECu;
            // 0x5473f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547400u;
            goto label_547400;
        }
    }
    ctx->pc = 0x5473F4u;
    // 0x5473f4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5473F4u;
    SET_GPR_U32(ctx, 31, 0x5473FCu);
    ctx->pc = 0x5473F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5473F4u;
            // 0x5473f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5473FCu; }
        if (ctx->pc != 0x5473FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5473FCu; }
        if (ctx->pc != 0x5473FCu) { return; }
    }
    ctx->pc = 0x5473FCu;
label_5473fc:
    // 0x5473fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5473fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_547400:
    // 0x547400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x547400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x547404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x547404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x547408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x547408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x54740c: 0x3e00008  jr          $ra
    ctx->pc = 0x54740Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54740Cu;
            // 0x547410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547414u;
    // 0x547414: 0x0  nop
    ctx->pc = 0x547414u;
    // NOP
    // 0x547418: 0x0  nop
    ctx->pc = 0x547418u;
    // NOP
    // 0x54741c: 0x0  nop
    ctx->pc = 0x54741cu;
    // NOP
    // 0x547420: 0x3e00008  jr          $ra
    ctx->pc = 0x547420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547428u;
    // 0x547428: 0x0  nop
    ctx->pc = 0x547428u;
    // NOP
    // 0x54742c: 0x0  nop
    ctx->pc = 0x54742cu;
    // NOP
    // 0x547430: 0x3e00008  jr          $ra
    ctx->pc = 0x547430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547430u;
            // 0x547434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547438u;
    // 0x547438: 0x0  nop
    ctx->pc = 0x547438u;
    // NOP
    // 0x54743c: 0x0  nop
    ctx->pc = 0x54743cu;
    // NOP
    // 0x547440: 0x3e00008  jr          $ra
    ctx->pc = 0x547440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547440u;
            // 0x547444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547448u;
    // 0x547448: 0x0  nop
    ctx->pc = 0x547448u;
    // NOP
    // 0x54744c: 0x0  nop
    ctx->pc = 0x54744cu;
    // NOP
    // 0x547450: 0x3e00008  jr          $ra
    ctx->pc = 0x547450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547450u;
            // 0x547454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547458u;
    // 0x547458: 0x0  nop
    ctx->pc = 0x547458u;
    // NOP
    // 0x54745c: 0x0  nop
    ctx->pc = 0x54745cu;
    // NOP
    // 0x547460: 0x3e00008  jr          $ra
    ctx->pc = 0x547460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547460u;
            // 0x547464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547468u;
    // 0x547468: 0x0  nop
    ctx->pc = 0x547468u;
    // NOP
    // 0x54746c: 0x0  nop
    ctx->pc = 0x54746cu;
    // NOP
    // 0x547470: 0x3e00008  jr          $ra
    ctx->pc = 0x547470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547478u;
    // 0x547478: 0x0  nop
    ctx->pc = 0x547478u;
    // NOP
    // 0x54747c: 0x0  nop
    ctx->pc = 0x54747cu;
    // NOP
    // 0x547480: 0x3e00008  jr          $ra
    ctx->pc = 0x547480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547488u;
    // 0x547488: 0x0  nop
    ctx->pc = 0x547488u;
    // NOP
    // 0x54748c: 0x0  nop
    ctx->pc = 0x54748cu;
    // NOP
    // 0x547490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x547490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x547494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x547494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x547498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x547498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x54749c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5474a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5474a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5474a4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x5474A4u;
    {
        const bool branch_taken_0x5474a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5474A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5474A4u;
            // 0x5474a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5474a4) {
            ctx->pc = 0x5474FCu;
            goto label_5474fc;
        }
    }
    ctx->pc = 0x5474ACu;
    // 0x5474ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5474acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5474b0: 0x24427920  addiu       $v0, $v0, 0x7920
    ctx->pc = 0x5474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31008));
    // 0x5474b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x5474B4u;
    {
        const bool branch_taken_0x5474b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5474B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5474B4u;
            // 0x5474b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5474b4) {
            ctx->pc = 0x5474E4u;
            goto label_5474e4;
        }
    }
    ctx->pc = 0x5474BCu;
    // 0x5474bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5474bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5474c0: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x5474c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
    // 0x5474c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5474c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x5474c8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x5474c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x5474cc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x5474CCu;
    {
        const bool branch_taken_0x5474cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5474cc) {
            ctx->pc = 0x5474D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5474CCu;
            // 0x5474d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5474E8u;
            goto label_5474e8;
        }
    }
    ctx->pc = 0x5474D4u;
    // 0x5474d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5474d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5474d8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x5474D8u;
    SET_GPR_U32(ctx, 31, 0x5474E0u);
    ctx->pc = 0x5474DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5474D8u;
            // 0x5474dc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5474E0u; }
        if (ctx->pc != 0x5474E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5474E0u; }
        if (ctx->pc != 0x5474E0u) { return; }
    }
    ctx->pc = 0x5474E0u;
label_5474e0:
    // 0x5474e0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x5474e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_5474e4:
    // 0x5474e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5474e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5474e8:
    // 0x5474e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5474e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5474ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5474ECu;
    {
        const bool branch_taken_0x5474ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5474ec) {
            ctx->pc = 0x5474F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5474ECu;
            // 0x5474f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547500u;
            goto label_547500;
        }
    }
    ctx->pc = 0x5474F4u;
    // 0x5474f4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5474F4u;
    SET_GPR_U32(ctx, 31, 0x5474FCu);
    ctx->pc = 0x5474F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5474F4u;
            // 0x5474f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5474FCu; }
        if (ctx->pc != 0x5474FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5474FCu; }
        if (ctx->pc != 0x5474FCu) { return; }
    }
    ctx->pc = 0x5474FCu;
label_5474fc:
    // 0x5474fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5474fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_547500:
    // 0x547500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x547500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x547504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x547504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x547508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x547508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x54750c: 0x3e00008  jr          $ra
    ctx->pc = 0x54750Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54750Cu;
            // 0x547510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547514u;
    // 0x547514: 0x0  nop
    ctx->pc = 0x547514u;
    // NOP
    // 0x547518: 0x0  nop
    ctx->pc = 0x547518u;
    // NOP
    // 0x54751c: 0x0  nop
    ctx->pc = 0x54751cu;
    // NOP
    // 0x547520: 0x3e00008  jr          $ra
    ctx->pc = 0x547520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547520u;
            // 0x547524: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547528u;
    // 0x547528: 0x0  nop
    ctx->pc = 0x547528u;
    // NOP
    // 0x54752c: 0x0  nop
    ctx->pc = 0x54752cu;
    // NOP
    // 0x547530: 0x3e00008  jr          $ra
    ctx->pc = 0x547530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547530u;
            // 0x547534: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547538u;
    // 0x547538: 0x0  nop
    ctx->pc = 0x547538u;
    // NOP
    // 0x54753c: 0x0  nop
    ctx->pc = 0x54753cu;
    // NOP
    // 0x547540: 0x3e00008  jr          $ra
    ctx->pc = 0x547540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547540u;
            // 0x547544: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547548u;
    // 0x547548: 0x0  nop
    ctx->pc = 0x547548u;
    // NOP
    // 0x54754c: 0x0  nop
    ctx->pc = 0x54754cu;
    // NOP
    // 0x547550: 0x3e00008  jr          $ra
    ctx->pc = 0x547550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547550u;
            // 0x547554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547558u;
    // 0x547558: 0x0  nop
    ctx->pc = 0x547558u;
    // NOP
    // 0x54755c: 0x0  nop
    ctx->pc = 0x54755cu;
    // NOP
    // 0x547560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x547560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x547564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x547564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x547568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x547568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x54756c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x547570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x547570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547574: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x547574u;
    {
        const bool branch_taken_0x547574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x547578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547574u;
            // 0x547578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547574) {
            ctx->pc = 0x5475B8u;
            goto label_5475b8;
        }
    }
    ctx->pc = 0x54757Cu;
    // 0x54757c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x54757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x547580: 0x244279a0  addiu       $v0, $v0, 0x79A0
    ctx->pc = 0x547580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31136));
    // 0x547584: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x547584u;
    {
        const bool branch_taken_0x547584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x547588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547584u;
            // 0x547588: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547584) {
            ctx->pc = 0x5475A0u;
            goto label_5475a0;
        }
    }
    ctx->pc = 0x54758Cu;
    // 0x54758c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x54758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x547590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x547590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547594: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x547594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x547598: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x547598u;
    SET_GPR_U32(ctx, 31, 0x5475A0u);
    ctx->pc = 0x54759Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547598u;
            // 0x54759c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5475A0u; }
        if (ctx->pc != 0x5475A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5475A0u; }
        if (ctx->pc != 0x5475A0u) { return; }
    }
    ctx->pc = 0x5475A0u;
label_5475a0:
    // 0x5475a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5475a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x5475a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5475a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5475a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5475A8u;
    {
        const bool branch_taken_0x5475a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5475a8) {
            ctx->pc = 0x5475ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5475A8u;
            // 0x5475ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5475BCu;
            goto label_5475bc;
        }
    }
    ctx->pc = 0x5475B0u;
    // 0x5475b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5475B0u;
    SET_GPR_U32(ctx, 31, 0x5475B8u);
    ctx->pc = 0x5475B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5475B0u;
            // 0x5475b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5475B8u; }
        if (ctx->pc != 0x5475B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5475B8u; }
        if (ctx->pc != 0x5475B8u) { return; }
    }
    ctx->pc = 0x5475B8u;
label_5475b8:
    // 0x5475b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5475b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5475bc:
    // 0x5475bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5475bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5475c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5475c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5475c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5475c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5475c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5475C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5475CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5475C8u;
            // 0x5475cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5475D0u;
    // 0x5475d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5475d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5475d4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x5475d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x5475d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5475d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5475dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5475dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5475e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5475e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5475e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5475e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5475e8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x5475e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x5475ec: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5475ECu;
    {
        const bool branch_taken_0x5475ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x5475F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5475ECu;
            // 0x5475f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5475ec) {
            ctx->pc = 0x547614u;
            goto label_547614;
        }
    }
    ctx->pc = 0x5475F4u;
    // 0x5475f4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x5475f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x5475f8: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x5475F8u;
    {
        const bool branch_taken_0x5475f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5475f8) {
            ctx->pc = 0x5475FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5475F8u;
            // 0x5475fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547618u;
            goto label_547618;
        }
    }
    ctx->pc = 0x547600u;
    // 0x547600: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x547600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x547604: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x547604u;
    {
        const bool branch_taken_0x547604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x547604) {
            ctx->pc = 0x547614u;
            goto label_547614;
        }
    }
    ctx->pc = 0x54760Cu;
    // 0x54760c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x54760Cu;
    {
        const bool branch_taken_0x54760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54760c) {
            ctx->pc = 0x547630u;
            goto label_547630;
        }
    }
    ctx->pc = 0x547614u;
label_547614:
    // 0x547614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x547614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_547618:
    // 0x547618: 0xc151d94  jal         func_547650
    ctx->pc = 0x547618u;
    SET_GPR_U32(ctx, 31, 0x547620u);
    ctx->pc = 0x54761Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547618u;
            // 0x54761c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547650u;
    if (runtime->hasFunction(0x547650u)) {
        auto targetFn = runtime->lookupFunction(0x547650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547620u; }
        if (ctx->pc != 0x547620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547650_0x547650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547620u; }
        if (ctx->pc != 0x547620u) { return; }
    }
    ctx->pc = 0x547620u;
label_547620:
    // 0x547620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x547620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x547624: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x547624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x547628: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x547628u;
    {
        const bool branch_taken_0x547628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x547628) {
            ctx->pc = 0x547614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_547614;
        }
    }
    ctx->pc = 0x547630u;
label_547630:
    // 0x547630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x547630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x547634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x547634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x547638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x547638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x54763c: 0x3e00008  jr          $ra
    ctx->pc = 0x54763Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54763Cu;
            // 0x547640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547644u;
    // 0x547644: 0x0  nop
    ctx->pc = 0x547644u;
    // NOP
    // 0x547648: 0x0  nop
    ctx->pc = 0x547648u;
    // NOP
    // 0x54764c: 0x0  nop
    ctx->pc = 0x54764cu;
    // NOP
}
