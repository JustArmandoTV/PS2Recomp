#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE560
// Address: 0x1ce560 - 0x1ce5f0
void sub_001CE560_0x1ce560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE560_0x1ce560");
#endif

    switch (ctx->pc) {
        case 0x1ce5a4u: goto label_1ce5a4;
        case 0x1ce5c8u: goto label_1ce5c8;
        default: break;
    }

    ctx->pc = 0x1ce560u;

    // 0x1ce560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ce564: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ce564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ce568: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ce568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ce56c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ce56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ce570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ce574: 0x69880  sll         $s3, $a2, 2
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ce578: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ce578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ce57c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ce57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ce580: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ce580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce588: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ce58c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE58Cu;
    {
        const bool branch_taken_0x1ce58c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE58Cu;
            // 0x1ce590: 0x539023  subu        $s2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce58c) {
            ctx->pc = 0x1CE59Cu;
            goto label_1ce59c;
        }
    }
    ctx->pc = 0x1CE594u;
    // 0x1ce594: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CE594u;
    {
        const bool branch_taken_0x1ce594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE594u;
            // 0x1ce598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce594) {
            ctx->pc = 0x1CE5CCu;
            goto label_1ce5cc;
        }
    }
    ctx->pc = 0x1CE59Cu;
label_1ce59c:
    // 0x1ce59c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1CE59Cu;
    SET_GPR_U32(ctx, 31, 0x1CE5A4u);
    ctx->pc = 0x1CE5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE59Cu;
            // 0x1ce5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A4u; }
        if (ctx->pc != 0x1CE5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A4u; }
        if (ctx->pc != 0x1CE5A4u) { return; }
    }
    ctx->pc = 0x1CE5A4u;
label_1ce5a4:
    // 0x1ce5a4: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1ce5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce5a8: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE5A8u;
    {
        const bool branch_taken_0x1ce5a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1CE5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5A8u;
            // 0x1ce5ac: 0x250102a  slt         $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5a8) {
            ctx->pc = 0x1CE5B8u;
            goto label_1ce5b8;
        }
    }
    ctx->pc = 0x1CE5B0u;
    // 0x1ce5b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE5B0u;
    {
        const bool branch_taken_0x1ce5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5B0u;
            // 0x1ce5b4: 0x2932021  addu        $a0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5b0) {
            ctx->pc = 0x1CE5C0u;
            goto label_1ce5c0;
        }
    }
    ctx->pc = 0x1CE5B8u;
label_1ce5b8:
    // 0x1ce5b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE5B8u;
    {
        const bool branch_taken_0x1ce5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5B8u;
            // 0x1ce5bc: 0x2402fde1  addiu       $v0, $zero, -0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966753));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5b8) {
            ctx->pc = 0x1CE5CCu;
            goto label_1ce5cc;
        }
    }
    ctx->pc = 0x1CE5C0u;
label_1ce5c0:
    // 0x1ce5c0: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1CE5C0u;
    SET_GPR_U32(ctx, 31, 0x1CE5C8u);
    ctx->pc = 0x1CE5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5C0u;
            // 0x1ce5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5C8u; }
        if (ctx->pc != 0x1CE5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5C8u; }
        if (ctx->pc != 0x1CE5C8u) { return; }
    }
    ctx->pc = 0x1CE5C8u;
label_1ce5c8:
    // 0x1ce5c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ce5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce5cc:
    // 0x1ce5cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce5d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ce5d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce5d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ce5d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce5d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ce5d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce5dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ce5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5E4u;
            // 0x1ce5e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE5ECu;
    // 0x1ce5ec: 0x0  nop
    ctx->pc = 0x1ce5ecu;
    // NOP
}
