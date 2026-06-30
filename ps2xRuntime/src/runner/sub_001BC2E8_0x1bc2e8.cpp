#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC2E8
// Address: 0x1bc2e8 - 0x1bc348
void sub_001BC2E8_0x1bc2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC2E8_0x1bc2e8");
#endif

    switch (ctx->pc) {
        case 0x1bc308u: goto label_1bc308;
        default: break;
    }

    ctx->pc = 0x1bc2e8u;

    // 0x1bc2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc2ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc2f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc2fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc300: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BC300u;
    SET_GPR_U32(ctx, 31, 0x1BC308u);
    ctx->pc = 0x1BC304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC300u;
            // 0x1bc304: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC308u; }
        if (ctx->pc != 0x1BC308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC308u; }
        if (ctx->pc != 0x1BC308u) { return; }
    }
    ctx->pc = 0x1BC308u;
label_1bc308:
    // 0x1bc308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc30c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC30Cu;
    {
        const bool branch_taken_0x1bc30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc30c) {
            ctx->pc = 0x1BC310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC30Cu;
            // 0x1bc310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC334u;
            goto label_1bc334;
        }
    }
    ctx->pc = 0x1BC314u;
    // 0x1bc314: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1bc314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc318: 0x286300d2  slti        $v1, $v1, 0xD2
    ctx->pc = 0x1bc318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)210) ? 1 : 0);
    // 0x1bc31c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC31Cu;
    {
        const bool branch_taken_0x1bc31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC31Cu;
            // 0x1bc320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc31c) {
            ctx->pc = 0x1BC330u;
            goto label_1bc330;
        }
    }
    ctx->pc = 0x1BC324u;
    // 0x1bc324: 0x90830027  lbu         $v1, 0x27($a0)
    ctx->pc = 0x1bc324u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x1bc328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc32c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1bc32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1bc330:
    // 0x1bc330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc334:
    // 0x1bc334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC33Cu;
            // 0x1bc340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC344u;
    // 0x1bc344: 0x0  nop
    ctx->pc = 0x1bc344u;
    // NOP
}
