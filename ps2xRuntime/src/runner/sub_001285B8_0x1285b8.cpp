#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001285B8
// Address: 0x1285b8 - 0x128708
void sub_001285B8_0x1285b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001285B8_0x1285b8");
#endif

    switch (ctx->pc) {
        case 0x1285f0u: goto label_1285f0;
        case 0x1285f4u: goto label_1285f4;
        case 0x128620u: goto label_128620;
        case 0x12863cu: goto label_12863c;
        case 0x128648u: goto label_128648;
        case 0x1286a0u: goto label_1286a0;
        case 0x1286f0u: goto label_1286f0;
        default: break;
    }

    ctx->pc = 0x1285b8u;

    // 0x1285b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1285b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1285bc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1285bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1285c0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1285c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1285c4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1285c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1285c8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1285c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1285cc: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x1285ccu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1285d0: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x1285d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x1285d4: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1285D4u;
    {
        const bool branch_taken_0x1285d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1285D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285D4u;
            // 0x1285d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285d4) {
            ctx->pc = 0x128608u;
            goto label_128608;
        }
    }
    ctx->pc = 0x1285DCu;
    // 0x1285dc: 0x248e0043  addiu       $t6, $a0, 0x43
    ctx->pc = 0x1285dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 67));
    // 0x1285e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1285e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1285e4: 0xac8f0014  sw          $t7, 0x14($a0)
    ctx->pc = 0x1285e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 15));
    // 0x1285e8: 0xac8e0010  sw          $t6, 0x10($a0)
    ctx->pc = 0x1285e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
    // 0x1285ec: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x1285ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_1285f0:
    // 0x1285f0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1285f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1285f4:
    // 0x1285f4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1285f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1285f8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1285f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1285fc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1285fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x128600: 0x3e00008  jr          $ra
    ctx->pc = 0x128600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128600u;
            // 0x128604: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128608u;
label_128608:
    // 0x128608: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x128608u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12860c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12860Cu;
    {
        const bool branch_taken_0x12860c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x128610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12860Cu;
            // 0x128610: 0x35cf0800  ori         $t7, $t6, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12860c) {
            ctx->pc = 0x128630u;
            goto label_128630;
        }
    }
    ctx->pc = 0x128614u;
    // 0x128614: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x128614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x128618: 0xc049ff4  jal         func_127FD0
    ctx->pc = 0x128618u;
    SET_GPR_U32(ctx, 31, 0x128620u);
    ctx->pc = 0x12861Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128618u;
            // 0x12861c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127FD0u;
    if (runtime->hasFunction(0x127FD0u)) {
        auto targetFn = runtime->lookupFunction(0x127FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128620u; }
        if (ctx->pc != 0x128620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127FD0_0x127fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128620u; }
        if (ctx->pc != 0x128620u) { return; }
    }
    ctx->pc = 0x128620u;
label_128620:
    // 0x128620: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x128620u;
    {
        const bool branch_taken_0x128620 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x128624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128620u;
            // 0x128624: 0x8faf0004  lw          $t7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128620) {
            ctx->pc = 0x1286B8u;
            goto label_1286b8;
        }
    }
    ctx->pc = 0x128628u;
    // 0x128628: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x128628u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12862c: 0x35cf0800  ori         $t7, $t6, 0x800
    ctx->pc = 0x12862cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2048);
label_128630:
    // 0x128630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128634: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x128634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x128638: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x128638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_12863c:
    // 0x12863c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x128640: 0xc04a2e4  jal         func_128B90
    ctx->pc = 0x128640u;
    SET_GPR_U32(ctx, 31, 0x128648u);
    ctx->pc = 0x128644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128640u;
            // 0x128644: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128648u; }
        if (ctx->pc != 0x128648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B90_0x128b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128648u; }
        if (ctx->pc != 0x128648u) { return; }
    }
    ctx->pc = 0x128648u;
label_128648:
    // 0x128648: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128648u;
    {
        const bool branch_taken_0x128648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128648u;
            // 0x12864c: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128648) {
            ctx->pc = 0x128670u;
            goto label_128670;
        }
    }
    ctx->pc = 0x128650u;
    // 0x128650: 0x260d0043  addiu       $t5, $s0, 0x43
    ctx->pc = 0x128650u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x128654: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128658: 0xae0d0010  sw          $t5, 0x10($s0)
    ctx->pc = 0x128658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 13));
    // 0x12865c: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x12865cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x128660: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x128660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x128664: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x128664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x128668: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x128668u;
    {
        const bool branch_taken_0x128668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128668u;
            // 0x12866c: 0xae0d0000  sw          $t5, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128668) {
            ctx->pc = 0x1285F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1285f0;
        }
    }
    ctx->pc = 0x128670u;
label_128670:
    // 0x128670: 0x3c0e0012  lui         $t6, 0x12
    ctx->pc = 0x128670u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18 << 16));
    // 0x128674: 0x8e0d0054  lw          $t5, 0x54($s0)
    ctx->pc = 0x128674u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x128678: 0x25ce7988  addiu       $t6, $t6, 0x7988
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 31112));
    // 0x12867c: 0x35ef0080  ori         $t7, $t7, 0x80
    ctx->pc = 0x12867cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)128);
    // 0x128680: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x128680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x128684: 0xadae003c  sw          $t6, 0x3C($t5)
    ctx->pc = 0x128684u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 14));
    // 0x128688: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x128688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12868c: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x12868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x128690: 0x1240ffd7  beqz        $s2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x128690u;
    {
        const bool branch_taken_0x128690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128690u;
            // 0x128694: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128690) {
            ctx->pc = 0x1285F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1285f0;
        }
    }
    ctx->pc = 0x128698u;
    // 0x128698: 0xc0432c4  jal         func_10CB10
    ctx->pc = 0x128698u;
    SET_GPR_U32(ctx, 31, 0x1286A0u);
    ctx->pc = 0x12869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128698u;
            // 0x12869c: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB10u;
    if (runtime->hasFunction(0x10CB10u)) {
        auto targetFn = runtime->lookupFunction(0x10CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1286A0u; }
        if (ctx->pc != 0x1286A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CB10_0x10cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1286A0u; }
        if (ctx->pc != 0x1286A0u) { return; }
    }
    ctx->pc = 0x1286A0u;
label_1286a0:
    // 0x1286a0: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1286A0u;
    {
        const bool branch_taken_0x1286a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286a0) {
            ctx->pc = 0x1286A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1286A0u;
            // 0x1286a4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1285F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1285f4;
        }
    }
    ctx->pc = 0x1286A8u;
    // 0x1286a8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1286a8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1286ac: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1286acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1286b0: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286B0u;
            // 0x1286b4: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x1285F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1285f0;
        }
    }
    ctx->pc = 0x1286B8u;
label_1286b8:
    // 0x1286b8: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x1286b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1286bc: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1286bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1286c0: 0x31eff000  andi        $t7, $t7, 0xF000
    ctx->pc = 0x1286c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61440);
    // 0x1286c4: 0x39ee2000  xori        $t6, $t7, 0x2000
    ctx->pc = 0x1286c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)8192);
    // 0x1286c8: 0x15ed000b  bne         $t7, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x1286C8u;
    {
        const bool branch_taken_0x1286c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x1286CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286C8u;
            // 0x1286cc: 0x2dd20001  sltiu       $s2, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286c8) {
            ctx->pc = 0x1286F8u;
            goto label_1286f8;
        }
    }
    ctx->pc = 0x1286D0u;
    // 0x1286d0: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x1286d4: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1286d8: 0x25efbc00  addiu       $t7, $t7, -0x4400
    ctx->pc = 0x1286d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949888));
    // 0x1286dc: 0x15cf0007  bne         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1286DCu;
    {
        const bool branch_taken_0x1286dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1286E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286DCu;
            // 0x1286e0: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286dc) {
            ctx->pc = 0x1286FCu;
            goto label_1286fc;
        }
    }
    ctx->pc = 0x1286E4u;
    // 0x1286e4: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1286e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1286e8: 0x35ef0400  ori         $t7, $t7, 0x400
    ctx->pc = 0x1286e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1024);
    // 0x1286ec: 0x0  nop
    ctx->pc = 0x1286ecu;
    // NOP
label_1286f0:
    // 0x1286f0: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1286F0u;
    {
        const bool branch_taken_0x1286f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286F0u;
            // 0x1286f4: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286f0) {
            ctx->pc = 0x12863Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12863c;
        }
    }
    ctx->pc = 0x1286F8u;
label_1286f8:
    // 0x1286f8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1286f8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1286fc:
    // 0x1286fc: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1286FCu;
    {
        const bool branch_taken_0x1286fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286FCu;
            // 0x128700: 0x35ef0800  ori         $t7, $t7, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286fc) {
            ctx->pc = 0x1286F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1286f0;
        }
    }
    ctx->pc = 0x128704u;
    // 0x128704: 0x0  nop
    ctx->pc = 0x128704u;
    // NOP
}
