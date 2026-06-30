#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8670
// Address: 0x1d8670 - 0x1d8720
void sub_001D8670_0x1d8670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8670_0x1d8670");
#endif

    switch (ctx->pc) {
        case 0x1d86c0u: goto label_1d86c0;
        case 0x1d8700u: goto label_1d8700;
        default: break;
    }

    ctx->pc = 0x1d8670u;

    // 0x1d8670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8674: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1d8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d8678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d867c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8684: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x1d8684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x1d8688: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x1d8688u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d868c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D868Cu;
    {
        const bool branch_taken_0x1d868c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d868c) {
            ctx->pc = 0x1D869Cu;
            goto label_1d869c;
        }
    }
    ctx->pc = 0x1D8694u;
    // 0x1d8694: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D8694u;
    {
        const bool branch_taken_0x1d8694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8694u;
            // 0x1d8698: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8694) {
            ctx->pc = 0x1D8708u;
            goto label_1d8708;
        }
    }
    ctx->pc = 0x1D869Cu;
label_1d869c:
    // 0x1d869c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d86a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d86a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1d86a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1d86a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d86ac: 0x26061000  addiu       $a2, $s0, 0x1000
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x1d86b0: 0x26070ef0  addiu       $a3, $s0, 0xEF0
    ctx->pc = 0x1d86b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
    // 0x1d86b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d86b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86b8: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x1D86B8u;
    SET_GPR_U32(ctx, 31, 0x1D86C0u);
    ctx->pc = 0x1D86BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86B8u;
            // 0x1d86bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86C0u; }
        if (ctx->pc != 0x1D86C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86C0u; }
        if (ctx->pc != 0x1D86C0u) { return; }
    }
    ctx->pc = 0x1D86C0u;
label_1d86c0:
    // 0x1d86c0: 0xae020ea8  sw          $v0, 0xEA8($s0)
    ctx->pc = 0x1d86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3752), GPR_U32(ctx, 2));
    // 0x1d86c4: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1d86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1d86c8: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x1d86c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
    // 0x1d86cc: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1d86d0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1d86d4: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D86D4u;
    {
        const bool branch_taken_0x1d86d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d86d4) {
            ctx->pc = 0x1D8704u;
            goto label_1d8704;
        }
    }
    ctx->pc = 0x1D86DCu;
    // 0x1d86dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d86e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d86e4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1d86e8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d86ec: 0x26061040  addiu       $a2, $s0, 0x1040
    ctx->pc = 0x1d86ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
    // 0x1d86f0: 0x26070f00  addiu       $a3, $s0, 0xF00
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x1d86f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d86f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86f8: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x1D86F8u;
    SET_GPR_U32(ctx, 31, 0x1D8700u);
    ctx->pc = 0x1D86FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86F8u;
            // 0x1d86fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8700u; }
        if (ctx->pc != 0x1D8700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8700u; }
        if (ctx->pc != 0x1D8700u) { return; }
    }
    ctx->pc = 0x1D8700u;
label_1d8700:
    // 0x1d8700: 0xae020ea4  sw          $v0, 0xEA4($s0)
    ctx->pc = 0x1d8700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3748), GPR_U32(ctx, 2));
label_1d8704:
    // 0x1d8704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8708:
    // 0x1d8708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d870c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D870Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D870Cu;
            // 0x1d8710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8714u;
    // 0x1d8714: 0x0  nop
    ctx->pc = 0x1d8714u;
    // NOP
    // 0x1d8718: 0x0  nop
    ctx->pc = 0x1d8718u;
    // NOP
    // 0x1d871c: 0x0  nop
    ctx->pc = 0x1d871cu;
    // NOP
}
