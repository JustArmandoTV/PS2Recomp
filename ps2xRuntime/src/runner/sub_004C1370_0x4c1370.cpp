#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C1370
// Address: 0x4c1370 - 0x4c13d0
void sub_004C1370_0x4c1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1370_0x4c1370");
#endif

    switch (ctx->pc) {
        case 0x4c13b0u: goto label_4c13b0;
        default: break;
    }

    ctx->pc = 0x4c1370u;

    // 0x4c1370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c1370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c1374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c1378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c137c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c137cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1380: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4C1380u;
    {
        const bool branch_taken_0x4c1380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1380) {
            ctx->pc = 0x4C1384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1380u;
            // 0x4c1384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C13B4u;
            goto label_4c13b4;
        }
    }
    ctx->pc = 0x4C1388u;
    // 0x4c1388: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c138c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4c138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4c1390: 0x24421390  addiu       $v0, $v0, 0x1390
    ctx->pc = 0x4c1390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
    // 0x4c1394: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4c1394u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4c1398: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c1398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c139c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c13a0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C13A0u;
    {
        const bool branch_taken_0x4c13a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4C13A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C13A0u;
            // 0x4c13a4: 0xac40a9f0  sw          $zero, -0x5610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c13a0) {
            ctx->pc = 0x4C13B0u;
            goto label_4c13b0;
        }
    }
    ctx->pc = 0x4C13A8u;
    // 0x4c13a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C13A8u;
    SET_GPR_U32(ctx, 31, 0x4C13B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C13B0u; }
        if (ctx->pc != 0x4C13B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C13B0u; }
        if (ctx->pc != 0x4C13B0u) { return; }
    }
    ctx->pc = 0x4C13B0u;
label_4c13b0:
    // 0x4c13b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c13b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c13b4:
    // 0x4c13b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c13b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c13b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c13b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c13bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C13BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C13C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C13BCu;
            // 0x4c13c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C13C4u;
    // 0x4c13c4: 0x0  nop
    ctx->pc = 0x4c13c4u;
    // NOP
    // 0x4c13c8: 0x0  nop
    ctx->pc = 0x4c13c8u;
    // NOP
    // 0x4c13cc: 0x0  nop
    ctx->pc = 0x4c13ccu;
    // NOP
}
