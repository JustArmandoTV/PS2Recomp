#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1408
// Address: 0x1b1408 - 0x1b1460
void sub_001B1408_0x1b1408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1408_0x1b1408");
#endif

    switch (ctx->pc) {
        case 0x1b1420u: goto label_1b1420;
        case 0x1b144cu: goto label_1b144c;
        default: break;
    }

    ctx->pc = 0x1b1408u;

    // 0x1b1408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b140c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1418: 0xc06c27a  jal         func_1B09E8
    ctx->pc = 0x1B1418u;
    SET_GPR_U32(ctx, 31, 0x1B1420u);
    ctx->pc = 0x1B141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1418u;
            // 0x1b141c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B09E8u;
    if (runtime->hasFunction(0x1B09E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B09E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1420u; }
        if (ctx->pc != 0x1B1420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09E8_0x1b09e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1420u; }
        if (ctx->pc != 0x1B1420u) { return; }
    }
    ctx->pc = 0x1B1420u;
label_1b1420:
    // 0x1b1420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b1420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1424: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b1424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1428: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b1428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b142c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1b1430: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1b1430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x1b1434: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1b1434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1b1438: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b1438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b143c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b143cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b1440: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b1440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b1444: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1B1444u;
    SET_GPR_U32(ctx, 31, 0x1B144Cu);
    ctx->pc = 0x1B1448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1444u;
            // 0x1b1448: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B144Cu; }
        if (ctx->pc != 0x1B144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B144Cu; }
        if (ctx->pc != 0x1B144Cu) { return; }
    }
    ctx->pc = 0x1B144Cu;
label_1b144c:
    // 0x1b144c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1458: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1458u;
            // 0x1b145c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1460u;
}
