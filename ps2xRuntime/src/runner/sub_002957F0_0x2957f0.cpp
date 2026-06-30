#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002957F0
// Address: 0x2957f0 - 0x2958b0
void sub_002957F0_0x2957f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002957F0_0x2957f0");
#endif

    switch (ctx->pc) {
        case 0x295844u: goto label_295844;
        case 0x29587cu: goto label_29587c;
        default: break;
    }

    ctx->pc = 0x2957f0u;

    // 0x2957f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2957f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2957f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2957f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2957f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2957fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2957fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x295800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295804: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x295804u;
    {
        const bool branch_taken_0x295804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x295808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295804u;
            // 0x295808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295804) {
            ctx->pc = 0x295898u;
            goto label_295898;
        }
    }
    ctx->pc = 0x29580Cu;
    // 0x29580c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x295810: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295814: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x295814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x295818: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x295818u;
    {
        const bool branch_taken_0x295818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295818) {
            ctx->pc = 0x295848u;
            goto label_295848;
        }
    }
    ctx->pc = 0x295820u;
    // 0x295820: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x295820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x295824: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x295824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x295828: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x295828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x29582c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29582cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x295830: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x295830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295834: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x295834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x295838: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x295838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x29583c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29583Cu;
    SET_GPR_U32(ctx, 31, 0x295844u);
    ctx->pc = 0x295840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29583Cu;
            // 0x295840: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295844u; }
        if (ctx->pc != 0x295844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295844u; }
        if (ctx->pc != 0x295844u) { return; }
    }
    ctx->pc = 0x295844u;
label_295844:
    // 0x295844: 0x0  nop
    ctx->pc = 0x295844u;
    // NOP
label_295848:
    // 0x295848: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x295848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x29584c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29584cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x295850: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x295850u;
    {
        const bool branch_taken_0x295850 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x295854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295850u;
            // 0x295854: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295850) {
            ctx->pc = 0x295898u;
            goto label_295898;
        }
    }
    ctx->pc = 0x295858u;
    // 0x295858: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x295858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x29585c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x29585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x295860: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x295860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x295864: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x295864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295868: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295868u;
    {
        const bool branch_taken_0x295868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295868u;
            // 0x29586c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295868) {
            ctx->pc = 0x295880u;
            goto label_295880;
        }
    }
    ctx->pc = 0x295870u;
    // 0x295870: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x295870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295874: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x295874u;
    SET_GPR_U32(ctx, 31, 0x29587Cu);
    ctx->pc = 0x295878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295874u;
            // 0x295878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29587Cu; }
        if (ctx->pc != 0x29587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29587Cu; }
        if (ctx->pc != 0x29587Cu) { return; }
    }
    ctx->pc = 0x29587Cu;
label_29587c:
    // 0x29587c: 0x0  nop
    ctx->pc = 0x29587cu;
    // NOP
label_295880:
    // 0x295880: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x295880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x295884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295888: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x295888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x29588c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x29588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x295890: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x295890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x295894: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x295894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_295898:
    // 0x295898: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x295898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29589c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2958a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2958a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2958a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2958a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2958a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2958A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2958ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958A8u;
            // 0x2958ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2958B0u;
}
