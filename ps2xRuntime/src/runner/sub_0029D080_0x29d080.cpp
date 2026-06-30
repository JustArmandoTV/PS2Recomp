#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D080
// Address: 0x29d080 - 0x29d170
void sub_0029D080_0x29d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D080_0x29d080");
#endif

    switch (ctx->pc) {
        case 0x29d0c8u: goto label_29d0c8;
        case 0x29d0e8u: goto label_29d0e8;
        default: break;
    }

    ctx->pc = 0x29d080u;

    // 0x29d080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29d084: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29d088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d08c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d090: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d09c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d0a0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x29d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d0a4: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x29d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x29d0a8: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x29d0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x29d0ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x29d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29d0b0: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x29d0b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d0b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D0B4u;
    {
        const bool branch_taken_0x29d0b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D0B4u;
            // 0x29d0b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0b4) {
            ctx->pc = 0x29D0C8u;
            goto label_29d0c8;
        }
    }
    ctx->pc = 0x29D0BCu;
    // 0x29d0bc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x29d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29d0c0: 0xc0a733c  jal         func_29CCF0
    ctx->pc = 0x29D0C0u;
    SET_GPR_U32(ctx, 31, 0x29D0C8u);
    ctx->pc = 0x29D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D0C0u;
            // 0x29d0c4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CCF0u;
    if (runtime->hasFunction(0x29CCF0u)) {
        auto targetFn = runtime->lookupFunction(0x29CCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D0C8u; }
        if (ctx->pc != 0x29D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CCF0_0x29ccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D0C8u; }
        if (ctx->pc != 0x29D0C8u) { return; }
    }
    ctx->pc = 0x29D0C8u;
label_29d0c8:
    // 0x29d0c8: 0x3c039e37  lui         $v1, 0x9E37
    ctx->pc = 0x29d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40503 << 16));
    // 0x29d0cc: 0x112902  srl         $a1, $s1, 4
    ctx->pc = 0x29d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x29d0d0: 0x346379b1  ori         $v1, $v1, 0x79B1
    ctx->pc = 0x29d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31153);
    // 0x29d0d4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x29d0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29d0d8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x29d0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29d0dc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d0e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29D0E0u;
    {
        const bool branch_taken_0x29d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D0E0u;
            // 0x29d0e4: 0xc33824  and         $a3, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0e0) {
            ctx->pc = 0x29D0F0u;
            goto label_29d0f0;
        }
    }
    ctx->pc = 0x29D0E8u;
label_29d0e8:
    // 0x29d0e8: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x29d0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x29d0ec: 0x0  nop
    ctx->pc = 0x29d0ecu;
    // NOP
label_29d0f0:
    // 0x29d0f0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x29d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29d0f4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x29d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29d0f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d0fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D0FCu;
    {
        const bool branch_taken_0x29d0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d0fc) {
            ctx->pc = 0x29D110u;
            goto label_29d110;
        }
    }
    ctx->pc = 0x29D104u;
    // 0x29d104: 0x5623fff8  bnel        $s1, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29D104u;
    {
        const bool branch_taken_0x29d104 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x29d104) {
            ctx->pc = 0x29D108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D104u;
            // 0x29d108: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d0e8;
        }
    }
    ctx->pc = 0x29D10Cu;
    // 0x29d10c: 0x0  nop
    ctx->pc = 0x29d10cu;
    // NOP
label_29d110:
    // 0x29d110: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x29d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29d114: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d118: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29d11c: 0x2242026  xor         $a0, $s1, $a0
    ctx->pc = 0x29d11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    // 0x29d120: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x29d120u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29d124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29d128: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x29d128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x29d12c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d130: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29d134: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x29d134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x29d138: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29d138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29d13c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d140: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x29d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x29d144: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29d144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29d148: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29d148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29d14c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x29d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x29d150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d15c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d160: 0x3e00008  jr          $ra
    ctx->pc = 0x29D160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D160u;
            // 0x29d164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D168u;
    // 0x29d168: 0x0  nop
    ctx->pc = 0x29d168u;
    // NOP
    // 0x29d16c: 0x0  nop
    ctx->pc = 0x29d16cu;
    // NOP
}
