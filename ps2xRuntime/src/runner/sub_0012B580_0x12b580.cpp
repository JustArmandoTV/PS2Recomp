#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B580
// Address: 0x12b580 - 0x12b5d0
void sub_0012B580_0x12b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B580_0x12b580");
#endif

    switch (ctx->pc) {
        case 0x12b5a4u: goto label_12b5a4;
        default: break;
    }

    ctx->pc = 0x12b580u;

    // 0x12b580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b58c: 0x3c1000be  lui         $s0, 0xBE
    ctx->pc = 0x12b58cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)190 << 16));
    // 0x12b590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b598: 0xae00b880  sw          $zero, -0x4780($s0)
    ctx->pc = 0x12b598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948992), GPR_U32(ctx, 0));
    // 0x12b59c: 0xc043298  jal         func_10CA60
    ctx->pc = 0x12B59Cu;
    SET_GPR_U32(ctx, 31, 0x12B5A4u);
    ctx->pc = 0x12B5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B59Cu;
            // 0x12b5a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5A4u; }
        if (ctx->pc != 0x12B5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CA60_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5A4u; }
        if (ctx->pc != 0x12B5A4u) { return; }
    }
    ctx->pc = 0x12B5A4u;
label_12b5a4:
    // 0x12b5a4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12b5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b5a8: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B5A8u;
    {
        const bool branch_taken_0x12b5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b5a8) {
            ctx->pc = 0x12B5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5A8u;
            // 0x12b5ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B5C0u;
            goto label_12b5c0;
        }
    }
    ctx->pc = 0x12B5B0u;
    // 0x12b5b0: 0x8e0fb880  lw          $t7, -0x4780($s0)
    ctx->pc = 0x12b5b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948992)));
    // 0x12b5b4: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12B5B4u;
    {
        const bool branch_taken_0x12b5b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b5b4) {
            ctx->pc = 0x12B5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5B4u;
            // 0x12b5b8: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B5BCu;
            goto label_12b5bc;
        }
    }
    ctx->pc = 0x12B5BCu;
label_12b5bc:
    // 0x12b5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b5c0:
    // 0x12b5c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b5c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5C8u;
            // 0x12b5cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B5D0u;
}
