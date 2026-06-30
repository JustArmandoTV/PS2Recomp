#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B6F0
// Address: 0x51b6f0 - 0x51b7e0
void sub_0051B6F0_0x51b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B6F0_0x51b6f0");
#endif

    switch (ctx->pc) {
        case 0x51b7bcu: goto label_51b7bc;
        case 0x51b7c4u: goto label_51b7c4;
        default: break;
    }

    ctx->pc = 0x51b6f0u;

    // 0x51b6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b6f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b6fc: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x51b6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x51b700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b704: 0x2442f9c0  addiu       $v0, $v0, -0x640
    ctx->pc = 0x51b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
    // 0x51b708: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51b708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51b70c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51b710: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51b710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51b714: 0x3c06c040  lui         $a2, 0xC040
    ctx->pc = 0x51b714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49216 << 16));
    // 0x51b718: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51b718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x51b71c: 0x24e7f970  addiu       $a3, $a3, -0x690
    ctx->pc = 0x51b71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965616));
    // 0x51b720: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x51b720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b724: 0x2463fa70  addiu       $v1, $v1, -0x590
    ctx->pc = 0x51b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965872));
    // 0x51b728: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x51b728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x51b72c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x51b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51b730: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x51b730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x51b734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51b734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b738: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x51b738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x51b73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51b73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b740: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x51b740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x51b744: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x51b744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x51b748: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x51b748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b74c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x51b750: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x51b750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x51b754: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x51b754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x51b758: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x51b758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x51b75c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x51b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x51b760: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x51b760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x51b764: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x51b764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x51b768: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x51b768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x51b76c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x51b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x51b770: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x51b770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x51b774: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x51b774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b778: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x51b778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x51b77c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x51b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x51b780: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x51b780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x51b784: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x51b784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x51b788: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x51b788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x51b78c: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x51b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x51b790: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x51b790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x51b794: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x51b794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x51b798: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x51b798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x51b79c: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x51b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x51b7a0: 0xa08000c0  sb          $zero, 0xC0($a0)
    ctx->pc = 0x51b7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b7a4: 0xac8200d4  sw          $v0, 0xD4($a0)
    ctx->pc = 0x51b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x51b7a8: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x51b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x51b7ac: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x51b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x51b7b0: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x51b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x51b7b4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x51B7B4u;
    SET_GPR_U32(ctx, 31, 0x51B7BCu);
    ctx->pc = 0x51B7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B7B4u;
            // 0x51b7b8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B7BCu; }
        if (ctx->pc != 0x51B7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B7BCu; }
        if (ctx->pc != 0x51B7BCu) { return; }
    }
    ctx->pc = 0x51B7BCu;
label_51b7bc:
    // 0x51b7bc: 0xc125fa0  jal         func_497E80
    ctx->pc = 0x51B7BCu;
    SET_GPR_U32(ctx, 31, 0x51B7C4u);
    ctx->pc = 0x51B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B7BCu;
            // 0x51b7c0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497E80u;
    if (runtime->hasFunction(0x497E80u)) {
        auto targetFn = runtime->lookupFunction(0x497E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B7C4u; }
        if (ctx->pc != 0x51B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E80_0x497e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B7C4u; }
        if (ctx->pc != 0x51B7C4u) { return; }
    }
    ctx->pc = 0x51B7C4u;
label_51b7c4:
    // 0x51b7c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x51B7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B7D0u;
            // 0x51b7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B7D8u;
    // 0x51b7d8: 0x0  nop
    ctx->pc = 0x51b7d8u;
    // NOP
    // 0x51b7dc: 0x0  nop
    ctx->pc = 0x51b7dcu;
    // NOP
}
