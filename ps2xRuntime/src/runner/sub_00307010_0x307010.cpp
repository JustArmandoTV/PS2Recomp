#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307010
// Address: 0x307010 - 0x3070e0
void sub_00307010_0x307010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307010_0x307010");
#endif

    switch (ctx->pc) {
        case 0x307064u: goto label_307064;
        case 0x307094u: goto label_307094;
        case 0x30709cu: goto label_30709c;
        case 0x3070c0u: goto label_3070c0;
        default: break;
    }

    ctx->pc = 0x307010u;

    // 0x307010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x307010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x307014: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x307014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307018: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x307018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30701c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307028: 0x8c840e10  lw          $a0, 0xE10($a0)
    ctx->pc = 0x307028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3600)));
    // 0x30702c: 0x54830026  bnel        $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x30702Cu;
    {
        const bool branch_taken_0x30702c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30702c) {
            ctx->pc = 0x307030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30702Cu;
            // 0x307030: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3070C8u;
            goto label_3070c8;
        }
    }
    ctx->pc = 0x307034u;
    // 0x307034: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x307034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x307038: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x307038u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x30703c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30703Cu;
    {
        const bool branch_taken_0x30703c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x307040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30703Cu;
            // 0x307040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30703c) {
            ctx->pc = 0x307054u;
            goto label_307054;
        }
    }
    ctx->pc = 0x307044u;
    // 0x307044: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x307044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x307048: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x307048u;
    {
        const bool branch_taken_0x307048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307048) {
            ctx->pc = 0x307054u;
            goto label_307054;
        }
    }
    ctx->pc = 0x307050u;
    // 0x307050: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x307050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307054:
    // 0x307054: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x307054u;
    {
        const bool branch_taken_0x307054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307054) {
            ctx->pc = 0x307070u;
            goto label_307070;
        }
    }
    ctx->pc = 0x30705Cu;
    // 0x30705c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x30705Cu;
    SET_GPR_U32(ctx, 31, 0x307064u);
    ctx->pc = 0x307060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30705Cu;
            // 0x307060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307064u; }
        if (ctx->pc != 0x307064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307064u; }
        if (ctx->pc != 0x307064u) { return; }
    }
    ctx->pc = 0x307064u;
label_307064:
    // 0x307064: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x307064u;
    {
        const bool branch_taken_0x307064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307064) {
            ctx->pc = 0x307070u;
            goto label_307070;
        }
    }
    ctx->pc = 0x30706Cu;
    // 0x30706c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30706cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307070:
    // 0x307070: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x307070u;
    {
        const bool branch_taken_0x307070 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x307070) {
            ctx->pc = 0x307074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307070u;
            // 0x307074: 0x9204005c  lbu         $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30708Cu;
            goto label_30708c;
        }
    }
    ctx->pc = 0x307078u;
    // 0x307078: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x307078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x30707c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x307080: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x307080u;
    {
        const bool branch_taken_0x307080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307080) {
            ctx->pc = 0x307084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307080u;
            // 0x307084: 0xae000e30  sw          $zero, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3070A0u;
            goto label_3070a0;
        }
    }
    ctx->pc = 0x307088u;
    // 0x307088: 0x9204005c  lbu         $a0, 0x5C($s0)
    ctx->pc = 0x307088u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_30708c:
    // 0x30708c: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x30708Cu;
    SET_GPR_U32(ctx, 31, 0x307094u);
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307094u; }
        if (ctx->pc != 0x307094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307094u; }
        if (ctx->pc != 0x307094u) { return; }
    }
    ctx->pc = 0x307094u;
label_307094:
    // 0x307094: 0xc0bd98c  jal         func_2F6630
    ctx->pc = 0x307094u;
    SET_GPR_U32(ctx, 31, 0x30709Cu);
    ctx->pc = 0x307098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307094u;
            // 0x307098: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6630u;
    if (runtime->hasFunction(0x2F6630u)) {
        auto targetFn = runtime->lookupFunction(0x2F6630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30709Cu; }
        if (ctx->pc != 0x30709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6630_0x2f6630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30709Cu; }
        if (ctx->pc != 0x30709Cu) { return; }
    }
    ctx->pc = 0x30709Cu;
label_30709c:
    // 0x30709c: 0xae000e30  sw          $zero, 0xE30($s0)
    ctx->pc = 0x30709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
label_3070a0:
    // 0x3070a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3070a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3070a4: 0xa6020c68  sh          $v0, 0xC68($s0)
    ctx->pc = 0x3070a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3176), (uint16_t)GPR_U32(ctx, 2));
    // 0x3070a8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x3070ac: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3070acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3070b0: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x3070b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x3070b4: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x3070b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
    // 0x3070b8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3070B8u;
    SET_GPR_U32(ctx, 31, 0x3070C0u);
    ctx->pc = 0x3070BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3070B8u;
            // 0x3070bc: 0x24a52c10  addiu       $a1, $a1, 0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070C0u; }
        if (ctx->pc != 0x3070C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070C0u; }
        if (ctx->pc != 0x3070C0u) { return; }
    }
    ctx->pc = 0x3070C0u;
label_3070c0:
    // 0x3070c0: 0xae000e10  sw          $zero, 0xE10($s0)
    ctx->pc = 0x3070c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3600), GPR_U32(ctx, 0));
    // 0x3070c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3070c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3070c8:
    // 0x3070c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3070c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3070cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3070ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3070d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3070D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3070D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3070D0u;
            // 0x3070d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3070D8u;
    // 0x3070d8: 0x0  nop
    ctx->pc = 0x3070d8u;
    // NOP
    // 0x3070dc: 0x0  nop
    ctx->pc = 0x3070dcu;
    // NOP
}
