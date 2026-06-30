#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F7D0
// Address: 0x13f7d0 - 0x13fa70
void sub_0013F7D0_0x13f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F7D0_0x13f7d0");
#endif

    switch (ctx->pc) {
        case 0x13f8c0u: goto label_13f8c0;
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8d8u: goto label_13f8d8;
        default: break;
    }

    ctx->pc = 0x13f7d0u;

    // 0x13f7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f7d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x13f7d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f7dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f7e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f7e4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x13f7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x13f7e8: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x13f7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f7ec: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x13f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x13f7f0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f7f4: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x13F7F4u;
    {
        const bool branch_taken_0x13f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13F7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7F4u;
            // 0x13f7f8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7f4) {
            ctx->pc = 0x13F8C0u;
            goto label_13f8c0;
        }
    }
    ctx->pc = 0x13F7FCu;
    // 0x13f7fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f800: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x13f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x13f804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F804u;
    {
        const bool branch_taken_0x13f804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f804) {
            ctx->pc = 0x13F828u;
            goto label_13f828;
        }
    }
    ctx->pc = 0x13F80Cu;
    // 0x13f80c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f810: 0x8c425830  lw          $v0, 0x5830($v0)
    ctx->pc = 0x13f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22576)));
    // 0x13f814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F814u;
    {
        const bool branch_taken_0x13f814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f814) {
            ctx->pc = 0x13F828u;
            goto label_13f828;
        }
    }
    ctx->pc = 0x13F81Cu;
    // 0x13f81c: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x13f81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x13f820: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f824: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x13f824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_13f828:
    // 0x13f828: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f82c: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x13f82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x13f830: 0x8c455824  lw          $a1, 0x5824($v0)
    ctx->pc = 0x13f830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x13f834: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x13f834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x13f838: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x13f838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x13f83c: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x13f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x13f840: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f844: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x13f844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13f848: 0x8c425844  lw          $v0, 0x5844($v0)
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22596)));
    // 0x13f84c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13f84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13f850: 0x1044001b  beq         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13F850u;
    {
        const bool branch_taken_0x13f850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13f850) {
            ctx->pc = 0x13F8C0u;
            goto label_13f8c0;
        }
    }
    ctx->pc = 0x13F858u;
    // 0x13f858: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f85c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13f860: 0xac445844  sw          $a0, 0x5844($v0)
    ctx->pc = 0x13f860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 4));
    // 0x13f864: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f868: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13F868u;
    {
        const bool branch_taken_0x13f868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f868) {
            ctx->pc = 0x13F86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F868u;
            // 0x13f86c: 0x41a02  srl         $v1, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F898u;
            goto label_13f898;
        }
    }
    ctx->pc = 0x13F870u;
    // 0x13f870: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x13f870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x13f874: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13f878: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x13f878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x13f87c: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x13f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x13f880: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f884: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x13f884u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x13f888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f890: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13F890u;
    {
        const bool branch_taken_0x13f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F890u;
            // 0x13f894: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f890) {
            ctx->pc = 0x13F8ACu;
            goto label_13f8ac;
        }
    }
    ctx->pc = 0x13F898u;
label_13f898:
    // 0x13f898: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13f89c: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x13f8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f8a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f8ac:
    // 0x13f8ac: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x13f8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x13f8b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f8b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f8b8: 0xc057548  jal         func_15D520
    ctx->pc = 0x13F8B8u;
    SET_GPR_U32(ctx, 31, 0x13F8C0u);
    ctx->pc = 0x13F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8B8u;
            // 0x13f8bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (runtime->hasFunction(0x15D520u)) {
        auto targetFn = runtime->lookupFunction(0x15D520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8C0u; }
        if (ctx->pc != 0x13F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D520_0x15d520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8C0u; }
        if (ctx->pc != 0x13F8C0u) { return; }
    }
    ctx->pc = 0x13F8C0u;
label_13f8c0:
    // 0x13f8c0: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x13F8C0u;
    SET_GPR_U32(ctx, 31, 0x13F8C8u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8C8u; }
        if (ctx->pc != 0x13F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8C8u; }
        if (ctx->pc != 0x13F8C8u) { return; }
    }
    ctx->pc = 0x13F8C8u;
label_13f8c8:
    // 0x13f8c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f8cc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f8d0: 0xc056b18  jal         func_15AC60
    ctx->pc = 0x13F8D0u;
    SET_GPR_U32(ctx, 31, 0x13F8D8u);
    ctx->pc = 0x13F8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8D0u;
            // 0x13f8d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC60u;
    if (runtime->hasFunction(0x15AC60u)) {
        auto targetFn = runtime->lookupFunction(0x15AC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8D8u; }
        if (ctx->pc != 0x13F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC60_0x15ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8D8u; }
        if (ctx->pc != 0x13F8D8u) { return; }
    }
    ctx->pc = 0x13F8D8u;
label_13f8d8:
    // 0x13f8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8E0u;
            // 0x13f8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F8E8u;
    // 0x13f8e8: 0x0  nop
    ctx->pc = 0x13f8e8u;
    // NOP
    // 0x13f8ec: 0x0  nop
    ctx->pc = 0x13f8ecu;
    // NOP
    // 0x13f8f0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x13f8f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f8f4: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x13f8f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13f8f8: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x13f8f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13f8fc: 0x4a8311be  vmulaz.y    $ACC, $vf2, $vf3z
    ctx->pc = 0x13f8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x13f900: 0x4a82190e  vmsubz.y    $vf4, $vf3, $vf2z
    ctx->pc = 0x13f900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f904: 0x4b0219be  vmulaz.x    $ACC, $vf3, $vf2z
    ctx->pc = 0x13f904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x13f908: 0x4b03114e  vmsubz.x    $vf5, $vf2, $vf3z
    ctx->pc = 0x13f908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f90c: 0x4b0311bd  vmulay.x    $ACC, $vf2, $vf3y
    ctx->pc = 0x13f90cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13f910: 0x4b02198d  vmsuby.x    $vf6, $vf3, $vf2y
    ctx->pc = 0x13f910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f914: 0x4b040101  vaddy.x     $vf4, $vf0, $vf4y
    ctx->pc = 0x13f914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13f918: 0x4a8119be  vmulaz.y    $ACC, $vf3, $vf1z
    ctx->pc = 0x13f918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x13f91c: 0x4a83090e  vmsubz.y    $vf4, $vf1, $vf3z
    ctx->pc = 0x13f91cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f920: 0x4a4119bc  vmulax.z    $ACC, $vf3, $vf1x
    ctx->pc = 0x13f920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f924: 0x4a43094c  vmsubx.z    $vf5, $vf1, $vf3x
    ctx->pc = 0x13f924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f928: 0xcca00000  pref        0x00, 0x0($a1)
    ctx->pc = 0x13f928u;
    // PREF instruction (ignored)
    // 0x13f92c: 0x4a8309bc  vmulax.y    $ACC, $vf1, $vf3x
    ctx->pc = 0x13f92cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f930: 0x4a81198c  vmsubx.y    $vf6, $vf3, $vf1x
    ctx->pc = 0x13f930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f934: 0x4a850142  vaddz.y     $vf5, $vf0, $vf5z
    ctx->pc = 0x13f934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13f938: 0x4a4111bd  vmulay.z    $ACC, $vf2, $vf1y
    ctx->pc = 0x13f938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13f93c: 0x4a42090d  vmsuby.z    $vf4, $vf1, $vf2y
    ctx->pc = 0x13f93cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f940: 0x4a4209bc  vmulax.z    $ACC, $vf1, $vf2x
    ctx->pc = 0x13f940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f944: 0x4a41114c  vmsubx.z    $vf5, $vf2, $vf1x
    ctx->pc = 0x13f944u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f948: 0x4a8111bc  vmulax.y    $ACC, $vf2, $vf1x
    ctx->pc = 0x13f948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f94c: 0x4a8209cc  vmsubx.y    $vf7, $vf1, $vf2x
    ctx->pc = 0x13f94cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f950: 0x4a470181  vaddy.z     $vf6, $vf0, $vf7y
    ctx->pc = 0x13f950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13f954: 0x4a200118  vmulx.w     $vf4, $vf0, $vf0x
    ctx->pc = 0x13f954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13f958: 0x4a200158  vmulx.w     $vf5, $vf0, $vf0x
    ctx->pc = 0x13f958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13f95c: 0x4a200198  vmulx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x13f95cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13f960: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x13f960u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f964: 0xd8a90010  lqc2        $vf9, 0x10($a1)
    ctx->pc = 0x13f964u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13f968: 0xd8aa0020  lqc2        $vf10, 0x20($a1)
    ctx->pc = 0x13f968u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13f96c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13f96cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f970: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13f970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13f974: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13f974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13f978: 0x4be802cb  vmaddw.xyzw $vf11, $vf0, $vf8w
    ctx->pc = 0x13f978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f97c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x13f97cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f980: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x13f980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13f984: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x13f984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13f988: 0x4be9030b  vmaddw.xyzw $vf12, $vf0, $vf9w
    ctx->pc = 0x13f988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f98c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x13f98cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13f990: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x13f990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13f994: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x13f994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13f998: 0x4bea034b  vmaddw.xyzw $vf13, $vf0, $vf10w
    ctx->pc = 0x13f998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13f99c: 0x4bcb5baa  vmul.xyz    $vf14, $vf11, $vf11
    ctx->pc = 0x13f99cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13f9a0: 0x4b0e7381  vaddy.x     $vf14, $vf14, $vf14y
    ctx->pc = 0x13f9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13f9a4: 0x4b0e7382  vaddz.x     $vf14, $vf14, $vf14z
    ctx->pc = 0x13f9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13f9a8: 0x4a0e03bd  .word       0x4A0E03BD                   # vsqrt       $Q, $vf14x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f9a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13f9ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f9acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f9b0: 0x4b0003a0  vaddq.x     $vf14, $vf0, $Q
    ctx->pc = 0x13f9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13f9b4: 0x4a0002ff  vnop
    ctx->pc = 0x13f9b4u;
    // NOP operation, no action needed for VU0
    // 0x13f9b8: 0x4a0002ff  vnop
    ctx->pc = 0x13f9b8u;
    // NOP operation, no action needed for VU0
    // 0x13f9bc: 0x4a6e03bc  vdiv        $Q, $vf0w, $vf14x
    ctx->pc = 0x13f9bcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13f9c0: 0x4bcc63ea  vmul.xyz    $vf15, $vf12, $vf12
    ctx->pc = 0x13f9c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13f9c4: 0x4b0f7bc1  vaddy.x     $vf15, $vf15, $vf15y
    ctx->pc = 0x13f9c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13f9c8: 0x4b0f7bc2  vaddz.x     $vf15, $vf15, $vf15z
    ctx->pc = 0x13f9c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13f9cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f9ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f9d0: 0x4bc05adc  vmulq.xyz   $vf11, $vf11, $Q
    ctx->pc = 0x13f9d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x13f9d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f9d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f9d8: 0x4a0f03bd  .word       0x4A0F03BD                   # vsqrt       $Q, $vf15x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f9d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13f9dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f9dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f9e0: 0x4b0003e0  vaddq.x     $vf15, $vf0, $Q
    ctx->pc = 0x13f9e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13f9e4: 0x4a0002ff  vnop
    ctx->pc = 0x13f9e4u;
    // NOP operation, no action needed for VU0
    // 0x13f9e8: 0x4a0002ff  vnop
    ctx->pc = 0x13f9e8u;
    // NOP operation, no action needed for VU0
    // 0x13f9ec: 0x4a6f03bc  vdiv        $Q, $vf0w, $vf15x
    ctx->pc = 0x13f9ecu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13f9f0: 0x4bcd6aaa  vmul.xyz    $vf10, $vf13, $vf13
    ctx->pc = 0x13f9f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x13f9f4: 0x4b0a5281  vaddy.x     $vf10, $vf10, $vf10y
    ctx->pc = 0x13f9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x13f9f8: 0x4b0a5282  vaddz.x     $vf10, $vf10, $vf10z
    ctx->pc = 0x13f9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x13f9fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f9fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fa00: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x13fa00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13fa04: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fa04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fa08: 0x4a0a03bd  .word       0x4A0A03BD                   # vsqrt       $Q, $vf10x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13fa08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13fa0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fa0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fa10: 0x4b0002a0  vaddq.x     $vf10, $vf0, $Q
    ctx->pc = 0x13fa10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x13fa14: 0x4a0002ff  vnop
    ctx->pc = 0x13fa14u;
    // NOP operation, no action needed for VU0
    // 0x13fa18: 0x4a0002ff  vnop
    ctx->pc = 0x13fa18u;
    // NOP operation, no action needed for VU0
    // 0x13fa1c: 0x4a6a03bc  vdiv        $Q, $vf0w, $vf10x
    ctx->pc = 0x13fa1cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13fa20: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fa20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fa24: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x13fa24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13fa28: 0x48285800  qmfc2.ni    $t0, $vf11
    ctx->pc = 0x13fa28u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x13fa2c: 0x48296000  qmfc2.ni    $t1, $vf12
    ctx->pc = 0x13fa2cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13fa30: 0x482a6800  qmfc2.ni    $t2, $vf13
    ctx->pc = 0x13fa30u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x13fa34: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x13fa34u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13fa38: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x13fa38u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x13fa3c: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x13fa3cu;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x13fa40: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x13fa40u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x13fa44: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x13fa44u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x13fa48: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x13fa48u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x13fa4c: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x13fa4cu;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x13fa50: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x13fa50u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x13fa54: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x13fa54u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x13fa58: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x13fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x13fa5c: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x13fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x13fa60: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x13fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x13fa64: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA64u;
            // 0x13fa68: 0x7c8b0030  sq          $t3, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FA6Cu;
    // 0x13fa6c: 0x0  nop
    ctx->pc = 0x13fa6cu;
    // NOP
}
