#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048E510
// Address: 0x48e510 - 0x48e630
void sub_0048E510_0x48e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E510_0x48e510");
#endif

    switch (ctx->pc) {
        case 0x48e564u: goto label_48e564;
        case 0x48e570u: goto label_48e570;
        case 0x48e58cu: goto label_48e58c;
        case 0x48e5c0u: goto label_48e5c0;
        default: break;
    }

    ctx->pc = 0x48e510u;

    // 0x48e510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x48e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x48e514: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x48e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x48e518: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x48e51c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x48e520: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48e524: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x48e524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48e52c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x48e52cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48e530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48e534: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48e534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48e53c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E53Cu;
    {
        const bool branch_taken_0x48e53c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E53Cu;
            // 0x48e540: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e53c) {
            ctx->pc = 0x48E54Cu;
            goto label_48e54c;
        }
    }
    ctx->pc = 0x48E544u;
    // 0x48e544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48E544u;
    {
        const bool branch_taken_0x48e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E544u;
            // 0x48e548: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e544) {
            ctx->pc = 0x48E554u;
            goto label_48e554;
        }
    }
    ctx->pc = 0x48E54Cu;
label_48e54c:
    // 0x48e54c: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x48e54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x48e550: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x48e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_48e554:
    // 0x48e554: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x48e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x48e558: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x48E558u;
    {
        const bool branch_taken_0x48e558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E558u;
            // 0x48e55c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e558) {
            ctx->pc = 0x48E5F8u;
            goto label_48e5f8;
        }
    }
    ctx->pc = 0x48E560u;
    // 0x48e560: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48e560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e564:
    // 0x48e564: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48e564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48e568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e56c: 0x0  nop
    ctx->pc = 0x48e56cu;
    // NOP
label_48e570:
    // 0x48e570: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x48e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x48e574: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x48e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48e578: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48e57c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x48e580: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48e584: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x48E584u;
    SET_GPR_U32(ctx, 31, 0x48E58Cu);
    ctx->pc = 0x48E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E584u;
            // 0x48e588: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E58Cu; }
        if (ctx->pc != 0x48E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E58Cu; }
        if (ctx->pc != 0x48E58Cu) { return; }
    }
    ctx->pc = 0x48E58Cu;
label_48e58c:
    // 0x48e58c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x48E58Cu;
    {
        const bool branch_taken_0x48e58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e58c) {
            ctx->pc = 0x48E590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E58Cu;
            // 0x48e590: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E5C8u;
            goto label_48e5c8;
        }
    }
    ctx->pc = 0x48E594u;
    // 0x48e594: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x48e594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x48e598: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x48e598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x48e59c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x48e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x48e5a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x48e5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e5a4: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x48e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x48e5a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48e5ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48e5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48e5b4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x48e5b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e5b8: 0xc12398c  jal         func_48E630
    ctx->pc = 0x48E5B8u;
    SET_GPR_U32(ctx, 31, 0x48E5C0u);
    ctx->pc = 0x48E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E5B8u;
            // 0x48e5bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E5C0u; }
        if (ctx->pc != 0x48E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E5C0u; }
        if (ctx->pc != 0x48E5C0u) { return; }
    }
    ctx->pc = 0x48E5C0u;
label_48e5c0:
    // 0x48e5c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x48E5C0u;
    {
        const bool branch_taken_0x48e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E5C0u;
            // 0x48e5c4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5c0) {
            ctx->pc = 0x48E600u;
            goto label_48e600;
        }
    }
    ctx->pc = 0x48E5C8u;
label_48e5c8:
    // 0x48e5c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48e5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x48e5cc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x48e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x48e5d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x48e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48e5d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x48e5d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e5d8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x48e5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48e5dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x48E5DCu;
    {
        const bool branch_taken_0x48e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E5DCu;
            // 0x48e5e0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5dc) {
            ctx->pc = 0x48E570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e570;
        }
    }
    ctx->pc = 0x48E5E4u;
    // 0x48e5e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x48e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x48e5e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48e5e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x48e5ec: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x48e5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48e5f0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x48E5F0u;
    {
        const bool branch_taken_0x48e5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E5F0u;
            // 0x48e5f4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5f0) {
            ctx->pc = 0x48E564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e564;
        }
    }
    ctx->pc = 0x48E5F8u;
label_48e5f8:
    // 0x48e5f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48e5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e5fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x48e5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_48e600:
    // 0x48e600: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48e600u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48e604: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48e604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48e608: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48e608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e60c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48e60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48e610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e61c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E61Cu;
            // 0x48e620: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E624u;
    // 0x48e624: 0x0  nop
    ctx->pc = 0x48e624u;
    // NOP
    // 0x48e628: 0x0  nop
    ctx->pc = 0x48e628u;
    // NOP
    // 0x48e62c: 0x0  nop
    ctx->pc = 0x48e62cu;
    // NOP
}
