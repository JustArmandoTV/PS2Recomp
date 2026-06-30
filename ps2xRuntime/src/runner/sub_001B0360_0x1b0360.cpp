#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0360
// Address: 0x1b0360 - 0x1b03e8
void sub_001B0360_0x1b0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0360_0x1b0360");
#endif

    switch (ctx->pc) {
        case 0x1b0378u: goto label_1b0378;
        case 0x1b0398u: goto label_1b0398;
        case 0x1b03d4u: goto label_1b03d4;
        default: break;
    }

    ctx->pc = 0x1b0360u;

    // 0x1b0360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0364: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b0368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b036c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0370: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B0370u;
    SET_GPR_U32(ctx, 31, 0x1B0378u);
    ctx->pc = 0x1B0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0370u;
            // 0x1b0374: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0378u; }
        if (ctx->pc != 0x1B0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0378u; }
        if (ctx->pc != 0x1B0378u) { return; }
    }
    ctx->pc = 0x1B0378u;
label_1b0378:
    // 0x1b0378: 0x8e022030  lw          $v0, 0x2030($s0)
    ctx->pc = 0x1b0378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
    // 0x1b037c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b037cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0380: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x1b0380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1b0384: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B0384u;
    {
        const bool branch_taken_0x1b0384 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0384u;
            // 0x1b0388: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0384) {
            ctx->pc = 0x1B03C4u;
            goto label_1b03c4;
        }
    }
    ctx->pc = 0x1B038Cu;
    // 0x1b038c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B038Cu;
    {
        const bool branch_taken_0x1b038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B038Cu;
            // 0x1b0390: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b038c) {
            ctx->pc = 0x1B03A8u;
            goto label_1b03a8;
        }
    }
    ctx->pc = 0x1B0394u;
    // 0x1b0394: 0x0  nop
    ctx->pc = 0x1b0394u;
    // NOP
label_1b0398:
    // 0x1b0398: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1b0398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b039c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B039Cu;
    {
        const bool branch_taken_0x1b039c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B039Cu;
            // 0x1b03a0: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b039c) {
            ctx->pc = 0x1B03C4u;
            goto label_1b03c4;
        }
    }
    ctx->pc = 0x1B03A4u;
    // 0x1b03a4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b03a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1b03a8:
    // 0x1b03a8: 0x0  nop
    ctx->pc = 0x1b03a8u;
    // NOP
    // 0x1b03ac: 0x0  nop
    ctx->pc = 0x1b03acu;
    // NOP
    // 0x1b03b0: 0x0  nop
    ctx->pc = 0x1b03b0u;
    // NOP
    // 0x1b03b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B03B4u;
    {
        const bool branch_taken_0x1b03b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b03b4) {
            ctx->pc = 0x1B03B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03B4u;
            // 0x1b03b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0398;
        }
    }
    ctx->pc = 0x1B03BCu;
    // 0x1b03bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b03c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b03c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b03c4:
    // 0x1b03c4: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x1b03c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x1b03c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b03c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03cc: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B03CCu;
    SET_GPR_U32(ctx, 31, 0x1B03D4u);
    ctx->pc = 0x1B03D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03CCu;
            // 0x1b03d0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03D4u; }
        if (ctx->pc != 0x1B03D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03D4u; }
        if (ctx->pc != 0x1B03D4u) { return; }
    }
    ctx->pc = 0x1B03D4u;
label_1b03d4:
    // 0x1b03d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b03d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b03d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b03d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b03dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b03e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B03E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B03E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03E0u;
            // 0x1b03e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B03E8u;
}
