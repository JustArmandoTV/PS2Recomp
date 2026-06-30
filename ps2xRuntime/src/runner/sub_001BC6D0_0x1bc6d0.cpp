#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC6D0
// Address: 0x1bc6d0 - 0x1bc740
void sub_001BC6D0_0x1bc6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC6D0_0x1bc6d0");
#endif

    switch (ctx->pc) {
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc710u: goto label_1bc710;
        default: break;
    }

    ctx->pc = 0x1bc6d0u;

    // 0x1bc6d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bc6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bc6d4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1bc6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1bc6d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bc6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6dc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1bc6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1bc6e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bc6e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bc6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1bc6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1bc6f0: 0xc06f182  jal         func_1BC608
    ctx->pc = 0x1BC6F0u;
    SET_GPR_U32(ctx, 31, 0x1BC6F8u);
    ctx->pc = 0x1BC6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6F0u;
            // 0x1bc6f4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC608u;
    if (runtime->hasFunction(0x1BC608u)) {
        auto targetFn = runtime->lookupFunction(0x1BC608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6F8u; }
        if (ctx->pc != 0x1BC6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC608_0x1bc608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6F8u; }
        if (ctx->pc != 0x1BC6F8u) { return; }
    }
    ctx->pc = 0x1BC6F8u;
label_1bc6f8:
    // 0x1bc6f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bc6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1bc6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bc700: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC700u;
    {
        const bool branch_taken_0x1bc700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC700u;
            // 0x1bc704: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc700) {
            ctx->pc = 0x1BC728u;
            goto label_1bc728;
        }
    }
    ctx->pc = 0x1BC708u;
    // 0x1bc708: 0xc06f232  jal         func_1BC8C8
    ctx->pc = 0x1BC708u;
    SET_GPR_U32(ctx, 31, 0x1BC710u);
    ctx->pc = 0x1BC8C8u;
    if (runtime->hasFunction(0x1BC8C8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC710u; }
        if (ctx->pc != 0x1BC710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC8C8_0x1bc8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC710u; }
        if (ctx->pc != 0x1BC710u) { return; }
    }
    ctx->pc = 0x1BC710u;
label_1bc710:
    // 0x1bc710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC710u;
    {
        const bool branch_taken_0x1bc710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC710u;
            // 0x1bc714: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc710) {
            ctx->pc = 0x1BC728u;
            goto label_1bc728;
        }
    }
    ctx->pc = 0x1BC718u;
    // 0x1bc718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc71c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1bc71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1bc720: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1bc720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1bc724: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bc728:
    // 0x1bc728: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1bc728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc72c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1bc72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc730: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bc730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc734: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC734u;
            // 0x1bc738: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC73Cu;
    // 0x1bc73c: 0x0  nop
    ctx->pc = 0x1bc73cu;
    // NOP
}
