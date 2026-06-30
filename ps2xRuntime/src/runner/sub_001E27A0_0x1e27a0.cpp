#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E27A0
// Address: 0x1e27a0 - 0x1e2860
void sub_001E27A0_0x1e27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E27A0_0x1e27a0");
#endif

    switch (ctx->pc) {
        case 0x1e27f4u: goto label_1e27f4;
        case 0x1e2830u: goto label_1e2830;
        default: break;
    }

    ctx->pc = 0x1e27a0u;

    // 0x1e27a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e27a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e27a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e27a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e27a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e27a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e27ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e27acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e27b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e27b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27b4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E27B4u;
    {
        const bool branch_taken_0x1e27b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27B4u;
            // 0x1e27b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27b4) {
            ctx->pc = 0x1E2848u;
            goto label_1e2848;
        }
    }
    ctx->pc = 0x1E27BCu;
    // 0x1e27bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e27c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e27c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e27c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e27c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E27C8u;
    {
        const bool branch_taken_0x1e27c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e27c8) {
            ctx->pc = 0x1E27CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27C8u;
            // 0x1e27cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E27F8u;
            goto label_1e27f8;
        }
    }
    ctx->pc = 0x1E27D0u;
    // 0x1e27d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e27d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e27d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e27dc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e27dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e27e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e27e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e27e4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e27e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1e27e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e27e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1e27ec: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E27ECu;
    SET_GPR_U32(ctx, 31, 0x1E27F4u);
    ctx->pc = 0x1E27F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27ECu;
            // 0x1e27f0: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27F4u; }
        if (ctx->pc != 0x1E27F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27F4u; }
        if (ctx->pc != 0x1E27F4u) { return; }
    }
    ctx->pc = 0x1E27F4u;
label_1e27f4:
    // 0x1e27f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e27f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e27f8:
    // 0x1e27f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e27f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e27fc: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E27FCu;
    {
        const bool branch_taken_0x1e27fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e27fc) {
            ctx->pc = 0x1E2800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27FCu;
            // 0x1e2800: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E284Cu;
            goto label_1e284c;
        }
    }
    ctx->pc = 0x1E2804u;
    // 0x1e2804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e2808: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e2808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e280c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1e280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1e2810: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e2810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e2814: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e2814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2818: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2818u;
    {
        const bool branch_taken_0x1e2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2818) {
            ctx->pc = 0x1E281Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2818u;
            // 0x1e281c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2834u;
            goto label_1e2834;
        }
    }
    ctx->pc = 0x1E2820u;
    // 0x1e2820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e2824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2828: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1E2828u;
    SET_GPR_U32(ctx, 31, 0x1E2830u);
    ctx->pc = 0x1E282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2828u;
            // 0x1e282c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2830u; }
        if (ctx->pc != 0x1E2830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2830u; }
        if (ctx->pc != 0x1E2830u) { return; }
    }
    ctx->pc = 0x1E2830u;
label_1e2830:
    // 0x1e2830: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1e2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e2834:
    // 0x1e2834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2838: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1e2838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1e283c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e2840: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e2840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e2844: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x1e2844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_1e2848:
    // 0x1e2848: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e284c:
    // 0x1e284c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2858: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2858u;
            // 0x1e285c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2860u;
}
