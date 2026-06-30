#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D6F0
// Address: 0x29d6f0 - 0x29d830
void sub_0029D6F0_0x29d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D6F0_0x29d6f0");
#endif

    switch (ctx->pc) {
        case 0x29d738u: goto label_29d738;
        case 0x29d790u: goto label_29d790;
        default: break;
    }

    ctx->pc = 0x29d6f0u;

    // 0x29d6f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29d6f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29d6f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d6fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d70c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d710: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x29d710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d714: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x29d714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x29d718: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x29d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x29d71c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x29d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29d720: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x29d720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d724: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D724u;
    {
        const bool branch_taken_0x29d724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D724u;
            // 0x29d728: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d724) {
            ctx->pc = 0x29D738u;
            goto label_29d738;
        }
    }
    ctx->pc = 0x29D72Cu;
    // 0x29d72c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x29d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29d730: 0xc0a74c0  jal         func_29D300
    ctx->pc = 0x29D730u;
    SET_GPR_U32(ctx, 31, 0x29D738u);
    ctx->pc = 0x29D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D730u;
            // 0x29d734: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D300u;
    if (runtime->hasFunction(0x29D300u)) {
        auto targetFn = runtime->lookupFunction(0x29D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D738u; }
        if (ctx->pc != 0x29D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D300_0x29d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D738u; }
        if (ctx->pc != 0x29D738u) { return; }
    }
    ctx->pc = 0x29D738u;
label_29d738:
    // 0x29d738: 0x34049e37  ori         $a0, $zero, 0x9E37
    ctx->pc = 0x29d738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40503);
    // 0x29d73c: 0x11313a  dsrl        $a2, $s1, 4
    ctx->pc = 0x29d73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) >> 4);
    // 0x29d740: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x29d740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x29d744: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x29d744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d748: 0x34a579b1  ori         $a1, $a1, 0x79B1
    ctx->pc = 0x29d748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31153);
    // 0x29d74c: 0x6203f  dsra32      $a0, $a2, 0
    ctx->pc = 0x29d74cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29d750: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x29d750u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29d754: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x29d754u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x29d758: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x29d758u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x29d75c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29d75cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29d760: 0xe94019  .word       0x00E94019                   # multu       $a3, $t1 # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d760u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x29d764: 0x70a72818  mult1       $a1, $a1, $a3
    ctx->pc = 0x29d764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x29d768: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x29d768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29d76c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x29d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d770: 0x3810  mfhi        $a3
    ctx->pc = 0x29d770u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29d774: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x29d774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29d778: 0x70e83c88  pextlw      $a3, $a3, $t0
    ctx->pc = 0x29d778u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x29d77c: 0xa4202d  daddu       $a0, $a1, $a0
    ctx->pc = 0x29d77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
    // 0x29d780: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29d780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29d784: 0x87202d  daddu       $a0, $a0, $a3
    ctx->pc = 0x29d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 7));
    // 0x29d788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29D788u;
    {
        const bool branch_taken_0x29d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D788u;
            // 0x29d78c: 0x643824  and         $a3, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d788) {
            ctx->pc = 0x29D798u;
            goto label_29d798;
        }
    }
    ctx->pc = 0x29D790u;
label_29d790:
    // 0x29d790: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x29d790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29d794: 0x0  nop
    ctx->pc = 0x29d794u;
    // NOP
label_29d798:
    // 0x29d798: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x29d798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29d79c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29d79cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x29d7a0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x29d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x29d7a4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x29d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29d7a8: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x29d7a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d7ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D7ACu;
    {
        const bool branch_taken_0x29d7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d7ac) {
            ctx->pc = 0x29D7C0u;
            goto label_29d7c0;
        }
    }
    ctx->pc = 0x29D7B4u;
    // 0x29d7b4: 0x5624fff6  bnel        $s1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29D7B4u;
    {
        const bool branch_taken_0x29d7b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x29d7b4) {
            ctx->pc = 0x29D7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D7B4u;
            // 0x29d7b8: 0x64e40001  daddiu      $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d790;
        }
    }
    ctx->pc = 0x29D7BCu;
    // 0x29d7bc: 0x0  nop
    ctx->pc = 0x29d7bcu;
    // NOP
label_29d7c0:
    // 0x29d7c0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x29d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29d7c4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x29d7c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d7c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29d7cc: 0x2242026  xor         $a0, $s1, $a0
    ctx->pc = 0x29d7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    // 0x29d7d0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x29d7d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29d7d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29d7d8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x29d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x29d7dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d7e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29d7e4: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x29d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x29d7e8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29d7ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d7f0: 0xe4202d  daddu       $a0, $a3, $a0
    ctx->pc = 0x29d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 4));
    // 0x29d7f4: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x29d7f4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x29d7f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29d7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29d7fc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29d7fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x29d800: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x29d800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x29d804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29d808: 0xfc700000  sd          $s0, 0x0($v1)
    ctx->pc = 0x29d808u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 16));
    // 0x29d80c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D81Cu;
            // 0x29d820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D824u;
    // 0x29d824: 0x0  nop
    ctx->pc = 0x29d824u;
    // NOP
    // 0x29d828: 0x0  nop
    ctx->pc = 0x29d828u;
    // NOP
    // 0x29d82c: 0x0  nop
    ctx->pc = 0x29d82cu;
    // NOP
}
