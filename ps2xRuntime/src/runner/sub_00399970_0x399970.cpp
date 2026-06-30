#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399970
// Address: 0x399970 - 0x399a80
void sub_00399970_0x399970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399970_0x399970");
#endif

    switch (ctx->pc) {
        case 0x399994u: goto label_399994;
        case 0x3999a0u: goto label_3999a0;
        case 0x3999d0u: goto label_3999d0;
        case 0x3999fcu: goto label_3999fc;
        case 0x399a3cu: goto label_399a3c;
        case 0x399a64u: goto label_399a64;
        default: break;
    }

    ctx->pc = 0x399970u;

    // 0x399970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x399970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x399974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x399978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39997c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x399980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x399980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x399988: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x399988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39998c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x39998cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x399990: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x399990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_399994:
    // 0x399994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399998: 0xc0e66a0  jal         func_399A80
    ctx->pc = 0x399998u;
    SET_GPR_U32(ctx, 31, 0x3999A0u);
    ctx->pc = 0x39999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399998u;
            // 0x39999c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399A80u;
    if (runtime->hasFunction(0x399A80u)) {
        auto targetFn = runtime->lookupFunction(0x399A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3999A0u; }
        if (ctx->pc != 0x3999A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399A80_0x399a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3999A0u; }
        if (ctx->pc != 0x3999A0u) { return; }
    }
    ctx->pc = 0x3999A0u;
label_3999a0:
    // 0x3999a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3999a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3999a4: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x3999a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3999a8: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3999A8u;
    {
        const bool branch_taken_0x3999a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3999a8) {
            ctx->pc = 0x399994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_399994;
        }
    }
    ctx->pc = 0x3999B0u;
    // 0x3999b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3999b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3999b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3999b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3999b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3999b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3999bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3999bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3999c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3999C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3999C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3999C0u;
            // 0x3999c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3999C8u;
    // 0x3999c8: 0x0  nop
    ctx->pc = 0x3999c8u;
    // NOP
    // 0x3999cc: 0x0  nop
    ctx->pc = 0x3999ccu;
    // NOP
label_3999d0:
    // 0x3999d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3999d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3999d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3999d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3999d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3999d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3999dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3999dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3999e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3999e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3999e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3999e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3999e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3999e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3999ec: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3999ECu;
    {
        const bool branch_taken_0x3999ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3999F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3999ECu;
            // 0x3999f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999ec) {
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x3999F4u;
    // 0x3999f4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x3999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3999f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3999f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3999fc:
    // 0x3999fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3999fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x399a00: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x399A00u;
    {
        const bool branch_taken_0x399a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x399a00) {
            ctx->pc = 0x399A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399A00u;
            // 0x399a04: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399A4Cu;
            goto label_399a4c;
        }
    }
    ctx->pc = 0x399A08u;
    // 0x399a08: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x399a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x399a0c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x399a0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x399a10: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x399A10u;
    {
        const bool branch_taken_0x399a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x399a10) {
            ctx->pc = 0x399A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399A10u;
            // 0x399a14: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399A40u;
            goto label_399a40;
        }
    }
    ctx->pc = 0x399A18u;
    // 0x399a18: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x399a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x399a1c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x399a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x399a20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x399a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x399a24: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x399a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x399a28: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x399a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x399a2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x399a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x399a30: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x399a30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x399a34: 0xc04a508  jal         func_129420
    ctx->pc = 0x399A34u;
    SET_GPR_U32(ctx, 31, 0x399A3Cu);
    ctx->pc = 0x399A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399A34u;
            // 0x399a38: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399A3Cu; }
        if (ctx->pc != 0x399A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399A3Cu; }
        if (ctx->pc != 0x399A3Cu) { return; }
    }
    ctx->pc = 0x399A3Cu;
label_399a3c:
    // 0x399a3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x399a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_399a40:
    // 0x399a40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x399a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x399a44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x399A44u;
    {
        const bool branch_taken_0x399a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399A44u;
            // 0x399a48: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a44) {
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x399A4Cu;
label_399a4c:
    // 0x399a4c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x399a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x399a50: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x399A50u;
    {
        const bool branch_taken_0x399a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399A50u;
            // 0x399a54: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a50) {
            ctx->pc = 0x3999FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3999fc;
        }
    }
    ctx->pc = 0x399A58u;
label_399a58:
    // 0x399a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a5c: 0xc0e66a0  jal         func_399A80
    ctx->pc = 0x399A5Cu;
    SET_GPR_U32(ctx, 31, 0x399A64u);
    ctx->pc = 0x399A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399A5Cu;
            // 0x399a60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399A80u;
    if (runtime->hasFunction(0x399A80u)) {
        auto targetFn = runtime->lookupFunction(0x399A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399A64u; }
        if (ctx->pc != 0x399A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399A80_0x399a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399A64u; }
        if (ctx->pc != 0x399A64u) { return; }
    }
    ctx->pc = 0x399A64u;
label_399a64:
    // 0x399a64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399a70: 0x3e00008  jr          $ra
    ctx->pc = 0x399A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399A70u;
            // 0x399a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399A78u;
    // 0x399a78: 0x0  nop
    ctx->pc = 0x399a78u;
    // NOP
    // 0x399a7c: 0x0  nop
    ctx->pc = 0x399a7cu;
    // NOP
}
