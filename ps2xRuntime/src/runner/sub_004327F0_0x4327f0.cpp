#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004327F0
// Address: 0x4327f0 - 0x4328e0
void sub_004327F0_0x4327f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004327F0_0x4327f0");
#endif

    switch (ctx->pc) {
        case 0x432810u: goto label_432810;
        case 0x432820u: goto label_432820;
        case 0x4328a4u: goto label_4328a4;
        case 0x4328bcu: goto label_4328bc;
        default: break;
    }

    ctx->pc = 0x4327f0u;

    // 0x4327f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4327f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4327f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4327f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4327f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4327f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4327fc: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x4327fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x432800: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432800u;
    {
        const bool branch_taken_0x432800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432800u;
            // 0x432804: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432800) {
            ctx->pc = 0x432818u;
            goto label_432818;
        }
    }
    ctx->pc = 0x432808u;
    // 0x432808: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x432808u;
    SET_GPR_U32(ctx, 31, 0x432810u);
    ctx->pc = 0x43280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432808u;
            // 0x43280c: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432810u; }
        if (ctx->pc != 0x432810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432810u; }
        if (ctx->pc != 0x432810u) { return; }
    }
    ctx->pc = 0x432810u;
label_432810:
    // 0x432810: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x432810u;
    {
        const bool branch_taken_0x432810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432810u;
            // 0x432814: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432810) {
            ctx->pc = 0x43284Cu;
            goto label_43284c;
        }
    }
    ctx->pc = 0x432818u;
label_432818:
    // 0x432818: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x432818u;
    SET_GPR_U32(ctx, 31, 0x432820u);
    ctx->pc = 0x43281Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432818u;
            // 0x43281c: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432820u; }
        if (ctx->pc != 0x432820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432820u; }
        if (ctx->pc != 0x432820u) { return; }
    }
    ctx->pc = 0x432820u;
label_432820:
    // 0x432820: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x432820u;
    {
        const bool branch_taken_0x432820 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x432820) {
            ctx->pc = 0x432824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432820u;
            // 0x432824: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432848u;
            goto label_432848;
        }
    }
    ctx->pc = 0x432828u;
    // 0x432828: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x432828u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x43282c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x43282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x432830: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x432830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x432834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x432834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x432838: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x432838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x43283c: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x43283Cu;
    {
        const bool branch_taken_0x43283c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x43283c) {
            ctx->pc = 0x432840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43283Cu;
            // 0x432840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43284Cu;
            goto label_43284c;
        }
    }
    ctx->pc = 0x432844u;
    // 0x432844: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x432844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_432848:
    // 0x432848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43284c:
    // 0x43284c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432854: 0x3e00008  jr          $ra
    ctx->pc = 0x432854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432854u;
            // 0x432858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43285Cu;
    // 0x43285c: 0x0  nop
    ctx->pc = 0x43285cu;
    // NOP
    // 0x432860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x432864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x432864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x432868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43286c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x432870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x432870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432874: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x432874u;
    {
        const bool branch_taken_0x432874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x432878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432874u;
            // 0x432878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432874) {
            ctx->pc = 0x4328BCu;
            goto label_4328bc;
        }
    }
    ctx->pc = 0x43287Cu;
    // 0x43287c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x432880: 0x2442c9a0  addiu       $v0, $v0, -0x3660
    ctx->pc = 0x432880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
    // 0x432884: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x432884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x432888: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x432888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x43288c: 0x58a00006  blezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x43288Cu;
    {
        const bool branch_taken_0x43288c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x43288c) {
            ctx->pc = 0x432890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43288Cu;
            // 0x432890: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4328A8u;
            goto label_4328a8;
        }
    }
    ctx->pc = 0x432894u;
    // 0x432894: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x432894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x432898: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x432898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
    // 0x43289c: 0xc074678  jal         func_1D19E0
    ctx->pc = 0x43289Cu;
    SET_GPR_U32(ctx, 31, 0x4328A4u);
    ctx->pc = 0x4328A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43289Cu;
            // 0x4328a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D19E0u;
    if (runtime->hasFunction(0x1D19E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D19E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4328A4u; }
        if (ctx->pc != 0x4328A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D19E0_0x1d19e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4328A4u; }
        if (ctx->pc != 0x4328A4u) { return; }
    }
    ctx->pc = 0x4328A4u;
label_4328a4:
    // 0x4328a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4328a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4328a8:
    // 0x4328a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4328a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4328ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4328ACu;
    {
        const bool branch_taken_0x4328ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4328ac) {
            ctx->pc = 0x4328B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4328ACu;
            // 0x4328b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4328C0u;
            goto label_4328c0;
        }
    }
    ctx->pc = 0x4328B4u;
    // 0x4328b4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4328B4u;
    SET_GPR_U32(ctx, 31, 0x4328BCu);
    ctx->pc = 0x4328B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4328B4u;
            // 0x4328b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4328BCu; }
        if (ctx->pc != 0x4328BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4328BCu; }
        if (ctx->pc != 0x4328BCu) { return; }
    }
    ctx->pc = 0x4328BCu;
label_4328bc:
    // 0x4328bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4328bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4328c0:
    // 0x4328c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4328c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4328c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4328c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4328c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4328c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4328cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4328CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4328D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4328CCu;
            // 0x4328d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4328D4u;
    // 0x4328d4: 0x0  nop
    ctx->pc = 0x4328d4u;
    // NOP
    // 0x4328d8: 0x0  nop
    ctx->pc = 0x4328d8u;
    // NOP
    // 0x4328dc: 0x0  nop
    ctx->pc = 0x4328dcu;
    // NOP
}
