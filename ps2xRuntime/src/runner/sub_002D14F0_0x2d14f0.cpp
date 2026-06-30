#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D14F0
// Address: 0x2d14f0 - 0x2d1550
void sub_002D14F0_0x2d14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D14F0_0x2d14f0");
#endif

    switch (ctx->pc) {
        case 0x2d1514u: goto label_2d1514;
        case 0x2d1530u: goto label_2d1530;
        default: break;
    }

    ctx->pc = 0x2d14f0u;

    // 0x2d14f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d14f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d14f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d14fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d14fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1500: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x2d1500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d1504: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1504u;
    {
        const bool branch_taken_0x2d1504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1504) {
            ctx->pc = 0x2D1508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1504u;
            // 0x2d1508: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1518u;
            goto label_2d1518;
        }
    }
    ctx->pc = 0x2D150Cu;
    // 0x2d150c: 0xc04008c  jal         func_100230
    ctx->pc = 0x2D150Cu;
    SET_GPR_U32(ctx, 31, 0x2D1514u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1514u; }
        if (ctx->pc != 0x2D1514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1514u; }
        if (ctx->pc != 0x2D1514u) { return; }
    }
    ctx->pc = 0x2D1514u;
label_2d1514:
    // 0x2d1514: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d1514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2d1518:
    // 0x2d1518: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d1518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d151c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D151Cu;
    {
        const bool branch_taken_0x2d151c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d151c) {
            ctx->pc = 0x2D1520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D151Cu;
            // 0x2d1520: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1534u;
            goto label_2d1534;
        }
    }
    ctx->pc = 0x2D1524u;
    // 0x2d1524: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2d1524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2d1528: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2D1528u;
    SET_GPR_U32(ctx, 31, 0x2D1530u);
    ctx->pc = 0x2D152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1528u;
            // 0x2d152c: 0x24a587b0  addiu       $a1, $a1, -0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1530u; }
        if (ctx->pc != 0x2D1530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1530u; }
        if (ctx->pc != 0x2D1530u) { return; }
    }
    ctx->pc = 0x2D1530u;
label_2d1530:
    // 0x2d1530: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d1530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2d1534:
    // 0x2d1534: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d1534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d1538: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d1538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d153c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d153cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d1540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1548: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1548u;
            // 0x2d154c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1550u;
}
