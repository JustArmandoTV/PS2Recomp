#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D830
// Address: 0x29d830 - 0x29d8f0
void sub_0029D830_0x29d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D830_0x29d830");
#endif

    switch (ctx->pc) {
        case 0x29d880u: goto label_29d880;
        case 0x29d8bcu: goto label_29d8bc;
        default: break;
    }

    ctx->pc = 0x29d830u;

    // 0x29d830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d844: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x29D844u;
    {
        const bool branch_taken_0x29d844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D844u;
            // 0x29d848: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d844) {
            ctx->pc = 0x29D8D4u;
            goto label_29d8d4;
        }
    }
    ctx->pc = 0x29D84Cu;
    // 0x29d84c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29d854: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29d854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29d858: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29D858u;
    {
        const bool branch_taken_0x29d858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d858) {
            ctx->pc = 0x29D85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D858u;
            // 0x29d85c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D884u;
            goto label_29d884;
        }
    }
    ctx->pc = 0x29D860u;
    // 0x29d860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d864: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29d868: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d86c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29d86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d870: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29d870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29d874: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29d878: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29D878u;
    SET_GPR_U32(ctx, 31, 0x29D880u);
    ctx->pc = 0x29D87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D878u;
            // 0x29d87c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D880u; }
        if (ctx->pc != 0x29D880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D880u; }
        if (ctx->pc != 0x29D880u) { return; }
    }
    ctx->pc = 0x29D880u;
label_29d880:
    // 0x29d880: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29d884:
    // 0x29d884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29d884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29d888: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29D888u;
    {
        const bool branch_taken_0x29d888 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29d888) {
            ctx->pc = 0x29D88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D888u;
            // 0x29d88c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D8D8u;
            goto label_29d8d8;
        }
    }
    ctx->pc = 0x29D890u;
    // 0x29d890: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d894: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x29d894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d898: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x29d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x29d89c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x29d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29d8a0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x29d8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29d8a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D8A4u;
    {
        const bool branch_taken_0x29d8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d8a4) {
            ctx->pc = 0x29D8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D8A4u;
            // 0x29d8a8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D8C0u;
            goto label_29d8c0;
        }
    }
    ctx->pc = 0x29D8ACu;
    // 0x29d8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d8b4: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x29D8B4u;
    SET_GPR_U32(ctx, 31, 0x29D8BCu);
    ctx->pc = 0x29D8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D8B4u;
            // 0x29d8b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D8BCu; }
        if (ctx->pc != 0x29D8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D8BCu; }
        if (ctx->pc != 0x29D8BCu) { return; }
    }
    ctx->pc = 0x29D8BCu;
label_29d8bc:
    // 0x29d8bc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x29d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_29d8c0:
    // 0x29d8c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d8c4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x29d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x29d8c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x29d8cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29d8d0: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x29d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_29d8d4:
    // 0x29d8d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d8d8:
    // 0x29d8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29D8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D8E4u;
            // 0x29d8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D8ECu;
    // 0x29d8ec: 0x0  nop
    ctx->pc = 0x29d8ecu;
    // NOP
}
