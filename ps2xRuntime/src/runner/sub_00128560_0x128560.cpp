#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00128560
// Address: 0x128560 - 0x1285b8
void sub_00128560_0x128560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128560_0x128560");
#endif

    switch (ctx->pc) {
        case 0x12858cu: goto label_12858c;
        default: break;
    }

    ctx->pc = 0x128560u;

    // 0x128560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12856c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12856cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128574: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128578: 0x3c1000be  lui         $s0, 0xBE
    ctx->pc = 0x128578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)190 << 16));
    // 0x12857c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12857cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128580: 0xae00b880  sw          $zero, -0x4780($s0)
    ctx->pc = 0x128580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948992), GPR_U32(ctx, 0));
    // 0x128584: 0xc043296  jal         func_10CA58
    ctx->pc = 0x128584u;
    SET_GPR_U32(ctx, 31, 0x12858Cu);
    ctx->pc = 0x128588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128584u;
            // 0x128588: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA58u;
    if (runtime->hasFunction(0x10CA58u)) {
        auto targetFn = runtime->lookupFunction(0x10CA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12858Cu; }
        if (ctx->pc != 0x12858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CA58_0x10ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12858Cu; }
        if (ctx->pc != 0x12858Cu) { return; }
    }
    ctx->pc = 0x12858Cu;
label_12858c:
    // 0x12858c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12858cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128590: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x128590u;
    {
        const bool branch_taken_0x128590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x128590) {
            ctx->pc = 0x128594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128590u;
            // 0x128594: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1285A8u;
            goto label_1285a8;
        }
    }
    ctx->pc = 0x128598u;
    // 0x128598: 0x8e0fb880  lw          $t7, -0x4780($s0)
    ctx->pc = 0x128598u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948992)));
    // 0x12859c: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12859Cu;
    {
        const bool branch_taken_0x12859c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12859c) {
            ctx->pc = 0x1285A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12859Cu;
            // 0x1285a0: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1285A4u;
            goto label_1285a4;
        }
    }
    ctx->pc = 0x1285A4u;
label_1285a4:
    // 0x1285a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1285a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1285a8:
    // 0x1285a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1285a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1285ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1285acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1285b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1285B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1285B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285B0u;
            // 0x1285b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1285B8u;
}
