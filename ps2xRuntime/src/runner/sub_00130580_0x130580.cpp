#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130580
// Address: 0x130580 - 0x1305e0
void sub_00130580_0x130580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130580_0x130580");
#endif

    switch (ctx->pc) {
        case 0x1305acu: goto label_1305ac;
        default: break;
    }

    ctx->pc = 0x130580u;

    // 0x130580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13058c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13058cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130594: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130598: 0x3c1000be  lui         $s0, 0xBE
    ctx->pc = 0x130598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)190 << 16));
    // 0x13059c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13059cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305a0: 0xae00b880  sw          $zero, -0x4780($s0)
    ctx->pc = 0x1305a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948992), GPR_U32(ctx, 0));
    // 0x1305a4: 0xc04324a  jal         func_10C928
    ctx->pc = 0x1305A4u;
    SET_GPR_U32(ctx, 31, 0x1305ACu);
    ctx->pc = 0x1305A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1305A4u;
            // 0x1305a8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C928u;
    if (runtime->hasFunction(0x10C928u)) {
        auto targetFn = runtime->lookupFunction(0x10C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305ACu; }
        if (ctx->pc != 0x1305ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C928_0x10c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305ACu; }
        if (ctx->pc != 0x1305ACu) { return; }
    }
    ctx->pc = 0x1305ACu;
label_1305ac:
    // 0x1305ac: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1305acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305b0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1305b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1305b4: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1305B4u;
    {
        const bool branch_taken_0x1305b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x1305B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1305B4u;
            // 0x1305b8: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305b4) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x1305BCu;
    // 0x1305bc: 0x8e0fb880  lw          $t7, -0x4780($s0)
    ctx->pc = 0x1305bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948992)));
    // 0x1305c0: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1305C0u;
    {
        const bool branch_taken_0x1305c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1305c0) {
            ctx->pc = 0x1305C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1305C0u;
            // 0x1305c4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x1305C8u;
label_1305c8:
    // 0x1305c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1305c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1305cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1305ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1305d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1305d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1305d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1305D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1305D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1305D4u;
            // 0x1305d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1305DCu;
    // 0x1305dc: 0x0  nop
    ctx->pc = 0x1305dcu;
    // NOP
}
